#include "recomp.h"
#include "rec_mod.h"

void f_f44bb0(void) {
  LOAD_REGS();
L_f44bb0: /* f44bb0: mov eax, ecx */
  eax = ecx;
/* f44bb2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f44bb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f44bb8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f44bba: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* f44bbd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f44bc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f44be0(void) {
  LOAD_REGS();
L_f44be0: /* f44be0: mov eax, 0xf5c718 */
  eax = 0xf5c718u;
/* f44be5: ret  */
  esp += 4; SPILL(); return;
}

void f_f44c00(void) {
  LOAD_REGS();
L_f44c00: /* f44c00: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f44c05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f44c07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f44c0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f44c0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44c13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f44c14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f44c18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f44c1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f44c1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f44c1d: push 0xf5c718 */
  { uint32_t v = 0xf5c718u; esp -= 4; W32(esp, v); }
/* f44c22: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf44c28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f44c28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f44c2b: ret  */
  esp += 4; SPILL(); return;
}

void f_f44c40(void) {
  LOAD_REGS();
L_f44c40: /* f44c40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f44c44: ret  */
  esp += 4; SPILL(); return;
}

void f_f44c60(void) {
  LOAD_REGS();
L_f44c60: /* f44c60: mov eax, ecx */
  eax = ecx;
/* f44c62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f44c66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f44c68: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f44c6a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* f44c6d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f44c70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f44c90(void) {
  LOAD_REGS();
L_f44c90: /* f44c90: mov eax, 0xf5cc48 */
  eax = 0xf5cc48u;
/* f44c95: ret  */
  esp += 4; SPILL(); return;
}

void f_f44cb0(void) {
  LOAD_REGS();
L_f44cb0: /* f44cb0: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f44cb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f44cb7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f44cbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f44cbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44cc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44cc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f44cc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f44cc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f44cca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f44ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f44ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f44ccd: push 0xf5cc48 */
  { uint32_t v = 0xf5cc48u; esp -= 4; W32(esp, v); }
/* f44cd2: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf44cd8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f44cd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f44cdb: ret  */
  esp += 4; SPILL(); return;
}

void f_f44cf0(void) {
  LOAD_REGS();
L_f44cf0: /* f44cf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f44cf4: ret  */
  esp += 4; SPILL(); return;
}

void f_f44d10(void) {
  LOAD_REGS();
L_f44d10: /* f44d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f44d12: push 0xf50f78 */
  { uint32_t v = 0xf50f78u; esp -= 4; W32(esp, v); }
/* f44d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f44d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f44d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f44d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f44d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f44d27: mov esi, ecx */
  esi = ecx;
/* f44d29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f44d2d: mov dword ptr [esi], 0xf55380 */
  W32((uint32_t)(esi), 0xf55380u);
/* f44d33: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f44d3b: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf44d41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f44d41: mov ecx, esi */
  ecx = esi;
/* f44d43: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f44d4b: call 0xf41113 */
  esp -= 4; W32(esp, 0xf44d50u); SPILL(); f_f41113(); if (g_unwind) return; RELOAD();
/* f44d50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f44d54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f44d55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f44d5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f44d5f: ret  */
  esp += 4; SPILL(); return;
}

void f_f44d80(void) {
  LOAD_REGS();
L_f44d80: /* f44d80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f44d81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f44d82: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* f44d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f44d87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f44d88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f44d89: mov ebx, ecx */
  ebx = ecx;
/* f44d8b: call 0xf41366 */
  esp -= 4; W32(esp, 0xf44d90u); SPILL(); f_f41366(); if (g_unwind) return; RELOAD();
/* f44d90: mov dword ptr [ebx], 0xf55380 */
  W32((uint32_t)(ebx), 0xf55380u);
/* f44d96: mov al, byte ptr [ebp + 0xe0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe0u))) & 0xffu);
/* f44d9c: mov byte ptr [ebx + 0xe0], al */
  W8((uint32_t)(ebx + 0xe0u), (eax & 0xffu));
/* f44da2: mov cl, byte ptr [ebp + 0xe1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe1u))) & 0xffu);
/* f44da8: mov byte ptr [ebx + 0xe1], cl */
  W8((uint32_t)(ebx + 0xe1u), (ecx & 0xffu));
/* f44dae: mov dl, byte ptr [ebp + 0xe2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe2u))) & 0xffu);
/* f44db4: mov byte ptr [ebx + 0xe2], dl */
  W8((uint32_t)(ebx + 0xe2u), (edx & 0xffu));
/* f44dba: mov al, byte ptr [ebp + 0xe3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe3u))) & 0xffu);
/* f44dc0: mov byte ptr [ebx + 0xe3], al */
  W8((uint32_t)(ebx + 0xe3u), (eax & 0xffu));
/* f44dc6: mov cl, byte ptr [ebp + 0xe4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe4u))) & 0xffu);
/* f44dcc: mov byte ptr [ebx + 0xe4], cl */
  W8((uint32_t)(ebx + 0xe4u), (ecx & 0xffu));
/* f44dd2: mov dl, byte ptr [ebp + 0xe5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe5u))) & 0xffu);
/* f44dd8: mov byte ptr [ebx + 0xe5], dl */
  W8((uint32_t)(ebx + 0xe5u), (edx & 0xffu));
/* f44dde: mov al, byte ptr [ebp + 0xe6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe6u))) & 0xffu);
/* f44de4: mov byte ptr [ebx + 0xe6], al */
  W8((uint32_t)(ebx + 0xe6u), (eax & 0xffu));
/* f44dea: mov cl, byte ptr [ebp + 0xe7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe7u))) & 0xffu);
/* f44df0: mov byte ptr [ebx + 0xe7], cl */
  W8((uint32_t)(ebx + 0xe7u), (ecx & 0xffu));
/* f44df6: mov dl, byte ptr [ebp + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe8u))) & 0xffu);
/* f44dfc: mov byte ptr [ebx + 0xe8], dl */
  W8((uint32_t)(ebx + 0xe8u), (edx & 0xffu));
/* f44e02: mov al, byte ptr [ebp + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe9u))) & 0xffu);
/* f44e08: mov byte ptr [ebx + 0xe9], al */
  W8((uint32_t)(ebx + 0xe9u), (eax & 0xffu));
/* f44e0e: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* f44e14: mov dword ptr [ebx + 0xec], ecx */
  W32((uint32_t)(ebx + 0xecu), ecx);
/* f44e1a: lea esi, [ebp + 0xf0] */
  esi = (uint32_t)(ebp + 0xf0u);
/* f44e20: lea edi, [ebx + 0xf0] */
  edi = (uint32_t)(ebx + 0xf0u);
/* f44e26: mov ecx, 0x200 */
  ecx = 0x200u;
/* f44e2b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f44e2d: mov edx, dword ptr [ebp + 0x8f0] */
  edx = R32((uint32_t)(ebp + 0x8f0u));
/* f44e33: mov dword ptr [ebx + 0x8f0], edx */
  W32((uint32_t)(ebx + 0x8f0u), edx);
/* f44e39: lea esi, [ebp + 0x8f4] */
  esi = (uint32_t)(ebp + 0x8f4u);
/* f44e3f: lea edi, [ebx + 0x8f4] */
  edi = (uint32_t)(ebx + 0x8f4u);
/* f44e45: mov ecx, 0x101 */
  ecx = 0x101u;
/* f44e4a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f44e4c: lea esi, [ebp + 0xcf8] */
  esi = (uint32_t)(ebp + 0xcf8u);
/* f44e52: lea edi, [ebx + 0xcf8] */
  edi = (uint32_t)(ebx + 0xcf8u);
/* f44e58: mov ecx, 0x180 */
  ecx = 0x180u;
/* f44e5d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f44e5f: mov al, byte ptr [ebp + 0x12f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x12f8u))) & 0xffu);
/* f44e65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f44e66: mov byte ptr [ebx + 0x12f8], al */
  W8((uint32_t)(ebx + 0x12f8u), (eax & 0xffu));
/* f44e6c: mov ecx, dword ptr [ebp + 0x12fc] */
  ecx = R32((uint32_t)(ebp + 0x12fcu));
/* f44e72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f44e73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f44e74: mov dword ptr [ebx + 0x12fc], ecx */
  W32((uint32_t)(ebx + 0x12fcu), ecx);
/* f44e7a: mov eax, ebx */
  eax = ebx;
/* f44e7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f44e7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f44ec0(void) {
  LOAD_REGS();
L_f44ec0: /* f44ec0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f44ec1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f44ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f44ec3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f44ec4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f44ec8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f44ec9: mov esi, ecx */
  esi = ecx;
/* f44ecb: call 0xf410a5 */
  esp -= 4; W32(esp, 0xf44ed0u); SPILL(); f_f410a5(); if (g_unwind) return; RELOAD();
/* f44ed0: mov al, byte ptr [edi + 0xe0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe0u))) & 0xffu);
/* f44ed6: mov byte ptr [esi + 0xe0], al */
  W8((uint32_t)(esi + 0xe0u), (eax & 0xffu));
/* f44edc: mov cl, byte ptr [edi + 0xe1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe1u))) & 0xffu);
/* f44ee2: mov byte ptr [esi + 0xe1], cl */
  W8((uint32_t)(esi + 0xe1u), (ecx & 0xffu));
/* f44ee8: mov dl, byte ptr [edi + 0xe2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe2u))) & 0xffu);
/* f44eee: mov byte ptr [esi + 0xe2], dl */
  W8((uint32_t)(esi + 0xe2u), (edx & 0xffu));
/* f44ef4: mov al, byte ptr [edi + 0xe3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe3u))) & 0xffu);
/* f44efa: mov byte ptr [esi + 0xe3], al */
  W8((uint32_t)(esi + 0xe3u), (eax & 0xffu));
/* f44f00: mov cl, byte ptr [edi + 0xe4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe4u))) & 0xffu);
/* f44f06: mov byte ptr [esi + 0xe4], cl */
  W8((uint32_t)(esi + 0xe4u), (ecx & 0xffu));
/* f44f0c: mov dl, byte ptr [edi + 0xe5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe5u))) & 0xffu);
/* f44f12: mov byte ptr [esi + 0xe5], dl */
  W8((uint32_t)(esi + 0xe5u), (edx & 0xffu));
/* f44f18: mov al, byte ptr [edi + 0xe6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe6u))) & 0xffu);
/* f44f1e: mov byte ptr [esi + 0xe6], al */
  W8((uint32_t)(esi + 0xe6u), (eax & 0xffu));
/* f44f24: mov cl, byte ptr [edi + 0xe7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe7u))) & 0xffu);
/* f44f2a: mov byte ptr [esi + 0xe7], cl */
  W8((uint32_t)(esi + 0xe7u), (ecx & 0xffu));
/* f44f30: mov dl, byte ptr [edi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe8u))) & 0xffu);
/* f44f36: mov byte ptr [esi + 0xe8], dl */
  W8((uint32_t)(esi + 0xe8u), (edx & 0xffu));
/* f44f3c: mov al, byte ptr [edi + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe9u))) & 0xffu);
/* f44f42: mov byte ptr [esi + 0xe9], al */
  W8((uint32_t)(esi + 0xe9u), (eax & 0xffu));
/* f44f48: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* f44f4e: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* f44f54: mov ecx, edi */
  ecx = edi;
/* f44f56: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* f44f5c: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f44f5e: mov edx, 0x100 */
  edx = 0x100u;
L_f44f63: /* f44f63: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* f44f66: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f44f68: mov ebx, dword ptr [ecx + eax + 4] */
  ebx = R32((uint32_t)(ecx + eax + 0x4u));
/* f44f6c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f44f6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f44f72: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* f44f73: jne 0xf44f63 */
  if (!zf) goto L_f44f63;
L_f44f75: /* f44f75: mov edx, dword ptr [edi + 0x8f0] */
  edx = R32((uint32_t)(edi + 0x8f0u));
/* f44f7b: mov dword ptr [esi + 0x8f0], edx */
  W32((uint32_t)(esi + 0x8f0u), edx);
/* f44f81: lea eax, [esi + 0x8f4] */
  eax = (uint32_t)(esi + 0x8f4u);
/* f44f87: mov ebp, 0x404 */
  ebp = 0x404u;
/* f44f8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f44f90: /* f44f90: mov dl, byte ptr [eax + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx))) & 0xffu);
/* f44f93: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f44f95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f44f96: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* f44f97: jne 0xf44f90 */
  if (!zf) goto L_f44f90;
L_f44f99: /* f44f99: lea eax, [esi + 0xcf8] */
  eax = (uint32_t)(esi + 0xcf8u);
/* f44f9f: mov ebp, 0x600 */
  ebp = 0x600u;
L_f44fa4: /* f44fa4: mov dl, byte ptr [eax + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx))) & 0xffu);
/* f44fa7: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f44fa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f44faa: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* f44fab: jne 0xf44fa4 */
  if (!zf) goto L_f44fa4;
L_f44fad: /* f44fad: mov al, byte ptr [edi + 0x12f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x12f8u))) & 0xffu);
/* f44fb3: mov byte ptr [esi + 0x12f8], al */
  W8((uint32_t)(esi + 0x12f8u), (eax & 0xffu));
/* f44fb9: mov ecx, dword ptr [edi + 0x12fc] */
  ecx = R32((uint32_t)(edi + 0x12fcu));
/* f44fbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f44fc0: mov dword ptr [esi + 0x12fc], ecx */
  W32((uint32_t)(esi + 0x12fcu), ecx);
/* f44fc6: mov eax, esi */
  eax = esi;
/* f44fc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f44fc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f44fca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f44fcb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45020(void) {
  LOAD_REGS();
L_f45020: /* f45020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45021: mov esi, ecx */
  esi = ecx;
/* f45023: call 0xf4114f */
  esp -= 4; W32(esp, 0xf45028u); SPILL(); f_f4114f(); if (g_unwind) return; RELOAD();
/* f45028: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4502d: je 0xf4503e */
  if (zf) goto L_f4503e;
L_f4502f: /* f4502f: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f45034: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45035: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf4503bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f4503b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4503e: /* f4503e: mov eax, esi */
  eax = esi;
/* f45040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45041: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45060(void) {
  LOAD_REGS();
L_f45060: /* f45060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45061: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f45065: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45069: mov esi, ecx */
  esi = ecx;
/* f4506b: je 0xf450a0 */
  if (zf) goto L_f450a0;
L_f4506d: /* f4506d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f45070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45071: push 0xf4114f */
  { uint32_t v = 0xf4114fu; esp -= 4; W32(esp, v); }
/* f45076: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f45079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4507a: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f4507f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45080: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf45085u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f45085: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45088: je 0xf45098 */
  if (zf) goto L_f45098;
L_f4508a: /* f4508a: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f45090: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f45092: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f45094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45095: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf45098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f45098: /* f45098: mov eax, edi */
  eax = edi;
/* f4509a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4509b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4509c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4509d: ret 4 */
  esp += 8; SPILL(); return;
L_f450a0: /* f450a0: mov ecx, esi */
  ecx = esi;
/* f450a2: call 0xf4114f */
  esp -= 4; W32(esp, 0xf450a7u); SPILL(); f_f4114f(); if (g_unwind) return; RELOAD();
/* f450a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f450aa: je 0xf450bb */
  if (zf) goto L_f450bb;
L_f450ac: /* f450ac: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f450b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f450b2: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf450b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f450b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f450bb: /* f450bb: mov eax, esi */
  eax = esi;
/* f450bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f450be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f450bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f450f0(void) {
  LOAD_REGS();
L_f450f0: /* f450f0: mov eax, 0xf5e108 */
  eax = 0xf5e108u;
/* f450f5: ret  */
  esp += 4; SPILL(); return;
}

void f_f45110(void) {
  LOAD_REGS();
L_f45110: /* f45110: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f45115: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f45117: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4511b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f4511f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f45121: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f45123: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f45124: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f45128: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4512a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4512b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4512c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4512d: push 0xf5e108 */
  { uint32_t v = 0xf5e108u; esp -= 4; W32(esp, v); }
/* f45132: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf45138u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f45138: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4513b: ret  */
  esp += 4; SPILL(); return;
}

void f_f45150(void) {
  LOAD_REGS();
L_f45150: /* f45150: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f45154: ret  */
  esp += 4; SPILL(); return;
}

void f_f45170(void) {
  LOAD_REGS();
L_f45170: /* f45170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f45172: push 0xf50f98 */
  { uint32_t v = 0xf50f98u; esp -= 4; W32(esp, v); }
/* f45177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4517d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4517e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f45185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f45186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45187: mov esi, ecx */
  esi = ecx;
/* f45189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f4518d: mov dword ptr [esi], 0xf55478 */
  W32((uint32_t)(esi), 0xf55478u);
/* f45193: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f4519b: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf451a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f451a1: mov ecx, esi */
  ecx = esi;
/* f451a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f451ab: call 0xf4114f */
  esp -= 4; W32(esp, 0xf451b0u); SPILL(); f_f4114f(); if (g_unwind) return; RELOAD();
/* f451b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f451b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f451b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f451bf: ret  */
  esp += 4; SPILL(); return;
}

void f_f451e0(void) {
  LOAD_REGS();
L_f451e0: /* f451e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f451e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f451e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f451e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f451e7: mov esi, ecx */
  esi = ecx;
/* f451e9: call 0xf410dc */
  esp -= 4; W32(esp, 0xf451eeu); SPILL(); f_f410dc(); if (g_unwind) return; RELOAD();
/* f451ee: mov dword ptr [esi], 0xf55478 */
  W32((uint32_t)(esi), 0xf55478u);
/* f451f4: mov al, byte ptr [edi + 0x1300] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1300u))) & 0xffu);
/* f451fa: mov byte ptr [esi + 0x1300], al */
  W8((uint32_t)(esi + 0x1300u), (eax & 0xffu));
/* f45200: mov cl, byte ptr [edi + 0x1301] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1301u))) & 0xffu);
/* f45206: mov byte ptr [esi + 0x1301], cl */
  W8((uint32_t)(esi + 0x1301u), (ecx & 0xffu));
/* f4520c: mov dl, byte ptr [edi + 0x1302] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1302u))) & 0xffu);
/* f45212: mov byte ptr [esi + 0x1302], dl */
  W8((uint32_t)(esi + 0x1302u), (edx & 0xffu));
/* f45218: mov al, byte ptr [edi + 0x1303] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1303u))) & 0xffu);
/* f4521e: mov byte ptr [esi + 0x1303], al */
  W8((uint32_t)(esi + 0x1303u), (eax & 0xffu));
/* f45224: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45225: mov eax, esi */
  eax = esi;
/* f45227: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45228: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45250(void) {
  LOAD_REGS();
L_f45250: /* f45250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45252: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f45256: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45257: mov esi, ecx */
  esi = ecx;
/* f45259: call 0xf412bc */
  esp -= 4; W32(esp, 0xf4525eu); SPILL(); f_f412bc(); if (g_unwind) return; RELOAD();
/* f4525e: mov al, byte ptr [edi + 0x1300] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1300u))) & 0xffu);
/* f45264: mov byte ptr [esi + 0x1300], al */
  W8((uint32_t)(esi + 0x1300u), (eax & 0xffu));
/* f4526a: mov cl, byte ptr [edi + 0x1301] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1301u))) & 0xffu);
/* f45270: mov byte ptr [esi + 0x1301], cl */
  W8((uint32_t)(esi + 0x1301u), (ecx & 0xffu));
/* f45276: mov dl, byte ptr [edi + 0x1302] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1302u))) & 0xffu);
/* f4527c: mov byte ptr [esi + 0x1302], dl */
  W8((uint32_t)(esi + 0x1302u), (edx & 0xffu));
/* f45282: mov al, byte ptr [edi + 0x1303] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1303u))) & 0xffu);
/* f45288: mov byte ptr [esi + 0x1303], al */
  W8((uint32_t)(esi + 0x1303u), (eax & 0xffu));
/* f4528e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4528f: mov eax, esi */
  eax = esi;
/* f45291: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45292: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f452c0(void) {
  LOAD_REGS();
L_f452c0: /* f452c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f452c1: mov esi, ecx */
  esi = ecx;
/* f452c3: call 0xf41348 */
  esp -= 4; W32(esp, 0xf452c8u); SPILL(); f_f41348(); if (g_unwind) return; RELOAD();
/* f452c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f452cd: je 0xf452de */
  if (zf) goto L_f452de;
L_f452cf: /* f452cf: push 0x1304 */
  { uint32_t v = 0x1304u; esp -= 4; W32(esp, v); }
/* f452d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f452d5: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf452dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f452db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f452de: /* f452de: mov eax, esi */
  eax = esi;
/* f452e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f452e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45300(void) {
  LOAD_REGS();
L_f45300: /* f45300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45301: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f45305: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45309: mov esi, ecx */
  esi = ecx;
/* f4530b: je 0xf45340 */
  if (zf) goto L_f45340;
L_f4530d: /* f4530d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f45310: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45311: push 0xf41348 */
  { uint32_t v = 0xf41348u; esp -= 4; W32(esp, v); }
/* f45316: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f45319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4531a: push 0x1304 */
  { uint32_t v = 0x1304u; esp -= 4; W32(esp, v); }
/* f4531f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45320: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf45325u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f45325: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45328: je 0xf45338 */
  if (zf) goto L_f45338;
L_f4532a: /* f4532a: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f45330: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f45332: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f45334: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45335: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf45338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f45338: /* f45338: mov eax, edi */
  eax = edi;
/* f4533a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4533b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4533c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4533d: ret 4 */
  esp += 8; SPILL(); return;
L_f45340: /* f45340: mov ecx, esi */
  ecx = esi;
/* f45342: call 0xf41348 */
  esp -= 4; W32(esp, 0xf45347u); SPILL(); f_f41348(); if (g_unwind) return; RELOAD();
/* f45347: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4534a: je 0xf4535b */
  if (zf) goto L_f4535b;
L_f4534c: /* f4534c: push 0x1304 */
  { uint32_t v = 0x1304u; esp -= 4; W32(esp, v); }
/* f45351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45352: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf45358u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f45358: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4535b: /* f4535b: mov eax, esi */
  eax = esi;
/* f4535d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4535e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4535f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45390(void) {
  LOAD_REGS();
L_f45390: /* f45390: mov eax, 0xf5dbd8 */
  eax = 0xf5dbd8u;
/* f45395: ret  */
  esp += 4; SPILL(); return;
}

void f_f453b0(void) {
  LOAD_REGS();
L_f453b0: /* f453b0: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f453b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f453b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f453bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f453bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f453c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f453c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f453c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f453c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f453ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f453cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f453cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f453cd: push 0xf5dbd8 */
  { uint32_t v = 0xf5dbd8u; esp -= 4; W32(esp, v); }
/* f453d2: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf453d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f453d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f453db: ret  */
  esp += 4; SPILL(); return;
}

void f_f453f0(void) {
  LOAD_REGS();
L_f453f0: /* f453f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f453f4: ret  */
  esp += 4; SPILL(); return;
}

void f_f45410(void) {
  LOAD_REGS();
L_f45410: /* f45410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f45412: push 0xf50fb8 */
  { uint32_t v = 0xf50fb8u; esp -= 4; W32(esp, v); }
/* f45417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4541d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4541e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f45425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f45426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45427: mov esi, ecx */
  esi = ecx;
/* f45429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f4542d: mov dword ptr [esi], 0xf55570 */
  W32((uint32_t)(esi), 0xf55570u);
/* f45433: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f4543b: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf45441u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f45441: mov ecx, esi */
  ecx = esi;
/* f45443: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f4544b: call 0xf4114f */
  esp -= 4; W32(esp, 0xf45450u); SPILL(); f_f4114f(); if (g_unwind) return; RELOAD();
/* f45450: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f45454: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45455: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4545c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4545f: ret  */
  esp += 4; SPILL(); return;
}

void f_f45480(void) {
  LOAD_REGS();
L_f45480: /* f45480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f45484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f45486: mov esi, ecx */
  esi = ecx;
/* f45488: call 0xf410dc */
  esp -= 4; W32(esp, 0xf4548du); SPILL(); f_f410dc(); if (g_unwind) return; RELOAD();
/* f4548d: mov dword ptr [esi], 0xf55570 */
  W32((uint32_t)(esi), 0xf55570u);
/* f45493: mov eax, esi */
  eax = esi;
/* f45495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45496: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f454b0(void) {
  LOAD_REGS();
L_f454b0: /* f454b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f454b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f454b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f454b6: mov esi, ecx */
  esi = ecx;
/* f454b8: call 0xf412bc */
  esp -= 4; W32(esp, 0xf454bdu); SPILL(); f_f412bc(); if (g_unwind) return; RELOAD();
/* f454bd: mov eax, esi */
  eax = esi;
/* f454bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f454c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f454e0(void) {
  LOAD_REGS();
L_f454e0: /* f454e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f454e1: mov esi, ecx */
  esi = ecx;
/* f454e3: call 0xf41375 */
  esp -= 4; W32(esp, 0xf454e8u); SPILL(); f_f41375(); if (g_unwind) return; RELOAD();
/* f454e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f454ed: je 0xf454fe */
  if (zf) goto L_f454fe;
L_f454ef: /* f454ef: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f454f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f454f5: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf454fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f454fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f454fe: /* f454fe: mov eax, esi */
  eax = esi;
/* f45500: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45501: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45520(void) {
  LOAD_REGS();
L_f45520: /* f45520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45521: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f45525: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45529: mov esi, ecx */
  esi = ecx;
/* f4552b: je 0xf45560 */
  if (zf) goto L_f45560;
L_f4552d: /* f4552d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f45530: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45531: push 0xf41375 */
  { uint32_t v = 0xf41375u; esp -= 4; W32(esp, v); }
/* f45536: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f45539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4553a: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f4553f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45540: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf45545u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f45545: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45548: je 0xf45558 */
  if (zf) goto L_f45558;
L_f4554a: /* f4554a: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f45550: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f45552: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f45554: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45555: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf45558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f45558: /* f45558: mov eax, edi */
  eax = edi;
/* f4555a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4555b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4555c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4555d: ret 4 */
  esp += 8; SPILL(); return;
L_f45560: /* f45560: mov ecx, esi */
  ecx = esi;
/* f45562: call 0xf41375 */
  esp -= 4; W32(esp, 0xf45567u); SPILL(); f_f41375(); if (g_unwind) return; RELOAD();
/* f45567: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4556a: je 0xf4557b */
  if (zf) goto L_f4557b;
L_f4556c: /* f4556c: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f45571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45572: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf45578u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f45578: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4557b: /* f4557b: mov eax, esi */
  eax = esi;
/* f4557d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4557e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4557f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f455b0(void) {
  LOAD_REGS();
L_f455b0: /* f455b0: mov eax, 0xf5d178 */
  eax = 0xf5d178u;
/* f455b5: ret  */
  esp += 4; SPILL(); return;
}

void f_f455d0(void) {
  LOAD_REGS();
L_f455d0: /* f455d0: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f455d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f455d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f455db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f455df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f455e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f455e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f455e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f455e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f455ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f455eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f455ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f455ed: push 0xf5d178 */
  { uint32_t v = 0xf5d178u; esp -= 4; W32(esp, v); }
/* f455f2: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf455f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f455f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f455fb: ret  */
  esp += 4; SPILL(); return;
}

void f_f45610(void) {
  LOAD_REGS();
L_f45610: /* f45610: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f45614: ret  */
  esp += 4; SPILL(); return;
}

void f_f45630(void) {
  LOAD_REGS();
L_f45630: /* f45630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f45632: push 0xf50fd8 */
  { uint32_t v = 0xf50fd8u; esp -= 4; W32(esp, v); }
/* f45637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4563d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4563e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f45645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f45646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45647: mov esi, ecx */
  esi = ecx;
/* f45649: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f4564d: mov dword ptr [esi], 0xf55668 */
  W32((uint32_t)(esi), 0xf55668u);
/* f45653: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f4565b: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf45661u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f45661: mov ecx, esi */
  ecx = esi;
/* f45663: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f4566b: call 0xf4114f */
  esp -= 4; W32(esp, 0xf45670u); SPILL(); f_f4114f(); if (g_unwind) return; RELOAD();
/* f45670: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f45674: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45675: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4567c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4567f: ret  */
  esp += 4; SPILL(); return;
}

void f_f456a0(void) {
  LOAD_REGS();
L_f456a0: /* f456a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f456a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f456a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f456a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f456a7: mov esi, ecx */
  esi = ecx;
/* f456a9: call 0xf410dc */
  esp -= 4; W32(esp, 0xf456aeu); SPILL(); f_f410dc(); if (g_unwind) return; RELOAD();
/* f456ae: mov dword ptr [esi], 0xf55668 */
  W32((uint32_t)(esi), 0xf55668u);
/* f456b4: mov eax, dword ptr [edi + 0x1300] */
  eax = R32((uint32_t)(edi + 0x1300u));
/* f456ba: mov dword ptr [esi + 0x1300], eax */
  W32((uint32_t)(esi + 0x1300u), eax);
/* f456c0: mov ecx, dword ptr [edi + 0x1304] */
  ecx = R32((uint32_t)(edi + 0x1304u));
/* f456c6: mov dword ptr [esi + 0x1304], ecx */
  W32((uint32_t)(esi + 0x1304u), ecx);
/* f456cc: mov edx, dword ptr [edi + 0x1308] */
  edx = R32((uint32_t)(edi + 0x1308u));
/* f456d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f456d3: mov dword ptr [esi + 0x1308], edx */
  W32((uint32_t)(esi + 0x1308u), edx);
/* f456d9: mov eax, esi */
  eax = esi;
/* f456db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f456dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f456f0(void) {
  LOAD_REGS();
L_f456f0: /* f456f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f456f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f456f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f456f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f456f7: mov esi, ecx */
  esi = ecx;
/* f456f9: call 0xf412bc */
  esp -= 4; W32(esp, 0xf456feu); SPILL(); f_f412bc(); if (g_unwind) return; RELOAD();
/* f456fe: mov eax, dword ptr [edi + 0x1300] */
  eax = R32((uint32_t)(edi + 0x1300u));
/* f45704: mov dword ptr [esi + 0x1300], eax */
  W32((uint32_t)(esi + 0x1300u), eax);
/* f4570a: mov ecx, dword ptr [edi + 0x1304] */
  ecx = R32((uint32_t)(edi + 0x1304u));
/* f45710: mov dword ptr [esi + 0x1304], ecx */
  W32((uint32_t)(esi + 0x1304u), ecx);
/* f45716: mov edx, dword ptr [edi + 0x1308] */
  edx = R32((uint32_t)(edi + 0x1308u));
/* f4571c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4571d: mov dword ptr [esi + 0x1308], edx */
  W32((uint32_t)(esi + 0x1308u), edx);
/* f45723: mov eax, esi */
  eax = esi;
/* f45725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45726: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45740(void) {
  LOAD_REGS();
L_f45740: /* f45740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45741: mov esi, ecx */
  esi = ecx;
/* f45743: call 0xf411e0 */
  esp -= 4; W32(esp, 0xf45748u); SPILL(); f_f411e0(); if (g_unwind) return; RELOAD();
/* f45748: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4574d: je 0xf4575e */
  if (zf) goto L_f4575e;
L_f4574f: /* f4574f: push 0x130c */
  { uint32_t v = 0x130cu; esp -= 4; W32(esp, v); }
/* f45754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45755: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf4575bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f4575b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4575e: /* f4575e: mov eax, esi */
  eax = esi;
/* f45760: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45761: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45780(void) {
  LOAD_REGS();
L_f45780: /* f45780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45781: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f45785: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45789: mov esi, ecx */
  esi = ecx;
/* f4578b: je 0xf457c0 */
  if (zf) goto L_f457c0;
L_f4578d: /* f4578d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f45790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45791: push 0xf411e0 */
  { uint32_t v = 0xf411e0u; esp -= 4; W32(esp, v); }
/* f45796: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f45799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4579a: push 0x130c */
  { uint32_t v = 0x130cu; esp -= 4; W32(esp, v); }
/* f4579f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f457a0: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf457a5u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f457a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f457a8: je 0xf457b8 */
  if (zf) goto L_f457b8;
L_f457aa: /* f457aa: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f457b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f457b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f457b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f457b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf457b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f457b8: /* f457b8: mov eax, edi */
  eax = edi;
/* f457ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f457bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f457bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f457bd: ret 4 */
  esp += 8; SPILL(); return;
L_f457c0: /* f457c0: mov ecx, esi */
  ecx = esi;
/* f457c2: call 0xf411e0 */
  esp -= 4; W32(esp, 0xf457c7u); SPILL(); f_f411e0(); if (g_unwind) return; RELOAD();
/* f457c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f457ca: je 0xf457db */
  if (zf) goto L_f457db;
L_f457cc: /* f457cc: push 0x130c */
  { uint32_t v = 0x130cu; esp -= 4; W32(esp, v); }
/* f457d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f457d2: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf457d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f457d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f457db: /* f457db: mov eax, esi */
  eax = esi;
/* f457dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f457de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f457df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45810(void) {
  LOAD_REGS();
L_f45810: /* f45810: mov eax, ecx */
  eax = ecx;
/* f45812: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f45816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f45818: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f4581a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* f4581d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f45820: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45840(void) {
  LOAD_REGS();
L_f45840: /* f45840: mov eax, 0xf5e638 */
  eax = 0xf5e638u;
/* f45845: ret  */
  esp += 4; SPILL(); return;
}

