#include "recomp.h"
#include "rec_mod.h"

void f_ee9b88(void) {
  LOAD_REGS();
  goto L_ee9b88;
L_ee9ad5: /* ee9ad5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* ee9ad8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9ada: je 0xee9aee */
  if (zf) goto L_ee9aee;
L_ee9adc: /* ee9adc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ee9add: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee9adf: jle 0xee9aee */
  if ((zf || sf != of)) goto L_ee9aee;
L_ee9ae1: /* ee9ae1: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* ee9ae4: cmp word ptr [ecx], 0x2d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* ee9ae8: je 0xee9d1c */
  if (zf) goto L_ee9d1c;
L_ee9aee: /* ee9aee: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee9af1: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee9af7u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee9af7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9af9: push 0xf05c4c */
  { uint32_t v = 0xf05c4cu; esp -= 4; W32(esp, v); }
/* ee9afe: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9b01: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee9b05: call dword ptr [0xf0dc1c] */
  esp -= 4; W32(esp, 0xee9b0bu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* ee9b0b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9b0e: je 0xee9b3a */
  if (zf) goto L_ee9b3a;
L_ee9b10: /* ee9b10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9b12: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* ee9b15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9b16: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9b19: call dword ptr [0xf0dc0c] */
  esp -= 4; W32(esp, 0xee9b1fu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* ee9b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9b20: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee9b23: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee9b27: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee9b2du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee9b2d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ee9b30: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee9b34: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9b3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee9b3a: /* ee9b3a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9b3d: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9b43u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9b43: mov ecx, dword ptr [0xf0d998] */
  ecx = R32((uint32_t)(0xf0d998u));
/* ee9b49: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee9b4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9b4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9b4f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9b51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9b52: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ee9b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9b56: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xee9b59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9b59: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* ee9b5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9b5e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee9b62: jne 0xee9b81 */
  if (!zf) goto L_ee9b81;
L_ee9b64: /* ee9b64: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9b67: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9b6du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9b6d: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee9b73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9b76: push 0xf05c50 */
  { uint32_t v = 0xf05c50u; esp -= 4; W32(esp, v); }
/* ee9b7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9b7c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9b7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9b7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee9b81: /* ee9b81: xor eax, eax */
  eax = 0;
/* ee9b83: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee9b86: jmp 0xee9b90 */
  goto L_ee9b90;
L_ee9b88: /* ee9b88: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ee9b8f: nop  */
L_ee9b90: /* ee9b90: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* ee9b93: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee9b95: jge 0xee9cf3 */
  if ((sf == of)) goto L_ee9cf3;
L_ee9b9b: /* ee9b9b: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* ee9b9e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* ee9ba1: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* ee9ba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9ba5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* ee9ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9ba9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee9bac: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee9bb2u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee9bb2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9bb5: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee9bb9: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9bbfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9bbf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9bc2: mov esi, eax */
  esi = eax;
/* ee9bc4: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9bcau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9bca: mov ecx, dword ptr [0xf0d998] */
  ecx = R32((uint32_t)(0xf0d998u));
/* ee9bd0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee9bd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9bd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9bd6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9bd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9bda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9bdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9bde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9bdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9be0: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xee9be3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9be3: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee9be6: je 0xee9c44 */
  if (zf) goto L_ee9c44;
L_ee9be8: /* ee9be8: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee9beb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9bee: je 0xee9c2a */
  if (zf) goto L_ee9c2a;
L_ee9bf0: /* ee9bf0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee9bf1: je 0xee9c09 */
  if (zf) goto L_ee9c09;
L_ee9bf3: /* ee9bf3: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9bf9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9bf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9bfa: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee9bff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee9c01: push 0xf05cf4 */
  { uint32_t v = 0xf05cf4u; esp -= 4; W32(esp, v); }
/* ee9c06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9c07: jmp 0xee9c3f */
  goto L_ee9c3f;
L_ee9c09: /* ee9c09: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9c0fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9c0f: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* ee9c15: push 0xf05cac */
  { uint32_t v = 0xf05cacu; esp -= 4; W32(esp, v); }
/* ee9c1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c1b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee9c1d: push 0xf05cb8 */
  { uint32_t v = 0xf05cb8u; esp -= 4; W32(esp, v); }
/* ee9c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9c25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9c25: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9c28: jmp 0xee9c44 */
  goto L_ee9c44;
L_ee9c2a: /* ee9c2a: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9c30u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9c30: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee9c36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9c38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c39: push 0xf05c78 */
  { uint32_t v = 0xf05c78u; esp -= 4; W32(esp, v); }
/* ee9c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_ee9c3f: /* ee9c3f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9c41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9c41: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee9c44: /* ee9c44: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9c47: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9c4du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9c4d: mov ecx, dword ptr [0xf0d998] */
  ecx = R32((uint32_t)(0xf0d998u));
/* ee9c53: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee9c55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c58: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee9c5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9c5b: mov ebx, eax */
  ebx = eax;
/* ee9c5d: push 0xf05d30 */
  { uint32_t v = 0xf05d30u; esp -= 4; W32(esp, v); }
/* ee9c62: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* ee9c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c66: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9c69: call dword ptr [0xf0dc00] */
  esp -= 4; W32(esp, 0xee9c6fu); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* ee9c6f: mov ecx, eax */
  ecx = eax;
/* ee9c71: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ee9c75: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9c7bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9c7b: mov ecx, dword ptr [0xf0d998] */
  ecx = R32((uint32_t)(0xf0d998u));
/* ee9c81: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee9c83: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9c86: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee9c89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9c89: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* ee9c8c: mov esi, eax */
  esi = eax;
/* ee9c8e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee9c92: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9c98u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9c98: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9c9b: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9ca1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9ca1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9ca4: mov edi, eax */
  edi = eax;
/* ee9ca6: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9cacu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9cac: mov ecx, eax */
  ecx = eax;
/* ee9cae: mov eax, esi */
  eax = esi;
/* ee9cb0: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* ee9cb3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ee9cb4: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xee9cb4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ee9cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9cb7: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee9cbc: push 0xf05d3c */
  { uint32_t v = 0xf05d3cu; esp -= 4; W32(esp, v); }
/* ee9cc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee9cc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9cc3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee9cc5: push 0xf05d48 */
  { uint32_t v = 0xf05d48u; esp -= 4; W32(esp, v); }
/* ee9cca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9ccb: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee9cd1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee9cd1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9cd4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee9cd7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee9cdb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9ce1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9ce1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee9ce4: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* ee9cea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9ceb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee9cee: jmp 0xee9b90 */
  goto L_ee9b90;
L_ee9cf3: /* ee9cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9cf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9cf6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee9cf9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* ee9cfd: call 0xed1636 */
  esp -= 4; W32(esp, 0xee9d02u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee9d02: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee9d05: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee9d09: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee9d0fu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee9d0f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee9d12: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee9d16: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9d1cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee9d1c: /* ee9d1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9d1e: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* ee9d21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9d22: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ee9d25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9d26: call dword ptr [0xf0d95c] */
  esp -= 4; W32(esp, 0xee9d2cu); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* ee9d2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9d2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9d31: jne 0xee9ad5 */
  if (!zf) goto L_ee9ad5;
L_ee9d37: /* ee9d37: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9d3a: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* ee9d3d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9d43u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9d43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee9d46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee9d47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9d48: xor eax, eax */
  eax = 0;
/* ee9d4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee9d51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee9d52: mov esp, ebp */
  esp = ebp;
/* ee9d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee9d55: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee9d58(void) {
  LOAD_REGS();
L_ee9d58: /* ee9d58: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee9d5b: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee9d60: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee9d63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9d64: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee9d67: call 0xeec520 */
  esp -= 4; W32(esp, 0xee9d6cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee9d6c(); return;
}

void f_ee9d6c(void) {
  LOAD_REGS();
L_ee9d6c: /* ee9d6c: push 0xef7290 */
  { uint32_t v = 0xef7290u; esp -= 4; W32(esp, v); }
/* ee9d71: push 0xf05d84 */
  { uint32_t v = 0xf05d84u; esp -= 4; W32(esp, v); }
/* ee9d76: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee9d7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee9d7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9d7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9d81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9d83: call 0xeec520 */
  esp -= 4; W32(esp, 0xee9d88u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee9d88: guest_badaddr(0xee9d88); return;
}

void f_ee9e60(void) {
  LOAD_REGS();
L_ee9e60: /* ee9e60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee9e62: push 0xeef578 */
  { uint32_t v = 0xeef578u; esp -= 4; W32(esp, v); }
/* ee9e67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee9e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9e6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee9e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9e77: mov esi, ecx */
  esi = ecx;
/* ee9e79: call 0xed15fa */
  esp -= 4; W32(esp, 0xee9e7eu); SPILL(); f_ed15fa(); if (g_unwind) return; RELOAD();
/* ee9e7e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee9e82: mov dword ptr [esi], 0xef4868 */
  W32((uint32_t)(esi), 0xef4868u);
/* ee9e88: mov eax, esi */
  eax = esi;
/* ee9e8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9e8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee9e92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9e95: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9eb0(void) {
  LOAD_REGS();
L_ee9eb0: /* ee9eb0: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ee9eb6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9eb9: je 0xee9ec1 */
  if (zf) goto L_ee9ec1;
L_ee9ebb: /* ee9ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9ebc: call 0xeebbac */
  esp -= 4; W32(esp, 0xee9ec1u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
L_ee9ec1: /* ee9ec1: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9ee0(void) {
  LOAD_REGS();
L_ee9ee0: /* ee9ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee9ee1: mov ebp, esp */
  ebp = esp;
/* ee9ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee9ee5: push 0xeef590 */
  { uint32_t v = 0xeef590u; esp -= 4; W32(esp, v); }
/* ee9eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee9ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee9ef8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee9efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee9efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9efd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee9f00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee9f03: xor ebx, ebx */
  ebx = 0;
/* ee9f05: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee9f08: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee9f0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9f0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee9f0d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee9f10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee9f13: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee9f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9f17: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee9f1c: mov edi, ecx */
  edi = ecx;
/* ee9f1e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee9f21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9f22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee9f25: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee9f28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9f28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee9f2b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee9f2e: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* ee9f31: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee9f34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9f35: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee9f38: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ee9f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9f3c: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee9f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9f42: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee9f45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9f45: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee9f48: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee9f49: mov eax, edx */
  eax = edx;
/* ee9f4b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee9f4e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee9f51: jne 0xee9f68 */
  if (!zf) goto L_ee9f68;
L_ee9f53: /* ee9f53: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee9f56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9f57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee9f58: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee9f5b: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee9f61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9f62: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee9f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee9f68: /* ee9f68: cmp dword ptr [0xf0a330], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0a330u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9f6e: je 0xeea0da */
  if (zf) goto L_eea0da;
L_ee9f74: /* ee9f74: cmp dword ptr [edi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9f7b: jne 0xeea0b3 */
  if (!zf) goto L_eea0b3;
L_ee9f81: /* ee9f81: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* ee9f83: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee9f85: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee9f87: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xee9f8cu); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* ee9f8c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9f8f: mov dword ptr [edi + 0x340], eax */
  W32((uint32_t)(edi + 0x340u), eax);
/* ee9f95: je 0xeea07a */
  if (zf) goto L_eea07a;
L_ee9f9b: /* ee9f9b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee9f9d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee9fa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9fa1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ee9fa3: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee9fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9fa9: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* ee9fb0: call 0xeebc24 */
  esp -= 4; W32(esp, 0xee9fb5u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* ee9fb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9fb7: jne 0xeea073 */
  if (!zf) goto L_eea073;
L_ee9fbd: /* ee9fbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9fbe: mov word ptr [ebp - 0x34], 2 */
  W16((uint32_t)(ebp + 0xffffffccu), 0x2u);
/* ee9fc4: call 0xed15a5 */
  esp -= 4; W32(esp, 0xee9fc9u); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* ee9fc9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee9fcc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9fcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9fd0: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* ee9fd3: call 0xeebbca */
  esp -= 4; W32(esp, 0xee9fd8u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* ee9fd8: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* ee9fde: mov word ptr [ebp - 0x32], ax */
  W16((uint32_t)(ebp + 0xffffffceu), (eax & 0xffffu));
/* ee9fe2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee9fe5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* ee9fe7: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ee9fe9: and eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee9fec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee9fee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee9fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9ff0: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9ff4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9ff5: call 0xed13f2 */
  esp -= 4; W32(esp, 0xee9ffau); SPILL(); f_ed13f2(); if (g_unwind) return; RELOAD();
/* ee9ffa: mov ebx, eax */
  ebx = eax;
/* ee9ffc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9fff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea001: je 0xeea060 */
  if (zf) goto L_eea060;
L_eea003: /* eea003: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* eea009: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* eea00c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea00d: push 0x8004667e */
  { uint32_t v = 0x8004667eu; esp -= 4; W32(esp, v); }
/* eea012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea013: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eea01a: call 0xeebc2a */
  esp -= 4; W32(esp, 0xeea01fu); SPILL(); f_eebc2a(); if (g_unwind) return; RELOAD();
/* eea01f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea021: jne 0xeea04d */
  if (!zf) goto L_eea04d;
L_eea023: /* eea023: mov eax, dword ptr [ebp - 0x32] */
  eax = R32((uint32_t)(ebp + 0xffffffceu));
/* eea026: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eea029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea02a: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* eea02c: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeea031u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eea031: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* eea034: mov dword ptr [edi + 0x344], ecx */
  W32((uint32_t)(edi + 0x344u), ecx);
/* eea03a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea03d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea045: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea046: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea047: mov esp, ebp */
  esp = ebp;
/* eea049: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea04a: ret 8 */
  esp += 12; SPILL(); return;
L_eea04d: /* eea04d: push 0xf0609c */
  { uint32_t v = 0xf0609cu; esp -= 4; W32(esp, v); }
/* eea052: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea053: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea059u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea059: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea05c: xor ebx, ebx */
  ebx = 0;
/* eea05e: jmp 0xeea089 */
  goto L_eea089;
L_eea060: /* eea060: push 0xf060d8 */
  { uint32_t v = 0xf060d8u; esp -= 4; W32(esp, v); }
/* eea065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea066: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea06cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea06c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea06f: xor ebx, ebx */
  ebx = 0;
/* eea071: jmp 0xeea089 */
  goto L_eea089;
L_eea073: /* eea073: push 0xf06104 */
  { uint32_t v = 0xf06104u; esp -= 4; W32(esp, v); }
/* eea078: jmp 0xeea07f */
  goto L_eea07f;
L_eea07a: /* eea07a: push 0xf0613c */
  { uint32_t v = 0xf0613cu; esp -= 4; W32(esp, v); }
L_eea07f: /* eea07f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea080: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea086u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea086: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_eea089: /* eea089: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* eea08f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea090: call 0xeebbac */
  esp -= 4; W32(esp, 0xeea095u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* eea095: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eea098: mov dword ptr [edi + 0x340], ebx */
  W32((uint32_t)(edi + 0x340u), ebx);
/* eea09e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* eea0a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea0a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea0aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea0ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea0ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea0ad: mov esp, ebp */
  esp = ebp;
/* eea0af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea0b0: ret 8 */
  esp += 12; SPILL(); return;
L_eea0b3: /* eea0b3: push 0xf0616c */
  { uint32_t v = 0xf0616cu; esp -= 4; W32(esp, v); }
/* eea0b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea0b9: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea0bfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea0bf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eea0c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea0c5: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* eea0c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea0ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea0d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea0d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea0d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea0d4: mov esp, ebp */
  esp = ebp;
/* eea0d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea0d7: ret 8 */
  esp += 12; SPILL(); return;
L_eea0da: /* eea0da: push 0xf0619c */
  { uint32_t v = 0xf0619cu; esp -= 4; W32(esp, v); }
/* eea0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea0e0: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea0e6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea0e6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eea0e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea0ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea0ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea0f0: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* eea0f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea0f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea0fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea0fb: mov esp, ebp */
  esp = ebp;
/* eea0fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea0fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eea101(void) {
  LOAD_REGS();
L_eea101: /* eea101: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* eea104: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eea109: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* eea10c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea10d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* eea110: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea115u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eea115(); return;
}

void f_eea115(void) {
  LOAD_REGS();
L_eea115: /* eea115: push 0xef72d0 */
  { uint32_t v = 0xef72d0u; esp -= 4; W32(esp, v); }
/* eea11a: push 0xf061d0 */
  { uint32_t v = 0xf061d0u; esp -= 4; W32(esp, v); }
/* eea11f: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeea125u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eea125: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea128: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea12c: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea131u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eea131: guest_badaddr(0xeea131); return;
}

void f_eea1e0(void) {
  LOAD_REGS();
L_eea1e0: /* eea1e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eea1e1: mov ebp, esp */
  ebp = esp;
/* eea1e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eea1e5: push 0xeef5a9 */
  { uint32_t v = 0xeef5a9u; esp -= 4; W32(esp, v); }
/* eea1ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eea1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea1f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eea1f8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eea1fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eea1fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea1fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eea200: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea203: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea207: xor edi, edi */
  edi = 0;
/* eea209: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea20a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea20d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eea210: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* eea213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea214: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea219: mov ebx, ecx */
  ebx = ecx;
/* eea21b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea21e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea21f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* eea222: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea225: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eea228: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeea22eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eea22e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea231: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea234: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea237: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea238: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea23b: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* eea23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea23f: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea245: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eea249: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea24c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eea24f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eea250: mov eax, edx */
  eax = edx;
/* eea252: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eea255: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eea258: jne 0xeea26f */
  if (!zf) goto L_eea26f;
L_eea25a: /* eea25a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea25d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea25e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea25f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea262: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eea268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea269: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeea26fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea26f: /* eea26f: cmp dword ptr [ebx + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea276: je 0xeea31c */
  if (zf) goto L_eea31c;
L_eea27c: /* eea27c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eea27f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea280: mov word ptr [ebp - 0x3c], 2 */
  W16((uint32_t)(ebp + 0xffffffc4u), 0x2u);
/* eea286: call 0xeebbca */
  esp -= 4; W32(esp, 0xeea28bu); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* eea28b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* eea28e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea28f: mov word ptr [ebp - 0x3a], ax */
  W16((uint32_t)(ebp + 0xffffffc6u), (eax & 0xffffu));
/* eea293: call 0xeebc0c */
  esp -= 4; W32(esp, 0xeea298u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* eea298: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* eea29b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* eea29e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea2a0: je 0xeea2a5 */
  if (zf) goto L_eea2a5;
L_eea2a2: /* eea2a2: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_eea2a5: /* eea2a5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eea2a8: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xeea2aeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* eea2ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea2b1: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xeea2b7u); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* eea2b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea2ba: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eea2bc: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* eea2bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea2c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea2c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea2c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea2c4: mov eax, dword ptr [ebx + 0x340] */
  eax = R32((uint32_t)(ebx + 0x340u));
/* eea2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea2cb: call 0xeebc00 */
  esp -= 4; W32(esp, 0xeea2d0u); SPILL(); f_eebc00(); if (g_unwind) return; RELOAD();
/* eea2d0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea2d3: jne 0xeea31c */
  if (!zf) goto L_eea31c;
L_eea2d5: /* eea2d5: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeea2dau); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* eea2da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea2db: call 0xed17b7 */
  esp -= 4; W32(esp, 0xeea2e0u); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* eea2e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea2e4: push 0xf061d8 */
  { uint32_t v = 0xf061d8u; esp -= 4; W32(esp, v); }
/* eea2e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea2ea: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea2f0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea2f0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eea2f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea2f6: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_eea2fc: /* eea2fc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eea2ff: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eea303: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeea309u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eea309: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea30c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea30d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea30e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea315: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea316: mov esp, ebp */
  esp = ebp;
/* eea318: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea319: ret 8 */
  esp += 12; SPILL(); return;
L_eea31c: /* eea31c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eea31f: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* eea325: jmp 0xeea2fc */
  goto L_eea2fc;
}

void f_eea327(void) {
  LOAD_REGS();
L_eea327: /* eea327: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* eea32a: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eea32f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eea332: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea333: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* eea336: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea33bu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eea33b(); return;
}

void f_eea33b(void) {
  LOAD_REGS();
L_eea33b: /* eea33b: push 0xef7308 */
  { uint32_t v = 0xef7308u; esp -= 4; W32(esp, v); }
/* eea340: push 0xf06210 */
  { uint32_t v = 0xf06210u; esp -= 4; W32(esp, v); }
/* eea345: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeea34bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eea34b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea34e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea350: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea352: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea357u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eea357: guest_badaddr(0xeea357); return;
}

void f_eea3c0(void) {
  LOAD_REGS();
L_eea3c0: /* eea3c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eea3c1: mov ebp, esp */
  ebp = esp;
/* eea3c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eea3c5: push 0xeef5c0 */
  { uint32_t v = 0xeef5c0u; esp -= 4; W32(esp, v); }
/* eea3ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eea3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea3d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eea3d8: sub esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eea3de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eea3df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea3e0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eea3e3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea3e6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea3e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea3ea: xor edi, edi */
  edi = 0;
/* eea3ec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea3ed: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea3f0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eea3f3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* eea3f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea3f7: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea3fc: mov ebx, ecx */
  ebx = ecx;
/* eea3fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea401: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea402: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* eea405: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea408u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea408: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea40b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea40e: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* eea411: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea414: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea415: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea418: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* eea41b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea41c: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea422: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea425: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea42b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* eea42d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea430: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea433: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea436: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea437: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea43a: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* eea440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea441: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea447: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea44au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea44a: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eea450: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eea452: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea454: je 0xeea463 */
  if (zf) goto L_eea463;
L_eea456: /* eea456: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eea45b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eea45d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eea45f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea460: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeea463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea463: /* eea463: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea469: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eea46b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea46d: mov edi, eax */
  edi = eax;
/* eea46f: jne 0xeea477 */
  if (!zf) goto L_eea477;
L_eea471: /* eea471: lea edi, [ebp - 0x130] */
  edi = (uint32_t)(ebp + 0xfffffed0u);
L_eea477: /* eea477: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eea47a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eea47b: mov eax, edx */
  eax = edx;
/* eea47d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eea480: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eea483: jne 0xeea49b */
  if (!zf) goto L_eea49b;
L_eea485: /* eea485: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea488: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea48b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea48e: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eea494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea495: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeea49bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea49b: /* eea49b: cmp dword ptr [ebx + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea4a2: je 0xeea50c */
  if (zf) goto L_eea50c;
L_eea4a4: /* eea4a4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* eea4a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea4a8: mov word ptr [ebp - 0x2c], 2 */
  W16((uint32_t)(ebp + 0xffffffd4u), 0x2u);
/* eea4ae: call 0xeebbca */
  esp -= 4; W32(esp, 0xeea4b3u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* eea4b3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* eea4b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea4b7: mov word ptr [ebp - 0x2a], ax */
  W16((uint32_t)(ebp + 0xffffffd6u), (eax & 0xffffu));
/* eea4bb: call 0xeebc0c */
  esp -= 4; W32(esp, 0xeea4c0u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* eea4c0: mov ecx, dword ptr [ebx + 0x340] */
  ecx = R32((uint32_t)(ebx + 0x340u));
/* eea4c6: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eea4c8: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* eea4cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea4cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea4ce: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* eea4d1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eea4d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea4d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea4d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea4d7: call 0xeebc00 */
  esp -= 4; W32(esp, 0xeea4dcu); SPILL(); f_eebc00(); if (g_unwind) return; RELOAD();
/* eea4dc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea4df: jne 0xeea50c */
  if (!zf) goto L_eea50c;
L_eea4e1: /* eea4e1: push 0xf06218 */
  { uint32_t v = 0xf06218u; esp -= 4; W32(esp, v); }
/* eea4e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea4e7: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeea4edu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eea4ed: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eea4f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea4f3: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* eea4f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea4fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea503: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea505: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea506: mov esp, ebp */
  esp = ebp;
/* eea508: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea509: ret 8 */
  esp += 12; SPILL(); return;
L_eea50c: /* eea50c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eea50f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea514: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* eea51a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea521: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea522: mov esp, ebp */
  esp = ebp;
/* eea524: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea525: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eea528(void) {
  LOAD_REGS();
L_eea528: /* eea528: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* eea52b: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eea530: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eea533: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea534: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eea537: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea53cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eea53c(); return;
}

void f_eea53c(void) {
  LOAD_REGS();
L_eea53c: /* eea53c: push 0xef7340 */
  { uint32_t v = 0xef7340u; esp -= 4; W32(esp, v); }
/* eea541: push 0xf0624c */
  { uint32_t v = 0xf0624cu; esp -= 4; W32(esp, v); }
/* eea546: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeea54cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eea54c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea54f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea551: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea553: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea558u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eea558: guest_badaddr(0xeea558); return;
}

void f_eea5d0(void) {
  LOAD_REGS();
L_eea5d0: /* eea5d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eea5d1: mov ebp, esp */
  ebp = esp;
/* eea5d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eea5d5: push 0xeef5d9 */
  { uint32_t v = 0xeef5d9u; esp -= 4; W32(esp, v); }
/* eea5da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eea5e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea5e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eea5e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea5e9: mov eax, 0x1030 */
  eax = 0x1030u;
/* eea5ee: call 0xeec780 */
  esp -= 4; W32(esp, 0xeea5f3u); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* eea5f3: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* eea5f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eea5f9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* eea5ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea600: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eea603: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea606: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea609: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea60a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea60b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea60e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eea611: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* eea614: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea615: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea61a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eea61d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea621: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eea628: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea62bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea62b: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eea631: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eea633: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea635: je 0xeea644 */
  if (zf) goto L_eea644;
L_eea637: /* eea637: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eea63c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eea63e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eea640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea641: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeea644u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea644: /* eea644: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea64a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eea64c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea64e: mov ebx, eax */
  ebx = eax;
/* eea650: jne 0xeea655 */
  if (!zf) goto L_eea655;
L_eea652: /* eea652: lea ebx, [ebp - 0x2c] */
  ebx = (uint32_t)(ebp + 0xffffffd4u);
L_eea655: /* eea655: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eea658: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeea65eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eea65e: mov edx, dword ptr [0xf0dc58] */
  edx = R32((uint32_t)(0xf0dc58u));
/* eea664: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* eea66a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea66d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea670: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea673: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea674: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea677: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* eea67a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea67b: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea681: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eea685: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea688: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eea68e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eea690: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea692: je 0xeea6a1 */
  if (zf) goto L_eea6a1;
L_eea694: /* eea694: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eea699: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eea69b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eea69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea69e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeea6a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea6a1: /* eea6a1: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea6a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eea6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eea6ab: mov edi, eax */
  edi = eax;
/* eea6ad: jne 0xeea6b2 */
  if (!zf) goto L_eea6b2;
L_eea6af: /* eea6af: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
L_eea6b2: /* eea6b2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eea6b5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eea6b6: mov eax, edx */
  eax = edx;
/* eea6b8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eea6bb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eea6be: jne 0xeea6d6 */
  if (!zf) goto L_eea6d6;
L_eea6c0: /* eea6c0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea6c3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea6c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea6c6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea6c9: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eea6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea6d0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeea6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea6d6: /* eea6d6: push 0xf0bc38 */
  { uint32_t v = 0xf0bc38u; esp -= 4; W32(esp, v); }
/* eea6db: mov ecx, edi */
  ecx = edi;
/* eea6dd: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xeea6e3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* eea6e3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eea6e6: mov eax, dword ptr [eax + 0x340] */
  eax = R32((uint32_t)(eax + 0x340u));
/* eea6ec: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea6ef: je 0xeea7ac */
  if (zf) goto L_eea7ac;
L_eea6f5: /* eea6f5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eea6f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea6f9: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* eea6fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea6fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea6ff: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* eea704: lea ecx, [ebp - 0x1040] */
  ecx = (uint32_t)(ebp + 0xffffefc0u);
/* eea70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eea70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea70c: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* eea713: call 0xeebc06 */
  esp -= 4; W32(esp, 0xeea718u); SPILL(); f_eebc06(); if (g_unwind) return; RELOAD();
/* eea718: mov esi, eax */
  esi = eax;
/* eea71a: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea71d: je 0xeea779 */
  if (zf) goto L_eea779;
L_eea71f: /* eea71f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* eea722: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea723: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xeea728u); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* eea728: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* eea72a: mov eax, dword ptr [ebp - 0x3e] */
  eax = R32((uint32_t)(ebp + 0xffffffc2u));
/* eea72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea72e: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeea733u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eea733: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* eea736: lea edx, [ebp - 0x1040] */
  edx = (uint32_t)(ebp + 0xffffefc0u);
/* eea73c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea73e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea73f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* eea742: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xeea748u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* eea748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea74b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea74c: mov ecx, edi */
  ecx = edi;
/* eea74e: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xeea754u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* eea754: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eea757: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_eea759: /* eea759: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eea75c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eea760: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeea766u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eea766: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eea769: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eea76a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eea76b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eea772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eea773: mov esp, ebp */
  esp = ebp;
/* eea775: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eea776: ret 8 */
  esp += 12; SPILL(); return;
L_eea779: /* eea779: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eea77c: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* eea782: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeea787u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* eea787: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea78c: je 0xeea759 */
  if (zf) goto L_eea759;
L_eea78e: /* eea78e: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* eea794: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* eea796: push 0xf0625c */
  { uint32_t v = 0xf0625cu; esp -= 4; W32(esp, v); }
/* eea79b: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* eea7a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea7a1: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xeea7a7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* eea7a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea7aa: jmp 0xeea759 */
  goto L_eea759;
L_eea7ac: /* eea7ac: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eea7af: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* eea7b5: jmp 0xeea759 */
  goto L_eea759;
}

void f_eea7b7(void) {
  LOAD_REGS();
L_eea7b7: /* eea7b7: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* eea7ba: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eea7bf: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* eea7c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea7c3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* eea7c6: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea7cbu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eea7cb(); return;
}

void f_eea7cb(void) {
  LOAD_REGS();
L_eea7cb: /* eea7cb: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eea7d1: push 0xef737c */
  { uint32_t v = 0xef737cu; esp -= 4; W32(esp, v); }
/* eea7d6: push 0xf06298 */
  { uint32_t v = 0xf06298u; esp -= 4; W32(esp, v); }
/* eea7db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeea7ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea7dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eea7e0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eea7e3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eea7e6: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* eea7e9: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eea7ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea7f2: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* eea7f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea7f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea7f7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeea7f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea7f9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea7fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea7fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea7ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeea801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea802: push 0xf062a0 */
  { uint32_t v = 0xf062a0u; esp -= 4; W32(esp, v); }
/* eea807: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeea809u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea809: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eea80c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea80e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eea810: call 0xeec520 */
  esp -= 4; W32(esp, 0xeea815u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eea815: guest_badaddr(0xeea815); return;
}

void f_eea8c0(void) {
  LOAD_REGS();
L_eea8c0: /* eea8c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eea8c1: mov ebp, esp */
  ebp = esp;
/* eea8c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eea8c5: push 0xeef5f0 */
  { uint32_t v = 0xeef5f0u; esp -= 4; W32(esp, v); }
/* eea8ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eea8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea8d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eea8d8: sub esp, 0x130 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eea8de: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* eea8e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eea8e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea8e5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eea8e8: xor ebx, ebx */
  ebx = 0;
/* eea8ea: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* eea8ec: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea8ef: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea8f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea8f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eea8f4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea8f7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eea8fa: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* eea8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea8fe: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea903: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eea906: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea909: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea90a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* eea90d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea910u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea910: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eea916: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eea918: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea91a: je 0xeea929 */
  if (zf) goto L_eea929;
L_eea91c: /* eea91c: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eea921: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eea923: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eea925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea926: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeea929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea929: /* eea929: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea92f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eea931: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea933: je 0xeea93a */
  if (zf) goto L_eea93a;
L_eea935: /* eea935: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eea938: jmp 0xeea940 */
  goto L_eea940;
L_eea93a: /* eea93a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* eea93d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_eea940: /* eea940: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea943: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea946: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* eea949: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea94c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea94d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea950: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* eea953: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea954: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea959: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea95a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea95du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea95d: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea963: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* eea965: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eea968: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eea96b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea96e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea96f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea972: lea eax, [ebp - 0x13c] */
  eax = (uint32_t)(ebp + 0xfffffec4u);
/* eea978: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea979: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eea97e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea97f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeea982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eea982: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eea988: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eea98a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea98c: je 0xeea99b */
  if (zf) goto L_eea99b;
L_eea98e: /* eea98e: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eea993: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eea995: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eea997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eea998: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeea99bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea99b: /* eea99b: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eea9a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eea9a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea9a5: mov edi, eax */
  edi = eax;
/* eea9a7: jne 0xeea9af */
  if (!zf) goto L_eea9af;
L_eea9a9: /* eea9a9: lea edi, [ebp - 0x13c] */
  edi = (uint32_t)(ebp + 0xfffffec4u);
L_eea9af: /* eea9af: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eea9b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eea9b3: mov eax, edx */
  eax = edx;
/* eea9b5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eea9b8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eea9bb: jne 0xeea9d2 */
  if (!zf) goto L_eea9d2;
L_eea9bd: /* eea9bd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eea9c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eea9c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eea9c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eea9c5: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eea9cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eea9cc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeea9d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eea9d2: /* eea9d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eea9d5: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* eea9db: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eea9de: je 0xeeaa87 */
  if (zf) goto L_eeaa87;
L_eea9e4: /* eea9e4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eea9e7: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eea9ec: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* eea9f3: jle 0xeea9fa */
  if ((zf || sf != of)) goto L_eea9fa;
L_eea9f5: /* eea9f5: mov eax, 0xff */
  eax = 0xffu;
L_eea9fa: /* eea9fa: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eea9fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eea9fe: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* eeaa01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeaa02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeaa03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaa04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeaa05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeaa06: call 0xeebc06 */
  esp -= 4; W32(esp, 0xeeaa0bu); SPILL(); f_eebc06(); if (g_unwind) return; RELOAD();
/* eeaa0b: mov esi, eax */
  esi = eax;
/* eeaa0d: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeaa10: je 0xeeaa47 */
  if (zf) goto L_eeaa47;
L_eeaa12: /* eeaa12: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* eeaa15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaa16: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xeeaa1bu); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* eeaa1b: mov ecx, dword ptr [ebp - 0x3a] */
  ecx = R32((uint32_t)(ebp + 0xffffffc6u));
/* eeaa1e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* eeaa21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeaa22: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* eeaa24: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeeaa29u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eeaa29: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* eeaa2c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eeaa2f: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* eeaa32: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_eeaa34: /* eeaa34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eeaa37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eeaa3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeaa3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeaa40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeaa41: mov esp, ebp */
  esp = ebp;
/* eeaa43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeaa44: ret 8 */
  esp += 12; SPILL(); return;
L_eeaa47: /* eeaa47: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eeaa4a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* eeaa4c: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeeaa51u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* eeaa51: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeaa56: je 0xeeaa34 */
  if (zf) goto L_eeaa34;
L_eeaa58: /* eeaa58: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* eeaa5e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* eeaa60: push 0xf062c8 */
  { uint32_t v = 0xf062c8u; esp -= 4; W32(esp, v); }
/* eeaa65: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* eeaa6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaa6b: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xeeaa71u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* eeaa71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeaa74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eeaa77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eeaa7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeaa7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeaa80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeaa81: mov esp, ebp */
  esp = ebp;
/* eeaa83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeaa84: ret 8 */
  esp += 12; SPILL(); return;
L_eeaa87: /* eeaa87: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eeaa8a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* eeaa8c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eeaa8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeaa90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeaa91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eeaa98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeaa99: mov esp, ebp */
  esp = ebp;
/* eeaa9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeaa9c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eeaa9f(void) {
  LOAD_REGS();
L_eeaa9f: /* eeaa9f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* eeaaa2: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eeaaa7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* eeaaaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaaab: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* eeaaae: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeaab3u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eeaab3(); return;
}

void f_eeaab3(void) {
  LOAD_REGS();
L_eeaab3: /* eeaab3: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eeaab9: push 0xef73b4 */
  { uint32_t v = 0xef73b4u; esp -= 4; W32(esp, v); }
/* eeaabe: push 0xf06308 */
  { uint32_t v = 0xf06308u; esp -= 4; W32(esp, v); }
/* eeaac3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeeaac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeaac5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eeaac8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eeaacb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eeaace: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* eeaad1: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eeaad7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeaada: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* eeaadc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeaadd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeaadf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeeaae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeaae1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eeaae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeaae7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeeaae9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeaae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaaea: push 0xf06310 */
  { uint32_t v = 0xf06310u; esp -= 4; W32(esp, v); }
/* eeaaef: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeeaaf1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeaaf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeaaf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeaaf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeaaf8: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeaafdu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eeaafd: guest_badaddr(0xeeaafd); return;
}

void f_eeab90(void) {
  LOAD_REGS();
L_eeab90: /* eeab90: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eeab93: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* eeab99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeab9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeab9b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* eeab9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaba0: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* eeaba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeaba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeaba6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* eeabaa: mov dword ptr [esp + 0x14], 0x10 */
  W32((uint32_t)(esp + 0x14u), 0x10u);
/* eeabb2: call 0xeebbc4 */
  esp -= 4; W32(esp, 0xeeabb7u); SPILL(); f_eebbc4(); if (g_unwind) return; RELOAD();
/* eeabb7: mov eax, dword ptr [esp + 0xe] */
  eax = R32((uint32_t)(esp + 0xeu));
/* eeabbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeabbc: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeeabc1u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eeabc1: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* eeabc4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* eeabc8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* eeabcc: mov ecx, 6 */
  ecx = 0x6u;
/* eeabd1: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* eeabd5: mov edi, eax */
  edi = eax;
/* eeabd7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* eeabd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeabda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeabdb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeabde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eeac10(void) {
  LOAD_REGS();
L_eeac10: /* eeac10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eeac11: mov ebp, esp */
  ebp = esp;
/* eeac13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eeac15: push 0xeef612 */
  { uint32_t v = 0xeef612u; esp -= 4; W32(esp, v); }
/* eeac1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eeac20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeac21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eeac28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeac29: mov eax, 0x1130 */
  eax = 0x1130u;
/* eeac2e: call 0xeec780 */
  esp -= 4; W32(esp, 0xeeac33u); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* eeac33: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eeac36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeac37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeac38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeac39: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eeac3c: mov esi, ecx */
  esi = ecx;
/* eeac3e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eeac41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeac42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeac43: xor edi, edi */
  edi = 0;
/* eeac45: mov ecx, esi */
  ecx = esi;
/* eeac47: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* eeac4a: call 0xed11db */
  esp -= 4; W32(esp, 0xeeac4fu); SPILL(); f_ed11db(); if (g_unwind) return; RELOAD();
/* eeac4f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* eeac52: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* eeac58: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeac5b: je 0xeeadb2 */
  if (zf) goto L_eeadb2;
L_eeac61: /* eeac61: mov cl, byte ptr [esi + 0x354] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x354u))) & 0xffu);
/* eeac67: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eeac6a: jne 0xeead6c */
  if (!zf) goto L_eead6c;
L_eeac70: /* eeac70: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* eeac73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeac74: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eeac77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeac78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeac79: push 0xfff */
  { uint32_t v = 0xfffu; esp -= 4; W32(esp, v); }
/* eeac7e: lea edx, [ebp - 0x1140] */
  edx = (uint32_t)(ebp + 0xffffeec0u);
/* eeac84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeac85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeac86: mov dword ptr [ebp + 0xc], 0x10 */
  W32((uint32_t)(ebp + 0xcu), 0x10u);
/* eeac8d: call 0xeebc06 */
  esp -= 4; W32(esp, 0xeeac92u); SPILL(); f_eebc06(); if (g_unwind) return; RELOAD();
/* eeac92: mov edi, eax */
  edi = eax;
/* eeac94: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeac97: je 0xeeadb2 */
  if (zf) goto L_eeadb2;
L_eeac9d: /* eeac9d: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* eeaca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaca1: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xeeaca6u); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* eeaca6: mov ecx, dword ptr [ebp - 0x3a] */
  ecx = R32((uint32_t)(ebp + 0xffffffc6u));
/* eeaca9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeacaa: mov ebx, eax */
  ebx = eax;
/* eeacac: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeeacb1u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eeacb1: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* eeacb4: mov al, byte ptr [esi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x33cu))) & 0xffu);
/* eeacba: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eeacbc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eeacbf: jne 0xeead0a */
  if (!zf) goto L_eead0a;
L_eeacc1: /* eeacc1: lea edx, [ebp - 0x1140] */
  edx = (uint32_t)(ebp + 0xffffeec0u);
/* eeacc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeacc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeacca: mov byte ptr [ebp + edi - 0x1140], al */
  W8((uint32_t)(ebp + edi + 0xffffeec0u), (eax & 0xffu));
/* eeacd1: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xeeacd7u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* eeacd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeacda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeacdb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eeacde: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xeeace4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* eeace4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eeace7: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* eeacea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeaceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeacec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeaced: mov ecx, esi */
  ecx = esi;
/* eeacef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eeacf3: call 0xed176c */
  esp -= 4; W32(esp, 0xeeacf8u); SPILL(); f_ed176c(); if (g_unwind) return; RELOAD();
/* eeacf8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eeacfb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eeacff: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeead05u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eead05: jmp 0xeeadb2 */
  goto L_eeadb2;
L_eead0a: /* eead0a: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eead0c: jne 0xeead55 */
  if (!zf) goto L_eead55;
L_eead0e: /* eead0e: lea edx, [ebp - 0x1140] */
  edx = (uint32_t)(ebp + 0xffffeec0u);
/* eead14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eead16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eead17: mov byte ptr [ebp + edi - 0x1140], 0 */
  W8((uint32_t)(ebp + edi + 0xffffeec0u), 0x0u);
/* eead1f: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xeead25u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* eead25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eead28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eead29: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eead2c: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xeead32u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* eead32: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eead35: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* eead38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eead39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eead3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eead3b: mov ecx, esi */
  ecx = esi;
/* eead3d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* eead41: call 0xed1924 */
  esp -= 4; W32(esp, 0xeead46u); SPILL(); f_ed1924(); if (g_unwind) return; RELOAD();
/* eead46: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eead49: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eead4d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeead53u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eead53: jmp 0xeeadb2 */
  goto L_eeadb2;
L_eead55: /* eead55: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eead57: jne 0xeeadb2 */
  if (!zf) goto L_eeadb2;
L_eead59: /* eead59: lea edx, [ebp - 0x1140] */
  edx = (uint32_t)(ebp + 0xffffeec0u);
/* eead5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eead60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eead61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eead62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eead63: mov ecx, esi */
  ecx = esi;
/* eead65: call 0xed1159 */
  esp -= 4; W32(esp, 0xeead6au); SPILL(); f_ed1159(); if (g_unwind) return; RELOAD();
/* eead6a: jmp 0xeeadb2 */
  goto L_eeadb2;
L_eead6c: /* eead6c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eead6e: jne 0xeeadb2 */
  if (!zf) goto L_eeadb2;
L_eead70: /* eead70: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eead73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eead74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eead75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eead76: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* eead7c: mov dword ptr [ebp - 0x13c], eax */
  W32((uint32_t)(ebp + 0xfffffec4u), eax);
/* eead82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eead83: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eead84: mov ebx, 1 */
  ebx = 0x1u;
/* eead89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eead8a: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* eead8d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* eead90: mov dword ptr [ebp - 0x140], ebx */
  W32((uint32_t)(ebp + 0xfffffec0u), ebx);
/* eead96: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xeead9bu); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* eead9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eead9d: je 0xeeadac */
  if (zf) goto L_eeadac;
L_eead9f: /* eead9f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeada2: je 0xeeadac */
  if (zf) goto L_eeadac;
L_eeada4: /* eeada4: mov dword ptr [esi + 0x350], ebx */
  W32((uint32_t)(esi + 0x350u), ebx);
/* eeadaa: jmp 0xeeadb2 */
  goto L_eeadb2;
L_eeadac: /* eeadac: mov dword ptr [esi + 0x350], edi */
  W32((uint32_t)(esi + 0x350u), edi);
L_eeadb2: /* eeadb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eeadb5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eeadb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeadb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeadba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eeadc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeadc2: mov esp, ebp */
  esp = ebp;
/* eeadc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeadc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eeadc8(void) {
  LOAD_REGS();
L_eeadc8: /* eeadc8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* eeadcb: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eeadd0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eeadd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeadd4: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* eeadd7: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeaddcu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eeaddc(); return;
}

void f_eeaddc(void) {
  LOAD_REGS();
L_eeaddc: /* eeaddc: push 0xef73f0 */
  { uint32_t v = 0xef73f0u; esp -= 4; W32(esp, v); }
/* eeade1: push 0xf06254 */
  { uint32_t v = 0xf06254u; esp -= 4; W32(esp, v); }
/* eeade6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeeadecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eeadec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeadef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeadf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeadf3: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeadf8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eeadf8: guest_badaddr(0xeeadf8); return;
}

void f_eeae80(void) {
  LOAD_REGS();
L_eeae80: /* eeae80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eeae84: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeae87: jne 0xeeae8e */
  if (!zf) goto L_eeae8e;
L_eeae89: /* eeae89: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeeae8eu); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
L_eeae8e: /* eeae8e: cmp eax, 0x2746 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2746u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeae93: jg 0xeeafb3 */
  if ((!zf && sf == of)) goto L_eeafb3;
L_eeae99: /* eeae99: je 0xeeafad */
  if (zf) goto L_eeafad;
L_eeae9f: /* eeae9f: cmp eax, 0x2739 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2739u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeaea4: jg 0xeeaf50 */
  if ((!zf && sf == of)) goto L_eeaf50;
L_eeaeaa: /* eeaeaa: je 0xeeaf4a */
  if (zf) goto L_eeaf4a;
L_eeaeb0: /* eeaeb0: cmp eax, 0x2728 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2728u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeaeb5: jg 0xeeaf11 */
  if ((!zf && sf == of)) goto L_eeaf11;
L_eeaeb7: /* eeaeb7: je 0xeeaf0b */
  if (zf) goto L_eeaf0b;
L_eeaeb9: /* eeaeb9: cmp eax, 0x271d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x271du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeaebe: jg 0xeeaeef */
  if ((!zf && sf == of)) goto L_eeaeef;
L_eeaec0: /* eeaec0: je 0xeeaee9 */
  if (zf) goto L_eeaee9;
L_eeaec2: /* eeaec2: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* eeaec5: je 0xeeaee3 */
  if (zf) goto L_eeaee3;
L_eeaec7: /* eeaec7: sub eax, 0x2714 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2714u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* eeaecc: je 0xeeaedd */
  if (zf) goto L_eeaedd;
L_eeaece: /* eeaece: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* eeaed1: jne 0xeeb087 */
  if (!zf) goto L_eeb087;
L_eeaed7: /* eeaed7: mov eax, 0xf0672c */
  eax = 0xf0672cu;
/* eeaedc: ret  */
  esp += 4; SPILL(); return;
L_eeaedd: /* eeaedd: mov eax, 0xf06718 */
  eax = 0xf06718u;
/* eeaee2: ret  */
  esp += 4; SPILL(); return;
L_eeaee3: /* eeaee3: mov eax, 0xf06ca4 */
  eax = 0xf06ca4u;
/* eeaee8: ret  */
  esp += 4; SPILL(); return;
L_eeaee9: /* eeaee9: mov eax, 0xf06740 */
  eax = 0xf06740u;
/* eeaeee: ret  */
  esp += 4; SPILL(); return;
L_eeaeef: /* eeaeef: sub eax, 0x271e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x271eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* eeaef4: je 0xeeaf05 */
  if (zf) goto L_eeaf05;
L_eeaef6: /* eeaef6: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* eeaef9: jne 0xeeb087 */
  if (!zf) goto L_eeb087;
L_eeaeff: /* eeaeff: mov eax, 0xf06768 */
  eax = 0xf06768u;
/* eeaf04: ret  */
  esp += 4; SPILL(); return;
L_eeaf05: /* eeaf05: mov eax, 0xf06754 */
  eax = 0xf06754u;
/* eeaf0a: ret  */
  esp += 4; SPILL(); return;
L_eeaf0b: /* eeaf0b: mov eax, 0xf0677c */
  eax = 0xf0677cu;
/* eeaf10: ret  */
  esp += 4; SPILL(); return;
L_eeaf11: /* eeaf11: add eax, 0xffffd8cd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffd8cdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eeaf16: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eeaf19: ja 0xeeb087 */
  if ((!cf && !zf)) goto L_eeb087;
L_eeaf1f: /* eeaf1f: jmp dword ptr [eax*4 + 0xeeb090] */
  switch (R32((uint32_t)(eax*4 + 0xeeb090u))) {
    case 0xeeaf26u: goto L_eeaf26;
    case 0xeeaf2cu: goto L_eeaf2c;
    case 0xeeaf32u: goto L_eeaf32;
    case 0xeeaf38u: goto L_eeaf38;
    case 0xeeaf3eu: goto L_eeaf3e;
    case 0xeeaf44u: goto L_eeaf44;
    case 0xeeaf65u: goto L_eeaf65;
    case 0xeeaf6bu: goto L_eeaf6b;
    case 0xeeaf71u: goto L_eeaf71;
    case 0xeeaf77u: goto L_eeaf77;
    case 0xeeaf7du: goto L_eeaf7d;
    case 0xeeaf83u: goto L_eeaf83;
    case 0xeeaf89u: goto L_eeaf89;
    case 0xeeaf8fu: goto L_eeaf8f;
    case 0xeeaf95u: goto L_eeaf95;
    case 0xeeaf9bu: goto L_eeaf9b;
    case 0xeeafa1u: goto L_eeafa1;
    case 0xeeafa7u: goto L_eeafa7;
    case 0xeeafe0u: goto L_eeafe0;
    case 0xeeafe6u: goto L_eeafe6;
    case 0xeeafecu: goto L_eeafec;
    case 0xeeaff2u: goto L_eeaff2;
    case 0xeeaff8u: goto L_eeaff8;
    case 0xeeaffeu: goto L_eeaffe;
    case 0xeeb004u: goto L_eeb004;
    case 0xeeb00au: goto L_eeb00a;
    case 0xeeb010u: goto L_eeb010;
    case 0xeeb016u: goto L_eeb016;
    case 0xeeb01cu: goto L_eeb01c;
    case 0xeeb022u: goto L_eeb022;
    case 0xeeb028u: goto L_eeb028;
    case 0xeeb02eu: goto L_eeb02e;
    case 0xeeb034u: goto L_eeb034;
    case 0xeeb03au: goto L_eeb03a;
    case 0xeeb040u: goto L_eeb040;
    case 0xeeb046u: goto L_eeb046;
    case 0xeeb04cu: goto L_eeb04c;
    case 0xeeb052u: goto L_eeb052;
    case 0xeeb087u: goto L_eeb087;
    default: guest_badjump(0xeeaf1f, R32((uint32_t)(eax*4 + 0xeeb090u))); return;
  }
L_eeaf26: /* eeaf26: mov eax, 0xf06790 */
  eax = 0xf06790u;
/* eeaf2b: ret  */
  esp += 4; SPILL(); return;
L_eeaf2c: /* eeaf2c: mov eax, 0xf067b0 */
  eax = 0xf067b0u;
/* eeaf31: ret  */
  esp += 4; SPILL(); return;
L_eeaf32: /* eeaf32: mov eax, 0xf067d0 */
  eax = 0xf067d0u;
/* eeaf37: ret  */
  esp += 4; SPILL(); return;
L_eeaf38: /* eeaf38: mov eax, 0xf067e8 */
  eax = 0xf067e8u;
/* eeaf3d: ret  */
  esp += 4; SPILL(); return;
L_eeaf3e: /* eeaf3e: mov eax, 0xf06800 */
  eax = 0xf06800u;
/* eeaf43: ret  */
  esp += 4; SPILL(); return;
L_eeaf44: /* eeaf44: mov eax, 0xf06820 */
  eax = 0xf06820u;
/* eeaf49: ret  */
  esp += 4; SPILL(); return;
L_eeaf4a: /* eeaf4a: mov eax, 0xf06838 */
  eax = 0xf06838u;
/* eeaf4f: ret  */
  esp += 4; SPILL(); return;
L_eeaf50: /* eeaf50: add eax, 0xffffd8c6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffd8c6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eeaf55: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eeaf58: ja 0xeeb087 */
  if ((!cf && !zf)) goto L_eeb087;
L_eeaf5e: /* eeaf5e: jmp dword ptr [eax*4 + 0xeeb0a8] */
  switch (R32((uint32_t)(eax*4 + 0xeeb0a8u))) {
    case 0xeeaf65u: goto L_eeaf65;
    case 0xeeaf6bu: goto L_eeaf6b;
    case 0xeeaf71u: goto L_eeaf71;
    case 0xeeaf77u: goto L_eeaf77;
    case 0xeeaf7du: goto L_eeaf7d;
    case 0xeeaf83u: goto L_eeaf83;
    case 0xeeaf89u: goto L_eeaf89;
    case 0xeeaf8fu: goto L_eeaf8f;
    case 0xeeaf95u: goto L_eeaf95;
    case 0xeeaf9bu: goto L_eeaf9b;
    case 0xeeafa1u: goto L_eeafa1;
    case 0xeeafa7u: goto L_eeafa7;
    case 0xeeafe0u: goto L_eeafe0;
    case 0xeeafe6u: goto L_eeafe6;
    case 0xeeafecu: goto L_eeafec;
    case 0xeeaff2u: goto L_eeaff2;
    case 0xeeaff8u: goto L_eeaff8;
    case 0xeeaffeu: goto L_eeaffe;
    case 0xeeb004u: goto L_eeb004;
    case 0xeeb00au: goto L_eeb00a;
    case 0xeeb010u: goto L_eeb010;
    case 0xeeb016u: goto L_eeb016;
    case 0xeeb01cu: goto L_eeb01c;
    case 0xeeb022u: goto L_eeb022;
    case 0xeeb028u: goto L_eeb028;
    case 0xeeb02eu: goto L_eeb02e;
    case 0xeeb034u: goto L_eeb034;
    case 0xeeb03au: goto L_eeb03a;
    case 0xeeb040u: goto L_eeb040;
    case 0xeeb046u: goto L_eeb046;
    case 0xeeb04cu: goto L_eeb04c;
    case 0xeeb052u: goto L_eeb052;
    case 0xeeb087u: goto L_eeb087;
    default: guest_badjump(0xeeaf5e, R32((uint32_t)(eax*4 + 0xeeb0a8u))); return;
  }
L_eeaf65: /* eeaf65: mov eax, 0xf06854 */
  eax = 0xf06854u;
/* eeaf6a: ret  */
  esp += 4; SPILL(); return;
L_eeaf6b: /* eeaf6b: mov eax, 0xf06874 */
  eax = 0xf06874u;
/* eeaf70: ret  */
  esp += 4; SPILL(); return;
L_eeaf71: /* eeaf71: mov eax, 0xf0689c */
  eax = 0xf0689cu;
/* eeaf76: ret  */
  esp += 4; SPILL(); return;
L_eeaf77: /* eeaf77: mov eax, 0xf068c4 */
  eax = 0xf068c4u;
/* eeaf7c: ret  */
  esp += 4; SPILL(); return;
L_eeaf7d: /* eeaf7d: mov eax, 0xf068e0 */
  eax = 0xf068e0u;
/* eeaf82: ret  */
  esp += 4; SPILL(); return;
L_eeaf83: /* eeaf83: mov eax, 0xf06900 */
  eax = 0xf06900u;
/* eeaf88: ret  */
  esp += 4; SPILL(); return;
L_eeaf89: /* eeaf89: mov eax, 0xf06920 */
  eax = 0xf06920u;
/* eeaf8e: ret  */
  esp += 4; SPILL(); return;
L_eeaf8f: /* eeaf8f: mov eax, 0xf0693c */
  eax = 0xf0693cu;
/* eeaf94: ret  */
  esp += 4; SPILL(); return;
L_eeaf95: /* eeaf95: mov eax, 0xf06960 */
  eax = 0xf06960u;
/* eeaf9a: ret  */
  esp += 4; SPILL(); return;
L_eeaf9b: /* eeaf9b: mov eax, 0xf06978 */
  eax = 0xf06978u;
/* eeafa0: ret  */
  esp += 4; SPILL(); return;
L_eeafa1: /* eeafa1: mov eax, 0xf06998 */
  eax = 0xf06998u;
/* eeafa6: ret  */
  esp += 4; SPILL(); return;
L_eeafa7: /* eeafa7: mov eax, 0xf069b4 */
  eax = 0xf069b4u;
/* eeafac: ret  */
  esp += 4; SPILL(); return;
L_eeafad: /* eeafad: mov eax, 0xf069d4 */
  eax = 0xf069d4u;
/* eeafb2: ret  */
  esp += 4; SPILL(); return;
L_eeafb3: /* eeafb3: cmp eax, 0x2775 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2775u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeafb8: jg 0xeeb05e */
  if ((!zf && sf == of)) goto L_eeb05e;
L_eeafbe: /* eeafbe: je 0xeeb058 */
  if (zf) goto L_eeb058;
L_eeafc4: /* eeafc4: add eax, 0xffffd8b9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffd8b9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eeafc9: cmp eax, 0x26 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x26u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eeafcc: ja 0xeeb087 */
  if ((!cf && !zf)) goto L_eeb087;
L_eeafd2: /* eeafd2: movzx eax, byte ptr [eax + 0xeeb12c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xeeb12cu)));
/* eeafd9: jmp dword ptr [eax*4 + 0xeeb0d8] */
  switch (R32((uint32_t)(eax*4 + 0xeeb0d8u))) {
    case 0xeeafe0u: goto L_eeafe0;
    case 0xeeafe6u: goto L_eeafe6;
    case 0xeeafecu: goto L_eeafec;
    case 0xeeaff2u: goto L_eeaff2;
    case 0xeeaff8u: goto L_eeaff8;
    case 0xeeaffeu: goto L_eeaffe;
    case 0xeeb004u: goto L_eeb004;
    case 0xeeb00au: goto L_eeb00a;
    case 0xeeb010u: goto L_eeb010;
    case 0xeeb016u: goto L_eeb016;
    case 0xeeb01cu: goto L_eeb01c;
    case 0xeeb022u: goto L_eeb022;
    case 0xeeb028u: goto L_eeb028;
    case 0xeeb02eu: goto L_eeb02e;
    case 0xeeb034u: goto L_eeb034;
    case 0xeeb03au: goto L_eeb03a;
    case 0xeeb040u: goto L_eeb040;
    case 0xeeb046u: goto L_eeb046;
    case 0xeeb04cu: goto L_eeb04c;
    case 0xeeb052u: goto L_eeb052;
    case 0xeeb087u: goto L_eeb087;
    default: guest_badjump(0xeeafd9, R32((uint32_t)(eax*4 + 0xeeb0d8u))); return;
  }
L_eeafe0: /* eeafe0: mov eax, 0xf069f0 */
  eax = 0xf069f0u;
/* eeafe5: ret  */
  esp += 4; SPILL(); return;
L_eeafe6: /* eeafe6: mov eax, 0xf06a08 */
  eax = 0xf06a08u;
/* eeafeb: ret  */
  esp += 4; SPILL(); return;
L_eeafec: /* eeafec: mov eax, 0xf06a20 */
  eax = 0xf06a20u;
/* eeaff1: ret  */
  esp += 4; SPILL(); return;
L_eeaff2: /* eeaff2: mov eax, 0xf06a38 */
  eax = 0xf06a38u;
/* eeaff7: ret  */
  esp += 4; SPILL(); return;
L_eeaff8: /* eeaff8: mov eax, 0xf06a54 */
  eax = 0xf06a54u;
/* eeaffd: ret  */
  esp += 4; SPILL(); return;
L_eeaffe: /* eeaffe: mov eax, 0xf06a74 */
  eax = 0xf06a74u;
/* eeb003: ret  */
  esp += 4; SPILL(); return;
L_eeb004: /* eeb004: mov eax, 0xf06a90 */
  eax = 0xf06a90u;
/* eeb009: ret  */
  esp += 4; SPILL(); return;
L_eeb00a: /* eeb00a: mov eax, 0xf06ab0 */
  eax = 0xf06ab0u;
/* eeb00f: ret  */
  esp += 4; SPILL(); return;
L_eeb010: /* eeb010: mov eax, 0xf06ac4 */
  eax = 0xf06ac4u;
/* eeb015: ret  */
  esp += 4; SPILL(); return;
L_eeb016: /* eeb016: mov eax, 0xf06ae4 */
  eax = 0xf06ae4u;
/* eeb01b: ret  */
  esp += 4; SPILL(); return;
L_eeb01c: /* eeb01c: mov eax, 0xf06b00 */
  eax = 0xf06b00u;
/* eeb021: ret  */
  esp += 4; SPILL(); return;
L_eeb022: /* eeb022: mov eax, 0xf06b20 */
  eax = 0xf06b20u;
/* eeb027: ret  */
  esp += 4; SPILL(); return;
L_eeb028: /* eeb028: mov eax, 0xf06b3c */
  eax = 0xf06b3cu;
/* eeb02d: ret  */
  esp += 4; SPILL(); return;
L_eeb02e: /* eeb02e: mov eax, 0xf06b54 */
  eax = 0xf06b54u;
/* eeb033: ret  */
  esp += 4; SPILL(); return;
L_eeb034: /* eeb034: mov eax, 0xf06b68 */
  eax = 0xf06b68u;
/* eeb039: ret  */
  esp += 4; SPILL(); return;
L_eeb03a: /* eeb03a: mov eax, 0xf06b7c */
  eax = 0xf06b7cu;
/* eeb03f: ret  */
  esp += 4; SPILL(); return;
L_eeb040: /* eeb040: mov eax, 0xf06b90 */
  eax = 0xf06b90u;
/* eeb045: ret  */
  esp += 4; SPILL(); return;
L_eeb046: /* eeb046: mov eax, 0xf06bc0 */
  eax = 0xf06bc0u;
/* eeb04b: ret  */
  esp += 4; SPILL(); return;
L_eeb04c: /* eeb04c: mov eax, 0xf06be0 */
  eax = 0xf06be0u;
/* eeb051: ret  */
  esp += 4; SPILL(); return;
L_eeb052: /* eeb052: mov eax, 0xf06c08 */
  eax = 0xf06c08u;
/* eeb057: ret  */
  esp += 4; SPILL(); return;
L_eeb058: /* eeb058: mov eax, 0xf06ba8 */
  eax = 0xf06ba8u;
/* eeb05d: ret  */
  esp += 4; SPILL(); return;
L_eeb05e: /* eeb05e: add eax, 0xffffd507 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffd507u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eeb063: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eeb066: ja 0xeeb087 */
  if ((!cf && !zf)) goto L_eeb087;
L_eeb068: /* eeb068: jmp dword ptr [eax*4 + 0xeeb154] */
  switch (R32((uint32_t)(eax*4 + 0xeeb154u))) {
    case 0xeeb06fu: goto L_eeb06f;
    case 0xeeb075u: goto L_eeb075;
    case 0xeeb07bu: goto L_eeb07b;
    case 0xeeb081u: goto L_eeb081;
    default: guest_badjump(0xeeb068, R32((uint32_t)(eax*4 + 0xeeb154u))); return;
  }
L_eeb06f: /* eeb06f: mov eax, 0xf06c2c */
  eax = 0xf06c2cu;
/* eeb074: ret  */
  esp += 4; SPILL(); return;
L_eeb075: /* eeb075: mov eax, 0xf06c50 */
  eax = 0xf06c50u;
/* eeb07a: ret  */
  esp += 4; SPILL(); return;
L_eeb07b: /* eeb07b: mov eax, 0xf06c6c */
  eax = 0xf06c6cu;
/* eeb080: ret  */
  esp += 4; SPILL(); return;
L_eeb081: /* eeb081: mov eax, 0xf06c8c */
  eax = 0xf06c8cu;
/* eeb086: ret  */
  esp += 4; SPILL(); return;
L_eeb087: /* eeb087: mov eax, 0xf06cbc */
  eax = 0xf06cbcu;
/* eeb08c: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb230(void) {
  LOAD_REGS();
L_eeb230: /* eeb230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eeb234: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eeb238: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* eeb23b: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb23e: jne 0xeeb258 */
  if (!zf) goto L_eeb258;
L_eeb240: /* eeb240: mov dx, word ptr [eax + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* eeb244: cmp dx, word ptr [ecx + 2] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx + 0x2u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* eeb248: jne 0xeeb258 */
  if (!zf) goto L_eeb258;
L_eeb24a: /* eeb24a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* eeb24d: cmp ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* eeb250: jne 0xeeb258 */
  if (!zf) goto L_eeb258;
L_eeb252: /* eeb252: mov eax, 1 */
  eax = 0x1u;
/* eeb257: ret  */
  esp += 4; SPILL(); return;
L_eeb258: /* eeb258: xor eax, eax */
  eax = 0;
/* eeb25a: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb270(void) {
  LOAD_REGS();
L_eeb270: /* eeb270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eeb274: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eeb278: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* eeb27b: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb27e: jne 0xeeb28e */
  if (!zf) goto L_eeb28e;
L_eeb280: /* eeb280: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* eeb283: cmp ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* eeb286: jne 0xeeb28e */
  if (!zf) goto L_eeb28e;
L_eeb288: /* eeb288: mov eax, 1 */
  eax = 0x1u;
/* eeb28d: ret  */
  esp += 4; SPILL(); return;
L_eeb28e: /* eeb28e: xor eax, eax */
  eax = 0;
/* eeb290: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb2b0(void) {
  LOAD_REGS();
L_eeb2b0: /* eeb2b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eeb2b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eeb2b8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eeb2bc: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* eeb2be: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eeb2c2: mov byte ptr [edx], ah */
  W8((uint32_t)(edx), ((eax >> 8) & 0xffu));
/* eeb2c4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eeb2c8: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* eeb2cb: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* eeb2cd: mov byte ptr [edx], ah */
  W8((uint32_t)(edx), ((eax >> 8) & 0xffu));
/* eeb2cf: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb2e0(void) {
  LOAD_REGS();
L_eeb2e0: /* eeb2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eeb2e4: mov cl, byte ptr [esp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* eeb2e8: mov dl, byte ptr [esp + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* eeb2ec: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* eeb2ee: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* eeb2f2: mov byte ptr [eax + 1], dl */
  W8((uint32_t)(eax + 0x1u), (edx & 0xffu));
/* eeb2f5: mov dl, byte ptr [esp + 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* eeb2f9: mov byte ptr [eax + 2], cl */
  W8((uint32_t)(eax + 0x2u), (ecx & 0xffu));
/* eeb2fc: mov byte ptr [eax + 3], dl */
  W8((uint32_t)(eax + 0x3u), (edx & 0xffu));
/* eeb2ff: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb310(void) {
  LOAD_REGS();
L_eeb310: /* eeb310: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eeb314: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eeb318: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* eeb31a: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb330(void) {
  LOAD_REGS();
L_eeb330: /* eeb330: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eeb334: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eeb338: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* eeb33a: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb350(void) {
  LOAD_REGS();
L_eeb350: /* eeb350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eeb351: mov ebp, esp */
  ebp = esp;
/* eeb353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eeb355: push 0xeef65a */
  { uint32_t v = 0xeef65au; esp -= 4; W32(esp, v); }
/* eeb35a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eeb360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eeb368: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eeb36b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eeb36e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeb36f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeb371: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* eeb374: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* eeb377: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eeb37a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb37b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* eeb37e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eeb381: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeb382: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* eeb385: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* eeb388: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb389: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeb38a: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* eeb391: mov esi, dword ptr [0xf0daf0] */
  esi = R32((uint32_t)(0xf0daf0u));
/* eeb397: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* eeb39a: push 0xf06cd4 */
  { uint32_t v = 0xf06cd4u; esp -= 4; W32(esp, v); }
/* eeb39f: mov edi, 1 */
  edi = 0x1u;
/* eeb3a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb3a5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* eeb3a8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb3aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb3aa: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb3ad: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eeb3b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb3b2: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* eeb3b4: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* eeb3b7: je 0xeeb3e2 */
  if (zf) goto L_eeb3e2;
L_eeb3b9: /* eeb3b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb3ba: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eeb3bd: push 0xf06cec */
  { uint32_t v = 0xf06cecu; esp -= 4; W32(esp, v); }
/* eeb3c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb3c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb3c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb3c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb3c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb3c9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eeb3cc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* eeb3d0: call dword ptr [0xf0d954] */
  esp -= 4; W32(esp, 0xeeb3d6u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eeb3d6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eeb3d9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* eeb3dc: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeeb3e2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_eeb3e2: /* eeb3e2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eeb3e5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* eeb3e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeb3e9: mov ecx, esi */
  ecx = esi;
/* eeb3eb: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xeeb3f1u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* eeb3f1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eeb3f4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* eeb3f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eeb3fb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeeb401u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eeb401: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eeb404: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeb405: mov eax, esi */
  eax = esi;
/* eeb407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb408: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eeb40f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeb410: mov esp, ebp */
  esp = ebp;
/* eeb412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeb413: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb414(void) {
  LOAD_REGS();
L_eeb414: /* eeb414: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eeb417: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eeb41c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eeb41f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb420: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eeb423: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeb428u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eeb428(); return;
}

void f_eeb428(void) {
  LOAD_REGS();
L_eeb428: /* eeb428: push 0xef7414 */
  { uint32_t v = 0xef7414u; esp -= 4; W32(esp, v); }
/* eeb42d: push 0xf06cf4 */
  { uint32_t v = 0xf06cf4u; esp -= 4; W32(esp, v); }
/* eeb432: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeeb438u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eeb438: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb43b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeb43d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeb43f: call 0xeec520 */
  esp -= 4; W32(esp, 0xeeb444u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eeb444: guest_badaddr(0xeeb444); return;
}

void f_eeb490(void) {
  LOAD_REGS();
L_eeb490: /* eeb490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb491: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eeb495: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* eeb499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb49a: push 0x8004667e */
  { uint32_t v = 0x8004667eu; esp -= 4; W32(esp, v); }
/* eeb49f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb4a0: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* eeb4a8: call 0xeebc2a */
  esp -= 4; W32(esp, 0xeeb4adu); SPILL(); f_eebc2a(); if (g_unwind) return; RELOAD();
/* eeb4ad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* eeb4af: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* eeb4b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eeb4b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeb4b3: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb4d0(void) {
  LOAD_REGS();
L_eeb4d0: /* eeb4d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eeb4d4: xor eax, eax */
  eax = 0;
/* eeb4d6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* eeb4d8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb4da: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eeb4de: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* eeb4e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb4e3: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eeb4e6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* eeb4e8: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* eeb4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeb4ee: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* eeb4f2: call 0xeebc24 */
  esp -= 4; W32(esp, 0xeeb4f7u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* eeb4f7: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb510(void) {
  LOAD_REGS();
L_eeb510: /* eeb510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb511: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eeb515: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* eeb517: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* eeb51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb51c: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* eeb521: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* eeb526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb527: mov word ptr [esp + 0x14], 1 */
  W16((uint32_t)(esp + 0x14u), 0x1u);
/* eeb52e: mov word ptr [esp + 0x16], 0 */
  W16((uint32_t)(esp + 0x16u), 0x0u);
/* eeb535: call 0xeebc24 */
  esp -= 4; W32(esp, 0xeeb53au); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* eeb53a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* eeb53c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* eeb53e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eeb53f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeb540: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb560(void) {
  LOAD_REGS();
L_eeb560: /* eeb560: xor eax, eax */
  eax = 0;
/* eeb562: ret  */
  esp += 4; SPILL(); return;
}

void f_eeb580(void) {
  LOAD_REGS();
L_eeb580: /* eeb580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb582: mov esi, ecx */
  esi = ecx;
/* eeb584: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eeb588: xor eax, eax */
  eax = 0;
/* eeb58a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb58c: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* eeb590: je 0xeeb5a1 */
  if (zf) goto L_eeb5a1;
L_eeb592: /* eeb592: xor eax, eax */
  eax = 0;
/* eeb594: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* eeb598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb599: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeeb59eu); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eeb59e: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_eeb5a1: /* eeb5a1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eeb5a4: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* eeb5a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb5a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb5aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb5ab: call 0xed16db */
  esp -= 4; W32(esp, 0xeeb5b0u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* eeb5b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb5b3: mov eax, esi */
  eax = esi;
/* eeb5b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb5b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeb5b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eeb5d0(void) {
  LOAD_REGS();
L_eeb5d0: /* eeb5d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eeb5d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb5d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb5d6: mov esi, ecx */
  esi = ecx;
/* eeb5d8: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xeeb5ddu); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* eeb5dd: mov ecx, dword ptr [esp + 0xa] */
  ecx = R32((uint32_t)(esp + 0xau));
/* eeb5e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb5e2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* eeb5e4: call 0xeebbbe */
  esp -= 4; W32(esp, 0xeeb5e9u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* eeb5e9: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* eeb5ec: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* eeb5ef: mov eax, esi */
  eax = esi;
/* eeb5f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb5f2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eeb610(void) {
  LOAD_REGS();
L_eeb610: /* eeb610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb612: mov esi, ecx */
  esi = ecx;
/* eeb614: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* eeb616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb617: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* eeb61f: call 0xeebc0c */
  esp -= 4; W32(esp, 0xeeb624u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* eeb624: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eeb628: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb62a: je 0xeeb631 */
  if (zf) goto L_eeb631;
L_eeb62c: /* eeb62c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* eeb62f: jmp 0xeeb633 */
  goto L_eeb633;
L_eeb631: /* eeb631: xor esi, esi */
  esi = 0;
L_eeb633: /* eeb633: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb634: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* eeb638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb639: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb63a: call 0xed16db */
  esp -= 4; W32(esp, 0xeeb63fu); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* eeb63f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb642: mov eax, esi */
  eax = esi;
/* eeb644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb645: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeb646: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eeb660(void) {
  LOAD_REGS();
L_eeb660: /* eeb660: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eeb663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb664: mov esi, ecx */
  esi = ecx;
/* eeb666: xor eax, eax */
  eax = 0;
/* eeb668: mov ax, word ptr [esi + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* eeb66c: mov word ptr [esp + 4], 2 */
  W16((uint32_t)(esp + 0x4u), 0x2u);
/* eeb673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb674: call 0xeebbca */
  esp -= 4; W32(esp, 0xeeb679u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* eeb679: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* eeb67b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb67c: mov word ptr [esp + 0xa], ax */
  W16((uint32_t)(esp + 0xau), (eax & 0xffffu));
/* eeb681: call 0xeebc0c */
  esp -= 4; W32(esp, 0xeeb686u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* eeb686: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* eeb68a: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* eeb68e: mov edx, ecx */
  edx = ecx;
/* eeb690: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* eeb692: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* eeb695: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* eeb699: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* eeb69c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eeb6a0: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* eeb6a3: mov eax, ecx */
  eax = ecx;
/* eeb6a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb6a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb6a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eeb6d0(void) {
  LOAD_REGS();
L_eeb6d0: /* eeb6d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb6d1: mov eax, dword ptr [0xf0dbc0] */
  eax = R32((uint32_t)(0xf0dbc0u));
/* eeb6d6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb6d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeb6d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eeb6da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb6db: xor esi, esi */
  esi = 0;
/* eeb6dd: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb6df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeb6e0: jne 0xeeb6f7 */
  if (!zf) goto L_eeb6f7;
L_eeb6e2: /* eeb6e2: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* eeb6e4: push 0xf06408 */
  { uint32_t v = 0xf06408u; esp -= 4; W32(esp, v); }
/* eeb6e9: push 0xf06418 */
  { uint32_t v = 0xf06418u; esp -= 4; W32(esp, v); }
/* eeb6ee: call dword ptr [0xf0dba4] */
  esp -= 4; W32(esp, 0xeeb6f4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* eeb6f4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_eeb6f7: /* eeb6f7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* eeb6fb: mov ebp, dword ptr [0xf0dc60] */
  ebp = R32((uint32_t)(0xf0dc60u));
/* eeb701: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* eeb703: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* eeb707: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* eeb70a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_eeb710: /* eeb710: mov ecx, dword ptr [0xf0dbc0] */
  ecx = R32((uint32_t)(0xf0dbc0u));
/* eeb716: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eeb718: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* eeb71a: call dword ptr [0xf0dbbc] */
  esp -= 4; W32(esp, 0xeeb720u); SPILL(); f_4e1f41(); if (g_unwind) return; /* Core!?Lock@FCriticalSection@@QAEXXZ */ RELOAD();
/* eeb720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeb721: call 0xeebbd6 */
  esp -= 4; W32(esp, 0xeeb726u); SPILL(); f_eebbd6(); if (g_unwind) return; RELOAD();
/* eeb726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb728: jne 0xeeb7bf */
  if (!zf) goto L_eeb7bf;
L_eeb72e: /* eeb72e: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeeb733u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* eeb733: cmp eax, 0x2af9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2af9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb738: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* eeb73c: je 0xeeb769 */
  if (zf) goto L_eeb769;
L_eeb73e: /* eeb73e: cmp eax, 0x2afc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2afcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb743: je 0xeeb769 */
  if (zf) goto L_eeb769;
L_eeb745: /* eeb745: mov edx, dword ptr [0xf0dbc0] */
  edx = R32((uint32_t)(0xf0dbc0u));
/* eeb74b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* eeb74d: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* eeb74f: call dword ptr [0xf0dbb0] */
  esp -= 4; W32(esp, 0xeeb755u); SPILL(); f_4e1848(); if (g_unwind) return; /* Core!?Unlock@FCriticalSection@@QAEXXZ */ RELOAD();
/* eeb755: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* eeb75a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xeeb75cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb75c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb75f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* eeb760: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eeb763: jl 0xeeb710 */
  if ((sf != of)) goto L_eeb710;
L_eeb765: /* eeb765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_eeb769: /* eeb769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb76a: call 0xed17b7 */
  esp -= 4; W32(esp, 0xeeb76fu); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* eeb76f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb773: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eeb775: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeb776: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xeeb77cu); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* eeb77c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* eeb780: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeb783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb784: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeb78a: push 0xf06434 */
  { uint32_t v = 0xf06434u; esp -= 4; W32(esp, v); }
/* eeb78f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeb790: call dword ptr [0xf0d950] */
  esp -= 4; W32(esp, 0xeeb796u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* eeb796: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_eeb799: /* eeb799: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* eeb79d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eeb79e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eeb79f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eeb7a0: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eeb7a2: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* eeb7a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eeb7aa: je 0xeeb7b9 */
  if (zf) goto L_eeb7b9;
L_eeb7ac: /* eeb7ac: mov eax, dword ptr [0xf0dbc0] */
  eax = R32((uint32_t)(0xf0dbc0u));
/* eeb7b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb7b3: call dword ptr [0xf0dbb0] */
  esp -= 4; W32(esp, 0xeeb7b9u); SPILL(); f_4e1848(); if (g_unwind) return; /* Core!?Unlock@FCriticalSection@@QAEXXZ */ RELOAD();
L_eeb7b9: /* eeb7b9: xor eax, eax */
  eax = 0;
/* eeb7bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeb7bc: ret 4 */
  esp += 8; SPILL(); return;
L_eeb7bf: /* eeb7bf: cmp word ptr [eax + 8], 2 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x8u))); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* eeb7c4: jne 0xeeb765 */
  if (!zf) goto L_eeb765;
L_eeb7c6: /* eeb7c6: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* eeb7c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb7cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eeb7cd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* eeb7d1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* eeb7d3: jmp 0xeeb799 */
  goto L_eeb799;
}

void f_eeb830(void) {
  LOAD_REGS();
L_eeb830: /* eeb830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eeb831: mov ebp, esp */
  ebp = esp;
/* eeb833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eeb835: push 0xeef689 */
  { uint32_t v = 0xeef689u; esp -= 4; W32(esp, v); }
/* eeb83a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eeb840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eeb848: sub esp, 0x3ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eeb84e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eeb84f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eeb850: mov esi, dword ptr [0xf0dadc] */
  esi = R32((uint32_t)(0xf0dadcu));
/* eeb856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eeb857: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eeb85a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb85c: push 0xf06464 */
  { uint32_t v = 0xf06464u; esp -= 4; W32(esp, v); }
/* eeb861: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb864: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eeb86b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb86du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb86d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb86f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb871: push 0xf06478 */
  { uint32_t v = 0xf06478u; esp -= 4; W32(esp, v); }
/* eeb876: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb879: mov dword ptr [0xf07d58], eax */
  W32((uint32_t)(0xf07d58u), eax);
/* eeb87e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb880: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb882: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb884: mov dword ptr [0xf07d24], ecx */
  W32((uint32_t)(0xf07d24u), ecx);
/* eeb88a: push 0xf06494 */
  { uint32_t v = 0xf06494u; esp -= 4; W32(esp, v); }
/* eeb88f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb892: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb894u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb894: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* eeb896: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb898: push 0xf064b0 */
  { uint32_t v = 0xf064b0u; esp -= 4; W32(esp, v); }
/* eeb89d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb8a0: mov dword ptr [0xf07d34], edx */
  W32((uint32_t)(0xf07d34u), edx);
/* eeb8a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb8a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb8a8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb8aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb8ac: push 0xf064cc */
  { uint32_t v = 0xf064ccu; esp -= 4; W32(esp, v); }
/* eeb8b1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb8b4: mov dword ptr [0xf07d78], eax */
  W32((uint32_t)(0xf07d78u), eax);
/* eeb8b9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb8bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb8bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb8bd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb8bf: mov dword ptr [0xf07d40], ecx */
  W32((uint32_t)(0xf07d40u), ecx);
/* eeb8c5: push 0xf064ec */
  { uint32_t v = 0xf064ecu; esp -= 4; W32(esp, v); }
/* eeb8ca: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb8cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb8cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb8cf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* eeb8d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb8d3: push 0xf06500 */
  { uint32_t v = 0xf06500u; esp -= 4; W32(esp, v); }
/* eeb8d8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb8db: mov dword ptr [0xf07d94], edx */
  W32((uint32_t)(0xf07d94u), edx);
/* eeb8e1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb8e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb8e3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb8e5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb8e7: push 0xf06510 */
  { uint32_t v = 0xf06510u; esp -= 4; W32(esp, v); }
/* eeb8ec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb8ef: mov dword ptr [0xf07d48], eax */
  W32((uint32_t)(0xf07d48u), eax);
/* eeb8f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb8f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb8f6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb8f8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb8fa: mov dword ptr [0xf07d70], ecx */
  W32((uint32_t)(0xf07d70u), ecx);
/* eeb900: push 0xf06520 */
  { uint32_t v = 0xf06520u; esp -= 4; W32(esp, v); }
/* eeb905: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb908: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb90au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb90a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* eeb90c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb90e: push 0xf06540 */
  { uint32_t v = 0xf06540u; esp -= 4; W32(esp, v); }
/* eeb913: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb916: mov dword ptr [0xf07d68], edx */
  W32((uint32_t)(0xf07d68u), edx);
/* eeb91c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb91e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb920: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb922: push 0xf06564 */
  { uint32_t v = 0xf06564u; esp -= 4; W32(esp, v); }
/* eeb927: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb92a: mov dword ptr [0xf07d54], eax */
  W32((uint32_t)(0xf07d54u), eax);
/* eeb92f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb931u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb931: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb933: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb935: mov dword ptr [0xf07d28], ecx */
  W32((uint32_t)(0xf07d28u), ecx);
/* eeb93b: push 0xf06574 */
  { uint32_t v = 0xf06574u; esp -= 4; W32(esp, v); }
/* eeb940: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb943: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb945u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb945: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* eeb947: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb949: mov dword ptr [0xf07d38], edx */
  W32((uint32_t)(0xf07d38u), edx);
/* eeb94f: push 0xf0658c */
  { uint32_t v = 0xf0658cu; esp -= 4; W32(esp, v); }
/* eeb954: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb957: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb959: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb95b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb95d: push 0xf065b4 */
  { uint32_t v = 0xf065b4u; esp -= 4; W32(esp, v); }
/* eeb962: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb965: mov dword ptr [0xf07d88], eax */
  W32((uint32_t)(0xf07d88u), eax);
/* eeb96a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb96cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb96c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb96e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb970: mov dword ptr [0xf07d4c], ecx */
  W32((uint32_t)(0xf07d4cu), ecx);
/* eeb976: push 0xf065d0 */
  { uint32_t v = 0xf065d0u; esp -= 4; W32(esp, v); }
/* eeb97b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb97e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb980: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* eeb982: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb984: push 0xf065f0 */
  { uint32_t v = 0xf065f0u; esp -= 4; W32(esp, v); }
/* eeb989: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb98c: mov dword ptr [0xf07d90], edx */
  W32((uint32_t)(0xf07d90u), edx);
/* eeb992: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb994u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb994: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eeb996: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* eeb998: push 0xf06614 */
  { uint32_t v = 0xf06614u; esp -= 4; W32(esp, v); }
/* eeb99d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* eeb9a0: mov dword ptr [0xf07d2c], eax */
  W32((uint32_t)(0xf07d2cu), eax);
/* eeb9a5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xeeb9a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eeb9a7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eeb9a9: mov edx, dword ptr [0xf0dbc0] */
  edx = R32((uint32_t)(0xf0dbc0u));
/* eeb9af: mov dword ptr [0xf07d80], ecx */
  W32((uint32_t)(0xf07d80u), ecx);
/* eeb9b5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eeb9b8: jne 0xeeb9cf */
  if (!zf) goto L_eeb9cf;
L_eeb9ba: /* eeb9ba: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* eeb9bc: push 0xf0663c */
  { uint32_t v = 0xf0663cu; esp -= 4; W32(esp, v); }
/* eeb9c1: push 0xf0664c */
  { uint32_t v = 0xf0664cu; esp -= 4; W32(esp, v); }
/* eeb9c6: call dword ptr [0xf0dba4] */
  esp -= 4; W32(esp, 0xeeb9ccu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* eeb9cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_eeb9cf: /* eeb9cf: mov eax, dword ptr [0xf0c27c] */
  eax = R32((uint32_t)(0xf0c27cu));
/* eeb9d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb9d6: jne 0xeebaa0 */
  if (!zf) goto L_eebaa0;
L_eeb9dc: /* eeb9dc: lea eax, [ebp - 0x1b8] */
  eax = (uint32_t)(ebp + 0xfffffe48u);
/* eeb9e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeb9e3: mov ebx, 1 */
  ebx = 0x1u;
/* eeb9e8: push 0x101 */
  { uint32_t v = 0x101u; esp -= 4; W32(esp, v); }
/* eeb9ed: mov dword ptr [0xf0c27c], ebx */
  W32((uint32_t)(0xf0c27cu), ebx);
/* eeb9f3: call 0xeebc36 */
  esp -= 4; W32(esp, 0xeeb9f8u); SPILL(); f_eebc36(); if (g_unwind) return; RELOAD();
/* eeb9f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeb9fa: jne 0xeeba51 */
  if (!zf) goto L_eeba51;
L_eeb9fc: /* eeb9fc: movzx edx, word ptr [ebp - 0x30] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd0u)));
/* eeba00: movzx eax, word ptr [ebp - 0x1b6] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffe4au)));
/* eeba07: movzx ecx, word ptr [ebp - 0x1b8] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffe48u)));
/* eeba0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeba0f: movzx edx, word ptr [ebp - 0x32] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffceu)));
/* eeba13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeba14: mov edx, eax */
  edx = eax;
/* eeba16: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* eeba1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeba1d: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* eeba20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba21: mov eax, ecx */
  eax = ecx;
/* eeba23: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eeba28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba29: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* eeba2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeba2d: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* eeba33: push 0xf06668 */
  { uint32_t v = 0xf06668u; esp -= 4; W32(esp, v); }
/* eeba38: mov dword ptr [0xf0a330], ebx */
  W32((uint32_t)(0xf0a330u), ebx);
/* eeba3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eeba40: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* eeba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeba46: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xeeba4cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* eeba4c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeba4f: jmp 0xeebaa0 */
  goto L_eebaa0;
L_eeba51: /* eeba51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba52: call 0xed17b7 */
  esp -= 4; W32(esp, 0xeeba57u); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* eeba57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba58: lea eax, [ebp - 0x3b8] */
  eax = (uint32_t)(ebp + 0xfffffc48u);
/* eeba5e: push 0xf066d8 */
  { uint32_t v = 0xf066d8u; esp -= 4; W32(esp, v); }
/* eeba63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba64: call dword ptr [0xf0d950] */
  esp -= 4; W32(esp, 0xeeba6au); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* eeba6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeba6d: lea ecx, [ebp - 0x3b8] */
  ecx = (uint32_t)(ebp + 0xfffffc48u);
/* eeba73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eeba74: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* eeba77: push 0xf06708 */
  { uint32_t v = 0xf06708u; esp -= 4; W32(esp, v); }
/* eeba7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eeba7d: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xeeba83u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* eeba83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eeba86: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eeba89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeba8a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* eeba8d: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xeeba93u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eeba93: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eeba96: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eeba9a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeebaa0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_eebaa0: /* eebaa0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eebaa3: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* eebaa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eebaa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eebaaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eebab1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eebab2: mov esp, ebp */
  esp = ebp;
/* eebab4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eebab5: ret  */
  esp += 4; SPILL(); return;
}

void f_eebab6(void) {
  LOAD_REGS();
L_eebab6: /* eebab6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eebab9: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eebabe: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eebac1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eebac2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eebac5: call 0xeec520 */
  esp -= 4; W32(esp, 0xeebacau); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eebaca(); return;
}

void f_eebaca(void) {
  LOAD_REGS();
L_eebaca: /* eebaca: push 0xef742c */
  { uint32_t v = 0xef742cu; esp -= 4; W32(esp, v); }
/* eebacf: push 0xf06710 */
  { uint32_t v = 0xf06710u; esp -= 4; W32(esp, v); }
/* eebad4: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeebadau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eebada: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eebadd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eebadf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eebae1: call 0xeec520 */
  esp -= 4; W32(esp, 0xeebae6u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eebae6: guest_badaddr(0xeebae6); return;
}

void f_eebba0(void) {
  LOAD_REGS();
L_eebba0: /* eebba0: jmp dword ptr [0xf0e1dc] */
  SPILL(); call_ind(R32(0xf0e1dcu)); return; /* WSOCK32!WSAGetLastError */
}

void f_eebba6(void) {
  LOAD_REGS();
L_eebba6: /* eebba6: jmp dword ptr [0xf0e1d8] */
  SPILL(); call_ind(R32(0xf0e1d8u)); return; /* WSOCK32!recv */
}

void f_eebbac(void) {
  LOAD_REGS();
L_eebbac: /* eebbac: jmp dword ptr [0xf0e1d4] */
  SPILL(); call_ind(R32(0xf0e1d4u)); return; /* WSOCK32!closesocket */
}

void f_eebbb2(void) {
  LOAD_REGS();
L_eebbb2: /* eebbb2: jmp dword ptr [0xf0e1d0] */
  SPILL(); call_ind(R32(0xf0e1d0u)); return; /* WSOCK32!ntohl */
}

void f_eebbb8(void) {
  LOAD_REGS();
L_eebbb8: /* eebbb8: jmp dword ptr [0xf0e1cc] */
  SPILL(); call_ind(R32(0xf0e1ccu)); return; /* WSOCK32!inet_addr */
}

void f_eebbbe(void) {
  LOAD_REGS();
L_eebbbe: /* eebbbe: jmp dword ptr [0xf0e1c8] */
  SPILL(); call_ind(R32(0xf0e1c8u)); return; /* WSOCK32!ntohs */
}

void f_eebbc4(void) {
  LOAD_REGS();
L_eebbc4: /* eebbc4: jmp dword ptr [0xf0e1c4] */
  SPILL(); call_ind(R32(0xf0e1c4u)); return; /* WSOCK32!getsockname */
}

void f_eebbca(void) {
  LOAD_REGS();
L_eebbca: /* eebbca: jmp dword ptr [0xf0e1c0] */
  SPILL(); call_ind(R32(0xf0e1c0u)); return; /* WSOCK32!htons */
}

void f_eebbd0(void) {
  LOAD_REGS();
L_eebbd0: /* eebbd0: jmp dword ptr [0xf0e1bc] */
  SPILL(); call_ind(R32(0xf0e1bcu)); return; /* WSOCK32!bind */
}

void f_eebbd6(void) {
  LOAD_REGS();
L_eebbd6: /* eebbd6: jmp dword ptr [0xf0e1b8] */
  SPILL(); call_ind(R32(0xf0e1b8u)); return; /* WSOCK32!gethostbyname */
}

void f_eebbdc(void) {
  LOAD_REGS();
L_eebbdc: /* eebbdc: jmp dword ptr [0xf0e1b4] */
  SPILL(); call_ind(R32(0xf0e1b4u)); return; /* WSOCK32!gethostname */
}

void f_eebbe2(void) {
  LOAD_REGS();
L_eebbe2: /* eebbe2: jmp dword ptr [0xf0e1b0] */
  SPILL(); call_ind(R32(0xf0e1b0u)); return; /* WSOCK32!send */
}

void f_eebbe8(void) {
  LOAD_REGS();
L_eebbe8: /* eebbe8: jmp dword ptr [0xf0e1ac] */
  SPILL(); call_ind(R32(0xf0e1acu)); return; /* WSOCK32!select */
}

void f_eebbee(void) {
  LOAD_REGS();
L_eebbee: /* eebbee: jmp dword ptr [0xf0e1a8] */
  SPILL(); call_ind(R32(0xf0e1a8u)); return; /* WSOCK32!connect */
}

void f_eebbf4(void) {
  LOAD_REGS();
L_eebbf4: /* eebbf4: jmp dword ptr [0xf0e1a4] */
  SPILL(); call_ind(R32(0xf0e1a4u)); return; /* WSOCK32!socket */
}

void f_eebbfa(void) {
  LOAD_REGS();
L_eebbfa: /* eebbfa: jmp dword ptr [0xf0e1a0] */
  SPILL(); call_ind(R32(0xf0e1a0u)); return; /* WSOCK32!accept */
}

void f_eebc00(void) {
  LOAD_REGS();
L_eebc00: /* eebc00: jmp dword ptr [0xf0e19c] */
  SPILL(); call_ind(R32(0xf0e19cu)); return; /* WSOCK32!sendto */
}

void f_eebc06(void) {
  LOAD_REGS();
L_eebc06: /* eebc06: jmp dword ptr [0xf0e198] */
  SPILL(); call_ind(R32(0xf0e198u)); return; /* WSOCK32!recvfrom */
}

void f_eebc0c(void) {
  LOAD_REGS();
L_eebc0c: /* eebc0c: jmp dword ptr [0xf0e194] */
  SPILL(); call_ind(R32(0xf0e194u)); return; /* WSOCK32!htonl */
}

void f_eebc12(void) {
  LOAD_REGS();
L_eebc12: /* eebc12: jmp dword ptr [0xf0e190] */
  SPILL(); call_ind(R32(0xf0e190u)); return; /* WSOCK32!listen */
}

void f_eebc18(void) {
  LOAD_REGS();
L_eebc18: /* eebc18: jmp dword ptr [0xf0e18c] */
  SPILL(); call_ind(R32(0xf0e18cu)); return; /* WSOCK32!__WSAFDIsSet */
}

void f_eebc1e(void) {
  LOAD_REGS();
L_eebc1e: /* eebc1e: jmp dword ptr [0xf0e188] */
  SPILL(); call_ind(R32(0xf0e188u)); return; /* WSOCK32!shutdown */
}

void f_eebc24(void) {
  LOAD_REGS();
L_eebc24: /* eebc24: jmp dword ptr [0xf0e184] */
  SPILL(); call_ind(R32(0xf0e184u)); return; /* WSOCK32!setsockopt */
}

void f_eebc2a(void) {
  LOAD_REGS();
L_eebc2a: /* eebc2a: jmp dword ptr [0xf0e180] */
  SPILL(); call_ind(R32(0xf0e180u)); return; /* WSOCK32!ioctlsocket */
}

void f_eebc30(void) {
  LOAD_REGS();
L_eebc30: /* eebc30: jmp dword ptr [0xf0e17c] */
  SPILL(); call_ind(R32(0xf0e17cu)); return; /* WSOCK32!getsockopt */
}

void f_eebc36(void) {
  LOAD_REGS();
L_eebc36: /* eebc36: jmp dword ptr [0xf0e178] */
  SPILL(); call_ind(R32(0xf0e178u)); return; /* WSOCK32!WSAStartup */
}

void f_eebc3c(void) {
  LOAD_REGS();
L_eebc3c: /* eebc3c: jmp dword ptr [0xf0d9b4] */
  SPILL(); f_4e2b6c(); return; /* Core!?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eebc42(void) {
  LOAD_REGS();
L_eebc42: /* eebc42: jmp dword ptr [0xf0d9b8] */
  SPILL(); f_4e23ab(); return; /* Core!?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
}

void f_eebc48(void) {
  LOAD_REGS();
L_eebc48: /* eebc48: jmp dword ptr [0xf0d9bc] */
  SPILL(); f_4e17ad(); return; /* Core!?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
}

void f_eebc4e(void) {
  LOAD_REGS();
L_eebc4e: /* eebc4e: jmp dword ptr [0xf0d9c0] */
  SPILL(); f_4e1802(); return; /* Core!?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eebc54(void) {
  LOAD_REGS();
L_eebc54: /* eebc54: jmp dword ptr [0xf0d9c4] */
  SPILL(); f_4e20f9(); return; /* Core!?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eebc5a(void) {
  LOAD_REGS();
L_eebc5a: /* eebc5a: jmp dword ptr [0xf0d9c8] */
  SPILL(); f_4e20cc(); return; /* Core!?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eebc60(void) {
  LOAD_REGS();
L_eebc60: /* eebc60: jmp dword ptr [0xf0d9cc] */
  SPILL(); f_4e3a35(); return; /* Core!?Identical@UBoolProperty@@UBEHPBX0@Z */
}

void f_eebc66(void) {
  LOAD_REGS();
L_eebc66: /* eebc66: jmp dword ptr [0xf0d9d0] */
  SPILL(); f_4e40cf(); return; /* Core!?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eebc6c(void) {
  LOAD_REGS();
L_eebc6c: /* eebc6c: jmp dword ptr [0xf0d9d4] */
  SPILL(); f_4e1e51(); return; /* Core!?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
}

void f_eebc72(void) {
  LOAD_REGS();
L_eebc72: /* eebc72: jmp dword ptr [0xf0d9d8] */
  SPILL(); f_4e2fa4(); return; /* Core!?DestroyValue@UProperty@@UBEXPAX@Z */
}

void f_eebc78(void) {
  LOAD_REGS();
L_eebc78: /* eebc78: jmp dword ptr [0xf0d9dc] */
  SPILL(); f_4e3ff3(); return; /* Core!?CopyCompleteValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eebc7e(void) {
  LOAD_REGS();
L_eebc7e: /* eebc7e: jmp dword ptr [0xf0d9e0] */
  SPILL(); f_4e2365(); return; /* Core!?CopySingleValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eebc84(void) {
  LOAD_REGS();
L_eebc84: /* eebc84: jmp dword ptr [0xf0d9e4] */
  SPILL(); f_4e1140(); return; /* Core!?ImportText@UIntProperty@@UBEPBGPBGPAEH@Z */
}

void f_eebc8a(void) {
  LOAD_REGS();
L_eebc8a: /* eebc8a: jmp dword ptr [0xf0d9e8] */
  SPILL(); f_4e35f8(); return; /* Core!?ExportTextItem@UIntProperty@@UBEXPAGPAE1H@Z */
}

void f_eebc90(void) {
  LOAD_REGS();
L_eebc90: /* eebc90: jmp dword ptr [0xf0d9ec] */
  SPILL(); f_4e23d3(); return; /* Core!?NetSerializeItem@UIntProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eebc96(void) {
  LOAD_REGS();
L_eebc96: /* eebc96: jmp dword ptr [0xf0d9f0] */
  SPILL(); f_4e31bb(); return; /* Core!?SerializeItem@UIntProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eebc9c(void) {
  LOAD_REGS();
L_eebc9c: /* eebc9c: jmp dword ptr [0xf0d9f4] */
  SPILL(); f_4e439a(); return; /* Core!?ExportCppItem@UIntProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eebca2(void) {
  LOAD_REGS();
L_eebca2: /* eebca2: jmp dword ptr [0xf0d9f8] */
  SPILL(); f_4e118b(); return; /* Core!?Identical@UIntProperty@@UBEHPBX0@Z */
}

void f_eebca8(void) {
  LOAD_REGS();
L_eebca8: /* eebca8: jmp dword ptr [0xf0d9fc] */
  SPILL(); f_4e3279(); return; /* Core!?Link@UIntProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eebcae(void) {
  LOAD_REGS();
L_eebcae: /* eebcae: jmp dword ptr [0xf0da00] */
  SPILL(); f_4e12fd(); return; /* Core!?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
}

void f_eebcb4(void) {
  LOAD_REGS();
L_eebcb4: /* eebcb4: jmp dword ptr [0xf0da04] */
  SPILL(); f_4e3508(); return; /* Core!?GetID@UProperty@@UBEEXZ */
}

void f_eebcba(void) {
  LOAD_REGS();
L_eebcba: /* eebcba: jmp dword ptr [0xf0da08] */
  SPILL(); f_4e1e1f(); return; /* Core!?Port@UProperty@@UBEHXZ */
}

void f_eebcc0(void) {
  LOAD_REGS();
L_eebcc0: /* eebcc0: jmp dword ptr [0xf0da0c] */
  SPILL(); f_4e3b70(); return; /* Core!?DestroyValue@UStrProperty@@UBEXPAX@Z */
}

void f_eebcc6(void) {
  LOAD_REGS();
L_eebcc6: /* eebcc6: jmp dword ptr [0xf0da10] */
  SPILL(); f_4e445d(); return; /* Core!?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eebccc(void) {
  LOAD_REGS();
L_eebccc: /* eebccc: jmp dword ptr [0xf0da14] */
  SPILL(); f_4e3d28(); return; /* Core!?CopySingleValue@UStrProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eebcd2(void) {
  LOAD_REGS();
L_eebcd2: /* eebcd2: jmp dword ptr [0xf0da18] */
  SPILL(); f_4e1e88(); return; /* Core!?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
}

void f_eebcd8(void) {
  LOAD_REGS();
L_eebcd8: /* eebcd8: jmp dword ptr [0xf0da1c] */
  SPILL(); f_4e2bdf(); return; /* Core!?ImportText@UStrProperty@@UBEPBGPBGPAEH@Z */
}

void f_eebcde(void) {
  LOAD_REGS();
L_eebcde: /* eebcde: jmp dword ptr [0xf0da20] */
  SPILL(); f_4e2685(); return; /* Core!?ExportTextItem@UStrProperty@@UBEXPAGPAE1H@Z */
}

void f_eebce4(void) {
  LOAD_REGS();
L_eebce4: /* eebce4: jmp dword ptr [0xf0da24] */
  SPILL(); f_4e106e(); return; /* Core!?NetSerializeItem@UProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eebcea(void) {
  LOAD_REGS();
L_eebcea: /* eebcea: jmp dword ptr [0xf0da28] */
  SPILL(); f_4e3f0d(); return; /* Core!?SerializeItem@UStrProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eebcf0(void) {
  LOAD_REGS();
L_eebcf0: /* eebcf0: jmp dword ptr [0xf0da2c] */
  SPILL(); f_4e139d(); return; /* Core!?ExportCppItem@UStrProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eebcf6(void) {
  LOAD_REGS();
L_eebcf6: /* eebcf6: jmp dword ptr [0xf0da30] */
  SPILL(); f_4e269e(); return; /* Core!?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
}

void f_eebcfc(void) {
  LOAD_REGS();
L_eebcfc: /* eebcfc: jmp dword ptr [0xf0da34] */
  SPILL(); f_4e266c(); return; /* Core!?Identical@UStrProperty@@UBEHPBX0@Z */
}

void f_eebd02(void) {
  LOAD_REGS();
L_eebd02: /* eebd02: jmp dword ptr [0xf0da38] */
  SPILL(); f_4e110e(); return; /* Core!?Link@UStrProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eebd08(void) {
  LOAD_REGS();
L_eebd08: /* eebd08: jmp dword ptr [0xf0da3c] */
  SPILL(); f_4e34e5(); return; /* Core!?CleanupDestroyed@UProperty@@UBEXPAE@Z */
}

void f_eebd0e(void) {
  LOAD_REGS();
L_eebd0e: /* eebd0e: jmp dword ptr [0xf0da40] */
  SPILL(); f_4e1023(); return; /* Core!?GetPropertiesSize@UField@@UAEHXZ */
}

void f_eebd14(void) {
  LOAD_REGS();
L_eebd14: /* eebd14: jmp dword ptr [0xf0da44] */
  SPILL(); f_4e1901(); return; /* Core!?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
}

void f_eebd1a(void) {
  LOAD_REGS();
L_eebd1a: /* eebd1a: jmp dword ptr [0xf0da48] */
  SPILL(); f_4e2342(); return; /* Core!?Bind@UField@@UAEXXZ */
}

void f_eebd20(void) {
  LOAD_REGS();
L_eebd20: /* eebd20: jmp dword ptr [0xf0da4c] */
  SPILL(); f_4e1ee7(); return; /* Core!?MergeBools@UField@@UAEHXZ */
}

void f_eebd26(void) {
  LOAD_REGS();
L_eebd26: /* eebd26: jmp dword ptr [0xf0da50] */
  SPILL(); f_4e36f7(); return; /* Core!?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
}

void f_eebd2c(void) {
  LOAD_REGS();
L_eebd2c: /* eebd2c: jmp dword ptr [0xf0da54] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_eebd32(void) {
  LOAD_REGS();
L_eebd32: /* eebd32: jmp dword ptr [0xf0da58] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_eebd38(void) {
  LOAD_REGS();
L_eebd38: /* eebd38: jmp dword ptr [0xf0da5c] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_eebd3e(void) {
  LOAD_REGS();
L_eebd3e: /* eebd3e: jmp dword ptr [0xf0da60] */
  SPILL(); f_4e15f0(); return; /* Core!?Register@UField@@UAEXXZ */
}

void f_eebd44(void) {
  LOAD_REGS();
L_eebd44: /* eebd44: jmp dword ptr [0xf0da64] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_eebd4a(void) {
  LOAD_REGS();
L_eebd4a: /* eebd4a: jmp dword ptr [0xf0da68] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_eebd50(void) {
  LOAD_REGS();
L_eebd50: /* eebd50: jmp dword ptr [0xf0da6c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_eebd56(void) {
  LOAD_REGS();
L_eebd56: /* eebd56: jmp dword ptr [0xf0da70] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_eebd5c(void) {
  LOAD_REGS();
L_eebd5c: /* eebd5c: jmp dword ptr [0xf0da74] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_eebd62(void) {
  LOAD_REGS();
L_eebd62: /* eebd62: jmp dword ptr [0xf0da78] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_eebd68(void) {
  LOAD_REGS();
L_eebd68: /* eebd68: jmp dword ptr [0xf0da7c] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_eebd6e(void) {
  LOAD_REGS();
L_eebd6e: /* eebd6e: jmp dword ptr [0xf0da80] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_eebd74(void) {
  LOAD_REGS();
L_eebd74: /* eebd74: jmp dword ptr [0xf0da84] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_eebd7a(void) {
  LOAD_REGS();
L_eebd7a: /* eebd7a: jmp dword ptr [0xf0da88] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_eebd80(void) {
  LOAD_REGS();
L_eebd80: /* eebd80: jmp dword ptr [0xf0da8c] */
  SPILL(); f_4e2923(); return; /* Core!?Serialize@UStrProperty@@UAEXAAVFArchive@@@Z */
}

void f_eebd86(void) {
  LOAD_REGS();
L_eebd86: /* eebd86: jmp dword ptr [0xf0da90] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_eebd8c(void) {
  LOAD_REGS();
L_eebd8c: /* eebd8c: jmp dword ptr [0xf0da94] */
  SPILL(); f_4e3652(); return; /* Core!?PostLoad@UField@@UAEXXZ */
}

void f_eebd92(void) {
  LOAD_REGS();
L_eebd92: /* eebd92: jmp dword ptr [0xf0da98] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_eebd98(void) {
  LOAD_REGS();
L_eebd98: /* eebd98: jmp dword ptr [0xf0da9c] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_eebd9e(void) {
  LOAD_REGS();
L_eebd9e: /* eebd9e: jmp dword ptr [0xf0daa0] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_eebda4(void) {
  LOAD_REGS();
L_eebda4: /* eebda4: jmp dword ptr [0xf0daa4] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_eebdaa(void) {
  LOAD_REGS();
L_eebdaa: /* eebdaa: jmp dword ptr [0xf0daa8] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_eebdb0(void) {
  LOAD_REGS();
L_eebdb0: /* eebdb0: jmp dword ptr [0xf0daac] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_eebdb6(void) {
  LOAD_REGS();
L_eebdb6: /* eebdb6: jmp dword ptr [0xf0dab0] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_eebdbc(void) {
  LOAD_REGS();
L_eebdbc: /* eebdbc: jmp dword ptr [0xf0dab4] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_eebdc2(void) {
  LOAD_REGS();
L_eebdc2: /* eebdc2: jmp dword ptr [0xf0dab8] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_eebdc8(void) {
  LOAD_REGS();
L_eebdc8: /* eebdc8: jmp dword ptr [0xf0dabc] */
  SPILL(); f_4e4278(); return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_eebdce(void) {
  LOAD_REGS();
L_eebdce: /* eebdce: jmp dword ptr [0xf0dac4] */
  SPILL(); f_4e29d7(); return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_eebdd4(void) {
  LOAD_REGS();
L_eebdd4: /* eebdd4: jmp dword ptr [0xf0dacc] */
  SPILL(); f_4e44c1(); return; /* Core!??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_eebdda(void) {
  LOAD_REGS();
L_eebdda: /* eebdda: jmp dword ptr [0xf0dad0] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_eebde0(void) {
  LOAD_REGS();
L_eebde0: /* eebde0: jmp dword ptr [0xf0dadc] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_eebde6(void) {
  LOAD_REGS();
L_eebde6: /* eebde6: jmp dword ptr [0xf0dae0] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_eebdec(void) {
  LOAD_REGS();
L_eebdec: /* eebdec: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eebdf2(void) {
  LOAD_REGS();
L_eebdf2: /* eebdf2: jmp dword ptr [0xf0dae8] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_eebdf8(void) {
  LOAD_REGS();
L_eebdf8: /* eebdf8: jmp dword ptr [0xf0daec] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_eebdfe(void) {
  LOAD_REGS();
L_eebdfe: /* eebdfe: jmp dword ptr [0xf0daf0] */
  SPILL(); f_4e17e4(); return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */
}

void f_eebe04(void) {
  LOAD_REGS();
L_eebe04: /* eebe04: jmp dword ptr [0xf0daf4] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_eebe0a(void) {
  LOAD_REGS();
L_eebe0a: /* eebe0a: jmp dword ptr [0xf0db00] */
  SPILL(); f_4e1613(); return; /* Core!?LocalizeError@@YAPBGPBG00@Z */
}

void f_eebe10(void) {
  LOAD_REGS();
L_eebe10: /* eebe10: jmp dword ptr [0xf0db04] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_eebe16(void) {
  LOAD_REGS();
L_eebe16: /* eebe16: jmp dword ptr [0xf0db0c] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_eebe1c(void) {
  LOAD_REGS();
L_eebe1c: /* eebe1c: jmp dword ptr [0xf0db14] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_eebe22(void) {
  LOAD_REGS();
L_eebe22: /* eebe22: jmp dword ptr [0xf0db18] */
  SPILL(); f_4e39d6(); return; /* Core!?String@FGuid@@QBEPAGXZ */
}

void f_eebe28(void) {
  LOAD_REGS();
L_eebe28: /* eebe28: jmp dword ptr [0xf0db1c] */
  SPILL(); f_4e33b4(); return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */
}

void f_eebe2e(void) {
  LOAD_REGS();
L_eebe2e: /* eebe2e: jmp dword ptr [0xf0db20] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_eebe34(void) {
  LOAD_REGS();
L_eebe34: /* eebe34: jmp dword ptr [0xf0db24] */
  SPILL(); f_4e2fd1(); return; /* Core!??1UIntProperty@@UAE@XZ */
}

void f_eebe3a(void) {
  LOAD_REGS();
L_eebe3a: /* eebe3a: jmp dword ptr [0xf0db28] */
  SPILL(); f_4e1988(); return; /* Core!??1UBoolProperty@@UAE@XZ */
}

void f_eebe40(void) {
  LOAD_REGS();
L_eebe40: /* eebe40: jmp dword ptr [0xf0db2c] */
  SPILL(); f_4e1712(); return; /* Core!??1UStrProperty@@UAE@XZ */
}

void f_eebe46(void) {
  LOAD_REGS();
L_eebe46: /* eebe46: jmp dword ptr [0xf0db30] */
  SPILL(); f_4e44b2(); return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */
}

void f_eebe4c(void) {
  LOAD_REGS();
L_eebe4c: /* eebe4c: jmp dword ptr [0xf0db34] */
  SPILL(); f_4e299b(); return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */
}

void f_eebe52(void) {
  LOAD_REGS();
L_eebe52: /* eebe52: jmp dword ptr [0xf0db38] */
  SPILL(); f_4e4165(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */
}

void f_eebe58(void) {
  LOAD_REGS();
L_eebe58: /* eebe58: jmp dword ptr [0xf0db3c] */
  SPILL(); f_4e3f4e(); return; /* Core!?GetError@FArchive@@UAEHXZ */
}

void f_eebe5e(void) {
  LOAD_REGS();
L_eebe5e: /* eebe5e: jmp dword ptr [0xf0db40] */
  SPILL(); f_4e1fb4(); return; /* Core!?Close@FArchive@@UAEHXZ */
}

void f_eebe64(void) {
  LOAD_REGS();
L_eebe64: /* eebe64: jmp dword ptr [0xf0db44] */
  SPILL(); f_4e23e7(); return; /* Core!?Flush@FArchive@@UAEXXZ */
}

void f_eebe6a(void) {
  LOAD_REGS();
L_eebe6a: /* eebe6a: jmp dword ptr [0xf0db48] */
  SPILL(); f_4e1e33(); return; /* Core!?Precache@FArchive@@UAEXH@Z */
}

void f_eebe70(void) {
  LOAD_REGS();
L_eebe70: /* eebe70: jmp dword ptr [0xf0db4c] */
  SPILL(); f_4e25db(); return; /* Core!?DetachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_eebe76(void) {
  LOAD_REGS();
L_eebe76: /* eebe76: jmp dword ptr [0xf0db50] */
  SPILL(); f_4e41d3(); return; /* Core!?AttachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_eebe7c(void) {
  LOAD_REGS();
L_eebe7c: /* eebe7c: jmp dword ptr [0xf0db54] */
  SPILL(); f_4e31b1(); return; /* Core!?Seek@FArchive@@UAEXH@Z */
}

void f_eebe82(void) {
  LOAD_REGS();
L_eebe82: /* eebe82: jmp dword ptr [0xf0db58] */
  SPILL(); f_4e2f04(); return; /* Core!?SetStopper@FArchive@@UAEXH@Z */
}

void f_eebe88(void) {
  LOAD_REGS();
L_eebe88: /* eebe88: jmp dword ptr [0xf0db5c] */
  SPILL(); f_4e2289(); return; /* Core!?AtStopper@FArchive@@UAEHXZ */
}

void f_eebe8e(void) {
  LOAD_REGS();
L_eebe8e: /* eebe8e: jmp dword ptr [0xf0db60] */
  SPILL(); f_4e1ab4(); return; /* Core!?AtEnd@FArchive@@UAEHXZ */
}

void f_eebe94(void) {
  LOAD_REGS();
L_eebe94: /* eebe94: jmp dword ptr [0xf0db64] */
  SPILL(); f_4e1cc6(); return; /* Core!?TotalSize@FArchive@@UAEHXZ */
}

void f_eebe9a(void) {
  LOAD_REGS();
L_eebe9a: /* eebe9a: jmp dword ptr [0xf0db68] */
  SPILL(); f_4e4151(); return; /* Core!?Tell@FArchive@@UAEHXZ */
}

void f_eebea0(void) {
  LOAD_REGS();
L_eebea0: /* eebea0: jmp dword ptr [0xf0db6c] */
  SPILL(); f_4e33b9(); return; /* Core!?MapObject@FArchive@@UAEHPAVUObject@@@Z */
}

void f_eebea6(void) {
  LOAD_REGS();
L_eebea6: /* eebea6: jmp dword ptr [0xf0db70] */
  SPILL(); f_4e13b1(); return; /* Core!?MapName@FArchive@@UAEHPAVFName@@@Z */
}

void f_eebeac(void) {
  LOAD_REGS();
L_eebeac: /* eebeac: jmp dword ptr [0xf0db74] */
  SPILL(); f_4e4539(); return; /* Core!??6FArchive@@UAEAAV0@AAVFName@@@Z */
}

void f_eebeb2(void) {
  LOAD_REGS();
L_eebeb2: /* eebeb2: jmp dword ptr [0xf0db78] */
  SPILL(); f_4e34b3(); return; /* Core!??6FArchive@@UAEAAV0@AAPAVUObject@@@Z */
}

void f_eebeb8(void) {
  LOAD_REGS();
L_eebeb8: /* eebeb8: jmp dword ptr [0xf0db7c] */
  SPILL(); f_4e10f0(); return; /* Core!?CountBytes@FArchive@@UAEXKK@Z */
}

void f_eebebe(void) {
  LOAD_REGS();
L_eebebe: /* eebebe: jmp dword ptr [0xf0db80] */
  SPILL(); f_4e1118(); return; /* Core!?Preload@FArchive@@UAEXPAVUObject@@@Z */
}

void f_eebec4(void) {
  LOAD_REGS();
L_eebec4: /* eebec4: jmp dword ptr [0xf0db84] */
  SPILL(); f_4e1f64(); return; /* Core!?SerializeInt@FArchive@@UAEXAAKK@Z */
}

void f_eebeca(void) {
  LOAD_REGS();
L_eebeca: /* eebeca: jmp dword ptr [0xf0db88] */
  SPILL(); f_4e409d(); return; /* Core!?SerializeBits@FArchive@@UAEXPAXH@Z */
}

void f_eebed0(void) {
  LOAD_REGS();
L_eebed0: /* eebed0: jmp dword ptr [0xf0db8c] */
  SPILL(); f_4e236f(); return; /* Core!?Serialize@FArchive@@UAEXPAXH@Z */
}

void f_eebed6(void) {
  LOAD_REGS();
L_eebed6: /* eebed6: jmp dword ptr [0xf0db90] */
  SPILL(); f_4e2306(); return; /* Core!??0FArchive@@QAE@XZ */
}

void f_eebedc(void) {
  LOAD_REGS();
L_eebedc: /* eebedc: jmp dword ptr [0xf0db98] */
  SPILL(); f_4e2973(); return; /* Core!??0FArchive@@QAE@ABV0@@Z */
}

void f_eebee2(void) {
  LOAD_REGS();
L_eebee2: /* eebee2: jmp dword ptr [0xf0db9c] */
  SPILL(); f_4e2b71(); return; /* Core!??4FArchive@@QAEAAV0@ABV0@@Z */
}

void f_eebee8(void) {
  LOAD_REGS();
L_eebee8: /* eebee8: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eebeee(void) {
  LOAD_REGS();
L_eebeee: /* eebeee: jmp dword ptr [0xf0dba4] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_eebef4(void) {
  LOAD_REGS();
L_eebef4: /* eebef4: jmp dword ptr [0xf0dba8] */
  SPILL(); f_4e19f1(); return; /* Core!?appStrlen@@YAHPBG@Z */
}

void f_eebefa(void) {
  LOAD_REGS();
L_eebefa: /* eebefa: jmp dword ptr [0xf0dbac] */
  SPILL(); f_4e161d(); return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */
}

void f_eebf00(void) {
  LOAD_REGS();
L_eebf00: /* eebf00: jmp dword ptr [0xf0dbb0] */
  SPILL(); f_4e1848(); return; /* Core!?Unlock@FCriticalSection@@QAEXXZ */
}

void f_eebf06(void) {
  LOAD_REGS();
L_eebf06: /* eebf06: jmp dword ptr [0xf0dbb4] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_eebf0c(void) {
  LOAD_REGS();
L_eebf0c: /* eebf0c: jmp dword ptr [0xf0dbb8] */
  SPILL(); f_4e3387(); return; /* Core!?ParseParam@@YAHPBG0@Z */
}

void f_eebf12(void) {
  LOAD_REGS();
L_eebf12: /* eebf12: jmp dword ptr [0xf0dbbc] */
  SPILL(); f_4e1f41(); return; /* Core!?Lock@FCriticalSection@@QAEXXZ */
}

void f_eebf18(void) {
  LOAD_REGS();
L_eebf18: /* eebf18: jmp dword ptr [0xf0dbc4] */
  SPILL(); f_4e3fe9(); return; /* Core!?appAtoi@@YAHPBG@Z */
}

void f_eebf1e(void) {
  LOAD_REGS();
L_eebf1e: /* eebf1e: jmp dword ptr [0xf0dbc8] */
  SPILL(); f_4e1abe(); return; /* Core!?appStrchr@@YAPAGPBGH@Z */
}

void f_eebf24(void) {
  LOAD_REGS();
L_eebf24: /* eebf24: jmp dword ptr [0xf0dbcc] */
  SPILL(); f_4e2e73(); return; /* Core!?Parse@@YAHPBG0PAGH@Z */
}

void f_eebf2a(void) {
  LOAD_REGS();
L_eebf2a: /* eebf2a: jmp dword ptr [0xf0dbd0] */
  SPILL(); f_4e2987(); return; /* Core!?appCmdLine@@YAPBGXZ */
}

void f_eebf30(void) {
  LOAD_REGS();
L_eebf30: /* eebf30: jmp dword ptr [0xf0dbd4] */
  SPILL(); f_4e27d9(); return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */
}

void f_eebf36(void) {
  LOAD_REGS();
L_eebf36: /* eebf36: jmp dword ptr [0xf0dbd8] */
  SPILL(); f_4e2aea(); return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */
}

void f_eebf3c(void) {
  LOAD_REGS();
L_eebf3c: /* eebf3c: jmp dword ptr [0xf0dbdc] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_eebf42(void) {
  LOAD_REGS();
L_eebf42: /* eebf42: jmp dword ptr [0xf0dbe0] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_eebf48(void) {
  LOAD_REGS();
L_eebf48: /* eebf48: jmp dword ptr [0xf0dbe4] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_eebf4e(void) {
  LOAD_REGS();
L_eebf4e: /* eebf4e: jmp dword ptr [0xf0dbe8] */
  SPILL(); f_4e3b7a(); return; /* Core!??0FStringNoInit@@QAE@XZ */
}

void f_eebf54(void) {
  LOAD_REGS();
L_eebf54: /* eebf54: jmp dword ptr [0xf0dbec] */
  SPILL(); f_4e3729(); return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */
}

void f_eebf5a(void) {
  LOAD_REGS();
L_eebf5a: /* eebf5a: jmp dword ptr [0xf0dbf0] */
  SPILL(); f_4e132f(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */
}

void f_eebf60(void) {
  LOAD_REGS();
L_eebf60: /* eebf60: jmp dword ptr [0xf0dbf4] */
  SPILL(); f_4e4160(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */
}

void f_eebf66(void) {
  LOAD_REGS();
L_eebf66: /* eebf66: jmp dword ptr [0xf0dbf8] */
  SPILL(); f_4e1451(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */
}

void f_eebf6c(void) {
  LOAD_REGS();
L_eebf6c: /* eebf6c: jmp dword ptr [0xf0dbfc] */
  SPILL(); f_4e40e8(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */
}

void f_eebf72(void) {
  LOAD_REGS();
L_eebf72: /* eebf72: jmp dword ptr [0xf0dc00] */
  SPILL(); f_4e2149(); return; /* Core!??HFString@@QAE?AV0@PBG@Z */
}

void f_eebf78(void) {
  LOAD_REGS();
L_eebf78: /* eebf78: jmp dword ptr [0xf0dc04] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_eebf7e(void) {
  LOAD_REGS();
L_eebf7e: /* eebf7e: jmp dword ptr [0xf0dc08] */
  SPILL(); f_4e414c(); return; /* Core!??8FString@@QBEHPBG@Z */
}

void f_eebf84(void) {
  LOAD_REGS();
L_eebf84: /* eebf84: jmp dword ptr [0xf0dc0c] */
  SPILL(); f_4e42f0(); return; /* Core!?Left@FString@@QBE?AV1@H@Z */
}

void f_eebf8a(void) {
  LOAD_REGS();
L_eebf8a: /* eebf8a: jmp dword ptr [0xf0dc10] */
  SPILL(); f_4e3c01(); return; /* Core!?Caps@FString@@QBE?AV1@XZ */
}

void f_eebf90(void) {
  LOAD_REGS();
L_eebf90: /* eebf90: jmp dword ptr [0xf0dc14] */
  SPILL(); f_4e3530(); return; /* Core!??9FString@@QBEHPBG@Z */
}

void f_eebf96(void) {
  LOAD_REGS();
L_eebf96: /* eebf96: jmp dword ptr [0xf0dc18] */
  SPILL(); f_4e2577(); return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */
}

void f_eebf9c(void) {
  LOAD_REGS();
L_eebf9c: /* eebf9c: jmp dword ptr [0xf0dc1c] */
  SPILL(); f_4e1055(); return; /* Core!?InStr@FString@@QBEHPBGH@Z */
}

void f_eebfa2(void) {
  LOAD_REGS();
L_eebfa2: /* eebfa2: jmp dword ptr [0xf0dc20] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_eebfa8(void) {
  LOAD_REGS();
L_eebfa8: /* eebfa8: jmp dword ptr [0xf0dc24] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_eebfae(void) {
  LOAD_REGS();
L_eebfae: /* eebfae: jmp dword ptr [0xf0dc28] */
  SPILL(); f_4e2f2c(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */
}

void f_eebfb4(void) {
  LOAD_REGS();
L_eebfb4: /* eebfb4: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eebfba(void) {
  LOAD_REGS();
L_eebfba: /* eebfba: jmp dword ptr [0xf0dc30] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_eebfc0(void) {
  LOAD_REGS();
L_eebfc0: /* eebfc0: jmp dword ptr [0xf0dc34] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_eebfc6(void) {
  LOAD_REGS();
L_eebfc6: /* eebfc6: jmp dword ptr [0xf0dc38] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_eebfcc(void) {
  LOAD_REGS();
L_eebfcc: /* eebfcc: jmp dword ptr [0xf0dc3c] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_eebfd2(void) {
  LOAD_REGS();
L_eebfd2: /* eebfd2: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_eebfd8(void) {
  LOAD_REGS();
L_eebfd8: /* eebfd8: jmp dword ptr [0xf0dc48] */
  SPILL(); f_4e27a2(); return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */
}

void f_eebfde(void) {
  LOAD_REGS();
L_eebfde: /* eebfde: jmp dword ptr [0xf0dc60] */
  SPILL(); f_4e3e22(); return; /* Core!?appSleep@@YAXM@Z */
}

void f_eebfe4(void) {
  LOAD_REGS();
L_eebfe4: /* eebfe4: jmp dword ptr [0xf0dc64] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_eebfea(void) {
  LOAD_REGS();
L_eebfea: /* eebfea: jmp dword ptr [0xf0dc68] */
  SPILL(); f_4e298c(); return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
}

void f_eebff0(void) {
  LOAD_REGS();
L_eebff0: /* eebff0: jmp dword ptr [0xf0dc6c] */
  SPILL(); f_4e3201(); return; /* Core!?appRequestExit@@YAXH@Z */
}

void f_eebff6(void) {
  LOAD_REGS();
L_eebff6: /* eebff6: jmp dword ptr [0xf0dc70] */
  SPILL(); f_4e31b6(); return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */
}

void f_eebffc(void) {
  LOAD_REGS();
L_eebffc: /* eebffc: jmp dword ptr [0xf0dc74] */
  SPILL(); f_4e3b84(); return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */
}

void f_eec002(void) {
  LOAD_REGS();
L_eec002: /* eec002: jmp dword ptr [0xf0dc78] */
  SPILL(); f_4e3b43(); return; /* Core!??8FString@@QBEHABV0@@Z */
}

void f_eec008(void) {
  LOAD_REGS();
L_eec008: /* eec008: jmp dword ptr [0xf0dc7c] */
  SPILL(); f_4e15aa(); return; /* Core!?appRound@@YAHM@Z */
}

void f_eec00e(void) {
  LOAD_REGS();
L_eec00e: /* eec00e: jmp dword ptr [0xf0d9b0] */
  SPILL(); f_4e4147(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */
}

void f_eec014(void) {
  LOAD_REGS();
L_eec014: /* eec014: jmp dword ptr [0xf0d9ac] */
  SPILL(); f_4e3e59(); return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */
}

void f_eec01a(void) {
  LOAD_REGS();
L_eec01a: /* eec01a: jmp dword ptr [0xf0d9a8] */
  SPILL(); f_4e4390(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */
}

void f_eec020(void) {
  LOAD_REGS();
L_eec020: /* eec020: jmp dword ptr [0xf0d9a4] */
  SPILL(); f_4e3ddc(); return; /* Core!?GetLanguage@UObject@@SAPBGXZ */
}

void f_eec026(void) {
  LOAD_REGS();
L_eec026: /* eec026: jmp dword ptr [0xf0d99c] */
  SPILL(); f_4e1d39(); return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */
}

void f_eec02c(void) {
  LOAD_REGS();
L_eec02c: /* eec02c: jmp dword ptr [0xf0d994] */
  SPILL(); f_4e2a72(); return; /* Core!?Flush@FOutputDevice@@UAEXXZ */
}

void f_eec032(void) {
  LOAD_REGS();
L_eec032: /* eec032: jmp dword ptr [0xf0d990] */
  SPILL(); f_4e44fd(); return; /* Core!?Tick@USubsystem@@UAEXM@Z */
}

void f_eec038(void) {
  LOAD_REGS();
L_eec038: /* eec038: jmp dword ptr [0xf0d94c] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_eec03e(void) {
  LOAD_REGS();
L_eec03e: /* eec03e: jmp dword ptr [0xf0d98c] */
  SPILL(); f_4e2a27(); return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */
}

void f_eec044(void) {
  LOAD_REGS();
L_eec044: /* eec044: jmp dword ptr [0xf0d988] */
  SPILL(); f_4e3c9c(); return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */
}

void f_eec04a(void) {
  LOAD_REGS();
L_eec04a: /* eec04a: jmp dword ptr [0xf0d984] */
  SPILL(); f_4e150a(); return; /* Core!?appMemset@@YAXPAXHH@Z */
}

void f_eec050(void) {
  LOAD_REGS();
L_eec050: /* eec050: jmp dword ptr [0xf0d980] */
  SPILL(); f_4e267b(); return; /* Core!?winToANSI@@YAPADPADPBGH@Z */
}

void f_eec056(void) {
  LOAD_REGS();
L_eec056: /* eec056: jmp dword ptr [0xf0d97c] */
  SPILL(); f_4e3e36(); return; /* Core!?winGetSizeANSI@@YAHPBG@Z */
}

void f_eec05c(void) {
  LOAD_REGS();
L_eec05c: /* eec05c: jmp dword ptr [0xf0d978] */
  SPILL(); f_4e180c(); return; /* Core!??YFString@@QAEAAV0@PBG@Z */
}

void f_eec062(void) {
  LOAD_REGS();
L_eec062: /* eec062: jmp dword ptr [0xf0d974] */
  SPILL(); f_4e43fe(); return; /* Core!?Parse@@YAHPBG0AAH@Z */
}

void f_eec068(void) {
  LOAD_REGS();
L_eec068: /* eec068: jmp dword ptr [0xf0d970] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_eec06e(void) {
  LOAD_REGS();
L_eec06e: /* eec06e: jmp dword ptr [0xf0d96c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_eec074(void) {
  LOAD_REGS();
L_eec074: /* eec074: jmp dword ptr [0xf0d968] */
  SPILL(); f_4e26e4(); return; /* Core!??0UCommandlet@@QAE@XZ */
}

void f_eec07a(void) {
  LOAD_REGS();
L_eec07a: /* eec07a: jmp dword ptr [0xf0d964] */
  SPILL(); f_4e189d(); return; /* Core!??1UCommandlet@@UAE@XZ */
}

void f_eec080(void) {
  LOAD_REGS();
L_eec080: /* eec080: jmp dword ptr [0xf0d960] */
  SPILL(); f_4e174e(); return; /* Core!?Right@FString@@QBE?AV1@H@Z */
}

void f_eec086(void) {
  LOAD_REGS();
L_eec086: /* eec086: jmp dword ptr [0xf0d95c] */
  SPILL(); f_4e3247(); return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */
}

void f_eec08c(void) {
  LOAD_REGS();
L_eec08c: /* eec08c: jmp dword ptr [0xf0d954] */
  SPILL(); f_4e3792(); return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */
}

void f_eec092(void) {
  LOAD_REGS();
L_eec092: /* eec092: jmp dword ptr [0xf0d950] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_eec098(void) {
  LOAD_REGS();
L_eec098: /* eec098: jmp dword ptr [0xf0ddb8] */
  SPILL(); f_6c2a68(); return; /* Engine!?TrySkipFile@UDownload@@UAEHXZ */
}

void f_eec09e(void) {
  LOAD_REGS();
L_eec09e: /* eec09e: jmp dword ptr [0xf0ddbc] */
  SPILL(); f_6ccef5(); return; /* Engine!?Destroy@UDownload@@UAEXXZ */
}

void f_eec0a4(void) {
  LOAD_REGS();
L_eec0a4: /* eec0a4: jmp dword ptr [0xf0ddc0] */
  SPILL(); f_6c5ecf(); return; /* Engine!??4?$TArray@E@@QAEAAV0@ABV0@@Z */
}

void f_eec0aa(void) {
  LOAD_REGS();
L_eec0aa: /* eec0aa: jmp dword ptr [0xf0ddc4] */
  SPILL(); f_6cb258(); return; /* Engine!??0?$TArray@E@@QAE@ABV0@@Z */
}

void f_eec0b0(void) {
  LOAD_REGS();
L_eec0b0: /* eec0b0: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eec0b6(void) {
  LOAD_REGS();
L_eec0b6: /* eec0b6: jmp dword ptr [0xf0ddcc] */
  SPILL(); f_6c9d7c(); return; /* Engine!?GetTopPlayerController@AActor@@UAEPAVAPlayerController@@XZ */
}

void f_eec0bc(void) {
  LOAD_REGS();
L_eec0bc: /* eec0bc: jmp dword ptr [0xf0ddd0] */
  SPILL(); f_6cb66d(); return; /* Engine!?IsAProjectile@AActor@@UAEHXZ */
}

void f_eec0c2(void) {
  LOAD_REGS();
L_eec0c2: /* eec0c2: jmp dword ptr [0xf0ddd4] */
  SPILL(); f_6c85e9(); return; /* Engine!?IsAPawn@AActor@@UAEHXZ */
}

void f_eec0c8(void) {
  LOAD_REGS();
L_eec0c8: /* eec0c8: jmp dword ptr [0xf0ddd8] */
  SPILL(); f_6cc090(); return; /* Engine!?IsAPlayerController@AActor@@UAEHXZ */
}

void f_eec0ce(void) {
  LOAD_REGS();
L_eec0ce: /* eec0ce: jmp dword ptr [0xf0dddc] */
  SPILL(); f_6c1f96(); return; /* Engine!?IsAVolume@AActor@@UAEHXZ */
}

void f_eec0d4(void) {
  LOAD_REGS();
L_eec0d4: /* eec0d4: jmp dword ptr [0xf0dde0] */
  SPILL(); f_6ccd15(); return; /* Engine!?IsAMover@AActor@@UAEHXZ */
}

void f_eec0da(void) {
  LOAD_REGS();
L_eec0da: /* eec0da: jmp dword ptr [0xf0dde4] */
  SPILL(); f_6c29b4(); return; /* Engine!?IsABrush@AActor@@UAEHXZ */
}

void f_eec0e0(void) {
  LOAD_REGS();
L_eec0e0: /* eec0e0: jmp dword ptr [0xf0dde8] */
  SPILL(); f_6c6a23(); return; /* Engine!?GetProjectorBase@AActor@@UAEPAV1@XZ */
}

void f_eec0e6(void) {
  LOAD_REGS();
L_eec0e6: /* eec0e6: jmp dword ptr [0xf0ddec] */
  SPILL(); f_6caa47(); return; /* Engine!?PostPath@AActor@@UAEXXZ */
}

void f_eec0ec(void) {
  LOAD_REGS();
L_eec0ec: /* eec0ec: jmp dword ptr [0xf0ddf0] */
  SPILL(); f_6c4232(); return; /* Engine!?PrePath@AActor@@UAEXXZ */
}

void f_eec0f2(void) {
  LOAD_REGS();
L_eec0f2: /* eec0f2: jmp dword ptr [0xf0ddf4] */
  SPILL(); f_6c2441(); return; /* Engine!?CheckForErrors@AActor@@UAEXXZ */
}

void f_eec0f8(void) {
  LOAD_REGS();
L_eec0f8: /* eec0f8: jmp dword ptr [0xf0ddf8] */
  SPILL(); f_6c69a6(); return; /* Engine!?PlayAnim@AActor@@UAEXHVFName@@MMH@Z */
}

void f_eec0fe(void) {
  LOAD_REGS();
L_eec0fe: /* eec0fe: jmp dword ptr [0xf0ddfc] */
  SPILL(); f_6c91a1(); return; /* Engine!?HasAssociatedLevelGeometry@AActor@@UAEHPAV1@@Z */
}

void f_eec104(void) {
  LOAD_REGS();
L_eec104: /* eec104: jmp dword ptr [0xf0de00] */
  SPILL(); f_6c267b(); return; /* Engine!?AssociatedLevelGeometry@AActor@@UAEPAV1@XZ */
}

void f_eec10a(void) {
  LOAD_REGS();
L_eec10a: /* eec10a: jmp dword ptr [0xf0de04] */
  SPILL(); f_6c7798(); return; /* Engine!?ClearMarker@AActor@@UAEXXZ */
}

void f_eec110(void) {
  LOAD_REGS();
L_eec110: /* eec110: jmp dword ptr [0xf0de08] */
  SPILL(); f_6c3639(); return; /* Engine!?AddMyMarker@AActor@@UAEHPAV1@@Z */
}

void f_eec116(void) {
  LOAD_REGS();
L_eec116: /* eec116: jmp dword ptr [0xf0de0c] */
  SPILL(); f_6ca272(); return; /* Engine!?preContactUpdate@AActor@@UAEXXZ */
}

void f_eec11c(void) {
  LOAD_REGS();
L_eec11c: /* eec11c: jmp dword ptr [0xf0de10] */
  SPILL(); f_6c5132(); return; /* Engine!?postKarmaStep@AActor@@UAEXXZ */
}

void f_eec122(void) {
  LOAD_REGS();
L_eec122: /* eec122: jmp dword ptr [0xf0de14] */
  SPILL(); f_6cbbc2(); return; /* Engine!?preKarmaStep@AActor@@UAEXM@Z */
}

void f_eec128(void) {
  LOAD_REGS();
L_eec128: /* eec128: jmp dword ptr [0xf0de18] */
  SPILL(); f_6c4872(); return; /* Engine!?physKarma@AActor@@UAEXM@Z */
}

void f_eec12e(void) {
  LOAD_REGS();
L_eec12e: /* eec12e: jmp dword ptr [0xf0de1c] */
  SPILL(); f_6c36ed(); return; /* Engine!?getKModel@AActor@@UBEPAU_McdModel@@XZ */
}

void f_eec134(void) {
  LOAD_REGS();
L_eec134: /* eec134: jmp dword ptr [0xf0de20] */
  SPILL(); f_6cb09b(); return; /* Engine!?ShrinkCollision@AActor@@UAEHPAV1@@Z */
}

void f_eec13a(void) {
  LOAD_REGS();
L_eec13a: /* eec13a: jmp dword ptr [0xf0de24] */
  SPILL(); f_6c30cb(); return; /* Engine!?stepUp@AActor@@UAEXVFVector@@00AAUFCheckResult@@@Z */
}

void f_eec140(void) {
  LOAD_REGS();
L_eec140: /* eec140: jmp dword ptr [0xf0de28] */
  SPILL(); f_6c2919(); return; /* Engine!?SmoothHitWall@AActor@@UAEXVFVector@@PAV1@@Z */
}

void f_eec146(void) {
  LOAD_REGS();
L_eec146: /* eec146: jmp dword ptr [0xf0de2c] */
  SPILL(); f_6c693d(); return; /* Engine!?FindSlopeRotation@AActor@@UAE?AVFRotator@@VFVector@@V2@@Z */
}

void f_eec14c(void) {
  LOAD_REGS();
L_eec14c: /* eec14c: jmp dword ptr [0xf0de30] */
  SPILL(); f_6cbd25(); return; /* Engine!?physFalling@AActor@@UAEXMH@Z */
}

void f_eec152(void) {
  LOAD_REGS();
L_eec152: /* eec152: jmp dword ptr [0xf0de34] */
  SPILL(); f_6c3d14(); return; /* Engine!?processLanded@AActor@@UAEXVFVector@@PAV1@MH@Z */
}

void f_eec158(void) {
  LOAD_REGS();
L_eec158: /* eec158: jmp dword ptr [0xf0de38] */
  SPILL(); f_6c97b9(); return; /* Engine!?processHitWall@AActor@@UAEXVFVector@@PAV1@@Z */
}

void f_eec15e(void) {
  LOAD_REGS();
L_eec15e: /* eec15e: jmp dword ptr [0xf0de3c] */
  SPILL(); f_6cae20(); return; /* Engine!?BoundProjectileVelocity@AActor@@UAEXXZ */
}

void f_eec164(void) {
  LOAD_REGS();
L_eec164: /* eec164: jmp dword ptr [0xf0de40] */
  SPILL(); f_6c2c84(); return; /* Engine!?performPhysics@AActor@@UAEXM@Z */
}

void f_eec16a(void) {
  LOAD_REGS();
L_eec16a: /* eec16a: jmp dword ptr [0xf0de44] */
  SPILL(); f_6c685c(); return; /* Engine!?setPhysics@AActor@@UAEXEPAV1@VFVector@@@Z */
}

void f_eec170(void) {
  LOAD_REGS();
L_eec170: /* eec170: jmp dword ptr [0xf0de48] */
  SPILL(); f_6c3aa8(); return; /* Engine!?PostBeginPlay@AActor@@UAEXXZ */
}

void f_eec176(void) {
  LOAD_REGS();
L_eec176: /* eec176: jmp dword ptr [0xf0de4c] */
  SPILL(); f_6c4eb7(); return; /* Engine!?SetZone@AActor@@UAEXHH@Z */
}

void f_eec17c(void) {
  LOAD_REGS();
L_eec17c: /* eec17c: jmp dword ptr [0xf0de50] */
  SPILL(); f_6c7874(); return; /* Engine!?GetAmbientVolume@AActor@@UAEMM@Z */
}

void f_eec182(void) {
  LOAD_REGS();
L_eec182: /* eec182: jmp dword ptr [0xf0de54] */
  SPILL(); f_6c25a9(); return; /* Engine!?RenderEditorSelected@AActor@@UAEXPAVFLevelSceneNode@@PAVFRenderInterface@@PAVFDynamicActor@@@Z */
}

void f_eec188(void) {
  LOAD_REGS();
L_eec188: /* eec188: jmp dword ptr [0xf0de58] */
  SPILL(); f_6c19ec(); return; /* Engine!?RenderEditorInfo@AActor@@UAEXPAVFLevelSceneNode@@PAVFRenderInterface@@PAVFDynamicActor@@@Z */
}

void f_eec18e(void) {
  LOAD_REGS();
L_eec18e: /* eec18e: jmp dword ptr [0xf0de5c] */
  SPILL(); f_6cb9d3(); return; /* Engine!?DelayScriptReplication@AActor@@UAEHM@Z */
}

void f_eec194(void) {
  LOAD_REGS();
L_eec194: /* eec194: jmp dword ptr [0xf0de60] */
  SPILL(); f_6c6208(); return; /* Engine!?IsNetRelevantFor@AActor@@UAEHPAVAPlayerController@@PAV1@VFVector@@@Z */
}

void f_eec19a(void) {
  LOAD_REGS();
L_eec19a: /* eec19a: jmp dword ptr [0xf0de64] */
  SPILL(); f_6c6f46(); return; /* Engine!?PlayerControlled@AActor@@UAEHXZ */
}

void f_eec1a0(void) {
  LOAD_REGS();
L_eec1a0: /* eec1a0: jmp dword ptr [0xf0de68] */
  SPILL(); f_6c3f99(); return; /* Engine!?TickSpecial@AActor@@UAEXM@Z */
}

void f_eec1a6(void) {
  LOAD_REGS();
L_eec1a6: /* eec1a6: jmp dword ptr [0xf0de6c] */
  SPILL(); f_6c7b5d(); return; /* Engine!?TickSimulated@AActor@@UAEXM@Z */
}

void f_eec1ac(void) {
  LOAD_REGS();
L_eec1ac: /* eec1ac: jmp dword ptr [0xf0de70] */
  SPILL(); f_6c93db(); return; /* Engine!?TickAuthoritative@AActor@@UAEXM@Z */
}

void f_eec1b2(void) {
  LOAD_REGS();
L_eec1b2: /* eec1b2: jmp dword ptr [0xf0de74] */
  SPILL(); f_6ccfbd(); return; /* Engine!?CheckOwnerUpdated@AActor@@UAEHXZ */
}

void f_eec1b8(void) {
  LOAD_REGS();
L_eec1b8: /* eec1b8: jmp dword ptr [0xf0de78] */
  SPILL(); f_6c31c0(); return; /* Engine!?CheckAnimFinished@AActor@@UAEHH@Z */
}

void f_eec1be(void) {
  LOAD_REGS();
L_eec1be: /* eec1be: jmp dword ptr [0xf0de7c] */
  SPILL(); f_6c1695(); return; /* Engine!?StartAnimPoll@AActor@@UAEXXZ */
}

void f_eec1c4(void) {
  LOAD_REGS();
L_eec1c4: /* eec1c4: jmp dword ptr [0xf0de80] */
  SPILL(); f_6c7e69(); return; /* Engine!?UpdateAnimation@AActor@@UAEXM@Z */
}

void f_eec1ca(void) {
  LOAD_REGS();
L_eec1ca: /* eec1ca: jmp dword ptr [0xf0de84] */
  SPILL(); f_6c7e14(); return; /* Engine!?NotifyAnimEnd@AActor@@UAEXH@Z */
}

void f_eec1d0(void) {
  LOAD_REGS();
L_eec1d0: /* eec1d0: jmp dword ptr [0xf0de88] */
  SPILL(); f_6c4a4d(); return; /* Engine!?SetBase@AActor@@UAEXPAV1@VFVector@@H@Z */
}

void f_eec1d6(void) {
  LOAD_REGS();
L_eec1d6: /* eec1d6: jmp dword ptr [0xf0de8c] */
  SPILL(); f_6c929b(); return; /* Engine!?NotifyBump@AActor@@UAEXPAV1@@Z */
}

void f_eec1dc(void) {
  LOAD_REGS();
L_eec1dc: /* eec1dc: jmp dword ptr [0xf0de90] */
  SPILL(); f_6c7761(); return; /* Engine!?GetPrimitive@AActor@@UAEPAVUPrimitive@@XZ */
}

void f_eec1e2(void) {
  LOAD_REGS();
L_eec1e2: /* eec1e2: jmp dword ptr [0xf0de94] */
  SPILL(); f_6c9462(); return; /* Engine!?ShouldTrace@AActor@@UAEHPAV1@K@Z */
}

void f_eec1e8(void) {
  LOAD_REGS();
L_eec1e8: /* eec1e8: jmp dword ptr [0xf0de98] */
  SPILL(); f_6c88c3(); return; /* Engine!?PostScriptDestroyed@AActor@@UAEXXZ */
}

void f_eec1ee(void) {
  LOAD_REGS();
L_eec1ee: /* eec1ee: jmp dword ptr [0xf0de9c] */
  SPILL(); f_6cc586(); return; /* Engine!?WorldToLocal@AActor@@UBE?AVFMatrix@@XZ */
}

void f_eec1f4(void) {
  LOAD_REGS();
L_eec1f4: /* eec1f4: jmp dword ptr [0xf0dea0] */
  SPILL(); f_6c6ca3(); return; /* Engine!?LocalToWorld@AActor@@UBE?AVFMatrix@@XZ */
}

void f_eec1fa(void) {
  LOAD_REGS();
L_eec1fa: /* eec1fa: jmp dword ptr [0xf0dea4] */
  SPILL(); f_6c948a(); return; /* Engine!?ToWorld@AActor@@UBE?AVFCoords@@XZ */
}

void f_eec200(void) {
  LOAD_REGS();
L_eec200: /* eec200: jmp dword ptr [0xf0dea8] */
  SPILL(); f_6c2d7e(); return; /* Engine!?ToLocal@AActor@@UBE?AVFCoords@@XZ */
}

void f_eec206(void) {
  LOAD_REGS();
L_eec206: /* eec206: jmp dword ptr [0xf0deac] */
  SPILL(); f_6cabeb(); return; /* Engine!?ShouldTickInEntry@AActor@@UAEHXZ */
}

void f_eec20c(void) {
  LOAD_REGS();
L_eec20c: /* eec20c: jmp dword ptr [0xf0deb0] */
  SPILL(); f_6c2c9d(); return; /* Engine!?GetSkin@AActor@@UAEPAVUMaterial@@H@Z */
}

void f_eec212(void) {
  LOAD_REGS();
L_eec212: /* eec212: jmp dword ptr [0xf0deb4] */
  SPILL(); f_6c7702(); return; /* Engine!?PostNetReceiveLocation@AActor@@UAEXXZ */
}

void f_eec218(void) {
  LOAD_REGS();
L_eec218: /* eec218: jmp dword ptr [0xf0deb8] */
  SPILL(); f_6c2bc1(); return; /* Engine!?PostNetReceive@AActor@@UAEXXZ */
}

void f_eec21e(void) {
  LOAD_REGS();
L_eec21e: /* eec21e: jmp dword ptr [0xf0debc] */
  SPILL(); f_6c945d(); return; /* Engine!?PreNetReceive@AActor@@UAEXXZ */
}

void f_eec224(void) {
  LOAD_REGS();
L_eec224: /* eec224: jmp dword ptr [0xf0dec0] */
  SPILL(); f_6c2da1(); return; /* Engine!?Spawned@AActor@@UAEXXZ */
}

void f_eec22a(void) {
  LOAD_REGS();
L_eec22a: /* eec22a: jmp dword ptr [0xf0dec4] */
  SPILL(); f_6cad17(); return; /* Engine!?PostRaytrace@AActor@@UAEXXZ */
}

void f_eec230(void) {
  LOAD_REGS();
L_eec230: /* eec230: jmp dword ptr [0xf0dec8] */
  SPILL(); f_6c60fa(); return; /* Engine!?PreRaytrace@AActor@@UAEXXZ */
}

void f_eec236(void) {
  LOAD_REGS();
L_eec236: /* eec236: jmp dword ptr [0xf0decc] */
  SPILL(); f_6c1609(); return; /* Engine!?PostEditLoad@AActor@@UAEXXZ */
}

void f_eec23c(void) {
  LOAD_REGS();
L_eec23c: /* eec23c: jmp dword ptr [0xf0ded0] */
  SPILL(); f_6cb8ac(); return; /* Engine!?PostEditMove@AActor@@UAEXXZ */
}

void f_eec242(void) {
  LOAD_REGS();
L_eec242: /* eec242: jmp dword ptr [0xf0ded4] */
  SPILL(); f_6c3c6f(); return; /* Engine!?WorldLightRadius@AActor@@UBEMXZ */
}

void f_eec248(void) {
  LOAD_REGS();
L_eec248: /* eec248: jmp dword ptr [0xf0ded8] */
  SPILL(); f_6c558d(); return; /* Engine!?GetNetPriority@AActor@@UAEMAAVFVector@@0PAV1@MM@Z */
}

void f_eec24e(void) {
  LOAD_REGS();
L_eec24e: /* eec24e: jmp dword ptr [0xf0dedc] */
  SPILL(); f_6c3ee5(); return; /* Engine!?IsPlayer@AActor@@UAEHXZ */
}

void f_eec254(void) {
  LOAD_REGS();
L_eec254: /* eec254: jmp dword ptr [0xf0dee0] */
  SPILL(); f_6c2851(); return; /* Engine!?GetPlayerPawn@AActor@@UBEPAVAPawn@@XZ */
}

void f_eec25a(void) {
  LOAD_REGS();
L_eec25a: /* eec25a: jmp dword ptr [0xf0dee4] */
  SPILL(); f_6c2964(); return; /* Engine!?SetVolumes@AActor@@UAEXABV?$TArray@PAVAVolume@@@@@Z */
}

void f_eec260(void) {
  LOAD_REGS();
L_eec260: /* eec260: jmp dword ptr [0xf0dee8] */
  SPILL(); f_6c3481(); return; /* Engine!?SetVolumes@AActor@@UAEXXZ */
}

void f_eec266(void) {
  LOAD_REGS();
L_eec266: /* eec266: jmp dword ptr [0xf0deec] */
  SPILL(); f_6c1aaa(); return; /* Engine!?GetOptimizedRepList@AActor@@UAEPAHPAEPAUFPropertyRetirement@@PAHPAVUPackageMap@@PAVUActorChannel@@@Z */
}

void f_eec26c(void) {
  LOAD_REGS();
L_eec26c: /* eec26c: jmp dword ptr [0xf0def0] */
  SPILL(); f_6cc351(); return; /* Engine!?NetDirty@AActor@@UAEXPAVUProperty@@@Z */
}

void f_eec272(void) {
  LOAD_REGS();
L_eec272: /* eec272: jmp dword ptr [0xf0def4] */
  SPILL(); f_6ca7ae(); return; /* Engine!?PostEditUndo@AActor@@UAEXXZ */
}

void f_eec278(void) {
  LOAD_REGS();
L_eec278: /* eec278: jmp dword ptr [0xf0def8] */
  SPILL(); f_6cc2fc(); return; /* Engine!?PreEditUndo@AActor@@UAEXXZ */
}

void f_eec27e(void) {
  LOAD_REGS();
L_eec27e: /* eec27e: jmp dword ptr [0xf0defc] */
  SPILL(); f_6c45ed(); return; /* Engine!?PostEditChange@AActor@@UAEXXZ */
}

void f_eec284(void) {
  LOAD_REGS();
L_eec284: /* eec284: jmp dword ptr [0xf0df00] */
  SPILL(); f_6c20d6(); return; /* Engine!?InitExecution@AActor@@UAEXXZ */
}

void f_eec28a(void) {
  LOAD_REGS();
L_eec28a: /* eec28a: jmp dword ptr [0xf0df04] */
  SPILL(); f_6c6b09(); return; /* Engine!?IsPendingKill@AActor@@UAEHXZ */
}

void f_eec290(void) {
  LOAD_REGS();
L_eec290: /* eec290: jmp dword ptr [0xf0df08] */
  SPILL(); f_6c5588(); return; /* Engine!?Serialize@AActor@@UAEXAAVFArchive@@@Z */
}

void f_eec296(void) {
  LOAD_REGS();
L_eec296: /* eec296: jmp dword ptr [0xf0df0c] */
  SPILL(); f_6cb45b(); return; /* Engine!?PostLoad@AActor@@UAEXXZ */
}

void f_eec29c(void) {
  LOAD_REGS();
L_eec29c: /* eec29c: jmp dword ptr [0xf0df10] */
  SPILL(); f_6c491c(); return; /* Engine!?ProcessRemoteFunction@AActor@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_eec2a2(void) {
  LOAD_REGS();
L_eec2a2: /* eec2a2: jmp dword ptr [0xf0df14] */
  SPILL(); f_6c65f0(); return; /* Engine!?ProcessState@AActor@@UAEXM@Z */
}

void f_eec2a8(void) {
  LOAD_REGS();
L_eec2a8: /* eec2a8: jmp dword ptr [0xf0df18] */
  SPILL(); f_6c79d2(); return; /* Engine!?ProcessEvent@AActor@@UAEXPAVUFunction@@PAX1@Z */
}

void f_eec2ae(void) {
  LOAD_REGS();
L_eec2ae: /* eec2ae: jmp dword ptr [0xf0df1c] */
  SPILL(); f_6c60cd(); return; /* Engine!??1AInternetInfo@@UAE@XZ */
}

void f_eec2b4(void) {
  LOAD_REGS();
L_eec2b4: /* eec2b4: jmp dword ptr [0xf0df20] */
  SPILL(); f_6c29d7(); return; /* Engine!??0AInternetInfo@@QAE@ABV0@@Z */
}

void f_eec2ba(void) {
  LOAD_REGS();
L_eec2ba: /* eec2ba: jmp dword ptr [0xf0df24] */
  SPILL(); f_6c44f3(); return; /* Engine!??4AInternetInfo@@QAEAAV0@ABV0@@Z */
}

void f_eec2c0(void) {
  LOAD_REGS();
L_eec2c0: /* eec2c0: jmp dword ptr [0xf0df28] */
  SPILL(); f_6c9aa7(); return; /* Engine!?Tick@AActor@@UAEHMW4ELevelTick@@@Z */
}

void f_eec2c6(void) {
  LOAD_REGS();
L_eec2c6: /* eec2c6: jmp dword ptr [0xf0df2c] */
  SPILL(); f_6c1ee7(); return; /* Engine!?Destroy@AActor@@UAEXXZ */
}

void f_eec2cc(void) {
  LOAD_REGS();
L_eec2cc: /* eec2cc: jmp dword ptr [0xf0df30] */
  SPILL(); f_6c8a6c(); return; /* Engine!??1AGameStats@@UAE@XZ */
}

void f_eec2d2(void) {
  LOAD_REGS();
L_eec2d2: /* eec2d2: jmp dword ptr [0xf0df34] */
  SPILL(); f_6c1302(); return; /* Engine!??0AGameStats@@IAE@XZ */
}

void f_eec2d8(void) {
  LOAD_REGS();
L_eec2d8: /* eec2d8: jmp dword ptr [0xf0df38] */
  SPILL(); f_6c810c(); return; /* Engine!??0AGameStats@@QAE@ABV0@@Z */
}

void f_eec2de(void) {
  LOAD_REGS();
L_eec2de: /* eec2de: jmp dword ptr [0xf0df3c] */
  SPILL(); f_6c583a(); return; /* Engine!??4AGameStats@@QAEAAV0@ABV0@@Z */
}

void f_eec2e4(void) {
  LOAD_REGS();
L_eec2e4: /* eec2e4: jmp dword ptr [0xf0df40] */
  SPILL(); f_6c688e(); return; /* Engine!??1AInfo@@UAE@XZ */
}

void f_eec2ea(void) {
  LOAD_REGS();
L_eec2ea: /* eec2ea: jmp dword ptr [0xf0df44] */
  SPILL(); f_6c99b7(); return; /* Engine!??0AInfo@@IAE@XZ */
}

void f_eec2f0(void) {
  LOAD_REGS();
L_eec2f0: /* eec2f0: jmp dword ptr [0xf0df48] */
  SPILL(); f_6c1a5f(); return; /* Engine!??0AInfo@@QAE@ABV0@@Z */
}

void f_eec2f6(void) {
  LOAD_REGS();
L_eec2f6: /* eec2f6: jmp dword ptr [0xf0df4c] */
  SPILL(); f_6cbacd(); return; /* Engine!??4AInfo@@QAEAAV0@ABV0@@Z */
}

void f_eec2fc(void) {
  LOAD_REGS();
L_eec2fc: /* eec2fc: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eec302(void) {
  LOAD_REGS();
L_eec302: /* eec302: jmp dword ptr [0xf0df54] */
  SPILL(); f_6cb00f(); return; /* Engine!??0FServerResponseLine@@QAE@XZ */
}

void f_eec308(void) {
  LOAD_REGS();
L_eec308: /* eec308: jmp dword ptr [0xf0df58] */
  SPILL(); f_6c2847(); return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */
}

void f_eec30e(void) {
  LOAD_REGS();
L_eec30e: /* eec30e: jmp dword ptr [0xf0df5c] */
  SPILL(); f_6c7482(); return; /* Engine!??4FServerResponseLine@@QAEAAU0@ABU0@@Z */
}

void f_eec314(void) {
  LOAD_REGS();
L_eec314: /* eec314: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eec31a(void) {
  LOAD_REGS();
L_eec31a: /* eec31a: jmp dword ptr [0xf0df64] */
  SPILL(); f_6ca50b(); return; /* Engine!??4FURL@@QAEAAV0@ABV0@@Z */
}

void f_eec320(void) {
  LOAD_REGS();
L_eec320: /* eec320: jmp dword ptr [0xf0df68] */
  SPILL(); f_6c440d(); return; /* Engine!??0FURL@@QAE@PAV0@PBGW4ETravelType@@@Z */
}

void f_eec326(void) {
  LOAD_REGS();
L_eec326: /* eec326: jmp dword ptr [0xf0df6c] */
  SPILL(); f_6c56e1(); return; /* Engine!?ReceiveFile@UDownload@@UAEXPAVUNetConnection@@HPBGH@Z */
}

void f_eec32c(void) {
  LOAD_REGS();
L_eec32c: /* eec32c: jmp dword ptr [0xf0df70] */
  SPILL(); f_6c2685(); return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */
}

void f_eec332(void) {
  LOAD_REGS();
L_eec332: /* eec332: jmp dword ptr [0xf0df74] */
  SPILL(); f_6c97cd(); return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */
}

void f_eec338(void) {
  LOAD_REGS();
L_eec338: /* eec338: jmp dword ptr [0xf0df78] */
  SPILL(); f_6c7b3f(); return; /* Engine!?String@FURL@@QBE?AVFString@@H@Z */
}

void f_eec33e(void) {
  LOAD_REGS();
L_eec33e: /* eec33e: jmp dword ptr [0xf0df7c] */
  SPILL(); f_6cb43d(); return; /* Engine!?CountBytes@?$TArray@E@@QAEXAAVFArchive@@@Z */
}

void f_eec344(void) {
  LOAD_REGS();
L_eec344: /* eec344: jmp dword ptr [0xf0df80] */
  SPILL(); f_6c9c14(); return; /* Engine!?DownloadDone@UDownload@@UAEXXZ */
}

void f_eec34a(void) {
  LOAD_REGS();
L_eec34a: /* eec34a: jmp dword ptr [0xf0df84] */
  SPILL(); f_6c728e(); return; /* Engine!?DownloadError@UDownload@@UAEXPBG@Z */
}

void f_eec350(void) {
  LOAD_REGS();
L_eec350: /* eec350: jmp dword ptr [0xf0df88] */
  SPILL(); f_6c1898(); return; /* Engine!?ReceiveData@UDownload@@UAEXPAEH@Z */
}

void f_eec356(void) {
  LOAD_REGS();
L_eec356: /* eec356: jmp dword ptr [0xf0df8c] */
  SPILL(); f_6c907a(); return; /* Engine!??1UDownload@@UAE@XZ */
}

void f_eec35c(void) {
  LOAD_REGS();
L_eec35c: /* eec35c: jmp dword ptr [0xf0df90] */
  SPILL(); f_6c5d85(); return; /* Engine!??0?$TArray@E@@QAE@XZ */
}

void f_eec362(void) {
  LOAD_REGS();
L_eec362: /* eec362: jmp dword ptr [0xf0df94] */
  SPILL(); f_6c321a(); return; /* Engine!??0FURL@@QAE@PBG@Z */
}

void f_eec368(void) {
  LOAD_REGS();
L_eec368: /* eec368: jmp dword ptr [0xf0df98] */
  SPILL(); f_6cc9cd(); return; /* Engine!??0UDownload@@IAE@XZ */
}

void f_eec36e(void) {
  LOAD_REGS();
L_eec36e: /* eec36e: jmp dword ptr [0xf0df9c] */
  SPILL(); f_6c2257(); return; /* Engine!??6@YAAAVFArchive@@AAV0@AAVFURL@@@Z */
}

void f_eec374(void) {
  LOAD_REGS();
L_eec374: /* eec374: jmp dword ptr [0xf0dfa0] */
  SPILL(); f_6c7130(); return; /* Engine!?Serialize@UDownload@@UAEXAAVFArchive@@@Z */
}

void f_eec37a(void) {
  LOAD_REGS();
L_eec37a: /* eec37a: jmp dword ptr [0xf0dfa8] */
  SPILL(); f_6c52ae(); return; /* Engine!??0AInternetInfo@@IAE@XZ */
}

void f_eec380(void) {
  LOAD_REGS();
L_eec380: /* eec380: jmp dword ptr [0xf0dfb0] */
  SPILL(); f_6c509c(); return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFServerResponseLine@@@Z */
}

void f_eec386(void) {
  LOAD_REGS();
L_eec386: /* eec386: jmp dword ptr [0xf0dfb4] */
  SPILL(); f_6c5cd1(); return; /* Engine!??4FPlayerResponseLine@@QAEAAU0@ABU0@@Z */
}

void f_eec38c(void) {
  LOAD_REGS();
L_eec38c: /* eec38c: jmp dword ptr [0xf0dfb8] */
  SPILL(); f_6c6f73(); return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFPlayerResponseLine@@@Z */
}

void f_eec392(void) {
  LOAD_REGS();
L_eec392: /* eec392: jmp dword ptr [0xf0dfbc] */
  SPILL(); f_6c627b(); return; /* Engine!??1FKeyValuePair@@QAE@XZ */
}

void f_eec398(void) {
  LOAD_REGS();
L_eec398: /* eec398: jmp dword ptr [0xf0dfc0] */
  SPILL(); f_6c3265(); return; /* Engine!??1FPlayerResponseLine@@QAE@XZ */
}

void f_eec39e(void) {
  LOAD_REGS();
L_eec39e: /* eec39e: jmp dword ptr [0xf0dfc4] */
  SPILL(); f_6cc7f7(); return; /* Engine!??0FKeyValuePair@@QAE@ABU0@@Z */
}

void f_eec3a4(void) {
  LOAD_REGS();
L_eec3a4: /* eec3a4: jmp dword ptr [0xf0dfc8] */
  SPILL(); f_6c73a1(); return; /* Engine!??0FPlayerResponseLine@@QAE@ABU0@@Z */
}

void f_eec3aa(void) {
  LOAD_REGS();
L_eec3aa: /* eec3aa: jmp dword ptr [0xf0dfcc] */
  SPILL(); f_6c944e(); return; /* Engine!?GetCDKeyResponse@@YA?AVFString@@PBG@Z */
}

void f_eec3b0(void) {
  LOAD_REGS();
L_eec3b0: /* eec3b0: jmp dword ptr [0xf0dfd0] */
  SPILL(); f_6c7ac2(); return; /* Engine!?GetCDKeyHash@@YA?AVFString@@XZ */
}

void f_eec3b6(void) {
  LOAD_REGS();
L_eec3b6: /* eec3b6: jmp dword ptr [0xf0dfd8] */
  SPILL(); f_6c8832(); return; /* Engine!?Exec@UNetConnection@@UAEHPBGAAVFOutputDevice@@@Z */
}

void f_eec3bc(void) {
  LOAD_REGS();
L_eec3bc: /* eec3bc: jmp dword ptr [0xf0dfdc] */
  SPILL(); f_6cbff5(); return; /* Engine!?Serialize@UNetConnection@@UAEXPBGW4EName@@@Z */
}

void f_eec3c2(void) {
  LOAD_REGS();
L_eec3c2: /* eec3c2: jmp dword ptr [0xf0dfe0] */
  SPILL(); f_6c5191(); return; /* Engine!?HandleClientPlayer@UNetConnection@@UAEXPAVAPlayerController@@@Z */
}

void f_eec3c8(void) {
  LOAD_REGS();
L_eec3c8: /* eec3c8: jmp dword ptr [0xf0dfe4] */
  SPILL(); f_6c4368(); return; /* Engine!?IsNetReady@UNetConnection@@UAEHH@Z */
}

void f_eec3ce(void) {
  LOAD_REGS();
L_eec3ce: /* eec3ce: jmp dword ptr [0xf0dfe8] */
  SPILL(); f_6c8e18(); return; /* Engine!?Tick@UNetConnection@@UAEXXZ */
}

void f_eec3d4(void) {
  LOAD_REGS();
L_eec3d4: /* eec3d4: jmp dword ptr [0xf0dfec] */
  SPILL(); f_6c5f33(); return; /* Engine!?FlushNet@UNetConnection@@UAEXXZ */
}

void f_eec3da(void) {
  LOAD_REGS();
L_eec3da: /* eec3da: jmp dword ptr [0xf0dff0] */
  SPILL(); f_6c31cf(); return; /* Engine!?SendAck@UNetConnection@@UAEXHH@Z */
}

void f_eec3e0(void) {
  LOAD_REGS();
L_eec3e0: /* eec3e0: jmp dword ptr [0xf0dff4] */
  SPILL(); f_6c7103(); return; /* Engine!?AssertValid@UNetConnection@@UAEXXZ */
}

void f_eec3e6(void) {
  LOAD_REGS();
L_eec3e6: /* eec3e6: jmp dword ptr [0xf0dff8] */
  SPILL(); f_6c652d(); return; /* Engine!?InitOut@UNetConnection@@UAEXXZ */
}

void f_eec3ec(void) {
  LOAD_REGS();
L_eec3ec: /* eec3ec: jmp dword ptr [0xf0dffc] */
  SPILL(); f_6ca1be(); return; /* Engine!?ReadInput@UNetConnection@@UAEXM@Z */
}

void f_eec3f2(void) {
  LOAD_REGS();
L_eec3f2: /* eec3f2: jmp dword ptr [0xf0e000] */
  SPILL(); f_6ca60a(); return; /* Engine!?Serialize@UNetConnection@@UAEXAAVFArchive@@@Z */
}

void f_eec3f8(void) {
  LOAD_REGS();
L_eec3f8: /* eec3f8: jmp dword ptr [0xf0e004] */
  SPILL(); f_6cc671(); return; /* Engine!?Destroy@UNetConnection@@UAEXXZ */
}

void f_eec3fe(void) {
  LOAD_REGS();
L_eec3fe: /* eec3fe: jmp dword ptr [0xf0e008] */
  SPILL(); f_6c2dfb(); return; /* Engine!??1UNetConnection@@UAE@XZ */
}

void f_eec404(void) {
  LOAD_REGS();
L_eec404: /* eec404: jmp dword ptr [0xf0e00c] */
  SPILL(); f_6c3625(); return; /* Engine!??0UNetConnection@@QAE@XZ */
}

void f_eec40a(void) {
  LOAD_REGS();
L_eec40a: /* eec40a: jmp dword ptr [0xf0e010] */
  SPILL(); f_6c8f0d(); return; /* Engine!??0UNetConnection@@QAE@ABV0@@Z */
}

void f_eec410(void) {
  LOAD_REGS();
L_eec410: /* eec410: jmp dword ptr [0xf0e014] */
  SPILL(); f_6cac95(); return; /* Engine!??4UNetConnection@@QAEAAV0@ABV0@@Z */
}

void f_eec416(void) {
  LOAD_REGS();
L_eec416: /* eec416: jmp dword ptr [0xf0e018] */
  SPILL(); f_6c9732(); return; /* Engine!?Exec@UNetDriver@@UAEHPBGAAVFOutputDevice@@@Z */
}

void f_eec41c(void) {
  LOAD_REGS();
L_eec41c: /* eec41c: jmp dword ptr [0xf0e01c] */
  SPILL(); f_6c80ad(); return; /* Engine!?IsDemoDriver@UNetDriver@@UAEHXZ */
}

void f_eec422(void) {
  LOAD_REGS();
L_eec422: /* eec422: jmp dword ptr [0xf0ddb4] */
  SPILL(); f_6cb1ef(); return; /* Engine!?NotifyActorDestroyed@UNetDriver@@UAEXPAVAActor@@@Z */
}

void f_eec428(void) {
  LOAD_REGS();
L_eec428: /* eec428: jmp dword ptr [0xf0ddb0] */
  SPILL(); f_6c308a(); return; /* Engine!?TickFlush@UNetDriver@@UAEXXZ */
}

void f_eec42e(void) {
  LOAD_REGS();
L_eec42e: /* eec42e: jmp dword ptr [0xf0ddac] */
  SPILL(); f_6c32ba(); return; /* Engine!?AssertValid@UNetDriver@@UAEXXZ */
}

void f_eec434(void) {
  LOAD_REGS();
L_eec434: /* eec434: jmp dword ptr [0xf0dda8] */
  SPILL(); f_6c1f91(); return; /* Engine!?Serialize@UNetDriver@@UAEXAAVFArchive@@@Z */
}

void f_eec43a(void) {
  LOAD_REGS();
L_eec43a: /* eec43a: jmp dword ptr [0xf0dda4] */
  SPILL(); f_6c3fad(); return; /* Engine!?Destroy@UNetDriver@@UAEXXZ */
}

void f_eec440(void) {
  LOAD_REGS();
L_eec440: /* eec440: jmp dword ptr [0xf0dda0] */
  SPILL(); f_6c97c8(); return; /* Engine!??1UNetDriver@@UAE@XZ */
}

void f_eec446(void) {
  LOAD_REGS();
L_eec446: /* eec446: jmp dword ptr [0xf0dd9c] */
  SPILL(); f_6c1780(); return; /* Engine!??0UNetDriver@@QAE@XZ */
}

void f_eec44c(void) {
  LOAD_REGS();
L_eec44c: /* eec44c: jmp dword ptr [0xf0dd98] */
  SPILL(); f_6cbac8(); return; /* Engine!??0UNetDriver@@QAE@ABV0@@Z */
}

void f_eec452(void) {
  LOAD_REGS();
L_eec452: /* eec452: jmp dword ptr [0xf0dd94] */
  SPILL(); f_6c8d5f(); return; /* Engine!??4UNetDriver@@QAEAAV0@ABV0@@Z */
}

void f_eec458(void) {
  LOAD_REGS();
L_eec458: /* eec458: jmp dword ptr [0xf0dd90] */
  SPILL(); f_6c5196(); return; /* Engine!?SaveMD5Database@UGameEngine@@QAEXXZ */
}

void f_eec45e(void) {
  LOAD_REGS();
L_eec45e: /* eec45e: jmp dword ptr [0xf0dd8c] */
  SPILL(); f_6c6cee(); return; /* Engine!?AddMD5@UGameEngine@@QAEXPBG0H@Z */
}

void f_eec464(void) {
  LOAD_REGS();
L_eec464: /* eec464: jmp dword ptr [0xf0dd84] */
  SPILL(); f_6caa06(); return; /* Engine!?eventClientValidate@APlayerController@@QAEXABVFString@@@Z */
}

void f_eec46a(void) {
  LOAD_REGS();
L_eec46a: /* eec46a: jmp dword ptr [0xf0dd7c] */
  SPILL(); f_6cb8a2(); return; /* Engine!?eventClientOpenMenu@APlayerController@@QAEXABVFString@@K00@Z */
}

void f_eec470(void) {
  LOAD_REGS();
L_eec470: /* eec470: jmp dword ptr [0xf0dd74] */
  SPILL(); f_6ca91b(); return; /* Engine!?eventClientMessage@APlayerController@@QAEXABVFString@@VFName@@@Z */
}

void f_eec476(void) {
  LOAD_REGS();
L_eec476: /* eec476: jmp dword ptr [0xf0e020] */
  SPILL(); f_6c3945(); return; /* Engine!?PackageRevisionLevel@UGameEngine@@QAEHXZ */
}

void f_eec47c(void) {
  LOAD_REGS();
L_eec47c: /* eec47c: jmp dword ptr [0xf0dd54] */
  SPILL(); f_6c9778(); return; /* Engine!??0?$TArray@E@@QAE@W4ENoInit@@@Z */
}

void f_eec482(void) {
  LOAD_REGS();
L_eec482: /* eec482: jmp dword ptr [0xf0dd58] */
  SPILL(); f_6cc19e(); return; /* Engine!??0UNetConnection@@QAE@PAVUNetDriver@@ABVFURL@@@Z */
}

void f_eec488(void) {
  LOAD_REGS();
L_eec488: /* eec488: jmp dword ptr [0xf0dd5c] */
  SPILL(); f_6c74cd(); return; /* Engine!?CreateChannel@UNetConnection@@QAEPAVUChannel@@W4EChannelType@@HH@Z */
}

void f_eec48e(void) {
  LOAD_REGS();
L_eec48e: /* eec48e: jmp dword ptr [0xf0dd60] */
  SPILL(); f_6cb3c0(); return; /* Engine!?InitConnect@UNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */
}

void f_eec494(void) {
  LOAD_REGS();
L_eec494: /* eec494: jmp dword ptr [0xf0dd64] */
  SPILL(); f_6cac6d(); return; /* Engine!?InitListen@UNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */
}

void f_eec49a(void) {
  LOAD_REGS();
L_eec49a: /* eec49a: jmp dword ptr [0xf0dd68] */
  SPILL(); f_6c6adc(); return; /* Engine!?ReceivedRawPacket@UNetConnection@@QAEXPAXH@Z */
}

void f_eec4a0(void) {
  LOAD_REGS();
L_eec4a0: /* eec4a0: jmp dword ptr [0xf0dd6c] */
  SPILL(); f_6cc77a(); return; /* Engine!?TickDispatch@UNetDriver@@UAEXM@Z */
}

void f_eec4a6(void) {
  LOAD_REGS();
L_eec4a6: /* eec4a6: jmp dword ptr [0xf0e0e4] */
  SPILL(); call_ind(R32(0xf0e0e4u)); return; /* KERNEL32!CloseHandle */
}

void f_eec4ac(void) {
  LOAD_REGS();
L_eec4ac: /* eec4ac: jmp dword ptr [0xf0e0e0] */
  SPILL(); call_ind(R32(0xf0e0e0u)); return; /* KERNEL32!CreateThread */
}

void f_eec4b2(void) {
  LOAD_REGS();
L_eec4b2: /* eec4b2: mov eax, ecx */
  eax = ecx;
/* eec4b4: mov dword ptr [eax], 0xef744c */
  W32((uint32_t)(eax), 0xef744cu);
/* eec4ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eec4bd(void) {
  LOAD_REGS();
L_eec4bd: /* eec4bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec4be: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* eec4c2: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eec4c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec4c6: mov esi, ecx */
  esi = ecx;
/* eec4c8: je 0xeec4ee */
  if (zf) goto L_eec4ee;
L_eec4ca: /* eec4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec4cb: push 0xeec918 */
  { uint32_t v = 0xeec918u; esp -= 4; W32(esp, v); }
/* eec4d0: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* eec4d3: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* eec4d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eec4d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec4d8: call 0xeec596 */
  esp -= 4; W32(esp, 0xeec4ddu); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* eec4dd: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eec4e0: je 0xeec4e9 */
  if (zf) goto L_eec4e9;
L_eec4e2: /* eec4e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec4e3: call 0xed130c */
  esp -= 4; W32(esp, 0xeec4e8u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eec4e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_eec4e9: /* eec4e9: mov eax, edi */
  eax = edi;
/* eec4eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eec4ec: jmp 0xeec503 */
  goto L_eec503;
L_eec4ee: /* eec4ee: mov ecx, esi */
  ecx = esi;
/* eec4f0: call 0xeec918 */
  esp -= 4; W32(esp, 0xeec4f5u); SPILL(); f_eec918(); if (g_unwind) return; RELOAD();
/* eec4f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eec4f8: je 0xeec501 */
  if (zf) goto L_eec501;
L_eec4fa: /* eec4fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec4fb: call 0xed130c */
  esp -= 4; W32(esp, 0xeec500u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eec500: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_eec501: /* eec501: mov eax, esi */
  eax = esi;
L_eec503: /* eec503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eec504: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eec505: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eec508(void) {
  LOAD_REGS();
L_eec508: /* eec508: mov eax, ecx */
  eax = ecx;
/* eec50a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eec520(void) {
  LOAD_REGS();
L_eec520: /* eec520: jmp dword ptr [0xf0e12c] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_eec526(void) {
  LOAD_REGS();
L_eec526: /* eec526: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec528: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec52e: je 0xeec533 */
  if (zf) goto L_eec533;
L_eec530: /* eec530: xor eax, eax */
  eax = 0;
/* eec532: ret  */
  esp += 4; SPILL(); return;
L_eec533: /* eec533: jmp 0xeec91e */
  SPILL(); f_eec91e(); return;
}

void f_eec538(void) {
  LOAD_REGS();
L_eec538: /* eec538: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* eec53a: push 0xef7450 */
  { uint32_t v = 0xef7450u; esp -= 4; W32(esp, v); }
/* eec53f: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec544u); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec544: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_eec548: /* eec548: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* eec54b: js 0xeec55b */
  if (sf) goto L_eec55b;
L_eec54d: /* eec54d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eec550: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eec553: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* eec556: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeec559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec559: jmp 0xeec548 */
  goto L_eec548;
L_eec55b: /* eec55b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec55f: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec564u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec564: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eec567(void) {
  LOAD_REGS();
L_eec567: /* eec567: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eec56a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eec56d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eec570: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec572: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* eec575: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eec578: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec57e: je 0xeec590 */
  if (zf) goto L_eec590;
L_eec580: /* eec580: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* eec587: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* eec58a: ret  */
  esp += 4; SPILL(); return;
L_eec590: /* eec590: call 0xeec91e */
  esp -= 4; W32(esp, 0xeec595u); SPILL(); f_eec91e(); if (g_unwind) return; RELOAD();
L_eec595: guest_badaddr(0xeec595); return;
}

void f_eec58b(void) {
  LOAD_REGS();
  goto L_eec58b;
L_eec55b: /* eec55b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec55f: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec564u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec564: ret 0x10 */
  esp += 20; SPILL(); return;
L_eec58b: /* eec58b: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* eec58e: jmp 0xeec55b */
  goto L_eec55b;
}

void f_eec596(void) {
  LOAD_REGS();
L_eec596: /* eec596: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eec598: push 0xef7460 */
  { uint32_t v = 0xef7460u; esp -= 4; W32(esp, v); }
/* eec59d: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec5a2u); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec5a2: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eec5a6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* eec5a9: mov eax, esi */
  eax = esi;
/* eec5ab: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* eec5af: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eec5b2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_eec5b6: /* eec5b6: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* eec5b9: js 0xeec5c6 */
  if (sf) goto L_eec5c6;
L_eec5bb: /* eec5bb: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eec5be: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eec5c1: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeec5c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec5c4: jmp 0xeec5b6 */
  goto L_eec5b6;
L_eec5c6: /* eec5c6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eec5cd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec5d1: call 0xeec5de */
  esp -= 4; W32(esp, 0xeec5d6u); SPILL(); f_eec5de(); if (g_unwind) return; RELOAD();
/* eec5d6: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec5dbu); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec5db: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eec5de(void) {
  LOAD_REGS();
L_eec5de: /* eec5de: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec5e2: jne 0xeec5f5 */
  if (!zf) goto L_eec5f5;
L_eec5e4: /* eec5e4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* eec5e7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* eec5ea: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eec5ed: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eec5f0: call 0xeec538 */
  esp -= 4; W32(esp, 0xeec5f5u); SPILL(); f_eec538(); if (g_unwind) return; RELOAD();
L_eec5f5: /* eec5f5: ret  */
  esp += 4; SPILL(); return;
}

void f_eec5f6(void) {
  LOAD_REGS();
L_eec5f6: /* eec5f6: jmp dword ptr [0xf0e128] */
  SPILL(); f_4276f0(); return; /* MSVCR70!_purecall */
}

void f_eec5fc(void) {
  LOAD_REGS();
L_eec5fc: /* eec5fc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eec5fe: push 0xef7470 */
  { uint32_t v = 0xef7470u; esp -= 4; W32(esp, v); }
/* eec603: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec608u); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec608: xor eax, eax */
  eax = 0;
/* eec60a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eec60d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* eec610: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_eec613: /* eec613: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eec616: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eec619: jge 0xeec62e */
  if ((sf == of)) goto L_eec62e;
L_eec61b: /* eec61b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eec61e: mov ecx, esi */
  ecx = esi;
/* eec620: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeec623u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec623: add esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eec626: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* eec629: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* eec62c: jmp 0xeec613 */
  goto L_eec613;
L_eec62e: /* eec62e: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eec635: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec639: call 0xeec646 */
  esp -= 4; W32(esp, 0xeec63eu); SPILL(); f_eec646(); if (g_unwind) return; RELOAD();
/* eec63e: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec643u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec643: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_eec646(void) {
  LOAD_REGS();
L_eec646: /* eec646: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec64a: jne 0xeec65d */
  if (!zf) goto L_eec65d;
L_eec64c: /* eec64c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* eec64f: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* eec652: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eec655: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eec658: call 0xeec538 */
  esp -= 4; W32(esp, 0xeec65du); SPILL(); f_eec538(); if (g_unwind) return; RELOAD();
L_eec65d: /* eec65d: ret  */
  esp += 4; SPILL(); return;
}

void f_eec65e(void) {
  LOAD_REGS();
L_eec65e: /* eec65e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eec660: push 0xef7480 */
  { uint32_t v = 0xef7480u; esp -= 4; W32(esp, v); }
/* eec665: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec66au); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec66a: xor eax, eax */
  eax = 0;
/* eec66c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eec66f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* eec672: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_eec675: /* eec675: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eec678: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eec67b: jge 0xeec694 */
  if ((sf == of)) goto L_eec694;
L_eec67d: /* eec67d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eec680: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eec683: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0xeec686u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec686: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eec689: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eec68c: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* eec68f: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* eec692: jmp 0xeec675 */
  goto L_eec675;
L_eec694: /* eec694: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eec69b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec69f: call 0xeec6ac */
  esp -= 4; W32(esp, 0xeec6a4u); SPILL(); f_eec6ac(); if (g_unwind) return; RELOAD();
/* eec6a4: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec6a9u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec6a9: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eec6ac(void) {
  LOAD_REGS();
L_eec6ac: /* eec6ac: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec6b0: jne 0xeec6c3 */
  if (!zf) goto L_eec6c3;
L_eec6b2: /* eec6b2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* eec6b5: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* eec6b8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* eec6bb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eec6be: call 0xeec538 */
  esp -= 4; W32(esp, 0xeec6c3u); SPILL(); f_eec538(); if (g_unwind) return; RELOAD();
L_eec6c3: /* eec6c3: ret  */
  esp += 4; SPILL(); return;
}

void f_eec6c4(void) {
  LOAD_REGS();
L_eec6c4: /* eec6c4: cmp dword ptr [0xf0c2ac], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c2acu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec6cb: jne 0xeec6d3 */
  if (!zf) goto L_eec6d3;
L_eec6cd: /* eec6cd: jmp dword ptr [0xf0e118] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_eec6d3: /* eec6d3: push 0xf0c29c */
  { uint32_t v = 0xf0c29cu; esp -= 4; W32(esp, v); }
/* eec6d8: push 0xf0c2ac */
  { uint32_t v = 0xf0c2acu; esp -= 4; W32(esp, v); }
/* eec6dd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* eec6e1: call 0xeec970 */
  esp -= 4; W32(esp, 0xeec6e6u); SPILL(); f_eec970(); if (g_unwind) return; RELOAD();
/* eec6e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eec6e9: ret  */
  esp += 4; SPILL(); return;
}

void f_eec6ea(void) {
  LOAD_REGS();
L_eec6ea: /* eec6ea: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* eec6ee: call 0xeec6c4 */
  esp -= 4; W32(esp, 0xeec6f3u); SPILL(); f_eec6c4(); if (g_unwind) return; RELOAD();
/* eec6f3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* eec6f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* eec6f7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* eec6f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eec6fa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* eec6fb: ret  */
  esp += 4; SPILL(); return;
}

void f_eec6fc(void) {
  LOAD_REGS();
L_eec6fc: /* eec6fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eec6fd: mov ebp, esp */
  ebp = esp;
/* eec6ff: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eec702: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* eec705: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* eec707: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* eec70b: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* eec70f: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* eec713: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* eec717: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eec71b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec71d: je 0xeec75b */
  if (zf) goto L_eec75b;
L_eec71f: /* eec71f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* eec721: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* eec723: jns 0xeec743 */
  if (!sf) goto L_eec743;
L_eec725: /* eec725: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* eec728: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* eec72b: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eec731: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* eec737: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* eec73a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eec73e: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* eec741: jmp 0xeec76f */
  goto L_eec76f;
L_eec743: /* eec743: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* eec746: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* eec749: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* eec74f: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* eec752: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eec756: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* eec759: jmp 0xeec76f */
  goto L_eec76f;
L_eec75b: /* eec75b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eec75f: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec765: jne 0xeec71f */
  if (!zf) goto L_eec71f;
L_eec767: /* eec767: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* eec76b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_eec76f: /* eec76f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eec770: ret  */
  esp += 4; SPILL(); return;
}

void f_eec780(void) {
  LOAD_REGS();
L_eec780: /* eec780: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec785: jae 0xeec795 */
  if (!cf) goto L_eec795;
L_eec787: /* eec787: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* eec789: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eec78b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eec78e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eec790: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* eec791: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec793: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec794: ret  */
  esp += 4; SPILL(); return;
L_eec795: /* eec795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eec796: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_eec79a: /* eec79a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eec7a0: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eec7a5: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eec7a7: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec7ac: jae 0xeec79a */
  if (!cf) goto L_eec79a;
L_eec7ae: /* eec7ae: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eec7b0: mov eax, esp */
  eax = esp;
/* eec7b2: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eec7b4: mov esp, ecx */
  esp = ecx;
/* eec7b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eec7b8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* eec7bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec7bc: ret  */
  esp += 4; SPILL(); return;
}

void f_eec7bd(void) {
  LOAD_REGS();
L_eec7bd: /* eec7bd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eec7c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec7c3: jne 0xeec7d3 */
  if (!zf) goto L_eec7d3;
L_eec7c5: /* eec7c5: cmp dword ptr [0xf0c280], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c280u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eec7cb: jle 0xeec7fb */
  if ((zf || sf != of)) goto L_eec7fb;
L_eec7cd: /* eec7cd: dec dword ptr [0xf0c280] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c280u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xf0c280u), r);
  }
L_eec7d3: /* eec7d3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec7d6: mov ecx, dword ptr [0xf0e138] */
  ecx = R32((uint32_t)(0xf0e138u));
/* eec7dc: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eec7de: mov dword ptr [0xf0c284], ecx */
  W32((uint32_t)(0xf0c284u), ecx);
/* eec7e4: jne 0xeec835 */
  if (!zf) goto L_eec835;
L_eec7e6: /* eec7e6: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* eec7eb: call dword ptr [0xf0e134] */
  esp -= 4; W32(esp, 0xeec7f1u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* eec7f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec7f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eec7f4: mov dword ptr [0xf0c2ac], eax */
  W32((uint32_t)(0xf0c2acu), eax);
/* eec7f9: jne 0xeec7ff */
  if (!zf) goto L_eec7ff;
L_eec7fb: /* eec7fb: xor eax, eax */
  eax = 0;
/* eec7fd: jmp 0xeec878 */
  goto L_eec878;
L_eec7ff: /* eec7ff: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* eec802: mov eax, dword ptr [0xf0c2ac] */
  eax = R32((uint32_t)(0xf0c2acu));
/* eec807: mov dword ptr [0xf0c29c], eax */
  W32((uint32_t)(0xf0c29cu), eax);
/* eec80c: call 0xeec982 */
  esp -= 4; W32(esp, 0xeec811u); SPILL(); f_eec982(); if (g_unwind) return; RELOAD();
/* eec811: push 0xeec9c6 */
  { uint32_t v = 0xeec9c6u; esp -= 4; W32(esp, v); }
/* eec816: call 0xeec6ea */
  esp -= 4; W32(esp, 0xeec81bu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* eec81b: mov dword ptr [esp], 0xf02324 */
  W32((uint32_t)(esp), 0xf02324u);
/* eec822: push 0xf02000 */
  { uint32_t v = 0xf02000u; esp -= 4; W32(esp, v); }
/* eec827: call 0xeec97c */
  esp -= 4; W32(esp, 0xeec82cu); SPILL(); f_eec97c(); if (g_unwind) return; RELOAD();
/* eec82c: inc dword ptr [0xf0c280] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c280u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xf0c280u), r);
  }
/* eec832: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eec833: jmp 0xeec874 */
  goto L_eec874;
L_eec835: /* eec835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec837: jne 0xeec875 */
  if (!zf) goto L_eec875;
L_eec839: /* eec839: mov eax, dword ptr [0xf0c2ac] */
  eax = R32((uint32_t)(0xf0c2acu));
/* eec83e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec840: je 0xeec875 */
  if (zf) goto L_eec875;
L_eec842: /* eec842: jmp 0xeec857 */
  goto L_eec857;
L_eec844: /* eec844: mov ecx, dword ptr [0xf0c29c] */
  ecx = R32((uint32_t)(0xf0c29cu));
/* eec84a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eec84c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec84e: je 0xeec857 */
  if (zf) goto L_eec857;
L_eec850: /* eec850: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xeec852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec852: mov eax, dword ptr [0xf0c2ac] */
  eax = R32((uint32_t)(0xf0c2acu));
L_eec857: /* eec857: sub dword ptr [0xf0c29c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c29cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf0c29cu), r);
  }
/* eec85e: cmp dword ptr [0xf0c29c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c29cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec864: jae 0xeec844 */
  if (!cf) goto L_eec844;
L_eec866: /* eec866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec867: call dword ptr [0xf0e114] */
  esp -= 4; W32(esp, 0xeec86du); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* eec86d: and dword ptr [0xf0c2ac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c2acu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xf0c2acu), r);
  }
L_eec874: /* eec874: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_eec875: /* eec875: xor eax, eax */
  eax = 0;
/* eec877: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_eec878: /* eec878: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eec87b(void) {
  LOAD_REGS();
L_eec87b: /* eec87b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eec87c: mov ebp, esp */
  ebp = esp;
/* eec87e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec87f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* eec882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec883: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* eec886: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec888: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec889: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* eec88c: jne 0xeec897 */
  if (!zf) goto L_eec897;
L_eec88e: /* eec88e: cmp dword ptr [0xf0c280], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0c280u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec895: jmp 0xeec8bd */
  goto L_eec8bd;
L_eec897: /* eec897: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec89a: je 0xeec8a1 */
  if (zf) goto L_eec8a1;
L_eec89c: /* eec89c: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec89f: jne 0xeec8c3 */
  if (!zf) goto L_eec8c3;
L_eec8a1: /* eec8a1: mov eax, dword ptr [0xf0c290] */
  eax = R32((uint32_t)(0xf0c290u));
/* eec8a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec8a8: je 0xeec8b3 */
  if (zf) goto L_eec8b3;
L_eec8aa: /* eec8aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec8ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec8ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec8ad: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec8af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec8b1: je 0xeec8bf */
  if (zf) goto L_eec8bf;
L_eec8b3: /* eec8b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec8b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec8b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec8b6: call 0xeec7bd */
  esp -= 4; W32(esp, 0xeec8bbu); SPILL(); f_eec7bd(); if (g_unwind) return; RELOAD();
/* eec8bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_eec8bd: /* eec8bd: jne 0xeec8c3 */
  if (!zf) goto L_eec8c3;
L_eec8bf: /* eec8bf: xor eax, eax */
  eax = 0;
/* eec8c1: jmp 0xeec911 */
  goto L_eec911;
L_eec8c3: /* eec8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec8c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec8c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec8c6: call 0xed11cc */
  esp -= 4; W32(esp, 0xeec8cbu); SPILL(); f_ed11cc(); if (g_unwind) return; RELOAD();
/* eec8cb: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec8ce: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* eec8d1: jne 0xeec8df */
  if (!zf) goto L_eec8df;
L_eec8d3: /* eec8d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec8d5: jne 0xeec90e */
  if (!zf) goto L_eec90e;
L_eec8d7: /* eec8d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec8d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec8d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec8da: call 0xeec7bd */
  esp -= 4; W32(esp, 0xeec8dfu); SPILL(); f_eec7bd(); if (g_unwind) return; RELOAD();
L_eec8df: /* eec8df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec8e1: je 0xeec8e8 */
  if (zf) goto L_eec8e8;
L_eec8e3: /* eec8e3: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec8e6: jne 0xeec90e */
  if (!zf) goto L_eec90e;
L_eec8e8: /* eec8e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec8e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec8ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec8eb: call 0xeec7bd */
  esp -= 4; W32(esp, 0xeec8f0u); SPILL(); f_eec7bd(); if (g_unwind) return; RELOAD();
/* eec8f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec8f2: jne 0xeec8f7 */
  if (!zf) goto L_eec8f7;
L_eec8f4: /* eec8f4: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_eec8f7: /* eec8f7: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eec8fb: je 0xeec90e */
  if (zf) goto L_eec90e;
L_eec8fd: /* eec8fd: mov eax, dword ptr [0xf0c290] */
  eax = R32((uint32_t)(0xf0c290u));
/* eec902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec904: je 0xeec90e */
  if (zf) goto L_eec90e;
L_eec906: /* eec906: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec909: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec90bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec90b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_eec90e: /* eec90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_eec911: /* eec911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eec912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eec913: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eec914: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eec915: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eec918(void) {
  LOAD_REGS();
L_eec918: /* eec918: jmp dword ptr [0xf0e124] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_eec91e(void) {
  LOAD_REGS();
L_eec91e: /* eec91e: jmp dword ptr [0xf0e13c] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_eec924(void) {
  LOAD_REGS();
L_eec924: /* eec924: push 0xeeca10 */
  { uint32_t v = 0xeeca10u; esp -= 4; W32(esp, v); }
/* eec929: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eec92f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec930: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eec934: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* eec938: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* eec93c: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eec93e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eec93f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eec940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eec941: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* eec944: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* eec947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eec948: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* eec94b: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* eec952: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* eec955: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* eec958: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* eec95e: ret  */
  esp += 4; SPILL(); return;
}

void f_eec95f(void) {
  LOAD_REGS();
L_eec95f: /* eec95f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eec962: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eec969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eec96a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eec96b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eec96c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eec96d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eec96e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eec96f: ret  */
  esp += 4; SPILL(); return;
}

void f_eec970(void) {
  LOAD_REGS();
L_eec970: /* eec970: jmp dword ptr [0xf0e11c] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_eec976(void) {
  LOAD_REGS();
L_eec976: /* eec976: jmp dword ptr [0xf0e114] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_eec97c(void) {
  LOAD_REGS();
L_eec97c: /* eec97c: jmp dword ptr [0xf0e120] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_eec982(void) {
  LOAD_REGS();
L_eec982: /* eec982: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eec984: push 0xef7490 */
  { uint32_t v = 0xef7490u; esp -= 4; W32(esp, v); }
/* eec989: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec98eu); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec98e: mov dword ptr [ebp - 0x1c], 0xef7914 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xef7914u);
L_eec995: /* eec995: cmp dword ptr [ebp - 0x1c], 0xef7a14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xef7a14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec99c: jae 0xeec9c0 */
  if (!cf) goto L_eec9c0;
L_eec99e: /* eec99e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9a2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eec9a5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec9a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec9a9: je 0xeec9b6 */
  if (zf) goto L_eec9b6;
L_eec9ab: /* eec9ab: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec9adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec9ad: jmp 0xeec9b6 */
  goto L_eec9b6;
L_eec9b6: /* eec9b6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9ba: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eec9be: jmp 0xeec995 */
  goto L_eec995;
L_eec9c0: /* eec9c0: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec9c5u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec9c5: ret  */
  esp += 4; SPILL(); return;
}

void f_eec9af(void) {
  LOAD_REGS();
L_eec9af: /* eec9af: xor eax, eax */
  eax = 0;
/* eec9b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eec9b2: ret  */
  esp += 4; SPILL(); return;
}

void f_eec9b3(void) {
  LOAD_REGS();
  goto L_eec9b3;
L_eec995: /* eec995: cmp dword ptr [ebp - 0x1c], 0xef7a14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xef7a14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec99c: jae 0xeec9c0 */
  if (!cf) goto L_eec9c0;
L_eec99e: /* eec99e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9a2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eec9a5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec9a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec9a9: je 0xeec9b6 */
  if (zf) goto L_eec9b6;
L_eec9ab: /* eec9ab: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec9adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec9ad: jmp 0xeec9b6 */
  goto L_eec9b6;
L_eec9b3: /* eec9b3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_eec9b6: /* eec9b6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9ba: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eec9be: jmp 0xeec995 */
  goto L_eec995;
L_eec9c0: /* eec9c0: call 0xeec95f */
  esp -= 4; W32(esp, 0xeec9c5u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eec9c5: ret  */
  esp += 4; SPILL(); return;
}

void f_eec9c6(void) {
  LOAD_REGS();
L_eec9c6: /* eec9c6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eec9c8: push 0xef74a0 */
  { uint32_t v = 0xef74a0u; esp -= 4; W32(esp, v); }
/* eec9cd: call 0xeec924 */
  esp -= 4; W32(esp, 0xeec9d2u); SPILL(); f_eec924(); if (g_unwind) return; RELOAD();
/* eec9d2: mov dword ptr [ebp - 0x1c], 0xef7b1c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xef7b1cu);
L_eec9d9: /* eec9d9: cmp dword ptr [ebp - 0x1c], 0xef7c1c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xef7c1cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec9e0: jae 0xeeca04 */
  if (!cf) goto L_eeca04;
L_eec9e2: /* eec9e2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eec9e9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec9eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec9ed: je 0xeec9fa */
  if (zf) goto L_eec9fa;
L_eec9ef: /* eec9ef: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec9f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec9f1: jmp 0xeec9fa */
  goto L_eec9fa;
L_eec9fa: /* eec9fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9fe: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eeca02: jmp 0xeec9d9 */
  goto L_eec9d9;
L_eeca04: /* eeca04: call 0xeec95f */
  esp -= 4; W32(esp, 0xeeca09u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eeca09: ret  */
  esp += 4; SPILL(); return;
}

void f_eec9f3(void) {
  LOAD_REGS();
L_eec9f3: /* eec9f3: xor eax, eax */
  eax = 0;
/* eec9f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eec9f6: ret  */
  esp += 4; SPILL(); return;
}

void f_eec9f7(void) {
  LOAD_REGS();
  goto L_eec9f7;
L_eec9d9: /* eec9d9: cmp dword ptr [ebp - 0x1c], 0xef7c1c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xef7c1cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eec9e0: jae 0xeeca04 */
  if (!cf) goto L_eeca04;
L_eec9e2: /* eec9e2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eec9e9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eec9eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eec9ed: je 0xeec9fa */
  if (zf) goto L_eec9fa;
L_eec9ef: /* eec9ef: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeec9f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eec9f1: jmp 0xeec9fa */
  goto L_eec9fa;
L_eec9f7: /* eec9f7: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_eec9fa: /* eec9fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eec9fe: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eeca02: jmp 0xeec9d9 */
  goto L_eec9d9;
L_eeca04: /* eeca04: call 0xeec95f */
  esp -= 4; W32(esp, 0xeeca09u); SPILL(); f_eec95f(); if (g_unwind) return; RELOAD();
/* eeca09: ret  */
  esp += 4; SPILL(); return;
}

void f_eeca0a(void) {
  LOAD_REGS();
L_eeca0a: /* eeca0a: jmp dword ptr [0xf0e134] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_eeca10(void) {
  LOAD_REGS();
L_eeca10: /* eeca10: jmp dword ptr [0xf0e140] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_eed9c0(void) {
  LOAD_REGS();
  goto L_eed9c0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eed9c0: /* eed9c0: mov eax, 0xef7dc8 */
  eax = 0xef7dc8u;
/* eed9c5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eed9d0(void) {
  LOAD_REGS();
L_eed9d0: /* eed9d0: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eed9d3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eed9d9(void) {
  LOAD_REGS();
L_eed9d9: /* eed9d9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eed9dc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eed9e2(void) {
  LOAD_REGS();
L_eed9e2: /* eed9e2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eed9e5: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eed9eb(void) {
  LOAD_REGS();
L_eed9eb: /* eed9eb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eed9ee: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eed9f4(void) {
  LOAD_REGS();
L_eed9f4: /* eed9f4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eed9f7: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eed9fd(void) {
  LOAD_REGS();
L_eed9fd: /* eed9fd: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* eeda00: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eeda03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eeda05: je 0xeeda14 */
  if (zf) goto L_eeda14;
L_eeda0b: /* eeda0b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* eeda0e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eeda14: /* eeda14: ret  */
  esp += 4; SPILL(); return;
}

void f_eeda15(void) {
  LOAD_REGS();
  goto L_eeda15;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda15: /* eeda15: mov eax, 0xef7e20 */
  eax = 0xef7e20u;
/* eeda1a: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeda40(void) {
  LOAD_REGS();
  goto L_eeda40;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda40: /* eeda40: mov eax, 0xef7e88 */
  eax = 0xef7e88u;
/* eeda45: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeda50(void) {
  LOAD_REGS();
  goto L_eeda50;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda50: /* eeda50: mov eax, 0xef7ef4 */
  eax = 0xef7ef4u;
/* eeda55: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeda60(void) {
  LOAD_REGS();
  goto L_eeda60;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda60: /* eeda60: mov eax, 0xef7f60 */
  eax = 0xef7f60u;
/* eeda65: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeda70(void) {
  LOAD_REGS();
L_eeda70: /* eeda70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeda73: jmp 0xed10d7 */
  SPILL(); f_ed10d7(); return;
}

void f_eeda78(void) {
  LOAD_REGS();
  goto L_eeda78;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda78: /* eeda78: mov eax, 0xef7f90 */
  eax = 0xef7f90u;
/* eeda7d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeda90(void) {
  LOAD_REGS();
L_eeda90: /* eeda90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeda93: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eeda99(void) {
  LOAD_REGS();
  goto L_eeda99;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeda99: /* eeda99: mov eax, 0xef7fb8 */
  eax = 0xef7fb8u;
/* eeda9e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedab0(void) {
  LOAD_REGS();
L_eedab0: /* eedab0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedab3: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eedab9(void) {
  LOAD_REGS();
  goto L_eedab9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedab9: /* eedab9: mov eax, 0xef7fe0 */
  eax = 0xef7fe0u;
/* eedabe: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedad0(void) {
  LOAD_REGS();
L_eedad0: /* eedad0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedad3: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eedad6: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eedadc(void) {
  LOAD_REGS();
  goto L_eedadc;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedadc: /* eedadc: mov eax, 0xef8008 */
  eax = 0xef8008u;
/* eedae1: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedaf0(void) {
  LOAD_REGS();
L_eedaf0: /* eedaf0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eedaf3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedaf9(void) {
  LOAD_REGS();
  goto L_eedaf9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedaf9: /* eedaf9: mov eax, 0xef8074 */
  eax = 0xef8074u;
/* eedafe: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedb10(void) {
  LOAD_REGS();
  goto L_eedb10;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedb10: /* eedb10: mov eax, 0xef80e0 */
  eax = 0xef80e0u;
/* eedb15: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedb20(void) {
  LOAD_REGS();
L_eedb20: /* eedb20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedb23: jmp dword ptr [0xf0df1c] */
  SPILL(); f_6c60cd(); return; /* Engine!??1AInternetInfo@@UAE@XZ */
}

void f_eedb29(void) {
  LOAD_REGS();
  goto L_eedb29;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedb29: /* eedb29: mov eax, 0xef8110 */
  eax = 0xef8110u;
/* eedb2e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedb40(void) {
  LOAD_REGS();
L_eedb40: /* eedb40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedb43: jmp 0xed1212 */
  SPILL(); f_ed1212(); return;
}

void f_eedb48(void) {
  LOAD_REGS();
  goto L_eedb48;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedb48: /* eedb48: mov eax, 0xef8138 */
  eax = 0xef8138u;
/* eedb4d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedb60(void) {
  LOAD_REGS();
L_eedb60: /* eedb60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedb63: jmp 0xed1212 */
  SPILL(); f_ed1212(); return;
}

void f_eedb68(void) {
  LOAD_REGS();
L_eedb68: /* eedb68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedb6b: add ecx, 0x368 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eedb71: jmp 0xed1627 */
  SPILL(); f_ed1627(); return;
}

void f_eedb76(void) {
  LOAD_REGS();
  goto L_eedb76;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedb76: /* eedb76: mov eax, 0xef8168 */
  eax = 0xef8168u;
/* eedb7b: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedb90(void) {
  LOAD_REGS();
L_eedb90: /* eedb90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedb93: jmp dword ptr [0xf0df30] */
  SPILL(); f_6c8a6c(); return; /* Engine!??1AGameStats@@UAE@XZ */
}

void f_eedb99(void) {
  LOAD_REGS();
  goto L_eedb99;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedb99: /* eedb99: mov eax, 0xef8190 */
  eax = 0xef8190u;
/* eedb9e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedbb0(void) {
  LOAD_REGS();
L_eedbb0: /* eedbb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedbb3: jmp dword ptr [0xf0df40] */
  SPILL(); f_6c688e(); return; /* Engine!??1AInfo@@UAE@XZ */
}

void f_eedbb9(void) {
  LOAD_REGS();
L_eedbb9: /* eedbb9: mov eax, dword ptr [0xf0dbe4] */
  eax = R32((uint32_t)(0xf0dbe4u));
/* eedbbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eedbbf: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* eedbc1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eedbc3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedbc6: add ecx, 0x360 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x360u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eedbcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eedbcd: call 0xeec596 */
  esp -= 4; W32(esp, 0xeedbd2u); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* eedbd2: ret  */
  esp += 4; SPILL(); return;
}

void f_eedbd3(void) {
  LOAD_REGS();
  goto L_eedbd3;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedbd3: /* eedbd3: mov eax, 0xef81c0 */
  eax = 0xef81c0u;
/* eedbd8: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedbf0(void) {
  LOAD_REGS();
L_eedbf0: /* eedbf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedbf3: jmp dword ptr [0xf0df40] */
  SPILL(); f_6c688e(); return; /* Engine!??1AInfo@@UAE@XZ */
}

void f_eedbf9(void) {
  LOAD_REGS();
  goto L_eedbf9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedbf9: /* eedbf9: mov eax, 0xef81e8 */
  eax = 0xef81e8u;
/* eedbfe: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedc10(void) {
  LOAD_REGS();
L_eedc10: /* eedc10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc13: jmp dword ptr [0xf0df40] */
  SPILL(); f_6c688e(); return; /* Engine!??1AInfo@@UAE@XZ */
}

void f_eedc19(void) {
  LOAD_REGS();
  goto L_eedc19;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedc19: /* eedc19: mov eax, 0xef8210 */
  eax = 0xef8210u;
/* eedc1e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedc30(void) {
  LOAD_REGS();
L_eedc30: /* eedc30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc33: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedc39(void) {
  LOAD_REGS();
  goto L_eedc39;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedc39: /* eedc39: mov eax, 0xef8238 */
  eax = 0xef8238u;
/* eedc3e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedc50(void) {
  LOAD_REGS();
L_eedc50: /* eedc50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc53: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedc59(void) {
  LOAD_REGS();
  goto L_eedc59;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedc59: /* eedc59: mov eax, 0xef8260 */
  eax = 0xef8260u;
/* eedc5e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedc70(void) {
  LOAD_REGS();
L_eedc70: /* eedc70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc73: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedc79(void) {
  LOAD_REGS();
  goto L_eedc79;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedc79: /* eedc79: mov eax, 0xef8288 */
  eax = 0xef8288u;
/* eedc7e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedc90(void) {
  LOAD_REGS();
L_eedc90: /* eedc90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc93: jmp 0xed11a9 */
  SPILL(); f_ed11a9(); return;
}

void f_eedc98(void) {
  LOAD_REGS();
L_eedc98: /* eedc98: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedc9b: add ecx, 0x39c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eedca1: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eedca7(void) {
  LOAD_REGS();
  goto L_eedca7;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedca7: /* eedca7: mov eax, 0xef82b8 */
  eax = 0xef82b8u;
/* eedcac: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedcc0(void) {
  LOAD_REGS();
L_eedcc0: /* eedcc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedcc3: jmp 0xed11a9 */
  SPILL(); f_ed11a9(); return;
}

void f_eedcc8(void) {
  LOAD_REGS();
  goto L_eedcc8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedcc8: /* eedcc8: mov eax, 0xef82e0 */
  eax = 0xef82e0u;
/* eedccd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedce0(void) {
  LOAD_REGS();
L_eedce0: /* eedce0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedce3: jmp 0xed11a9 */
  SPILL(); f_ed11a9(); return;
}

void f_eedce8(void) {
  LOAD_REGS();
  goto L_eedce8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedce8: /* eedce8: mov eax, 0xef8308 */
  eax = 0xef8308u;
/* eedced: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedd00(void) {
  LOAD_REGS();
L_eedd00: /* eedd00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedd03: jmp 0xed11a9 */
  SPILL(); f_ed11a9(); return;
}

void f_eedd08(void) {
  LOAD_REGS();
  goto L_eedd08;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedd08: /* eedd08: mov eax, 0xef8330 */
  eax = 0xef8330u;
/* eedd0d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedd20(void) {
  LOAD_REGS();
L_eedd20: /* eedd20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedd23: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedd29(void) {
  LOAD_REGS();
  goto L_eedd29;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedd29: /* eedd29: mov eax, 0xef8358 */
  eax = 0xef8358u;
/* eedd2e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedd40(void) {
  LOAD_REGS();
L_eedd40: /* eedd40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedd43: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedd49(void) {
  LOAD_REGS();
  goto L_eedd49;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedd49: /* eedd49: mov eax, 0xef8380 */
  eax = 0xef8380u;
/* eedd4e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedd60(void) {
  LOAD_REGS();
L_eedd60: /* eedd60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedd63: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedd69(void) {
  LOAD_REGS();
  goto L_eedd69;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedd69: /* eedd69: mov eax, 0xef83a8 */
  eax = 0xef83a8u;
/* eedd6e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedd80(void) {
  LOAD_REGS();
L_eedd80: /* eedd80: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* eedd83: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eedd89(void) {
  LOAD_REGS();
L_eedd89: /* eedd89: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eedd8c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedd92(void) {
  LOAD_REGS();
L_eedd92: /* eedd92: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eedd95: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedd9b(void) {
  LOAD_REGS();
L_eedd9b: /* eedd9b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eedd9e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedda4(void) {
  LOAD_REGS();
L_eedda4: /* eedda4: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* eeddaa: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eeddb0(void) {
  LOAD_REGS();
L_eeddb0: /* eeddb0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eeddb3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeddb9(void) {
  LOAD_REGS();
L_eeddb9: /* eeddb9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eeddbc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeddc2(void) {
  LOAD_REGS();
L_eeddc2: /* eeddc2: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* eeddc8: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eeddce(void) {
  LOAD_REGS();
L_eeddce: /* eeddce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eeddd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeddd2: call 0xed130c */
  esp -= 4; W32(esp, 0xeeddd7u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeddd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeddd8: ret  */
  esp += 4; SPILL(); return;
}

void f_eeddd9(void) {
  LOAD_REGS();
L_eeddd9: /* eeddd9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eedddc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedde2(void) {
  LOAD_REGS();
  goto L_eedde2;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedde2: /* eedde2: mov eax, 0xef845c */
  eax = 0xef845cu;
/* eedde7: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eede10(void) {
  LOAD_REGS();
L_eede10: /* eede10: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* eede16: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eede1c(void) {
  LOAD_REGS();
L_eede1c: /* eede1c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eede1f: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eede25(void) {
  LOAD_REGS();
L_eede25: /* eede25: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eede28: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eede2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eede2d: je 0xeede3f */
  if (zf) goto L_eede3f;
L_eede33: /* eede33: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* eede39: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eede3f: /* eede3f: ret  */
  esp += 4; SPILL(); return;
}

void f_eede40(void) {
  LOAD_REGS();
L_eede40: /* eede40: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eede43: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eede46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eede48: je 0xeede5a */
  if (zf) goto L_eede5a;
L_eede4e: /* eede4e: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* eede54: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eede5a: /* eede5a: ret  */
  esp += 4; SPILL(); return;
}

void f_eede5b(void) {
  LOAD_REGS();
L_eede5b: /* eede5b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eede5e: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eede61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eede63: je 0xeede72 */
  if (zf) goto L_eede72;
L_eede69: /* eede69: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eede6c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eede72: /* eede72: ret  */
  esp += 4; SPILL(); return;
}

void f_eede73(void) {
  LOAD_REGS();
L_eede73: /* eede73: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eede76: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eede79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eede7b: je 0xeede8a */
  if (zf) goto L_eede8a;
L_eede81: /* eede81: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eede84: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eede8a: /* eede8a: ret  */
  esp += 4; SPILL(); return;
}

void f_eede8b(void) {
  LOAD_REGS();
L_eede8b: /* eede8b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eede8e: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eede91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eede93: je 0xeedea5 */
  if (zf) goto L_eedea5;
L_eede99: /* eede99: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eede9f: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eedea5: /* eedea5: ret  */
  esp += 4; SPILL(); return;
}

void f_eedea6(void) {
  LOAD_REGS();
L_eedea6: /* eedea6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eedea9: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedeaf(void) {
  LOAD_REGS();
L_eedeaf: /* eedeaf: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eedeb2: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedeb8(void) {
  LOAD_REGS();
L_eedeb8: /* eedeb8: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* eedebb: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedec1(void) {
  LOAD_REGS();
L_eedec1: /* eedec1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* eedec4: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedeca(void) {
  LOAD_REGS();
L_eedeca: /* eedeca: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* eeded0: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeded6(void) {
  LOAD_REGS();
L_eeded6: /* eeded6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* eededc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedee2(void) {
  LOAD_REGS();
L_eedee2: /* eedee2: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* eedee8: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eedeee(void) {
  LOAD_REGS();
  goto L_eedeee;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedeee: /* eedeee: mov eax, 0xef8568 */
  eax = 0xef8568u;
/* eedef3: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedf40(void) {
  LOAD_REGS();
  goto L_eedf40;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedf40: /* eedf40: mov eax, 0xef85e0 */
  eax = 0xef85e0u;
/* eedf45: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedf50(void) {
  LOAD_REGS();
L_eedf50: /* eedf50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedf53: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eedf59(void) {
  LOAD_REGS();
  goto L_eedf59;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedf59: /* eedf59: mov eax, 0xef8610 */
  eax = 0xef8610u;
/* eedf5e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedf70(void) {
  LOAD_REGS();
L_eedf70: /* eedf70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eedf73: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eedf79(void) {
  LOAD_REGS();
  goto L_eedf79;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedf79: /* eedf79: mov eax, 0xef8638 */
  eax = 0xef8638u;
/* eedf7e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedf90(void) {
  LOAD_REGS();
L_eedf90: /* eedf90: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* eedf93: jmp 0xed1528 */
  SPILL(); f_ed1528(); return;
}

void f_eedf98(void) {
  LOAD_REGS();
  goto L_eedf98;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedf98: /* eedf98: mov eax, 0xef8660 */
  eax = 0xef8660u;
/* eedf9d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedfb0(void) {
  LOAD_REGS();
L_eedfb0: /* eedfb0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* eedfb3: jmp 0xed1258 */
  SPILL(); f_ed1258(); return;
}

void f_eedfb8(void) {
  LOAD_REGS();
  goto L_eedfb8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedfb8: /* eedfb8: mov eax, 0xef8688 */
  eax = 0xef8688u;
/* eedfbd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedfd0(void) {
  LOAD_REGS();
L_eedfd0: /* eedfd0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eedfd3: jmp 0xed1a5a */
  SPILL(); f_ed1a5a(); return;
}

void f_eedfd8(void) {
  LOAD_REGS();
  goto L_eedfd8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedfd8: /* eedfd8: mov eax, 0xef86b0 */
  eax = 0xef86b0u;
/* eedfdd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eedff0(void) {
  LOAD_REGS();
L_eedff0: /* eedff0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eedff3: jmp 0xed1366 */
  SPILL(); f_ed1366(); return;
}

void f_eedff8(void) {
  LOAD_REGS();
  goto L_eedff8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eedff8: /* eedff8: mov eax, 0xef86d8 */
  eax = 0xef86d8u;
/* eedffd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee010(void) {
  LOAD_REGS();
L_eee010: /* eee010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee013: jmp 0xed1212 */
  SPILL(); f_ed1212(); return;
}

void f_eee018(void) {
  LOAD_REGS();
  goto L_eee018;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee018: /* eee018: mov eax, 0xef8700 */
  eax = 0xef8700u;
/* eee01d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee030(void) {
  LOAD_REGS();
L_eee030: /* eee030: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eee033: jmp 0xed1226 */
  SPILL(); f_ed1226(); return;
}

void f_eee038(void) {
  LOAD_REGS();
  goto L_eee038;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee038: /* eee038: mov eax, 0xef8728 */
  eax = 0xef8728u;
/* eee03d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee050(void) {
  LOAD_REGS();
L_eee050: /* eee050: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eee053: jmp 0xed10b4 */
  SPILL(); f_ed10b4(); return;
}

void f_eee058(void) {
  LOAD_REGS();
  goto L_eee058;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee058: /* eee058: mov eax, 0xef8750 */
  eax = 0xef8750u;
/* eee05d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee070(void) {
  LOAD_REGS();
L_eee070: /* eee070: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* eee073: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eee079(void) {
  LOAD_REGS();
L_eee079: /* eee079: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* eee07c: jmp 0xed1a14 */
  SPILL(); f_ed1a14(); return;
}

void f_eee081(void) {
  LOAD_REGS();
  goto L_eee081;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee081: /* eee081: mov eax, 0xef8780 */
  eax = 0xef8780u;
/* eee086: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee0a0(void) {
  LOAD_REGS();
L_eee0a0: /* eee0a0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eee0a3: jmp 0xed188e */
  SPILL(); f_ed188e(); return;
}

void f_eee0a8(void) {
  LOAD_REGS();
  goto L_eee0a8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee0a8: /* eee0a8: mov eax, 0xef87a8 */
  eax = 0xef87a8u;
/* eee0ad: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee0c0(void) {
  LOAD_REGS();
L_eee0c0: /* eee0c0: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* eee0c3: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eee0c9(void) {
  LOAD_REGS();
L_eee0c9: /* eee0c9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eee0cc: jmp 0xed14dd */
  SPILL(); f_ed14dd(); return;
}

void f_eee0d1(void) {
  LOAD_REGS();
  goto L_eee0d1;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee0d1: /* eee0d1: mov eax, 0xef87d8 */
  eax = 0xef87d8u;
/* eee0d6: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee0f0(void) {
  LOAD_REGS();
L_eee0f0: /* eee0f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee0f3: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee0f9(void) {
  LOAD_REGS();
  goto L_eee0f9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee0f9: /* eee0f9: mov eax, 0xef8800 */
  eax = 0xef8800u;
/* eee0fe: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee110(void) {
  LOAD_REGS();
  goto L_eee110;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee110: /* eee110: mov eax, 0xef8864 */
  eax = 0xef8864u;
/* eee115: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee120(void) {
  LOAD_REGS();
L_eee120: /* eee120: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee123: jmp dword ptr [0xf0df8c] */
  SPILL(); f_6c907a(); return; /* Engine!??1UDownload@@UAE@XZ */
}

void f_eee129(void) {
  LOAD_REGS();
L_eee129: /* eee129: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee12c: add ecx, 0x454 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee132: jmp dword ptr [0xf0dbe4] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_eee138(void) {
  LOAD_REGS();
L_eee138: /* eee138: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee13b: add ecx, 0x490 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee141: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eee147(void) {
  LOAD_REGS();
L_eee147: /* eee147: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee14a: add ecx, 0x4d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee150: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee156(void) {
  LOAD_REGS();
L_eee156: /* eee156: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee159: add ecx, 0x4e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee15f: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eee164(void) {
  LOAD_REGS();
  goto L_eee164;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee164: /* eee164: mov eax, 0xef88c4 */
  eax = 0xef88c4u;
/* eee169: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee190(void) {
  LOAD_REGS();
L_eee190: /* eee190: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee193: jmp dword ptr [0xf0df8c] */
  SPILL(); f_6c907a(); return; /* Engine!??1UDownload@@UAE@XZ */
}

void f_eee199(void) {
  LOAD_REGS();
L_eee199: /* eee199: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee19c: add ecx, 0x454 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee1a2: jmp dword ptr [0xf0dbe4] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_eee1a8(void) {
  LOAD_REGS();
L_eee1a8: /* eee1a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee1ab: add ecx, 0x490 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee1b1: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eee1b7(void) {
  LOAD_REGS();
L_eee1b7: /* eee1b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee1ba: add ecx, 0x4d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee1c0: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee1c6(void) {
  LOAD_REGS();
L_eee1c6: /* eee1c6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee1c9: add ecx, 0x4e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee1cf: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eee1d4(void) {
  LOAD_REGS();
  goto L_eee1d4;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee1d4: /* eee1d4: mov eax, 0xef8910 */
  eax = 0xef8910u;
/* eee1d9: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee200(void) {
  LOAD_REGS();
  goto L_eee200;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee200: /* eee200: mov eax, 0xef8978 */
  eax = 0xef8978u;
/* eee205: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee210(void) {
  LOAD_REGS();
L_eee210: /* eee210: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee213: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee219(void) {
  LOAD_REGS();
  goto L_eee219;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee219: /* eee219: mov eax, 0xef89a8 */
  eax = 0xef89a8u;
/* eee21e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee230(void) {
  LOAD_REGS();
L_eee230: /* eee230: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee233: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee239(void) {
  LOAD_REGS();
  goto L_eee239;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee239: /* eee239: mov eax, 0xef89d0 */
  eax = 0xef89d0u;
/* eee23e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee250(void) {
  LOAD_REGS();
L_eee250: /* eee250: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee253: jmp 0xed10d7 */
  SPILL(); f_ed10d7(); return;
}

void f_eee258(void) {
  LOAD_REGS();
  goto L_eee258;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee258: /* eee258: mov eax, 0xef89f8 */
  eax = 0xef89f8u;
/* eee25d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee270(void) {
  LOAD_REGS();
L_eee270: /* eee270: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee273: jmp 0xed10d7 */
  SPILL(); f_ed10d7(); return;
}

void f_eee278(void) {
  LOAD_REGS();
  goto L_eee278;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee278: /* eee278: mov eax, 0xef8a20 */
  eax = 0xef8a20u;
/* eee27d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee290(void) {
  LOAD_REGS();
L_eee290: /* eee290: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee293: jmp 0xed1302 */
  SPILL(); f_ed1302(); return;
}

void f_eee298(void) {
  LOAD_REGS();
L_eee298: /* eee298: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee29b: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee2a1: jmp 0xed19ba */
  SPILL(); f_ed19ba(); return;
}

void f_eee2a6(void) {
  LOAD_REGS();
  goto L_eee2a6;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee2a6: /* eee2a6: mov eax, 0xef8a50 */
  eax = 0xef8a50u;
/* eee2ab: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee2c0(void) {
  LOAD_REGS();
L_eee2c0: /* eee2c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee2c3: jmp 0xed1302 */
  SPILL(); f_ed1302(); return;
}

void f_eee2c8(void) {
  LOAD_REGS();
  goto L_eee2c8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee2c8: /* eee2c8: mov eax, 0xef8a78 */
  eax = 0xef8a78u;
/* eee2cd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee2e0(void) {
  LOAD_REGS();
L_eee2e0: /* eee2e0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eee2e3: jmp dword ptr [0xf0df1c] */
  SPILL(); f_6c60cd(); return; /* Engine!??1AInternetInfo@@UAE@XZ */
}

void f_eee2e9(void) {
  LOAD_REGS();
L_eee2e9: /* eee2e9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eee2ec: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee2f2(void) {
  LOAD_REGS();
  goto L_eee2f2;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee2f2: /* eee2f2: mov eax, 0xef8aec */
  eax = 0xef8aecu;
/* eee2f7: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee310(void) {
  LOAD_REGS();
  goto L_eee310;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee310: /* eee310: mov eax, 0xef8b58 */
  eax = 0xef8b58u;
/* eee315: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee320(void) {
  LOAD_REGS();
L_eee320: /* eee320: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eee323: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee329(void) {
  LOAD_REGS();
L_eee329: /* eee329: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eee32c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee332(void) {
  LOAD_REGS();
L_eee332: /* eee332: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eee335: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee33b(void) {
  LOAD_REGS();
L_eee33b: /* eee33b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eee33e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee344(void) {
  LOAD_REGS();
L_eee344: /* eee344: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eee34a: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
}

void f_eee350(void) {
  LOAD_REGS();
  goto L_eee350;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee350: /* eee350: mov eax, 0xef8bec */
  eax = 0xef8becu;
/* eee355: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee370(void) {
  LOAD_REGS();
  goto L_eee370;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee370: /* eee370: mov eax, 0xef8c5c */
  eax = 0xef8c5cu;
/* eee375: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee380(void) {
  LOAD_REGS();
L_eee380: /* eee380: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eee383: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee389(void) {
  LOAD_REGS();
  goto L_eee389;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee389: /* eee389: mov eax, 0xef8cd0 */
  eax = 0xef8cd0u;
/* eee38e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee3a0(void) {
  LOAD_REGS();
L_eee3a0: /* eee3a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eee3a3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee3a9(void) {
  LOAD_REGS();
  goto L_eee3a9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee3a9: /* eee3a9: mov eax, 0xef8d44 */
  eax = 0xef8d44u;
/* eee3ae: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee3c0(void) {
  LOAD_REGS();
L_eee3c0: /* eee3c0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eee3c3: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee3c6: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee3cc(void) {
  LOAD_REGS();
L_eee3cc: /* eee3cc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eee3cf: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee3d2: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee3d8(void) {
  LOAD_REGS();
  goto L_eee3d8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee3d8: /* eee3d8: mov eax, 0xef8dc0 */
  eax = 0xef8dc0u;
/* eee3dd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee3f0(void) {
  LOAD_REGS();
  goto L_eee3f0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee3f0: /* eee3f0: mov eax, 0xef8e2c */
  eax = 0xef8e2cu;
/* eee3f5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee400(void) {
  LOAD_REGS();
  goto L_eee400;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee400: /* eee400: mov eax, 0xef8e98 */
  eax = 0xef8e98u;
/* eee405: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee410(void) {
  LOAD_REGS();
L_eee410: /* eee410: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eee413: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee419(void) {
  LOAD_REGS();
  goto L_eee419;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee419: /* eee419: mov eax, 0xef8ec8 */
  eax = 0xef8ec8u;
/* eee41e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee430(void) {
  LOAD_REGS();
  goto L_eee430;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee430: /* eee430: mov eax, 0xef8f2c */
  eax = 0xef8f2cu;
/* eee435: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee440(void) {
  LOAD_REGS();
L_eee440: /* eee440: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee443: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eee449(void) {
  LOAD_REGS();
  goto L_eee449;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee449: /* eee449: mov eax, 0xef8f5c */
  eax = 0xef8f5cu;
/* eee44e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee460(void) {
  LOAD_REGS();
  goto L_eee460;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee460: /* eee460: mov eax, 0xef8fc0 */
  eax = 0xef8fc0u;
/* eee465: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee470(void) {
  LOAD_REGS();
L_eee470: /* eee470: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee473: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eee479(void) {
  LOAD_REGS();
L_eee479: /* eee479: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee47c: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee47f: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee485(void) {
  LOAD_REGS();
  goto L_eee485;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee485: /* eee485: mov eax, 0xef8ff8 */
  eax = 0xef8ff8u;
/* eee48a: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee4a0(void) {
  LOAD_REGS();
  goto L_eee4a0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee4a0: /* eee4a0: mov eax, 0xef905c */
  eax = 0xef905cu;
/* eee4a5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee4b0(void) {
  LOAD_REGS();
L_eee4b0: /* eee4b0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee4b3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee4b9(void) {
  LOAD_REGS();
  goto L_eee4b9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee4b9: /* eee4b9: mov eax, 0xef90d0 */
  eax = 0xef90d0u;
/* eee4be: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee4d0(void) {
  LOAD_REGS();
L_eee4d0: /* eee4d0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee4d3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee4d9(void) {
  LOAD_REGS();
  goto L_eee4d9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee4d9: /* eee4d9: mov eax, 0xef9144 */
  eax = 0xef9144u;
/* eee4de: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee4f0(void) {
  LOAD_REGS();
  goto L_eee4f0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee4f0: /* eee4f0: mov eax, 0xef91b0 */
  eax = 0xef91b0u;
/* eee4f5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee500(void) {
  LOAD_REGS();
L_eee500: /* eee500: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee503: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee506: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee50c(void) {
  LOAD_REGS();
L_eee50c: /* eee50c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eee50f: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee512: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee518(void) {
  LOAD_REGS();
L_eee518: /* eee518: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eee51b: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee521(void) {
  LOAD_REGS();
  goto L_eee521;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee521: /* eee521: mov eax, 0xef9234 */
  eax = 0xef9234u;
/* eee526: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee540(void) {
  LOAD_REGS();
L_eee540: /* eee540: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* eee543: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee546: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee54c(void) {
  LOAD_REGS();
L_eee54c: /* eee54c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* eee54f: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee552: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee558(void) {
  LOAD_REGS();
  goto L_eee558;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee558: /* eee558: mov eax, 0xef927c */
  eax = 0xef927cu;
/* eee55d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee570(void) {
  LOAD_REGS();
  goto L_eee570;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee570: /* eee570: mov eax, 0xef92e4 */
  eax = 0xef92e4u;
/* eee575: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee580(void) {
  LOAD_REGS();
  goto L_eee580;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee580: /* eee580: mov eax, 0xef9350 */
  eax = 0xef9350u;
/* eee585: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee590(void) {
  LOAD_REGS();
L_eee590: /* eee590: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eee593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eee594: call 0xed130c */
  esp -= 4; W32(esp, 0xeee599u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eee599: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eee59a: ret  */
  esp += 4; SPILL(); return;
}

void f_eee59b(void) {
  LOAD_REGS();
  goto L_eee59b;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee59b: /* eee59b: mov eax, 0xef93c4 */
  eax = 0xef93c4u;
/* eee5a0: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee5b0(void) {
  LOAD_REGS();
  goto L_eee5b0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee5b0: /* eee5b0: mov eax, 0xef9430 */
  eax = 0xef9430u;
/* eee5b5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee5c0(void) {
  LOAD_REGS();
L_eee5c0: /* eee5c0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eee5c3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee5c9(void) {
  LOAD_REGS();
  goto L_eee5c9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee5c9: /* eee5c9: mov eax, 0xef9460 */
  eax = 0xef9460u;
/* eee5ce: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee5e0(void) {
  LOAD_REGS();
  goto L_eee5e0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee5e0: /* eee5e0: mov eax, 0xef94c4 */
  eax = 0xef94c4u;
/* eee5e5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee5f0(void) {
  LOAD_REGS();
  goto L_eee5f0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee5f0: /* eee5f0: mov eax, 0xef9530 */
  eax = 0xef9530u;
/* eee5f5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee600(void) {
  LOAD_REGS();
L_eee600: /* eee600: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee603: jmp 0xed10d7 */
  SPILL(); f_ed10d7(); return;
}

void f_eee608(void) {
  LOAD_REGS();
L_eee608: /* eee608: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee60b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee60e: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee614(void) {
  LOAD_REGS();
  goto L_eee614;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee614: /* eee614: mov eax, 0xef9568 */
  eax = 0xef9568u;
/* eee619: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee630(void) {
  LOAD_REGS();
L_eee630: /* eee630: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee633: jmp 0xed10d7 */
  SPILL(); f_ed10d7(); return;
}

void f_eee638(void) {
  LOAD_REGS();
L_eee638: /* eee638: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee63b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee63e: jmp dword ptr [0xf0ddc8] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eee644(void) {
  LOAD_REGS();
  goto L_eee644;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee644: /* eee644: mov eax, 0xef9598 */
  eax = 0xef9598u;
/* eee649: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee660(void) {
  LOAD_REGS();
L_eee660: /* eee660: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eee663: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee669(void) {
  LOAD_REGS();
  goto L_eee669;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee669: /* eee669: mov eax, 0xef9604 */
  eax = 0xef9604u;
/* eee66e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee680(void) {
  LOAD_REGS();
  goto L_eee680;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee680: /* eee680: mov eax, 0xef9670 */
  eax = 0xef9670u;
/* eee685: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee690(void) {
  LOAD_REGS();
L_eee690: /* eee690: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee693: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee699(void) {
  LOAD_REGS();
  goto L_eee699;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee699: /* eee699: mov eax, 0xef96e4 */
  eax = 0xef96e4u;
/* eee69e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee6b0(void) {
  LOAD_REGS();
L_eee6b0: /* eee6b0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee6b3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee6b9(void) {
  LOAD_REGS();
  goto L_eee6b9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee6b9: /* eee6b9: mov eax, 0xef9758 */
  eax = 0xef9758u;
/* eee6be: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee6d0(void) {
  LOAD_REGS();
  goto L_eee6d0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee6d0: /* eee6d0: mov eax, 0xef97c4 */
  eax = 0xef97c4u;
/* eee6d5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee6e0(void) {
  LOAD_REGS();
L_eee6e0: /* eee6e0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eee6e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eee6e4: call 0xed130c */
  esp -= 4; W32(esp, 0xeee6e9u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eee6e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eee6ea: ret  */
  esp += 4; SPILL(); return;
}

void f_eee6eb(void) {
  LOAD_REGS();
L_eee6eb: /* eee6eb: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eee6ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eee6ef: call 0xed130c */
  esp -= 4; W32(esp, 0xeee6f4u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eee6f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eee6f5: ret  */
  esp += 4; SPILL(); return;
}

void f_eee6f6(void) {
  LOAD_REGS();
  goto L_eee6f6;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee6f6: /* eee6f6: mov eax, 0xef97fc */
  eax = 0xef97fcu;
/* eee6fb: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee710(void) {
  LOAD_REGS();
  goto L_eee710;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee710: /* eee710: mov eax, 0xef9860 */
  eax = 0xef9860u;
/* eee715: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee720(void) {
  LOAD_REGS();
L_eee720: /* eee720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee723: jmp 0xed14d3 */
  SPILL(); f_ed14d3(); return;
}

void f_eee728(void) {
  LOAD_REGS();
L_eee728: /* eee728: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee72b: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee72e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee734(void) {
  LOAD_REGS();
  goto L_eee734;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee734: /* eee734: mov eax, 0xef9898 */
  eax = 0xef9898u;
/* eee739: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee750(void) {
  LOAD_REGS();
L_eee750: /* eee750: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eee753: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee759(void) {
  LOAD_REGS();
  goto L_eee759;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee759: /* eee759: mov eax, 0xef98c0 */
  eax = 0xef98c0u;
/* eee75e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee770(void) {
  LOAD_REGS();
  goto L_eee770;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee770: /* eee770: mov eax, 0xef9924 */
  eax = 0xef9924u;
/* eee775: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee780(void) {
  LOAD_REGS();
  goto L_eee780;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee780: /* eee780: mov eax, 0xef9990 */
  eax = 0xef9990u;
/* eee785: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee790(void) {
  LOAD_REGS();
  goto L_eee790;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee790: /* eee790: mov eax, 0xef99fc */
  eax = 0xef99fcu;
/* eee795: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee7a0(void) {
  LOAD_REGS();
L_eee7a0: /* eee7a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eee7a3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee7a9(void) {
  LOAD_REGS();
L_eee7a9: /* eee7a9: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* eee7af: jmp 0xed1889 */
  SPILL(); f_ed1889(); return;
}

void f_eee7b4(void) {
  LOAD_REGS();
L_eee7b4: /* eee7b4: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* eee7ba: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eee7c0(void) {
  LOAD_REGS();
  goto L_eee7c0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee7c0: /* eee7c0: mov eax, 0xef9a80 */
  eax = 0xef9a80u;
/* eee7c5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee7e0(void) {
  LOAD_REGS();
L_eee7e0: /* eee7e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee7e3: jmp 0xed14d3 */
  SPILL(); f_ed14d3(); return;
}

void f_eee7e8(void) {
  LOAD_REGS();
  goto L_eee7e8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee7e8: /* eee7e8: mov eax, 0xef9ab0 */
  eax = 0xef9ab0u;
/* eee7ed: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee800(void) {
  LOAD_REGS();
  goto L_eee800;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee800: /* eee800: mov eax, 0xef9b14 */
  eax = 0xef9b14u;
/* eee805: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee810(void) {
  LOAD_REGS();
L_eee810: /* eee810: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee813: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee819(void) {
  LOAD_REGS();
  goto L_eee819;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee819: /* eee819: mov eax, 0xef9b44 */
  eax = 0xef9b44u;
/* eee81e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee830(void) {
  LOAD_REGS();
L_eee830: /* eee830: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eee833: jmp 0xed1640 */
  SPILL(); f_ed1640(); return;
}

void f_eee838(void) {
  LOAD_REGS();
L_eee838: /* eee838: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eee83b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eee83e: jmp 0xed155f */
  SPILL(); f_ed155f(); return;
}

void f_eee843(void) {
  LOAD_REGS();
  goto L_eee843;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee843: /* eee843: mov eax, 0xef9bb8 */
  eax = 0xef9bb8u;
/* eee848: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee860(void) {
  LOAD_REGS();
L_eee860: /* eee860: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* eee863: jmp 0xed1889 */
  SPILL(); f_ed1889(); return;
}

void f_eee868(void) {
  LOAD_REGS();
  goto L_eee868;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee868: /* eee868: mov eax, 0xef9be8 */
  eax = 0xef9be8u;
/* eee86d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee880(void) {
  LOAD_REGS();
L_eee880: /* eee880: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* eee886: jmp 0xed1843 */
  SPILL(); f_ed1843(); return;
}

void f_eee88b(void) {
  LOAD_REGS();
L_eee88b: /* eee88b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee88e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee894(void) {
  LOAD_REGS();
L_eee894: /* eee894: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee897: jmp 0xed19f1 */
  SPILL(); f_ed19f1(); return;
}

void f_eee89c(void) {
  LOAD_REGS();
L_eee89c: /* eee89c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee89f: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee8a5(void) {
  LOAD_REGS();
L_eee8a5: /* eee8a5: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* eee8ab: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee8b1(void) {
  LOAD_REGS();
L_eee8b1: /* eee8b1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee8b4: jmp 0xed189d */
  SPILL(); f_ed189d(); return;
}

void f_eee8b9(void) {
  LOAD_REGS();
L_eee8b9: /* eee8b9: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* eee8bf: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee8c5(void) {
  LOAD_REGS();
L_eee8c5: /* eee8c5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eee8c8: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee8ce(void) {
  LOAD_REGS();
L_eee8ce: /* eee8ce: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* eee8d4: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee8da(void) {
  LOAD_REGS();
L_eee8da: /* eee8da: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* eee8e0: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eee8e6(void) {
  LOAD_REGS();
L_eee8e6: /* eee8e6: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* eee8ec: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee8f2(void) {
  LOAD_REGS();
L_eee8f2: /* eee8f2: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* eee8f8: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee8fe(void) {
  LOAD_REGS();
L_eee8fe: /* eee8fe: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* eee904: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee90a(void) {
  LOAD_REGS();
  goto L_eee90a;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee90a: /* eee90a: mov eax, 0xef9cb4 */
  eax = 0xef9cb4u;
/* eee90f: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee940(void) {
  LOAD_REGS();
L_eee940: /* eee940: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee943: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee949(void) {
  LOAD_REGS();
  goto L_eee949;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee949: /* eee949: mov eax, 0xef9cec */
  eax = 0xef9cecu;
/* eee94e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee960(void) {
  LOAD_REGS();
L_eee960: /* eee960: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee963: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eee969(void) {
  LOAD_REGS();
  goto L_eee969;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee969: /* eee969: mov eax, 0xef9d14 */
  eax = 0xef9d14u;
/* eee96e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee980(void) {
  LOAD_REGS();
L_eee980: /* eee980: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* eee983: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eee984: call 0xed130c */
  esp -= 4; W32(esp, 0xeee989u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eee989: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eee98a: ret  */
  esp += 4; SPILL(); return;
}

void f_eee98b(void) {
  LOAD_REGS();
  goto L_eee98b;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee98b: /* eee98b: mov eax, 0xef9d3c */
  eax = 0xef9d3cu;
/* eee990: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee9a0(void) {
  LOAD_REGS();
L_eee9a0: /* eee9a0: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* eee9a3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee9a9(void) {
  LOAD_REGS();
L_eee9a9: /* eee9a9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eee9ac: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eee9b2(void) {
  LOAD_REGS();
  goto L_eee9b2;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eee9b2: /* eee9b2: mov eax, 0xef9d6c */
  eax = 0xef9d6cu;
/* eee9b7: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eee9d0(void) {
  LOAD_REGS();
L_eee9d0: /* eee9d0: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* eee9d6: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee9dc(void) {
  LOAD_REGS();
L_eee9dc: /* eee9dc: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* eee9e2: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee9e8(void) {
  LOAD_REGS();
L_eee9e8: /* eee9e8: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* eee9ee: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eee9f4(void) {
  LOAD_REGS();
L_eee9f4: /* eee9f4: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eee9fa: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea00(void) {
  LOAD_REGS();
L_eeea00: /* eeea00: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* eeea06: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea0c(void) {
  LOAD_REGS();
L_eeea0c: /* eeea0c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eeea0f: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea15(void) {
  LOAD_REGS();
L_eeea15: /* eeea15: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eeea18: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea1e(void) {
  LOAD_REGS();
L_eeea1e: /* eeea1e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* eeea24: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea2a(void) {
  LOAD_REGS();
L_eeea2a: /* eeea2a: lea ecx, [ebp - 0x1c8] */
  ecx = (uint32_t)(ebp + 0xfffffe38u);
/* eeea30: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeea35(void) {
  LOAD_REGS();
L_eeea35: /* eeea35: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eeea38: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea3e(void) {
  LOAD_REGS();
L_eeea3e: /* eeea3e: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* eeea44: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea4a(void) {
  LOAD_REGS();
L_eeea4a: /* eeea4a: lea ecx, [ebp - 0x1c8] */
  ecx = (uint32_t)(ebp + 0xfffffe38u);
/* eeea50: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeea56(void) {
  LOAD_REGS();
L_eeea56: /* eeea56: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* eeea5c: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeea61(void) {
  LOAD_REGS();
L_eeea61: /* eeea61: lea ecx, [ebp - 0x1f0] */
  ecx = (uint32_t)(ebp + 0xfffffe10u);
/* eeea67: jmp 0xed180c */
  SPILL(); f_ed180c(); return;
}

void f_eeea6c(void) {
  LOAD_REGS();
L_eeea6c: /* eeea6c: lea ecx, [ebp - 0x1f0] */
  ecx = (uint32_t)(ebp + 0xfffffe10u);
/* eeea72: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeea78(void) {
  LOAD_REGS();
L_eeea78: /* eeea78: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* eeea7e: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeea84(void) {
  LOAD_REGS();
L_eeea84: /* eeea84: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* eeea8a: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeea90(void) {
  LOAD_REGS();
L_eeea90: /* eeea90: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* eeea96: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeea9b(void) {
  LOAD_REGS();
L_eeea9b: /* eeea9b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* eeeaa1: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeaa7(void) {
  LOAD_REGS();
L_eeeaa7: /* eeeaa7: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* eeeaad: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeeab3(void) {
  LOAD_REGS();
L_eeeab3: /* eeeab3: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* eeeab9: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eeeabf(void) {
  LOAD_REGS();
L_eeeabf: /* eeeabf: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eeeac2: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeac8(void) {
  LOAD_REGS();
L_eeeac8: /* eeeac8: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* eeeace: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeead4(void) {
  LOAD_REGS();
L_eeead4: /* eeead4: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* eeeada: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeae0(void) {
  LOAD_REGS();
L_eeeae0: /* eeeae0: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* eeeae6: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeaec(void) {
  LOAD_REGS();
L_eeeaec: /* eeeaec: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* eeeaf2: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeaf8(void) {
  LOAD_REGS();
L_eeeaf8: /* eeeaf8: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* eeeafe: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb04(void) {
  LOAD_REGS();
L_eeeb04: /* eeeb04: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* eeeb0a: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb10(void) {
  LOAD_REGS();
L_eeeb10: /* eeeb10: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* eeeb13: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb19(void) {
  LOAD_REGS();
L_eeeb19: /* eeeb19: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* eeeb1f: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb25(void) {
  LOAD_REGS();
L_eeeb25: /* eeeb25: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eeeb28: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb2e(void) {
  LOAD_REGS();
L_eeeb2e: /* eeeb2e: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* eeeb31: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb37(void) {
  LOAD_REGS();
L_eeeb37: /* eeeb37: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eeeb3a: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeb40(void) {
  LOAD_REGS();
  goto L_eeeb40;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeeb40: /* eeeb40: mov eax, 0xef9e94 */
  eax = 0xef9e94u;
/* eeeb45: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeebb0(void) {
  LOAD_REGS();
L_eeebb0: /* eeebb0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eeebb3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeebb9(void) {
  LOAD_REGS();
L_eeebb9: /* eeebb9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eeebbc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeebc2(void) {
  LOAD_REGS();
L_eeebc2: /* eeebc2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eeebc5: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeebcb(void) {
  LOAD_REGS();
  goto L_eeebcb;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeebcb: /* eeebcb: mov eax, 0xef9ee8 */
  eax = 0xef9ee8u;
/* eeebd0: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeebe0(void) {
  LOAD_REGS();
L_eeebe0: /* eeebe0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeebe3: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeebe9(void) {
  LOAD_REGS();
  goto L_eeebe9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeebe9: /* eeebe9: mov eax, 0xef9f14 */
  eax = 0xef9f14u;
/* eeebee: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec00(void) {
  LOAD_REGS();
  goto L_eeec00;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec00: /* eeec00: mov eax, 0xef9f78 */
  eax = 0xef9f78u;
/* eeec05: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec10(void) {
  LOAD_REGS();
L_eeec10: /* eeec10: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* eeec13: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeec19(void) {
  LOAD_REGS();
  goto L_eeec19;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec19: /* eeec19: mov eax, 0xef9fec */
  eax = 0xef9fecu;
/* eeec1e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec30(void) {
  LOAD_REGS();
L_eeec30: /* eeec30: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeec33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeec34: call 0xed130c */
  esp -= 4; W32(esp, 0xeeec39u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeec39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeec3a: ret  */
  esp += 4; SPILL(); return;
}

void f_eeec3b(void) {
  LOAD_REGS();
  goto L_eeec3b;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec3b: /* eeec3b: mov eax, 0xefa01c */
  eax = 0xefa01cu;
/* eeec40: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec50(void) {
  LOAD_REGS();
L_eeec50: /* eeec50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeec53: jmp 0xed1640 */
  SPILL(); f_ed1640(); return;
}

void f_eeec58(void) {
  LOAD_REGS();
  goto L_eeec58;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec58: /* eeec58: mov eax, 0xefa044 */
  eax = 0xefa044u;
/* eeec5d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec70(void) {
  LOAD_REGS();
L_eeec70: /* eeec70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeec73: jmp dword ptr [0xf0e008] */
  SPILL(); f_6c2dfb(); return; /* Engine!??1UNetConnection@@UAE@XZ */
}

void f_eeec79(void) {
  LOAD_REGS();
  goto L_eeec79;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec79: /* eeec79: mov eax, 0xefa06c */
  eax = 0xefa06cu;
/* eeec7e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeec90(void) {
  LOAD_REGS();
L_eeec90: /* eeec90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeec93: jmp dword ptr [0xf0dda0] */
  SPILL(); f_6c97c8(); return; /* Engine!??1UNetDriver@@UAE@XZ */
}

void f_eeec99(void) {
  LOAD_REGS();
  goto L_eeec99;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeec99: /* eeec99: mov eax, 0xefa094 */
  eax = 0xefa094u;
/* eeec9e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeecb0(void) {
  LOAD_REGS();
L_eeecb0: /* eeecb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eeecb3: jmp 0xed118b */
  SPILL(); f_ed118b(); return;
}

void f_eeecb8(void) {
  LOAD_REGS();
  goto L_eeecb8;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeecb8: /* eeecb8: mov eax, 0xefa0bc */
  eax = 0xefa0bcu;
/* eeecbd: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeecd0(void) {
  LOAD_REGS();
  goto L_eeecd0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeecd0: /* eeecd0: mov eax, 0xefa120 */
  eax = 0xefa120u;
/* eeecd5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeece0(void) {
  LOAD_REGS();
L_eeece0: /* eeece0: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* eeece3: jmp 0xed1889 */
  SPILL(); f_ed1889(); return;
}

void f_eeece8(void) {
  LOAD_REGS();
L_eeece8: /* eeece8: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* eeeceb: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eeecf1(void) {
  LOAD_REGS();
  goto L_eeecf1;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeecf1: /* eeecf1: mov eax, 0xefa158 */
  eax = 0xefa158u;
/* eeecf6: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeed10(void) {
  LOAD_REGS();
L_eeed10: /* eeed10: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eeed13: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeed19(void) {
  LOAD_REGS();
  goto L_eeed19;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeed19: /* eeed19: mov eax, 0xefa1c4 */
  eax = 0xefa1c4u;
/* eeed1e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeed30(void) {
  LOAD_REGS();
  goto L_eeed30;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeed30: /* eeed30: mov eax, 0xefa230 */
  eax = 0xefa230u;
/* eeed35: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeed40(void) {
  LOAD_REGS();
L_eeed40: /* eeed40: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eeed43: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_eeed49(void) {
  LOAD_REGS();
  goto L_eeed49;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeed49: /* eeed49: mov eax, 0xefa260 */
  eax = 0xefa260u;
/* eeed4e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeed60(void) {
  LOAD_REGS();
L_eeed60: /* eeed60: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* eeed63: jmp 0xed19dd */
  SPILL(); f_ed19dd(); return;
}

void f_eeed68(void) {
  LOAD_REGS();
L_eeed68: /* eeed68: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* eeed6b: jmp 0xed1889 */
  SPILL(); f_ed1889(); return;
}

void f_eeed70(void) {
  LOAD_REGS();
L_eeed70: /* eeed70: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* eeed73: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eeed79(void) {
  LOAD_REGS();
  goto L_eeed79;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeed79: /* eeed79: mov eax, 0xefa298 */
  eax = 0xefa298u;
/* eeed7e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeed90(void) {
  LOAD_REGS();
L_eeed90: /* eeed90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eeed93: jmp 0xed14d3 */
  SPILL(); f_ed14d3(); return;
}

void f_eeed98(void) {
  LOAD_REGS();
L_eeed98: /* eeed98: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eeed9b: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeed9e: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeeda3(void) {
  LOAD_REGS();
L_eeeda3: /* eeeda3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eeeda6: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeeda9: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeedae(void) {
  LOAD_REGS();
L_eeedae: /* eeedae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eeedb1: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeedb7: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeedbd(void) {
  LOAD_REGS();
L_eeedbd: /* eeedbd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eeedc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeedc1: call 0xed130c */
  esp -= 4; W32(esp, 0xeeedc6u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeedc6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeedc7: ret  */
  esp += 4; SPILL(); return;
}

void f_eeedc8(void) {
  LOAD_REGS();
L_eeedc8: /* eeedc8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eeedcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeedcc: call 0xed130c */
  esp -= 4; W32(esp, 0xeeedd1u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeedd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeedd2: ret  */
  esp += 4; SPILL(); return;
}

void f_eeedd3(void) {
  LOAD_REGS();
L_eeedd3: /* eeedd3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eeedd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeedd7: call 0xed130c */
  esp -= 4; W32(esp, 0xeeeddcu); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeeddc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeeddd: ret  */
  esp += 4; SPILL(); return;
}

void f_eeedde(void) {
  LOAD_REGS();
L_eeedde: /* eeedde: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eeede1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeede2: call 0xed130c */
  esp -= 4; W32(esp, 0xeeede7u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeede7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeede8: ret  */
  esp += 4; SPILL(); return;
}

void f_eeede9(void) {
  LOAD_REGS();
  goto L_eeede9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeede9: /* eeede9: mov eax, 0xefa340 */
  eax = 0xefa340u;
/* eeedee: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeee10(void) {
  LOAD_REGS();
L_eeee10: /* eeee10: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eeee13: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeee19(void) {
  LOAD_REGS();
  goto L_eeee19;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeee19: /* eeee19: mov eax, 0xefa374 */
  eax = 0xefa374u;
/* eeee1e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeee30(void) {
  LOAD_REGS();
L_eeee30: /* eeee30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eeee33: jmp 0xed14d3 */
  SPILL(); f_ed14d3(); return;
}

void f_eeee38(void) {
  LOAD_REGS();
L_eeee38: /* eeee38: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eeee3b: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeee3e: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeee43(void) {
  LOAD_REGS();
L_eeee43: /* eeee43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eeee46: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeee49: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeee4e(void) {
  LOAD_REGS();
L_eeee4e: /* eeee4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eeee51: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eeee57: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeee5d(void) {
  LOAD_REGS();
  goto L_eeee5d;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeee5d: /* eeee5d: mov eax, 0xefa3f8 */
  eax = 0xefa3f8u;
/* eeee62: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeee80(void) {
  LOAD_REGS();
L_eeee80: /* eeee80: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* eeee86: jmp 0xed1843 */
  SPILL(); f_ed1843(); return;
}

void f_eeee8b(void) {
  LOAD_REGS();
L_eeee8b: /* eeee8b: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* eeee8e: jmp 0xed1889 */
  SPILL(); f_ed1889(); return;
}

void f_eeee93(void) {
  LOAD_REGS();
L_eeee93: /* eeee93: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* eeee96: jmp dword ptr [0xf0dba0] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_eeee9c(void) {
  LOAD_REGS();
  goto L_eeee9c;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeee9c: /* eeee9c: mov eax, 0xefa47c */
  eax = 0xefa47cu;
/* eeeea1: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeeeb0(void) {
  LOAD_REGS();
L_eeeeb0: /* eeeeb0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eeeeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeeeb4: call 0xed130c */
  esp -= 4; W32(esp, 0xeeeeb9u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeeeb9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeeeba: ret  */
  esp += 4; SPILL(); return;
}

void f_eeeebb(void) {
  LOAD_REGS();
  goto L_eeeebb;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeeebb: /* eeeebb: mov eax, 0xefa4ac */
  eax = 0xefa4acu;
/* eeeec0: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeeed0(void) {
  LOAD_REGS();
L_eeeed0: /* eeeed0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eeeed3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeeed9(void) {
  LOAD_REGS();
L_eeeed9: /* eeeed9: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eeeedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eeeedd: call 0xed130c */
  esp -= 4; W32(esp, 0xeeeee2u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eeeee2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eeeee3: ret  */
  esp += 4; SPILL(); return;
}

void f_eeeee4(void) {
  LOAD_REGS();
  goto L_eeeee4;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeeee4: /* eeeee4: mov eax, 0xefa4dc */
  eax = 0xefa4dcu;
/* eeeee9: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eeef00(void) {
  LOAD_REGS();
L_eeef00: /* eeef00: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eeef06: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef0c(void) {
  LOAD_REGS();
L_eeef0c: /* eeef0c: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* eeef12: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef18(void) {
  LOAD_REGS();
L_eeef18: /* eeef18: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* eeef1e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef24(void) {
  LOAD_REGS();
L_eeef24: /* eeef24: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* eeef2a: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef30(void) {
  LOAD_REGS();
L_eeef30: /* eeef30: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* eeef36: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef3c(void) {
  LOAD_REGS();
L_eeef3c: /* eeef3c: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* eeef42: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef48(void) {
  LOAD_REGS();
L_eeef48: /* eeef48: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* eeef4e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef54(void) {
  LOAD_REGS();
L_eeef54: /* eeef54: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* eeef57: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef5d(void) {
  LOAD_REGS();
L_eeef5d: /* eeef5d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* eeef60: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eeef65(void) {
  LOAD_REGS();
L_eeef65: /* eeef65: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eeef68: jmp 0xed180c */
  SPILL(); f_ed180c(); return;
}

void f_eeef6d(void) {
  LOAD_REGS();
L_eeef6d: /* eeef6d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eeef70: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeef76(void) {
  LOAD_REGS();
L_eeef76: /* eeef76: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* eeef7c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef82(void) {
  LOAD_REGS();
L_eeef82: /* eeef82: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* eeef88: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef8e(void) {
  LOAD_REGS();
L_eeef8e: /* eeef8e: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* eeef94: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeef9a(void) {
  LOAD_REGS();
L_eeef9a: /* eeef9a: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* eeefa0: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeefa6(void) {
  LOAD_REGS();
L_eeefa6: /* eeefa6: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* eeefac: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eeefb2(void) {
  LOAD_REGS();
L_eeefb2: /* eeefb2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eeefb5: jmp 0xed1523 */
  SPILL(); f_ed1523(); return;
}

void f_eeefba(void) {
  LOAD_REGS();
L_eeefba: /* eeefba: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eeefbd: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eeefc3(void) {
  LOAD_REGS();
  goto L_eeefc3;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eeefc3: /* eeefc3: mov eax, 0xefa6e0 */
  eax = 0xefa6e0u;
/* eeefc8: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef000(void) {
  LOAD_REGS();
L_eef000: /* eef000: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef003: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef009(void) {
  LOAD_REGS();
  goto L_eef009;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef009: /* eef009: mov eax, 0xefa77c */
  eax = 0xefa77cu;
/* eef00e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef020(void) {
  LOAD_REGS();
L_eef020: /* eef020: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef023: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef029(void) {
  LOAD_REGS();
  goto L_eef029;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef029: /* eef029: mov eax, 0xefa7f0 */
  eax = 0xefa7f0u;
/* eef02e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef040(void) {
  LOAD_REGS();
L_eef040: /* eef040: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef043: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef049(void) {
  LOAD_REGS();
L_eef049: /* eef049: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef04c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef052(void) {
  LOAD_REGS();
L_eef052: /* eef052: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef055: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef05b(void) {
  LOAD_REGS();
L_eef05b: /* eef05b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef05e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef064(void) {
  LOAD_REGS();
L_eef064: /* eef064: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eef067: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef06d(void) {
  LOAD_REGS();
L_eef06d: /* eef06d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef070: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef076(void) {
  LOAD_REGS();
  goto L_eef076;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef076: /* eef076: mov eax, 0xefa88c */
  eax = 0xefa88cu;
/* eef07b: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef090(void) {
  LOAD_REGS();
L_eef090: /* eef090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eef093: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eef099(void) {
  LOAD_REGS();
  goto L_eef099;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef099: /* eef099: mov eax, 0xefa8c0 */
  eax = 0xefa8c0u;
/* eef09e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef0b0(void) {
  LOAD_REGS();
L_eef0b0: /* eef0b0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* eef0b3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef0b9(void) {
  LOAD_REGS();
  goto L_eef0b9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef0b9: /* eef0b9: mov eax, 0xefa92c */
  eax = 0xefa92cu;
/* eef0be: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef0d0(void) {
  LOAD_REGS();
  goto L_eef0d0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef0d0: /* eef0d0: mov eax, 0xefa998 */
  eax = 0xefa998u;
/* eef0d5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef0e0(void) {
  LOAD_REGS();
L_eef0e0: /* eef0e0: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef0e3: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eef0e8(void) {
  LOAD_REGS();
L_eef0e8: /* eef0e8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* eef0eb: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef0f1(void) {
  LOAD_REGS();
  goto L_eef0f1;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef0f1: /* eef0f1: mov eax, 0xefaa14 */
  eax = 0xefaa14u;
/* eef0f6: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef110(void) {
  LOAD_REGS();
  goto L_eef110;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef110: /* eef110: mov eax, 0xefaa80 */
  eax = 0xefaa80u;
/* eef115: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef120(void) {
  LOAD_REGS();
  goto L_eef120;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef120: /* eef120: mov eax, 0xefaaec */
  eax = 0xefaaecu;
/* eef125: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef130(void) {
  LOAD_REGS();
L_eef130: /* eef130: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* eef133: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef139(void) {
  LOAD_REGS();
L_eef139: /* eef139: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* eef13c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef142(void) {
  LOAD_REGS();
L_eef142: /* eef142: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* eef145: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef14b(void) {
  LOAD_REGS();
L_eef14b: /* eef14b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef14e: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef154(void) {
  LOAD_REGS();
  goto L_eef154;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef154: /* eef154: mov eax, 0xefab78 */
  eax = 0xefab78u;
/* eef159: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef170(void) {
  LOAD_REGS();
L_eef170: /* eef170: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eef173: jmp 0xed1212 */
  SPILL(); f_ed1212(); return;
}

void f_eef178(void) {
  LOAD_REGS();
L_eef178: /* eef178: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eef17b: add ecx, 0x368 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eef181: jmp 0xed1627 */
  SPILL(); f_ed1627(); return;
}

void f_eef186(void) {
  LOAD_REGS();
  goto L_eef186;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef186: /* eef186: mov eax, 0xefabc0 */
  eax = 0xefabc0u;
/* eef18b: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1a0(void) {
  LOAD_REGS();
  goto L_eef1a0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1a0: /* eef1a0: mov eax, 0xefac28 */
  eax = 0xefac28u;
/* eef1a5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1b0(void) {
  LOAD_REGS();
  goto L_eef1b0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1b0: /* eef1b0: mov eax, 0xefac94 */
  eax = 0xefac94u;
/* eef1b5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1c0(void) {
  LOAD_REGS();
  goto L_eef1c0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1c0: /* eef1c0: mov eax, 0xefad00 */
  eax = 0xefad00u;
/* eef1c5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1d0(void) {
  LOAD_REGS();
  goto L_eef1d0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1d0: /* eef1d0: mov eax, 0xefad6c */
  eax = 0xefad6cu;
/* eef1d5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1e0(void) {
  LOAD_REGS();
  goto L_eef1e0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1e0: /* eef1e0: mov eax, 0xefadd8 */
  eax = 0xefadd8u;
/* eef1e5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef1f0(void) {
  LOAD_REGS();
  goto L_eef1f0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef1f0: /* eef1f0: mov eax, 0xefae44 */
  eax = 0xefae44u;
/* eef1f5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef200(void) {
  LOAD_REGS();
  goto L_eef200;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef200: /* eef200: mov eax, 0xefaeb0 */
  eax = 0xefaeb0u;
/* eef205: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef210(void) {
  LOAD_REGS();
L_eef210: /* eef210: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef213: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef219(void) {
  LOAD_REGS();
  goto L_eef219;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef219: /* eef219: mov eax, 0xefaf24 */
  eax = 0xefaf24u;
/* eef21e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef230(void) {
  LOAD_REGS();
  goto L_eef230;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef230: /* eef230: mov eax, 0xefaf90 */
  eax = 0xefaf90u;
/* eef235: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef240(void) {
  LOAD_REGS();
  goto L_eef240;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef240: /* eef240: mov eax, 0xefaffc */
  eax = 0xefaffcu;
/* eef245: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef250(void) {
  LOAD_REGS();
L_eef250: /* eef250: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef253: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef259(void) {
  LOAD_REGS();
  goto L_eef259;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef259: /* eef259: mov eax, 0xefb070 */
  eax = 0xefb070u;
/* eef25e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef270(void) {
  LOAD_REGS();
  goto L_eef270;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef270: /* eef270: mov eax, 0xefb0dc */
  eax = 0xefb0dcu;
/* eef275: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef280(void) {
  LOAD_REGS();
  goto L_eef280;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef280: /* eef280: mov eax, 0xefb148 */
  eax = 0xefb148u;
/* eef285: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef290(void) {
  LOAD_REGS();
L_eef290: /* eef290: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef293: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef299(void) {
  LOAD_REGS();
L_eef299: /* eef299: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef29c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef2a2(void) {
  LOAD_REGS();
  goto L_eef2a2;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef2a2: /* eef2a2: mov eax, 0xefb1c4 */
  eax = 0xefb1c4u;
/* eef2a7: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef2c0(void) {
  LOAD_REGS();
  goto L_eef2c0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef2c0: /* eef2c0: mov eax, 0xefb230 */
  eax = 0xefb230u;
/* eef2c5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef2d0(void) {
  LOAD_REGS();
  goto L_eef2d0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef2d0: /* eef2d0: mov eax, 0xefb29c */
  eax = 0xefb29cu;
/* eef2d5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef2e0(void) {
  LOAD_REGS();
L_eef2e0: /* eef2e0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef2e3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef2e9(void) {
  LOAD_REGS();
L_eef2e9: /* eef2e9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eef2ec: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eef2ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eef2f1: je 0xeef300 */
  if (zf) goto L_eef300;
L_eef2f7: /* eef2f7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eef2fa: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eef300: /* eef300: ret  */
  esp += 4; SPILL(); return;
}

void f_eef301(void) {
  LOAD_REGS();
  goto L_eef301;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef301: /* eef301: mov eax, 0xefb318 */
  eax = 0xefb318u;
/* eef306: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef320(void) {
  LOAD_REGS();
  goto L_eef320;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef320: /* eef320: mov eax, 0xefb384 */
  eax = 0xefb384u;
/* eef325: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef330(void) {
  LOAD_REGS();
  goto L_eef330;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef330: /* eef330: mov eax, 0xefb3f0 */
  eax = 0xefb3f0u;
/* eef335: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef340(void) {
  LOAD_REGS();
  goto L_eef340;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef340: /* eef340: mov eax, 0xefb45c */
  eax = 0xefb45cu;
/* eef345: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef350(void) {
  LOAD_REGS();
L_eef350: /* eef350: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eef353: jmp dword ptr [0xf0e008] */
  SPILL(); f_6c2dfb(); return; /* Engine!??1UNetConnection@@UAE@XZ */
}

void f_eef359(void) {
  LOAD_REGS();
L_eef359: /* eef359: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eef35c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eef35d: call 0xed130c */
  esp -= 4; W32(esp, 0xeef362u); SPILL(); f_ed130c(); if (g_unwind) return; RELOAD();
/* eef362: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eef363: ret  */
  esp += 4; SPILL(); return;
}

void f_eef364(void) {
  LOAD_REGS();
  goto L_eef364;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef364: /* eef364: mov eax, 0xefb4d8 */
  eax = 0xefb4d8u;
/* eef369: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef380(void) {
  LOAD_REGS();
L_eef380: /* eef380: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef383: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef389(void) {
  LOAD_REGS();
  goto L_eef389;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef389: /* eef389: mov eax, 0xefb54c */
  eax = 0xefb54cu;
/* eef38e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef3a0(void) {
  LOAD_REGS();
L_eef3a0: /* eef3a0: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef3a3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef3a9(void) {
  LOAD_REGS();
L_eef3a9: /* eef3a9: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef3ac: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef3b2(void) {
  LOAD_REGS();
L_eef3b2: /* eef3b2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef3b5: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef3bb(void) {
  LOAD_REGS();
L_eef3bb: /* eef3bb: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef3be: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef3c4(void) {
  LOAD_REGS();
  goto L_eef3c4;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef3c4: /* eef3c4: mov eax, 0xefb5d8 */
  eax = 0xefb5d8u;
/* eef3c9: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef3e0(void) {
  LOAD_REGS();
  goto L_eef3e0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef3e0: /* eef3e0: mov eax, 0xefb644 */
  eax = 0xefb644u;
/* eef3e5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef3f0(void) {
  LOAD_REGS();
L_eef3f0: /* eef3f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef3f3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef3f9(void) {
  LOAD_REGS();
  goto L_eef3f9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef3f9: /* eef3f9: mov eax, 0xefb6b8 */
  eax = 0xefb6b8u;
/* eef3fe: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef410(void) {
  LOAD_REGS();
L_eef410: /* eef410: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* eef413: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef419(void) {
  LOAD_REGS();
L_eef419: /* eef419: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* eef41c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef422(void) {
  LOAD_REGS();
L_eef422: /* eef422: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* eef425: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef42b(void) {
  LOAD_REGS();
L_eef42b: /* eef42b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eef42e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eef431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eef433: je 0xeef445 */
  if (zf) goto L_eef445;
L_eef439: /* eef439: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* eef43f: jmp dword ptr [0xf0df60] */
  SPILL(); f_6ccd7e(); return; /* Engine!??1FURL@@QAE@XZ */
L_eef445: /* eef445: ret  */
  esp += 4; SPILL(); return;
}

void f_eef446(void) {
  LOAD_REGS();
L_eef446: /* eef446: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* eef449: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef44f(void) {
  LOAD_REGS();
L_eef44f: /* eef44f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* eef452: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef458(void) {
  LOAD_REGS();
  goto L_eef458;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef458: /* eef458: mov eax, 0xefb754 */
  eax = 0xefb754u;
/* eef45d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef480(void) {
  LOAD_REGS();
L_eef480: /* eef480: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eef483: jmp dword ptr [0xf0d964] */
  SPILL(); f_4e189d(); return; /* Core!??1UCommandlet@@UAE@XZ */
}

void f_eef489(void) {
  LOAD_REGS();
  goto L_eef489;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef489: /* eef489: mov eax, 0xefb788 */
  eax = 0xefb788u;
/* eef48e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef4a0(void) {
  LOAD_REGS();
L_eef4a0: /* eef4a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eef4a3: jmp dword ptr [0xf0d964] */
  SPILL(); f_4e189d(); return; /* Core!??1UCommandlet@@UAE@XZ */
}

void f_eef4a9(void) {
  LOAD_REGS();
  goto L_eef4a9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef4a9: /* eef4a9: mov eax, 0xefb7b0 */
  eax = 0xefb7b0u;
/* eef4ae: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef4c0(void) {
  LOAD_REGS();
L_eef4c0: /* eef4c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eef4c3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef4c9(void) {
  LOAD_REGS();
L_eef4c9: /* eef4c9: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eef4cc: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef4d2(void) {
  LOAD_REGS();
L_eef4d2: /* eef4d2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef4d5: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef4db(void) {
  LOAD_REGS();
L_eef4db: /* eef4db: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eef4de: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef4e4(void) {
  LOAD_REGS();
L_eef4e4: /* eef4e4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eef4e7: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef4ed(void) {
  LOAD_REGS();
  goto L_eef4ed;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef4ed: /* eef4ed: mov eax, 0xefb83c */
  eax = 0xefb83cu;
/* eef4f2: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef510(void) {
  LOAD_REGS();
L_eef510: /* eef510: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef513: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef519(void) {
  LOAD_REGS();
L_eef519: /* eef519: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* eef51c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef522(void) {
  LOAD_REGS();
L_eef522: /* eef522: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* eef525: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef52b(void) {
  LOAD_REGS();
L_eef52b: /* eef52b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* eef52e: jmp 0xed1569 */
  SPILL(); f_ed1569(); return;
}

void f_eef533(void) {
  LOAD_REGS();
L_eef533: /* eef533: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef536: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef53c(void) {
  LOAD_REGS();
L_eef53c: /* eef53c: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* eef53f: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef545(void) {
  LOAD_REGS();
L_eef545: /* eef545: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* eef548: jmp dword ptr [0xf0dc2c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eef54e(void) {
  LOAD_REGS();
  goto L_eef54e;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef54e: /* eef54e: mov eax, 0xefb8e4 */
  eax = 0xefb8e4u;
/* eef553: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef570(void) {
  LOAD_REGS();
L_eef570: /* eef570: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* eef573: jmp 0xed1212 */
  SPILL(); f_ed1212(); return;
}

void f_eef578(void) {
  LOAD_REGS();
  goto L_eef578;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef578: /* eef578: mov eax, 0xefb928 */
  eax = 0xefb928u;
/* eef57d: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef590(void) {
  LOAD_REGS();
  goto L_eef590;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef590: /* eef590: mov eax, 0xefb990 */
  eax = 0xefb990u;
/* eef595: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef5a0(void) {
  LOAD_REGS();
L_eef5a0: /* eef5a0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* eef5a3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef5a9(void) {
  LOAD_REGS();
  goto L_eef5a9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef5a9: /* eef5a9: mov eax, 0xefba04 */
  eax = 0xefba04u;
/* eef5ae: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef5c0(void) {
  LOAD_REGS();
  goto L_eef5c0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef5c0: /* eef5c0: mov eax, 0xefba70 */
  eax = 0xefba70u;
/* eef5c5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef5d0(void) {
  LOAD_REGS();
L_eef5d0: /* eef5d0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef5d3: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef5d9(void) {
  LOAD_REGS();
  goto L_eef5d9;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef5d9: /* eef5d9: mov eax, 0xefbae4 */
  eax = 0xefbae4u;
/* eef5de: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef5f0(void) {
  LOAD_REGS();
  goto L_eef5f0;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef5f0: /* eef5f0: mov eax, 0xefbb50 */
  eax = 0xefbb50u;
/* eef5f5: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef600(void) {
  LOAD_REGS();
L_eef600: /* eef600: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef603: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef609(void) {
  LOAD_REGS();
L_eef609: /* eef609: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eef60c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef612(void) {
  LOAD_REGS();
  goto L_eef612;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef612: /* eef612: mov eax, 0xefbbcc */
  eax = 0xefbbccu;
/* eef617: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef630(void) {
  LOAD_REGS();
L_eef630: /* eef630: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef633: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef639(void) {
  LOAD_REGS();
L_eef639: /* eef639: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* eef63c: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef642(void) {
  LOAD_REGS();
L_eef642: /* eef642: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eef645: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eef648: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eef64a: je 0xeef659 */
  if (zf) goto L_eef659;
L_eef650: /* eef650: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eef653: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_eef659: /* eef659: ret  */
  esp += 4; SPILL(); return;
}

void f_eef65a(void) {
  LOAD_REGS();
  goto L_eef65a;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef65a: /* eef65a: mov eax, 0xefbc50 */
  eax = 0xefbc50u;
/* eef65f: jmp 0xeec50e */
  goto L_eec50e;
}

void f_eef680(void) {
  LOAD_REGS();
L_eef680: /* eef680: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eef683: jmp dword ptr [0xf0dae4] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eef689(void) {
  LOAD_REGS();
  goto L_eef689;
L_eec50e: /* eec50e: jmp dword ptr [0xf0e130] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eef689: /* eef689: mov eax, 0xefbcc4 */
  eax = 0xefbcc4u;
/* eef68e: jmp 0xeec50e */
  goto L_eec50e;
}

void f_ef0850(void) {
  LOAD_REGS();
L_ef0850: /* ef0850: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef0853: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef0858: mov ecx, dword ptr [0xf0dfa4] */
  ecx = R32((uint32_t)(0xf0dfa4u));
/* ef085e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef085f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef0860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef0861: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef0862: push 0xed18f2 */
  { uint32_t v = 0xed18f2u; esp -= 4; W32(esp, v); }
/* ef0867: push 0xed1181 */
  { uint32_t v = 0xed1181u; esp -= 4; W32(esp, v); }
/* ef086c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef0871: xor esi, esi */
  esi = 0;
/* ef0873: xor edi, edi */
  edi = 0;
/* ef0875: xor ebx, ebx */
  ebx = 0;
/* ef0877: xor ebp, ebp */
  ebp = 0;
/* ef0879: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef087d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef0881: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef0887u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef0887: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ef088b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef088c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef0890: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef0895: push 0xf02b8a */
  { uint32_t v = 0xf02b8au; esp -= 4; W32(esp, v); }
/* ef089a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef089d: mov edx, esp */
  edx = esp;
/* ef089f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef08a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef08a1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef08a3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef08a5: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef08a8: push 0x4f4 */
  { uint32_t v = 0x4f4u; esp -= 4; W32(esp, v); }
/* ef08ad: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef08b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef08b1: mov ecx, 0xf07088 */
  ecx = 0xf07088u;
/* ef08b6: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef08b9: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef08bfu); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef08bf: push 0xef2950 */
  { uint32_t v = 0xef2950u; esp -= 4; W32(esp, v); }
/* ef08c4: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef08c9u); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef08c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef08cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef08cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef08ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef08cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef08d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef08d3: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0910(void) {
  LOAD_REGS();
L_ef0910: /* ef0910: mov dword ptr [0xf075b4], 0xf07088 */
  W32((uint32_t)(0xf075b4u), 0xf07088u);
/* ef091a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0930(void) {
  LOAD_REGS();
L_ef0930: /* ef0930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef0933: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef0939: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef093e: mov ecx, dword ptr [0xf0dfac] */
  ecx = R32((uint32_t)(0xf0dfacu));
/* ef0944: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef0945: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef0946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef0947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef0948: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef0949: push 0xed16f9 */
  { uint32_t v = 0xed16f9u; esp -= 4; W32(esp, v); }
/* ef094e: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef0953: xor esi, esi */
  esi = 0;
/* ef0955: xor edi, edi */
  edi = 0;
/* ef0957: xor ebx, ebx */
  ebx = 0;
/* ef0959: xor ebp, ebp */
  ebp = 0;
/* ef095b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef095f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef0963: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef0969u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef0969: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef096d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef0971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef0972: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef0977: push 0xf02ff2 */
  { uint32_t v = 0xf02ff2u; esp -= 4; W32(esp, v); }
/* ef097c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef097f: mov eax, esp */
  eax = esp;
/* ef0981: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef0982: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef0983: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef0985: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ef0987: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef098a: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* ef098f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef0992: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef0993: mov ecx, 0xf076e0 */
  ecx = 0xf076e0u;
/* ef0998: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef099b: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef09a1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef09a1: push 0xef2970 */
  { uint32_t v = 0xef2970u; esp -= 4; W32(esp, v); }
/* ef09a6: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef09abu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef09ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef09ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef09af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef09b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef09b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef09b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef09b5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef09f0(void) {
  LOAD_REGS();
L_ef09f0: /* ef09f0: mov dword ptr [0xf07c0c], 0xf076e0 */
  W32((uint32_t)(0xf07c0cu), 0xf076e0u);
/* ef09fa: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0a10(void) {
  LOAD_REGS();
L_ef0a10: /* ef0a10: push 0xf039ac */
  { uint32_t v = 0xf039acu; esp -= 4; W32(esp, v); }
/* ef0a15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0a17: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0a1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0a1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0a20: mov byte ptr [0xf07d60], al */
  W8((uint32_t)(0xf07d60u), (eax & 0xffu));
/* ef0a25: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0a40(void) {
  LOAD_REGS();
L_ef0a40: /* ef0a40: push 0xf039b0 */
  { uint32_t v = 0xf039b0u; esp -= 4; W32(esp, v); }
/* ef0a45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0a47: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0a4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0a4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0a50: mov byte ptr [0xf07d50], al */
  W8((uint32_t)(0xf07d50u), (eax & 0xffu));
/* ef0a55: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0a70(void) {
  LOAD_REGS();
L_ef0a70: /* ef0a70: push 0xf039b4 */
  { uint32_t v = 0xf039b4u; esp -= 4; W32(esp, v); }
/* ef0a75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0a77: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0a7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0a7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0a80: mov byte ptr [0xf07d7c], al */
  W8((uint32_t)(0xf07d7cu), (eax & 0xffu));
/* ef0a85: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0aa0(void) {
  LOAD_REGS();
L_ef0aa0: /* ef0aa0: push 0xf039b8 */
  { uint32_t v = 0xf039b8u; esp -= 4; W32(esp, v); }
/* ef0aa5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0aa7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0aadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0aad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0ab0: mov byte ptr [0xf07d65], al */
  W8((uint32_t)(0xf07d65u), (eax & 0xffu));
/* ef0ab5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0ad0(void) {
  LOAD_REGS();
L_ef0ad0: /* ef0ad0: push 0xf039bc */
  { uint32_t v = 0xf039bcu; esp -= 4; W32(esp, v); }
/* ef0ad5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0ad7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0addu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0add: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0ae0: mov byte ptr [0xf07d3c], al */
  W8((uint32_t)(0xf07d3cu), (eax & 0xffu));
/* ef0ae5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0b00(void) {
  LOAD_REGS();
L_ef0b00: /* ef0b00: push 0xf039c0 */
  { uint32_t v = 0xf039c0u; esp -= 4; W32(esp, v); }
/* ef0b05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0b07: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0b0du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0b0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0b10: mov byte ptr [0xf07d86], al */
  W8((uint32_t)(0xf07d86u), (eax & 0xffu));
/* ef0b15: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0b30(void) {
  LOAD_REGS();
L_ef0b30: /* ef0b30: push 0xf039c4 */
  { uint32_t v = 0xf039c4u; esp -= 4; W32(esp, v); }
/* ef0b35: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0b37: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0b3du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0b3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0b40: mov byte ptr [0xf07d62], al */
  W8((uint32_t)(0xf07d62u), (eax & 0xffu));
/* ef0b45: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0b60(void) {
  LOAD_REGS();
L_ef0b60: /* ef0b60: push 0xf039c8 */
  { uint32_t v = 0xf039c8u; esp -= 4; W32(esp, v); }
/* ef0b65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0b67: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0b6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0b6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0b70: mov byte ptr [0xf07d5f], al */
  W8((uint32_t)(0xf07d5fu), (eax & 0xffu));
/* ef0b75: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0b90(void) {
  LOAD_REGS();
L_ef0b90: /* ef0b90: push 0xf039cc */
  { uint32_t v = 0xf039ccu; esp -= 4; W32(esp, v); }
/* ef0b95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0b97: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0b9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0b9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0ba0: mov byte ptr [0xf07d7e], al */
  W8((uint32_t)(0xf07d7eu), (eax & 0xffu));
/* ef0ba5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0bc0(void) {
  LOAD_REGS();
L_ef0bc0: /* ef0bc0: push 0xf039d0 */
  { uint32_t v = 0xf039d0u; esp -= 4; W32(esp, v); }
/* ef0bc5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0bc7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0bcdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0bd0: mov byte ptr [0xf07d31], al */
  W8((uint32_t)(0xf07d31u), (eax & 0xffu));
/* ef0bd5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0bf0(void) {
  LOAD_REGS();
L_ef0bf0: /* ef0bf0: push 0xf039d4 */
  { uint32_t v = 0xf039d4u; esp -= 4; W32(esp, v); }
/* ef0bf5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0bf7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0bfdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0bfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0c00: mov byte ptr [0xf07d44], al */
  W8((uint32_t)(0xf07d44u), (eax & 0xffu));
/* ef0c05: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0c20(void) {
  LOAD_REGS();
L_ef0c20: /* ef0c20: push 0xf039d8 */
  { uint32_t v = 0xf039d8u; esp -= 4; W32(esp, v); }
/* ef0c25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0c27: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0c2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0c2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0c30: mov byte ptr [0xf07d7d], al */
  W8((uint32_t)(0xf07d7du), (eax & 0xffu));
/* ef0c35: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0c50(void) {
  LOAD_REGS();
L_ef0c50: /* ef0c50: push 0xf039dc */
  { uint32_t v = 0xf039dcu; esp -= 4; W32(esp, v); }
/* ef0c55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0c57: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0c5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0c5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0c60: mov byte ptr [0xf07d5e], al */
  W8((uint32_t)(0xf07d5eu), (eax & 0xffu));
/* ef0c65: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0c80(void) {
  LOAD_REGS();
L_ef0c80: /* ef0c80: push 0xf039e0 */
  { uint32_t v = 0xf039e0u; esp -= 4; W32(esp, v); }
/* ef0c85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0c87: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0c8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0c8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0c90: mov byte ptr [0xf07d45], al */
  W8((uint32_t)(0xf07d45u), (eax & 0xffu));
/* ef0c95: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0cb0(void) {
  LOAD_REGS();
L_ef0cb0: /* ef0cb0: push 0xf039e4 */
  { uint32_t v = 0xf039e4u; esp -= 4; W32(esp, v); }
/* ef0cb5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0cb7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0cbdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0cbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0cc0: mov byte ptr [0xf07d5d], al */
  W8((uint32_t)(0xf07d5du), (eax & 0xffu));
/* ef0cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0ce0(void) {
  LOAD_REGS();
L_ef0ce0: /* ef0ce0: push 0xf039e8 */
  { uint32_t v = 0xf039e8u; esp -= 4; W32(esp, v); }
/* ef0ce5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0ce7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0cedu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0ced: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0cf0: mov byte ptr [0xf07d61], al */
  W8((uint32_t)(0xf07d61u), (eax & 0xffu));
/* ef0cf5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0d10(void) {
  LOAD_REGS();
L_ef0d10: /* ef0d10: push 0xf039ec */
  { uint32_t v = 0xf039ecu; esp -= 4; W32(esp, v); }
/* ef0d15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0d17: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0d1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0d1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0d20: mov byte ptr [0xf07d98], al */
  W8((uint32_t)(0xf07d98u), (eax & 0xffu));
/* ef0d25: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0d40(void) {
  LOAD_REGS();
L_ef0d40: /* ef0d40: push 0xf039f0 */
  { uint32_t v = 0xf039f0u; esp -= 4; W32(esp, v); }
/* ef0d45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0d47: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0d4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0d4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0d50: mov byte ptr [0xf07d63], al */
  W8((uint32_t)(0xf07d63u), (eax & 0xffu));
/* ef0d55: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0d70(void) {
  LOAD_REGS();
L_ef0d70: /* ef0d70: push 0xf039f4 */
  { uint32_t v = 0xf039f4u; esp -= 4; W32(esp, v); }
/* ef0d75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0d77: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0d7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0d7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0d80: mov byte ptr [0xf07d5c], al */
  W8((uint32_t)(0xf07d5cu), (eax & 0xffu));
/* ef0d85: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0da0(void) {
  LOAD_REGS();
L_ef0da0: /* ef0da0: push 0xf039f8 */
  { uint32_t v = 0xf039f8u; esp -= 4; W32(esp, v); }
/* ef0da5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0da7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0dadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0dad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0db0: mov byte ptr [0xf07d64], al */
  W8((uint32_t)(0xf07d64u), (eax & 0xffu));
/* ef0db5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0dd0(void) {
  LOAD_REGS();
L_ef0dd0: /* ef0dd0: push 0xf039fc */
  { uint32_t v = 0xf039fcu; esp -= 4; W32(esp, v); }
/* ef0dd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0dd7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0dddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0ddd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0de0: mov byte ptr [0xf07d66], al */
  W8((uint32_t)(0xf07d66u), (eax & 0xffu));
/* ef0de5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0e00(void) {
  LOAD_REGS();
L_ef0e00: /* ef0e00: push 0xf03a00 */
  { uint32_t v = 0xf03a00u; esp -= 4; W32(esp, v); }
/* ef0e05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0e07: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0e0du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0e10: mov byte ptr [0xf07d6c], al */
  W8((uint32_t)(0xf07d6cu), (eax & 0xffu));
/* ef0e15: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0e30(void) {
  LOAD_REGS();
L_ef0e30: /* ef0e30: push 0xf03a04 */
  { uint32_t v = 0xf03a04u; esp -= 4; W32(esp, v); }
/* ef0e35: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0e37: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0e3du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0e3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0e40: mov byte ptr [0xf07d84], al */
  W8((uint32_t)(0xf07d84u), (eax & 0xffu));
/* ef0e45: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0e60(void) {
  LOAD_REGS();
L_ef0e60: /* ef0e60: push 0xf03a08 */
  { uint32_t v = 0xf03a08u; esp -= 4; W32(esp, v); }
/* ef0e65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0e67: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0e6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0e6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0e70: mov byte ptr [0xf07d21], al */
  W8((uint32_t)(0xf07d21u), (eax & 0xffu));
/* ef0e75: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0e90(void) {
  LOAD_REGS();
L_ef0e90: /* ef0e90: push 0xf03a0c */
  { uint32_t v = 0xf03a0cu; esp -= 4; W32(esp, v); }
/* ef0e95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0e97: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0e9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0e9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0ea0: mov byte ptr [0xf07d74], al */
  W8((uint32_t)(0xf07d74u), (eax & 0xffu));
/* ef0ea5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0ec0(void) {
  LOAD_REGS();
L_ef0ec0: /* ef0ec0: push 0xf03a10 */
  { uint32_t v = 0xf03a10u; esp -= 4; W32(esp, v); }
/* ef0ec5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0ec7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0ecdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0ecd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0ed0: mov byte ptr [0xf07d85], al */
  W8((uint32_t)(0xf07d85u), (eax & 0xffu));
/* ef0ed5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0ef0(void) {
  LOAD_REGS();
L_ef0ef0: /* ef0ef0: push 0xf03a14 */
  { uint32_t v = 0xf03a14u; esp -= 4; W32(esp, v); }
/* ef0ef5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0ef7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0efdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0efd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0f00: mov byte ptr [0xf07d30], al */
  W8((uint32_t)(0xf07d30u), (eax & 0xffu));
/* ef0f05: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0f20(void) {
  LOAD_REGS();
L_ef0f20: /* ef0f20: push 0xf03a18 */
  { uint32_t v = 0xf03a18u; esp -= 4; W32(esp, v); }
/* ef0f25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0f27: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0f2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0f2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0f30: mov byte ptr [0xf07d7f], al */
  W8((uint32_t)(0xf07d7fu), (eax & 0xffu));
/* ef0f35: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0f50(void) {
  LOAD_REGS();
L_ef0f50: /* ef0f50: push 0xf03a1c */
  { uint32_t v = 0xf03a1cu; esp -= 4; W32(esp, v); }
/* ef0f55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0f57: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0f5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0f5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0f60: mov byte ptr [0xf07d51], al */
  W8((uint32_t)(0xf07d51u), (eax & 0xffu));
/* ef0f65: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0f80(void) {
  LOAD_REGS();
L_ef0f80: /* ef0f80: push 0xf03a20 */
  { uint32_t v = 0xf03a20u; esp -= 4; W32(esp, v); }
/* ef0f85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0f87: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0f8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0f8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0f90: mov byte ptr [0xf07d20], al */
  W8((uint32_t)(0xf07d20u), (eax & 0xffu));
/* ef0f95: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0fb0(void) {
  LOAD_REGS();
L_ef0fb0: /* ef0fb0: push 0xf03a24 */
  { uint32_t v = 0xf03a24u; esp -= 4; W32(esp, v); }
/* ef0fb5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ef0fb7: call dword ptr [0xf0dc68] */
  esp -= 4; W32(esp, 0xef0fbdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* ef0fbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef0fc0: mov byte ptr [0xf07d8c], al */
  W8((uint32_t)(0xf07d8cu), (eax & 0xffu));
/* ef0fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef0fe0(void) {
  LOAD_REGS();
L_ef0fe0: /* ef0fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef0fe1: mov ecx, dword ptr [0xf0dc64] */
  ecx = R32((uint32_t)(0xf0dc64u));
/* ef0fe7: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef0fec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef0fed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef0fee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef0fef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef0ff0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef0ff1: push 0xed1492 */
  { uint32_t v = 0xed1492u; esp -= 4; W32(esp, v); }
/* ef0ff6: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef0ffb: xor esi, esi */
  esi = 0;
/* ef0ffd: xor edi, edi */
  edi = 0;
/* ef0fff: xor ebx, ebx */
  ebx = 0;
/* ef1001: xor ebp, ebp */
  ebp = 0;
/* ef1003: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef1007: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef100du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef100d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef100e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef1012: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1017: push 0xf03aaa */
  { uint32_t v = 0xf03aaau; esp -= 4; W32(esp, v); }
/* ef101c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef101f: mov edx, esp */
  edx = esp;
/* ef1021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1022: push 0xf082e8 */
  { uint32_t v = 0xf082e8u; esp -= 4; W32(esp, v); }
/* ef1027: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef1029: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef102b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef102e: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* ef1033: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef1036: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1037: mov ecx, 0xf07db8 */
  ecx = 0xf07db8u;
/* ef103c: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef103f: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1045u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1045: push 0xef2990 */
  { uint32_t v = 0xef2990u; esp -= 4; W32(esp, v); }
/* ef104a: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef104fu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef104f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1052: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef1053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef1054: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1055: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1056: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ef1057: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1080(void) {
  LOAD_REGS();
L_ef1080: /* ef1080: mov dword ptr [0xf08d48], 0xf07db8 */
  W32((uint32_t)(0xf08d48u), 0xf07db8u);
/* ef108a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef10a0(void) {
  LOAD_REGS();
L_ef10a0: /* ef10a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef10a3: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef10a9: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef10ae: mov ecx, dword ptr [0xf0dfd4] */
  ecx = R32((uint32_t)(0xf0dfd4u));
/* ef10b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef10b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef10b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef10b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef10b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef10b9: push 0xed1109 */
  { uint32_t v = 0xed1109u; esp -= 4; W32(esp, v); }
/* ef10be: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef10c3: xor esi, esi */
  esi = 0;
/* ef10c5: xor edi, edi */
  edi = 0;
/* ef10c7: xor ebx, ebx */
  ebx = 0;
/* ef10c9: xor ebp, ebp */
  ebp = 0;
/* ef10cb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef10cf: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef10d3: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef10d9u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef10d9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef10dd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef10e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef10e2: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef10e7: push 0xf03ada */
  { uint32_t v = 0xf03adau; esp -= 4; W32(esp, v); }
/* ef10ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef10ef: mov eax, esp */
  eax = esp;
/* ef10f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef10f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef10f3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef10f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef10f7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef10fa: push 0x39c */
  { uint32_t v = 0x39cu; esp -= 4; W32(esp, v); }
/* ef10ff: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef1102: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1103: mov ecx, 0xf082e8 */
  ecx = 0xf082e8u;
/* ef1108: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef110b: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1111u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1111: push 0xef29b0 */
  { uint32_t v = 0xef29b0u; esp -= 4; W32(esp, v); }
/* ef1116: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef111bu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef111b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef111e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef111f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef1120: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1121: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1125: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1160(void) {
  LOAD_REGS();
L_ef1160: /* ef1160: mov dword ptr [0xf08d44], 0xf082e8 */
  W32((uint32_t)(0xf08d44u), 0xf082e8u);
/* ef116a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1180(void) {
  LOAD_REGS();
L_ef1180: /* ef1180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1181: mov ecx, dword ptr [0xf0dc64] */
  ecx = R32((uint32_t)(0xf0dc64u));
/* ef1187: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef118c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef118d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef118e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef118f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1191: push 0xed1663 */
  { uint32_t v = 0xed1663u; esp -= 4; W32(esp, v); }
/* ef1196: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef119b: xor esi, esi */
  esi = 0;
/* ef119d: xor edi, edi */
  edi = 0;
/* ef119f: xor ebx, ebx */
  ebx = 0;
/* ef11a1: xor ebp, ebp */
  ebp = 0;
/* ef11a3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef11a7: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef11adu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef11ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef11ae: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef11b2: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef11b7: push 0xf03b36 */
  { uint32_t v = 0xf03b36u; esp -= 4; W32(esp, v); }
/* ef11bc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef11bf: mov edx, esp */
  edx = esp;
/* ef11c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef11c2: push 0xf07db8 */
  { uint32_t v = 0xf07db8u; esp -= 4; W32(esp, v); }
/* ef11c7: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef11c9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef11cb: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef11ce: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* ef11d3: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef11d6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef11d7: mov ecx, 0xf08818 */
  ecx = 0xf08818u;
/* ef11dc: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef11df: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef11e5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef11e5: push 0xef29d0 */
  { uint32_t v = 0xef29d0u; esp -= 4; W32(esp, v); }
/* ef11ea: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef11efu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef11ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef11f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef11f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef11f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef11f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef11f6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ef11f7: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1220(void) {
  LOAD_REGS();
L_ef1220: /* ef1220: mov dword ptr [0xf082e4], 0xf08818 */
  W32((uint32_t)(0xf082e4u), 0xf08818u);
/* ef122a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1240(void) {
  LOAD_REGS();
L_ef1240: /* ef1240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1241: mov ecx, dword ptr [0xf0dc64] */
  ecx = R32((uint32_t)(0xf0dc64u));
/* ef1247: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef124c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef124d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef124e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef124f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1251: push 0xed1122 */
  { uint32_t v = 0xed1122u; esp -= 4; W32(esp, v); }
/* ef1256: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef125b: xor esi, esi */
  esi = 0;
/* ef125d: xor edi, edi */
  edi = 0;
/* ef125f: xor ebx, ebx */
  ebx = 0;
/* ef1261: xor ebp, ebp */
  ebp = 0;
/* ef1263: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef1267: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef126du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef126d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef126e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef1272: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1277: push 0xf0411a */
  { uint32_t v = 0xf0411au; esp -= 4; W32(esp, v); }
/* ef127c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef127f: mov edx, esp */
  edx = esp;
/* ef1281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1282: push 0xf082e8 */
  { uint32_t v = 0xf082e8u; esp -= 4; W32(esp, v); }
/* ef1287: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef1289: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef128b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef128e: push 0x410 */
  { uint32_t v = 0x410u; esp -= 4; W32(esp, v); }
/* ef1293: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef1296: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1297: mov ecx, 0xf09078 */
  ecx = 0xf09078u;
/* ef129c: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef129f: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef12a5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef12a5: push 0xef29f0 */
  { uint32_t v = 0xef29f0u; esp -= 4; W32(esp, v); }
/* ef12aa: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef12afu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef12af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef12b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef12b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef12b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef12b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef12b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ef12b7: ret  */
  esp += 4; SPILL(); return;
}

void f_ef12e0(void) {
  LOAD_REGS();
L_ef12e0: /* ef12e0: mov dword ptr [0xf09070], 0xf09078 */
  W32((uint32_t)(0xf09070u), 0xf09078u);
/* ef12ea: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1300(void) {
  LOAD_REGS();
L_ef1300: /* ef1300: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef1303: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef1309: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef130e: mov ecx, dword ptr [0xf0dd50] */
  ecx = R32((uint32_t)(0xf0dd50u));
/* ef1314: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef1315: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef1317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef1319: push 0xed1514 */
  { uint32_t v = 0xed1514u; esp -= 4; W32(esp, v); }
/* ef131e: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef1323: xor esi, esi */
  esi = 0;
/* ef1325: xor edi, edi */
  edi = 0;
/* ef1327: xor ebx, ebx */
  ebx = 0;
/* ef1329: xor ebp, ebp */
  ebp = 0;
/* ef132b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef132f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef1333: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef1339u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef1339: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef133d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef1341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1342: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1347: push 0xf04142 */
  { uint32_t v = 0xf04142u; esp -= 4; W32(esp, v); }
/* ef134c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef134f: mov eax, esp */
  eax = esp;
/* ef1351: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1352: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef1353: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef1355: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1356: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef1359: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* ef135e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef1361: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1362: mov ecx, 0xf095a8 */
  ecx = 0xf095a8u;
/* ef1367: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef136a: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1370u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1370: push 0xef2a10 */
  { uint32_t v = 0xef2a10u; esp -= 4; W32(esp, v); }
/* ef1375: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef137au); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef137a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef137d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef137e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef137f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1384: ret  */
  esp += 4; SPILL(); return;
}

void f_ef13c0(void) {
  LOAD_REGS();
L_ef13c0: /* ef13c0: mov dword ptr [0xf09ad4], 0xf095a8 */
  W32((uint32_t)(0xf09ad4u), 0xf095a8u);
/* ef13ca: ret  */
  esp += 4; SPILL(); return;
}

void f_ef13e0(void) {
  LOAD_REGS();
L_ef13e0: /* ef13e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef13e1: mov ecx, dword ptr [0xf0dc64] */
  ecx = R32((uint32_t)(0xf0dc64u));
/* ef13e7: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef13ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef13ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef13ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef13ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef13f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef13f1: push 0xed110e */
  { uint32_t v = 0xed110eu; esp -= 4; W32(esp, v); }
/* ef13f6: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef13fb: xor esi, esi */
  esi = 0;
/* ef13fd: xor edi, edi */
  edi = 0;
/* ef13ff: xor ebx, ebx */
  ebx = 0;
/* ef1401: xor ebp, ebp */
  ebp = 0;
/* ef1403: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef1407: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef140du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef140d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef140e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef1412: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1417: push 0xf04a82 */
  { uint32_t v = 0xf04a82u; esp -= 4; W32(esp, v); }
/* ef141c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef141f: mov edx, esp */
  edx = esp;
/* ef1421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1422: push 0xf076e0 */
  { uint32_t v = 0xf076e0u; esp -= 4; W32(esp, v); }
/* ef1427: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef1429: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ef142b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef142e: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* ef1433: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef1436: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1437: mov ecx, 0xf09cf0 */
  ecx = 0xf09cf0u;
/* ef143c: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef143f: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1445u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1445: push 0xef2a30 */
  { uint32_t v = 0xef2a30u; esp -= 4; W32(esp, v); }
/* ef144a: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef144fu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef144f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef1453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef1454: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1455: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1456: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ef1457: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1480(void) {
  LOAD_REGS();
L_ef1480: /* ef1480: mov dword ptr [0xf0a21c], 0xf09cf0 */
  W32((uint32_t)(0xf0a21cu), 0xf09cf0u);
/* ef148a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef14a0(void) {
  LOAD_REGS();
L_ef14a0: /* ef14a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef14a3: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef14a9: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef14ae: mov ecx, dword ptr [0xf0dd70] */
  ecx = R32((uint32_t)(0xf0dd70u));
/* ef14b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef14b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef14b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef14b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef14b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef14b9: push 0xed1069 */
  { uint32_t v = 0xed1069u; esp -= 4; W32(esp, v); }
/* ef14be: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef14c3: xor esi, esi */
  esi = 0;
/* ef14c5: xor edi, edi */
  edi = 0;
/* ef14c7: xor ebx, ebx */
  ebx = 0;
/* ef14c9: xor ebp, ebp */
  ebp = 0;
/* ef14cb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef14cf: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef14d3: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef14d9u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef14d9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef14dd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef14e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef14e2: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef14e7: push 0xf05442 */
  { uint32_t v = 0xf05442u; esp -= 4; W32(esp, v); }
/* ef14ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef14ef: mov eax, esp */
  eax = esp;
/* ef14f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef14f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef14f3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef14f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef14f7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef14fa: push 0x3f54 */
  { uint32_t v = 0x3f54u; esp -= 4; W32(esp, v); }
/* ef14ff: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef1502: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1503: mov ecx, 0xf0a340 */
  ecx = 0xf0a340u;
/* ef1508: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef150b: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1511u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1511: push 0xef2a50 */
  { uint32_t v = 0xef2a50u; esp -= 4; W32(esp, v); }
/* ef1516: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef151bu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef151b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef151e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef151f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef1520: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1521: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1525: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1560(void) {
  LOAD_REGS();
L_ef1560: /* ef1560: mov dword ptr [0xf0a334], 0xf0a340 */
  W32((uint32_t)(0xf0a334u), 0xf0a340u);
/* ef156a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1580(void) {
  LOAD_REGS();
L_ef1580: /* ef1580: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef1583: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef1588: mov ecx, dword ptr [0xf0dd78] */
  ecx = R32((uint32_t)(0xf0dd78u));
/* ef158e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef158f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef1591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1592: push 0xed1a19 */
  { uint32_t v = 0xed1a19u; esp -= 4; W32(esp, v); }
/* ef1597: push 0xed135c */
  { uint32_t v = 0xed135cu; esp -= 4; W32(esp, v); }
/* ef159c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef15a1: xor esi, esi */
  esi = 0;
/* ef15a3: xor edi, edi */
  edi = 0;
/* ef15a5: xor ebx, ebx */
  ebx = 0;
/* ef15a7: xor ebp, ebp */
  ebp = 0;
/* ef15a9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef15ad: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef15b1: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef15b7u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef15b7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ef15bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef15bc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef15c0: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef15c5: push 0xf05a4a */
  { uint32_t v = 0xf05a4au; esp -= 4; W32(esp, v); }
/* ef15ca: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef15cd: mov edx, esp */
  edx = esp;
/* ef15cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef15d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef15d1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef15d3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ef15d5: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef15d8: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* ef15dd: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef15e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef15e1: mov ecx, 0xf0a870 */
  ecx = 0xf0a870u;
/* ef15e6: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef15e9: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef15efu); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef15ef: push 0xef2a70 */
  { uint32_t v = 0xef2a70u; esp -= 4; W32(esp, v); }
/* ef15f4: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef15f9u); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef15f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef15fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef15fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef15fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef15ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1600: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1603: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1640(void) {
  LOAD_REGS();
L_ef1640: /* ef1640: mov dword ptr [0xf0a338], 0xf0a870 */
  W32((uint32_t)(0xf0a338u), 0xf0a870u);
/* ef164a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1660(void) {
  LOAD_REGS();
L_ef1660: /* ef1660: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef1663: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef1669: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef166e: mov ecx, dword ptr [0xf0d958] */
  ecx = R32((uint32_t)(0xf0d958u));
/* ef1674: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef1675: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef1677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1678: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef1679: push 0xed139d */
  { uint32_t v = 0xed139du; esp -= 4; W32(esp, v); }
/* ef167e: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef1683: xor esi, esi */
  esi = 0;
/* ef1685: xor edi, edi */
  edi = 0;
/* ef1687: xor ebx, ebx */
  ebx = 0;
/* ef1689: xor ebp, ebp */
  ebp = 0;
/* ef168b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef168f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef1693: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef1699u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef1699: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef169d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef16a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef16a2: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef16a7: push 0xf05d8e */
  { uint32_t v = 0xf05d8eu; esp -= 4; W32(esp, v); }
/* ef16ac: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef16af: mov eax, esp */
  eax = esp;
/* ef16b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef16b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef16b3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef16b5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ef16b7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef16ba: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* ef16bf: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef16c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef16c3: mov ecx, 0xf0afc0 */
  ecx = 0xf0afc0u;
/* ef16c8: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef16cb: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef16d1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef16d1: push 0xef2a90 */
  { uint32_t v = 0xef2a90u; esp -= 4; W32(esp, v); }
/* ef16d6: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef16dbu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef16db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef16de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef16df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef16e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef16e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef16e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef16e5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1720(void) {
  LOAD_REGS();
L_ef1720: /* ef1720: mov dword ptr [0xf0ba1c], 0xf0afc0 */
  W32((uint32_t)(0xf0ba1cu), 0xf0afc0u);
/* ef172a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1740(void) {
  LOAD_REGS();
L_ef1740: /* ef1740: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef1743: mov edx, dword ptr [0xf0dc64] */
  edx = R32((uint32_t)(0xf0dc64u));
/* ef1749: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef174e: mov ecx, dword ptr [0xf0d958] */
  ecx = R32((uint32_t)(0xf0d958u));
/* ef1754: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef1755: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef1757: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1758: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef1759: push 0xed1311 */
  { uint32_t v = 0xed1311u; esp -= 4; W32(esp, v); }
/* ef175e: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef1763: xor esi, esi */
  esi = 0;
/* ef1765: xor edi, edi */
  edi = 0;
/* ef1767: xor ebx, ebx */
  ebx = 0;
/* ef1769: xor ebp, ebp */
  ebp = 0;
/* ef176b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef176f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ef1773: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef1779u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef1779: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ef177d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ef1781: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1782: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1787: push 0xf05f56 */
  { uint32_t v = 0xf05f56u; esp -= 4; W32(esp, v); }
/* ef178c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef178f: mov eax, esp */
  eax = esp;
/* ef1791: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1792: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ef1793: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ef1795: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ef1797: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ef179a: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* ef179f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ef17a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef17a3: mov ecx, 0xf0b4f0 */
  ecx = 0xf0b4f0u;
/* ef17a8: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* ef17ab: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef17b1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef17b1: push 0xef2ab0 */
  { uint32_t v = 0xef2ab0u; esp -= 4; W32(esp, v); }
/* ef17b6: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef17bbu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef17bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef17be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef17bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef17c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef17c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef17c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef17c5: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1800(void) {
  LOAD_REGS();
L_ef1800: /* ef1800: mov dword ptr [0xf0afb8], 0xf0b4f0 */
  W32((uint32_t)(0xf0afb8u), 0xf0b4f0u);
/* ef180a: ret  */
  esp += 4; SPILL(); return;
}

void f_ef1820(void) {
  LOAD_REGS();
L_ef1820: /* ef1820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1821: mov ecx, dword ptr [0xf0dc64] */
  ecx = R32((uint32_t)(0xf0dc64u));
/* ef1827: mov eax, dword ptr [0xf0dc40] */
  eax = R32((uint32_t)(0xf0dc40u));
/* ef182c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ef182d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef182e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ef182f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ef1830: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ef1831: push 0xed1307 */
  { uint32_t v = 0xed1307u; esp -= 4; W32(esp, v); }
/* ef1836: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ef183b: xor esi, esi */
  esi = 0;
/* ef183d: xor edi, edi */
  edi = 0;
/* ef183f: xor ebx, ebx */
  ebx = 0;
/* ef1841: xor ebp, ebp */
  ebp = 0;
/* ef1843: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ef1847: call dword ptr [0xf0dc3c] */
  esp -= 4; W32(esp, 0xef184du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ef184d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef184e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ef1852: push 0xf039a0 */
  { uint32_t v = 0xf039a0u; esp -= 4; W32(esp, v); }
/* ef1857: push 0xf0607a */
  { uint32_t v = 0xf0607au; esp -= 4; W32(esp, v); }
/* ef185c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ef185f: mov edx, esp */
  edx = esp;
/* ef1861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ef1862: push 0xf076e0 */
  { uint32_t v = 0xf076e0u; esp -= 4; W32(esp, v); }
/* ef1867: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ef1869: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ef186b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ef186e: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* ef1873: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ef1876: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ef1877: mov ecx, 0xf0bc40 */
  ecx = 0xf0bc40u;
/* ef187c: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ef187f: call dword ptr [0xf0dc38] */
  esp -= 4; W32(esp, 0xef1885u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ef1885: push 0xef2ad0 */
  { uint32_t v = 0xef2ad0u; esp -= 4; W32(esp, v); }
/* ef188a: call 0xeec6ea */
  esp -= 4; W32(esp, 0xef188fu); SPILL(); f_eec6ea(); if (g_unwind) return; RELOAD();
/* ef188f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ef1892: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ef1893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ef1894: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ef1895: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ef1896: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ef1897: ret  */
  esp += 4; SPILL(); return;
}

void f_ef18c0(void) {
  LOAD_REGS();
L_ef18c0: /* ef18c0: mov dword ptr [0xf0c16c], 0xf0bc40 */
  W32((uint32_t)(0xf0c16cu), 0xf0bc40u);
/* ef18ca: ret  */
  esp += 4; SPILL(); return;
}

void f_ef2950(void) {
  LOAD_REGS();
L_ef2950: /* ef2950: mov ecx, 0xf07088 */
  ecx = 0xf07088u;
/* ef2955: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2970(void) {
  LOAD_REGS();
L_ef2970: /* ef2970: mov ecx, 0xf076e0 */
  ecx = 0xf076e0u;
/* ef2975: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2990(void) {
  LOAD_REGS();
L_ef2990: /* ef2990: mov ecx, 0xf07db8 */
  ecx = 0xf07db8u;
/* ef2995: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef29b0(void) {
  LOAD_REGS();
L_ef29b0: /* ef29b0: mov ecx, 0xf082e8 */
  ecx = 0xf082e8u;
/* ef29b5: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef29d0(void) {
  LOAD_REGS();
L_ef29d0: /* ef29d0: mov ecx, 0xf08818 */
  ecx = 0xf08818u;
/* ef29d5: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef29f0(void) {
  LOAD_REGS();
L_ef29f0: /* ef29f0: mov ecx, 0xf09078 */
  ecx = 0xf09078u;
/* ef29f5: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2a10(void) {
  LOAD_REGS();
L_ef2a10: /* ef2a10: mov ecx, 0xf095a8 */
  ecx = 0xf095a8u;
/* ef2a15: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2a30(void) {
  LOAD_REGS();
L_ef2a30: /* ef2a30: mov ecx, 0xf09cf0 */
  ecx = 0xf09cf0u;
/* ef2a35: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2a50(void) {
  LOAD_REGS();
L_ef2a50: /* ef2a50: mov ecx, 0xf0a340 */
  ecx = 0xf0a340u;
/* ef2a55: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2a70(void) {
  LOAD_REGS();
L_ef2a70: /* ef2a70: mov ecx, 0xf0a870 */
  ecx = 0xf0a870u;
/* ef2a75: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2a90(void) {
  LOAD_REGS();
L_ef2a90: /* ef2a90: mov ecx, 0xf0afc0 */
  ecx = 0xf0afc0u;
/* ef2a95: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2ab0(void) {
  LOAD_REGS();
L_ef2ab0: /* ef2ab0: mov ecx, 0xf0b4f0 */
  ecx = 0xf0b4f0u;
/* ef2ab5: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ef2ad0(void) {
  LOAD_REGS();
L_ef2ad0: /* ef2ad0: mov ecx, 0xf0bc40 */
  ecx = 0xf0bc40u;
/* ef2ad5: jmp dword ptr [0xf0dc44] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}