void f_f45860(void) {
  LOAD_REGS();
L_f45860: /* f45860: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f45865: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f45867: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4586b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f4586f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f45871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f45873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f45874: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f45878: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4587a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4587b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4587c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4587d: push 0xf5e638 */
  { uint32_t v = 0xf5e638u; esp -= 4; W32(esp, v); }
/* f45882: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf45888u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f45888: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4588b: ret  */
  esp += 4; SPILL(); return;
}

void f_f458a0(void) {
  LOAD_REGS();
L_f458a0: /* f458a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f458a4: ret  */
  esp += 4; SPILL(); return;
}

void f_f458c0(void) {
  LOAD_REGS();
L_f458c0: /* f458c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f458c2: push 0xf50ff8 */
  { uint32_t v = 0xf50ff8u; esp -= 4; W32(esp, v); }
/* f458c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f458cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f458ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f458d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f458d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f458d7: mov esi, ecx */
  esi = ecx;
/* f458d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f458dd: mov dword ptr [esi], 0xf55760 */
  W32((uint32_t)(esi), 0xf55760u);
/* f458e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f458eb: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf458f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f458f1: mov ecx, esi */
  ecx = esi;
/* f458f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f458fb: call 0xf41113 */
  esp -= 4; W32(esp, 0xf45900u); SPILL(); f_f41113(); if (g_unwind) return; RELOAD();
/* f45900: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f45904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45905: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4590c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4590f: ret  */
  esp += 4; SPILL(); return;
}

void f_f45930(void) {
  LOAD_REGS();
L_f45930: /* f45930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f45936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45937: mov esi, ecx */
  esi = ecx;
/* f45939: call 0xf41366 */
  esp -= 4; W32(esp, 0xf4593eu); SPILL(); f_f41366(); if (g_unwind) return; RELOAD();
/* f4593e: mov dword ptr [esi], 0xf55760 */
  W32((uint32_t)(esi), 0xf55760u);
/* f45944: mov eax, dword ptr [edi + 0xe0] */
  eax = R32((uint32_t)(edi + 0xe0u));
/* f4594a: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* f45950: mov ecx, dword ptr [edi + 0xe4] */
  ecx = R32((uint32_t)(edi + 0xe4u));
/* f45956: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* f4595c: mov dl, byte ptr [edi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe8u))) & 0xffu);
/* f45962: mov byte ptr [esi + 0xe8], dl */
  W8((uint32_t)(esi + 0xe8u), (edx & 0xffu));
/* f45968: mov al, byte ptr [edi + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe9u))) & 0xffu);
/* f4596e: mov byte ptr [esi + 0xe9], al */
  W8((uint32_t)(esi + 0xe9u), (eax & 0xffu));
/* f45974: mov cl, byte ptr [edi + 0xea] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xeau))) & 0xffu);
/* f4597a: mov byte ptr [esi + 0xea], cl */
  W8((uint32_t)(esi + 0xeau), (ecx & 0xffu));
/* f45980: mov dl, byte ptr [edi + 0xeb] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xebu))) & 0xffu);
/* f45986: mov byte ptr [esi + 0xeb], dl */
  W8((uint32_t)(esi + 0xebu), (edx & 0xffu));
/* f4598c: mov al, byte ptr [edi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xecu))) & 0xffu);
/* f45992: mov byte ptr [esi + 0xec], al */
  W8((uint32_t)(esi + 0xecu), (eax & 0xffu));
/* f45998: mov cl, byte ptr [edi + 0xed] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xedu))) & 0xffu);
/* f4599e: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* f459a4: mov byte ptr [esi + 0xed], cl */
  W8((uint32_t)(esi + 0xedu), (ecx & 0xffu));
/* f459aa: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* f459b0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f459b2: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f459b5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f459b7: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* f459bd: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* f459c3: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* f459c9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* f459cf: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f459d5: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* f459db: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* f459e1: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* f459e7: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* f459ed: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* f459f3: mov dword ptr [esi + 0x104], ecx */
  W32((uint32_t)(esi + 0x104u), ecx);
/* f459f9: mov edx, dword ptr [edi + 0x108] */
  edx = R32((uint32_t)(edi + 0x108u));
/* f459ff: mov dword ptr [esi + 0x108], edx */
  W32((uint32_t)(esi + 0x108u), edx);
/* f45a05: mov eax, dword ptr [edi + 0x10c] */
  eax = R32((uint32_t)(edi + 0x10cu));
/* f45a0b: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* f45a11: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* f45a17: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* f45a1d: mov edx, dword ptr [edi + 0x114] */
  edx = R32((uint32_t)(edi + 0x114u));
/* f45a23: mov dword ptr [esi + 0x114], edx */
  W32((uint32_t)(esi + 0x114u), edx);
/* f45a29: mov eax, dword ptr [edi + 0x118] */
  eax = R32((uint32_t)(edi + 0x118u));
/* f45a2f: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* f45a35: mov ecx, dword ptr [edi + 0x11c] */
  ecx = R32((uint32_t)(edi + 0x11cu));
/* f45a3b: mov dword ptr [esi + 0x11c], ecx */
  W32((uint32_t)(esi + 0x11cu), ecx);
/* f45a41: mov edx, dword ptr [edi + 0x120] */
  edx = R32((uint32_t)(edi + 0x120u));
/* f45a47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45a48: mov dword ptr [esi + 0x120], edx */
  W32((uint32_t)(esi + 0x120u), edx);
/* f45a4e: mov eax, esi */
  eax = esi;
/* f45a50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45a51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45ab0(void) {
  LOAD_REGS();
L_f45ab0: /* f45ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45ab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45ab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f45ab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45ab7: mov esi, ecx */
  esi = ecx;
/* f45ab9: call 0xf410a5 */
  esp -= 4; W32(esp, 0xf45abeu); SPILL(); f_f410a5(); if (g_unwind) return; RELOAD();
/* f45abe: mov eax, dword ptr [edi + 0xe0] */
  eax = R32((uint32_t)(edi + 0xe0u));
/* f45ac4: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* f45aca: mov ecx, dword ptr [edi + 0xe4] */
  ecx = R32((uint32_t)(edi + 0xe4u));
/* f45ad0: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* f45ad6: mov dl, byte ptr [edi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe8u))) & 0xffu);
/* f45adc: mov byte ptr [esi + 0xe8], dl */
  W8((uint32_t)(esi + 0xe8u), (edx & 0xffu));
/* f45ae2: mov al, byte ptr [edi + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe9u))) & 0xffu);
/* f45ae8: mov byte ptr [esi + 0xe9], al */
  W8((uint32_t)(esi + 0xe9u), (eax & 0xffu));
/* f45aee: mov cl, byte ptr [edi + 0xea] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xeau))) & 0xffu);
/* f45af4: mov byte ptr [esi + 0xea], cl */
  W8((uint32_t)(esi + 0xeau), (ecx & 0xffu));
/* f45afa: mov dl, byte ptr [edi + 0xeb] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xebu))) & 0xffu);
/* f45b00: mov byte ptr [esi + 0xeb], dl */
  W8((uint32_t)(esi + 0xebu), (edx & 0xffu));
/* f45b06: mov al, byte ptr [edi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xecu))) & 0xffu);
/* f45b0c: mov byte ptr [esi + 0xec], al */
  W8((uint32_t)(esi + 0xecu), (eax & 0xffu));
/* f45b12: mov cl, byte ptr [edi + 0xed] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xedu))) & 0xffu);
/* f45b18: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* f45b1e: mov byte ptr [esi + 0xed], cl */
  W8((uint32_t)(esi + 0xedu), (ecx & 0xffu));
/* f45b24: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* f45b2a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f45b2c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f45b2f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f45b31: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* f45b37: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* f45b3d: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* f45b43: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* f45b49: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f45b4f: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* f45b55: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* f45b5b: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* f45b61: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* f45b67: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* f45b6d: mov dword ptr [esi + 0x104], ecx */
  W32((uint32_t)(esi + 0x104u), ecx);
/* f45b73: mov edx, dword ptr [edi + 0x108] */
  edx = R32((uint32_t)(edi + 0x108u));
/* f45b79: mov dword ptr [esi + 0x108], edx */
  W32((uint32_t)(esi + 0x108u), edx);
/* f45b7f: mov eax, dword ptr [edi + 0x10c] */
  eax = R32((uint32_t)(edi + 0x10cu));
/* f45b85: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* f45b8b: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* f45b91: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* f45b97: mov edx, dword ptr [edi + 0x114] */
  edx = R32((uint32_t)(edi + 0x114u));
/* f45b9d: mov dword ptr [esi + 0x114], edx */
  W32((uint32_t)(esi + 0x114u), edx);
/* f45ba3: mov eax, dword ptr [edi + 0x118] */
  eax = R32((uint32_t)(edi + 0x118u));
/* f45ba9: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* f45baf: mov ecx, dword ptr [edi + 0x11c] */
  ecx = R32((uint32_t)(edi + 0x11cu));
/* f45bb5: mov dword ptr [esi + 0x11c], ecx */
  W32((uint32_t)(esi + 0x11cu), ecx);
/* f45bbb: mov edx, dword ptr [edi + 0x120] */
  edx = R32((uint32_t)(edi + 0x120u));
/* f45bc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45bc2: mov dword ptr [esi + 0x120], edx */
  W32((uint32_t)(esi + 0x120u), edx);
/* f45bc8: mov eax, esi */
  eax = esi;
/* f45bca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45bcb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45c20(void) {
  LOAD_REGS();
L_f45c20: /* f45c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45c21: mov esi, ecx */
  esi = ecx;
/* f45c23: call 0xf412cb */
  esp -= 4; W32(esp, 0xf45c28u); SPILL(); f_f412cb(); if (g_unwind) return; RELOAD();
/* f45c28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45c2d: je 0xf45c3e */
  if (zf) goto L_f45c3e;
L_f45c2f: /* f45c2f: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* f45c34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45c35: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf45c3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f45c3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f45c3e: /* f45c3e: mov eax, esi */
  eax = esi;
/* f45c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45c41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45c60(void) {
  LOAD_REGS();
L_f45c60: /* f45c60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45c61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f45c65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45c69: mov esi, ecx */
  esi = ecx;
/* f45c6b: je 0xf45ca0 */
  if (zf) goto L_f45ca0;
L_f45c6d: /* f45c6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f45c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45c71: push 0xf412cb */
  { uint32_t v = 0xf412cbu; esp -= 4; W32(esp, v); }
/* f45c76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f45c79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f45c7a: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* f45c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45c80: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf45c85u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f45c85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45c88: je 0xf45c98 */
  if (zf) goto L_f45c98;
L_f45c8a: /* f45c8a: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f45c90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f45c92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f45c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45c95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf45c98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f45c98: /* f45c98: mov eax, edi */
  eax = edi;
/* f45c9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45c9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45c9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45c9d: ret 4 */
  esp += 8; SPILL(); return;
L_f45ca0: /* f45ca0: mov ecx, esi */
  ecx = esi;
/* f45ca2: call 0xf412cb */
  esp -= 4; W32(esp, 0xf45ca7u); SPILL(); f_f412cb(); if (g_unwind) return; RELOAD();
/* f45ca7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45caa: je 0xf45cbb */
  if (zf) goto L_f45cbb;
L_f45cac: /* f45cac: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* f45cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45cb2: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf45cb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f45cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f45cbb: /* f45cbb: mov eax, esi */
  eax = esi;
/* f45cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45cbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f45cf0(void) {
  LOAD_REGS();
L_f45cf0: /* f45cf0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f45cf4: fcom dword ptr [0xf55284] */
  fpu_com(ST0, F32((uint32_t)(0xf55284u)));
/* f45cfa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f45cfc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f45cff: je 0xf45d03 */
  if (zf) goto L_f45d03;
L_f45d01: /* f45d01: fchs  */
  ST0 = -ST0;
L_f45d03: /* f45d03: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* f45d07: fmul qword ptr [0xf55858] */
  ST0 = ST0 * (F64((uint32_t)(0xf55858u)));
/* f45d0d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f45d0f: fadd dword ptr [0xf55854] */
  ST0 = ST0 + (F32((uint32_t)(0xf55854u)));
/* f45d15: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* f45d17: ret  */
  esp += 4; SPILL(); return;
}

void f_f45d30(void) {
  LOAD_REGS();
L_f45d30: /* f45d30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f45d31: mov ebp, esp */
  ebp = esp;
/* f45d33: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* f45d36: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f45d39: mov eax, dword ptr [0xf5f3cc] */
  eax = R32((uint32_t)(0xf5f3ccu));
/* f45d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f45d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45d41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45d42: jne 0xf45e1f */
  if (!zf) goto L_f45e1f;
L_f45d48: /* f45d48: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f45d4e: xor esi, esi */
  esi = 0;
/* f45d50: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f45d54: jmp 0xf45d60 */
  goto L_f45d60;
L_f45d60: /* f45d60: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* f45d64: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f45d67: fmul dword ptr [0xf55888] */
  ST0 = ST0 * (F32((uint32_t)(0xf55888u)));
/* f45d6d: fmul dword ptr [0xf55884] */
  ST0 = ST0 * (F32((uint32_t)(0xf55884u)));
/* f45d73: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f45d76: call dword ptr [0xf602e4] */
  esp -= 4; W32(esp, 0xf45d7cu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* f45d7c: fmul qword ptr [0xf55878] */
  ST0 = ST0 * (F64((uint32_t)(0xf55878u)));
/* f45d82: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45d85: fadd qword ptr [0xf55868] */
  ST0 = ST0 + (F64((uint32_t)(0xf55868u)));
/* f45d8b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f45d8e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf45d90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f45d90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45d93: mov byte ptr [esi + 0xf5c5f0], al */
  W8((uint32_t)(esi + 0xf5c5f0u), (eax & 0xffu));
/* f45d99: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f45d9a: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45da0: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f45da4: jl 0xf45d60 */
  if ((sf != of)) goto L_f45d60;
L_f45da6: /* f45da6: xor eax, eax */
  eax = 0;
/* f45da8: jmp 0xf45db0 */
  goto L_f45db0;
L_f45db0: /* f45db0: mov cl, byte ptr [eax + 0xf5c5f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u))) & 0xffu);
/* f45db6: movzx esi, cl */
  esi = (uint32_t)((ecx & 0xffu));
/* f45db9: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f45dbc: jns 0xf45dc2 */
  if (!sf) goto L_f45dc2;
L_f45dbe: /* f45dbe: xor edx, edx */
  edx = 0;
/* f45dc0: jmp 0xf45dd1 */
  goto L_f45dd1;
L_f45dc2: /* f45dc2: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dc8: mov edx, esi */
  edx = esi;
/* f45dca: jl 0xf45dd1 */
  if ((sf != of)) goto L_f45dd1;
L_f45dcc: /* f45dcc: mov edx, 0xff */
  edx = 0xffu;
L_f45dd1: /* f45dd1: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45dd4: mov byte ptr [eax + 0xf5c2b8], dl */
  W8((uint32_t)(eax + 0xf5c2b8u), (edx & 0xffu));
/* f45dda: mov byte ptr [eax + 0xf5c1a0], cl */
  W8((uint32_t)(eax + 0xf5c1a0u), (ecx & 0xffu));
/* f45de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f45de1: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45de6: jl 0xf45db0 */
  if ((sf != of)) goto L_f45db0;
L_f45de8: /* f45de8: mov edi, dword ptr [0xf60360] */
  edi = R32((uint32_t)(0xf60360u));
/* f45dee: xor esi, esi */
  esi = 0;
L_f45df0: /* f45df0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf45df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f45df2: mov byte ptr [esi + 0xf5c3c8], al */
  W8((uint32_t)(esi + 0xf5c3c8u), (eax & 0xffu));
/* f45df8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f45df9: cmp esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dff: jl 0xf45df0 */
  if ((sf != of)) goto L_f45df0;
L_f45e01: /* f45e01: mov dword ptr [0xf5c5c8], 0 */
  W32((uint32_t)(0xf5c5c8u), 0x0u);
/* f45e0b: mov dword ptr [0xf5c5d8], 0 */
  W32((uint32_t)(0xf5c5d8u), 0x0u);
/* f45e15: mov dword ptr [0xf5f3cc], 1 */
  W32((uint32_t)(0xf5f3ccu), 0x1u);
L_f45e1f: /* f45e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45e21: mov esp, ebp */
  esp = ebp;
/* f45e23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45e24: ret  */
  esp += 4; SPILL(); return;
}

void f_f45d56(void) {
  LOAD_REGS();
L_f45d56: /* f45d56: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* f45d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f45d60: /* f45d60: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* f45d64: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f45d67: fmul dword ptr [0xf55888] */
  ST0 = ST0 * (F32((uint32_t)(0xf55888u)));
/* f45d6d: fmul dword ptr [0xf55884] */
  ST0 = ST0 * (F32((uint32_t)(0xf55884u)));
/* f45d73: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f45d76: call dword ptr [0xf602e4] */
  esp -= 4; W32(esp, 0xf45d7cu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* f45d7c: fmul qword ptr [0xf55878] */
  ST0 = ST0 * (F64((uint32_t)(0xf55878u)));
/* f45d82: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45d85: fadd qword ptr [0xf55868] */
  ST0 = ST0 + (F64((uint32_t)(0xf55868u)));
/* f45d8b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f45d8e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf45d90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f45d90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45d93: mov byte ptr [esi + 0xf5c5f0], al */
  W8((uint32_t)(esi + 0xf5c5f0u), (eax & 0xffu));
/* f45d99: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f45d9a: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45da0: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f45da4: jl 0xf45d60 */
  if ((sf != of)) goto L_f45d60;
L_f45da6: /* f45da6: xor eax, eax */
  eax = 0;
/* f45da8: jmp 0xf45db0 */
  goto L_f45db0;
L_f45db0: /* f45db0: mov cl, byte ptr [eax + 0xf5c5f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u))) & 0xffu);
/* f45db6: movzx esi, cl */
  esi = (uint32_t)((ecx & 0xffu));
/* f45db9: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f45dbc: jns 0xf45dc2 */
  if (!sf) goto L_f45dc2;
L_f45dbe: /* f45dbe: xor edx, edx */
  edx = 0;
/* f45dc0: jmp 0xf45dd1 */
  goto L_f45dd1;
L_f45dc2: /* f45dc2: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dc8: mov edx, esi */
  edx = esi;
/* f45dca: jl 0xf45dd1 */
  if ((sf != of)) goto L_f45dd1;
L_f45dcc: /* f45dcc: mov edx, 0xff */
  edx = 0xffu;
L_f45dd1: /* f45dd1: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45dd4: mov byte ptr [eax + 0xf5c2b8], dl */
  W8((uint32_t)(eax + 0xf5c2b8u), (edx & 0xffu));
/* f45dda: mov byte ptr [eax + 0xf5c1a0], cl */
  W8((uint32_t)(eax + 0xf5c1a0u), (ecx & 0xffu));
/* f45de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f45de1: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45de6: jl 0xf45db0 */
  if ((sf != of)) goto L_f45db0;
L_f45de8: /* f45de8: mov edi, dword ptr [0xf60360] */
  edi = R32((uint32_t)(0xf60360u));
/* f45dee: xor esi, esi */
  esi = 0;
L_f45df0: /* f45df0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf45df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f45df2: mov byte ptr [esi + 0xf5c3c8], al */
  W8((uint32_t)(esi + 0xf5c3c8u), (eax & 0xffu));
/* f45df8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f45df9: cmp esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dff: jl 0xf45df0 */
  if ((sf != of)) goto L_f45df0;
L_f45e01: /* f45e01: mov dword ptr [0xf5c5c8], 0 */
  W32((uint32_t)(0xf5c5c8u), 0x0u);
/* f45e0b: mov dword ptr [0xf5c5d8], 0 */
  W32((uint32_t)(0xf5c5d8u), 0x0u);
/* f45e15: mov dword ptr [0xf5f3cc], 1 */
  W32((uint32_t)(0xf5f3ccu), 0x1u);
/* f45e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45e21: mov esp, ebp */
  esp = ebp;
/* f45e23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45e24: ret  */
  esp += 4; SPILL(); return;
}

void f_f45daa(void) {
  LOAD_REGS();
L_f45daa: /* f45daa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f45db0: /* f45db0: mov cl, byte ptr [eax + 0xf5c5f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u))) & 0xffu);
/* f45db6: movzx esi, cl */
  esi = (uint32_t)((ecx & 0xffu));
/* f45db9: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f45dbc: jns 0xf45dc2 */
  if (!sf) goto L_f45dc2;
L_f45dbe: /* f45dbe: xor edx, edx */
  edx = 0;
/* f45dc0: jmp 0xf45dd1 */
  goto L_f45dd1;
L_f45dc2: /* f45dc2: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dc8: mov edx, esi */
  edx = esi;
/* f45dca: jl 0xf45dd1 */
  if ((sf != of)) goto L_f45dd1;
L_f45dcc: /* f45dcc: mov edx, 0xff */
  edx = 0xffu;
L_f45dd1: /* f45dd1: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45dd4: mov byte ptr [eax + 0xf5c2b8], dl */
  W8((uint32_t)(eax + 0xf5c2b8u), (edx & 0xffu));
/* f45dda: mov byte ptr [eax + 0xf5c1a0], cl */
  W8((uint32_t)(eax + 0xf5c1a0u), (ecx & 0xffu));
/* f45de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f45de1: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45de6: jl 0xf45db0 */
  if ((sf != of)) goto L_f45db0;
L_f45de8: /* f45de8: mov edi, dword ptr [0xf60360] */
  edi = R32((uint32_t)(0xf60360u));
/* f45dee: xor esi, esi */
  esi = 0;
L_f45df0: /* f45df0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf45df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f45df2: mov byte ptr [esi + 0xf5c3c8], al */
  W8((uint32_t)(esi + 0xf5c3c8u), (eax & 0xffu));
/* f45df8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f45df9: cmp esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45dff: jl 0xf45df0 */
  if ((sf != of)) goto L_f45df0;
L_f45e01: /* f45e01: mov dword ptr [0xf5c5c8], 0 */
  W32((uint32_t)(0xf5c5c8u), 0x0u);
/* f45e0b: mov dword ptr [0xf5c5d8], 0 */
  W32((uint32_t)(0xf5c5d8u), 0x0u);
/* f45e15: mov dword ptr [0xf5f3cc], 1 */
  W32((uint32_t)(0xf5f3ccu), 0x1u);
/* f45e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45e21: mov esp, ebp */
  esp = ebp;
/* f45e23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45e24: ret  */
  esp += 4; SPILL(); return;
}

void f_f45e70(void) {
  LOAD_REGS();
L_f45e70: /* f45e70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f45e73: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f45e74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f45e75: mov esi, ecx */
  esi = ecx;
/* f45e77: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f45e7b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f45e7d: jl 0xf46667 */
  if ((sf != of)) goto L_f46667;
L_f45e83: /* f45e83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f45e84: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f45e88: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f45e8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f45e8b: jl 0xf46665 */
  if ((sf != of)) goto L_f46665;
L_f45e91: /* f45e91: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45e94: jge 0xf46665 */
  if ((sf == of)) goto L_f46665;
L_f45e9a: /* f45e9a: cmp ebx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45e9d: jge 0xf46665 */
  if ((sf == of)) goto L_f46665;
L_f45ea3: /* f45ea3: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f45ea9: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f45eaf: jge 0xf46665 */
  if ((sf == of)) goto L_f46665;
L_f45eb5: /* f45eb5: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f45eb8: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f45ebe: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45ec4: lea edi, [eax*8] */
  edi = (uint32_t)(eax*8);
/* f45ecb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f45ecf: mov al, byte ptr [esi + 0xe0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f45ed5: mov byte ptr [edi + edx], al */
  W8((uint32_t)(edi + edx), (eax & 0xffu));
/* f45ed8: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45ede: mov byte ptr [edx + edi + 2], cl */
  W8((uint32_t)(edx + edi + 0x2u), (ecx & 0xffu));
/* f45ee2: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45ee8: mov byte ptr [edx + edi + 3], bl */
  W8((uint32_t)(edx + edi + 0x3u), (ebx & 0xffu));
/* f45eec: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45ef2: mov al, byte ptr [esi + 0xe8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f45ef8: mov byte ptr [edx + edi + 1], al */
  W8((uint32_t)(edx + edi + 0x1u), (eax & 0xffu));
/* f45efc: mov dl, byte ptr [esi + 0xe0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f45f02: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f45f06: movzx ebp, dl */
  ebp = (uint32_t)((edx & 0xffu));
/* f45f09: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* f45f0a: cmp ebp, 0x1b */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f45f0d: ja 0xf46665 */
  if ((!cf && !zf)) goto L_f46665;
L_f45f13: /* f45f13: jmp dword ptr [ebp*4 + 0xf46670] */
  switch (R32((uint32_t)(ebp*4 + 0xf46670u))) {
    case 0xf45f1au: goto L_f45f1a;
    case 0xf45f44u: goto L_f45f44;
    case 0xf45f8au: goto L_f45f8a;
    case 0xf45fc9u: goto L_f45fc9;
    case 0xf45feau: goto L_f45fea;
    case 0xf46004u: goto L_f46004;
    case 0xf4601eu: goto L_f4601e;
    case 0xf46038u: goto L_f46038;
    case 0xf46081u: goto L_f46081;
    case 0xf46339u: goto L_f46339;
    case 0xf46384u: goto L_f46384;
    case 0xf4640eu: goto L_f4640e;
    case 0xf46459u: goto L_f46459;
    case 0xf4649du: goto L_f4649d;
    case 0xf464ecu: goto L_f464ec;
    case 0xf4652cu: goto L_f4652c;
    case 0xf4653cu: goto L_f4653c;
    case 0xf46582u: goto L_f46582;
    case 0xf46665u: goto L_f46665;
    default: guest_badjump(0xf45f13, R32((uint32_t)(ebp*4 + 0xf46670u))); return;
  }
L_f45f1a: /* f45f1a: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f45f20: mov cl, byte ptr [esi + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f45f26: mov byte ptr [eax + edi + 4], cl */
  W8((uint32_t)(eax + edi + 0x4u), (ecx & 0xffu));
/* f45f2a: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45f30: mov al, byte ptr [esi + 0xea] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeau))) & 0xffu);
/* f45f36: mov byte ptr [edx + edi + 5], al */
  W8((uint32_t)(edx + edi + 0x5u), (eax & 0xffu));
/* f45f3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45f3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45f3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45f3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45f3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45f41: ret 8 */
  esp += 12; SPILL(); return;
L_f45f44: /* f45f44: mov dl, byte ptr [esi + 0xdc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xdcu))) & 0xffu);
/* f45f4a: mov cl, byte ptr [esi + 0xdd] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xddu))) & 0xffu);
/* f45f50: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45f52: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f45f58: mov byte ptr [edx + edi + 1], cl */
  W8((uint32_t)(edx + edi + 0x1u), (ecx & 0xffu));
/* f45f5c: mov cl, byte ptr [esi + 0xdc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xdcu))) & 0xffu);
/* f45f62: mov al, byte ptr [esi + 0xed] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xedu))) & 0xffu);
/* f45f68: mov dl, byte ptr [esi + 0xec] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f45f6e: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45f70: mov byte ptr [esi + 0xdc], cl */
  W8((uint32_t)(esi + 0xdcu), (ecx & 0xffu));
/* f45f76: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f45f7c: mov byte ptr [ecx + edi + 7], dl */
  W8((uint32_t)(ecx + edi + 0x7u), (edx & 0xffu));
/* f45f80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45f81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45f82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45f83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45f84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45f87: ret 8 */
  esp += 12; SPILL(); return;
L_f45f8a: /* f45f8a: mov ebx, dword ptr [esi + 0xfc] */
  ebx = R32((uint32_t)(esi + 0xfcu));
/* f45f90: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f45f92: call 0xf41307 */
  esp -= 4; W32(esp, 0xf45f97u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f45f97: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* f45f9a: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f45fa0: mov cl, byte ptr [esi + 0xec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f45fa6: mov byte ptr [eax + edi + 7], cl */
  W8((uint32_t)(eax + edi + 0x7u), (ecx & 0xffu));
/* f45faa: mov al, byte ptr [esi + 0xe8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f45fb0: or dl, 0xff */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45fb3: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f45fb5: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f45fbb: mov byte ptr [eax + edi + 6], dl */
  W8((uint32_t)(eax + edi + 0x6u), (edx & 0xffu));
/* f45fbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45fc0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45fc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45fc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45fc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45fc6: ret 8 */
  esp += 12; SPILL(); return;
L_f45fc9: /* f45fc9: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f45fcf: mov dl, byte ptr [esi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f45fd5: mov byte ptr [ecx + edi + 4], dl */
  W8((uint32_t)(ecx + edi + 0x4u), (edx & 0xffu));
/* f45fd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45fda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45fdb: mov byte ptr [esi + 0x510], 1 */
  W8((uint32_t)(esi + 0x510u), 0x1u);
/* f45fe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45fe3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45fe4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f45fe7: ret 8 */
  esp += 12; SPILL(); return;
L_f45fea: /* f45fea: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f45ff0: mov cl, byte ptr [esi + 0xeb] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xebu))) & 0xffu);
/* f45ff6: mov byte ptr [eax + edi + 6], cl */
  W8((uint32_t)(eax + edi + 0x6u), (ecx & 0xffu));
/* f45ffa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f45ffb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f45ffc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f45ffd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f45ffe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46001: ret 8 */
  esp += 12; SPILL(); return;
L_f46004: /* f46004: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4600a: mov al, byte ptr [esi + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f46010: mov byte ptr [edx + edi + 6], al */
  W8((uint32_t)(edx + edi + 0x6u), (eax & 0xffu));
/* f46014: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46015: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46016: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46017: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4601b: ret 8 */
  esp += 12; SPILL(); return;
L_f4601e: /* f4601e: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46024: mov dl, byte ptr [esi + 0xe9] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f4602a: mov byte ptr [ecx + edi + 6], dl */
  W8((uint32_t)(ecx + edi + 0x6u), (edx & 0xffu));
/* f4602e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4602f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46031: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46035: ret 8 */
  esp += 12; SPILL(); return;
L_f46038: /* f46038: mov al, byte ptr [esi + 0xee] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeeu))) & 0xffu);
/* f4603e: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46044: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46046: mov byte ptr [ecx + edi + 4], al */
  W8((uint32_t)(ecx + edi + 0x4u), (eax & 0xffu));
/* f4604a: mov dl, byte ptr [esi + 0xef] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xefu))) & 0xffu);
/* f46050: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46056: xor dl, 0x7f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46059: mov byte ptr [eax + edi + 5], dl */
  W8((uint32_t)(eax + edi + 0x5u), (edx & 0xffu));
/* f4605d: movzx ecx, byte ptr [esi + 0xe9] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xe9u)));
/* f46064: mov eax, 0xff */
  eax = 0xffu;
/* f46069: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4606a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f4606b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xf4606b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f4606d: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46073: mov byte ptr [edx + edi + 7], al */
  W8((uint32_t)(edx + edi + 0x7u), (eax & 0xffu));
/* f46077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46078: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4607a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4607b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4607e: ret 8 */
  esp += 12; SPILL(); return;
L_f46081: /* f46081: movzx ebp, byte ptr [esi + 0xee] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xeeu)));
/* f46088: mov al, byte ptr [esi + 0x511] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x511u))) & 0xffu);
/* f4608e: movzx edx, byte ptr [esi + 0xe9] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xe9u)));
/* f46095: sub ebp, 0x80 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4609b: cmp byte ptr [esi + 0xf0], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f460a2: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* f460a6: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* f460a9: lea ebp, [edx + ebp*2] */
  ebp = (uint32_t)(edx + ebp*2);
/* f460ac: jbe 0xf460db */
  if ((cf | zf)) goto L_f460db;
L_f460ae: /* f460ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f460b0: je 0xf460db */
  if (zf) goto L_f460db;
L_f460b2: /* f460b2: lea eax, [ecx + ecx] */
  eax = (uint32_t)(ecx + ecx);
/* f460b5: mov edx, ebp */
  edx = ebp;
/* f460b7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* f460b9: jns 0xf460db */
  if (!sf) goto L_f460db;
L_f460bb: /* f460bb: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f460bd: mov edx, eax */
  edx = eax;
/* f460bf: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f460c5: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f460c7: mov byte ptr [eax + edi + 2], cl */
  W8((uint32_t)(eax + edi + 0x2u), (ecx & 0xffu));
/* f460cb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* f460cf: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* f460d1: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f460d7: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_f460db: /* f460db: mov al, byte ptr [esi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f460e1: imul byte ptr [esi + 0xd8] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(esi + 0xd8u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* f460e7: add al, byte ptr [esi + 0xed] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0xedu)));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f460ed: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f460f3: mov byte ptr [ecx + edi + 4], al */
  W8((uint32_t)(ecx + edi + 0x4u), (eax & 0xffu));
/* f460f7: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f460fd: mov byte ptr [eax + edi + 5], dl */
  W8((uint32_t)(eax + edi + 0x5u), (edx & 0xffu));
/* f46101: mov al, byte ptr [esp + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* f46105: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4610b: mov byte ptr [ecx + edi + 7], al */
  W8((uint32_t)(ecx + edi + 0x7u), (eax & 0xffu));
/* f4610f: cmp byte ptr [esi + 0xf0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f46116: jne 0xf461a3 */
  if (!zf) goto L_f461a3;
L_f4611c: /* f4611c: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f46122: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46128: jge 0xf461a3 */
  if ((sf == of)) goto L_f461a3;
L_f4612a: /* f4612a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* f4612e: mov dl, byte ptr [esi + 0xe0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f46134: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f46137: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f4613d: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46143: mov byte ptr [ecx + eax*8], dl */
  W8((uint32_t)(ecx + eax*8), (edx & 0xffu));
/* f46146: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f4614c: mov cl, byte ptr [edi + ebp + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x2u))) & 0xffu);
/* f46150: mov byte ptr [ebp + eax*8 + 2], cl */
  W8((uint32_t)(ebp + eax*8 + 0x2u), (ecx & 0xffu));
/* f46154: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4615a: mov byte ptr [ecx + eax*8 + 3], bl */
  W8((uint32_t)(ecx + eax*8 + 0x3u), (ebx & 0xffu));
/* f4615e: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46164: mov dl, byte ptr [esi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f4616a: mov byte ptr [ecx + eax*8 + 1], dl */
  W8((uint32_t)(ecx + eax*8 + 0x1u), (edx & 0xffu));
/* f4616e: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f46174: mov cl, byte ptr [edi + ebp + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x4u))) & 0xffu);
/* f46178: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4617c: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4617f: mov byte ptr [ebp + eax*8 + 4], cl */
  W8((uint32_t)(ebp + eax*8 + 0x4u), (ecx & 0xffu));
/* f46183: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46189: mov byte ptr [ecx + eax*8 + 5], dl */
  W8((uint32_t)(ecx + eax*8 + 0x5u), (edx & 0xffu));
/* f4618d: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46193: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* f46197: mov dl, byte ptr [esp + 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* f4619b: mov byte ptr [ecx + eax*8 + 7], dl */
  W8((uint32_t)(ecx + eax*8 + 0x7u), (edx & 0xffu));
/* f4619f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_f461a3: /* f461a3: cmp byte ptr [esi + 0xf0], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f461aa: jne 0xf46264 */
  if (!zf) goto L_f46264;
L_f461b0: /* f461b0: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f461b6: mov ecx, dword ptr [esi + 0xf4] */
  ecx = R32((uint32_t)(esi + 0xf4u));
/* f461bc: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f461bf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f461c1: jg 0xf46264 */
  if ((!zf && sf == of)) goto L_f46264;
L_f461c7: /* f461c7: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f461cf: nop  */
L_f461d0: /* f461d0: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f461d6: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* f461d9: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* f461df: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f461e5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f461e9: mov dl, byte ptr [esi + 0xe0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f461ef: mov byte ptr [eax + ecx*8], dl */
  W8((uint32_t)(eax + ecx*8), (edx & 0xffu));
/* f461f2: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f461f8: mov al, byte ptr [edi + ebp + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x2u))) & 0xffu);
/* f461fc: mov byte ptr [ebp + ecx*8 + 2], al */
  W8((uint32_t)(ebp + ecx*8 + 0x2u), (eax & 0xffu));
/* f46200: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46206: mov byte ptr [eax + ecx*8 + 3], bl */
  W8((uint32_t)(eax + ecx*8 + 0x3u), (ebx & 0xffu));
/* f4620a: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46210: mov bl, byte ptr [esi + 0xe8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f46216: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4621a: mov byte ptr [eax + ecx*8 + 1], bl */
  W8((uint32_t)(eax + ecx*8 + 0x1u), (ebx & 0xffu));
/* f4621e: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* f46222: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f46228: mov bl, 0x55 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x55u) & 0xffu);
/* f4622a: imul bl */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)((ebx & 0xffu));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* f4622c: mov bl, byte ptr [edi + ebp + 4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x4u))) & 0xffu);
/* f46230: add bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46232: mov byte ptr [ebp + ecx*8 + 4], bl */
  W8((uint32_t)(ebp + ecx*8 + 0x4u), (ebx & 0xffu));
/* f46236: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4623c: mov bl, byte ptr [esp + 0x1c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* f46240: mov byte ptr [eax + ecx*8 + 5], dl */
  W8((uint32_t)(eax + ecx*8 + 0x5u), (edx & 0xffu));
/* f46244: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4624a: mov byte ptr [eax + ecx*8 + 7], bl */
  W8((uint32_t)(eax + ecx*8 + 0x7u), (ebx & 0xffu));
/* f4624e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f46252: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f46256: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f46257: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4625a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4625e: jl 0xf461d0 */
  if ((sf != of)) goto L_f461d0;
L_f46264: /* f46264: cmp byte ptr [esi + 0xf0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4626b: jne 0xf46665 */
  if (!zf) goto L_f46665;
L_f46271: /* f46271: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f46277: mov eax, dword ptr [esi + 0xf4] */
  eax = R32((uint32_t)(esi + 0xf4u));
/* f4627d: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f46280: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46282: jg 0xf46665 */
  if ((!zf && sf == of)) goto L_f46665;
L_f46288: /* f46288: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f46290: jmp 0xf462a0 */
  goto L_f462a0;
L_f46292: /* f46292: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f46296: jmp 0xf462a0 */
  goto L_f462a0;
L_f462a0: /* f462a0: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f462a6: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f462a9: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f462af: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f462b5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f462b9: mov dl, byte ptr [esi + 0xe0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f462bf: mov byte ptr [ecx + eax*8], dl */
  W8((uint32_t)(ecx + eax*8), (edx & 0xffu));
/* f462c2: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f462c8: mov cl, byte ptr [edi + ebp + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x2u))) & 0xffu);
/* f462cc: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f462d0: mov byte ptr [ebp + eax*8 + 2], cl */
  W8((uint32_t)(ebp + eax*8 + 0x2u), (ecx & 0xffu));
/* f462d4: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f462da: mov byte ptr [ecx + eax*8 + 3], bl */
  W8((uint32_t)(ecx + eax*8 + 0x3u), (ebx & 0xffu));
/* f462de: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f462e4: mov bl, byte ptr [esi + 0xe8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f462ea: mov byte ptr [ecx + eax*8 + 1], bl */
  W8((uint32_t)(ecx + eax*8 + 0x1u), (ebx & 0xffu));
/* f462ee: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f462f4: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* f462f8: mov bl, byte ptr [edi + ebp + 4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp + 0x4u))) & 0xffu);
/* f462fc: shl cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 6;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f462ff: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46301: mov byte ptr [ebp + eax*8 + 4], bl */
  W8((uint32_t)(ebp + eax*8 + 0x4u), (ebx & 0xffu));
/* f46305: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4630b: mov bl, byte ptr [esp + 0x1c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* f4630f: mov byte ptr [ecx + eax*8 + 5], dl */
  W8((uint32_t)(ecx + eax*8 + 0x5u), (edx & 0xffu));
/* f46313: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46319: mov byte ptr [ecx + eax*8 + 7], bl */
  W8((uint32_t)(ecx + eax*8 + 0x7u), (ebx & 0xffu));
/* f4631d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f46321: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f46322: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46325: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f46329: jl 0xf46292 */
  if ((sf != of)) goto L_f46292;
L_f4632f: /* f4632f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46330: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46332: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46333: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46336: ret 8 */
  esp += 12; SPILL(); return;
L_f46339: /* f46339: mov al, byte ptr [esi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f4633f: imul byte ptr [esi + 0xd8] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(esi + 0xd8u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* f46345: mov cl, byte ptr [esi + 0xed] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xedu))) & 0xffu);
/* f4634b: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46351: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46353: mov byte ptr [edx + edi + 4], al */
  W8((uint32_t)(edx + edi + 0x4u), (eax & 0xffu));
/* f46357: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4635d: mov cl, byte ptr [esi + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f46363: mov byte ptr [eax + edi + 5], cl */
  W8((uint32_t)(eax + edi + 0x5u), (ecx & 0xffu));
/* f46367: mov dl, byte ptr [esi + 0xee] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeeu))) & 0xffu);
/* f4636d: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46373: add dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46376: mov byte ptr [eax + edi + 7], dl */
  W8((uint32_t)(eax + edi + 0x7u), (edx & 0xffu));
/* f4637a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4637b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4637c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4637d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4637e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46381: ret 8 */
  esp += 12; SPILL(); return;
L_f46384: /* f46384: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4638a: mov dl, byte ptr [esi + 0xe9] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f46390: mov byte ptr [ecx + edi + 1], dl */
  W8((uint32_t)(ecx + edi + 0x1u), (edx & 0xffu));
/* f46394: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4639a: mov cl, byte ptr [esi + 0xed] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xedu))) & 0xffu);
/* f463a0: mov byte ptr [eax + edi + 4], cl */
  W8((uint32_t)(eax + edi + 0x4u), (ecx & 0xffu));
/* f463a4: mov al, byte ptr [esi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f463aa: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f463b0: mov byte ptr [edx + edi + 5], al */
  W8((uint32_t)(edx + edi + 0x5u), (eax & 0xffu));
/* f463b4: mov cl, byte ptr [esi + 0xee] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeeu))) & 0xffu);
/* f463ba: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f463c0: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f463c3: mov byte ptr [edx + edi + 6], cl */
  W8((uint32_t)(edx + edi + 0x6u), (ecx & 0xffu));
/* f463c7: mov al, byte ptr [esi + 0xef] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xefu))) & 0xffu);
/* f463cd: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f463d3: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f463d5: mov byte ptr [ecx + edi + 7], al */
  W8((uint32_t)(ecx + edi + 0x7u), (eax & 0xffu));
/* f463d9: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f463df: mov cl, byte ptr [edx + edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + edi + 0x6u))) & 0xffu);
/* f463e3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f463e5: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* f463e8: jne 0xf463ed */
  if (!zf) goto L_f463ed;
L_f463ea: /* f463ea: mov byte ptr [eax], 0x1e */
  W8((uint32_t)(eax), 0x1eu);
L_f463ed: /* f463ed: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f463f3: mov cl, byte ptr [eax + edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi + 0x7u))) & 0xffu);
/* f463f7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f463f9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f463fb: jne 0xf46665 */
  if (!zf) goto L_f46665;
L_f46401: /* f46401: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46402: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46404: mov byte ptr [eax], 0x1d */
  W8((uint32_t)(eax), 0x1du);
/* f46407: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46408: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4640b: ret 8 */
  esp += 12; SPILL(); return;
L_f4640e: /* f4640e: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46414: mov dl, byte ptr [esi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f4641a: mov byte ptr [ecx + edi + 1], dl */
  W8((uint32_t)(ecx + edi + 0x1u), (edx & 0xffu));
/* f4641e: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46424: mov cl, byte ptr [esi + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f4642a: mov byte ptr [eax + edi + 6], cl */
  W8((uint32_t)(eax + edi + 0x6u), (ecx & 0xffu));
/* f4642e: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46434: mov cl, byte ptr [edx + edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + edi + 0x6u))) & 0xffu);
/* f46438: cmp cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4643b: lea eax, [edx + edi + 6] */
  eax = (uint32_t)(edx + edi + 0x6u);
/* f4643f: jae 0xf46444 */
  if (!cf) goto L_f46444;
L_f46441: /* f46441: mov byte ptr [eax], 8 */
  W8((uint32_t)(eax), 0x8u);
L_f46444: /* f46444: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4644a: mov byte ptr [eax + edi + 7], 0x60 */
  W8((uint32_t)(eax + edi + 0x7u), 0x60u);
/* f4644f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46450: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46452: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46453: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46456: ret 8 */
  esp += 12; SPILL(); return;
L_f46459: /* f46459: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4645f: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* f46461: mov byte ptr [ecx + edi + 4], al */
  W8((uint32_t)(ecx + edi + 0x4u), (eax & 0xffu));
/* f46465: mov cl, byte ptr [esi + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f4646b: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46471: mov byte ptr [edx + edi + 5], cl */
  W8((uint32_t)(edx + edi + 0x5u), (ecx & 0xffu));
/* f46475: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4647b: mov byte ptr [edx + edi + 6], al */
  W8((uint32_t)(edx + edi + 0x6u), (eax & 0xffu));
/* f4647f: mov cl, byte ptr [esi + 0xeb] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xebu))) & 0xffu);
/* f46485: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46487: sub al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46489: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4648f: mov byte ptr [ecx + edi + 7], al */
  W8((uint32_t)(ecx + edi + 0x7u), (eax & 0xffu));
/* f46493: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46494: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46496: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4649a: ret 8 */
  esp += 12; SPILL(); return;
L_f4649d: /* f4649d: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f464a3: mov al, byte ptr [esi + 0xed] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xedu))) & 0xffu);
/* f464a9: mov byte ptr [edx + edi + 4], al */
  W8((uint32_t)(edx + edi + 0x4u), (eax & 0xffu));
/* f464ad: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f464b3: mov dl, byte ptr [esi + 0xe9] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f464b9: mov byte ptr [ecx + edi + 5], dl */
  W8((uint32_t)(ecx + edi + 0x5u), (edx & 0xffu));
/* f464bd: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f464c3: mov cl, byte ptr [esi + 0xec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f464c9: mov byte ptr [eax + edi + 6], cl */
  W8((uint32_t)(eax + edi + 0x6u), (ecx & 0xffu));
/* f464cd: mov al, byte ptr [esi + 0xeb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xebu))) & 0xffu);
/* f464d3: or dl, 0xff */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f464d6: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f464d8: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f464de: mov byte ptr [eax + edi + 7], dl */
  W8((uint32_t)(eax + edi + 0x7u), (edx & 0xffu));
/* f464e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f464e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f464e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f464e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f464e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f464e9: ret 8 */
  esp += 12; SPILL(); return;
L_f464ec: /* f464ec: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f464f2: mov dl, byte ptr [esi + 0xed] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xedu))) & 0xffu);
/* f464f8: mov byte ptr [ecx + edi + 4], dl */
  W8((uint32_t)(ecx + edi + 0x4u), (edx & 0xffu));
/* f464fc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46502: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* f46504: mov byte ptr [ecx + edi + 5], al */
  W8((uint32_t)(ecx + edi + 0x5u), (eax & 0xffu));
/* f46508: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4650e: mov byte ptr [edx + edi + 6], al */
  W8((uint32_t)(edx + edi + 0x6u), (eax & 0xffu));
/* f46512: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f46518: mov cl, byte ptr [esi + 0xec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f4651e: mov byte ptr [eax + edi + 7], cl */
  W8((uint32_t)(eax + edi + 0x7u), (ecx & 0xffu));
/* f46522: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46523: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46524: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46525: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46526: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46529: ret 8 */
  esp += 12; SPILL(); return;
L_f4652c: /* f4652c: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46532: mov dl, byte ptr [esi + 0xeb] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xebu))) & 0xffu);
/* f46538: mov byte ptr [ecx + edi + 6], dl */
  W8((uint32_t)(ecx + edi + 0x6u), (edx & 0xffu));
L_f4653c: /* f4653c: mov al, byte ptr [esi + 0xee] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeeu))) & 0xffu);
/* f46542: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f46548: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4654a: mov byte ptr [ecx + edi + 4], al */
  W8((uint32_t)(ecx + edi + 0x4u), (eax & 0xffu));
/* f4654e: mov dl, byte ptr [esi + 0xef] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xefu))) & 0xffu);
/* f46554: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4655a: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* f4655c: add dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4655f: mov byte ptr [eax + edi + 5], dl */
  W8((uint32_t)(eax + edi + 0x5u), (edx & 0xffu));
/* f46563: mov al, byte ptr [esi + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe9u))) & 0xffu);
/* f46569: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4656f: or cl, 0xff */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46572: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46574: mov byte ptr [edx + edi + 7], cl */
  W8((uint32_t)(edx + edi + 0x7u), (ecx & 0xffu));
/* f46578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46579: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4657a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4657b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4657c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4657f: ret 8 */
  esp += 12; SPILL(); return;
L_f46582: /* f46582: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f46583: js 0xf4663c */
  if (sf) goto L_f4663c;
L_f46589: /* f46589: mov edi, dword ptr [esi + 0xfc] */
  edi = R32((uint32_t)(esi + 0xfcu));
/* f4658f: cmp byte ptr [edi + eax*8], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax*8))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f46592: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* f46595: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* f46599: jne 0xf46582 */
  if (!zf) goto L_f46582;
L_f4659b: /* f4659b: cmp byte ptr [edi + 7], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4659f: jne 0xf46582 */
  if (!zf) goto L_f46582;
L_f465a1: /* f465a1: dec dword ptr [esi + 0xf8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xf8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0xf8u), r);
  }
/* f465a7: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f465ad: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* f465b1: mov bl, byte ptr [0xf5f3d4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xf5f3d4u))) & 0xffu);
/* f465b7: mov byte ptr [edx + eax*8 + 2], bl */
  W8((uint32_t)(edx + eax*8 + 0x2u), (ebx & 0xffu));
/* f465bb: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f465c1: mov bl, byte ptr [0xf5f3d0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xf5f3d0u))) & 0xffu);
/* f465c7: mov byte ptr [edx + eax*8 + 3], bl */
  W8((uint32_t)(edx + eax*8 + 0x3u), (ebx & 0xffu));
/* f465cb: mov dl, byte ptr [esi + 0xe8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe8u))) & 0xffu);
/* f465d1: mov edi, dword ptr [esi + 0xfc] */
  edi = R32((uint32_t)(esi + 0xfcu));
/* f465d7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f465db: or dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f465de: mov byte ptr [edi + eax*8 + 1], dl */
  W8((uint32_t)(edi + eax*8 + 0x1u), (edx & 0xffu));
/* f465e2: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f465e8: lea edi, [edx + eax*8] */
  edi = (uint32_t)(edx + eax*8);
/* f465eb: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f465ef: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f465f1: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f465f5: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f465f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f465f9: jge 0xf46602 */
  if ((sf == of)) goto L_f46602;
L_f465fb: /* f465fb: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* f465fd: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* f46600: jmp 0xf46605 */
  goto L_f46605;
L_f46602: /* f46602: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_f46605: /* f46605: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f46607: jge 0xf46610 */
  if ((sf == of)) goto L_f46610;
L_f46609: /* f46609: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* f4660b: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* f4660e: jmp 0xf46613 */
  goto L_f46613;
L_f46610: /* f46610: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
L_f46613: /* f46613: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46615: jne 0xf4661e */
  if (!zf) goto L_f4661e;
L_f46617: /* f46617: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46619: jne 0xf4661e */
  if (!zf) goto L_f4661e;
L_f4661b: /* f4661b: mov byte ptr [edi + 1], bl */
  W8((uint32_t)(edi + 0x1u), (ebx & 0xffu));
L_f4661e: /* f4661e: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46624: mov byte ptr [edx + eax*8 + 4], cl */
  W8((uint32_t)(edx + eax*8 + 0x4u), (ecx & 0xffu));
/* f46628: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4662e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4662f: mov byte ptr [ecx + eax*8 + 5], bl */
  W8((uint32_t)(ecx + eax*8 + 0x5u), (ebx & 0xffu));
/* f46633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46635: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46636: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46639: ret 8 */
  esp += 12; SPILL(); return;
L_f4663c: /* f4663c: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f46642: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46648: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f46649: mov byte ptr [edx + eax*8 + 7], 0 */
  W8((uint32_t)(edx + eax*8 + 0x7u), 0x0u);
/* f4664e: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f46654: mov byte ptr [edx + eax*8 + 1], 0 */
  W8((uint32_t)(edx + eax*8 + 0x1u), 0x0u);
/* f46659: mov dword ptr [0xf5f3d4], ecx */
  W32((uint32_t)(0xf5f3d4u), ecx);
/* f4665f: mov dword ptr [0xf5f3d0], ebx */
  W32((uint32_t)(0xf5f3d0u), ebx);
L_f46665: /* f46665: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46666: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f46667: /* f46667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46668: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46669: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4666c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f46900(void) {
  LOAD_REGS();
L_f46900: /* f46900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f46901: mov esi, dword ptr [ecx + 0xf8] */
  esi = R32((uint32_t)(ecx + 0xf8u));
L_f46907: /* f46907: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f46908: js 0xf46946 */
  if (sf) goto L_f46946;
L_f4690a: /* f4690a: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* f46910: lea edx, [eax + esi*8] */
  edx = (uint32_t)(eax + esi*8);
/* f46913: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* f46915: cmp al, 0x17 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x17u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f46917: je 0xf4691d */
  if (zf) goto L_f4691d;
L_f46919: /* f46919: cmp al, 0x18 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4691b: jne 0xf46907 */
  if (!zf) goto L_f46907;
L_f4691d: /* f4691d: mov al, byte ptr [edx + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x7u))) & 0xffu);
/* f46920: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46922: jne 0xf46907 */
  if (!zf) goto L_f46907;
L_f46924: /* f46924: mov al, byte ptr [ecx + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xecu))) & 0xffu);
/* f4692a: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f46930: mov byte ptr [edx + esi*8 + 7], al */
  W8((uint32_t)(edx + esi*8 + 0x7u), (eax & 0xffu));
/* f46934: mov ecx, dword ptr [ecx + 0xfc] */
  ecx = R32((uint32_t)(ecx + 0xfcu));
/* f4693a: lea eax, [ecx + esi*8 + 7] */
  eax = (uint32_t)(ecx + esi*8 + 0x7u);
/* f4693e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f46941: jne 0xf46946 */
  if (!zf) goto L_f46946;
L_f46943: /* f46943: mov byte ptr [eax], 1 */
  W8((uint32_t)(eax), 0x1u);
L_f46946: /* f46946: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46947: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f46970(void) {
  LOAD_REGS();
L_f46970: /* f46970: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* f46976: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f46978: jle 0xf469e4 */
  if ((zf || sf != of)) goto L_f469e4;
L_f4697a: /* f4697a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4697b: xor edi, edi */
  edi = 0;
/* f4697d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4697f: jle 0xf469e3 */
  if ((zf || sf != of)) goto L_f469e3;
L_f46981: /* f46981: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46982: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* f46986: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f46987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f46988: jmp 0xf46990 */
  goto L_f46990;
L_f46990: /* f46990: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* f46996: movzx esi, byte ptr [eax + edi*8 + 2] */
  esi = (uint32_t)(R8((uint32_t)(eax + edi*8 + 0x2u)));
/* f4699b: mov edx, ebx */
  edx = ebx;
/* f4699d: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* f4699f: jns 0xf469a3 */
  if (!sf) goto L_f469a3;
L_f469a1: /* f469a1: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_f469a3: /* f469a3: movzx ebp, byte ptr [eax + edi*8 + 3] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edi*8 + 0x3u)));
/* f469a8: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f469ac: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f469ae: jns 0xf469b2 */
  if (!sf) goto L_f469b2;
L_f469b0: /* f469b0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_f469b2: /* f469b2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f469b4: cmp dword ptr [esp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f469b8: jl 0xf469d5 */
  if ((sf != of)) goto L_f469d5;
L_f469ba: /* f469ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* f469c0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f469c1: mov dword ptr [ecx + 0xf8], edx */
  W32((uint32_t)(ecx + 0xf8u), edx);
/* f469c7: mov esi, dword ptr [eax + edx*8] */
  esi = R32((uint32_t)(eax + edx*8));
/* f469ca: mov dword ptr [eax + edi*8], esi */
  W32((uint32_t)(eax + edi*8), esi);
/* f469cd: mov edx, dword ptr [eax + edx*8 + 4] */
  edx = R32((uint32_t)(eax + edx*8 + 0x4u));
/* f469d1: mov dword ptr [eax + edi*8 + 4], edx */
  W32((uint32_t)(eax + edi*8 + 0x4u), edx);
L_f469d5: /* f469d5: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* f469db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f469dc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f469de: jl 0xf46990 */
  if ((sf != of)) goto L_f46990;
L_f469e0: /* f469e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f469e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f469e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f469e3: /* f469e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_f469e4: /* f469e4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4698a(void) {
  LOAD_REGS();
L_f4698a: /* f4698a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f46990: /* f46990: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* f46996: movzx esi, byte ptr [eax + edi*8 + 2] */
  esi = (uint32_t)(R8((uint32_t)(eax + edi*8 + 0x2u)));
/* f4699b: mov edx, ebx */
  edx = ebx;
/* f4699d: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* f4699f: jns 0xf469a3 */
  if (!sf) goto L_f469a3;
L_f469a1: /* f469a1: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_f469a3: /* f469a3: movzx ebp, byte ptr [eax + edi*8 + 3] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edi*8 + 0x3u)));
/* f469a8: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f469ac: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* f469ae: jns 0xf469b2 */
  if (!sf) goto L_f469b2;
L_f469b0: /* f469b0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_f469b2: /* f469b2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f469b4: cmp dword ptr [esp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f469b8: jl 0xf469d5 */
  if ((sf != of)) goto L_f469d5;
L_f469ba: /* f469ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* f469c0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f469c1: mov dword ptr [ecx + 0xf8], edx */
  W32((uint32_t)(ecx + 0xf8u), edx);
/* f469c7: mov esi, dword ptr [eax + edx*8] */
  esi = R32((uint32_t)(eax + edx*8));
/* f469ca: mov dword ptr [eax + edi*8], esi */
  W32((uint32_t)(eax + edi*8), esi);
/* f469cd: mov edx, dword ptr [eax + edx*8 + 4] */
  edx = R32((uint32_t)(eax + edx*8 + 0x4u));
/* f469d1: mov dword ptr [eax + edi*8 + 4], edx */
  W32((uint32_t)(eax + edi*8 + 0x4u), edx);
L_f469d5: /* f469d5: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* f469db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f469dc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f469de: jl 0xf46990 */
  if ((sf != of)) goto L_f46990;
L_f469e0: /* f469e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f469e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f469e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f469e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f469e4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f46a10(void) {
  LOAD_REGS();
L_f46a10: /* f46a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f46a11: mov ebp, esp */
  ebp = esp;
/* f46a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f46a15: push 0xf51010 */
  { uint32_t v = 0xf51010u; esp -= 4; W32(esp, v); }
/* f46a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f46a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f46a28: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f46a2b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f46a2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46a2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f46a30: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* f46a33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f46a34: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f46a37: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f46a3a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f46a3d: xor eax, eax */
  eax = 0;
/* f46a3f: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f46a41: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f46a43: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f46a48: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* f46a4b: jne 0xf46a64 */
  if (!zf) goto L_f46a64;
L_f46a4d: /* f46a4d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f46a4f: jne 0xf46a7a */
  if (!zf) goto L_f46a7a;
L_f46a51: /* f46a51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f46a54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46a55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46a56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f46a5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46a5e: mov esp, ebp */
  esp = ebp;
/* f46a60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46a61: ret 0x14 */
  esp += 24; SPILL(); return;
L_f46a64: /* f46a64: jge 0xf46a6f */
  if ((sf == of)) goto L_f46a6f;
L_f46a66: /* f46a66: mov dword ptr [ebp + 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0x14u), 0xffffffffu);
/* f46a6d: jmp 0xf46a7d */
  goto L_f46a7d;
L_f46a6f: /* f46a6f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a71: mov dword ptr [ebp + 0x14], 1 */
  W32((uint32_t)(ebp + 0x14u), 0x1u);
/* f46a78: jg 0xf46a7d */
  if ((!zf && sf == of)) goto L_f46a7d;
L_f46a7a: /* f46a7a: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_f46a7d: /* f46a7d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a7f: jge 0xf46a8a */
  if ((sf == of)) goto L_f46a8a;
L_f46a81: /* f46a81: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* f46a88: jmp 0xf46a94 */
  goto L_f46a94;
L_f46a8a: /* f46a8a: xor ebx, ebx */
  ebx = 0;
/* f46a8c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a8e: setg bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* f46a91: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_f46a94: /* f46a94: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a96: jge 0xf46a9a */
  if ((sf == of)) goto L_f46a9a;
L_f46a98: /* f46a98: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_f46a9a: /* f46a9a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46a9c: jge 0xf46aa0 */
  if ((sf == of)) goto L_f46aa0;
L_f46a9e: /* f46a9e: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_f46aa0: /* f46aa0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46aa2: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* f46aa5: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* f46aa8: mov dword ptr [ebp + 0xc], 1 */
  W32((uint32_t)(ebp + 0xcu), 0x1u);
/* f46aaf: jl 0xf46aff */
  if ((sf != of)) goto L_f46aff;
L_f46ab1: /* f46ab1: lea ebx, [edi + edi] */
  ebx = (uint32_t)(edi + edi);
/* f46ab4: mov edi, ebx */
  edi = ebx;
/* f46ab6: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f46ab9: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f46abc: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f46abe: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_f46ac0: /* f46ac0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46ac3: jg 0xf46a51 */
  if ((!zf && sf == of)) goto L_f46a51;
L_f46ac5: /* f46ac5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f46ac8: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f46acb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f46acc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f46acf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f46ad0: call 0xf4130c */
  esp -= 4; W32(esp, 0xf46ad5u); SPILL(); f_f4130c(); if (g_unwind) return; RELOAD();
/* f46ad5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f46ad7: jge 0xf46ade */
  if ((sf == of)) goto L_f46ade;
L_f46ad9: /* f46ad9: add edi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f46adc: jmp 0xf46aeb */
  goto L_f46aeb;
L_f46ade: /* f46ade: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f46ae1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f46ae4: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f46ae6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f46ae8: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_f46aeb: /* f46aeb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f46aee: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f46af1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46af4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f46af6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f46af7: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* f46afa: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f46afd: jmp 0xf46ac0 */
  goto L_f46ac0;
L_f46aff: /* f46aff: lea ebx, [esi + esi] */
  ebx = (uint32_t)(esi + esi);
/* f46b02: mov esi, ebx */
  esi = ebx;
/* f46b04: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* f46b07: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f46b0a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f46b0c: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f46b0e: mov edi, edi */
  edi = edi;
L_f46b10: /* f46b10: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46b13: jg 0xf46a51 */
  if ((!zf && sf == of)) goto L_f46a51;
L_f46b19: /* f46b19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f46b1c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f46b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46b20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f46b21: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f46b24: call 0xf4130c */
  esp -= 4; W32(esp, 0xf46b29u); SPILL(); f_f4130c(); if (g_unwind) return; RELOAD();
/* f46b29: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f46b2b: jge 0xf46b32 */
  if ((sf == of)) goto L_f46b32;
L_f46b2d: /* f46b2d: add esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f46b30: jmp 0xf46b3f */
  goto L_f46b3f;
L_f46b32: /* f46b32: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f46b35: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* f46b38: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f46b3a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f46b3c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_f46b3f: /* f46b3f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f46b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f46b45: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f46b47: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46b4a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f46b4b: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f46b4e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f46b51: jmp 0xf46b10 */
  goto L_f46b10;
}

void f_f46b53(void) {
  LOAD_REGS();
L_f46b53: /* f46b53: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f46b56: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f46b5b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f46b5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f46b5f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f46b62: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf46b67u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f46b67(); return;
}

void f_f46b67(void) {
  LOAD_REGS();
L_f46b67: /* f46b67: push 0xf5588c */
  { uint32_t v = 0xf5588cu; esp -= 4; W32(esp, v); }
/* f46b6c: push 0xf5b58c */
  { uint32_t v = 0xf5b58cu; esp -= 4; W32(esp, v); }
/* f46b71: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf46b77u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f46b77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46b7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f46b7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f46b7e: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf46b83u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f46b83: guest_badaddr(0xf46b83); return;
}

void f_f46bf0(void) {
  LOAD_REGS();
L_f46bf0: /* f46bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f46bf1: mov ebp, esp */
  ebp = esp;
/* f46bf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f46bf5: push 0xf51020 */
  { uint32_t v = 0xf51020u; esp -= 4; W32(esp, v); }
/* f46bfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f46c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46c01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f46c08: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f46c0b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f46c0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46c0f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f46c12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f46c13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f46c14: mov edi, eax */
  edi = eax;
/* f46c16: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f46c19: mov esi, ecx */
  esi = ecx;
/* f46c1b: mov ecx, eax */
  ecx = eax;
/* f46c1d: mov eax, dword ptr [0xf5f3e4] */
  eax = R32((uint32_t)(0xf5f3e4u));
/* f46c22: xor edx, edx */
  edx = 0;
/* f46c24: and edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* f46c27: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f46c29: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46c2c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f46c2f: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* f46c32: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f46c35: jne 0xf46c42 */
  if (!zf) goto L_f46c42;
L_f46c37: /* f46c37: cmp dword ptr [0xf5f3e0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3e0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f46c3d: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* f46c40: je 0xf46c49 */
  if (zf) goto L_f46c49;
L_f46c42: /* f46c42: mov dword ptr [ebp + 0x10], 1 */
  W32((uint32_t)(ebp + 0x10u), 0x1u);
L_f46c49: /* f46c49: xor edx, edx */
  edx = 0;
/* f46c4b: cmp dword ptr [0xf5f3dc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3dcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f46c51: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f46c54: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f46c57: xor edx, edx */
  edx = 0;
/* f46c59: cmp dword ptr [0xf5f3d8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3d8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f46c5f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f46c62: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46c64: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* f46c67: je 0xf46c94 */
  if (zf) goto L_f46c94;
L_f46c69: /* f46c69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46c6b: je 0xf46c84 */
  if (zf) goto L_f46c84;
L_f46c6d: /* f46c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46c6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46c6f: mov ecx, esi */
  ecx = esi;
/* f46c71: mov byte ptr [esi + 0x511], bl */
  W8((uint32_t)(esi + 0x511u), (ebx & 0xffu));
/* f46c77: mov byte ptr [esi + 0x512], al */
  W8((uint32_t)(esi + 0x512u), (eax & 0xffu));
/* f46c7d: call 0xf4130c */
  esp -= 4; W32(esp, 0xf46c82u); SPILL(); f_f4130c(); if (g_unwind) return; RELOAD();
/* f46c82: jmp 0xf46ce7 */
  goto L_f46ce7;
L_f46c84: /* f46c84: mov byte ptr [esi + 0x511], 0 */
  W8((uint32_t)(esi + 0x511u), 0x0u);
/* f46c8b: mov byte ptr [esi + 0x512], 0 */
  W8((uint32_t)(esi + 0x512u), 0x0u);
/* f46c92: jmp 0xf46cde */
  goto L_f46cde;
L_f46c94: /* f46c94: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46c96: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f46c99: je 0xf46cda */
  if (zf) goto L_f46cda;
L_f46c9b: /* f46c9b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46c9d: je 0xf46cfb */
  if (zf) goto L_f46cfb;
L_f46c9f: /* f46c9f: cmp byte ptr [esi + 0xe0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xe0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f46ca6: jae 0xf46ccf */
  if (!cf) goto L_f46ccf;
L_f46ca8: /* f46ca8: mov ecx, dword ptr [0xf5f3e4] */
  ecx = R32((uint32_t)(0xf5f3e4u));
/* f46cae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f46cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46cb1: mov eax, dword ptr [0xf5f3e0] */
  eax = R32((uint32_t)(0xf5f3e0u));
/* f46cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46cb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46cb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f46cb9: mov ecx, esi */
  ecx = esi;
/* f46cbb: call 0xf41073 */
  esp -= 4; W32(esp, 0xf46cc0u); SPILL(); f_f41073(); if (g_unwind) return; RELOAD();
/* f46cc0: cmp byte ptr [esi + 0xe0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xe0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f46cc7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46cca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f46ccd: jb 0xf46cf4 */
  if (cf) goto L_f46cf4;
L_f46ccf: /* f46ccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46cd1: mov ecx, esi */
  ecx = esi;
/* f46cd3: call 0xf4130c */
  esp -= 4; W32(esp, 0xf46cd8u); SPILL(); f_f4130c(); if (g_unwind) return; RELOAD();
/* f46cd8: jmp 0xf46ce7 */
  goto L_f46ce7;
L_f46cda: /* f46cda: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46cdc: je 0xf46d0e */
  if (zf) goto L_f46d0e;
L_f46cde: /* f46cde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46cdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46ce0: mov ecx, esi */
  ecx = esi;
/* f46ce2: call 0xf4105a */
  esp -= 4; W32(esp, 0xf46ce7u); SPILL(); f_f4105a(); if (g_unwind) return; RELOAD();
L_f46ce7: /* f46ce7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f46cea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46cec: jne 0xf46d08 */
  if (!zf) goto L_f46d08;
L_f46cee: /* f46cee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46cf1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f46cf4: /* f46cf4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f46cf7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46cf9: jne 0xf46d0e */
  if (!zf) goto L_f46d0e;
L_f46cfb: /* f46cfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46cfd: je 0xf46d0e */
  if (zf) goto L_f46d0e;
L_f46cff: /* f46cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46d01: mov ecx, esi */
  ecx = esi;
/* f46d03: call 0xf4105a */
  esp -= 4; W32(esp, 0xf46d08u); SPILL(); f_f4105a(); if (g_unwind) return; RELOAD();
L_f46d08: /* f46d08: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46d0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f46d0e: /* f46d0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46d10: je 0xf46d31 */
  if (zf) goto L_f46d31;
L_f46d12: /* f46d12: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f46d15: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46d17: jne 0xf46d20 */
  if (!zf) goto L_f46d20;
L_f46d19: /* f46d19: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f46d1c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f46d1e: je 0xf46d31 */
  if (zf) goto L_f46d31;
L_f46d20: /* f46d20: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f46d22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46d23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46d24: mov ecx, esi */
  ecx = esi;
/* f46d26: call 0xf4138e */
  esp -= 4; W32(esp, 0xf46d2bu); SPILL(); f_f4138e(); if (g_unwind) return; RELOAD();
/* f46d2b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f46d2e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f46d31: /* f46d31: mov dword ptr [0xf5f3dc], edi */
  W32((uint32_t)(0xf5f3dcu), edi);
/* f46d37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f46d38: mov dword ptr [0xf5f3d8], ecx */
  W32((uint32_t)(0xf5f3d8u), ecx);
/* f46d3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f46d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f46d42: mov dword ptr [0xf5f3e4], ebx */
  W32((uint32_t)(0xf5f3e4u), ebx);
/* f46d48: mov dword ptr [0xf5f3e0], eax */
  W32((uint32_t)(0xf5f3e0u), eax);
/* f46d4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f46d54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f46d55: mov esp, ebp */
  esp = ebp;
/* f46d57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f46d58: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f46d5b(void) {
  LOAD_REGS();
L_f46d5b: /* f46d5b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f46d5e: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f46d63: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f46d66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f46d67: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f46d6a: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf46d6fu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f46d6f(); return;
}

void f_f46d6f(void) {
  LOAD_REGS();
L_f46d6f: /* f46d6f: push 0xf558d0 */
  { uint32_t v = 0xf558d0u; esp -= 4; W32(esp, v); }
/* f46d74: push 0xf5b594 */
  { uint32_t v = 0xf5b594u; esp -= 4; W32(esp, v); }
/* f46d79: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf46d7fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f46d7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f46d82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f46d84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f46d86: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf46d8bu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f46d8b: guest_badaddr(0xf46d8b); return;
}

void f_f46e00(void) {
  LOAD_REGS();
L_f46e00: /* f46e00: sub esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f46e06: mov dl, byte ptr [esp + 0x12e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12eu))) & 0xffu);
/* f46e0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f46e0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f46e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f46e10: mov esi, ecx */
  esi = ecx;
/* f46e12: mov cl, byte ptr [esp + 0x13b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13bu))) & 0xffu);
/* f46e19: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* f46e1b: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46e1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f46e1e: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* f46e22: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* f46e26: je 0xf46e35 */
  if (zf) goto L_f46e35;
L_f46e28: /* f46e28: movzx edi, cl */
  edi = (uint32_t)((ecx & 0xffu));
/* f46e2b: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* f46e2e: lea ebx, [edi + edi] */
  ebx = (uint32_t)(edi + edi);
/* f46e31: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46e33: jge 0xf46e47 */
  if ((sf == of)) goto L_f46e47;
L_f46e35: /* f46e35: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46e38: je 0xf46eb4 */
  if (zf) goto L_f46eb4;
L_f46e3a: /* f46e3a: movzx edi, cl */
  edi = (uint32_t)((ecx & 0xffu));
/* f46e3d: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* f46e40: lea ebx, [edi + edi] */
  ebx = (uint32_t)(edi + edi);
/* f46e43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46e45: jge 0xf46eb4 */
  if ((sf == of)) goto L_f46eb4;
L_f46e47: /* f46e47: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46e4a: je 0xf46e4e */
  if (zf) goto L_f46e4e;
L_f46e4c: /* f46e4c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_f46e4e: /* f46e4e: mov bl, byte ptr [esp + 0x13c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13cu))) & 0xffu);
/* f46e55: add bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46e57: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f46e5b: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* f46e5f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46e61: mov byte ptr [esp + 0x13c], bl */
  W8((uint32_t)(esp + 0x13cu), (ebx & 0xffu));
/* f46e68: je 0xf46e6c */
  if (zf) goto L_f46e6c;
L_f46e6a: /* f46e6a: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_f46e6c: /* f46e6c: mov bl, byte ptr [esp + 0x13d] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13du))) & 0xffu);
/* f46e73: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* f46e77: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* f46e7b: add bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46e7d: mov al, byte ptr [esp + 0x140] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x140u))) & 0xffu);
/* f46e84: xor dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46e87: mov byte ptr [esp + 0x13d], bl */
  W8((uint32_t)(esp + 0x13du), (ebx & 0xffu));
/* f46e8e: mov bl, byte ptr [esp + 0x144] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x144u))) & 0xffu);
/* f46e95: xor cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a ^ b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f46e98: mov byte ptr [esp + 0x13e], dl */
  W8((uint32_t)(esp + 0x13eu), (edx & 0xffu));
/* f46e9f: mov byte ptr [esp + 0x13f], cl */
  W8((uint32_t)(esp + 0x13fu), (ecx & 0xffu));
/* f46ea6: mov byte ptr [esp + 0x140], bl */
  W8((uint32_t)(esp + 0x140u), (ebx & 0xffu));
/* f46ead: mov byte ptr [esp + 0x144], al */
  W8((uint32_t)(esp + 0x144u), (eax & 0xffu));
L_f46eb4: /* f46eb4: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f46eb6: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f46eb8: jae 0xf46ebc */
  if (!cf) goto L_f46ebc;
L_f46eba: /* f46eba: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_f46ebc: /* f46ebc: movzx ebx, al */
  ebx = (uint32_t)((eax & 0xffu));
/* f46ebf: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  ebx = r;
  }
/* f46ec2: mov ebp, 0 */
  ebp = 0x0u;
/* f46ec7: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f46ecb: mov edi, ebp */
  edi = ebp;
/* f46ecd: jle 0xf46f27 */
  if ((zf || sf != of)) goto L_f46f27;
L_f46ecf: /* f46ecf: nop  */
L_f46ed0: /* f46ed0: mov ecx, dword ptr [0xf5c5c8] */
  ecx = R32((uint32_t)(0xf5c5c8u));
/* f46ed6: mov edx, dword ptr [0xf5c5c8] */
  edx = R32((uint32_t)(0xf5c5c8u));
/* f46edc: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f46ee2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f46ee5: and ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f46eeb: and edx, 0xfc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f46ef1: mov eax, dword ptr [ecx + 0xf5c3c8] */
  eax = R32((uint32_t)(ecx + 0xf5c3c8u));
/* f46ef7: mov dword ptr [0xf5c5c8], edx */
  W32((uint32_t)(0xf5c5c8u), edx);
/* f46efd: xor dword ptr [edx + 0xf5c3c8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xf5c3c8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(edx + 0xf5c3c8u), r);
  }
/* f46f03: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* f46f06: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f46f08: mov byte ptr [esp + edi + 0x38], al */
  W8((uint32_t)(esp + edi + 0x38u), (eax & 0xffu));
/* f46f0c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f46f0d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f46f0f: jl 0xf46ed0 */
  if ((sf != of)) goto L_f46ed0;
L_f46f11: /* f46f11: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f46f15: mov cl, byte ptr [esp + 0x13f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13fu))) & 0xffu);
/* f46f1c: mov dl, byte ptr [esp + 0x13e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13eu))) & 0xffu);
/* f46f23: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_f46f27: /* f46f27: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* f46f2a: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* f46f2d: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46f30: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* f46f34: je 0xf46f3e */
  if (zf) goto L_f46f3e;
L_f46f36: /* f46f36: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* f46f3a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* f46f3c: jmp 0xf46f46 */
  goto L_f46f46;
L_f46f3e: /* f46f3e: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
L_f46f46: /* f46f46: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f46f49: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f46f4d: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* f46f50: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f46f54: je 0xf46f5e */
  if (zf) goto L_f46f5e;
L_f46f56: /* f46f56: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f46f5a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* f46f5c: jmp 0xf46f66 */
  goto L_f46f66;
L_f46f5e: /* f46f5e: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
L_f46f66: /* f46f66: movzx ebp, byte ptr [esp + 0x140] */
  ebp = (uint32_t)(R8((uint32_t)(esp + 0x140u)));
/* f46f6e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f46f72: movzx eax, byte ptr [esp + 0x144] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x144u)));
/* f46f7a: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f46f7c: shl eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f46f7f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f46f80: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xf46f80);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f46f82: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f46f86: mov edi, ebp */
  edi = ebp;
/* f46f88: shl edi, 0x17 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* f46f8b: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f46f8f: cmp byte ptr [esp + 0x13e], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x13eu))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f46f96: jb 0xf47044 */
  if (cf) goto L_f47044;
L_f46f9c: /* f46f9c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f46fa0: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f46fa3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f46fa5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f46fa6: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xf46fa6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f46fa8: movzx ebp, byte ptr [esp + 0x13d] */
  ebp = (uint32_t)(R8((uint32_t)(esp + 0x13du)));
/* f46fb0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* f46fb4: shl ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f46fb7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f46fbb: xor eax, eax */
  eax = 0;
/* f46fbd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f46fbf: jle 0xf470d7 */
  if ((zf || sf != of)) goto L_f470d7;
L_f46fc5: /* f46fc5: jmp 0xf46fd0 */
  goto L_f46fd0;
L_f46fc7: /* f46fc7: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f46fcb: jmp 0xf46fd0 */
  goto L_f46fd0;
L_f46fd0: /* f46fd0: movzx edx, byte ptr [esp + eax + 0x38] */
  edx = (uint32_t)(R8((uint32_t)(esp + eax + 0x38u)));
/* f46fd5: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f46fd9: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* f46fdf: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f46fe1: mov ebx, dword ptr [esi + 0xc8] */
  ebx = R32((uint32_t)(esi + 0xc8u));
/* f46fe7: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f46fe9: mov edx, ebp */
  edx = ebp;
/* f46feb: sar edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f46fee: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f46ff0: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f46ff3: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f46ff5: movzx ecx, byte ptr [esp + 0x13c] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x13cu)));
/* f46ffd: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f46fff: mov cl, byte ptr [esp + 0x24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* f47003: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f47005: mov bl, byte ptr [esp + 0x13c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13cu))) & 0xffu);
/* f4700c: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4700e: add edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f47012: mov byte ptr [esp + 0x13c], bl */
  W8((uint32_t)(esp + 0x13cu), (ebx & 0xffu));
/* f47019: mov esi, dword ptr [esi + 0xac] */
  esi = R32((uint32_t)(esi + 0xacu));
/* f4701f: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* f47022: mov ecx, edi */
  ecx = edi;
/* f47024: sar ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f47027: mov byte ptr [edx + esi], cl */
  W8((uint32_t)(edx + esi), (ecx & 0xffu));
/* f4702a: movzx edx, byte ptr [esp + 0x13e] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x13eu)));
/* f47032: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f47033: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47035: jl 0xf46fc7 */
  if ((sf != of)) goto L_f46fc7;
L_f47037: /* f47037: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f47038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f47039: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4703a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4703b: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f47041: ret 0xc */
  esp += 16; SPILL(); return;
L_f47044: /* f47044: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f47048: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4704b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4704d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4704e: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xf4704e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f47050: movzx ebp, byte ptr [esp + 0x13c] */
  ebp = (uint32_t)(R8((uint32_t)(esp + 0x13cu)));
/* f47058: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* f4705c: shl ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f4705f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f47063: xor eax, eax */
  eax = 0;
/* f47065: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f47067: jle 0xf470d7 */
  if ((zf || sf != of)) goto L_f470d7;
L_f47069: /* f47069: jmp 0xf47070 */
  goto L_f47070;
L_f4706b: /* f4706b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f4706f: nop  */
L_f47070: /* f47070: movzx ecx, byte ptr [esp + eax + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(esp + eax + 0x38u)));
/* f47075: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f47079: mov edx, dword ptr [esi + 0xcc] */
  edx = R32((uint32_t)(esi + 0xccu));
/* f4707f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f47081: mov ebx, dword ptr [esi + 0xc8] */
  ebx = R32((uint32_t)(esi + 0xc8u));
/* f47087: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47089: movzx ecx, byte ptr [esp + 0x13d] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x13du)));
/* f47091: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f47093: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47096: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f47098: mov ecx, ebp */
  ecx = ebp;
/* f4709a: sar ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f4709d: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f4709f: mov bl, byte ptr [esp + 0x13d] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13du))) & 0xffu);
/* f470a6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f470a8: mov cl, byte ptr [esp + 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* f470ac: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f470ae: add edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f470b2: mov byte ptr [esp + 0x13d], bl */
  W8((uint32_t)(esp + 0x13du), (ebx & 0xffu));
/* f470b9: mov esi, dword ptr [esi + 0xac] */
  esi = R32((uint32_t)(esi + 0xacu));
/* f470bf: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* f470c2: mov ecx, edi */
  ecx = edi;
/* f470c4: sar ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f470c7: mov byte ptr [edx + esi], cl */
  W8((uint32_t)(edx + esi), (ecx & 0xffu));
/* f470ca: movzx edx, byte ptr [esp + 0x13f] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x13fu)));
/* f470d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f470d3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f470d5: jl 0xf4706b */
  if ((sf != of)) goto L_f4706b;
L_f470d7: /* f470d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f470d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f470d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f470da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f470db: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f470e1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f471b0(void) {
  LOAD_REGS();
L_f471b0: /* f471b0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f471b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f471b4: mov esi, ecx */
  esi = ecx;
/* f471b6: mov al, byte ptr [esi + 0xec] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xecu))) & 0xffu);
/* f471bc: mov dl, byte ptr [esi + 0xdd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xddu))) & 0xffu);
/* f471c2: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* f471c8: add dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f471ca: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f471d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f471d1: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* f471d7: xor ecx, ecx */
  ecx = 0;
/* f471d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f471db: mov byte ptr [esi + 0xdd], dl */
  W8((uint32_t)(esi + 0xddu), (edx & 0xffu));
/* f471e1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* f471e5: jle 0xf4859c */
  if ((zf || sf != of)) goto L_f4859c;
L_f471eb: /* f471eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f471ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f471ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f471ee: mov edi, edi */
  edi = edi;
L_f471f0: /* f471f0: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f471f6: lea edi, [eax + ecx*8] */
  edi = (uint32_t)(eax + ecx*8);
/* f471f9: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* f471fc: cmp ecx, 0x2b */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f471ff: ja 0xf48582 */
  if ((!cf && !zf)) goto L_f48582;
L_f47205: /* f47205: jmp dword ptr [ecx*4 + 0xf485a4] */
  switch (R32((uint32_t)(ecx*4 + 0xf485a4u))) {
    case 0xf4720cu: goto L_f4720c;
    case 0xf47230u: goto L_f47230;
    case 0xf4728bu: goto L_f4728b;
    case 0xf472b9u: goto L_f472b9;
    case 0xf472feu: goto L_f472fe;
    case 0xf47314u: goto L_f47314;
    case 0xf47383u: goto L_f47383;
    case 0xf473ebu: goto L_f473eb;
    case 0xf47469u: goto L_f47469;
    case 0xf474c3u: goto L_f474c3;
    case 0xf4751du: goto L_f4751d;
    case 0xf475c2u: goto L_f475c2;
    case 0xf47657u: goto L_f47657;
    case 0xf476ecu: goto L_f476ec;
    case 0xf47783u: goto L_f47783;
    case 0xf4781au: goto L_f4781a;
    case 0xf47854u: goto L_f47854;
    case 0xf478dfu: goto L_f478df;
    case 0xf4799fu: goto L_f4799f;
    case 0xf47a78u: goto L_f47a78;
    case 0xf47b57u: goto L_f47b57;
    case 0xf47c59u: goto L_f47c59;
    case 0xf47d5bu: goto L_f47d5b;
    case 0xf47debu: goto L_f47deb;
    case 0xf47e91u: goto L_f47e91;
    case 0xf47f8au: goto L_f47f8a;
    case 0xf4800eu: goto L_f4800e;
    case 0xf48092u: goto L_f48092;
    case 0xf480b5u: goto L_f480b5;
    case 0xf4810au: goto L_f4810a;
    case 0xf4817fu: goto L_f4817f;
    case 0xf48222u: goto L_f48222;
    case 0xf48234u: goto L_f48234;
    case 0xf4826fu: goto L_f4826f;
    case 0xf48281u: goto L_f48281;
    case 0xf482c5u: goto L_f482c5;
    case 0xf4831fu: goto L_f4831f;
    case 0xf4835au: goto L_f4835a;
    case 0xf48395u: goto L_f48395;
    case 0xf483d0u: goto L_f483d0;
    case 0xf4840du: goto L_f4840d;
    case 0xf48489u: goto L_f48489;
    case 0xf484fdu: goto L_f484fd;
    case 0xf48582u: goto L_f48582;
    default: guest_badjump(0xf47205, R32((uint32_t)(ecx*4 + 0xf485a4u))); return;
  }
L_f4720c: /* f4720c: movzx ebx, byte ptr [edi + 3] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f47210: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47213: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* f47215: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4721b: add ebx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4721e: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f47222: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f47224: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47229u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47229: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f4722b: jmp 0xf48582 */
  goto L_f48582;
L_f47230: /* f47230: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47235u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47235: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f47239: movzx ebx, al */
  ebx = (uint32_t)((eax & 0xffu));
/* f4723c: movzx eax, byte ptr [edi + 4] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x4u)));
/* f47240: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* f47243: sar ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* f47246: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f47248: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4724du); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4724d: movzx edx, byte ptr [edi + 5] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x5u)));
/* f47251: movzx ecx, byte ptr [edi + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f47255: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f47258: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* f4725b: mov edx, dword ptr [esi + 0xcc] */
  edx = R32((uint32_t)(esi + 0xccu));
/* f47261: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f47264: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f47266: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47269: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f4726b: mov eax, dword ptr [esi + 0xc8] */
  eax = R32((uint32_t)(esi + 0xc8u));
/* f47271: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f47273: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f47279: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f4727b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4727d: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* f47280: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47283: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* f47286: jmp 0xf48582 */
  goto L_f48582;
L_f4728b: /* f4728b: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4728f: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47292: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f47298: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f4729a: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4729d: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f472a0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f472a2: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f472a6: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f472a9: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f472ac: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f472af: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f472b1: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* f472b4: jmp 0xf48582 */
  goto L_f48582;
L_f472b9: /* f472b9: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f472bc: cmp al, byte ptr [edi + 6] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x6u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f472bf: jbe 0xf472dc */
  if ((cf | zf)) goto L_f472dc;
L_f472c1: /* f472c1: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f472c5: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f472c8: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f472ca: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f472d0: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f472d3: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f472d7: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f472d9: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
L_f472dc: /* f472dc: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f472df: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f472e2: add dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f472e4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f472e6: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f472e8: mov byte ptr [edi + 1], dl */
  W8((uint32_t)(edi + 0x1u), (edx & 0xffu));
/* f472eb: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f472f1: /* f472f1: call 0xf41307 */
  esp -= 4; W32(esp, 0xf472f6u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f472f6: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* f472f9: jmp 0xf48582 */
  goto L_f48582;
L_f472fe: /* f472fe: movzx ecx, byte ptr [edi + 4] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x4u)));
/* f47302: lea edx, [ecx + 0x40] */
  edx = (uint32_t)(ecx + 0x40u);
/* f47305: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4730b: movzx eax, byte ptr [edx + 0xf5c5f0] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xf5c5f0u)));
/* f47312: jmp 0xf4732e */
  goto L_f4732e;
L_f47314: /* f47314: movzx ecx, byte ptr [edi + 4] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x4u)));
/* f47318: lea eax, [ecx + 0x40] */
  eax = (uint32_t)(ecx + 0x40u);
/* f4731b: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f47320: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47325: jge 0xf47373 */
  if ((sf == of)) goto L_f47373;
L_f47327: /* f47327: movzx eax, byte ptr [eax + 0xf5c5f0] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u)));
L_f4732e: /* f4732e: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f47332: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f47334: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47339: jle 0xf4733d */
  if ((zf || sf != of)) goto L_f4733d;
L_f4733b: /* f4733b: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_f4733d: /* f4733d: movzx ecx, byte ptr [ecx + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xf5c5f0u)));
/* f47344: movzx edx, byte ptr [edi + 5] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x5u)));
/* f47348: movzx ebx, byte ptr [edi + 3] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4734c: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* f4734f: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47352: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f47355: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47357: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* f4735a: and edx, dword ptr [esi + 0xc8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc8u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f47360: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47363: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* f47365: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4736b: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* f4736e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f47370: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
L_f47373: /* f47373: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47376: mov dl, byte ptr [edi + 7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47379: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4737b: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f4737e: jmp 0xf48582 */
  goto L_f48582;
L_f47383: /* f47383: movzx ecx, byte ptr [edi + 4] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x4u)));
/* f47387: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f4738b: lea eax, [ecx + 0x40] */
  eax = (uint32_t)(ecx + 0x40u);
/* f4738e: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f47393: movzx eax, byte ptr [eax + 0xf5c5f0] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u)));
/* f4739a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4739c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f473a1: jle 0xf473a5 */
  if ((zf || sf != of)) goto L_f473a5;
L_f473a3: /* f473a3: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_f473a5: /* f473a5: movzx ecx, byte ptr [ecx + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xf5c5f0u)));
/* f473ac: movzx edx, byte ptr [edi + 5] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x5u)));
/* f473b0: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* f473b3: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f473b6: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f473b9: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f473bb: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* f473be: and edx, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f473c4: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f473c7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f473c9: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f473cf: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f473d2: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f473d6: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f473d8: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f473db: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f473de: mov dl, byte ptr [edi + 7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f473e1: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f473e3: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f473e6: jmp 0xf48582 */
  goto L_f48582;
L_f473eb: /* f473eb: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f473ee: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f473f2: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f473f4: add cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f473f7: movzx ebx, cl */
  ebx = (uint32_t)((ecx & 0xffu));
/* f473fa: movzx ecx, byte ptr [edi + 5] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x5u)));
/* f473fe: movzx ecx, byte ptr [ecx + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xf5c5f0u)));
/* f47405: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* f47408: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f4740b: add cl, byte ptr [edi + 3] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x3u)));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4740e: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f47411: movzx ebp, cl */
  ebp = (uint32_t)((ecx & 0xffu));
/* f47414: and ebp, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebp = r;
  }
/* f4741a: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4741d: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* f4741f: movzx ecx, byte ptr [eax + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u)));
/* f47426: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4742c: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* f4742f: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47432: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f47435: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47437: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* f4743a: and edx, dword ptr [esi + 0xc8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc8u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f47440: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f47443: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47445: mov dl, byte ptr [ebx + 0xf5c2b8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xf5c2b8u))) & 0xffu);
/* f4744b: mov byte ptr [ecx + ebp], dl */
  W8((uint32_t)(ecx + ebp), (edx & 0xffu));
/* f4744e: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f47451: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47454: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47456: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47459: mov byte ptr [edi + 4], cl */
  W8((uint32_t)(edi + 0x4u), (ecx & 0xffu));
/* f4745c: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f4745f: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47461: mov byte ptr [edi + 5], al */
  W8((uint32_t)(edi + 0x5u), (eax & 0xffu));
/* f47464: jmp 0xf48582 */
  goto L_f48582;
L_f47469: /* f47469: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f4746c: mov bl, byte ptr [edi + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f4746f: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f47471: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f47474: movzx ecx, byte ptr [eax + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u)));
/* f4747b: movzx eax, byte ptr [edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f4747f: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* f47482: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f47485: add cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47487: movzx ebx, byte ptr [edi + 3] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4748b: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* f4748e: and eax, dword ptr [esi + 0xc8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc8u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* f47494: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f47497: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* f47499: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4749f: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* f474a2: add dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f474a5: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* f474a8: mov dl, byte ptr [edx + 0xf5c2b8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0xf5c2b8u))) & 0xffu);
/* f474ae: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f474b0: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
/* f474b3: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f474b6: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f474b9: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f474bb: mov byte ptr [edi + 4], cl */
  W8((uint32_t)(edi + 0x4u), (ecx & 0xffu));
/* f474be: jmp 0xf48582 */
  goto L_f48582;
L_f474c3: /* f474c3: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f474c6: mov bl, byte ptr [edi + 3] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f474c9: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f474cb: add cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f474ce: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* f474d1: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f474d4: movzx ecx, byte ptr [eax + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xf5c5f0u)));
/* f474db: movzx eax, byte ptr [edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f474df: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* f474e2: mov dl, byte ptr [edx + 0xf5c2b8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0xf5c2b8u))) & 0xffu);
/* f474e8: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f474eb: add cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f474ed: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* f474f0: and eax, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* f474f6: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f474f9: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f474fb: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f47501: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f47504: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f47508: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4750a: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
/* f4750d: mov cl, byte ptr [edi + 5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47510: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47513: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47515: mov byte ptr [edi + 5], cl */
  W8((uint32_t)(edi + 0x5u), (ecx & 0xffu));
/* f47518: jmp 0xf48582 */
  goto L_f48582;
L_f4751d: /* f4751d: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47523: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47529: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f4752f: /* f4752f: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47534u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47534: cmp al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47536: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f4753c: /* f4753c: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47542: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f47549: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f4754c: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47552: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47558: mov byte ptr [ebx + eax], 0x20 */
  W8((uint32_t)(ebx + eax), 0x20u);
/* f4755c: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47562: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47565: mov byte ptr [ecx + ebx + 1], dl */
  W8((uint32_t)(ecx + ebx + 0x1u), (edx & 0xffu));
/* f47569: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4756f: mov cl, byte ptr [edi + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47572: mov byte ptr [eax + ebx + 2], cl */
  W8((uint32_t)(eax + ebx + 0x2u), (ecx & 0xffu));
/* f47576: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4757c: mov al, byte ptr [edi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f4757f: mov byte ptr [edx + ebx + 3], al */
  W8((uint32_t)(edx + ebx + 0x3u), (eax & 0xffu));
/* f47583: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47589: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4758b: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47590u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47590: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47593: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47599: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4759b: call 0xf41307 */
  esp -= 4; W32(esp, 0xf475a0u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f475a0: mov byte ptr [ebp + 5], al */
  W8((uint32_t)(ebp + 0x5u), (eax & 0xffu));
/* f475a3: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f475a9: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f475ac: mov byte ptr [ecx + ebx + 6], dl */
  W8((uint32_t)(ecx + ebx + 0x6u), (edx & 0xffu));
/* f475b0: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f475b6: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f475b9: mov byte ptr [eax + ebx + 7], cl */
  W8((uint32_t)(eax + ebx + 0x7u), (ecx & 0xffu));
/* f475bd: jmp 0xf48582 */
  goto L_f48582;
L_f475c2: /* f475c2: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* f475c8: cmp edx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f475ce: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f475d4: /* f475d4: call 0xf41307 */
  esp -= 4; W32(esp, 0xf475d9u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f475d9: cmp al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f475db: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f475e1: /* f475e1: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f475e7: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f475ed: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f475f4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f475f7: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f475fd: mov byte ptr [ebx + edx], 0x21 */
  W8((uint32_t)(ebx + edx), 0x21u);
/* f47601: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47604: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4760a: mov byte ptr [eax + ebx + 1], cl */
  W8((uint32_t)(eax + ebx + 0x1u), (ecx & 0xffu));
/* f4760e: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47611: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47617: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f4761b: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f4761e: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47624: mov byte ptr [ecx + ebx + 3], dl */
  W8((uint32_t)(ecx + ebx + 0x3u), (edx & 0xffu));
/* f47628: mov edi, dword ptr [esi + 0xfc] */
  edi = R32((uint32_t)(esi + 0xfcu));
/* f4762e: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f47630: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47635u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47635: and al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47637: sub al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47639: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f4763c: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47642: mov byte ptr [eax + ebx + 5], 0x81 */
  W8((uint32_t)(eax + ebx + 0x5u), 0x81u);
/* f47647: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4764d: mov byte ptr [ecx + ebx + 7], 2 */
  W8((uint32_t)(ecx + ebx + 0x7u), 0x2u);
/* f47652: jmp 0xf48582 */
  goto L_f48582;
L_f47657: /* f47657: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* f4765d: cmp edx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47663: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f47669: /* f47669: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4766eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4766e: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47670: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f47676: /* f47676: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4767c: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47682: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f47689: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f4768c: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f47692: mov byte ptr [ebx + edx], 0x22 */
  W8((uint32_t)(ebx + edx), 0x22u);
/* f47696: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47699: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4769f: mov byte ptr [eax + ebx + 1], cl */
  W8((uint32_t)(eax + ebx + 0x1u), (ecx & 0xffu));
/* f476a3: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f476a6: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f476ac: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f476b0: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f476b3: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f476b9: mov byte ptr [ecx + ebx + 3], dl */
  W8((uint32_t)(ecx + ebx + 0x3u), (edx & 0xffu));
/* f476bd: mov edi, dword ptr [esi + 0xfc] */
  edi = R32((uint32_t)(esi + 0xfcu));
/* f476c3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f476c5: call 0xf41307 */
  esp -= 4; W32(esp, 0xf476cau); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f476ca: and al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f476cc: sub al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f476ce: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f476d1: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f476d7: mov byte ptr [eax + ebx + 5], 0 */
  W8((uint32_t)(eax + ebx + 0x5u), 0x0u);
/* f476dc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f476e2: mov byte ptr [ecx + ebx + 6], 0x32 */
  W8((uint32_t)(ecx + ebx + 0x6u), 0x32u);
/* f476e7: jmp 0xf48582 */
  goto L_f48582;
L_f476ec: /* f476ec: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* f476f2: cmp edx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f476f8: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f476fe: /* f476fe: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47703u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47703: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47705: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f4770b: /* f4770b: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47711: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47717: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f4771e: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f47721: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f47727: mov byte ptr [ebx + edx], 0x22 */
  W8((uint32_t)(ebx + edx), 0x22u);
/* f4772b: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47731: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47734: mov byte ptr [eax + ebx + 1], cl */
  W8((uint32_t)(eax + ebx + 0x1u), (ecx & 0xffu));
/* f47738: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4773e: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47741: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f47745: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4774b: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f4774e: mov byte ptr [ecx + ebx + 3], dl */
  W8((uint32_t)(ecx + ebx + 0x3u), (edx & 0xffu));
/* f47752: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47758: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4775a: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4775fu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4775f: and al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47761: add al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47763: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47766: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4776c: mov byte ptr [eax + ebx + 5], 0xe3 */
  W8((uint32_t)(eax + ebx + 0x5u), 0xe3u);
/* f47771: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47777: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f4777a: mov byte ptr [ecx + ebx + 6], dl */
  W8((uint32_t)(ecx + ebx + 0x6u), (edx & 0xffu));
/* f4777e: jmp 0xf48582 */
  goto L_f48582;
L_f47783: /* f47783: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47789: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4778f: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f47795: /* f47795: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4779au); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4779a: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4779c: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f477a2: /* f477a2: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f477a8: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f477ae: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f477b5: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f477b8: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f477be: mov byte ptr [ebx + edx], 0x22 */
  W8((uint32_t)(ebx + edx), 0x22u);
/* f477c2: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f477c8: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f477cb: mov byte ptr [eax + ebx + 1], cl */
  W8((uint32_t)(eax + ebx + 0x1u), (ecx & 0xffu));
/* f477cf: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f477d5: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f477d8: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f477dc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f477e2: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f477e5: mov byte ptr [ecx + ebx + 3], dl */
  W8((uint32_t)(ecx + ebx + 0x3u), (edx & 0xffu));
/* f477e9: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f477ef: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f477f1: call 0xf41307 */
  esp -= 4; W32(esp, 0xf477f6u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f477f6: and al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f477f8: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f477fa: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f477fd: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47803: mov byte ptr [eax + ebx + 5], 0xe3 */
  W8((uint32_t)(eax + ebx + 0x5u), 0xe3u);
/* f47808: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4780e: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f47811: mov byte ptr [ecx + ebx + 6], dl */
  W8((uint32_t)(ecx + ebx + 0x6u), (edx & 0xffu));
/* f47815: jmp 0xf48582 */
  goto L_f48582;
L_f4781a: /* f4781a: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47820: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47826: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f4782c: /* f4782c: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47831u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47831: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47833: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f47839: /* f47839: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4783f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47845: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f47848: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f4784e: mov byte ptr [edx + eax*8], 0x21 */
  W8((uint32_t)(edx + eax*8), 0x21u);
/* f47852: jmp 0xf4788c */
  goto L_f4788c;
L_f47854: /* f47854: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4785a: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47860: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f47866: /* f47866: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4786bu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4786b: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4786d: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f47873: /* f47873: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47879: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4787f: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f47882: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f47888: mov byte ptr [edx + eax*8], 0x2a */
  W8((uint32_t)(edx + eax*8), 0x2au);
L_f4788c: /* f4788c: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47892: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47895: mov byte ptr [ecx + eax*8 + 1], dl */
  W8((uint32_t)(ecx + eax*8 + 0x1u), (edx & 0xffu));
/* f47899: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4789f: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f478a2: mov byte ptr [ecx + eax*8 + 2], dl */
  W8((uint32_t)(ecx + eax*8 + 0x2u), (edx & 0xffu));
/* f478a6: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f478ac: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f478af: mov byte ptr [ecx + eax*8 + 3], dl */
  W8((uint32_t)(ecx + eax*8 + 0x3u), (edx & 0xffu));
/* f478b3: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f478b9: mov dl, byte ptr [edi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f478bc: mov byte ptr [ecx + eax*8 + 4], dl */
  W8((uint32_t)(ecx + eax*8 + 0x4u), (edx & 0xffu));
/* f478c0: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f478c6: mov dl, byte ptr [edi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f478c9: mov byte ptr [ecx + eax*8 + 5], dl */
  W8((uint32_t)(ecx + eax*8 + 0x5u), (edx & 0xffu));
/* f478cd: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f478d3: mov dl, byte ptr [edi + 7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f478d6: mov byte ptr [ecx + eax*8 + 7], dl */
  W8((uint32_t)(ecx + eax*8 + 0x7u), (edx & 0xffu));
/* f478da: jmp 0xf48582 */
  goto L_f48582;
L_f478df: /* f478df: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f478e5: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f478eb: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f478f1: /* f478f1: call 0xf41307 */
  esp -= 4; W32(esp, 0xf478f6u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f478f6: cmp al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f478f8: jae 0xf48582 */
  if (!cf) goto L_f48582;
L_f478fe: /* f478fe: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47904: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f4790a: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* f4790d: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f47914: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f4791a: mov byte ptr [ebx + edx], 0x23 */
  W8((uint32_t)(ebx + edx), 0x23u);
/* f4791e: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47924: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47926: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4792bu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4792b: movzx ecx, byte ptr [edi + 6] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x6u)));
/* f4792f: mov dl, byte ptr [esi + 0xc8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47935: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f47938: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* f4793b: mov cl, byte ptr [edi + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f4793e: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f47941: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47943: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47945: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47948: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f4794e: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47950: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47955u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47955: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47958: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* f4795b: movzx eax, byte ptr [edi + 6] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x6u)));
/* f4795f: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* f47962: mov al, byte ptr [esi + 0xcc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47968: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f4796b: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4796d: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4796f: mov byte ptr [ebp + 3], dl */
  W8((uint32_t)(ebp + 0x3u), (edx & 0xffu));
/* f47972: mov edi, dword ptr [esi + 0xfc] */
  edi = R32((uint32_t)(esi + 0xfcu));
/* f47978: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4797a: call 0xf41307 */
  esp -= 4; W32(esp, 0xf4797fu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f4797f: sub al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47981: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f47984: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4798a: mov byte ptr [ecx + ebx + 5], 0x81 */
  W8((uint32_t)(ecx + ebx + 0x5u), 0x81u);
/* f4798f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47995: mov byte ptr [edx + ebx + 6], 0xff */
  W8((uint32_t)(edx + ebx + 0x6u), 0xffu);
/* f4799a: jmp 0xf48582 */
  goto L_f48582;
L_f4799f: /* f4799f: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f479a5: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f479ab: jge 0xf47a27 */
  if ((sf == of)) goto L_f47a27;
L_f479ad: /* f479ad: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f479b0: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* f479b7: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f479bd: mov byte ptr [ebx + eax], 0x23 */
  W8((uint32_t)(ebx + eax), 0x23u);
/* f479c1: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f479c7: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f479c9: call 0xf41307 */
  esp -= 4; W32(esp, 0xf479ceu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f479ce: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f479d1: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f479d7: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479d9: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479db: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479dd: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f479e0: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f479e6: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f479e8: call 0xf41307 */
  esp -= 4; W32(esp, 0xf479edu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f479ed: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f479f0: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f479f6: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479f8: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479fa: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f479fc: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f479ff: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47a05: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47a07: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47a0cu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47a0c: sub al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a0e: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47a11: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47a17: mov byte ptr [eax + ebx + 5], 0x81 */
  W8((uint32_t)(eax + ebx + 0x5u), 0x81u);
/* f47a1c: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47a22: mov byte ptr [ecx + ebx + 6], 0xff */
  W8((uint32_t)(ecx + ebx + 0x6u), 0xffu);
L_f47a27: /* f47a27: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47a2cu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47a2c: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a2e: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47a30: jne 0xf47a4b */
  if (!zf) goto L_f47a4b;
L_f47a32: /* f47a32: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47a37u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47a37: mov bl, byte ptr [edi + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47a3a: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47a40: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a42: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a44: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a46: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a48: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
L_f47a4b: /* f47a4b: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47a50u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47a50: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a52: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47a54: jne 0xf48582 */
  if (!zf) goto L_f48582;
L_f47a5a: /* f47a5a: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47a5fu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47a5f: mov bl, byte ptr [edi + 3] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47a62: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47a68: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a6a: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a6c: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a6e: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47a70: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* f47a73: jmp 0xf48582 */
  goto L_f48582;
L_f47a78: /* f47a78: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47a7e: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47a84: jge 0xf47b06 */
  if ((sf == of)) goto L_f47b06;
L_f47a8a: /* f47a8a: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f47a8d: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* f47a94: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47a9a: mov byte ptr [ebx + eax], 0x24 */
  W8((uint32_t)(ebx + eax), 0x24u);
/* f47a9e: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47aa4: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47aa6: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47aabu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47aab: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47aae: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47ab4: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ab6: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ab8: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47aba: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47abd: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ac3: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ac5: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47acau); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47aca: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47acd: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47ad3: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ad5: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ad7: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ad9: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f47adc: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ae2: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ae4: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47ae9u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47ae9: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47aeb: sub al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47aed: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47af0: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47af6: mov byte ptr [eax + ebx + 5], 0x81 */
  W8((uint32_t)(eax + ebx + 0x5u), 0x81u);
/* f47afb: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47b01: mov byte ptr [ecx + ebx + 6], 0 */
  W8((uint32_t)(ecx + ebx + 0x6u), 0x0u);
L_f47b06: /* f47b06: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47b0bu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47b0b: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b0d: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47b0f: jne 0xf47b2a */
  if (!zf) goto L_f47b2a;
L_f47b11: /* f47b11: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47b16u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47b16: mov bl, byte ptr [edi + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47b19: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47b1f: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b21: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b23: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b25: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b27: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
L_f47b2a: /* f47b2a: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47b2fu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47b2f: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b31: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47b33: jne 0xf48582 */
  if (!zf) goto L_f48582;
L_f47b39: /* f47b39: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47b3eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47b3e: mov bl, byte ptr [edi + 3] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47b41: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47b47: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b49: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b4b: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b4d: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47b4f: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* f47b52: jmp 0xf48582 */
  goto L_f48582;
L_f47b57: /* f47b57: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47b5cu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47b5c: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47b5e: jae 0xf47c08 */
  if (!cf) goto L_f47c08;
L_f47b64: /* f47b64: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47b6a: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47b70: jge 0xf47c08 */
  if ((sf == of)) goto L_f47c08;
L_f47b76: /* f47b76: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f47b79: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47b7f: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47b82: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f47b89: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47b8f: mov byte ptr [eax + ebx + 1], cl */
  W8((uint32_t)(eax + ebx + 0x1u), (ecx & 0xffu));
/* f47b93: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47b99: mov byte ptr [ebx + edx], 0x26 */
  W8((uint32_t)(ebx + edx), 0x26u);
/* f47b9d: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ba3: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ba5: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47baau); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47baa: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47bad: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47bb3: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bb5: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bb7: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bb9: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47bbc: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47bc2: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47bc4: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47bc9u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47bc9: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47bcc: mov dl, byte ptr [esi + 0xcc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47bd2: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bd4: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bd6: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47bd8: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f47bdb: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47be1: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47be3: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47be8u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47be8: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47beb: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47bf1: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47bf3: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47bf8u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47bf8: mov byte ptr [ebp + 5], al */
  W8((uint32_t)(ebp + 0x5u), (eax & 0xffu));
/* f47bfb: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47c01: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f47c04: mov byte ptr [eax + ebx + 6], cl */
  W8((uint32_t)(eax + ebx + 0x6u), (ecx & 0xffu));
L_f47c08: /* f47c08: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47c0du); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47c0d: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c0f: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47c11: jne 0xf47c2c */
  if (!zf) goto L_f47c2c;
L_f47c13: /* f47c13: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47c18u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47c18: mov bl, byte ptr [edi + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47c1b: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47c21: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c23: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c25: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c27: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c29: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
L_f47c2c: /* f47c2c: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47c31u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47c31: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c33: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47c35: jne 0xf48582 */
  if (!zf) goto L_f48582;
L_f47c3b: /* f47c3b: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47c40u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47c40: mov bl, byte ptr [edi + 3] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47c43: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47c49: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c4b: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c4d: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c4f: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47c51: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* f47c54: jmp 0xf48582 */
  goto L_f48582;
L_f47c59: /* f47c59: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47c5eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47c5e: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f47c60: jae 0xf47d0a */
  if (!cf) goto L_f47d0a;
L_f47c66: /* f47c66: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f47c6c: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47c72: jge 0xf47d0a */
  if ((sf == of)) goto L_f47d0a;
L_f47c78: /* f47c78: lea ebx, [eax*8] */
  ebx = (uint32_t)(eax*8);
/* f47c7f: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f47c82: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47c88: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47c8e: mov byte ptr [ebx + eax], 0x2b */
  W8((uint32_t)(ebx + eax), 0x2bu);
/* f47c92: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47c98: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47c9b: mov byte ptr [ecx + ebx + 1], dl */
  W8((uint32_t)(ecx + ebx + 0x1u), (edx & 0xffu));
/* f47c9f: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ca5: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ca7: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47cacu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47cac: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47caf: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47cb5: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cb7: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cb9: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cbb: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47cbe: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47cc4: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47cc6: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47ccbu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47ccb: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47cce: mov dl, byte ptr [esi + 0xcc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47cd4: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cd6: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cd8: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47cda: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f47cdd: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ce3: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ce5: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47ceau); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47cea: mov byte ptr [ebp + 4], al */
  W8((uint32_t)(ebp + 0x4u), (eax & 0xffu));
/* f47ced: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47cf3: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f47cf6: mov byte ptr [eax + ebx + 6], cl */
  W8((uint32_t)(eax + ebx + 0x6u), (ecx & 0xffu));
/* f47cfa: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47d00: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47d02: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d07u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d07: mov byte ptr [ebp + 7], al */
  W8((uint32_t)(ebp + 0x7u), (eax & 0xffu));
L_f47d0a: /* f47d0a: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d0fu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d0f: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d11: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47d13: jne 0xf47d2e */
  if (!zf) goto L_f47d2e;
L_f47d15: /* f47d15: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d1au); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d1a: mov bl, byte ptr [edi + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47d1d: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47d23: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d25: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d27: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d29: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d2b: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
L_f47d2e: /* f47d2e: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d33u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d33: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d35: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f47d37: jne 0xf48582 */
  if (!zf) goto L_f48582;
L_f47d3d: /* f47d3d: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d42u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d42: mov bl, byte ptr [edi + 3] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47d45: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47d4b: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d4d: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d4f: sub al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d51: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d53: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* f47d56: jmp 0xf48582 */
  goto L_f48582;
L_f47d5b: /* f47d5b: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47d61: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47d67: jge 0xf47f3f */
  if ((sf == of)) goto L_f47f3f;
L_f47d6d: /* f47d6d: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f47d70: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* f47d77: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47d7d: mov byte ptr [ebx + eax], 0x25 */
  W8((uint32_t)(ebx + eax), 0x25u);
/* f47d81: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47d87: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47d89: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47d8eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47d8e: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47d91: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47d97: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d99: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d9b: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47d9d: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47da0: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47da6: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47da8: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47dadu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47dad: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47db0: mov cl, byte ptr [esi + 0xcc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47db6: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47db8: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47dba: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47dbc: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f47dbf: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47dc5: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47dc8: mov byte ptr [eax + ebx + 4], cl */
  W8((uint32_t)(eax + ebx + 0x4u), (ecx & 0xffu));
/* f47dcc: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47dd2: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47dd5: mov byte ptr [edx + ebx + 5], al */
  W8((uint32_t)(edx + ebx + 0x5u), (eax & 0xffu));
/* f47dd9: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47ddf: mov dl, byte ptr [edi + 7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47de2: mov byte ptr [ecx + ebx + 6], dl */
  W8((uint32_t)(ecx + ebx + 0x6u), (edx & 0xffu));
/* f47de6: jmp 0xf47f3f */
  goto L_f47f3f;
L_f47deb: /* f47deb: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47df1: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47df7: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f47dfd: /* f47dfd: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f47e00: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* f47e07: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47e0d: mov byte ptr [ebx + eax], 0x25 */
  W8((uint32_t)(ebx + eax), 0x25u);
/* f47e11: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47e17: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47e19: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47e1eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47e1e: movzx ecx, byte ptr [edi + 6] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x6u)));
/* f47e22: mov dl, byte ptr [esi + 0xc8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47e28: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f47e2b: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* f47e2e: mov cl, byte ptr [edi + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47e31: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f47e34: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47e36: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47e38: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47e3b: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47e41: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47e43: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47e48u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47e48: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47e4b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* f47e4e: movzx eax, byte ptr [edi + 6] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x6u)));
/* f47e52: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* f47e55: mov al, byte ptr [esi + 0xcc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47e5b: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f47e5e: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47e60: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47e62: mov byte ptr [ebp + 3], dl */
  W8((uint32_t)(ebp + 0x3u), (edx & 0xffu));
/* f47e65: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47e6b: mov dl, byte ptr [edi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47e6e: mov byte ptr [ecx + ebx + 4], dl */
  W8((uint32_t)(ecx + ebx + 0x4u), (edx & 0xffu));
/* f47e72: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47e78: mov cl, byte ptr [edi + 5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47e7b: mov byte ptr [eax + ebx + 5], cl */
  W8((uint32_t)(eax + ebx + 0x5u), (ecx & 0xffu));
/* f47e7f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47e85: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47e88: mov byte ptr [edx + ebx + 6], al */
  W8((uint32_t)(edx + ebx + 0x6u), (eax & 0xffu));
/* f47e8c: jmp 0xf48582 */
  goto L_f48582;
L_f47e91: /* f47e91: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47e97: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47e9d: jge 0xf47f3f */
  if ((sf == of)) goto L_f47f3f;
L_f47ea3: /* f47ea3: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f47ea6: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* f47ead: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47eb3: mov byte ptr [ebx + eax], 0x27 */
  W8((uint32_t)(ebx + eax), 0x27u);
/* f47eb7: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47ebd: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ebf: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47ec4u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47ec4: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47ec7: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47ecd: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ecf: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ed1: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ed3: mov byte ptr [ebp + 2], al */
  W8((uint32_t)(ebp + 0x2u), (eax & 0xffu));
/* f47ed6: mov ebp, dword ptr [esi + 0xfc] */
  ebp = R32((uint32_t)(esi + 0xfcu));
/* f47edc: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f47ede: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47ee3u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47ee3: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47ee6: mov dl, byte ptr [esi + 0xcc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47eec: and al, 0x1f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47eee: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ef0: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47ef2: mov byte ptr [ebp + 3], al */
  W8((uint32_t)(ebp + 0x3u), (eax & 0xffu));
/* f47ef5: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47ef8: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47efe: mov byte ptr [eax + ebx + 5], cl */
  W8((uint32_t)(eax + ebx + 0x5u), (ecx & 0xffu));
/* f47f02: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47f08: mov byte ptr [edx + ebx + 4], 0 */
  W8((uint32_t)(edx + ebx + 0x4u), 0x0u);
/* f47f0d: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47f13: mov cl, byte ptr [edi + 5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47f16: mov byte ptr [eax + ebx + 6], cl */
  W8((uint32_t)(eax + ebx + 0x6u), (ecx & 0xffu));
/* f47f1a: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47f20: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47f23: mov byte ptr [edx + ebx + 7], al */
  W8((uint32_t)(edx + ebx + 0x7u), (eax & 0xffu));
/* f47f27: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f47f2d: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47f30: mov byte ptr [ecx + ebx + 1], dl */
  W8((uint32_t)(ecx + ebx + 0x1u), (edx & 0xffu));
/* f47f34: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47f37: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f47f3a: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f3c: mov byte ptr [edi + 4], cl */
  W8((uint32_t)(edi + 0x4u), (ecx & 0xffu));
L_f47f3f: /* f47f3f: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47f44u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47f44: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f47f46: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f49: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47f4eu); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47f4e: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47f51: mov cl, byte ptr [esi + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* f47f57: and al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f59: sub bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f5b: add bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f5d: and bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f5f: mov byte ptr [edi + 2], bl */
  W8((uint32_t)(edi + 0x2u), (ebx & 0xffu));
/* f47f62: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47f67u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47f67: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f47f69: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f6c: call 0xf41307 */
  esp -= 4; W32(esp, 0xf47f71u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f47f71: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47f74: and al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f76: sub bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f78: mov al, byte ptr [esi + 0xcc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xccu))) & 0xffu);
/* f47f7e: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f80: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f47f82: mov byte ptr [edi + 3], bl */
  W8((uint32_t)(edi + 0x3u), (ebx & 0xffu));
/* f47f85: jmp 0xf48582 */
  goto L_f48582;
L_f47f8a: /* f47f8a: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f47f90: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f47f96: jge 0xf47ffe */
  if ((sf == of)) goto L_f47ffe;
L_f47f98: /* f47f98: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f47f9b: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f47fa1: mov byte ptr [eax + ecx*8], 0x27 */
  W8((uint32_t)(eax + ecx*8), 0x27u);
/* f47fa5: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f47fa8: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47fae: mov byte ptr [eax + ecx*8 + 2], dl */
  W8((uint32_t)(eax + ecx*8 + 0x2u), (edx & 0xffu));
/* f47fb2: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f47fb5: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47fbb: mov byte ptr [eax + ecx*8 + 3], dl */
  W8((uint32_t)(eax + ecx*8 + 0x3u), (edx & 0xffu));
/* f47fbf: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47fc5: mov dl, byte ptr [edi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f47fc8: mov byte ptr [eax + ecx*8 + 5], dl */
  W8((uint32_t)(eax + ecx*8 + 0x5u), (edx & 0xffu));
/* f47fcc: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f47fd2: mov byte ptr [eax + ecx*8 + 4], 0 */
  W8((uint32_t)(eax + ecx*8 + 0x4u), 0x0u);
/* f47fd7: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47fdd: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f47fe0: mov byte ptr [edx + ecx*8 + 6], al */
  W8((uint32_t)(edx + ecx*8 + 0x6u), (eax & 0xffu));
/* f47fe4: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47fea: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f47fed: mov byte ptr [edx + ecx*8 + 7], al */
  W8((uint32_t)(edx + ecx*8 + 0x7u), (eax & 0xffu));
/* f47ff1: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f47ff7: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f47ffa: mov byte ptr [edx + ecx*8 + 1], al */
  W8((uint32_t)(edx + ecx*8 + 0x1u), (eax & 0xffu));
L_f47ffe: /* f47ffe: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f48001: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48004: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48006: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f48009: jmp 0xf48582 */
  goto L_f48582;
L_f4800e: /* f4800e: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f48014: cmp ecx, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4801a: jge 0xf48082 */
  if ((sf == of)) goto L_f48082;
L_f4801c: /* f4801c: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f4801f: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f48025: mov byte ptr [eax + ecx*8], 0x28 */
  W8((uint32_t)(eax + ecx*8), 0x28u);
/* f48029: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4802f: mov dl, byte ptr [edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f48032: mov byte ptr [eax + ecx*8 + 2], dl */
  W8((uint32_t)(eax + ecx*8 + 0x2u), (edx & 0xffu));
/* f48036: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4803c: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f4803f: mov byte ptr [eax + ecx*8 + 3], dl */
  W8((uint32_t)(eax + ecx*8 + 0x3u), (edx & 0xffu));
/* f48043: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f48049: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f4804c: mov byte ptr [eax + ecx*8 + 1], dl */
  W8((uint32_t)(eax + ecx*8 + 0x1u), (edx & 0xffu));
/* f48050: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f48056: mov dl, byte ptr [edi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f48059: mov byte ptr [eax + ecx*8 + 4], dl */
  W8((uint32_t)(eax + ecx*8 + 0x4u), (edx & 0xffu));
/* f4805d: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f48063: mov dl, byte ptr [edi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f48066: mov byte ptr [eax + ecx*8 + 5], dl */
  W8((uint32_t)(eax + ecx*8 + 0x5u), (edx & 0xffu));
/* f4806a: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f48070: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48073: mov byte ptr [eax + ecx*8 + 6], dl */
  W8((uint32_t)(eax + ecx*8 + 0x6u), (edx & 0xffu));
/* f48077: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4807d: mov byte ptr [eax + ecx*8 + 7], 2 */
  W8((uint32_t)(eax + ecx*8 + 0x7u), 0x2u);
L_f48082: /* f48082: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f48085: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f48088: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4808a: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* f4808d: jmp 0xf48582 */
  goto L_f48582;
L_f48092: /* f48092: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f48096: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48099: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4809f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f480a1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f480a4: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f480a7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f480a9: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f480ad: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f480b0: jmp 0xf48582 */
  goto L_f48582;
L_f480b5: /* f480b5: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f480b8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f480ba: je 0xf48582 */
  if (zf) goto L_f48582;
L_f480c0: /* f480c0: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f480c3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* f480c5: jbe 0xf48160 */
  if ((cf | zf)) goto L_f48160;
L_f480cb: /* f480cb: mov dl, byte ptr [edi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f480ce: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f480d1: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f480d3: mov byte ptr [edi + 6], al */
  W8((uint32_t)(edi + 0x6u), (eax & 0xffu));
/* f480d6: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f480d9: mov byte ptr [esp + 0x13], dl */
  W8((uint32_t)(esp + 0x13u), (edx & 0xffu));
/* f480dd: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f480e0: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* f480e4: mov byte ptr [esp + 0x20], dl */
  W8((uint32_t)(esp + 0x20u), (edx & 0xffu));
/* f480e8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f480ec: mov byte ptr [esp + 0x12], cl */
  W8((uint32_t)(esp + 0x12u), (ecx & 0xffu));
/* f480f0: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f480f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f480f4: mov byte ptr [esp + 0x15], cl */
  W8((uint32_t)(esp + 0x15u), (ecx & 0xffu));
/* f480f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f480f9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f480fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f480fe: mov ecx, esi */
  ecx = esi;
/* f48100: call 0xf41096 */
  esp -= 4; W32(esp, 0xf48105u); SPILL(); f_f41096(); if (g_unwind) return; RELOAD();
/* f48105: jmp 0xf48582 */
  goto L_f48582;
L_f4810a: /* f4810a: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f4810d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4810f: je 0xf48582 */
  if (zf) goto L_f48582;
L_f48115: /* f48115: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48118: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* f4811a: jbe 0xf48160 */
  if ((cf | zf)) goto L_f48160;
L_f4811c: /* f4811c: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f4811f: mov dl, byte ptr [edi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f48122: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48124: mov byte ptr [edi + 6], al */
  W8((uint32_t)(edi + 0x6u), (eax & 0xffu));
/* f48127: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f4812a: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* f4812e: xor eax, eax */
  eax = 0;
/* f48130: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f48133: mov byte ptr [esp + 0x24], al */
  W8((uint32_t)(esp + 0x24u), (eax & 0xffu));
/* f48137: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4813a: mov byte ptr [esp + 0x16], cl */
  W8((uint32_t)(esp + 0x16u), (ecx & 0xffu));
/* f4813e: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f48141: mov byte ptr [esp + 0x17], dl */
  W8((uint32_t)(esp + 0x17u), (edx & 0xffu));
/* f48145: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f48149: mov byte ptr [esp + 0x15], cl */
  W8((uint32_t)(esp + 0x15u), (ecx & 0xffu));
/* f4814d: mov ecx, esi */
  ecx = esi;
/* f4814f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f48150: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f48154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f48155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f48156: call 0xf41096 */
  esp -= 4; W32(esp, 0xf4815bu); SPILL(); f_f41096(); if (g_unwind) return; RELOAD();
/* f4815b: jmp 0xf48582 */
  goto L_f48582;
L_f48160: /* f48160: call 0xf41307 */
  esp -= 4; W32(esp, 0xf48165u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f48165: cmp al, byte ptr [edi + 7] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x7u)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f48168: jb 0xf48582 */
  if (cf) goto L_f48582;
L_f4816e: /* f4816e: call 0xf41307 */
  esp -= 4; W32(esp, 0xf48173u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f48173: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48175: and al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48177: mov byte ptr [edi + 6], al */
  W8((uint32_t)(edi + 0x6u), (eax & 0xffu));
/* f4817a: jmp 0xf48582 */
  goto L_f48582;
L_f4817f: /* f4817f: call 0xf41307 */
  esp -= 4; W32(esp, 0xf48184u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f48184: cmp al, byte ptr [edi + 7] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x7u)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f48187: jb 0xf48582 */
  if (cf) goto L_f48582;
L_f4818d: /* f4818d: call 0xf41307 */
  esp -= 4; W32(esp, 0xf48192u); SPILL(); f_f41307(); if (g_unwind) return; RELOAD();
/* f48192: movzx ebx, byte ptr [edi + 6] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x6u)));
/* f48196: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* f48199: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f4819c: movzx ecx, byte ptr [ebp + 0xf5c5f0] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xf5c5f0u)));
/* f481a3: mov byte ptr [esp + 0x2c], al */
  W8((uint32_t)(esp + 0x2cu), (eax & 0xffu));
/* f481a7: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* f481aa: shr al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f481ad: mov byte ptr [esp + 0x28], al */
  W8((uint32_t)(esp + 0x28u), (eax & 0xffu));
/* f481b1: mov eax, ebx */
  eax = ebx;
/* f481b3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f481b4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f481b6: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f481b9: and ebp, 0xff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* f481bf: movzx edx, byte ptr [ebp + 0xf5c5f0] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xf5c5f0u)));
/* f481c6: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* f481c9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f481cb: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f481ce: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f481d1: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f481d3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f481d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f481d7: mov al, byte ptr [edi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2u))) & 0xffu);
/* f481da: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* f481de: mov al, byte ptr [edi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* f481e1: mov byte ptr [esp + 0x19], al */
  W8((uint32_t)(esp + 0x19u), (eax & 0xffu));
/* f481e5: jg 0xf481ee */
  if ((!zf && sf == of)) goto L_f481ee;
L_f481e7: /* f481e7: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* f481e9: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* f481ec: jmp 0xf481f1 */
  goto L_f481f1;
L_f481ee: /* f481ee: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_f481f1: /* f481f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f481f3: jg 0xf481fc */
  if ((!zf && sf == of)) goto L_f481fc;
L_f481f5: /* f481f5: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* f481f7: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* f481fa: jmp 0xf481ff */
  goto L_f481ff;
L_f481fc: /* f481fc: and edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
L_f481ff: /* f481ff: mov byte ptr [esp + 0x1a], cl */
  W8((uint32_t)(esp + 0x1au), (ecx & 0xffu));
/* f48203: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* f48207: mov byte ptr [esp + 0x1b], dl */
  W8((uint32_t)(esp + 0x1bu), (edx & 0xffu));
/* f4820b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4820f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f48213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f48214: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f48215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f48216: mov ecx, esi */
  ecx = esi;
/* f48218: call 0xf41096 */
  esp -= 4; W32(esp, 0xf4821du); SPILL(); f_f41096(); if (g_unwind) return; RELOAD();
/* f4821d: jmp 0xf48582 */
  goto L_f48582;
L_f48222: /* f48222: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f48225: add dl, 0xfb */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfbu);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48228: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f4822a: mov byte ptr [edi + 1], dl */
  W8((uint32_t)(edi + 0x1u), (edx & 0xffu));
/* f4822d: cmp al, 0xfb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f4822f: jmp 0xf483a2 */
  goto L_f483a2;
L_f48234: /* f48234: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f48237: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f4823a: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4823c: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f4823e: mov byte ptr [edi + 1], dl */
  W8((uint32_t)(edi + 0x1u), (edx & 0xffu));
/* f48241: jbe 0xf48465 */
  if ((cf | zf)) goto L_f48465;
L_f48247: /* f48247: movzx eax, byte ptr [edi + 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4824b: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4824e: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f48250: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f48256: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f48259: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f4825d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4825f: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
/* f48262: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48263: mov ecx, esi */
  ecx = esi;
/* f48265: call 0xf41028 */
  esp -= 4; W32(esp, 0xf4826au); SPILL(); f_f41028(); if (g_unwind) return; RELOAD();
/* f4826a: jmp 0xf48582 */
  goto L_f48582;
L_f4826f: /* f4826f: mov al, byte ptr [edi + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48272: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f48275: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48277: mov byte ptr [edi + 1], dl */
  W8((uint32_t)(edi + 0x1u), (edx & 0xffu));
/* f4827a: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f4827c: jmp 0xf483a0 */
  goto L_f483a0;
L_f48281: /* f48281: dec byte ptr [edi + 6] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x6u)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fu;
  W8((uint32_t)(edi + 0x6u), r);
  }
/* f48284: je 0xf48465 */
  if (zf) goto L_f48465;
L_f4828a: /* f4828a: movzx eax, byte ptr [edi + 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4828e: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48291: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f48295: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f48297: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4829d: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f482a0: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f482a3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f482a5: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f482a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f482a9: mov ecx, esi */
  ecx = esi;
/* f482ab: call 0xf41028 */
  esp -= 4; W32(esp, 0xf482b0u); SPILL(); f_f41028(); if (g_unwind) return; RELOAD();
/* f482b0: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f482b3: cmp al, 0x7a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f482b5: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f482bb: /* f482bb: add al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f482bd: mov byte ptr [edi + 5], al */
  W8((uint32_t)(edi + 0x5u), (eax & 0xffu));
/* f482c0: jmp 0xf48582 */
  goto L_f48582;
L_f482c5: /* f482c5: mov al, byte ptr [edi + 7] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f482c8: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f482cb: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f482cd: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f482cf: cmp al, 0x32 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f482d1: mov byte ptr [edi + 1], dl */
  W8((uint32_t)(edi + 0x1u), (edx & 0xffu));
/* f482d4: jbe 0xf48465 */
  if ((cf | zf)) goto L_f48465;
L_f482da: /* f482da: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f482de: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f482e1: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f482e3: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f482e9: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f482ec: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f482f0: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f482f2: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f482f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f482f6: mov ecx, esi */
  ecx = esi;
/* f482f8: call 0xf41028 */
  esp -= 4; W32(esp, 0xf482fdu); SPILL(); f_f41028(); if (g_unwind) return; RELOAD();
/* f482fd: test byte ptr [esi + 0xd8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xd8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f48304: je 0xf48582 */
  if (zf) goto L_f48582;
L_f4830a: /* f4830a: mov al, byte ptr [edi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f4830d: cmp al, 0x7c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7cu);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f4830f: jge 0xf48582 */
  if ((sf == of)) goto L_f48582;
L_f48315: /* f48315: add al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48317: mov byte ptr [edi + 5], al */
  W8((uint32_t)(edi + 0x5u), (eax & 0xffu));
/* f4831a: jmp 0xf48582 */
  goto L_f48582;
L_f4831f: /* f4831f: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48322: add dl, 0xfd */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48325: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f48327: cmp al, 0xbe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48329: mov byte ptr [edi + 6], dl */
  W8((uint32_t)(edi + 0x6u), (edx & 0xffu));
/* f4832c: jbe 0xf48465 */
  if ((cf | zf)) goto L_f48465;
L_f48332: /* f48332: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f48336: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48339: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f4833b: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f48341: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f48344: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f48348: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4834a: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f4834d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4834e: mov ecx, esi */
  ecx = esi;
/* f48350: call 0xf41005 */
  esp -= 4; W32(esp, 0xf48355u); SPILL(); f_f41005(); if (g_unwind) return; RELOAD();
/* f48355: jmp 0xf48582 */
  goto L_f48582;
L_f4835a: /* f4835a: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f4835d: add dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48360: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* f48362: cmp al, 0xfa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48364: mov byte ptr [edi + 6], dl */
  W8((uint32_t)(edi + 0x6u), (edx & 0xffu));
/* f48367: jae 0xf48465 */
  if (!cf) goto L_f48465;
L_f4836d: /* f4836d: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f48371: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48374: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f48376: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4837c: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f4837f: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f48383: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48385: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f48388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48389: mov ecx, esi */
  ecx = esi;
/* f4838b: call 0xf41005 */
  esp -= 4; W32(esp, 0xf48390u); SPILL(); f_f41005(); if (g_unwind) return; RELOAD();
/* f48390: jmp 0xf48582 */
  goto L_f48582;
L_f48395: /* f48395: mov dl, byte ptr [edi + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48398: add dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4839b: mov byte ptr [edi + 6], dl */
  W8((uint32_t)(edi + 0x6u), (edx & 0xffu));
/* f4839e: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_f483a0: /* f483a0: cmp al, 0xfa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
L_f483a2: /* f483a2: jae 0xf48465 */
  if (!cf) goto L_f48465;
L_f483a8: /* f483a8: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f483ac: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f483af: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f483b1: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f483b7: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* f483ba: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f483be: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f483c0: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f483c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f483c4: mov ecx, esi */
  ecx = esi;
/* f483c6: call 0xf41028 */
  esp -= 4; W32(esp, 0xf483cbu); SPILL(); f_f41028(); if (g_unwind) return; RELOAD();
/* f483cb: jmp 0xf48582 */
  goto L_f48582;
L_f483d0: /* f483d0: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f483d3: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f483d5: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* f483d7: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f483d9: mov byte ptr [edi + 6], cl */
  W8((uint32_t)(edi + 0x6u), (ecx & 0xffu));
/* f483dc: jae 0xf48465 */
  if (!cf) goto L_f48465;
L_f483e2: /* f483e2: movzx eax, byte ptr [edi + 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f483e6: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f483e9: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f483eb: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f483f1: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f483f4: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f483f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f483f9: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f483fd: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f48400: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48401: mov ecx, esi */
  ecx = esi;
/* f48403: call 0xf41028 */
  esp -= 4; W32(esp, 0xf48408u); SPILL(); f_f41028(); if (g_unwind) return; RELOAD();
/* f48408: jmp 0xf48582 */
  goto L_f48582;
L_f4840d: /* f4840d: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48410: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48412: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* f48414: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48416: mov byte ptr [edi + 6], cl */
  W8((uint32_t)(edi + 0x6u), (ecx & 0xffu));
/* f48419: jae 0xf48465 */
  if (!cf) goto L_f48465;
L_f4841b: /* f4841b: movzx eax, byte ptr [edi + 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4841f: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48422: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f48426: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f48428: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4842e: mov ebp, dword ptr [ecx + 0x1c] */
  ebp = R32((uint32_t)(ecx + 0x1cu));
/* f48431: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f48434: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48436: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f48439: mov bl, byte ptr [edi + 4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f4843c: add bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4843f: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* f48441: and al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48443: cmp al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f48445: mov byte ptr [edi + 4], bl */
  W8((uint32_t)(edi + 0x4u), (ebx & 0xffu));
/* f48448: jbe 0xf48450 */
  if ((cf | zf)) goto L_f48450;
L_f4844a: /* f4844a: mov dl, 0x7f */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* f4844c: sub dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4844e: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_f48450: /* f48450: xor ecx, ecx */
  ecx = 0;
/* f48452: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f48455: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48457: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f48458: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48459: mov ecx, esi */
  ecx = esi;
/* f4845b: call 0xf41398 */
  esp -= 4; W32(esp, 0xf48460u); SPILL(); f_f41398(); if (g_unwind) return; RELOAD();
/* f48460: jmp 0xf48582 */
  goto L_f48582;
L_f48465: /* f48465: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4846b: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* f48471: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f48472: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* f48478: mov ecx, dword ptr [edx + eax*8] */
  ecx = R32((uint32_t)(edx + eax*8));
/* f4847b: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* f4847d: mov edx, dword ptr [edx + eax*8 + 4] */
  edx = R32((uint32_t)(edx + eax*8 + 0x4u));
/* f48481: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* f48484: jmp 0xf48582 */
  goto L_f48582;
L_f48489: /* f48489: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f4848c: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4848e: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* f48490: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48492: mov byte ptr [edi + 6], cl */
  W8((uint32_t)(edi + 0x6u), (ecx & 0xffu));
/* f48495: jae 0xf48563 */
  if (!cf) goto L_f48563;
L_f4849b: /* f4849b: movzx eax, byte ptr [edi + 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4849f: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f484a2: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f484a4: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f484aa: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f484ad: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f484b0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f484b2: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f484b6: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f484b9: movzx eax, byte ptr [edi + 5] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x5u)));
/* f484bd: lea edx, [eax + 0x40] */
  edx = (uint32_t)(eax + 0x40u);
/* f484c0: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f484c6: mov cl, byte ptr [edx + 0xf5c1a0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0xf5c1a0u))) & 0xffu);
/* f484cc: mov dl, byte ptr [eax + 0xf5c1a0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xf5c1a0u))) & 0xffu);
/* f484d2: movzx ax, byte ptr [edi + 7] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi + 0x7u)))) & 0xffffu);
/* f484d7: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* f484db: mov byte ptr [esp + 0x30], dl */
  W8((uint32_t)(esp + 0x30u), (edx & 0xffu));
/* f484df: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* f484e3: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* f484e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f484e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f484e9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f484ec: add word ptr [edi + 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + 0x4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(edi + 0x4u), r);
  }
/* f484f0: mov ecx, esi */
  ecx = esi;
/* f484f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f484f3: call 0xf410eb */
  esp -= 4; W32(esp, 0xf484f8u); SPILL(); f_f410eb(); if (g_unwind) return; RELOAD();
/* f484f8: jmp 0xf48582 */
  goto L_f48582;
L_f484fd: /* f484fd: mov cl, byte ptr [edi + 6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6u))) & 0xffu);
/* f48500: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48502: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* f48504: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48506: mov byte ptr [edi + 6], cl */
  W8((uint32_t)(edi + 0x6u), (ecx & 0xffu));
/* f48509: jae 0xf48563 */
  if (!cf) goto L_f48563;
L_f4850b: /* f4850b: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* f4850f: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f48512: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f48518: mov ebp, dword ptr [eax + 0x1c] */
  ebp = R32((uint32_t)(eax + 0x1cu));
/* f4851b: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* f4851e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f48520: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f48524: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48526: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f48529: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* f4852c: xor ecx, ecx */
  ecx = 0;
/* f4852e: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* f48530: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f48533: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f48539: mov dl, byte ptr [ecx + 0xf5c5f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xf5c5f0u))) & 0xffu);
/* f4853f: mov cl, byte ptr [edi + 7] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7u))) & 0xffu);
/* f48542: add dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48545: mov byte ptr [esp + 0x38], dl */
  W8((uint32_t)(esp + 0x38u), (edx & 0xffu));
/* f48549: xor edx, edx */
  edx = 0;
/* f4854b: mov dl, byte ptr [edi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x5u))) & 0xffu);
/* f4854e: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48550: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f48554: mov byte ptr [edi + 4], cl */
  W8((uint32_t)(edi + 0x4u), (ecx & 0xffu));
/* f48557: mov ecx, esi */
  ecx = esi;
/* f48559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4855a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4855b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4855c: call 0xf410eb */
  esp -= 4; W32(esp, 0xf48561u); SPILL(); f_f410eb(); if (g_unwind) return; RELOAD();
/* f48561: jmp 0xf48582 */
  goto L_f48582;
L_f48563: /* f48563: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f48569: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* f4856f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f48570: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* f48576: mov edx, dword ptr [ecx + eax*8] */
  edx = R32((uint32_t)(ecx + eax*8));
/* f48579: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* f4857b: mov eax, dword ptr [ecx + eax*8 + 4] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* f4857f: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_f48582: /* f48582: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* f48586: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4858c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f4858d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4858f: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* f48593: jl 0xf471f0 */
  if ((sf != of)) goto L_f471f0;
L_f48599: /* f48599: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4859a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4859b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f4859c: /* f4859c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4859d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f485a0: ret  */
  esp += 4; SPILL(); return;
}

void f_f48b90(void) {
  LOAD_REGS();
L_f48b90: /* f48b90: mov edx, ecx */
  edx = ecx;
/* f48b92: mov al, byte ptr [edx + 0x510] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x510u))) & 0xffu);
/* f48b98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f48b99: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* f48b9b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f48b9d: je 0xf48c11 */
  if (zf) goto L_f48c11;
L_f48b9f: /* f48b9f: mov eax, dword ptr [edx + 0xf8] */
  eax = R32((uint32_t)(edx + 0xf8u));
/* f48ba5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48ba6: xor edi, edi */
  edi = 0;
/* f48ba8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f48baa: jle 0xf48c09 */
  if ((zf || sf != of)) goto L_f48c09;
L_f48bac: /* f48bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f48bad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f48bb0: /* f48bb0: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* f48bb6: lea esi, [eax + edi*8] */
  esi = (uint32_t)(eax + edi*8);
/* f48bb9: cmp byte ptr [esi], 0x16 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x16u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* f48bbc: jne 0xf48bf9 */
  if (!zf) goto L_f48bf9;
L_f48bbe: /* f48bbe: movzx eax, byte ptr [esi + 3] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3u)));
/* f48bc2: mov cl, byte ptr [edx + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x3bu))) & 0xffu);
/* f48bc5: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f48bc7: movzx ecx, byte ptr [esi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x2u)));
/* f48bcb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48bcd: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* f48bd3: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* f48bd6: mov cl, byte ptr [eax + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx))) & 0xffu);
/* f48bd9: cmp cl, 0x26 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x26u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f48bdc: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* f48bde: mov byte ptr [esi + 5], cl */
  W8((uint32_t)(esi + 0x5u), (ecx & 0xffu));
/* f48be1: jae 0xf48bf9 */
  if (!cf) goto L_f48bf9;
L_f48be3: /* f48be3: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* f48be9: mov esi, dword ptr [edx + 0xac] */
  esi = R32((uint32_t)(edx + 0xacu));
/* f48bef: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* f48bf2: mov cl, byte ptr [ecx + edi*8 + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*8 + 0x4u))) & 0xffu);
/* f48bf6: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
L_f48bf9: /* f48bf9: mov eax, dword ptr [edx + 0xf8] */
  eax = R32((uint32_t)(edx + 0xf8u));
/* f48bff: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f48c00: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f48c02: jl 0xf48bb0 */
  if ((sf != of)) goto L_f48bb0;
L_f48c04: /* f48c04: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f48c06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f48c07: jne 0xf48c10 */
  if (!zf) goto L_f48c10;
L_f48c09: /* f48c09: mov byte ptr [edx + 0x510], 0 */
  W8((uint32_t)(edx + 0x510u), 0x0u);
L_f48c10: /* f48c10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_f48c11: /* f48c11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f48c12: ret  */
  esp += 4; SPILL(); return;
}

void f_f48c50(void) {
  LOAD_REGS();
L_f48c50: /* f48c50: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f48c53: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* f48c59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f48c5a: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* f48c5d: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* f48c60: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48c61: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48c63: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f48c64: mov ebp, dword ptr [ecx + 0x8f0] */
  ebp = R32((uint32_t)(ecx + 0x8f0u));
/* f48c6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f48c6b: mov esi, eax */
  esi = eax;
/* f48c6d: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* f48c70: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48c71: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f48c74: mov edi, eax */
  edi = eax;
/* f48c76: mov al, byte ptr [ecx + 0x12f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x12f8u))) & 0xffu);
/* f48c7c: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* f48c7e: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* f48c80: mov edx, edi */
  edx = edi;
/* f48c82: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* f48c85: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f48c87: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f48c89: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f48c8b: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f48c8f: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* f48c93: mov byte ptr [ecx + 0x12f8], al */
  W8((uint32_t)(ecx + 0x12f8u), (eax & 0xffu));
/* f48c99: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f48c9d: jne 0xf49501 */
  if (!zf) goto L_f49501;
L_f48ca3: /* f48ca3: movzx edi, byte ptr [ebp] */
  edi = (uint32_t)(R8((uint32_t)(ebp)));
/* f48ca7: mov eax, edx */
  eax = edx;
/* f48ca9: movzx edx, byte ptr [edx + ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + ebp + 0xffffffffu)));
/* f48cae: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48cb0: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48cb2: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f48cb6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f48cb9: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* f48cbb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48cbd: movzx edi, byte ptr [ebp + esi*2 - 1] */
  edi = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xffffffffu)));
/* f48cc2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48cc4: movzx edi, byte ptr [esi + ebp] */
  edi = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* f48cc8: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f48cca: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f48ccc: mov al, byte ptr [edx + edi + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + edi + 0xef8u))) & 0xffu);
/* f48cd3: mov byte ptr [ebp], al */
  W8((uint32_t)(ebp), (eax & 0xffu));
/* f48cd6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f48cda: movzx edi, byte ptr [eax + ebp - 3] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebp + 0xfffffffdu)));
/* f48cdf: movzx edx, byte ptr [eax + ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + ebp + 0xffffffffu)));
/* f48ce4: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48ce6: movzx edi, byte ptr [ebp + esi*2 - 3] */
  edi = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xfffffffdu)));
/* f48ceb: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f48cef: movzx edx, byte ptr [ebp + esi*2 - 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xffffffffu)));
/* f48cf4: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48cf6: movzx edi, byte ptr [eax + ebp - 2] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebp + 0xfffffffeu)));
/* f48cfb: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* f48cff: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f48d03: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f48d06: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48d08: movzx edi, byte ptr [esi + ebp] */
  edi = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* f48d0c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f48d10: movzx edx, byte ptr [ebp + esi*2 - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xfffffffeu)));
/* f48d15: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f48d17: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f48d1b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48d1d: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f48d21: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f48d28: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48d2a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f48d2c: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f48d2f: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f48d33: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48d35: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f48d3c: mov byte ptr [ebx + esi*2 - 1], dl */
  W8((uint32_t)(ebx + esi*2 + 0xffffffffu), (edx & 0xffu));
/* f48d40: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f48d44: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f48d48: lea eax, [ebx + esi*2 - 1] */
  eax = (uint32_t)(ebx + esi*2 + 0xffffffffu);
/* f48d4c: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f48d50: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f48d54: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48d56: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48d5a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48d5b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48d5d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f48d61: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f48d63: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48d6a: mov byte ptr [ebx + edx*2 - 1], al */
  W8((uint32_t)(ebx + edx*2 + 0xffffffffu), (eax & 0xffu));
/* f48d6e: mov al, byte ptr [ecx + edi*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*2 + 0xaf4u))) & 0xffu);
/* f48d75: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* f48d78: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f48d7a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f48d7e: movzx ebp, byte ptr [edi + esi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f48d83: mov edx, edi */
  edx = edi;
/* f48d85: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48d87: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48d89: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f48d8c: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f48d8e: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f48d90: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f48d93: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f48d97: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f48d9b: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f48d9d: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f48da1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48da3: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48da5: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f48dac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f48db0: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f48db2: movzx ebp, byte ptr [edi + edx - 3] */
  ebp = (uint32_t)(R8((uint32_t)(edi + edx + 0xfffffffdu)));
/* f48db7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f48dbb: movzx eax, byte ptr [edx - 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f48dbf: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48dc1: movzx ebp, byte ptr [edi + esi*2 - 3] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffdu)));
/* f48dc6: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f48dca: movzx eax, byte ptr [edi + esi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f48dcf: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48dd1: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f48dd5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f48dd9: movzx ebp, byte ptr [edi + eax - 2] */
  ebp = (uint32_t)(R8((uint32_t)(edi + eax + 0xfffffffeu)));
/* f48dde: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f48de1: movzx edx, byte ptr [edi + esi*2 - 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffeu)));
/* f48de6: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48de8: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f48dec: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f48dee: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48df0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f48df4: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f48df8: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48dff: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f48e03: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f48e07: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f48e0a: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f48e11: mov byte ptr [ebx + 1], dl */
  W8((uint32_t)(ebx + 0x1u), (edx & 0xffu));
/* f48e14: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f48e18: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48e1a: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48e1e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48e1f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48e21: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f48e25: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f48e27: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48e2e: mov byte ptr [edx + ebx + 1], al */
  W8((uint32_t)(edx + ebx + 0x1u), (eax & 0xffu));
/* f48e32: mov al, byte ptr [ecx + ebp*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0xaf4u))) & 0xffu);
/* f48e39: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* f48e3c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f48e40: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f48e44: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f48e45: mov edx, edi */
  edx = edi;
/* f48e47: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48e49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48e4b: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* f48e4e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f48e52: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f48e55: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f48e57: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f48e59: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f48e5d: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f48e61: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f48e64: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f48e66: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f48e69: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f48e6d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48e6f: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48e71: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f48e78: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f48e7c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f48e7e: movzx ebp, byte ptr [edi + edx - 3] */
  ebp = (uint32_t)(R8((uint32_t)(edi + edx + 0xfffffffdu)));
/* f48e83: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f48e87: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* f48e8a: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f48e8e: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f48e91: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48e93: movzx ebp, byte ptr [edi + esi*2 - 3] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffdu)));
/* f48e98: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f48e9c: movzx edx, byte ptr [edi + esi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f48ea1: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f48ea3: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f48ea7: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* f48eab: movzx edx, byte ptr [eax - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f48eaf: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f48eb2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48eb4: movzx edx, byte ptr [edi + esi - 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi + 0xfffffffeu)));
/* f48eb9: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f48ebb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f48ebf: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48ec1: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f48ec5: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48ecc: mov byte ptr [edx + ebx + 4], al */
  W8((uint32_t)(edx + ebx + 0x4u), (eax & 0xffu));
/* f48ed0: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f48ed4: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f48ed7: mov al, byte ptr [edx + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f48ede: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f48ee2: mov byte ptr [ebx + 3], al */
  W8((uint32_t)(ebx + 0x3u), (eax & 0xffu));
/* f48ee5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f48ee9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48eeb: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48eef: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48ef0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48ef2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f48ef4: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f48ef7: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48efe: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f48f02: mov byte ptr [eax + ebx + 3], dl */
  W8((uint32_t)(eax + ebx + 0x3u), (edx & 0xffu));
/* f48f06: mov dl, byte ptr [ecx + ebp*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0xaf4u))) & 0xffu);
/* f48f0d: lea ebp, [ebx + 4] */
  ebp = (uint32_t)(ebx + 0x4u);
/* f48f10: mov byte ptr [ebp], dl */
  W8((uint32_t)(ebp), (edx & 0xffu));
/* f48f13: mov edx, 2 */
  edx = 0x2u;
/* f48f18: jle 0xf49026 */
  if ((zf || sf != of)) goto L_f49026;
L_f48f1e: /* f48f1e: lea eax, [eax + ebx + 3] */
  eax = (uint32_t)(eax + ebx + 0x3u);
/* f48f22: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f48f26: lea eax, [esi - 3] */
  eax = (uint32_t)(esi + 0xfffffffdu);
/* f48f29: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* f48f2d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* f48f31: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f48f35: jmp 0xf48f40 */
  goto L_f48f40;
L_f48f37: /* f48f37: mov edx, 2 */
  edx = 0x2u;
/* f48f3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f48f40: /* f48f40: add dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* f48f44: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f48f48: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48f4a: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f48f4e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f48f52: movzx eax, byte ptr [esi + edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f48f57: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f48f59: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48f5b: movzx edx, byte ptr [ebp + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x2u)));
/* f48f5f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48f61: movzx edx, byte ptr [esi + edi] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi)));
/* f48f65: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f48f66: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* f48f67: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48f69: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f48f6b: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* f48f6f: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f48f73: mov al, byte ptr [edx + ebp + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ebp + 0xef8u))) & 0xffu);
/* f48f7a: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* f48f7e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f48f80: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f48f84: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f48f88: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48f8a: movzx edx, byte ptr [esi + edi - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f48f8f: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f48f93: movzx eax, byte ptr [esi + edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f48f98: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48f9a: movzx edx, byte ptr [ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f48f9e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* f48fa2: movzx eax, byte ptr [ebp + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f48fa6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48fa8: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f48fad: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f48fb1: movzx eax, byte ptr [esi + edi] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi)));
/* f48fb5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48fb7: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f48fbb: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* f48fbf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48fc1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f48fc5: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f48fc9: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48fd0: mov byte ptr [edx + 1], al */
  W8((uint32_t)(edx + 0x1u), (eax & 0xffu));
/* f48fd3: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f48fd7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f48fdb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48fdd: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f48fe4: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f48fe8: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f48feb: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f48fef: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f48ff3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48ff5: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f48ff9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f48ffa: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f48ffc: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f49000: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49002: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49009: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4900b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f4900f: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f49016: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4901a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4901c: dec dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x30u), r);
  }
/* f49020: jne 0xf48f37 */
  if (!zf) goto L_f48f37;
L_f49026: /* f49026: cmp dword ptr [esp + 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4902b: jle 0xf49d8c */
  if ((zf || sf != of)) goto L_f49d8c;
L_f49031: /* f49031: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* f49034: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* f49037: lea ebp, [esi + esi - 1] */
  ebp = (uint32_t)(esi + esi + 0xffffffffu);
/* f4903b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4903f: lea ebp, [ebp + esi*2] */
  ebp = (uint32_t)(ebp + esi*2);
/* f49043: lea edx, [esi + esi - 2] */
  edx = (uint32_t)(esi + esi + 0xfffffffeu);
/* f49047: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f4904b: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f4904e: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* f49052: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* f49056: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49058: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* f4905c: lea ebp, [ebx + esi*4 + 4] */
  ebp = (uint32_t)(ebx + esi*4 + 0x4u);
/* f49060: lea edx, [esi + esi - 3] */
  edx = (uint32_t)(esi + esi + 0xfffffffdu);
/* f49064: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* f49068: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4906a: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* f4906e: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* f49072: lea ebp, [edi + esi*2] */
  ebp = (uint32_t)(edi + esi*2);
/* f49075: lea ebp, [esi + ebp + 1] */
  ebp = (uint32_t)(esi + ebp + 0x1u);
/* f49079: lea edx, [esi - 2] */
  edx = (uint32_t)(esi + 0xfffffffeu);
/* f4907c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4907e: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* f49082: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* f49086: lea ebp, [ebx + esi*2 + 4] */
  ebp = (uint32_t)(ebx + esi*2 + 0x4u);
/* f4908a: mov edx, esi */
  edx = esi;
/* f4908c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4908e: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* f49092: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* f49096: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f4909a: lea ebp, [eax + esi*2] */
  ebp = (uint32_t)(eax + esi*2);
/* f4909d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f490a1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f490a3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f490a5: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* f490a9: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* f490ad: mov eax, 1 */
  eax = 0x1u;
/* f490b2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f490b4: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* f490b8: lea edx, [esi + esi] */
  edx = (uint32_t)(esi + esi);
/* f490bb: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* f490c0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f490c2: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* f490c6: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* f490c9: mov edx, eax */
  edx = eax;
/* f490cb: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f490cd: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f490d1: lea ebx, [esi + esi] */
  ebx = (uint32_t)(esi + esi);
/* f490d4: mov edx, 0xfffffffc */
  edx = 0xfffffffcu;
/* f490d9: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f490db: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* f490df: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* f490e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f490e7: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f490e9: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* f490ed: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* f490f1: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f490f3: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f490f7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f490f9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f490fd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f490fe: lea ebp, [edi + ebp + 2] */
  ebp = (uint32_t)(edi + ebp + 0x2u);
/* f49102: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* f49106: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* f4910a: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* f4910e: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_f49112: /* f49112: movzx edx, byte ptr [edi + esi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f49117: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4911c: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f49120: movzx ebx, byte ptr [ebx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0xffffffffu)));
/* f49124: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49128: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4912a: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4912c: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49130: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49132: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f49136: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49139: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4913b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4913d: mov dl, byte ptr [eax + ecx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xef8u))) & 0xffu);
/* f49144: mov byte ptr [edi + esi - 1], dl */
  W8((uint32_t)(edi + esi + 0xffffffffu), (edx & 0xffu));
/* f49148: movzx edx, byte ptr [esi + edi - 4] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffcu)));
/* f4914d: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49151: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49153: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f49157: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4915b: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* f4915f: movzx ebx, byte ptr [eax + edx] */
  ebx = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f49163: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f49166: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49168: movzx ebx, byte ptr [esi + edi - 3] */
  ebx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4916d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f49171: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49175: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49177: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* f4917b: movzx ebx, byte ptr [ebx + edx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + edx)));
/* f4917f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49183: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f49187: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49189: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4918b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f4918f: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49193: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4919a: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4919e: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* f491a2: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f491a5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f491a9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f491ad: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* f491b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491b3: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f491ba: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* f491be: mov byte ptr [ebx + edx], al */
  W8((uint32_t)(ebx + edx), (eax & 0xffu));
/* f491c1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f491c5: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f491c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491cb: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491cf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f491d0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f491d2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f491d6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f491d8: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f491df: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f491e1: mov al, byte ptr [ecx + edx*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0xaf4u))) & 0xffu);
/* f491e8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f491ec: mov byte ptr [edx - 4], al */
  W8((uint32_t)(edx + 0xfffffffcu), (eax & 0xffu));
/* f491ef: movzx eax, byte ptr [edi + esi] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f491f3: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f491f7: movzx ebx, byte ptr [ebp - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f491fb: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f491fd: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f491ff: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49202: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49204: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f49208: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4920b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4920d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4920f: mov dl, byte ptr [ebx + eax + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + eax + 0xef8u))) & 0xffu);
/* f49216: mov byte ptr [edi + esi], dl */
  W8((uint32_t)(edi + esi), (edx & 0xffu));
/* f49219: movzx edx, byte ptr [esi + edi - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4921e: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49222: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49224: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49228: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4922c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f49230: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49232: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* f49236: movzx ebx, byte ptr [edx + eax] */
  ebx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* f4923a: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4923e: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49240: movzx ebx, byte ptr [esi + edi - 2] */
  ebx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f49245: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f49249: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f4924c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4924e: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* f49251: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49255: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49258: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4925a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4925c: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f49260: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49264: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4926b: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4926f: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* f49273: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49276: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4927a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f4927e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49280: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49287: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4928b: mov byte ptr [edx + 2], al */
  W8((uint32_t)(edx + 0x2u), (eax & 0xffu));
/* f4928e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f49292: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49296: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49298: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4929c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4929d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4929f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f492a3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f492a5: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f492ac: mov byte ptr [edx - 3], al */
  W8((uint32_t)(edx + 0xfffffffdu), (eax & 0xffu));
/* f492af: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f492b3: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f492ba: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* f492be: mov byte ptr [ebx - 2], dl */
  W8((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffu));
/* f492c1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f492c5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492c7: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f492cb: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* f492cf: movzx ebx, byte ptr [ebx + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + ebp)));
/* f492d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f492d7: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f492da: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f492dc: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f492de: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f492e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f492e3: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f492e7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492eb: mov dl, byte ptr [ebx + eax + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + eax + 0xef8u))) & 0xffu);
/* f492f2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f492f6: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f492f8: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f492fd: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49300: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49302: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49306: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f4930a: movzx edx, byte ptr [eax + ebp] */
  edx = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4930e: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f49312: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49314: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f49318: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f4931c: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49320: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49322: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* f49326: movzx ebx, byte ptr [eax + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4932a: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* f4932e: movzx eax, byte ptr [eax + ebp] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f49332: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49334: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f49338: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4933a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4933e: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f49345: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f49347: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4934b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4934f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f49353: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49355: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4935c: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f49360: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49363: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49367: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4936b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4936d: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49371: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49372: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49374: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49376: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f49379: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49380: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f49384: mov byte ptr [eax - 1], dl */
  W8((uint32_t)(eax + 0xffffffffu), (edx & 0xffu));
/* f49387: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f4938b: mov dl, byte ptr [ecx + edx*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0xaf4u))) & 0xffu);
/* f49392: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f49394: jle 0xf494b4 */
  if ((zf || sf != of)) goto L_f494b4;
L_f4939a: /* f4939a: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f4939d: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* f493a1: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f493a5: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* f493a9: mov eax, edi */
  eax = edi;
/* f493ab: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f493af: jmp 0xf493c0 */
  goto L_f493c0;
L_f493b1: /* f493b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f493b5: jmp 0xf493c0 */
  goto L_f493c0;
L_f493c0: /* f493c0: add dword ptr [esp + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* f493c5: add dword ptr [esp + 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* f493ca: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* f493ce: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f493d0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f493d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f493d2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f493d6: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f493da: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f493dc: movzx edx, byte ptr [esi + ebx - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f493e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f493e3: movzx edx, byte ptr [esi + ebx] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f493e7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f493e9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f493eb: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* f493ef: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* f493f3: movzx ebx, byte ptr [ebx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx)));
/* f493f6: mov al, byte ptr [ebx + edx + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx + 0xef8u))) & 0xffu);
/* f493fd: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f49401: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f49403: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49407: movzx edx, byte ptr [eax - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f4940b: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4940e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49410: movzx edx, byte ptr [esi + ebx - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffdu)));
/* f49415: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f49419: movzx eax, byte ptr [esi + ebx - 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f4941e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49420: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f49424: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49428: movzx edx, byte ptr [eax - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4942c: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f49430: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49432: movzx edx, byte ptr [esi + ebx - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffeu)));
/* f49437: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4943b: movzx eax, byte ptr [esi + ebx] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f4943f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49441: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49445: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f49449: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4944b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4944f: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49453: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4945a: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4945c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f49460: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f49464: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49466: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4946d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f49471: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49474: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f49478: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4947c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4947e: add eax, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49482: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49483: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49485: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f49489: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4948b: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49492: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49495: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f49499: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f494a0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f494a4: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f494a6: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* f494aa: jne 0xf493b1 */
  if (!zf) goto L_f493b1;
L_f494b0: /* f494b0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_f494b4: /* f494b4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f494b8: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f494bb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494bd: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f494c1: add dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* f494c5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f494c9: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f494cb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f494cd: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* f494d4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494d6: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f494da: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f494de: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f494e0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494e2: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f494e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f494e7: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f494eb: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f494ef: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f494f3: jne 0xf49112 */
  if (!zf) goto L_f49112;
L_f494f9: /* f494f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f494fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f494fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f494fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f494fd: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f49500: ret  */
  esp += 4; SPILL(); return;
L_f49501: /* f49501: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f49504: lea edi, [eax + eax + 1] */
  edi = (uint32_t)(eax + eax + 0x1u);
/* f49508: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4950c: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* f4950f: lea eax, [eax*4 + 2] */
  eax = (uint32_t)(eax*4 + 0x2u);
/* f49516: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* f49519: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4951b: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f4951e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4951f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f49523: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f49525: mov eax, edi */
  eax = edi;
/* f49527: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49529: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f4952c: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f49530: movzx edx, byte ptr [edx + 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* f49534: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49536: mov eax, edi */
  eax = edi;
/* f49538: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4953a: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4953e: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49540: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f49544: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f49548: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4954c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4954f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49551: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49553: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f4955a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4955e: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49560: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49563: movzx edx, byte ptr [edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xfffffffeu)));
/* f49567: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49569: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* f4956d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f49571: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49574: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f49578: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4957b: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4957d: movzx ebp, byte ptr [eax + edi - 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edi + 0xfffffffeu)));
/* f49582: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49584: movzx ebp, byte ptr [edi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49588: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f4958c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49590: movzx edx, byte ptr [edx + 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* f49594: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49596: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4959a: movzx ebp, byte ptr [ebp + 1] */
  ebp = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f4959e: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f495a2: movzx eax, byte ptr [eax + edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + edi + 0xffffffffu)));
/* f495a7: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f495a9: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f495ab: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f495af: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f495b3: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f495b6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f495b8: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* f495bb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f495bf: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f495c6: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f495c8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f495cc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f495d0: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f495d3: mov al, byte ptr [edx + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f495da: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f495de: mov byte ptr [edx + ebx - 1], al */
  W8((uint32_t)(edx + ebx + 0xffffffffu), (eax & 0xffu));
/* f495e2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* f495e6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f495ea: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f495ec: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f495f0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f495f1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f495f3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f495f7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f495f9: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49600: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49603: mov al, byte ptr [ecx + ebp*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0xaf4u))) & 0xffu);
/* f4960a: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f4960e: mov byte ptr [ebx + ebp], al */
  W8((uint32_t)(ebx + ebp), (eax & 0xffu));
/* f49611: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f49612: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f49616: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49619: mov edx, edi */
  edx = edi;
/* f4961b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4961d: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f49620: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f49623: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f49627: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* f4962b: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4962e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f49632: mov eax, edi */
  eax = edi;
/* f49634: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49636: lea ebp, [eax + 1] */
  ebp = (uint32_t)(eax + 0x1u);
/* f49639: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4963d: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49640: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49642: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* f49646: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f49649: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f4964b: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4964d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* f49651: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f49655: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49657: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49659: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4965d: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f49661: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f49668: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4966c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f49670: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49672: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49675: movzx edx, byte ptr [edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xfffffffeu)));
/* f49679: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4967b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4967f: movzx edx, byte ptr [edx + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + edi + 0xfffffffeu)));
/* f49684: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f49688: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f4968c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4968e: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f49692: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49695: movzx ebp, byte ptr [ebp - 1] */
  ebp = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f49699: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4969d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f496a1: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f496a5: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f496a7: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* f496ab: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f496ae: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f496b0: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f496b4: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f496b8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f496ba: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f496be: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f496c1: mov edx, ebp */
  edx = ebp;
/* f496c3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f496c5: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* f496c8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f496cc: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f496d3: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f496d5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f496d9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f496dd: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f496e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f496e3: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f496ea: mov byte ptr [ebx + ebp - 1], al */
  W8((uint32_t)(ebx + ebp + 0xffffffffu), (eax & 0xffu));
/* f496ee: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f496f2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f496f4: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f496f8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f496f9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f496fb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f496ff: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49701: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49708: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4970b: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f4970f: mov al, byte ptr [ecx + eax*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f49716: mov byte ptr [ebx + ebp], al */
  W8((uint32_t)(ebx + ebp), (eax & 0xffu));
/* f49719: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f4971c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4971f: jle 0xf4982d */
  if ((zf || sf != of)) goto L_f4982d;
L_f49725: /* f49725: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f49729: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4972d: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* f49731: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f49735: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f49738: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4973c: jmp 0xf49742 */
  goto L_f49742;
L_f4973e: /* f4973e: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
L_f49742: /* f49742: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f49746: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f49747: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f49748: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f49749: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f4974d: add dword ptr [esp + 0x30], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* f49752: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f49755: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f49757: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4975b: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4975e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f49762: movzx ebp, byte ptr [eax] */
  ebp = (uint32_t)(R8((uint32_t)(eax)));
/* f49765: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f49769: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4976b: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4976d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f49771: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f49774: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f49778: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4977a: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4977c: mov dl, byte ptr [eax + edx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx + 0xef8u))) & 0xffu);
/* f49783: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f49787: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49789: movzx ebp, byte ptr [eax - 3] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0xfffffffdu)));
/* f4978d: movzx edx, byte ptr [eax - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f49791: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49793: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* f49797: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4979b: movzx ebp, byte ptr [edx - 3] */
  ebp = (uint32_t)(R8((uint32_t)(edx + 0xfffffffdu)));
/* f4979f: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f497a3: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f497a5: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f497a9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f497ac: movzx eax, byte ptr [eax - 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f497b0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f497b2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f497b6: movzx ebp, byte ptr [eax - 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f497ba: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* f497be: movzx ebp, byte ptr [eax] */
  ebp = (uint32_t)(R8((uint32_t)(eax)));
/* f497c1: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f497c5: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f497c7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f497cb: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f497cd: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* f497d1: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f497d8: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f497da: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* f497de: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* f497e2: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f497e4: mov dl, byte ptr [ecx + ebp + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp + 0xaf4u))) & 0xffu);
/* f497eb: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f497ef: mov byte ptr [ebx + ebp - 1], dl */
  W8((uint32_t)(ebx + ebp + 0xffffffffu), (edx & 0xffu));
/* f497f3: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* f497f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f497f9: add eax, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f497fd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f497fe: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49800: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f49804: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49806: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4980d: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49810: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f49814: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f4981b: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* f4981f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f49820: mov byte ptr [ebx + ebp], dl */
  W8((uint32_t)(ebx + ebp), (edx & 0xffu));
/* f49823: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f49827: jne 0xf4973e */
  if (!zf) goto L_f4973e;
L_f4982d: /* f4982d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4982e: mov edx, edi */
  edx = edi;
/* f49830: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49833: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f49836: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49838: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f49839: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4983d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f49841: mov eax, edi */
  eax = edi;
/* f49843: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49845: mov edx, edi */
  edx = edi;
/* f49847: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49849: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f4984d: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f49850: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f49852: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f49856: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4985a: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4985c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49860: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49863: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49865: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f49869: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4986c: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f49870: movzx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi)));
/* f49874: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49876: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49878: mov dl, byte ptr [eax + edx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx + 0xef8u))) & 0xffu);
/* f4987f: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49881: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49885: movzx edi, byte ptr [edx - 2] */
  edi = (uint32_t)(R8((uint32_t)(edx + 0xfffffffeu)));
/* f49889: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f4988c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4988e: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f49892: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f49896: movzx ebp, byte ptr [eax + esi - 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + esi + 0xfffffffeu)));
/* f4989b: movzx edi, byte ptr [eax + esi] */
  edi = (uint32_t)(R8((uint32_t)(eax + esi)));
/* f4989f: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f498a1: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f498a5: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* f498a9: movzx edi, byte ptr [edx - 1] */
  edi = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f498ad: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f498b1: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f498b4: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f498b6: movzx edi, byte ptr [eax + esi - 1] */
  edi = (uint32_t)(R8((uint32_t)(eax + esi + 0xffffffffu)));
/* f498bb: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f498bd: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* f498c0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f498c4: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f498c8: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f498cf: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* f498d2: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f498d4: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f498d7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f498db: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f498dd: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f498e1: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f498e4: mov al, byte ptr [edx + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f498eb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f498ef: mov byte ptr [edx + ebx - 1], al */
  W8((uint32_t)(edx + ebx + 0xffffffffu), (eax & 0xffu));
/* f498f3: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f498f7: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f498fb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f498fd: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49901: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49902: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49904: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49908: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4990a: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49911: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49914: mov al, byte ptr [ecx + ebp*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0xaf4u))) & 0xffu);
/* f4991b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4991f: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49922: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49926: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f49928: jle 0xf49d8c */
  if ((zf || sf != of)) goto L_f49d8c;
L_f4992e: /* f4992e: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* f49932: lea edx, [ebx + edi] */
  edx = (uint32_t)(ebx + edi);
/* f49935: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f49939: lea edx, [edi + ebp + 1] */
  edx = (uint32_t)(edi + ebp + 0x1u);
/* f4993d: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f49940: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f49944: lea edx, [ebx + 3] */
  edx = (uint32_t)(ebx + 0x3u);
/* f49947: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f4994b: lea edx, [edi - 2] */
  edx = (uint32_t)(edi + 0xfffffffeu);
/* f4994e: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f49950: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* f49954: mov edi, edx */
  edi = edx;
/* f49956: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f49958: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* f4995c: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* f4995f: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f49961: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* f49965: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* f49968: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4996a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4996e: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f49972: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* f49976: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f4997a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4997c: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* f49980: lea eax, [esi + ebp + 1] */
  eax = (uint32_t)(esi + ebp + 0x1u);
/* f49984: mov edx, edi */
  edx = edi;
/* f49986: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49988: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4998b: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* f4998e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49990: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* f49994: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49998: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f4999c: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f499a0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
L_f499a4: /* f499a4: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f499a7: movzx edx, byte ptr [esi + ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffeu)));
/* f499ac: movzx edi, byte ptr [ebp - 1] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f499b0: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f499b2: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f499b4: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f499b8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f499ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f499be: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f499c2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f499c4: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f499c6: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f499cd: mov byte ptr [esi + ebp - 2], al */
  W8((uint32_t)(esi + ebp + 0xfffffffeu), (eax & 0xffu));
/* f499d1: movzx edx, byte ptr [esi + ebp - 4] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffcu)));
/* f499d6: movzx eax, byte ptr [ebp - 2] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f499da: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f499dc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f499e0: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f499e4: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f499e8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f499ea: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f499ee: movzx edi, byte ptr [eax + edx] */
  edi = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f499f2: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f499f5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f499f9: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f499fd: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f499ff: movzx edi, byte ptr [esi + ebp - 3] */
  edi = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffdu)));
/* f49a04: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49a08: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f49a0c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49a0e: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* f49a12: movzx edi, byte ptr [edi] */
  edi = (uint32_t)(R8((uint32_t)(edi)));
/* f49a15: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f49a17: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f49a1b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49a1d: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f49a21: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49a28: mov byte ptr [edx - 2], al */
  W8((uint32_t)(edx + 0xfffffffeu), (eax & 0xffu));
/* f49a2b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49a2f: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* f49a32: mov al, byte ptr [edx + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f49a39: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f49a3d: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f49a3f: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49a43: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* f49a47: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49a49: add eax, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49a4d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49a4e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49a50: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49a52: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49a59: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f49a5d: mov byte ptr [eax - 3], dl */
  W8((uint32_t)(eax + 0xfffffffdu), (edx & 0xffu));
/* f49a60: mov dl, byte ptr [ecx + edi*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*2 + 0xaf4u))) & 0xffu);
/* f49a67: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* f49a6b: mov byte ptr [eax + edi], dl */
  W8((uint32_t)(eax + edi), (edx & 0xffu));
/* f49a6e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f49a72: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f49a76: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49a78: movzx edx, byte ptr [ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f49a7c: lea edi, [esi + ebp - 1] */
  edi = (uint32_t)(esi + ebp + 0xffffffffu);
/* f49a80: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* f49a84: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f49a88: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49a8b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f49a8d: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49a8f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f49a93: movzx ebp, byte ptr [eax + ebp] */
  ebp = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f49a97: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49a9a: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49a9c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f49aa0: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f49aa4: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49aa6: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49aa8: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f49aaf: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49ab1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f49ab5: movzx eax, byte ptr [edx - 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f49ab9: movzx edx, byte ptr [esi + edx - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + edx + 0xfffffffdu)));
/* f49abe: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49ac0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f49ac4: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f49ac8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f49acc: movzx ebp, byte ptr [eax + edx] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f49ad0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f49ad3: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49ad5: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f49ad9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f49add: movzx ebp, byte ptr [edx - 2] */
  ebp = (uint32_t)(R8((uint32_t)(edx + 0xfffffffeu)));
/* f49ae1: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49ae4: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49ae6: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* f49aea: movzx ebp, byte ptr [eax + ebp] */
  ebp = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f49aee: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f49af2: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* f49af6: movzx edx, byte ptr [eax + edx] */
  edx = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f49afa: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* f49afe: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f49b00: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49b02: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49b09: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f49b0d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f49b11: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f49b13: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49b17: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* f49b1a: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49b21: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f49b25: mov byte ptr [eax + 2], dl */
  W8((uint32_t)(eax + 0x2u), (edx & 0xffu));
/* f49b28: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f49b2c: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49b30: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49b32: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49b36: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49b37: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49b39: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f49b3d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49b3f: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49b46: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49b49: mov al, byte ptr [ecx + ebp*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0xaf4u))) & 0xffu);
/* f49b50: mov byte ptr [edx + esi*2], al */
  W8((uint32_t)(edx + esi*2), (eax & 0xffu));
/* f49b53: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f49b56: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f49b59: jle 0xf49c62 */
  if ((zf || sf != of)) goto L_f49c62;
L_f49b5f: /* f49b5f: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f49b63: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f49b67: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f49b6a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f49b6e: mov edi, edi */
  edi = edi;
L_f49b70: /* f49b70: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f49b74: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f49b75: mov eax, 2 */
  eax = 0x2u;
/* f49b7a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49b7c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* f49b80: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f49b84: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49b86: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49b89: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f49b8b: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f49b8f: movzx edx, byte ptr [ebp + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f49b93: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49b95: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f49b99: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49b9b: movzx eax, byte ptr [esi + edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f49ba0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49ba2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49ba4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* f49ba5: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* f49ba9: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f49bad: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f49bb4: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* f49bb8: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f49bba: movzx edx, byte ptr [ebp - 3] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* f49bbe: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f49bc2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49bc4: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f49bc9: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f49bcd: movzx eax, byte ptr [edi + esi] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f49bd1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49bd3: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f49bd7: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49bdb: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f49bdf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49be1: movzx edx, byte ptr [esi + edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f49be6: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f49bea: movzx eax, byte ptr [esi + edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f49bef: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49bf1: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f49bf5: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f49bf9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49bfb: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f49bff: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f49c03: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49c0a: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f49c0c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49c10: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f49c14: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49c16: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49c1d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f49c21: mov byte ptr [ebx + edx - 1], al */
  W8((uint32_t)(ebx + edx + 0xffffffffu), (eax & 0xffu));
/* f49c25: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f49c29: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49c2d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49c2f: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49c33: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49c34: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49c36: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f49c3a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49c3c: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49c43: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49c46: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f49c4a: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f49c51: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49c55: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f49c58: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* f49c5c: jne 0xf49b70 */
  if (!zf) goto L_f49b70;
L_f49c62: /* f49c62: movzx ebp, byte ptr [edi + 2] */
  ebp = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f49c66: add dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* f49c6b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f49c6c: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* f49c70: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f49c73: mov edx, edi */
  edx = edi;
/* f49c75: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f49c78: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49c7a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f49c7b: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f49c7f: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49c82: mov eax, edi */
  eax = edi;
/* f49c84: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49c86: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f49c8a: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49c8d: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f49c8f: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49c91: add edx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49c95: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f49c99: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49c9b: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49c9d: mov al, byte ptr [ecx + ebp + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp + 0xef8u))) & 0xffu);
/* f49ca4: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f49ca6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f49caa: movzx ebp, byte ptr [eax - 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f49cae: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f49cb1: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49cb3: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f49cb7: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f49cbb: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f49cc0: movzx edi, byte ptr [esi + edi - 1] */
  edi = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f49cc5: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f49cc7: movzx edx, byte ptr [eax - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f49ccb: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f49ccf: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49cd2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49cd4: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49cd8: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49cda: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49cdc: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f49ce0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f49ce4: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f49ce8: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49cef: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* f49cf2: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49cf4: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49cf7: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49cfb: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49cfd: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49cff: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f49d03: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49d0a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49d0e: mov byte ptr [ebx + eax - 1], dl */
  W8((uint32_t)(ebx + eax + 0xffffffffu), (edx & 0xffu));
/* f49d12: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f49d16: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* f49d19: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f49d1d: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f49d21: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49d23: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49d24: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49d26: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49d2a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49d2c: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49d33: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49d36: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49d3a: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f49d41: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49d45: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49d47: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f49d4a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f49d4e: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* f49d52: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f49d56: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49d58: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f49d5a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* f49d5e: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f49d62: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f49d66: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* f49d6d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f49d6f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f49d73: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f49d77: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f49d79: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f49d7d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* f49d7e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* f49d82: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* f49d86: jne 0xf499a4 */
  if (!zf) goto L_f499a4;
L_f49d8c: /* f49d8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f49d8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f49d8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f49d8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f49d90: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f49d93: ret  */
  esp += 4; SPILL(); return;
}

void f_f493b7(void) {
  LOAD_REGS();
  goto L_f493b7;
L_f49112: /* f49112: movzx edx, byte ptr [edi + esi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f49117: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4911c: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f49120: movzx ebx, byte ptr [ebx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0xffffffffu)));
/* f49124: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49128: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4912a: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4912c: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49130: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49132: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f49136: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f49139: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4913b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4913d: mov dl, byte ptr [eax + ecx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xef8u))) & 0xffu);
/* f49144: mov byte ptr [edi + esi - 1], dl */
  W8((uint32_t)(edi + esi + 0xffffffffu), (edx & 0xffu));
/* f49148: movzx edx, byte ptr [esi + edi - 4] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffcu)));
/* f4914d: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49151: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49153: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f49157: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4915b: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* f4915f: movzx ebx, byte ptr [eax + edx] */
  ebx = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f49163: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f49166: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49168: movzx ebx, byte ptr [esi + edi - 3] */
  ebx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4916d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f49171: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49175: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49177: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* f4917b: movzx ebx, byte ptr [ebx + edx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + edx)));
/* f4917f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49183: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f49187: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49189: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4918b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f4918f: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49193: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4919a: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4919e: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* f491a2: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f491a5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f491a9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f491ad: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* f491b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491b3: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f491ba: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* f491be: mov byte ptr [ebx + edx], al */
  W8((uint32_t)(ebx + edx), (eax & 0xffu));
/* f491c1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f491c5: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f491c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491cb: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f491cf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f491d0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f491d2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f491d6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f491d8: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f491df: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f491e1: mov al, byte ptr [ecx + edx*2 + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0xaf4u))) & 0xffu);
/* f491e8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f491ec: mov byte ptr [edx - 4], al */
  W8((uint32_t)(edx + 0xfffffffcu), (eax & 0xffu));
/* f491ef: movzx eax, byte ptr [edi + esi] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f491f3: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f491f7: movzx ebx, byte ptr [ebp - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f491fb: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f491fd: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f491ff: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49202: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49204: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f49208: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4920b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4920d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4920f: mov dl, byte ptr [ebx + eax + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + eax + 0xef8u))) & 0xffu);
/* f49216: mov byte ptr [edi + esi], dl */
  W8((uint32_t)(edi + esi), (edx & 0xffu));
/* f49219: movzx edx, byte ptr [esi + edi - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4921e: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49222: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49224: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49228: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4922c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f49230: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f49232: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* f49236: movzx ebx, byte ptr [edx + eax] */
  ebx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* f4923a: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4923e: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49240: movzx ebx, byte ptr [esi + edi - 2] */
  ebx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f49245: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f49249: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f4924c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4924e: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* f49251: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f49255: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f49258: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4925a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4925c: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f49260: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49264: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4926b: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4926f: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* f49273: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49276: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4927a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f4927e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49280: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49287: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4928b: mov byte ptr [edx + 2], al */
  W8((uint32_t)(edx + 0x2u), (eax & 0xffu));
/* f4928e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f49292: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f49296: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49298: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4929c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4929d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4929f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f492a3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f492a5: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f492ac: mov byte ptr [edx - 3], al */
  W8((uint32_t)(edx + 0xfffffffdu), (eax & 0xffu));
/* f492af: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f492b3: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f492ba: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* f492be: mov byte ptr [ebx - 2], dl */
  W8((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffu));
/* f492c1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f492c5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492c7: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f492cb: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* f492cf: movzx ebx, byte ptr [ebx + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + ebp)));
/* f492d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f492d7: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f492da: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f492dc: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f492de: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f492e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f492e3: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f492e7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f492eb: mov dl, byte ptr [ebx + eax + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + eax + 0xef8u))) & 0xffu);
/* f492f2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f492f6: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f492f8: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f492fd: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f49300: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49302: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49306: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f4930a: movzx edx, byte ptr [eax + ebp] */
  edx = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4930e: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f49312: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49314: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f49318: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f4931c: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f49320: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f49322: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* f49326: movzx ebx, byte ptr [eax + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4932a: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* f4932e: movzx eax, byte ptr [eax + ebp] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f49332: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49334: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f49338: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4933a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4933e: mov dl, byte ptr [edx + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xaf4u))) & 0xffu);
/* f49345: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f49347: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4934b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4934f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f49353: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49355: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4935c: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f49360: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f49363: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49367: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4936b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4936d: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49371: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49372: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49374: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f49376: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f49379: mov dl, byte ptr [eax + ecx + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49380: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f49384: mov byte ptr [eax - 1], dl */
  W8((uint32_t)(eax + 0xffffffffu), (edx & 0xffu));
/* f49387: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f4938b: mov dl, byte ptr [ecx + edx*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0xaf4u))) & 0xffu);
/* f49392: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f49394: jle 0xf494b4 */
  if ((zf || sf != of)) goto L_f494b4;
L_f4939a: /* f4939a: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f4939d: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* f493a1: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f493a5: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* f493a9: mov eax, edi */
  eax = edi;
/* f493ab: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f493af: jmp 0xf493c0 */
  goto L_f493c0;
L_f493b1: /* f493b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f493b5: jmp 0xf493c0 */
  goto L_f493c0;
L_f493b7: /* f493b7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* f493be: mov edi, edi */
  edi = edi;
L_f493c0: /* f493c0: add dword ptr [esp + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* f493c5: add dword ptr [esp + 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* f493ca: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* f493ce: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f493d0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f493d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f493d2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f493d6: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f493da: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f493dc: movzx edx, byte ptr [esi + ebx - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f493e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f493e3: movzx edx, byte ptr [esi + ebx] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f493e7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f493e9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f493eb: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* f493ef: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* f493f3: movzx ebx, byte ptr [ebx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx)));
/* f493f6: mov al, byte ptr [ebx + edx + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx + 0xef8u))) & 0xffu);
/* f493fd: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f49401: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f49403: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49407: movzx edx, byte ptr [eax - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f4940b: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4940e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49410: movzx edx, byte ptr [esi + ebx - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffdu)));
/* f49415: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f49419: movzx eax, byte ptr [esi + ebx - 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f4941e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49420: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f49424: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f49428: movzx edx, byte ptr [eax - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4942c: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f49430: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49432: movzx edx, byte ptr [esi + ebx - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffeu)));
/* f49437: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4943b: movzx eax, byte ptr [esi + ebx] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f4943f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49441: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f49445: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f49449: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4944b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4944f: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f49453: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4945a: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4945c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f49460: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f49464: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49466: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f4946d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f49471: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49474: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f49478: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4947c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4947e: add eax, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f49482: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f49483: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f49485: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f49489: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4948b: mov al, byte ptr [eax + ecx + 0xaf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xaf4u))) & 0xffu);
/* f49492: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f49495: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f49499: mov dl, byte ptr [ecx + eax*2 + 0xaf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0xaf4u))) & 0xffu);
/* f494a0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f494a4: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f494a6: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* f494aa: jne 0xf493b1 */
  if (!zf) goto L_f493b1;
L_f494b0: /* f494b0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_f494b4: /* f494b4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f494b8: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f494bb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494bd: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f494c1: add dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* f494c5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f494c9: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f494cb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f494cd: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* f494d4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494d6: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f494da: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f494de: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f494e0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f494e2: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f494e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f494e7: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f494eb: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f494ef: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f494f3: jne 0xf49112 */
  if (!zf) goto L_f49112;
L_f494f9: /* f494f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f494fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f494fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f494fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f494fd: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f49500: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a200(void) {
  LOAD_REGS();
L_f4a200: /* f4a200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4a201: mov ebp, esp */
  ebp = esp;
/* f4a203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4a205: push 0xf51030 */
  { uint32_t v = 0xf51030u; esp -= 4; W32(esp, v); }
/* f4a20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4a210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4a211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4a218: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4a21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4a21c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4a21d: mov esi, ecx */
  esi = ecx;
/* f4a21f: mov ecx, dword ptr [esi + 0x1300] */
  ecx = R32((uint32_t)(esi + 0x1300u));
/* f4a225: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4a227: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4a228: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4a22b: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* f4a22e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4a235: je 0xf4a329 */
  if (zf) goto L_f4a329;
L_f4a23b: /* f4a23b: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4a241: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f4a244: mov eax, dword ptr [esi + 0x1308] */
  eax = R32((uint32_t)(esi + 0x1308u));
/* f4a24a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4a24c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f4a24f: je 0xf4a256 */
  if (zf) goto L_f4a256;
L_f4a251: /* f4a251: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4a254: jmp 0xf4a29a */
  goto L_f4a29a;
L_f4a256: /* f4a256: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4a25a: jne 0xf4a26a */
  if (!zf) goto L_f4a26a;
L_f4a25c: /* f4a25c: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* f4a262: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* f4a265: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4a268: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xf4a26au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4a26a: /* f4a26a: mov eax, dword ptr [esi + 0x1300] */
  eax = R32((uint32_t)(esi + 0x1300u));
/* f4a270: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f4a276: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4a278: je 0xf4a329 */
  if (zf) goto L_f4a329;
L_f4a27e: /* f4a27e: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* f4a281: imul ecx, dword ptr [esi + 0x40] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x40u)));
  ecx = (uint32_t)r;
  }
/* f4a285: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a28b: cmp dword ptr [eax + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a28e: jl 0xf4a329 */
  if ((sf != of)) goto L_f4a329;
L_f4a294: /* f4a294: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f4a297: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_f4a29a: /* f4a29a: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* f4a29d: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* f4a2a0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4a2a3: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* f4a2a6: lea edx, [ebx - 1] */
  edx = (uint32_t)(ebx + 0xffffffffu);
/* f4a2a9: xor eax, eax */
  eax = 0;
L_f4a2ab: /* f4a2ab: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a2ae: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f4a2b1: jge 0xf4a329 */
  if ((sf == of)) goto L_f4a329;
L_f4a2b3: /* f4a2b3: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4a2b6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a2b9: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f4a2bb: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4a2be: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4a2c0: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4a2c2: xor eax, eax */
  eax = 0;
L_f4a2c4: /* f4a2c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a2c6: jge 0xf4a323 */
  if ((sf == of)) goto L_f4a323;
L_f4a2c8: /* f4a2c8: movzx ebx, byte ptr [eax + ecx] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* f4a2cc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a2ce: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a2d0: mov bl, byte ptr [ebx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edi))) & 0xffu);
/* f4a2d3: mov byte ptr [eax + ecx], bl */
  W8((uint32_t)(eax + ecx), (ebx & 0xffu));
/* f4a2d6: movzx ebx, byte ptr [eax + ecx + 1] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ecx + 0x1u)));
/* f4a2db: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* f4a2de: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a2e0: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a2e2: mov bl, byte ptr [ebx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edi))) & 0xffu);
/* f4a2e5: mov byte ptr [esi + ecx], bl */
  W8((uint32_t)(esi + ecx), (ebx & 0xffu));
/* f4a2e8: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* f4a2eb: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f4a2ee: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a2f1: jmp 0xf4a2c4 */
  goto L_f4a2c4;
L_f4a323: /* f4a323: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a326: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4a327: jmp 0xf4a2ab */
  goto L_f4a2ab;
L_f4a329: /* f4a329: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a32c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a32d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a32e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a335: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a336: mov esp, ebp */
  esp = ebp;
/* f4a338: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a339: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a2f3(void) {
  LOAD_REGS();
L_f4a2f3: /* f4a2f3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f4a2f6: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4a2fb: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* f4a2fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4a2ff: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f4a302: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a307u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4a307(); return;
}

void f_f4a307(void) {
  LOAD_REGS();
  goto L_f4a307;
L_f4a2ab: /* f4a2ab: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a2ae: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f4a2b1: jge 0xf4a329 */
  if ((sf == of)) goto L_f4a329;
L_f4a2b3: /* f4a2b3: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4a2b6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a2b9: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f4a2bb: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4a2be: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4a2c0: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4a2c2: xor eax, eax */
  eax = 0;
L_f4a2c4: /* f4a2c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a2c6: jge 0xf4a323 */
  if ((sf == of)) goto L_f4a323;
L_f4a2c8: /* f4a2c8: movzx ebx, byte ptr [eax + ecx] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* f4a2cc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a2ce: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a2d0: mov bl, byte ptr [ebx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edi))) & 0xffu);
/* f4a2d3: mov byte ptr [eax + ecx], bl */
  W8((uint32_t)(eax + ecx), (ebx & 0xffu));
/* f4a2d6: movzx ebx, byte ptr [eax + ecx + 1] */
  ebx = (uint32_t)(R8((uint32_t)(eax + ecx + 0x1u)));
/* f4a2db: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* f4a2de: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a2e0: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a2e2: mov bl, byte ptr [ebx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edi))) & 0xffu);
/* f4a2e5: mov byte ptr [esi + ecx], bl */
  W8((uint32_t)(esi + ecx), (ebx & 0xffu));
/* f4a2e8: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* f4a2eb: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f4a2ee: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a2f1: jmp 0xf4a2c4 */
  goto L_f4a2c4;
L_f4a307: /* f4a307: push 0xf5590c */
  { uint32_t v = 0xf5590cu; esp -= 4; W32(esp, v); }
/* f4a30c: push 0xf5b5b4 */
  { uint32_t v = 0xf5b5b4u; esp -= 4; W32(esp, v); }
/* f4a311: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4a317u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4a317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a31a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a31c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a31e: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a323u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4a323: /* f4a323: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a326: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4a327: jmp 0xf4a2ab */
  goto L_f4a2ab;
L_f4a329: /* f4a329: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a32c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a32d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a32e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a335: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a336: mov esp, ebp */
  esp = ebp;
/* f4a338: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a339: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a390(void) {
  LOAD_REGS();
L_f4a390: /* f4a390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4a391: mov ebp, esp */
  ebp = esp;
/* f4a393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4a395: push 0xf51040 */
  { uint32_t v = 0xf51040u; esp -= 4; W32(esp, v); }
/* f4a39a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4a3a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4a3a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4a3a8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4a3ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4a3ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4a3ad: mov esi, ecx */
  esi = ecx;
/* f4a3af: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4a3b5: mov cl, byte ptr [eax + 0x7c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x7cu))) & 0xffu);
/* f4a3b8: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* f4a3ba: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4a3bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4a3bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4a3c0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4a3c7: jne 0xf4a3d6 */
  if (!zf) goto L_f4a3d6;
L_f4a3c9: /* f4a3c9: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a3cf: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* f4a3d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f4a3d4: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xf4a3d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4a3d6: /* f4a3d6: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4a3dc: test byte ptr [eax + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4a3df: jne 0xf4a3ef */
  if (!zf) goto L_f4a3ef;
L_f4a3e1: /* f4a3e1: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a3e7: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* f4a3ea: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* f4a3ed: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xf4a3efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4a3ef: /* f4a3ef: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4a3f5: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* f4a3fb: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4a401: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4a404: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4a407: mov eax, dword ptr [esi + 0x11c] */
  eax = R32((uint32_t)(esi + 0x11cu));
/* f4a40d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4a40f: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* f4a412: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* f4a415: jne 0xf4a530 */
  if (!zf) goto L_f4a530;
L_f4a41b: /* f4a41b: mov edx, dword ptr [esi + 0xe4] */
  edx = R32((uint32_t)(esi + 0xe4u));
/* f4a421: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* f4a427: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4a42a: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* f4a42d: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* f4a430: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4a436: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f4a439: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* f4a43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4a440: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f4a443: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f4a446: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4a448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4a448: mov ebx, dword ptr [esi + 0xc8] */
  ebx = R32((uint32_t)(esi + 0xc8u));
/* f4a44e: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* f4a454: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a457: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4a45a: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f4a45d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4a45fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4a45f: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* f4a465: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f4a467: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a46a: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* f4a46d: xor edi, edi */
  edi = 0;
L_f4a46f: /* f4a46f: cmp edi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a472: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* f4a475: jge 0xf4a530 */
  if ((sf == of)) goto L_f4a530;
L_f4a47b: /* f4a47b: movzx ecx, byte ptr [esi + 0x3b] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* f4a47f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f4a482: mov eax, edi */
  eax = edi;
/* f4a484: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f4a486: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a488: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f4a48b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f4a48e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a490: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4a493: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f4a496: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* f4a499: and edx, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f4a49f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* f4a4a2: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f4a4a4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a4a6: xor eax, eax */
  eax = 0;
L_f4a4a8: /* f4a4a8: cmp eax, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a4ab: jge 0xf4a4fa */
  if ((sf == of)) goto L_f4a4fa;
L_f4a4ad: /* f4a4ad: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* f4a4b3: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a4b5: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a4b7: movzx ebx, byte ptr [ebx + edx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + edx)));
/* f4a4bb: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a4bd: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a4bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a4c2: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* f4a4c5: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a4c8: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* f4a4cb: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* f4a4d1: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4a4d4: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* f4a4d7: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a4d9: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a4db: movzx ebx, byte ptr [ebx + edx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + edx)));
/* f4a4df: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4a4e1: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a4e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a4e6: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* f4a4e9: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a4ec: mov byte ptr [edi + ebx], cl */
  W8((uint32_t)(edi + ebx), (ecx & 0xffu));
/* f4a4ef: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4a4f2: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4a4f5: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a4f8: jmp 0xf4a4a8 */
  goto L_f4a4a8;
L_f4a4fa: /* f4a4fa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4a4fb: jmp 0xf4a46f */
  goto L_f4a46f;
L_f4a530: /* f4a530: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a533: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a535: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a53c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a53d: mov esp, ebp */
  esp = ebp;
/* f4a53f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a540: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a500(void) {
  LOAD_REGS();
L_f4a500: /* f4a500: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f4a503: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4a508: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* f4a50b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4a50c: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* f4a50f: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a514u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4a514(); return;
}

void f_f4a514(void) {
  LOAD_REGS();
L_f4a514: /* f4a514: push 0xf55954 */
  { uint32_t v = 0xf55954u; esp -= 4; W32(esp, v); }
/* f4a519: push 0xf5b5c4 */
  { uint32_t v = 0xf5b5c4u; esp -= 4; W32(esp, v); }
/* f4a51e: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4a524u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4a524: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a52b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a530u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
/* f4a530: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a533: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a535: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a53c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a53d: mov esp, ebp */
  esp = ebp;
/* f4a53f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a540: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a5c0(void) {
  LOAD_REGS();
L_f4a5c0: /* f4a5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4a5c1: mov ebp, esp */
  ebp = esp;
/* f4a5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4a5c5: push 0xf51050 */
  { uint32_t v = 0xf51050u; esp -= 4; W32(esp, v); }
/* f4a5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4a5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4a5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4a5d8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4a5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4a5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4a5dd: mov esi, ecx */
  esi = ecx;
/* f4a5df: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4a5e5: mov cl, byte ptr [eax + 0x7c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x7cu))) & 0xffu);
/* f4a5e8: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* f4a5ea: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4a5ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4a5ed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4a5f0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4a5f7: jne 0xf4a606 */
  if (!zf) goto L_f4a606;
L_f4a5f9: /* f4a5f9: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a5ff: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* f4a602: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f4a604: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xf4a606u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4a606: /* f4a606: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4a60c: test byte ptr [eax + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4a60f: jne 0xf4a61f */
  if (!zf) goto L_f4a61f;
L_f4a611: /* f4a611: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a617: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* f4a61a: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* f4a61d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xf4a61fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4a61f: /* f4a61f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4a625: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* f4a62b: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4a62e: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4a634: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* f4a63a: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4a640: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* f4a643: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4a646: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4a649: mov eax, dword ptr [esi + 0x11c] */
  eax = R32((uint32_t)(esi + 0x11cu));
/* f4a64f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4a651: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* f4a654: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f4a657: jne 0xf4a753 */
  if (!zf) goto L_f4a753;
L_f4a65d: /* f4a65d: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* f4a663: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* f4a666: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* f4a669: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4a66f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4a670: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* f4a673: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4a676: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4a678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4a678: mov ebx, dword ptr [esi + 0xc8] */
  ebx = R32((uint32_t)(esi + 0xc8u));
/* f4a67e: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* f4a684: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a687: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f4a689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4a68a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f4a68d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4a68fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4a68f: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* f4a695: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f4a697: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a69a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* f4a69d: xor edx, edx */
  edx = 0;
L_f4a69f: /* f4a69f: cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a6a2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4a6a5: jge 0xf4a753 */
  if ((sf == of)) goto L_f4a753;
L_f4a6ab: /* f4a6ab: movzx ecx, byte ptr [esi + 0x3b] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* f4a6af: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4a6b2: mov edi, edx */
  edi = edx;
/* f4a6b4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* f4a6b6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a6b8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4a6bb: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f4a6be: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a6c0: and eax, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* f4a6c6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* f4a6c8: add eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a6cb: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f4a6ce: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4a6d0: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* f4a6d3: xor ecx, ecx */
  ecx = 0;
L_f4a6d5: /* f4a6d5: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a6d8: jge 0xf4a71d */
  if ((sf == of)) goto L_f4a71d;
L_f4a6da: /* f4a6da: movzx edx, byte ptr [ecx + edi] */
  edx = (uint32_t)(R8((uint32_t)(ecx + edi)));
/* f4a6de: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a6e0: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a6e2: and edx, dword ptr [esi + 0xc8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc8u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a6e8: mov dl, byte ptr [edx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* f4a6eb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a6ee: mov byte ptr [ecx + ebx], dl */
  W8((uint32_t)(ecx + ebx), (edx & 0xffu));
/* f4a6f1: movzx edi, byte ptr [ecx + edi + 1] */
  edi = (uint32_t)(R8((uint32_t)(ecx + edi + 0x1u)));
/* f4a6f6: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a6f9: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* f4a6fc: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4a6fe: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4a700: and edi, dword ptr [esi + 0xc8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc8u)));
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* f4a706: mov bl, byte ptr [edi + eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* f4a709: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4a70c: mov byte ptr [edx + edi], bl */
  W8((uint32_t)(edx + edi), (ebx & 0xffu));
/* f4a70f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4a712: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4a715: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* f4a718: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4a71b: jmp 0xf4a6d5 */
  goto L_f4a6d5;
L_f4a71d: /* f4a71d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4a71e: jmp 0xf4a69f */
  goto L_f4a69f;
L_f4a753: /* f4a753: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a756: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a757: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a758: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a75f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a760: mov esp, ebp */
  esp = ebp;
/* f4a762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a763: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a723(void) {
  LOAD_REGS();
L_f4a723: /* f4a723: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f4a726: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4a72b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f4a72e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4a72f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f4a732: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a737u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4a737(); return;
}

void f_f4a737(void) {
  LOAD_REGS();
L_f4a737: /* f4a737: push 0xf55990 */
  { uint32_t v = 0xf55990u; esp -= 4; W32(esp, v); }
/* f4a73c: push 0xf5b5cc */
  { uint32_t v = 0xf5b5ccu; esp -= 4; W32(esp, v); }
/* f4a741: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4a747u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4a747: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4a74a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a74c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4a74e: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4a753u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
/* f4a753: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4a756: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a757: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a758: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4a75f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4a760: mov esp, ebp */
  esp = ebp;
/* f4a762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a763: ret  */
  esp += 4; SPILL(); return;
}

void f_f4a7e0(void) {
  LOAD_REGS();
L_f4a7e0: /* f4a7e0: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* f4a7e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4a7e7: xor edi, edi */
  edi = 0;
/* f4a7e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4a7eb: jle 0xf4a85d */
  if ((zf || sf != of)) goto L_f4a85d;
L_f4a7ed: /* f4a7ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4a7ee: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f4a7f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4a7f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4a7f4: lea edx, [ecx + 0xf3] */
  edx = (uint32_t)(ecx + 0xf3u);
/* f4a7fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f4a800: /* f4a800: movzx eax, byte ptr [edx - 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4a804: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4a806: mov esi, eax */
  esi = eax;
/* f4a808: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4a80c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f4a80e: jns 0xf4a812 */
  if (!sf) goto L_f4a812;
L_f4a810: /* f4a810: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_f4a812: /* f4a812: mov esi, eax */
  esi = eax;
/* f4a814: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f4a817: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4a819: mov ebp, eax */
  ebp = eax;
/* f4a81b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4a81f: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f4a821: jns 0xf4a825 */
  if (!sf) goto L_f4a825;
L_f4a823: /* f4a823: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_f4a825: /* f4a825: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a827: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a829: jl 0xf4a84c */
  if ((sf != of)) goto L_f4a84c;
L_f4a82b: /* f4a82b: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* f4a831: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f4a832: mov dword ptr [ecx + 0xec], eax */
  W32((uint32_t)(ecx + 0xecu), eax);
/* f4a838: mov esi, dword ptr [ecx + eax*8 + 0xf0] */
  esi = R32((uint32_t)(ecx + eax*8 + 0xf0u));
/* f4a83f: mov dword ptr [edx - 3], esi */
  W32((uint32_t)(edx + 0xfffffffdu), esi);
/* f4a842: mov eax, dword ptr [ecx + eax*8 + 0xf4] */
  eax = R32((uint32_t)(ecx + eax*8 + 0xf4u));
/* f4a849: mov dword ptr [edx + 1], eax */
  W32((uint32_t)(edx + 0x1u), eax);
L_f4a84c: /* f4a84c: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* f4a852: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4a853: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a856: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a858: jl 0xf4a800 */
  if ((sf != of)) goto L_f4a800;
L_f4a85a: /* f4a85a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4a85b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4a85c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f4a85d: /* f4a85d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4a85e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4a8a0(void) {
  LOAD_REGS();
L_f4a8a0: /* f4a8a0: mov eax, ecx */
  eax = ecx;
/* f4a8a2: mov edx, dword ptr [eax + 0xcc] */
  edx = R32((uint32_t)(eax + 0xccu));
/* f4a8a8: and edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* f4a8ac: mov cl, byte ptr [eax + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3bu))) & 0xffu);
/* f4a8af: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f4a8b1: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* f4a8b7: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* f4a8bd: and ecx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f4a8c1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4a8c3: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4a8c6: mov al, byte ptr [esp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* f4a8ca: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f4a8cd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4a8e0(void) {
  LOAD_REGS();
L_f4a8e0: /* f4a8e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4a8e3: xor ecx, ecx */
  ecx = 0;
/* f4a8e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4a8e6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4a8e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4a8e8: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* f4a8ec: xor ebp, ebp */
  ebp = 0;
/* f4a8ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4a8ef: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* f4a8f3: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* f4a8f7: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* f4a8fb: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* f4a8ff: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* f4a903: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* f4a907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* f4a90b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* f4a90f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* f4a913: xor ebx, ebx */
  ebx = 0;
L_f4a915: /* f4a915: mov eax, ebx */
  eax = ebx;
/* f4a917: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a918: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a91b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a91d: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a920: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a925: jle 0xf4a92c */
  if ((zf || sf != of)) goto L_f4a92c;
L_f4a927: /* f4a927: mov eax, 0xff */
  eax = 0xffu;
L_f4a92c: /* f4a92c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a92f: mov byte ptr [ecx + edx + 2], al */
  W8((uint32_t)(ecx + edx + 0x2u), (eax & 0xffu));
/* f4a933: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f4a937: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a938: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a93b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a93d: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a940: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a945: jle 0xf4a94c */
  if ((zf || sf != of)) goto L_f4a94c;
L_f4a947: /* f4a947: mov eax, 0xff */
  eax = 0xffu;
L_f4a94c: /* f4a94c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a94f: mov byte ptr [ecx + edx + 1], al */
  W8((uint32_t)(ecx + edx + 0x1u), (eax & 0xffu));
/* f4a953: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4a957: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a958: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a95b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a95d: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a960: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a965: jle 0xf4a96c */
  if ((zf || sf != of)) goto L_f4a96c;
L_f4a967: /* f4a967: mov eax, 0xff */
  eax = 0xffu;
L_f4a96c: /* f4a96c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a96f: mov byte ptr [ecx + edx], al */
  W8((uint32_t)(ecx + edx), (eax & 0xffu));
/* f4a972: mov eax, ebp */
  eax = ebp;
/* f4a974: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a975: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a978: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a97a: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a97d: add eax, 0x3b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a980: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a985: jle 0xf4a98c */
  if ((zf || sf != of)) goto L_f4a98c;
L_f4a987: /* f4a987: mov eax, 0xff */
  eax = 0xffu;
L_f4a98c: /* f4a98c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a98f: mov byte ptr [ecx + edx + 0x102], al */
  W8((uint32_t)(ecx + edx + 0x102u), (eax & 0xffu));
/* f4a996: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4a99a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a99b: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a99e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a9a0: mov edi, eax */
  edi = eax;
/* f4a9a2: sar edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* f4a9a5: lea eax, [edi + 0x43] */
  eax = (uint32_t)(edi + 0x43u);
/* f4a9a8: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a9ad: jle 0xf4a9b4 */
  if ((zf || sf != of)) goto L_f4a9b4;
L_f4a9af: /* f4a9af: mov eax, 0xff */
  eax = 0xffu;
L_f4a9b4: /* f4a9b4: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a9b7: mov byte ptr [ecx + edx + 0x101], al */
  W8((uint32_t)(ecx + edx + 0x101u), (eax & 0xffu));
/* f4a9be: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4a9c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a9c3: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a9c6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a9c8: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a9cb: add eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a9ce: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a9d3: jle 0xf4a9da */
  if ((zf || sf != of)) goto L_f4a9da;
L_f4a9d5: /* f4a9d5: mov eax, 0xff */
  eax = 0xffu;
L_f4a9da: /* f4a9da: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4a9dd: mov byte ptr [ecx + edx + 0x100], al */
  W8((uint32_t)(ecx + edx + 0x100u), (eax & 0xffu));
/* f4a9e4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4a9e8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4a9e9: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4a9ec: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a9ee: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4a9f1: add eax, 0x72 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x72u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4a9f4: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4a9f9: jle 0xf4aa00 */
  if ((zf || sf != of)) goto L_f4aa00;
L_f4a9fb: /* f4a9fb: mov eax, 0xff */
  eax = 0xffu;
L_f4aa00: /* f4aa00: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aa03: mov byte ptr [ecx + edx + 0x202], al */
  W8((uint32_t)(ecx + edx + 0x202u), (eax & 0xffu));
/* f4aa0a: lea eax, [edi + 0x7f] */
  eax = (uint32_t)(edi + 0x7fu);
/* f4aa0d: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4aa12: jle 0xf4aa19 */
  if ((zf || sf != of)) goto L_f4aa19;
L_f4aa14: /* f4aa14: mov eax, 0xff */
  eax = 0xffu;
L_f4aa19: /* f4aa19: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aa1c: mov byte ptr [ecx + edx + 0x201], al */
  W8((uint32_t)(ecx + edx + 0x201u), (eax & 0xffu));
/* f4aa23: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f4aa27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4aa28: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4aa2b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa2d: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4aa30: add eax, 0xc5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa35: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4aa3a: jle 0xf4aa41 */
  if ((zf || sf != of)) goto L_f4aa41;
L_f4aa3c: /* f4aa3c: mov eax, 0xff */
  eax = 0xffu;
L_f4aa41: /* f4aa41: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aa44: mov byte ptr [ecx + edx + 0x200], al */
  W8((uint32_t)(ecx + edx + 0x200u), (eax & 0xffu));
/* f4aa4b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4aa4f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4aa50: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4aa53: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa55: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4aa58: add eax, 0xb2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa5d: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4aa62: jle 0xf4aa69 */
  if ((zf || sf != of)) goto L_f4aa69;
L_f4aa64: /* f4aa64: mov eax, 0xff */
  eax = 0xffu;
L_f4aa69: /* f4aa69: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aa6c: mov byte ptr [ecx + edx + 0x302], al */
  W8((uint32_t)(ecx + edx + 0x302u), (eax & 0xffu));
/* f4aa73: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4aa77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4aa78: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4aa7b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa7d: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4aa80: add eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aa85: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4aa8a: jle 0xf4aa91 */
  if ((zf || sf != of)) goto L_f4aa91;
L_f4aa8c: /* f4aa8c: mov eax, 0xff */
  eax = 0xffu;
L_f4aa91: /* f4aa91: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aa94: mov byte ptr [ecx + edx + 0x301], al */
  W8((uint32_t)(ecx + edx + 0x301u), (eax & 0xffu));
/* f4aa9b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f4aa9f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4aaa0: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4aaa3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aaa5: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4aaa8: add eax, 0xe6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aaad: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4aab2: jle 0xf4aab9 */
  if ((zf || sf != of)) goto L_f4aab9;
L_f4aab4: /* f4aab4: mov eax, 0xff */
  eax = 0xffu;
L_f4aab9: /* f4aab9: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f4aabc: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f4aac0: mov byte ptr [ecx + edx + 0x300], al */
  W8((uint32_t)(ecx + edx + 0x300u), (eax & 0xffu));
/* f4aac7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4aacb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4aacf: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4aad2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f4aad6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4aada: add edi, 0x43 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4aadd: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4aae0: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* f4aae4: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* f4aae8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f4aaec: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4aaf0: add edi, 0x61 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4aaf3: add eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4aaf6: add edx, 0x4e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4aaf9: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* f4aafd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* f4ab01: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f4ab05: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4ab09: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f4ab0d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4ab11: add ebx, 0x3b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3bu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4ab14: add edi, 0x21 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4ab17: add eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ab1a: add edx, 0x1a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4ab1d: add ebp, 0x37 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4ab20: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4ab23: cmp ebx, 0xec0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xec0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ab29: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f4ab2d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f4ab31: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4ab35: jl 0xf4a915 */
  if ((sf != of)) goto L_f4a915;
L_f4ab3b: /* f4ab3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ab3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ab3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ab3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ab3f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ab42: ret  */
  esp += 4; SPILL(); return;
}

void f_f4abf0(void) {
  LOAD_REGS();
L_f4abf0: /* f4abf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4abf1: mov ebp, esp */
  ebp = esp;
/* f4abf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4abf5: push 0xf51069 */
  { uint32_t v = 0xf51069u; esp -= 4; W32(esp, v); }
/* f4abfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4ac00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ac01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4ac08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4ac0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ac0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ac0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ac0e: mov esi, ecx */
  esi = ecx;
/* f4ac10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4ac13: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* f4ac16: call dword ptr [0xf60474] */
  esp -= 4; W32(esp, 0xf4ac1cu); SPILL(); f_6c7e19(); if (g_unwind) return; /* Engine!??0UTexture@@QAE@XZ */ RELOAD();
/* f4ac1c: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* f4ac1f: xor ebx, ebx */
  ebx = 0;
/* f4ac21: or eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f4ac24: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4ac27: mov dword ptr [esi], 0xf55288 */
  W32((uint32_t)(esi), 0xf55288u);
/* f4ac2d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f4ac31: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* f4ac34: call 0xf4122b */
  esp -= 4; W32(esp, 0xf4ac39u); SPILL(); f_f4122b(); if (g_unwind) return; RELOAD();
/* f4ac39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ac3c: mov byte ptr [esi + 0xdc], bl */
  W8((uint32_t)(esi + 0xdcu), (ebx & 0xffu));
/* f4ac42: mov byte ptr [esi + 0xdd], bl */
  W8((uint32_t)(esi + 0xddu), (ebx & 0xffu));
/* f4ac48: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* f4ac4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ac4f: mov eax, esi */
  eax = esi;
/* f4ac51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ac52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ac59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ac5a: mov esp, ebp */
  esp = ebp;
/* f4ac5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ac5d: ret  */
  esp += 4; SPILL(); return;
}

void f_f4ac5e(void) {
  LOAD_REGS();
L_f4ac5e: /* f4ac5e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4ac61: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4ac66: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4ac6a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4ac6d: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ac72u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4ac72(); return;
}

void f_f4ac72(void) {
  LOAD_REGS();
L_f4ac72: /* f4ac72: push 0xf559d0 */
  { uint32_t v = 0xf559d0u; esp -= 4; W32(esp, v); }
/* f4ac77: push 0xf5b5ec */
  { uint32_t v = 0xf5b5ecu; esp -= 4; W32(esp, v); }
/* f4ac7c: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ac82u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ac82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ac85: xor ebx, ebx */
  ebx = 0;
/* f4ac87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ac88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ac89: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ac8eu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ac8e: guest_badaddr(0xf4ac8e); return;
}

void f_f4acc0(void) {
  LOAD_REGS();
L_f4acc0: /* f4acc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4acc1: mov ebp, esp */
  ebp = esp;
/* f4acc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4acc5: push 0xf51080 */
  { uint32_t v = 0xf51080u; esp -= 4; W32(esp, v); }
/* f4acca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4acd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4acd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4acd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4acdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4acdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4acdd: mov esi, ecx */
  esi = ecx;
/* f4acdf: mov al, byte ptr [esi + 0x9d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9du))) & 0xffu);
/* f4ace5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4ace7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ace8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4aceb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4acf2: jne 0xf4ad54 */
  if (!zf) goto L_f4ad54;
L_f4acf4: /* f4acf4: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4acf9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4acfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4acfd: je 0xf4ad65 */
  if (zf) goto L_f4ad65;
L_f4acff: /* f4acff: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* f4ad02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ad04: je 0xf4ad65 */
  if (zf) goto L_f4ad65;
L_f4ad06: /* f4ad06: mov dword ptr [eax + 0x4c], 0 */
  W32((uint32_t)(eax + 0x4cu), 0x0u);
/* f4ad0d: mov al, byte ptr [esi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f4ad13: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4ad15: jae 0xf4ad19 */
  if (!cf) goto L_f4ad19;
L_f4ad17: /* f4ad17: mov al, 0x30 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
L_f4ad19: /* f4ad19: mov byte ptr [esi + 0x9c], al */
  W8((uint32_t)(esi + 0x9cu), (eax & 0xffu));
/* f4ad1f: nop  */
L_f4ad20: /* f4ad20: mov al, byte ptr [esi + 0x9d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9du))) & 0xffu);
/* f4ad26: cmp al, byte ptr [esi + 0x9c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x9cu)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4ad2c: jae 0xf4ad42 */
  if (!cf) goto L_f4ad42;
L_f4ad2e: /* f4ad2e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f4ad30: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4ad32: mov ecx, esi */
  ecx = esi;
/* f4ad34: mov byte ptr [esi + 0x9d], al */
  W8((uint32_t)(esi + 0x9du), (eax & 0xffu));
/* f4ad3a: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xf4ad40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4ad40: jmp 0xf4ad20 */
  goto L_f4ad20;
L_f4ad42: /* f4ad42: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4ad47: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4ad49: mov dword ptr [ecx + 0x4c], 1 */
  W32((uint32_t)(ecx + 0x4cu), 0x1u);
/* f4ad50: and dword ptr [esi + 0x7c], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x7cu))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x7cu), r);
  }
L_f4ad54: /* f4ad54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ad57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ad5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ad5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ad60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ad61: mov esp, ebp */
  esp = ebp;
/* f4ad63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ad64: ret  */
  esp += 4; SPILL(); return;
L_f4ad65: /* f4ad65: mov ecx, esi */
  ecx = esi;
/* f4ad67: call dword ptr [0xf60478] */
  esp -= 4; W32(esp, 0xf4ad6du); SPILL(); f_6c49df(); if (g_unwind) return; /* Engine!?Prime@UTexture@@UAEXXZ */ RELOAD();
/* f4ad6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ad70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ad71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ad72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ad79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ad7a: mov esp, ebp */
  esp = ebp;
/* f4ad7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ad7d: ret  */
  esp += 4; SPILL(); return;
}

void f_f4ad7e(void) {
  LOAD_REGS();
L_f4ad7e: /* f4ad7e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4ad81: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4ad86: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4ad89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ad8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4ad8d: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ad92u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4ad92(); return;
}

void f_f4ad92(void) {
  LOAD_REGS();
L_f4ad92: /* f4ad92: push 0xf55a20 */
  { uint32_t v = 0xf55a20u; esp -= 4; W32(esp, v); }
/* f4ad97: push 0xf5b70c */
  { uint32_t v = 0xf5b70cu; esp -= 4; W32(esp, v); }
/* f4ad9c: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ada2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ada2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ada5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ada7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ada9: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4adaeu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4adae: guest_badaddr(0xf4adae); return;
}

void f_f4adf0(void) {
  LOAD_REGS();
L_f4adf0: /* f4adf0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* f4adf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4adf5: mov esi, ecx */
  esi = ecx;
/* f4adf7: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4adfcu); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4adfc: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4adff: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* f4ae03: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* f4ae05: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4ae0b: mov esi, dword ptr [ecx + 0x1c] */
  esi = R32((uint32_t)(ecx + 0x1cu));
/* f4ae0e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4ae12: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4ae14: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* f4ae17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ae18: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4ae30(void) {
  LOAD_REGS();
L_f4ae30: /* f4ae30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4ae31: mov ebp, esp */
  ebp = esp;
/* f4ae33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4ae35: push 0xf51090 */
  { uint32_t v = 0xf51090u; esp -= 4; W32(esp, v); }
/* f4ae3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4ae40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ae41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4ae48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4ae4b: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4ae50: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4ae52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ae54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ae55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ae56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ae57: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4ae5a: mov esi, ecx */
  esi = ecx;
/* f4ae5c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4ae63: je 0xf4aed5 */
  if (zf) goto L_f4aed5;
L_f4ae65: /* f4ae65: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* f4ae68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ae6a: jne 0xf4aed5 */
  if (!zf) goto L_f4aed5;
L_f4ae6c: /* f4ae6c: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* f4ae6f: mov eax, 8 */
  eax = 0x8u;
/* f4ae74: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ae76: jl 0xf4aed5 */
  if ((sf != of)) goto L_f4aed5;
L_f4ae78: /* f4ae78: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ae7b: jl 0xf4aed5 */
  if ((sf != of)) goto L_f4aed5;
L_f4ae7d: /* f4ae7d: mov ecx, esi */
  ecx = esi;
/* f4ae7f: call 0xf411ea */
  esp -= 4; W32(esp, 0xf4ae84u); SPILL(); f_f411ea(); if (g_unwind) return; RELOAD();
/* f4ae84: test byte ptr [esi + 0xe4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xe4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4ae8b: je 0xf4aead */
  if (zf) goto L_f4aead;
L_f4ae8d: /* f4ae8d: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* f4ae90: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* f4ae93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4ae94: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4ae9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4ae9b: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4ae9e: lea eax, [esi + 0x10c] */
  eax = (uint32_t)(esi + 0x10cu);
/* f4aea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4aea5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4aea6: call 0xf4135c */
  esp -= 4; W32(esp, 0xf4aeabu); SPILL(); f_f4135c(); if (g_unwind) return; RELOAD();
/* f4aeab: jmp 0xf4aecb */
  goto L_f4aecb;
L_f4aead: /* f4aead: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* f4aeb0: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* f4aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4aeb4: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4aeba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4aebb: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4aebe: lea edx, [esi + 0x10c] */
  edx = (uint32_t)(esi + 0x10cu);
/* f4aec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4aec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4aec6: call 0xf41217 */
  esp -= 4; W32(esp, 0xf4aecbu); SPILL(); f_f41217(); if (g_unwind) return; RELOAD();
L_f4aecb: /* f4aecb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4aece: mov ecx, esi */
  ecx = esi;
/* f4aed0: call 0xf4123f */
  esp -= 4; W32(esp, 0xf4aed5u); SPILL(); f_f4123f(); if (g_unwind) return; RELOAD();
L_f4aed5: /* f4aed5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4aed8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4aed9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4aeda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4aee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4aee2: mov esp, ebp */
  esp = ebp;
/* f4aee4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4aee5: ret  */
  esp += 4; SPILL(); return;
}

void f_f4aee6(void) {
  LOAD_REGS();
L_f4aee6: /* f4aee6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4aee9: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4aeee: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4aef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4aef2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4aef5: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4aefau); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4aefa(); return;
}

void f_f4aefa(void) {
  LOAD_REGS();
L_f4aefa: /* f4aefa: push 0xf55a58 */
  { uint32_t v = 0xf55a58u; esp -= 4; W32(esp, v); }
/* f4aeff: push 0xf5b978 */
  { uint32_t v = 0xf5b978u; esp -= 4; W32(esp, v); }
/* f4af04: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4af0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4af0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4af0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4af0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4af11: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4af16u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4af16: guest_badaddr(0xf4af16); return;
}

void f_f4af60(void) {
  LOAD_REGS();
L_f4af60: /* f4af60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4af61: mov ebp, esp */
  ebp = esp;
/* f4af63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4af65: push 0xf510a0 */
  { uint32_t v = 0xf510a0u; esp -= 4; W32(esp, v); }
/* f4af6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4af70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4af71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4af78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4af7b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f4af7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4af7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4af80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4af81: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4af87: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4af8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4af8b: mov esi, ecx */
  esi = ecx;
/* f4af8d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4af94: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4af96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4af96: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f4af99: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4af9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4af9d: mov ebx, eax */
  ebx = eax;
/* f4af9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4afa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4afa1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f4afa4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4afa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4afa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4afa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4afaa: mov ecx, esi */
  ecx = esi;
/* f4afac: call 0xf41168 */
  esp -= 4; W32(esp, 0xf4afb1u); SPILL(); f_f41168(); if (g_unwind) return; RELOAD();
/* f4afb1: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f4afb4: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4afb9u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4afb9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f4afbc: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4afbf: mov edi, eax */
  edi = eax;
/* f4afc1: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* f4afc7: mov ebx, edi */
  ebx = edi;
/* f4afc9: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* f4afcb: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* f4afcd: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4afd2u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4afd2: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f4afd5: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* f4afdb: fadd dword ptr [0xf55854] */
  ST0 = ST0 + (F32((uint32_t)(0xf55854u)));
/* f4afe1: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f4afe3: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4afe5: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4afeb: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* f4afee: mov byte ptr [ebx + ecx], 0xff */
  W8((uint32_t)(ebx + ecx), 0xffu);
/* f4aff2: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* f4aff8: mov ebx, edi */
  ebx = edi;
/* f4affa: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* f4affc: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4afff: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* f4b001: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b006u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b006: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f4b009: mov edx, dword ptr [esi + 0xc8] */
  edx = R32((uint32_t)(esi + 0xc8u));
/* f4b00f: fsub dword ptr [0xf55854] */
  ST0 = ST0 - (F32((uint32_t)(0xf55854u)));
/* f4b015: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f4b017: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* f4b01d: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4b01f: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* f4b022: mov byte ptr [ebx + eax], 0xff */
  W8((uint32_t)(ebx + eax), 0xffu);
/* f4b026: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* f4b02c: mov cl, byte ptr [esi + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4b02f: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* f4b031: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* f4b033: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b038u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b038: mov edx, dword ptr [esi + 0xc8] */
  edx = R32((uint32_t)(esi + 0xc8u));
/* f4b03e: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4b044: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f4b046: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4b049: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b04c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4b04e: mov byte ptr [edi + edx], 0xff */
  W8((uint32_t)(edi + edx), 0xffu);
/* f4b052: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b054: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b05b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b05c: mov esp, ebp */
  esp = ebp;
/* f4b05e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b05f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4b062(void) {
  LOAD_REGS();
L_f4b062: /* f4b062: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b065: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b06a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4b06d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b06e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4b071: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b076u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b076(); return;
}

void f_f4b076(void) {
  LOAD_REGS();
L_f4b076: /* f4b076: push 0xf55aa4 */
  { uint32_t v = 0xf55aa4u; esp -= 4; W32(esp, v); }
/* f4b07b: push 0xf5b980 */
  { uint32_t v = 0xf5b980u; esp -= 4; W32(esp, v); }
/* f4b080: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b086u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b086: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b089: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b08b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b08d: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b092u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b092: guest_badaddr(0xf4b092); return;
}
