#include "recomp.h"
#include "rec_mod.h"

void f_d58df0(void) {
  LOAD_REGS();
L_d58df0: /* d58df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d58df4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d58df7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d58df8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d58dfb: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d58dfe: jne 0xd58e15 */
  if (!zf) goto L_d58e15;
L_d58e00: /* d58e00: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d58e01: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d58e04: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d58e07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d58e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d58e0a: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d58e0f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd58e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d58e15: /* d58e15: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d58e19: push 0xd79550 */
  { uint32_t v = 0xd79550u; esp -= 4; W32(esp, v); }
/* d58e1e: call dword ptr [0xd7a3e4] */
  esp -= 4; W32(esp, 0xd58e24u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d58e24: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d58e40(void) {
  LOAD_REGS();
L_d58e40: /* d58e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d58e44: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d58e47: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d58e48: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d58e4b: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d58e4e: jne 0xd58e6e */
  if (!zf) goto L_d58e6e;
L_d58e50: /* d58e50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d58e51: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d58e54: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d58e57: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d58e5b: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d58e60: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d58e68: jmp dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); SPILL(); call_ind(t); return; }
L_d58e6e: /* d58e6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d58e90(void) {
  LOAD_REGS();
L_d58e90: /* d58e90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d58e93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58e95: jne 0xd58e98 */
  if (!zf) goto L_d58e98;
L_d58e97: /* d58e97: ret  */
  esp += 4; SPILL(); return;
L_d58e98: /* d58e98: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d58e9b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d58e9d: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d58ea2: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d58ea4: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d58ea7: mov eax, edx */
  eax = edx;
/* d58ea9: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d58eac: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d58eae: mov eax, edx */
  eax = edx;
/* d58eb0: ret  */
  esp += 4; SPILL(); return;
}

void f_d58ed0(void) {
  LOAD_REGS();
L_d58ed0: /* d58ed0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d58ed3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58ed5: jne 0xd58eda */
  if (!zf) goto L_d58eda;
L_d58ed7: /* d58ed7: xor eax, eax */
  eax = 0;
/* d58ed9: ret  */
  esp += 4; SPILL(); return;
L_d58eda: /* d58eda: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d58edd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d58edf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d58ee2: ret  */
  esp += 4; SPILL(); return;
}

void f_d58f00(void) {
  LOAD_REGS();
L_d58f00: /* d58f00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d58f02: push 0xd653cb */
  { uint32_t v = 0xd653cbu; esp -= 4; W32(esp, v); }
/* d58f07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d58f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d58f0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d58f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d58f16: mov eax, dword ptr [0xd79ba8] */
  eax = R32((uint32_t)(0xd79ba8u));
/* d58f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58f1d: jne 0xd58f63 */
  if (!zf) goto L_d58f63;
L_d58f1f: /* d58f1f: mov eax, dword ptr [0xd7a3e8] */
  eax = R32((uint32_t)(0xd7a3e8u));
/* d58f24: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d58f26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d58f28: push 0xd77dec */
  { uint32_t v = 0xd77decu; esp -= 4; W32(esp, v); }
/* d58f2d: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* d58f2f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd58f31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d58f31: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* d58f35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58f37: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* d58f3f: je 0xd58f5c */
  if (zf) goto L_d58f5c;
L_d58f41: /* d58f41: mov ecx, eax */
  ecx = eax;
/* d58f43: call 0xd516e5 */
  esp -= 4; W32(esp, 0xd58f48u); SPILL(); f_d516e5(); if (g_unwind) return; RELOAD();
/* d58f48: mov dword ptr [0xd79ba8], eax */
  W32((uint32_t)(0xd79ba8u), eax);
/* d58f4d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d58f51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d58f58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d58f5b: ret  */
  esp += 4; SPILL(); return;
L_d58f5c: /* d58f5c: xor eax, eax */
  eax = 0;
/* d58f5e: mov dword ptr [0xd79ba8], eax */
  W32((uint32_t)(0xd79ba8u), eax);
L_d58f63: /* d58f63: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d58f67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d58f6e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d58f71: ret  */
  esp += 4; SPILL(); return;
}

void f_d58fa0(void) {
  LOAD_REGS();
L_d58fa0: /* d58fa0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d58fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58fa5: jne 0xd58fa8 */
  if (!zf) goto L_d58fa8;
L_d58fa7: /* d58fa7: ret  */
  esp += 4; SPILL(); return;
L_d58fa8: /* d58fa8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d58fab: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d58fad: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d58fb2: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d58fb4: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d58fb7: mov eax, edx */
  eax = edx;
/* d58fb9: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d58fbc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d58fbe: mov eax, edx */
  eax = edx;
/* d58fc0: ret  */
  esp += 4; SPILL(); return;
}

void f_d58fe0(void) {
  LOAD_REGS();
L_d58fe0: /* d58fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d58fe1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d58fe5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d58fe7: jl 0xd59013 */
  if ((sf != of)) goto L_d59013;
L_d58fe9: /* d58fe9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d58fec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d58fee: je 0xd59013 */
  if (zf) goto L_d59013;
L_d58ff0: /* d58ff0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d58ff3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d58ff5: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d58ffa: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d58ffc: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d58fff: mov eax, edx */
  eax = edx;
/* d59001: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d59004: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d59006: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d59008: jae 0xd59013 */
  if (!cf) goto L_d59013;
L_d5900a: /* d5900a: mov eax, 1 */
  eax = 0x1u;
/* d5900f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59010: ret 4 */
  esp += 8; SPILL(); return;
L_d59013: /* d59013: xor eax, eax */
  eax = 0;
/* d59015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59016: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d59030(void) {
  LOAD_REGS();
L_d59030: /* d59030: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* d59033: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d59035: jne 0xd5903a */
  if (!zf) goto L_d5903a;
L_d59037: /* d59037: xor eax, eax */
  eax = 0;
/* d59039: ret  */
  esp += 4; SPILL(); return;
L_d5903a: /* d5903a: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* d5903d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5903f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d59042: ret  */
  esp += 4; SPILL(); return;
}

void f_d59060(void) {
  LOAD_REGS();
L_d59060: /* d59060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59062: push 0xd65404 */
  { uint32_t v = 0xd65404u; esp -= 4; W32(esp, v); }
/* d59067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5906d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5906e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59075: sub esp, 0x820 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x820u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5907b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5907c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d59080: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd59086u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d59086: mov esi, dword ptr [esp + 0x834] */
  esi = R32((uint32_t)(esp + 0x834u));
/* d5908d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59090: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59093: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59096: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59097: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5909a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* d5909e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5909f: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d590a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d590a5: mov dword ptr [esp + 0x834], 0 */
  W32((uint32_t)(esp + 0x834u), 0x0u);
/* d590b0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd590b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d590b3: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d590b7: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd590bdu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d590bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d590c0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d590c3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d590c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d590c7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d590ca: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d590ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d590cf: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d590d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d590d5: mov byte ptr [esp + 0x834], 1 */
  W8((uint32_t)(esp + 0x834u), 0x1u);
/* d590dd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd590e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d590e0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d590e3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d590e4: mov eax, edx */
  eax = edx;
/* d590e6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d590e9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d590ec: jne 0xd59104 */
  if (!zf) goto L_d59104;
L_d590ee: /* d590ee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d590f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d590f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d590f4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d590f7: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d590fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d590fe: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59104u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59104: /* d59104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59106: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59108: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d5910d: lea eax, [esp + 0x430] */
  eax = (uint32_t)(esp + 0x430u);
/* d59114: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59115: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59117: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d5911b: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59121u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59121: mov esi, dword ptr [0xd7a500] */
  esi = R32((uint32_t)(0xd7a500u));
/* d59127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59128: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5912a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5912c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd5912eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5912e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59132: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d59137: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5913b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5913c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5913e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d59142: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59148u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5914b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5914d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd5914fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5914f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d59151: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59154: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* d59158: mov ecx, esp */
  ecx = esp;
/* d5915a: mov dword ptr [esp + 0x40], esp */
  W32((uint32_t)(esp + 0x40u), esp);
/* d5915e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5915f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59165u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59165: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59168: lea eax, [esp + 0x460] */
  eax = (uint32_t)(esp + 0x460u);
/* d5916f: mov ecx, esp */
  ecx = esp;
/* d59171: mov dword ptr [esp + 0x58], esp */
  W32((uint32_t)(esp + 0x58u), esp);
/* d59175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59176: mov byte ptr [esp + 0x86c], 2 */
  W8((uint32_t)(esp + 0x86cu), 0x2u);
/* d5917e: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59184u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59184: mov byte ptr [esp + 0x868], 1 */
  W8((uint32_t)(esp + 0x868u), 0x1u);
/* d5918c: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59191u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59191: mov ecx, eax */
  ecx = eax;
/* d59193: call 0xd511a9 */
  esp -= 4; W32(esp, 0xd59198u); SPILL(); f_d511a9(); if (g_unwind) return; RELOAD();
/* d59198: mov ecx, dword ptr [esp + 0x838] */
  ecx = R32((uint32_t)(esp + 0x838u));
/* d5919f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d591a1: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d591a5: mov byte ptr [esp + 0x82c], 0 */
  W8((uint32_t)(esp + 0x82cu), 0x0u);
/* d591ad: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd591b3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d591b3: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d591b7: mov dword ptr [esp + 0x82c], 0xffffffff */
  W32((uint32_t)(esp + 0x82cu), 0xffffffffu);
/* d591c2: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd591c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d591c8: mov ecx, dword ptr [esp + 0x824] */
  ecx = R32((uint32_t)(esp + 0x824u));
/* d591cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d591d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d591d7: add esp, 0x82c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x82cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d591dd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59240(void) {
  LOAD_REGS();
L_d59240: /* d59240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59242: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d59246: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59249: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5924c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59254: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59257: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59258: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5925b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d5925f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59260: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59266: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59269: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d5926c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d5926d: mov eax, edx */
  eax = edx;
/* d5926f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59272: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59275: jne 0xd5928d */
  if (!zf) goto L_d5928d;
L_d59277: /* d59277: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5927a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5927b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5927d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59280: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59287: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd5928du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5928d: /* d5928d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d59291: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59292: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59297u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59297: mov ecx, eax */
  ecx = eax;
/* d59299: call 0xd51343 */
  esp -= 4; W32(esp, 0xd5929eu); SPILL(); f_d51343(); if (g_unwind) return; RELOAD();
/* d5929e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d592a2: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d592a5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d592a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d592a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d592a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d592d0(void) {
  LOAD_REGS();
L_d592d0: /* d592d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d592d2: push 0xd65444 */
  { uint32_t v = 0xd65444u; esp -= 4; W32(esp, v); }
/* d592d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d592dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d592de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d592e5: sub esp, 0x820 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x820u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d592eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d592ec: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d592f0: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd592f6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d592f6: mov esi, dword ptr [esp + 0x834] */
  esi = R32((uint32_t)(esp + 0x834u));
/* d592fd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59300: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59303: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59306: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59307: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5930a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* d5930e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5930f: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59315: mov dword ptr [esp + 0x834], 0 */
  W32((uint32_t)(esp + 0x834u), 0x0u);
/* d59320: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59323u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59323: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d59327: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd5932du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d5932d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59330: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59333: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59336: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59337: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5933a: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d5933e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5933f: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59345: mov byte ptr [esp + 0x834], 1 */
  W8((uint32_t)(esp + 0x834u), 0x1u);
/* d5934d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59350u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59350: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59353: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59354: mov eax, edx */
  eax = edx;
/* d59356: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59359: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5935c: jne 0xd59374 */
  if (!zf) goto L_d59374;
L_d5935e: /* d5935e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59361: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59362: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59364: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59367: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d5936d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5936e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59374: /* d59374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59378: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d5937d: lea eax, [esp + 0x430] */
  eax = (uint32_t)(esp + 0x430u);
/* d59384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59385: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59387: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d5938b: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59391u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59391: mov esi, dword ptr [0xd7a500] */
  esi = R32((uint32_t)(0xd7a500u));
/* d59397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5939a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5939c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd5939eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5939e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d593a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d593a2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d593a7: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d593ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d593ac: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d593ae: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d593b2: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd593b8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d593b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d593b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d593bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d593bd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd593bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d593bf: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d593c2: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* d593c6: mov ecx, esp */
  ecx = esp;
/* d593c8: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d593cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d593cd: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd593d3u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d593d3: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d593d6: lea eax, [esp + 0x45c] */
  eax = (uint32_t)(esp + 0x45cu);
/* d593dd: mov ecx, esp */
  ecx = esp;
/* d593df: mov dword ptr [esp + 0x54], esp */
  W32((uint32_t)(esp + 0x54u), esp);
/* d593e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d593e4: mov byte ptr [esp + 0x868], 2 */
  W8((uint32_t)(esp + 0x868u), 0x2u);
/* d593ec: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd593f2u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d593f2: mov byte ptr [esp + 0x864], 1 */
  W8((uint32_t)(esp + 0x864u), 0x1u);
/* d593fa: call 0xd5133e */
  esp -= 4; W32(esp, 0xd593ffu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d593ff: mov ecx, eax */
  ecx = eax;
/* d59401: call 0xd51613 */
  esp -= 4; W32(esp, 0xd59406u); SPILL(); f_d51613(); if (g_unwind) return; RELOAD();
/* d59406: mov edx, dword ptr [esp + 0x838] */
  edx = R32((uint32_t)(esp + 0x838u));
/* d5940d: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d59410: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d59412: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d59416: mov byte ptr [esp + 0x82c], 0 */
  W8((uint32_t)(esp + 0x82cu), 0x0u);
/* d5941e: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59424u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59424: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d59428: mov dword ptr [esp + 0x82c], 0xffffffff */
  W32((uint32_t)(esp + 0x82cu), 0xffffffffu);
/* d59433: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59439u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59439: mov ecx, dword ptr [esp + 0x824] */
  ecx = R32((uint32_t)(esp + 0x824u));
/* d59440: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d59447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59448: add esp, 0x82c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x82cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5944e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d594d0(void) {
  LOAD_REGS();
L_d594d0: /* d594d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d594d4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d594d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d594d8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d594db: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d594de: jne 0xd594f5 */
  if (!zf) goto L_d594f5;
L_d594e0: /* d594e0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d594e1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d594e4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d594e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d594e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d594ea: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d594ef: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd594f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d594f5: /* d594f5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd594fau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d594fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d594fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d594ff: jne 0xd5950c */
  if (!zf) goto L_d5950c;
L_d59501: /* d59501: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d59505: xor eax, eax */
  eax = 0;
/* d59507: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d59509: ret 8 */
  esp += 12; SPILL(); return;
L_d5950c: /* d5950c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d5950f: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d59511: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d59516: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d59518: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5951c: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5951f: mov eax, edx */
  eax = edx;
/* d59521: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d59524: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d59526: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d59528: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59550(void) {
  LOAD_REGS();
L_d59550: /* d59550: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59552: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d59556: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59559: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5955c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59564: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59567: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59568: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5956b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d5956f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59570: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59576: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59579: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d5957c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d5957d: mov eax, edx */
  eax = edx;
/* d5957f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59582: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59585: jne 0xd5959d */
  if (!zf) goto L_d5959d;
L_d59587: /* d59587: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5958a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5958b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5958d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59590: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59597: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd5959du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5959d: /* d5959d: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* d595a1: call 0xd5133e */
  esp -= 4; W32(esp, 0xd595a6u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d595a6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d595a8: jl 0xd595de */
  if ((sf != of)) goto L_d595de;
L_d595aa: /* d595aa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d595ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d595af: je 0xd595de */
  if (zf) goto L_d595de;
L_d595b1: /* d595b1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d595b4: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d595b6: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d595bb: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d595bd: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d595c0: mov eax, edx */
  eax = edx;
/* d595c2: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d595c5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d595c7: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d595c9: jae 0xd595de */
  if (!cf) goto L_d595de;
L_d595cb: /* d595cb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d595cf: mov eax, 1 */
  eax = 0x1u;
/* d595d4: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d595d7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d595d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d595da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d595db: ret 8 */
  esp += 12; SPILL(); return;
L_d595de: /* d595de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d595e2: xor eax, eax */
  eax = 0;
/* d595e4: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d595e7: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d595e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d595ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d595eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59620(void) {
  LOAD_REGS();
L_d59620: /* d59620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d59624: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d59627: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59628: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d5962b: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5962e: jne 0xd59645 */
  if (!zf) goto L_d59645;
L_d59630: /* d59630: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59631: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d59634: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d59637: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5963a: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d5963f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd59645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59645: /* d59645: call 0xd5133e */
  esp -= 4; W32(esp, 0xd5964au); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d5964a: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d5964d: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d59650: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d59652: jne 0xd5965f */
  if (!zf) goto L_d5965f;
L_d59654: /* d59654: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d59658: xor eax, eax */
  eax = 0;
/* d5965a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5965c: ret 8 */
  esp += 12; SPILL(); return;
L_d5965f: /* d5965f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d59662: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d59666: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d59668: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5966b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* d5966d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59690(void) {
  LOAD_REGS();
L_d59690: /* d59690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59691: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59692: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d59696: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59699: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5969c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d596a4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d596a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d596a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d596ab: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d596af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d596b0: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d596b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d596b6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd596b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d596b9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d596bc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d596bd: mov eax, edx */
  eax = edx;
/* d596bf: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d596c2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d596c5: jne 0xd596dd */
  if (!zf) goto L_d596dd;
L_d596c7: /* d596c7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d596ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d596cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d596cd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d596d0: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d596d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d596d7: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd596ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d596dd: /* d596dd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d596e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d596e2: call 0xd5133e */
  esp -= 4; W32(esp, 0xd596e7u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d596e7: mov ecx, eax */
  ecx = eax;
/* d596e9: call 0xd51032 */
  esp -= 4; W32(esp, 0xd596eeu); SPILL(); f_d51032(); if (g_unwind) return; RELOAD();
/* d596ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d596f2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d596f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d596f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d596f6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59720(void) {
  LOAD_REGS();
L_d59720: /* d59720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59722: push 0xd65484 */
  { uint32_t v = 0xd65484u; esp -= 4; W32(esp, v); }
/* d59727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5972d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5972e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59735: sub esp, 0x820 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x820u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5973b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5973c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d59740: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd59746u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d59746: mov esi, dword ptr [esp + 0x834] */
  esi = R32((uint32_t)(esp + 0x834u));
/* d5974d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59750: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59753: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59756: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59757: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5975a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* d5975e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5975f: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59765: mov dword ptr [esp + 0x834], 0 */
  W32((uint32_t)(esp + 0x834u), 0x0u);
/* d59770: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59773: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d59777: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd5977du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d5977d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59780: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59783: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59786: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59787: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d5978a: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d5978e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5978f: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59795: mov byte ptr [esp + 0x834], 1 */
  W8((uint32_t)(esp + 0x834u), 0x1u);
/* d5979d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd597a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d597a0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d597a3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d597a4: mov eax, edx */
  eax = edx;
/* d597a6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d597a9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d597ac: jne 0xd597c4 */
  if (!zf) goto L_d597c4;
L_d597ae: /* d597ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d597b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d597b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597b4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d597b7: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d597bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d597be: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd597c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d597c4: /* d597c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597c8: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d597cd: lea eax, [esp + 0x430] */
  eax = (uint32_t)(esp + 0x430u);
/* d597d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d597d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d597d7: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d597db: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd597e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d597e1: mov esi, dword ptr [0xd7a500] */
  esi = R32((uint32_t)(0xd7a500u));
/* d597e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d597e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd597eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d597ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d597f2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d597f7: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d597fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d597fc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d597fe: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d59802: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59808u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59808: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59809: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5980b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5980d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd5980fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5980f: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59812: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* d59816: mov ecx, esp */
  ecx = esp;
/* d59818: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d5981c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5981d: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59823u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59823: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59826: lea eax, [esp + 0x45c] */
  eax = (uint32_t)(esp + 0x45cu);
/* d5982d: mov ecx, esp */
  ecx = esp;
/* d5982f: mov dword ptr [esp + 0x54], esp */
  W32((uint32_t)(esp + 0x54u), esp);
/* d59833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59834: mov byte ptr [esp + 0x868], 2 */
  W8((uint32_t)(esp + 0x868u), 0x2u);
/* d5983c: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59842u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59842: mov byte ptr [esp + 0x864], 1 */
  W8((uint32_t)(esp + 0x864u), 0x1u);
/* d5984a: call 0xd5133e */
  esp -= 4; W32(esp, 0xd5984fu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d5984f: mov ecx, eax */
  ecx = eax;
/* d59851: call 0xd51352 */
  esp -= 4; W32(esp, 0xd59856u); SPILL(); f_d51352(); if (g_unwind) return; RELOAD();
/* d59856: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d5985a: mov byte ptr [esp + 0x82c], 0 */
  W8((uint32_t)(esp + 0x82cu), 0x0u);
/* d59862: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59868u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59868: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5986c: mov dword ptr [esp + 0x82c], 0xffffffff */
  W32((uint32_t)(esp + 0x82cu), 0xffffffffu);
/* d59877: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd5987du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d5987d: mov ecx, dword ptr [esp + 0x824] */
  ecx = R32((uint32_t)(esp + 0x824u));
/* d59884: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5988b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5988c: add esp, 0x82c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x82cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d59892: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59900(void) {
  LOAD_REGS();
L_d59900: /* d59900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d59904: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d59907: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59908: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d5990b: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5990e: jne 0xd59925 */
  if (!zf) goto L_d59925;
L_d59910: /* d59910: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59911: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d59914: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d59917: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5991a: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d5991f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd59925u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59925: /* d59925: call 0xd5133e */
  esp -= 4; W32(esp, 0xd5992au); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d5992a: mov ecx, eax */
  ecx = eax;
/* d5992c: call 0xd51767 */
  esp -= 4; W32(esp, 0xd59931u); SPILL(); f_d51767(); if (g_unwind) return; RELOAD();
/* d59931: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59950(void) {
  LOAD_REGS();
L_d59950: /* d59950: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59952: push 0xd654a9 */
  { uint32_t v = 0xd654a9u; esp -= 4; W32(esp, v); }
/* d59957: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5995d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5995e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59965: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59969: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* d5996d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59970: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59973: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d5997b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d5997e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5997f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59982: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d59986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59987: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d5998c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5998d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59990: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59993: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59994: mov eax, edx */
  eax = edx;
/* d59996: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59999: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5999c: jne 0xd599b4 */
  if (!zf) goto L_d599b4;
L_d5999e: /* d5999e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d599a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d599a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d599a4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d599a7: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d599ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d599ae: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd599b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d599b4: /* d599b4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d599b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d599b9: call 0xd5133e */
  esp -= 4; W32(esp, 0xd599beu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d599be: mov ecx, eax */
  ecx = eax;
/* d599c0: call 0xd51523 */
  esp -= 4; W32(esp, 0xd599c5u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d599c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d599c6: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d599ca: call dword ptr [0xd7a3c8] */
  esp -= 4; W32(esp, 0xd599d0u); SPILL(); f_4e13d9(); if (g_unwind) return; /* Core!??0FString@@QAE@PBD@Z */ RELOAD();
/* d599d0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d599d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d599d5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d599d9: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d599e1: call dword ptr [0xd7a3cc] */
  esp -= 4; W32(esp, 0xd599e7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d599e7: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d599eb: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* d599f3: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd599f9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d599f9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d599fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d599fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d59a05: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d59a08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59a40(void) {
  LOAD_REGS();
L_d59a40: /* d59a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59a42: push 0xd654c9 */
  { uint32_t v = 0xd654c9u; esp -= 4; W32(esp, v); }
/* d59a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d59a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59a55: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59a58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59a59: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* d59a5d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59a60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59a63: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59a6b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59a6e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59a6f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59a72: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d59a76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59a77: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59a7d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59a80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59a80: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59a83: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59a84: mov eax, edx */
  eax = edx;
/* d59a86: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59a89: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59a8c: jne 0xd59aa4 */
  if (!zf) goto L_d59aa4;
L_d59a8e: /* d59a8e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59a91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59a92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59a94: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59a97: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59a9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59a9e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59aa4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59aa4: /* d59aa4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d59aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59aa9: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59aaeu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59aae: mov ecx, eax */
  ecx = eax;
/* d59ab0: call 0xd51c5d */
  esp -= 4; W32(esp, 0xd59ab5u); SPILL(); f_d51c5d(); if (g_unwind) return; RELOAD();
/* d59ab5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59ab6: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d59aba: call dword ptr [0xd7a3c8] */
  esp -= 4; W32(esp, 0xd59ac0u); SPILL(); f_4e13d9(); if (g_unwind) return; /* Core!??0FString@@QAE@PBD@Z */ RELOAD();
/* d59ac0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59ac5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d59ac9: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d59ad1: call dword ptr [0xd7a3cc] */
  esp -= 4; W32(esp, 0xd59ad7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d59ad7: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59adb: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* d59ae3: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59ae9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59ae9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d59aed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59aee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d59af5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d59af8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59b30(void) {
  LOAD_REGS();
L_d59b30: /* d59b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59b32: push 0xd654f8 */
  { uint32_t v = 0xd654f8u; esp -= 4; W32(esp, v); }
/* d59b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d59b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59b45: sub esp, 0x420 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x420u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59b4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59b4c: mov esi, dword ptr [esp + 0x434] */
  esi = R32((uint32_t)(esp + 0x434u));
/* d59b53: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59b56: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59b59: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59b61: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59b64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59b65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59b68: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d59b6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59b6d: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59b73: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59b76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59b76: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59b7a: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd59b80u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d59b80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59b83: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59b86: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59b89: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59b8a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59b8d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d59b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59b92: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59b97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59b98: mov dword ptr [esp + 0x434], 0 */
  W32((uint32_t)(esp + 0x434u), 0x0u);
/* d59ba3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59ba6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59ba9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59baa: mov eax, edx */
  eax = edx;
/* d59bac: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59baf: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59bb2: jne 0xd59bca */
  if (!zf) goto L_d59bca;
L_d59bb4: /* d59bb4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59bb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59bba: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59bbd: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59bc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59bc4: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59bcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59bca: /* d59bca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59bcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59bce: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d59bd3: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* d59bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59bd8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59bda: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d59bde: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59be4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59be4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59be5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59be9: call dword ptr [0xd7a500] */
  esp -= 4; W32(esp, 0xd59befu); SPILL(); call_ind(R32(0xd7a500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* d59bef: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59bf2: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* d59bf6: mov ecx, esp */
  ecx = esp;
/* d59bf8: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d59bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d59bfd: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59c03u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59c03: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d59c07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59c08: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59c0du); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59c0d: mov ecx, eax */
  ecx = eax;
/* d59c0f: call 0xd51ae6 */
  esp -= 4; W32(esp, 0xd59c14u); SPILL(); f_d51ae6(); if (g_unwind) return; RELOAD();
/* d59c14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59c15: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d59c19: call dword ptr [0xd7a3c8] */
  esp -= 4; W32(esp, 0xd59c1fu); SPILL(); f_4e13d9(); if (g_unwind) return; /* Core!??0FString@@QAE@PBD@Z */ RELOAD();
/* d59c1f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d59c23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59c24: mov ecx, dword ptr [esp + 0x43c] */
  ecx = R32((uint32_t)(esp + 0x43cu));
/* d59c2b: mov byte ptr [esp + 0x430], 1 */
  W8((uint32_t)(esp + 0x430u), 0x1u);
/* d59c33: call dword ptr [0xd7a3cc] */
  esp -= 4; W32(esp, 0xd59c39u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d59c39: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d59c3d: mov byte ptr [esp + 0x42c], 0 */
  W8((uint32_t)(esp + 0x42cu), 0x0u);
/* d59c45: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59c4bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59c4b: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59c4f: mov dword ptr [esp + 0x42c], 0xffffffff */
  W32((uint32_t)(esp + 0x42cu), 0xffffffffu);
/* d59c5a: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59c60u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59c60: mov ecx, dword ptr [esp + 0x424] */
  ecx = R32((uint32_t)(esp + 0x424u));
/* d59c67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d59c6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59c6f: add esp, 0x42c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d59c75: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59ce0(void) {
  LOAD_REGS();
L_d59ce0: /* d59ce0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59ce2: push 0xd65534 */
  { uint32_t v = 0xd65534u; esp -= 4; W32(esp, v); }
/* d59ce7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d59ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59cee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d59cf5: sub esp, 0x824 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x824u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59cfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59cfc: mov esi, dword ptr [esp + 0x838] */
  esi = R32((uint32_t)(esp + 0x838u));
/* d59d03: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59d06: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59d09: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59d11: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59d14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59d15: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59d18: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d59d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59d1d: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59d23: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59d26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59d26: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d59d2a: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd59d30u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d59d30: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59d33: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59d36: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59d39: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59d3a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59d3d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d59d41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59d42: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59d48: mov dword ptr [esp + 0x838], 0 */
  W32((uint32_t)(esp + 0x838u), 0x0u);
/* d59d53: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59d56: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59d5a: call dword ptr [0xd7a488] */
  esp -= 4; W32(esp, 0xd59d60u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d59d60: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59d63: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59d66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59d69: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59d6a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59d6d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d59d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59d72: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59d78: mov byte ptr [esp + 0x838], 1 */
  W8((uint32_t)(esp + 0x838u), 0x1u);
/* d59d80: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59d83: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59d86: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59d87: mov eax, edx */
  eax = edx;
/* d59d89: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59d8c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59d8f: jne 0xd59da7 */
  if (!zf) goto L_d59da7;
L_d59d91: /* d59d91: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59d94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59d97: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59d9a: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59da1: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59da7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59da7: /* d59da7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59da9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dab: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d59db0: lea eax, [esp + 0x434] */
  eax = (uint32_t)(esp + 0x434u);
/* d59db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59db8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59dba: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d59dbe: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59dc4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59dc4: mov esi, dword ptr [0xd7a500] */
  esi = R32((uint32_t)(0xd7a500u));
/* d59dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59dcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dcf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd59dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59dd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dd5: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d59dda: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d59dde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59ddf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d59de1: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d59de5: call dword ptr [0xd7a484] */
  esp -= 4; W32(esp, 0xd59debu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d59deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59dec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59dee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59df0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd59df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59df2: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59df5: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* d59df9: mov ecx, esp */
  ecx = esp;
/* d59dfb: mov dword ptr [esp + 0x40], esp */
  W32((uint32_t)(esp + 0x40u), esp);
/* d59dff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d59e00: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59e06u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59e06: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d59e09: lea eax, [esp + 0x460] */
  eax = (uint32_t)(esp + 0x460u);
/* d59e10: mov ecx, esp */
  ecx = esp;
/* d59e12: mov dword ptr [esp + 0x58], esp */
  W32((uint32_t)(esp + 0x58u), esp);
/* d59e16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59e17: mov byte ptr [esp + 0x86c], 2 */
  W8((uint32_t)(esp + 0x86cu), 0x2u);
/* d59e1f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd59e25u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d59e25: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* d59e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59e2a: mov byte ptr [esp + 0x86c], 1 */
  W8((uint32_t)(esp + 0x86cu), 0x1u);
/* d59e32: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59e37u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59e37: mov ecx, eax */
  ecx = eax;
/* d59e39: call 0xd517a3 */
  esp -= 4; W32(esp, 0xd59e3eu); SPILL(); f_d517a3(); if (g_unwind) return; RELOAD();
/* d59e3e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d59e42: mov byte ptr [esp + 0x830], 0 */
  W8((uint32_t)(esp + 0x830u), 0x0u);
/* d59e4a: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59e50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59e50: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d59e54: mov dword ptr [esp + 0x830], 0xffffffff */
  W32((uint32_t)(esp + 0x830u), 0xffffffffu);
/* d59e5f: call dword ptr [0xd7a480] */
  esp -= 4; W32(esp, 0xd59e65u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d59e65: mov ecx, dword ptr [esp + 0x828] */
  ecx = R32((uint32_t)(esp + 0x828u));
/* d59e6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d59e73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59e74: add esp, 0x830 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x830u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d59e7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59ef0(void) {
  LOAD_REGS();
L_d59ef0: /* d59ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59ef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59ef2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d59ef6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59ef9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59efc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d59f04: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59f07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59f08: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59f0b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d59f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59f10: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59f15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59f16: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59f19: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d59f1c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* d59f24: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* d59f27: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59f28: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d59f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59f2d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59f30: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59f33: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59f38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59f39: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xd59f3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d59f3c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* d59f3f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d59f40: mov eax, edx */
  eax = edx;
/* d59f42: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d59f45: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59f48: jne 0xd59f60 */
  if (!zf) goto L_d59f60;
L_d59f4a: /* d59f4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d59f4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d59f4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59f50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d59f53: mov edx, dword ptr [0xd7a47c] */
  edx = R32((uint32_t)(0xd7a47cu));
/* d59f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d59f5a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd59f60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59f60: /* d59f60: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d59f64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d59f68: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d59f6a: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d59f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59f6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d59f6f: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59f74u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59f74: mov ecx, eax */
  ecx = eax;
/* d59f76: call 0xd51582 */
  esp -= 4; W32(esp, 0xd59f7bu); SPILL(); f_d51582(); if (g_unwind) return; RELOAD();
/* d59f7b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* d59f7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d59f82: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d59f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d59f85: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d59f86: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d59fc0(void) {
  LOAD_REGS();
L_d59fc0: /* d59fc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d59fc4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d59fc7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59fc8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d59fcb: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d59fce: jne 0xd59fe5 */
  if (!zf) goto L_d59fe5;
L_d59fd0: /* d59fd0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d59fd1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d59fd4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d59fd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d59fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d59fda: mov eax, dword ptr [0xd7a47c] */
  eax = R32((uint32_t)(0xd7a47cu));
/* d59fdf: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd59fe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d59fe5: /* d59fe5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd59feau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d59fea: mov ecx, eax */
  ecx = eax;
/* d59fec: call 0xd511d1 */
  esp -= 4; W32(esp, 0xd59ff1u); SPILL(); f_d511d1(); if (g_unwind) return; RELOAD();
/* d59ff1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d59ff5: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d59ff8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d59ffa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5a010(void) {
  LOAD_REGS();
L_d5a010: /* d5a010: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5a014: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* d5a017: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5a030(void) {
  LOAD_REGS();
L_d5a030: /* d5a030: mov eax, ecx */
  eax = ecx;
/* d5a032: xor ecx, ecx */
  ecx = 0;
/* d5a034: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5a036: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d5a039: mov byte ptr [eax + 0xc], cl */
  W8((uint32_t)(eax + 0xcu), (ecx & 0xffu));
/* d5a03c: mov byte ptr [eax + 0xd], cl */
  W8((uint32_t)(eax + 0xdu), (ecx & 0xffu));
/* d5a03f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* d5a042: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* d5a045: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* d5a048: mov dword ptr [eax + 0x1c], 0x3f800000 */
  W32((uint32_t)(eax + 0x1cu), 0x3f800000u);
/* d5a04f: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* d5a052: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* d5a055: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a070(void) {
  LOAD_REGS();
L_d5a070: /* d5a070: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a090(void) {
  LOAD_REGS();
L_d5a090: /* d5a090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5a094: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5a098: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5a09a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d5a09d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5a0b0(void) {
  LOAD_REGS();
L_d5a0b0: /* d5a0b0: sub esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5a0b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a0b7: mov esi, dword ptr [esp + 0x808] */
  esi = R32((uint32_t)(esp + 0x808u));
/* d5a0be: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d5a0c3: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d5a0c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a0c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a0c9: call dword ptr [0xd7a66c] */
  esp -= 4; W32(esp, 0xd5a0cfu); SPILL(); call_ind(R32(0xd7a66cu)); if (g_unwind) return; /* USER32!GetWindowTextW */ RELOAD();
/* d5a0cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a0d0: call dword ptr [0xd7a670] */
  esp -= 4; W32(esp, 0xd5a0d6u); SPILL(); call_ind(R32(0xd7a670u)); if (g_unwind) return; /* USER32!IsWindow */ RELOAD();
/* d5a0d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a0d8: je 0xd5a0f7 */
  if (zf) goto L_d5a0f7;
L_d5a0da: /* d5a0da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a0db: call dword ptr [0xd7a674] */
  esp -= 4; W32(esp, 0xd5a0e1u); SPILL(); call_ind(R32(0xd7a674u)); if (g_unwind) return; /* USER32!IsWindowVisible */ RELOAD();
/* d5a0e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a0e3: je 0xd5a0f7 */
  if (zf) goto L_d5a0f7;
L_d5a0e5: /* d5a0e5: mov dword ptr [0xd79b9c], esi */
  W32((uint32_t)(0xd79b9cu), esi);
/* d5a0eb: xor eax, eax */
  eax = 0;
/* d5a0ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a0ee: add esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a0f4: ret 8 */
  esp += 12; SPILL(); return;
L_d5a0f7: /* d5a0f7: mov eax, 1 */
  eax = 0x1u;
/* d5a0fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a0fd: add esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a103: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5a130(void) {
  LOAD_REGS();
L_d5a130: /* d5a130: mov dl, byte ptr [ecx + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* d5a133: xor eax, eax */
  eax = 0;
/* d5a135: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5a137: jne 0xd5a188 */
  if (!zf) goto L_d5a188;
L_d5a139: /* d5a139: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* d5a13c: mov dword ptr [0xd79b9c], eax */
  W32((uint32_t)(0xd79b9cu), eax);
/* d5a141: mov edx, 1 */
  edx = 0x1u;
/* d5a146: mov eax, 3 */
  eax = 0x3u;
/* d5a14b: mov dword ptr [ecx + 0x4c], edx */
  W32((uint32_t)(ecx + 0x4cu), edx);
/* d5a14e: mov dword ptr [ecx + 0x50], 2 */
  W32((uint32_t)(ecx + 0x50u), 0x2u);
/* d5a155: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* d5a158: mov dword ptr [ecx + 0x44], 4 */
  W32((uint32_t)(ecx + 0x44u), 0x4u);
/* d5a15f: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* d5a162: mov dword ptr [ecx + 0x48], 6 */
  W32((uint32_t)(ecx + 0x48u), 0x6u);
/* d5a169: mov dword ptr [ecx + 0x34], 9 */
  W32((uint32_t)(ecx + 0x34u), 0x9u);
/* d5a170: mov dword ptr [ecx + 0x38], 0xa */
  W32((uint32_t)(ecx + 0x38u), 0xau);
/* d5a177: mov dword ptr [ecx + 0x3c], 8 */
  W32((uint32_t)(ecx + 0x3cu), 0x8u);
/* d5a17e: mov dword ptr [ecx + 0x40], 7 */
  W32((uint32_t)(ecx + 0x40u), 0x7u);
/* d5a185: mov byte ptr [ecx + 0xd], dl */
  W8((uint32_t)(ecx + 0xdu), (edx & 0xffu));
L_d5a188: /* d5a188: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a1b0(void) {
  LOAD_REGS();
L_d5a1b0: /* d5a1b0: mov al, byte ptr [ecx + 0xd] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* d5a1b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a1b5: je 0xd5a1bb */
  if (zf) goto L_d5a1bb;
L_d5a1b7: /* d5a1b7: mov byte ptr [ecx + 0xd], 0 */
  W8((uint32_t)(ecx + 0xdu), 0x0u);
L_d5a1bb: /* d5a1bb: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a1d0(void) {
  LOAD_REGS();
L_d5a1d0: /* d5a1d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5a1d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a1d2: mov esi, ecx */
  esi = ecx;
/* d5a1d4: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5a1d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5a1d8: xor edi, edi */
  edi = 0;
/* d5a1da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a1dc: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5a1de: je 0xd5a1f6 */
  if (zf) goto L_d5a1f6;
L_d5a1e0: /* d5a1e0: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* d5a1e3: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d5a1e6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5a1e8: sbb bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d5a1ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a1eb: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d5a1ed: call dword ptr [0xd7a6c8] */
  esp -= 4; W32(esp, 0xd5a1f3u); SPILL(); call_ind(R32(0xd7a6c8u)); if (g_unwind) return; /* binkw32!_BinkClose@4 */ RELOAD();
/* d5a1f3: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
L_d5a1f6: /* d5a1f6: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5a1f9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a1fb: je 0xd5a209 */
  if (zf) goto L_d5a209;
L_d5a1fd: /* d5a1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a1fe: call 0xd51901 */
  esp -= 4; W32(esp, 0xd5a203u); SPILL(); f_d51901(); if (g_unwind) return; RELOAD();
/* d5a203: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a206: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
L_d5a209: /* d5a209: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* d5a20c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a20e: je 0xd5a21c */
  if (zf) goto L_d5a21c;
L_d5a210: /* d5a210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a211: call 0xd5152d */
  esp -= 4; W32(esp, 0xd5a216u); SPILL(); f_d5152d(); if (g_unwind) return; RELOAD();
/* d5a216: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a219: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
L_d5a21c: /* d5a21c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d5a21f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a221: mov byte ptr [esi + 0xc], 0 */
  W8((uint32_t)(esi + 0xcu), 0x0u);
/* d5a225: je 0xd5a233 */
  if (zf) goto L_d5a233;
L_d5a227: /* d5a227: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* d5a22a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a22b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd5a22du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5a22d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a230: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
L_d5a233: /* d5a233: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5a234: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a235: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5a236: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a260(void) {
  LOAD_REGS();
L_d5a260: /* d5a260: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5a263: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a264: mov esi, ecx */
  esi = ecx;
/* d5a266: mov al, byte ptr [esi + 0xd] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xdu))) & 0xffu);
/* d5a269: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a26b: je 0xd5a4c2 */
  if (zf) goto L_d5a4c2;
L_d5a271: /* d5a271: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a274: je 0xd5a4c2 */
  if (zf) goto L_d5a4c2;
L_d5a27a: /* d5a27a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5a27d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a27f: je 0xd5a4c2 */
  if (zf) goto L_d5a4c2;
L_d5a285: /* d5a285: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* d5a288: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a28a: je 0xd5a4c2 */
  if (zf) goto L_d5a4c2;
L_d5a290: /* d5a290: mov al, byte ptr [esi + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xcu))) & 0xffu);
/* d5a293: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a295: je 0xd5a4c2 */
  if (zf) goto L_d5a4c2;
L_d5a29b: /* d5a29b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5a29e: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d5a2a1: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5a2a4: jb 0xd5a2b2 */
  if (cf) goto L_d5a2b2;
L_d5a2a6: /* d5a2a6: mov ecx, esi */
  ecx = esi;
/* d5a2a8: call 0xd519a1 */
  esp -= 4; W32(esp, 0xd5a2adu); SPILL(); f_d519a1(); if (g_unwind) return; RELOAD();
/* d5a2ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a2ae: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a2b1: ret  */
  esp += 4; SPILL(); return;
L_d5a2b2: /* d5a2b2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d5a2b5: mov ecx, dword ptr [0xd79b9c] */
  ecx = R32((uint32_t)(0xd79b9cu));
/* d5a2bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5a2bc: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* d5a2be: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* d5a2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a2c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a2c4: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* d5a2c8: call dword ptr [0xd7a668] */
  esp -= 4; W32(esp, 0xd5a2ceu); SPILL(); call_ind(R32(0xd7a668u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* d5a2ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a2d0: je 0xd5a4ba */
  if (zf) goto L_d5a4ba;
L_d5a2d6: /* d5a2d6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* d5a2da: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5a2de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5a2df: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* d5a2e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5a2e4: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* d5a2e8: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d5a2ea: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d5a2ec: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a2ee: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* d5a2f2: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d5a2f6: jge 0xd5a2fe */
  if ((sf == of)) goto L_d5a2fe;
L_d5a2f8: /* d5a2f8: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a2fe: /* d5a2fe: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d5a302: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* d5a306: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a308: jge 0xd5a310 */
  if ((sf == of)) goto L_d5a310;
L_d5a30a: /* d5a30a: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a310: /* d5a310: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a312: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* d5a316: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* d5a318: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* d5a31c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d5a320: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d5a324: jge 0xd5a32c */
  if ((sf == of)) goto L_d5a32c;
L_d5a326: /* d5a326: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a32c: /* d5a32c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a32e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* d5a332: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* d5a334: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* d5a338: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* d5a33c: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d5a340: jge 0xd5a348 */
  if ((sf == of)) goto L_d5a348;
L_d5a342: /* d5a342: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a348: /* d5a348: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d5a34c: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* d5a350: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d5a352: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d5a355: jp 0xd5a36c */
  if (pf) goto L_d5a36c;
L_d5a357: /* d5a357: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* d5a359: mov ebp, edi */
  ebp = edi;
/* d5a35b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d5a35f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d5a361: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* d5a365: call 0xd63e20 */
  esp -= 4; W32(esp, 0xd5a36au); SPILL(); f_d63e20(); if (g_unwind) return; RELOAD();
/* d5a36a: jmp 0xd5a38d */
  goto L_d5a38d;
L_d5a36c: /* d5a36c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d5a36e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d5a370: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d5a374: fdiv dword ptr [esp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x14u)));
/* d5a378: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d5a37c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d5a380: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* d5a384: call 0xd63e20 */
  esp -= 4; W32(esp, 0xd5a389u); SPILL(); f_d63e20(); if (g_unwind) return; RELOAD();
/* d5a389: mov ebp, eax */
  ebp = eax;
/* d5a38b: mov eax, ebx */
  eax = ebx;
L_d5a38d: /* d5a38d: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d5a38f: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* d5a391: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a393: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* d5a397: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d5a39b: jge 0xd5a3a3 */
  if ((sf == of)) goto L_d5a3a3;
L_d5a39d: /* d5a39d: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a3a3: /* d5a3a3: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d5a3a5: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* d5a3a9: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* d5a3ab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a3ad: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* d5a3b1: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d5a3b5: jge 0xd5a3bd */
  if ((sf == of)) goto L_d5a3bd;
L_d5a3b7: /* d5a3b7: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5a3bd: /* d5a3bd: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5a3c0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* d5a3c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a3c5: call dword ptr [0xd7a6b8] */
  esp -= 4; W32(esp, 0xd5a3cbu); SPILL(); call_ind(R32(0xd7a6b8u)); if (g_unwind) return; /* binkw32!_BinkWait@4 */ RELOAD();
/* d5a3cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a3cd: jne 0xd5a4ad */
  if (!zf) goto L_d5a4ad;
L_d5a3d3: /* d5a3d3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* d5a3d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a3d7: call dword ptr [0xd7a6bc] */
  esp -= 4; W32(esp, 0xd5a3ddu); SPILL(); call_ind(R32(0xd7a6bcu)); if (g_unwind) return; /* binkw32!_BinkDoFrame@4 */ RELOAD();
/* d5a3dd: mov edi, eax */
  edi = eax;
/* d5a3df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a3e1: jne 0xd5a4a3 */
  if (!zf) goto L_d5a4a3;
L_d5a3e7: /* d5a3e7: mov ebx, dword ptr [0xd7a6c0] */
  ebx = R32((uint32_t)(0xd7a6c0u));
/* d5a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5a3f0: /* d5a3f0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* d5a3f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a3f5: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d5a3f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a3fa: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d5a3fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a3ff: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* d5a403: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a404: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* d5a408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a409: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5a40c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* d5a410: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a411: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* d5a415: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a417: call 0xd51a28 */
  esp -= 4; W32(esp, 0xd5a41cu); SPILL(); f_d51a28(); if (g_unwind) return; RELOAD();
/* d5a41c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a41f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a421: je 0xd5a46c */
  if (zf) goto L_d5a46c;
L_d5a423: /* d5a423: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5a427: mov edx, dword ptr [esi + ecx*4 + 0x2c] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x2cu));
/* d5a42b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d5a42f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5a432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a433: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d5a437: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a438: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* d5a43c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a43d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d5a441: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a442: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d5a445: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a446: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* d5a44a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a44c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a44e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a44f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* d5a453: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a454: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a456: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd5a458u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5a458: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* d5a45b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a45c: mov edi, eax */
  edi = eax;
/* d5a45e: call 0xd5160e */
  esp -= 4; W32(esp, 0xd5a463u); SPILL(); f_d5160e(); if (g_unwind) return; RELOAD();
/* d5a463: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a466: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a468: je 0xd5a3f0 */
  if (zf) goto L_d5a3f0;
L_d5a46a: /* d5a46a: jmp 0xd5a4a3 */
  goto L_d5a4a3;
L_d5a46c: /* d5a46c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a46e: jne 0xd5a4a3 */
  if (!zf) goto L_d5a4a3;
L_d5a470: /* d5a470: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* d5a473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a474: call 0xd512b7 */
  esp -= 4; W32(esp, 0xd5a479u); SPILL(); f_d512b7(); if (g_unwind) return; RELOAD();
/* d5a479: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5a47d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5a481: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* d5a485: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* d5a48a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a48b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a48c: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5a48f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a492: call 0xd51a6e */
  esp -= 4; W32(esp, 0xd5a497u); SPILL(); f_d51a6e(); if (g_unwind) return; RELOAD();
/* d5a497: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* d5a49a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a49b: call 0xd517ee */
  esp -= 4; W32(esp, 0xd5a4a0u); SPILL(); f_d517ee(); if (g_unwind) return; RELOAD();
/* d5a4a0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5a4a3: /* d5a4a3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* d5a4a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a4a7: call dword ptr [0xd7a6c4] */
  esp -= 4; W32(esp, 0xd5a4adu); SPILL(); call_ind(R32(0xd7a6c4u)); if (g_unwind) return; /* binkw32!_BinkNextFrame@4 */ RELOAD();
L_d5a4ad: /* d5a4ad: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5a4b0: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d5a4b3: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5a4b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5a4b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5a4b8: jb 0xd5a4c1 */
  if (cf) goto L_d5a4c1;
L_d5a4ba: /* d5a4ba: mov ecx, esi */
  ecx = esi;
/* d5a4bc: call 0xd519a1 */
  esp -= 4; W32(esp, 0xd5a4c1u); SPILL(); f_d519a1(); if (g_unwind) return; RELOAD();
L_d5a4c1: /* d5a4c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_d5a4c2: /* d5a4c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a4c3: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a4c6: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a570(void) {
  LOAD_REGS();
L_d5a570: /* d5a570: mov al, byte ptr [ecx + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcu))) & 0xffu);
/* d5a573: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a590(void) {
  LOAD_REGS();
L_d5a590: /* d5a590: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a595u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a595: mov ecx, eax */
  ecx = eax;
/* d5a597: jmp 0xd51a0a */
  SPILL(); f_d51a0a(); return;
}

void f_d5a5b0(void) {
  LOAD_REGS();
L_d5a5b0: /* d5a5b0: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a5b5u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a5b5: mov cl, byte ptr [eax + 0xd] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xdu))) & 0xffu);
/* d5a5b8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a5ba: je 0xd5a5c0 */
  if (zf) goto L_d5a5c0;
L_d5a5bc: /* d5a5bc: mov byte ptr [eax + 0xd], 0 */
  W8((uint32_t)(eax + 0xdu), 0x0u);
L_d5a5c0: /* d5a5c0: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a5e0(void) {
  LOAD_REGS();
L_d5a5e0: /* d5a5e0: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a5e5u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a5e5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5a5e9: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5a5ed: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5a5ef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d5a5f2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a610(void) {
  LOAD_REGS();
L_d5a610: /* d5a610: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a615u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a615: mov ecx, eax */
  ecx = eax;
/* d5a617: jmp 0xd519a1 */
  SPILL(); f_d519a1(); return;
}

void f_d5a630(void) {
  LOAD_REGS();
L_d5a630: /* d5a630: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a635u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a635: mov ecx, eax */
  ecx = eax;
/* d5a637: jmp 0xd51492 */
  SPILL(); f_d51492(); return;
}

void f_d5a650(void) {
  LOAD_REGS();
L_d5a650: /* d5a650: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a655u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a655: mov al, byte ptr [eax + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xcu))) & 0xffu);
/* d5a658: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a670(void) {
  LOAD_REGS();
L_d5a670: /* d5a670: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a675u); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a675: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5a679: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* d5a67c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a690(void) {
  LOAD_REGS();
L_d5a690: /* d5a690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5a691: mov ebp, esp */
  ebp = esp;
/* d5a693: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* d5a696: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5a69c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5a69d: mov ebx, ecx */
  ebx = ecx;
/* d5a69f: mov al, byte ptr [ebx + 0xd] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xdu))) & 0xffu);
/* d5a6a2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a6a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a6a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5a6a6: je 0xd5a7ee */
  if (zf) goto L_d5a7ee;
L_d5a6ac: /* d5a6ac: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a6af: je 0xd5a7ee */
  if (zf) goto L_d5a7ee;
L_d5a6b5: /* d5a6b5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d5a6b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a6ba: je 0xd5a7ee */
  if (zf) goto L_d5a7ee;
L_d5a6c0: /* d5a6c0: call 0xd519a1 */
  esp -= 4; W32(esp, 0xd5a6c5u); SPILL(); f_d519a1(); if (g_unwind) return; RELOAD();
/* d5a6c5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d5a6c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a6ca: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* d5a6cd: push 0xd5183e */
  { uint32_t v = 0xd5183eu; esp -= 4; W32(esp, v); }
/* d5a6d2: mov dword ptr [0xd79b9c], 0 */
  W32((uint32_t)(0xd79b9cu), 0x0u);
/* d5a6dc: call dword ptr [0xd7a4e4] */
  esp -= 4; W32(esp, 0xd5a6e2u); SPILL(); call_ind(R32(0xd7a4e4u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* d5a6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a6e3: call dword ptr [0xd7a664] */
  esp -= 4; W32(esp, 0xd5a6e9u); SPILL(); call_ind(R32(0xd7a664u)); if (g_unwind) return; /* USER32!EnumThreadWindows */ RELOAD();
/* d5a6e9: mov eax, dword ptr [0xd79b9c] */
  eax = R32((uint32_t)(0xd79b9cu));
/* d5a6ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a6f0: je 0xd5a7ee */
  if (zf) goto L_d5a7ee;
L_d5a6f6: /* d5a6f6: mov ecx, dword ptr [0xd7a6a8] */
  ecx = R32((uint32_t)(0xd7a6a8u));
/* d5a6fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a6fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a6ff: call dword ptr [0xd7a6ac] */
  esp -= 4; W32(esp, 0xd5a705u); SPILL(); call_ind(R32(0xd7a6acu)); if (g_unwind) return; /* binkw32!_BinkSetSoundSystem@8 */ RELOAD();
/* d5a705: xor eax, eax */
  eax = 0;
/* d5a707: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* d5a70c: mov ecx, 0x40 */
  ecx = 0x40u;
/* d5a711: lea edi, [esp + 0x11] */
  edi = (uint32_t)(esp + 0x11u);
/* d5a715: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d5a717: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* d5a719: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* d5a71a: mov eax, 0xd77ed4 */
  eax = 0xd77ed4u;
/* d5a71f: mov edx, eax */
  edx = eax;
L_d5a721: /* d5a721: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d5a723: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5a724: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a726: jne 0xd5a721 */
  if (!zf) goto L_d5a721;
L_d5a728: /* d5a728: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* d5a72c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5a72e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* d5a72f: nop  */
L_d5a730: /* d5a730: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* d5a733: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5a734: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a736: jne 0xd5a730 */
  if (!zf) goto L_d5a730;
L_d5a738: /* d5a738: mov ecx, eax */
  ecx = eax;
/* d5a73a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5a73d: mov esi, edx */
  esi = edx;
/* d5a73f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5a741: mov ecx, eax */
  ecx = eax;
/* d5a743: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d5a746: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d5a749: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* d5a74b: mov esi, eax */
  esi = eax;
/* d5a74d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5a750: /* d5a750: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d5a752: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5a753: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a755: jne 0xd5a750 */
  if (!zf) goto L_d5a750;
L_d5a757: /* d5a757: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* d5a75b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5a75d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* d5a75e: mov edi, edi */
  edi = edi;
L_d5a760: /* d5a760: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* d5a763: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5a764: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5a766: jne 0xd5a760 */
  if (!zf) goto L_d5a760;
L_d5a768: /* d5a768: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* d5a76b: mov ecx, eax */
  ecx = eax;
/* d5a76d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5a770: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5a772: mov ecx, eax */
  ecx = eax;
/* d5a774: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d5a778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a779: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d5a77c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5a77e: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* d5a780: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* d5a784: call dword ptr [0xd7a6b0] */
  esp -= 4; W32(esp, 0xd5a78au); SPILL(); call_ind(R32(0xd7a6b0u)); if (g_unwind) return; /* binkw32!_BinkSetSoundTrack@8 */ RELOAD();
/* d5a78a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* d5a78f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d5a793: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a794: call dword ptr [0xd7a6b4] */
  esp -= 4; W32(esp, 0xd5a79au); SPILL(); call_ind(R32(0xd7a6b4u)); if (g_unwind) return; /* binkw32!_BinkOpen@8 */ RELOAD();
/* d5a79a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a79c: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* d5a79f: je 0xd5a7da */
  if (zf) goto L_d5a7da;
L_d5a7a1: /* d5a7a1: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* d5a7a4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d5a7a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a7a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a7a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a7aa: call 0xd51389 */
  esp -= 4; W32(esp, 0xd5a7afu); SPILL(); f_d51389(); if (g_unwind) return; RELOAD();
/* d5a7af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a7b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a7b4: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* d5a7b7: je 0xd5a7da */
  if (zf) goto L_d5a7da;
L_d5a7b9: /* d5a7b9: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* d5a7bc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5a7bf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d5a7c1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d5a7c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a7c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a7c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a7ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a7cb: call 0xd51609 */
  esp -= 4; W32(esp, 0xd5a7d0u); SPILL(); f_d51609(); if (g_unwind) return; RELOAD();
/* d5a7d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a7d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5a7d5: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* d5a7d8: jne 0xd5a7ea */
  if (!zf) goto L_d5a7ea;
L_d5a7da: /* d5a7da: mov ecx, ebx */
  ecx = ebx;
/* d5a7dc: call 0xd519a1 */
  esp -= 4; W32(esp, 0xd5a7e1u); SPILL(); f_d519a1(); if (g_unwind) return; RELOAD();
/* d5a7e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5a7e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a7e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5a7e4: mov esp, ebp */
  esp = ebp;
/* d5a7e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5a7e7: ret 8 */
  esp += 12; SPILL(); return;
L_d5a7ea: /* d5a7ea: mov byte ptr [ebx + 0xc], 1 */
  W8((uint32_t)(ebx + 0xcu), 0x1u);
L_d5a7ee: /* d5a7ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5a7ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5a7f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5a7f1: mov esp, ebp */
  esp = ebp;
/* d5a7f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5a7f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5a860(void) {
  LOAD_REGS();
L_d5a860: /* d5a860: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5a864: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5a868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a869: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a86a: call 0xd510c8 */
  esp -= 4; W32(esp, 0xd5a86fu); SPILL(); f_d510c8(); if (g_unwind) return; RELOAD();
/* d5a86f: mov ecx, eax */
  ecx = eax;
/* d5a871: call 0xd51488 */
  esp -= 4; W32(esp, 0xd5a876u); SPILL(); f_d51488(); if (g_unwind) return; RELOAD();
/* d5a876: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a890(void) {
  LOAD_REGS();
L_d5a890: /* d5a890: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5a894: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5a898: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5a89a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a89b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d5a89f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d5a8a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a8a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a8a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5a8a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5a8a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5a8a9: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xd5a8acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5a8ac: xor ecx, ecx */
  ecx = 0;
/* d5a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a8b0: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* d5a8b3: mov eax, ecx */
  eax = ecx;
/* d5a8b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5a8d0(void) {
  LOAD_REGS();
L_d5a8d0: /* d5a8d0: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5a8d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5a8d4: mov eax, 3 */
  eax = 0x3u;
/* d5a8d9: mov edx, 1 */
  edx = 0x1u;
/* d5a8de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5a8df: xor ebp, ebp */
  ebp = 0;
/* d5a8e1: mov ecx, 4 */
  ecx = 0x4u;
/* d5a8e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* d5a8ea: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* d5a8ee: mov eax, 2 */
  eax = 0x2u;
/* d5a8f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5a8f4: mov dword ptr [esp + 0xc], 0x16 */
  W32((uint32_t)(esp + 0xcu), 0x16u);
/* d5a8fc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* d5a900: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* d5a904: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* d5a908: mov dword ptr [esp + 0x1c], 0x14 */
  W32((uint32_t)(esp + 0x1cu), 0x14u);
/* d5a910: mov dword ptr [esp + 0x20], 8 */
  W32((uint32_t)(esp + 0x20u), 0x8u);
/* d5a918: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* d5a91c: mov dword ptr [esp + 0x2c], 0x17 */
  W32((uint32_t)(esp + 0x2cu), 0x17u);
/* d5a924: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* d5a928: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* d5a92c: mov dword ptr [esp + 0x3c], 0x18 */
  W32((uint32_t)(esp + 0x3cu), 0x18u);
/* d5a934: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* d5a938: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* d5a93c: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* d5a940: mov dword ptr [esp + 0x4c], 0x15 */
  W32((uint32_t)(esp + 0x4cu), 0x15u);
/* d5a948: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* d5a94c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* d5a950: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* d5a954: mov dword ptr [esp + 0x5c], 0x1a */
  W32((uint32_t)(esp + 0x5cu), 0x1au);
/* d5a95c: mov dword ptr [esp + 0x60], 5 */
  W32((uint32_t)(esp + 0x60u), 0x5u);
/* d5a964: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* d5a968: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* d5a96c: mov dword ptr [esp + 0x6c], 0x19 */
  W32((uint32_t)(esp + 0x6cu), 0x19u);
/* d5a974: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* d5a978: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* d5a97c: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* d5a980: xor ebx, ebx */
  ebx = 0;
/* d5a982: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* d5a986: jmp 0xd5a990 */
  goto L_d5a990;
L_d5a988: /* d5a988: mov edx, 1 */
  edx = 0x1u;
/* d5a98d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5a990: /* d5a990: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d5a992: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5a994: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a995: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* d5a99c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d5a99e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5a99f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5a9a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5a9a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5a9a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5a9a3: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd5a9a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5a9a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5a9a8: jge 0xd5a9b5 */
  if ((sf == of)) goto L_d5a9b5;
L_d5a9aa: /* d5a9aa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d5a9ab: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5a9ae: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5a9b1: jb 0xd5a988 */
  if (cf) goto L_d5a988;
L_d5a9b3: /* d5a9b3: jmp 0xd5a9d6 */
  goto L_d5a9d6;
L_d5a9b5: /* d5a9b5: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* d5a9bc: mov eax, ebx */
  eax = ebx;
/* d5a9be: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5a9c1: mov edx, dword ptr [esp + eax + 0xc] */
  edx = R32((uint32_t)(esp + eax + 0xcu));
/* d5a9c5: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* d5a9c8: mov edx, dword ptr [esp + eax + 0x10] */
  edx = R32((uint32_t)(esp + eax + 0x10u));
/* d5a9cc: mov eax, dword ptr [esp + eax + 0x14] */
  eax = R32((uint32_t)(esp + eax + 0x14u));
/* d5a9d0: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* d5a9d3: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
L_d5a9d6: /* d5a9d6: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a9d9: jne 0xd5a9e4 */
  if (!zf) goto L_d5a9e4;
L_d5a9db: /* d5a9db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5a9dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5a9dd: xor eax, eax */
  eax = 0;
/* d5a9df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5a9e0: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5a9e3: ret  */
  esp += 4; SPILL(); return;
L_d5a9e4: /* d5a9e4: xor ebx, ebx */
  ebx = 0;
/* d5a9e6: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* d5a9ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d5a9f0: /* d5a9f0: cmp dword ptr [edi + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5a9f3: je 0xd5aa10 */
  if (zf) goto L_d5aa10;
L_d5a9f5: /* d5a9f5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d5a9f7: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* d5a9fe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d5aa00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5aa01: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d5aa03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5aa04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5aa05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5aa07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5aa08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5aa09: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xd5aa0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5aa0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5aa0e: jge 0xd5aa28 */
  if ((sf == of)) goto L_d5aa28;
L_d5aa10: /* d5aa10: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d5aa11: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5aa14: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5aa17: jb 0xd5a9f0 */
  if (cf) goto L_d5a9f0;
L_d5aa19: /* d5aa19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5aa1a: xor eax, eax */
  eax = 0;
/* d5aa1c: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5aa1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5aa20: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5aa23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5aa24: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5aa27: ret  */
  esp += 4; SPILL(); return;
L_d5aa28: /* d5aa28: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* d5aa2f: mov eax, ebx */
  eax = ebx;
/* d5aa31: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5aa34: mov edx, dword ptr [esp + eax + 0xc] */
  edx = R32((uint32_t)(esp + eax + 0xcu));
/* d5aa38: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* d5aa3b: mov edx, dword ptr [esp + eax + 0x10] */
  edx = R32((uint32_t)(esp + eax + 0x10u));
/* d5aa3f: mov eax, dword ptr [esp + eax + 0x14] */
  eax = R32((uint32_t)(esp + eax + 0x14u));
/* d5aa43: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* d5aa46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5aa47: xor eax, eax */
  eax = 0;
/* d5aa49: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5aa4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5aa4d: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* d5aa50: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5aa53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5aa54: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5aa57: ret  */
  esp += 4; SPILL(); return;
}

void f_d5aad0(void) {
  LOAD_REGS();
L_d5aad0: /* d5aad0: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5aad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5aad7: mov esi, dword ptr [esp + 0xf0] */
  esi = R32((uint32_t)(esp + 0xf0u));
/* d5aade: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5aae0: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d5aae4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5aae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5aae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5aae8: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xd5aaebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5aaeb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5aaed: jge 0xd5aaf9 */
  if ((sf == of)) goto L_d5aaf9;
L_d5aaef: /* d5aaef: xor eax, eax */
  eax = 0;
/* d5aaf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5aaf2: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5aaf8: ret  */
  esp += 4; SPILL(); return;
L_d5aaf9: /* d5aaf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5aafa: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* d5aafc: call dword ptr [0xd7a628] */
  esp -= 4; W32(esp, 0xd5ab02u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* d5ab02: mov edi, eax */
  edi = eax;
/* d5ab04: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ab07: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ab09: jne 0xd5ab16 */
  if (!zf) goto L_d5ab16;
L_d5ab0b: /* d5ab0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ab0c: xor eax, eax */
  eax = 0;
/* d5ab0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ab0f: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ab15: ret  */
  esp += 4; SPILL(); return;
L_d5ab16: /* d5ab16: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d5ab1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ab1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ab1c: call 0xd5a8d0 */
  esp -= 4; W32(esp, 0xd5ab21u); SPILL(); f_d5a8d0(); if (g_unwind) return; RELOAD();
/* d5ab21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ab24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ab26: je 0xd5ab0b */
  if (zf) goto L_d5ab0b;
L_d5ab28: /* d5ab28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ab29: mov ebx, dword ptr [esp + 0xfc] */
  ebx = R32((uint32_t)(esp + 0xfcu));
/* d5ab30: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d5ab32: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5ab36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ab37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ab38: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xd5ab3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5ab3b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* d5ab3f: mov eax, dword ptr [esp + 0xf4] */
  eax = R32((uint32_t)(esp + 0xf4u));
/* d5ab46: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* d5ab49: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* d5ab4c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d5ab4f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* d5ab52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ab53: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* d5ab55: mov dword ptr [edi + 0x24], edx */
  W32((uint32_t)(edi + 0x24u), edx);
/* d5ab58: mov eax, edi */
  eax = edi;
/* d5ab5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ab5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ab5c: add esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ab62: ret  */
  esp += 4; SPILL(); return;
}

void f_d5aba0(void) {
  LOAD_REGS();
L_d5aba0: /* d5aba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5aba4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5aba6: je 0xd5abb2 */
  if (zf) goto L_d5abb2;
L_d5aba8: /* d5aba8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d5abac: jmp dword ptr [0xd7a624] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_d5abb2: /* d5abb2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5abd0(void) {
  LOAD_REGS();
L_d5abd0: /* d5abd0: mov eax, 0xd77eec */
  eax = 0xd77eecu;
/* d5abd5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5abf0(void) {
  LOAD_REGS();
L_d5abf0: /* d5abf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5abf1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5abf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5abf7: je 0xd5ac23 */
  if (zf) goto L_d5ac23;
L_d5abf9: /* d5abf9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5abfc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5abfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac00: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* d5ac05: push 0xff000000 */
  { uint32_t v = 0xff000000u; esp -= 4; W32(esp, v); }
/* d5ac0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5ac0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ac11: call dword ptr [ecx + 0x90] */
  { uint32_t t = R32((uint32_t)(ecx + 0x90u)); esp -= 4; W32(esp, 0xd5ac17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5ac17: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ac1a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5ac1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ac1d: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xd5ac23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5ac23: /* d5ac23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ac24: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ac40(void) {
  LOAD_REGS();
L_d5ac40: /* d5ac40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ac41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5ac45: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ac47: je 0xd5ac66 */
  if (zf) goto L_d5ac66;
L_d5ac49: /* d5ac49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ac4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ac4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ac4f: call dword ptr [ecx + 0x8c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8cu)); esp -= 4; W32(esp, 0xd5ac55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5ac55: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ac58: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5ac5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ac62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ac63: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xd5ac66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5ac66: /* d5ac66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ac67: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ac80(void) {
  LOAD_REGS();
L_d5ac80: /* d5ac80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5ac84: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ac87: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ac8a: jae 0xd5ac91 */
  if (!cf) goto L_d5ac91;
L_d5ac8c: /* d5ac8c: mov ecx, 1 */
  ecx = 0x1u;
L_d5ac91: /* d5ac91: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5ac95: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ac98: jae 0xd5ac9f */
  if (!cf) goto L_d5ac9f;
L_d5ac9a: /* d5ac9a: mov eax, 1 */
  eax = 0x1u;
L_d5ac9f: /* d5ac9f: xor edx, edx */
  edx = 0;
/* d5aca1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* d5aca5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d5aca9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5acac: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* d5acb0: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* d5acb4: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* d5acb8: lea edx, [esp] */
  edx = (uint32_t)(esp);
/* d5acbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5acbd: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* d5acc1: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* d5acc9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5accb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5accc: call dword ptr [ecx + 0xa0] */
  { uint32_t t = R32((uint32_t)(ecx + 0xa0u)); esp -= 4; W32(esp, 0xd5acd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5acd2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5acd5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ad00(void) {
  LOAD_REGS();
L_d5ad00: /* d5ad00: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad03: jbe 0xd5ad40 */
  if ((cf | zf)) goto L_d5ad40;
L_d5ad05: /* d5ad05: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad08: jbe 0xd5ad32 */
  if ((cf | zf)) goto L_d5ad32;
L_d5ad0a: /* d5ad0a: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad0f: jbe 0xd5ad2c */
  if ((cf | zf)) goto L_d5ad2c;
L_d5ad11: /* d5ad11: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad16: jbe 0xd5ad26 */
  if ((cf | zf)) goto L_d5ad26;
L_d5ad18: /* d5ad18: mov ecx, 0x200 */
  ecx = 0x200u;
/* d5ad1d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ad1f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5ad21: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d5ad23: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ad25: ret  */
  esp += 4; SPILL(); return;
L_d5ad26: /* d5ad26: mov eax, 0x100 */
  eax = 0x100u;
/* d5ad2b: ret  */
  esp += 4; SPILL(); return;
L_d5ad2c: /* d5ad2c: mov eax, 0x80 */
  eax = 0x80u;
/* d5ad31: ret  */
  esp += 4; SPILL(); return;
L_d5ad32: /* d5ad32: mov edx, 0x20 */
  edx = 0x20u;
/* d5ad37: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ad39: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5ad3b: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d5ad3d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ad3f: ret  */
  esp += 4; SPILL(); return;
L_d5ad40: /* d5ad40: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad43: jbe 0xd5ad53 */
  if ((cf | zf)) goto L_d5ad53;
L_d5ad45: /* d5ad45: mov ecx, 8 */
  ecx = 0x8u;
/* d5ad4a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ad4c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5ad4e: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d5ad50: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ad52: ret  */
  esp += 4; SPILL(); return;
L_d5ad53: /* d5ad53: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5ad56: jbe 0xd5ad5d */
  if ((cf | zf)) goto L_d5ad5d;
L_d5ad58: /* d5ad58: mov eax, 4 */
  eax = 0x4u;
L_d5ad5d: /* d5ad5d: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ad80(void) {
  LOAD_REGS();
L_d5ad80: /* d5ad80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ad83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ad84: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* d5ad88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ad89: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* d5ad8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ad8e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* d5ad92: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5ad94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ad95: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* d5ad99: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5ad9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ad9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ada0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ada1: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d5ada6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5ada8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ada9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5adaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5adab: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* d5adb3: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd5adb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5adb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5adb8: jge 0xd5add2 */
  if ((sf == of)) goto L_d5add2;
L_d5adba: /* d5adba: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d5adbc: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* d5adc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5adc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5adc3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5adc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5adc6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5adc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5adc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5adca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5adcb: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd5adceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5adce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5add0: jl 0xd5ae27 */
  if ((sf != of)) goto L_d5ae27;
L_d5add2: /* d5add2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5add6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5add8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5adda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5addc: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* d5ade0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ade1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ade3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ade4: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xd5ade7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5ade7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5ade9: jl 0xd5ae27 */
  if ((sf != of)) goto L_d5ae27;
L_d5adeb: /* d5adeb: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* d5adef: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d5adf3: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* d5adf6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5adf8: jbe 0xd5ae1b */
  if ((cf | zf)) goto L_d5ae1b;
L_d5adfa: /* d5adfa: mov ebx, edi */
  ebx = edi;
/* d5adfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d5ae00: /* d5ae00: mov ecx, esi */
  ecx = esi;
/* d5ae02: mov ebp, ecx */
  ebp = ecx;
/* d5ae04: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5ae07: xor eax, eax */
  eax = 0;
/* d5ae09: mov edi, edx */
  edi = edx;
/* d5ae0b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d5ae0d: mov ecx, ebp */
  ecx = ebp;
/* d5ae0f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d5ae12: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d5ae14: add edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5ae18: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* d5ae19: jne 0xd5ae00 */
  if (!zf) goto L_d5ae00;
L_d5ae1b: /* d5ae1b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5ae1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ae21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ae23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ae24: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xd5ae27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5ae27: /* d5ae27: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5ae2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ae2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ae2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ae2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ae2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ae32: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ae70(void) {
  LOAD_REGS();
L_d5ae70: /* d5ae70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5ae74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ae76: je 0xd5ae7c */
  if (zf) goto L_d5ae7c;
L_d5ae78: /* d5ae78: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* d5ae7b: ret  */
  esp += 4; SPILL(); return;
L_d5ae7c: /* d5ae7c: xor eax, eax */
  eax = 0;
/* d5ae7e: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ae90(void) {
  LOAD_REGS();
L_d5ae90: /* d5ae90: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ae96: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* d5ae9d: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* d5aea4: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* d5aeab: fmul dword ptr [0xd6c2bc] */
  ST0 = ST0 * (F32((uint32_t)(0xd6c2bcu)));
/* d5aeb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5aeb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5aeb3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d5aeb7: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* d5aebb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5aec3: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* d5aecb: call 0xd63e20 */
  esp -= 4; W32(esp, 0xd5aed0u); SPILL(); f_d63e20(); if (g_unwind) return; RELOAD();
/* d5aed0: fild dword ptr [esp + 0x9c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* d5aed7: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5aeda: or eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d5aedf: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* d5aee6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* d5aeea: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* d5aeee: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d5aef0: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d5aef8: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* d5af00: fadd dword ptr [esp + 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8cu)));
/* d5af07: mov ecx, 8 */
  ecx = 0x8u;
/* d5af0c: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* d5af10: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* d5af14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5af16: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* d5af1a: fild dword ptr [esp + 0xa0] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* d5af21: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* d5af28: mov dword ptr [esp + 0x40], 0x3f800000 */
  W32((uint32_t)(esp + 0x40u), 0x3f800000u);
/* d5af30: mov ecx, 8 */
  ecx = 0x8u;
/* d5af35: fadd dword ptr [esp + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x90u)));
/* d5af3c: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* d5af40: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* d5af44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5af46: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* d5af4a: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* d5af52: mov ecx, 8 */
  ecx = 0x8u;
/* d5af57: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* d5af5b: lea edi, [esp + 0x68] */
  edi = (uint32_t)(esp + 0x68u);
/* d5af5f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5af61: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* d5af65: push 0x1c4 */
  { uint32_t v = 0x1c4u; esp -= 4; W32(esp, v); }
/* d5af6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5af6b: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* d5af6f: mov dword ptr [esp + 0x8c], 0x3f800000 */
  W32((uint32_t)(esp + 0x8cu), 0x3f800000u);
/* d5af7a: call dword ptr [eax + 0x130] */
  { uint32_t t = R32((uint32_t)(eax + 0x130u)); esp -= 4; W32(esp, 0xd5af80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5af80: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d5af82: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* d5af84: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* d5af88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5af89: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5af8b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d5af8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5af8e: call dword ptr [ecx + 0x120] */
  { uint32_t t = R32((uint32_t)(ecx + 0x120u)); esp -= 4; W32(esp, 0xd5af94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5af94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5af95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5af96: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5af9c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5aff0(void) {
  LOAD_REGS();
L_d5aff0: /* d5aff0: sub esp, 0x180 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x180u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5aff6: fild dword ptr [esp + 0x194] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x194u)); FPUSH(v); }
/* d5affd: mov eax, dword ptr [esp + 0x184] */
  eax = R32((uint32_t)(esp + 0x184u));
/* d5b004: mov ecx, dword ptr [esp + 0x188] */
  ecx = R32((uint32_t)(esp + 0x188u));
/* d5b00b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b00c: fmul dword ptr [esp + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x190u)));
/* d5b013: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* d5b017: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* d5b01e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5b01f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d5b023: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5b02b: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* d5b033: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d5b03b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* d5b043: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d5b046: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* d5b04a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* d5b04e: mov eax, dword ptr [esp + 0x18c] */
  eax = R32((uint32_t)(esp + 0x18cu));
/* d5b055: fadd dword ptr [esp + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18cu)));
/* d5b05c: mov ecx, 8 */
  ecx = 0x8u;
/* d5b061: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* d5b065: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* d5b069: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b06b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* d5b06f: fild dword ptr [esp + 0x1a0] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1a0u)); FPUSH(v); }
/* d5b076: fmul dword ptr [esp + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x198u)));
/* d5b07d: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* d5b081: mov ecx, 8 */
  ecx = 0x8u;
/* d5b086: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* d5b08a: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* d5b08e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b090: mov ecx, 8 */
  ecx = 0x8u;
/* d5b095: fadd dword ptr [esp + 0x190] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x190u)));
/* d5b09c: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* d5b0a0: lea edi, [esp + 0x68] */
  edi = (uint32_t)(esp + 0x68u);
/* d5b0a4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b0a6: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* d5b0aa: mov ecx, 8 */
  ecx = 0x8u;
/* d5b0af: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* d5b0b3: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* d5b0ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b0bc: mov ecx, 8 */
  ecx = 0x8u;
/* d5b0c1: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* d5b0c5: lea edi, [esp + 0xa8] */
  edi = (uint32_t)(esp + 0xa8u);
/* d5b0cc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b0ce: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* d5b0d5: mov ecx, 8 */
  ecx = 0x8u;
/* d5b0da: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* d5b0e1: lea edi, [esp + 0xc8] */
  edi = (uint32_t)(esp + 0xc8u);
/* d5b0e8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b0ea: mov ecx, 8 */
  ecx = 0x8u;
/* d5b0ef: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* d5b0f3: lea edi, [esp + 0xe8] */
  edi = (uint32_t)(esp + 0xe8u);
/* d5b0fa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b0fc: mov ecx, 8 */
  ecx = 0x8u;
/* d5b101: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* d5b105: lea edi, [esp + 0x108] */
  edi = (uint32_t)(esp + 0x108u);
/* d5b10c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b10e: mov ecx, 8 */
  ecx = 0x8u;
/* d5b113: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* d5b117: lea edi, [esp + 0x128] */
  edi = (uint32_t)(esp + 0x128u);
/* d5b11e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b120: mov eax, 0xffff0000 */
  eax = 0xffff0000u;
/* d5b125: mov ecx, 8 */
  ecx = 0x8u;
/* d5b12a: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* d5b12e: lea edi, [esp + 0x148] */
  edi = (uint32_t)(esp + 0x148u);
/* d5b135: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b137: mov ecx, 8 */
  ecx = 0x8u;
/* d5b13c: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* d5b143: lea edi, [esp + 0x168] */
  edi = (uint32_t)(esp + 0x168u);
/* d5b14a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d5b14c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d5b14e: mov dword ptr [esp + 0x118], eax */
  W32((uint32_t)(esp + 0x118u), eax);
/* d5b155: mov dword ptr [esp + 0x11c], eax */
  W32((uint32_t)(esp + 0x11cu), eax);
/* d5b15c: mov dword ptr [esp + 0x138], eax */
  W32((uint32_t)(esp + 0x138u), eax);
/* d5b163: mov dword ptr [esp + 0x13c], eax */
  W32((uint32_t)(esp + 0x13cu), eax);
/* d5b16a: mov dword ptr [esp + 0x158], eax */
  W32((uint32_t)(esp + 0x158u), eax);
/* d5b171: mov dword ptr [esp + 0x15c], eax */
  W32((uint32_t)(esp + 0x15cu), eax);
/* d5b178: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
/* d5b17f: mov dword ptr [esp + 0x17c], eax */
  W32((uint32_t)(esp + 0x17cu), eax);
/* d5b186: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b188: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b18a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b18d: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xd5b193u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b193: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d5b195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b197: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d5b199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b19b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b19c: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b1a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b1a2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d5b1a4: push 0x1c4 */
  { uint32_t v = 0x1c4u; esp -= 4; W32(esp, v); }
/* d5b1a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b1aa: call dword ptr [eax + 0x130] */
  { uint32_t t = R32((uint32_t)(eax + 0x130u)); esp -= 4; W32(esp, 0xd5b1b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b1b0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d5b1b2: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* d5b1b4: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* d5b1b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b1b9: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* d5b1bb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b1bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b1be: call dword ptr [ecx + 0x120] */
  { uint32_t t = R32((uint32_t)(ecx + 0x120u)); esp -= 4; W32(esp, 0xd5b1c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b1c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5b1c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b1c6: add esp, 0x180 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x180u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b1cc: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b250(void) {
  LOAD_REGS();
L_d5b250: /* d5b250: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d5b254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b255: fcomp qword ptr [0xd6c2c0] */
  fpu_com(ST0, F64((uint32_t)(0xd6c2c0u)));
  FPOP();
/* d5b25b: mov esi, eax */
  esi = eax;
/* d5b25d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d5b25f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5b262: jne 0xd5b2c0 */
  if (!zf) goto L_d5b2c0;
L_d5b264: /* d5b264: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d5b267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b269: jne 0xd5b2c0 */
  if (!zf) goto L_d5b2c0;
L_d5b26b: /* d5b26b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b26d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b26f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b271: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* d5b273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b274: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xd5b27au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b27a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b27c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b27e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b280: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5b282: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b284: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b285: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b28bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b28b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b28d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b28f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b291: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b296: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xd5b29cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b29c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b29e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b2a0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b2a2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d5b2a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b2a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b2a7: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b2adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2ad: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* d5b2af: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d5b2b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5b2b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5b2b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b2b8: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b2beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b2bf: ret  */
  esp += 4; SPILL(); return;
L_d5b2c0: /* d5b2c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b2c2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b2c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5b2c6: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* d5b2c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b2c9: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xd5b2cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b2d1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b2d3: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d5b2d5: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* d5b2d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b2d8: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xd5b2deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b2e0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b2e2: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* d5b2e4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* d5b2e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b2e7: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xd5b2edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b2ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b2f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5b2f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5b2f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b2f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b2f8: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b2feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b2fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b300: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b302: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b304: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b308: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b309: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xd5b30fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b30f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b311: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b313: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b315: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d5b317: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b31a: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b320u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b320: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b322: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b324: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5b326: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d5b328: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b32a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b32b: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xd5b331u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b331: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* d5b333: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d5b335: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5b337: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5b339: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b33b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b33c: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd5b342u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b343: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b390(void) {
  LOAD_REGS();
L_d5b390: /* d5b390: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5b394: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5b397: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b399: je 0xd5b3a8 */
  if (zf) goto L_d5b3a8;
L_d5b39b: /* d5b39b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d5b39f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d5b3a2: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* d5b3a6: jmp 0xd5b3b3 */
  goto L_d5b3b3;
L_d5b3a8: /* d5b3a8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d5b3ac: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* d5b3af: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_d5b3b3: /* d5b3b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b3b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5b3b5: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* d5b3b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b3ba: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* d5b3be: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* d5b3c2: xor edx, edx */
  edx = 0;
/* d5b3c4: imul ebx, esi */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(esi);
  ebx = (uint32_t)r;
  }
/* d5b3c7: mov eax, esi */
  eax = esi;
/* d5b3c9: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0xd5b3c9);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* d5b3cb: add ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5b3ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5b3cf: and ebx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d5b3d2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* d5b3d6: mov eax, edx */
  eax = edx;
/* d5b3d8: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* d5b3dc: call 0xd5ad00 */
  esp -= 4; W32(esp, 0xd5b3e1u); SPILL(); f_d5ad00(); if (g_unwind) return; RELOAD();
/* d5b3e1: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* d5b3e5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* d5b3e9: xor edx, edx */
  edx = 0;
/* d5b3eb: mov eax, edi */
  eax = edi;
/* d5b3ed: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0xd5b3ed);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* d5b3ef: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* d5b3f3: mov eax, edx */
  eax = edx;
/* d5b3f5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* d5b3f9: call 0xd5ad00 */
  esp -= 4; W32(esp, 0xd5b3feu); SPILL(); f_d5ad00(); if (g_unwind) return; RELOAD();
/* d5b3fe: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* d5b402: xor edx, edx */
  edx = 0;
/* d5b404: lea eax, [esi + ebp - 1] */
  eax = (uint32_t)(esi + ebp + 0xffffffffu);
/* d5b408: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0xd5b408);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* d5b40a: xor edx, edx */
  edx = 0;
/* d5b40c: mov ecx, eax */
  ecx = eax;
/* d5b40e: lea eax, [edi + ebp - 1] */
  eax = (uint32_t)(edi + ebp + 0xffffffffu);
/* d5b412: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0xd5b412);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* d5b414: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* d5b417: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* d5b41b: lea ecx, [ecx*4 + 0x50] */
  ecx = (uint32_t)(ecx*4 + 0x50u);
/* d5b422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b423: call dword ptr [0xd7a628] */
  esp -= 4; W32(esp, 0xd5b429u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* d5b429: mov esi, eax */
  esi = eax;
/* d5b42b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b42e: xor eax, eax */
  eax = 0;
/* d5b430: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b432: je 0xd5b5c8 */
  if (zf) goto L_d5b5c8;
L_d5b438: /* d5b438: mov ecx, 0x14 */
  ecx = 0x14u;
/* d5b43d: mov edi, esi */
  edi = esi;
/* d5b43f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d5b441: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* d5b445: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* d5b449: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* d5b44c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* d5b44f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5b452: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* d5b454: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d5b458: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* d5b45b: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* d5b45f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* d5b462: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d5b466: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* d5b469: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* d5b46d: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* d5b470: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* d5b474: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* d5b477: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d5b47b: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* d5b47e: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* d5b482: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d5b485: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* d5b489: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b48b: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* d5b48e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d5b492: mov dword ptr [esi + 0x3c], ebx */
  W32((uint32_t)(esi + 0x3cu), ebx);
/* d5b495: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* d5b499: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* d5b49c: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* d5b49f: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* d5b4a2: mov dword ptr [esi + 0x44], ebp */
  W32((uint32_t)(esi + 0x44u), ebp);
/* d5b4a5: je 0xd5b4ac */
  if (zf) goto L_d5b4ac;
L_d5b4a7: /* d5b4a7: mov ebx, dword ptr [edi + 0x1c] */
  ebx = R32((uint32_t)(edi + 0x1cu));
/* d5b4aa: jmp 0xd5b4af */
  goto L_d5b4af;
L_d5b4ac: /* d5b4ac: mov ebx, dword ptr [edi + 0x20] */
  ebx = R32((uint32_t)(edi + 0x20u));
L_d5b4af: /* d5b4af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b4b1: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* d5b4b4: je 0xd5b4bb */
  if (zf) goto L_d5b4bb;
L_d5b4b6: /* d5b4b6: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* d5b4b9: jmp 0xd5b4be */
  goto L_d5b4be;
L_d5b4bb: /* d5b4bb: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
L_d5b4be: /* d5b4be: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b4c0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5b4c3: mov ebx, eax */
  ebx = eax;
/* d5b4c5: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* d5b4cd: jbe 0xd5b543 */
  if ((cf | zf)) goto L_d5b543;
L_d5b4cf: /* d5b4cf: nop  */
L_d5b4d0: /* d5b4d0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b4d3: xor ebp, ebp */
  ebp = 0;
/* d5b4d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b4d7: jbe 0xd5b50a */
  if ((cf | zf)) goto L_d5b50a;
L_d5b4d9: /* d5b4d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d5b4e0: /* d5b4e0: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d5b4e3: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* d5b4e6: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5b4e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b4ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b4eb: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d5b4ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b4ef: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5b4f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b4f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b4f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b4f5: call 0xd510ff */
  esp -= 4; W32(esp, 0xd5b4fau); SPILL(); f_d510ff(); if (g_unwind) return; RELOAD();
/* d5b4fa: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* d5b4fc: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b4ff: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b502: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5b505: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d5b506: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b508: jb 0xd5b4e0 */
  if (cf) goto L_d5b4e0;
L_d5b50a: /* d5b50a: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5b50d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b50f: je 0xd5b533 */
  if (zf) goto L_d5b533;
L_d5b511: /* d5b511: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5b514: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* d5b517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b518: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5b51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b51c: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5b51f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b520: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5b523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b524: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b525: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b526: call 0xd510ff */
  esp -= 4; W32(esp, 0xd5b52bu); SPILL(); f_d510ff(); if (g_unwind) return; RELOAD();
/* d5b52b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b52e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* d5b530: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_d5b533: /* d5b533: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5b537: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d5b53a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5b53b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b53d: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* d5b541: jb 0xd5b4d0 */
  if (cf) goto L_d5b4d0;
L_d5b543: /* d5b543: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5b546: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b548: je 0xd5b5a6 */
  if (zf) goto L_d5b5a6;
L_d5b54a: /* d5b54a: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b54d: xor ebp, ebp */
  ebp = 0;
/* d5b54f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b551: jbe 0xd5b580 */
  if ((cf | zf)) goto L_d5b580;
L_d5b553: /* d5b553: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5b556: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5b559: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* d5b55c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b55d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5b560: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b561: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5b564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b565: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5b568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b569: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b56a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b56b: call 0xd510ff */
  esp -= 4; W32(esp, 0xd5b570u); SPILL(); f_d510ff(); if (g_unwind) return; RELOAD();
/* d5b570: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* d5b572: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b575: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b578: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5b57b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d5b57c: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b57e: jb 0xd5b553 */
  if (cf) goto L_d5b553;
L_d5b580: /* d5b580: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5b583: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b585: je 0xd5b5a6 */
  if (zf) goto L_d5b5a6;
L_d5b587: /* d5b587: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* d5b58a: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* d5b58d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b58e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5b591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b592: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5b595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b596: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5b599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b59a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b59b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b59c: call 0xd510ff */
  esp -= 4; W32(esp, 0xd5b5a1u); SPILL(); f_d510ff(); if (g_unwind) return; RELOAD();
/* d5b5a1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b5a4: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_d5b5a6: /* d5b5a6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* d5b5a9: xor edi, edi */
  edi = 0;
/* d5b5ab: xor eax, eax */
  eax = 0;
/* d5b5ad: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5b5af: jbe 0xd5b5c3 */
  if ((cf | zf)) goto L_d5b5c3;
L_d5b5b1: /* d5b5b1: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
L_d5b5b4: /* d5b5b4: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5b5b6: je 0xd5b5d0 */
  if (zf) goto L_d5b5d0;
L_d5b5b8: /* d5b5b8: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* d5b5bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5b5bc: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5b5bf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b5c1: jb 0xd5b5b4 */
  if (cf) goto L_d5b5b4;
L_d5b5c3: /* d5b5c3: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* d5b5c6: mov eax, esi */
  eax = esi;
L_d5b5c8: /* d5b5c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5b5c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b5ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5b5cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5b5cc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b5cf: ret  */
  esp += 4; SPILL(); return;
L_d5b5d0: /* d5b5d0: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d5b5d3: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* d5b5d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b5d8: je 0xd5b5ea */
  if (zf) goto L_d5b5ea;
L_d5b5da: /* d5b5da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b5dd: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xd5b5e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b5e0: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* d5b5e3: mov dword ptr [edx + edi*4], 0 */
  W32((uint32_t)(edx + edi*4), 0x0u);
L_d5b5ea: /* d5b5ea: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* d5b5ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5b5ee: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b5f0: jb 0xd5b5d0 */
  if (cf) goto L_d5b5d0;
L_d5b5f2: /* d5b5f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b5f3: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd5b5f9u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d5b5f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b5fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5b5fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b5fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5b5ff: xor eax, eax */
  eax = 0;
/* d5b601: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5b602: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b605: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b6b0(void) {
  LOAD_REGS();
L_d5b6b0: /* d5b6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b6b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5b6b5: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d5b6b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b6ba: je 0xd5b6f0 */
  if (zf) goto L_d5b6f0;
L_d5b6bc: /* d5b6bc: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* d5b6bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5b6c0: xor edi, edi */
  edi = 0;
/* d5b6c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b6c4: jbe 0xd5b6de */
  if ((cf | zf)) goto L_d5b6de;
L_d5b6c6: /* d5b6c6: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d5b6c9: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* d5b6cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b6ce: je 0xd5b6d6 */
  if (zf) goto L_d5b6d6;
L_d5b6d0: /* d5b6d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b6d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b6d3: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xd5b6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5b6d6: /* d5b6d6: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* d5b6d9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5b6da: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b6dc: jb 0xd5b6c6 */
  if (cf) goto L_d5b6c6;
L_d5b6de: /* d5b6de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b6df: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* d5b6e6: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd5b6ecu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d5b6ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b6ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_d5b6f0: /* d5b6f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b6f1: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b720(void) {
  LOAD_REGS();
L_d5b720: /* d5b720: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5b723: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b724: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* d5b728: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* d5b72b: cmp eax, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b72e: jae 0xd5b807 */
  if (!cf) goto L_d5b807;
L_d5b734: /* d5b734: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d5b737: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* d5b73a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b73c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b73e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b740: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d5b744: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b745: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b748: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xd5b74bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b74b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5b74d: jl 0xd5b807 */
  if ((sf != of)) goto L_d5b807;
L_d5b753: /* d5b753: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5b757: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b759: je 0xd5b761 */
  if (zf) goto L_d5b761;
L_d5b75b: /* d5b75b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5b75f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5b761: /* d5b761: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5b765: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b767: je 0xd5b76f */
  if (zf) goto L_d5b76f;
L_d5b769: /* d5b769: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5b76d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_d5b76f: /* d5b76f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d5b773: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b775: je 0xd5b77c */
  if (zf) goto L_d5b77c;
L_d5b777: /* d5b777: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d5b77a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5b77c: /* d5b77c: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* d5b77f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* d5b782: xor eax, eax */
  eax = 0;
/* d5b784: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b786: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5b789: xor edx, edx */
  edx = 0;
/* d5b78b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5b78c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5b78e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* d5b791: mov edi, eax */
  edi = eax;
/* d5b793: mov eax, ecx */
  eax = ecx;
/* d5b795: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0xd5b795);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* d5b797: mov edx, eax */
  edx = eax;
/* d5b799: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* d5b79c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5b79e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* d5b7a2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b7a4: je 0xd5b7ae */
  if (zf) goto L_d5b7ae;
L_d5b7a6: /* d5b7a6: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* d5b7a9: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* d5b7ac: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_d5b7ae: /* d5b7ae: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d5b7b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b7b4: je 0xd5b7be */
  if (zf) goto L_d5b7be;
L_d5b7b6: /* d5b7b6: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* d5b7b9: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* d5b7bc: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_d5b7be: /* d5b7be: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* d5b7c2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b7c4: je 0xd5b7d5 */
  if (zf) goto L_d5b7d5;
L_d5b7c6: /* d5b7c6: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b7c9: jb 0xd5b7d0 */
  if (cf) goto L_d5b7d0;
L_d5b7cb: /* d5b7cb: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* d5b7ce: jmp 0xd5b7d3 */
  goto L_d5b7d3;
L_d5b7d0: /* d5b7d0: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
L_d5b7d3: /* d5b7d3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_d5b7d5: /* d5b7d5: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* d5b7d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b7db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5b7dc: je 0xd5b7fa */
  if (zf) goto L_d5b7fa;
L_d5b7de: /* d5b7de: cmp eax, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b7e1: jb 0xd5b7f5 */
  if (cf) goto L_d5b7f5;
L_d5b7e3: /* d5b7e3: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5b7e6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5b7e8: inc dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* d5b7eb: mov eax, 1 */
  eax = 0x1u;
/* d5b7f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b7f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b7f4: ret  */
  esp += 4; SPILL(); return;
L_d5b7f5: /* d5b7f5: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d5b7f8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_d5b7fa: /* d5b7fa: inc dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* d5b7fd: mov eax, 1 */
  eax = 0x1u;
/* d5b802: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b803: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b806: ret  */
  esp += 4; SPILL(); return;
L_d5b807: /* d5b807: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* d5b80e: xor eax, eax */
  eax = 0;
/* d5b810: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5b811: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b814: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b860(void) {
  LOAD_REGS();
L_d5b860: /* d5b860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5b864: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* d5b867: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* d5b86a: mov eax, dword ptr [edx + ecx*4 - 4] */
  eax = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* d5b86e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b870: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b873: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xd5b876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b876: ret  */
  esp += 4; SPILL(); return;
}

void f_d5b890(void) {
  LOAD_REGS();
L_d5b890: /* d5b890: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5b894: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5b897: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5b898: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5b899: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5b89a: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* d5b89e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5b89f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b8a0: mov eax, esi */
  eax = esi;
/* d5b8a2: call 0xd5b250 */
  esp -= 4; W32(esp, 0xd5b8a7u); SPILL(); f_d5b250(); if (g_unwind) return; RELOAD();
/* d5b8a7: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* d5b8aa: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5b8ad: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* d5b8b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b8b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5b8b5: jge 0xd5b8bd */
  if ((sf == of)) goto L_d5b8bd;
L_d5b8b7: /* d5b8b7: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5b8bd: /* d5b8bd: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d5b8c1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* d5b8c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b8c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d5b8c8: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d5b8cc: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* d5b8d0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d5b8d4: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5b8dc: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* d5b8e0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d5b8e4: jbe 0xd5b9b5 */
  if ((cf | zf)) goto L_d5b9b5;
L_d5b8ea: /* d5b8ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d5b8f0: /* d5b8f0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5b8f4: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* d5b8f8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b8fb: xor ebp, ebp */
  ebp = 0;
/* d5b8fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b8ff: jbe 0xd5b950 */
  if ((cf | zf)) goto L_d5b950;
L_d5b901: /* d5b901: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d5b903: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b905: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b90a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b90b: call dword ptr [ecx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ecx + 0xf4u)); esp -= 4; W32(esp, 0xd5b911u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b911: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d5b914: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5b918: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d5b91c: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5b91e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b91f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d5b923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b925: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* d5b929: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b92a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d5b92e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b92f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b931: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5b934: call 0xd5ae90 */
  esp -= 4; W32(esp, 0xd5b939u); SPILL(); f_d5ae90(); if (g_unwind) return; RELOAD();
/* d5b939: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* d5b93d: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* d5b941: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b944: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5b947: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d5b948: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b94a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* d5b94e: jb 0xd5b901 */
  if (cf) goto L_d5b901;
L_d5b950: /* d5b950: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5b953: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b955: je 0xd5b995 */
  if (zf) goto L_d5b995;
L_d5b957: /* d5b957: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d5b959: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b95b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5b95d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b95e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b961: call dword ptr [ecx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ecx + 0xf4u)); esp -= 4; W32(esp, 0xd5b967u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b967: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5b96b: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5b96e: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* d5b971: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5b973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b974: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5b978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b979: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5b97d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b97e: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d5b982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b983: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d5b987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b98a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5b98d: call 0xd5ae90 */
  esp -= 4; W32(esp, 0xd5b992u); SPILL(); f_d5ae90(); if (g_unwind) return; RELOAD();
/* d5b992: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5b995: /* d5b995: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* d5b999: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5b99d: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* d5b9a1: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d5b9a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5b9a5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5b9a7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* d5b9ab: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* d5b9af: jb 0xd5b8f0 */
  if (cf) goto L_d5b8f0;
L_d5b9b5: /* d5b9b5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5b9b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5b9ba: je 0xd5ba65 */
  if (zf) goto L_d5ba65;
L_d5b9c0: /* d5b9c0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5b9c3: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d5b9c7: xor ebp, ebp */
  ebp = 0;
/* d5b9c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5b9cb: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* d5b9cf: jbe 0xd5ba23 */
  if ((cf | zf)) goto L_d5ba23;
L_d5b9d1: /* d5b9d1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d5b9d3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5b9d5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5b9d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b9d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5b9da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b9db: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd5b9e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5b9e1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d5b9e5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5b9e8: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5b9eb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5b9ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b9ee: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d5b9f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5b9f3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5b9f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5b9f8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5b9fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5b9fd: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d5ba01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ba02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ba03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ba04: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5ba07: call 0xd5ae90 */
  esp -= 4; W32(esp, 0xd5ba0cu); SPILL(); f_d5ae90(); if (g_unwind) return; RELOAD();
/* d5ba0c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* d5ba10: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* d5ba14: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5ba17: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ba1a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d5ba1b: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ba1d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* d5ba21: jb 0xd5b9d1 */
  if (cf) goto L_d5b9d1;
L_d5ba23: /* d5ba23: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5ba26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ba28: je 0xd5ba65 */
  if (zf) goto L_d5ba65;
L_d5ba2a: /* d5ba2a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d5ba2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5ba2e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ba30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ba31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ba33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ba34: call dword ptr [ecx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ecx + 0xf4u)); esp -= 4; W32(esp, 0xd5ba3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5ba3a: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5ba3e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* d5ba41: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* d5ba44: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5ba46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ba47: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5ba4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ba4c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5ba50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ba51: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d5ba55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ba56: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d5ba5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ba5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ba5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ba5d: call 0xd5ae90 */
  esp -= 4; W32(esp, 0xd5ba62u); SPILL(); f_d5ae90(); if (g_unwind) return; RELOAD();
/* d5ba62: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5ba65: /* d5ba65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ba66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ba67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ba68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ba69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ba6c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5baf0(void) {
  LOAD_REGS();
L_d5baf0: /* d5baf0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5baf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5baf4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5baf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5baf6: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* d5bafa: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d5bafd: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* d5bb00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5bb02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5bb03: jge 0xd5bb0b */
  if ((sf == of)) goto L_d5bb0b;
L_d5bb05: /* d5bb05: fadd dword ptr [0xd6c2b8] */
  ST0 = ST0 + (F32((uint32_t)(0xd6c2b8u)));
L_d5bb0b: /* d5bb0b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* d5bb0f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d5bb13: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* d5bb16: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d5bb18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5bb1a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* d5bb1e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d5bb22: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* d5bb26: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* d5bb2a: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* d5bb32: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d5bb36: jbe 0xd5bbca */
  if ((cf | zf)) goto L_d5bbca;
L_d5bb3c: /* d5bb3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d5bb40: /* d5bb40: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5bb43: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d5bb47: xor edi, edi */
  edi = 0;
/* d5bb49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5bb4b: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* d5bb4f: jbe 0xd5bb84 */
  if ((cf | zf)) goto L_d5bb84;
L_d5bb51: /* d5bb51: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d5bb54: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bb58: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* d5bb5c: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5bb5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bb5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bb60: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d5bb64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5bb65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bb66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bb67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bb68: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bb6du); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bb6d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* d5bb71: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* d5bb75: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5bb78: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bb7b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5bb7c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5bb7e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* d5bb82: jb 0xd5bb51 */
  if (cf) goto L_d5bb51;
L_d5bb84: /* d5bb84: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5bb87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bb89: je 0xd5bbaa */
  if (zf) goto L_d5bbaa;
L_d5bb8b: /* d5bb8b: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5bb8e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d5bb92: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5bb94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bb95: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* d5bb99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bb9a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5bb9e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5bb9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bba1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bba2: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bba7u); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bba7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5bbaa: /* d5bbaa: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* d5bbae: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5bbb2: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* d5bbb6: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d5bbb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5bbba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5bbbc: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* d5bbc0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* d5bbc4: jb 0xd5bb40 */
  if (cf) goto L_d5bb40;
L_d5bbca: /* d5bbca: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5bbcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bbcf: je 0xd5bc3e */
  if (zf) goto L_d5bc3e;
L_d5bbd1: /* d5bbd1: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5bbd4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d5bbd8: xor edi, edi */
  edi = 0;
/* d5bbda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5bbdc: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* d5bbe0: jbe 0xd5bc18 */
  if ((cf | zf)) goto L_d5bc18;
L_d5bbe2: /* d5bbe2: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* d5bbe5: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d5bbe8: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d5bbec: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5bbee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bbef: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d5bbf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bbf4: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d5bbf8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5bbf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bbfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bbfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bbfc: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bc01u); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bc01: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* d5bc05: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* d5bc09: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d5bc0c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bc0f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5bc10: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5bc12: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* d5bc16: jb 0xd5bbe2 */
  if (cf) goto L_d5bbe2;
L_d5bc18: /* d5bc18: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d5bc1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bc1d: je 0xd5bc3e */
  if (zf) goto L_d5bc3e;
L_d5bc1f: /* d5bc1f: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* d5bc22: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bc26: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5bc28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bc29: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d5bc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bc2e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d5bc32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5bc33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bc34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bc35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bc36: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bc3bu); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bc3b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5bc3e: /* d5bc3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5bc3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5bc40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5bc41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5bc42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bc45: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bcb0(void) {
  LOAD_REGS();
L_d5bcb0: /* d5bcb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5bcb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5bcb2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d5bcb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5bcb7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* d5bcbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5bcbc: mov eax, esi */
  eax = esi;
/* d5bcbe: call 0xd5b250 */
  esp -= 4; W32(esp, 0xd5bcc3u); SPILL(); f_d5b250(); if (g_unwind) return; RELOAD();
/* d5bcc3: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* d5bcc6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5bcc8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5bcca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bccd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bcce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5bcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bcd1: call dword ptr [ecx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ecx + 0xf4u)); esp -= 4; W32(esp, 0xd5bcd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5bcd7: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d5bcda: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* d5bcdd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d5bce1: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* d5bce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5bce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bce5: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5bce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bcea: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d5bcee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bcef: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* d5bcf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bcf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bcf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bcf6: call 0xd5ae90 */
  esp -= 4; W32(esp, 0xd5bcfbu); SPILL(); f_d5ae90(); if (g_unwind) return; RELOAD();
/* d5bcfb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bcfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5bcff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5bd00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5bd01: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bd30(void) {
  LOAD_REGS();
L_d5bd30: /* d5bd30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5bd34: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d5bd37: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* d5bd3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5bd3b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* d5bd3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bd3e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bd42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bd43: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d5bd47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bd48: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bd4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bd4d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d5bd51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bd52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bd53: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bd58u); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bd58: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bd5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5bd5c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bd70(void) {
  LOAD_REGS();
L_d5bd70: /* d5bd70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5bd73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5bd74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5bd75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5bd76: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d5bd7a: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* d5bd7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bd7f: jne 0xd5be13 */
  if (!zf) goto L_d5be13;
L_d5bd85: /* d5bd85: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* d5bd89: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bd8b: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* d5bd8f: jne 0xd5bd95 */
  if (!zf) goto L_d5bd95;
L_d5bd91: /* d5bd91: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bd93: je 0xd5bdf7 */
  if (zf) goto L_d5bdf7;
L_d5bd95: /* d5bd95: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* d5bd98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5bd9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5bd9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5bd9e: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d5bda2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bda3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5bda5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bda6: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xd5bda9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5bda9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5bdab: jl 0xd5be1a */
  if ((sf != of)) goto L_d5be1a;
L_d5bdad: /* d5bdad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdaf: je 0xd5bdb7 */
  if (zf) goto L_d5bdb7;
L_d5bdb1: /* d5bdb1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5bdb5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_d5bdb7: /* d5bdb7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdb9: je 0xd5bdc1 */
  if (zf) goto L_d5bdc1;
L_d5bdbb: /* d5bdbb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5bdbf: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_d5bdc1: /* d5bdc1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* d5bdc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdc7: je 0xd5bdcf */
  if (zf) goto L_d5bdcf;
L_d5bdc9: /* d5bdc9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_d5bdcf: /* d5bdcf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* d5bdd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdd5: je 0xd5bddd */
  if (zf) goto L_d5bddd;
L_d5bdd7: /* d5bdd7: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_d5bddd: /* d5bddd: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d5bde1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bde3: je 0xd5bdea */
  if (zf) goto L_d5bdea;
L_d5bde5: /* d5bde5: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* d5bde8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5bdea: /* d5bdea: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d5bdee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdf0: je 0xd5bdf7 */
  if (zf) goto L_d5bdf7;
L_d5bdf2: /* d5bdf2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* d5bdf5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_d5bdf7: /* d5bdf7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d5bdfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bdfd: je 0xd5be04 */
  if (zf) goto L_d5be04;
L_d5bdff: /* d5bdff: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* d5be02: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5be04: /* d5be04: mov eax, 1 */
  eax = 0x1u;
/* d5be09: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* d5be0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5be0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5be0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5be0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5be12: ret  */
  esp += 4; SPILL(); return;
L_d5be13: /* d5be13: mov dword ptr [edi + 0x1c], 0 */
  W32((uint32_t)(edi + 0x1cu), 0x0u);
L_d5be1a: /* d5be1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5be1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5be1c: xor eax, eax */
  eax = 0;
/* d5be1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5be1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5be22: ret  */
  esp += 4; SPILL(); return;
}

void f_d5be60(void) {
  LOAD_REGS();
L_d5be60: /* d5be60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5be64: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* d5be67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5be69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5be6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5be6c: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xd5be6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5be6f: ret  */
  esp += 4; SPILL(); return;
}

void f_d5be80(void) {
  LOAD_REGS();
L_d5be80: /* d5be80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5be81: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* d5be83: call dword ptr [0xd7a628] */
  esp -= 4; W32(esp, 0xd5be89u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* d5be89: mov esi, eax */
  esi = eax;
/* d5be8b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5be8e: xor eax, eax */
  eax = 0;
/* d5be90: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5be92: je 0xd5bf29 */
  if (zf) goto L_d5bf29;
L_d5be98: /* d5be98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5be99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5be9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5be9b: mov ecx, 0x14 */
  ecx = 0x14u;
/* d5bea0: mov edi, esi */
  edi = esi;
/* d5bea2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d5bea4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* d5bea8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5beaa: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5beae: je 0xd5beb5 */
  if (zf) goto L_d5beb5;
L_d5beb0: /* d5beb0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* d5beb3: jmp 0xd5beb8 */
  goto L_d5beb8;
L_d5beb5: /* d5beb5: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
L_d5beb8: /* d5beb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5beba: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* d5bebd: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* d5bec1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* d5bec3: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d5bec7: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* d5beca: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* d5becd: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* d5bed0: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* d5bed3: je 0xd5beda */
  if (zf) goto L_d5beda;
L_d5bed5: /* d5bed5: mov ebp, dword ptr [eax + 0x1c] */
  ebp = R32((uint32_t)(eax + 0x1cu));
/* d5bed8: jmp 0xd5bedd */
  goto L_d5bedd;
L_d5beda: /* d5beda: mov ebp, dword ptr [eax + 0x20] */
  ebp = R32((uint32_t)(eax + 0x20u));
L_d5bedd: /* d5bedd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bedf: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* d5bee2: je 0xd5bee9 */
  if (zf) goto L_d5bee9;
L_d5bee4: /* d5bee4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d5bee7: jmp 0xd5beec */
  goto L_d5beec;
L_d5bee9: /* d5bee9: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
L_d5beec: /* d5beec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5beed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5beee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5beef: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* d5bef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bef3: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5bef6: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* d5befd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5bf00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bf01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bf02: call 0xd510ff */
  esp -= 4; W32(esp, 0xd5bf07u); SPILL(); f_d510ff(); if (g_unwind) return; RELOAD();
/* d5bf07: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bf0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bf0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5bf0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5bf0e: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d5bf11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5bf12: jne 0xd5bf20 */
  if (!zf) goto L_d5bf20;
L_d5bf14: /* d5bf14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5bf15: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd5bf1bu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d5bf1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bf1e: xor esi, esi */
  esi = 0;
L_d5bf20: /* d5bf20: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* d5bf27: mov eax, esi */
  eax = esi;
L_d5bf29: /* d5bf29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5bf2a: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bf60(void) {
  LOAD_REGS();
L_d5bf60: /* d5bf60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5bf61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5bf65: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d5bf68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bf6a: je 0xd5bf72 */
  if (zf) goto L_d5bf72;
L_d5bf6c: /* d5bf6c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5bf6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5bf6f: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xd5bf72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5bf72: /* d5bf72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5bf73: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd5bf79u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d5bf79: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bf7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5bf7d: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bf90(void) {
  LOAD_REGS();
L_d5bf90: /* d5bf90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5bf94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bf96: je 0xd5bfad */
  if (zf) goto L_d5bfad;
L_d5bf98: /* d5bf98: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* d5bf9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bf9d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d5bfa1: je 0xd5bfa8 */
  if (zf) goto L_d5bfa8;
L_d5bfa3: /* d5bfa3: jmp 0xd515fa */
  SPILL(); f_d515fa(); return;
L_d5bfa8: /* d5bfa8: jmp 0xd51703 */
  SPILL(); f_d51703(); return;
L_d5bfad: /* d5bfad: ret  */
  esp += 4; SPILL(); return;
}

void f_d5bfc0(void) {
  LOAD_REGS();
L_d5bfc0: /* d5bfc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5bfc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bfc6: je 0xd5bff7 */
  if (zf) goto L_d5bff7;
L_d5bfc8: /* d5bfc8: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* d5bfcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5bfcd: je 0xd5bff8 */
  if (zf) goto L_d5bff8;
L_d5bfcf: /* d5bfcf: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d5bfd2: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* d5bfd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5bfd6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* d5bfd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bfd9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bfdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bfde: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d5bfe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bfe3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5bfe7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bfe8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d5bfec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5bfed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5bfee: call 0xd5aff0 */
  esp -= 4; W32(esp, 0xd5bff3u); SPILL(); f_d5aff0(); if (g_unwind) return; RELOAD();
/* d5bff3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5bff6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d5bff7: /* d5bff7: ret  */
  esp += 4; SPILL(); return;
L_d5bff8: /* d5bff8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d5bffc: jmp 0xd51889 */
  SPILL(); f_d51889(); return;
}

void f_d5c030(void) {
  LOAD_REGS();
L_d5c030: /* d5c030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c034: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c036: jne 0xd5c039 */
  if (!zf) goto L_d5c039;
L_d5c038: /* d5c038: ret  */
  esp += 4; SPILL(); return;
L_d5c039: /* d5c039: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* d5c03c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c03e: je 0xd5c049 */
  if (zf) goto L_d5c049;
L_d5c040: /* d5c040: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d5c044: jmp 0xd51555 */
  SPILL(); f_d51555(); return;
L_d5c049: /* d5c049: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d5c04d: jmp 0xd5102d */
  SPILL(); f_d5102d(); return;
}

void f_d5c070(void) {
  LOAD_REGS();
L_d5c070: /* d5c070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c076: je 0xd5c09b */
  if (zf) goto L_d5c09b;
L_d5c078: /* d5c078: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* d5c07b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c07d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5c07f: je 0xd5c08b */
  if (zf) goto L_d5c08b;
L_d5c081: /* d5c081: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* d5c084: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5c086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c087: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xd5c08au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5c08a: ret  */
  esp += 4; SPILL(); return;
L_d5c08b: /* d5c08b: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* d5c08e: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* d5c091: mov eax, dword ptr [eax + edx*4 - 4] */
  eax = R32((uint32_t)(eax + edx*4 + 0xfffffffcu));
/* d5c095: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5c097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c098: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xd5c09bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5c09b: /* d5c09b: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c0b0(void) {
  LOAD_REGS();
L_d5c0b0: /* d5c0b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5c0b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c0b2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* d5c0b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5c0b7: mov eax, esi */
  eax = esi;
/* d5c0b9: call 0xd5ad00 */
  esp -= 4; W32(esp, 0xd5c0beu); SPILL(); f_d5ad00(); if (g_unwind) return; RELOAD();
/* d5c0be: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5c0c0: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* d5c0c4: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d5c0c8: jne 0xd5c0d5 */
  if (!zf) goto L_d5c0d5;
L_d5c0ca: /* d5c0ca: mov eax, edi */
  eax = edi;
/* d5c0cc: call 0xd5ad00 */
  esp -= 4; W32(esp, 0xd5c0d1u); SPILL(); f_d5ad00(); if (g_unwind) return; RELOAD();
/* d5c0d1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5c0d3: je 0xd5c0dc */
  if (zf) goto L_d5c0dc;
L_d5c0d5: /* d5c0d5: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* d5c0d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c0da: je 0xd5c0f5 */
  if (zf) goto L_d5c0f5;
L_d5c0dc: /* d5c0dc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d5c0e0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5c0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c0e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5c0e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c0e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5c0e9: call 0xd5172b */
  esp -= 4; W32(esp, 0xd5c0eeu); SPILL(); f_d5172b(); if (g_unwind) return; RELOAD();
/* d5c0ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c0f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5c0f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c0f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5c0f4: ret  */
  esp += 4; SPILL(); return;
L_d5c0f5: /* d5c0f5: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d5c0f9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d5c0fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5c0fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c0ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5c100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c101: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5c102: call 0xd51bea */
  esp -= 4; W32(esp, 0xd5c107u); SPILL(); f_d51bea(); if (g_unwind) return; RELOAD();
/* d5c107: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c10a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5c10b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c10c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5c10d: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c130(void) {
  LOAD_REGS();
L_d5c130: /* d5c130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c131: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5c135: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c137: je 0xd5c162 */
  if (zf) goto L_d5c162;
L_d5c139: /* d5c139: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* d5c13c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c13e: je 0xd5c159 */
  if (zf) goto L_d5c159;
L_d5c140: /* d5c140: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d5c143: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c145: je 0xd5c14d */
  if (zf) goto L_d5c14d;
L_d5c147: /* d5c147: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5c149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c14a: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xd5c14du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d5c14d: /* d5c14d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c14e: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd5c154u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d5c154: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c158: ret  */
  esp += 4; SPILL(); return;
L_d5c159: /* d5c159: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c15a: call 0xd512da */
  esp -= 4; W32(esp, 0xd5c15fu); SPILL(); f_d512da(); if (g_unwind) return; RELOAD();
/* d5c15f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5c162: /* d5c162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c163: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c180(void) {
  LOAD_REGS();
L_d5c180: /* d5c180: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5c184: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c1a0(void) {
  LOAD_REGS();
L_d5c1a0: /* d5c1a0: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c1c0(void) {
  LOAD_REGS();
L_d5c1c0: /* d5c1c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5c1c2: push 0xd65559 */
  { uint32_t v = 0xd65559u; esp -= 4; W32(esp, v); }
/* d5c1c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5c1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c1ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5c1d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c1d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c1d7: mov esi, ecx */
  esi = ecx;
/* d5c1d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d5c1dd: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd5c1e3u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d5c1e3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5c1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c1e8: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* d5c1eb: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d5c1f3: mov dword ptr [esi], 0xd6c2fc */
  W32((uint32_t)(esi), 0xd6c2fcu);
/* d5c1f9: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5c1ffu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5c1ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5c203: mov eax, esi */
  eax = esi;
/* d5c205: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c206: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5c20d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c210: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c240(void) {
  LOAD_REGS();
L_d5c240: /* d5c240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5c242: push 0xd65579 */
  { uint32_t v = 0xd65579u; esp -= 4; W32(esp, v); }
/* d5c247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5c24d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c24e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5c255: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c257: mov esi, ecx */
  esi = ecx;
/* d5c259: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d5c25d: mov dword ptr [esi], 0xd6c2fc */
  W32((uint32_t)(esi), 0xd6c2fcu);
/* d5c263: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* d5c266: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5c26e: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5c274u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5c274: mov ecx, esi */
  ecx = esi;
/* d5c276: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d5c27e: call dword ptr [0xd7a620] */
  esp -= 4; W32(esp, 0xd5c284u); SPILL(); f_41aa26(); if (g_unwind) return; /* MSVCR70!??1exception@@UAE@XZ */ RELOAD();
/* d5c284: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5c288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c289: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5c290: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c293: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c2c0(void) {
  LOAD_REGS();
L_d5c2c0: /* d5c2c0: cmp dword ptr [ecx + 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5c2c4: jb 0xd5c2ca */
  if (cf) goto L_d5c2ca;
L_d5c2c6: /* d5c2c6: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* d5c2c9: ret  */
  esp += 4; SPILL(); return;
L_d5c2ca: /* d5c2ca: lea eax, [ecx + 0x10] */
  eax = (uint32_t)(ecx + 0x10u);
/* d5c2cd: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c2e0(void) {
  LOAD_REGS();
L_d5c2e0: /* d5c2e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c2e1: mov esi, ecx */
  esi = ecx;
/* d5c2e3: call 0xd510b9 */
  esp -= 4; W32(esp, 0xd5c2e8u); SPILL(); f_d510b9(); if (g_unwind) return; RELOAD();
/* d5c2e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5c2ed: je 0xd5c2f8 */
  if (zf) goto L_d5c2f8;
L_d5c2ef: /* d5c2ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c2f0: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5c2f5u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5c2f5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5c2f8: /* d5c2f8: mov eax, esi */
  eax = esi;
/* d5c2fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c2fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c310(void) {
  LOAD_REGS();
L_d5c310: /* d5c310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c316: mov esi, ecx */
  esi = ecx;
/* d5c318: call 0xd511b3 */
  esp -= 4; W32(esp, 0xd5c31du); SPILL(); f_d511b3(); if (g_unwind) return; RELOAD();
/* d5c31d: mov dword ptr [esi], 0xd6c308 */
  W32((uint32_t)(esi), 0xd6c308u);
/* d5c323: mov eax, esi */
  eax = esi;
/* d5c325: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c326: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c340(void) {
  LOAD_REGS();
L_d5c340: /* d5c340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c341: mov esi, ecx */
  esi = ecx;
/* d5c343: call 0xd51393 */
  esp -= 4; W32(esp, 0xd5c348u); SPILL(); f_d51393(); if (g_unwind) return; RELOAD();
/* d5c348: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5c34d: je 0xd5c358 */
  if (zf) goto L_d5c358;
L_d5c34f: /* d5c34f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c350: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5c355u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5c355: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5c358: /* d5c358: mov eax, esi */
  eax = esi;
/* d5c35a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c35b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c370(void) {
  LOAD_REGS();
L_d5c370: /* d5c370: mov dword ptr [ecx], 0xd6c308 */
  W32((uint32_t)(ecx), 0xd6c308u);
/* d5c376: jmp 0xd510b9 */
  SPILL(); f_d510b9(); return;
}

void f_d5c390(void) {
  LOAD_REGS();
L_d5c390: /* d5c390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c396: mov esi, ecx */
  esi = ecx;
/* d5c398: call 0xd511b3 */
  esp -= 4; W32(esp, 0xd5c39du); SPILL(); f_d511b3(); if (g_unwind) return; RELOAD();
/* d5c39d: mov dword ptr [esi], 0xd6c314 */
  W32((uint32_t)(esi), 0xd6c314u);
/* d5c3a3: mov eax, esi */
  eax = esi;
/* d5c3a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c3a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c3c0(void) {
  LOAD_REGS();
L_d5c3c0: /* d5c3c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c3c1: mov esi, ecx */
  esi = ecx;
/* d5c3c3: call 0xd515b9 */
  esp -= 4; W32(esp, 0xd5c3c8u); SPILL(); f_d515b9(); if (g_unwind) return; RELOAD();
/* d5c3c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5c3cd: je 0xd5c3d8 */
  if (zf) goto L_d5c3d8;
L_d5c3cf: /* d5c3cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c3d0: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5c3d5u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5c3d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5c3d8: /* d5c3d8: mov eax, esi */
  eax = esi;
/* d5c3da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c3db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c3f0(void) {
  LOAD_REGS();
L_d5c3f0: /* d5c3f0: mov dword ptr [ecx], 0xd6c314 */
  W32((uint32_t)(ecx), 0xd6c314u);
/* d5c3f6: jmp 0xd510b9 */
  SPILL(); f_d510b9(); return;
}

void f_d5c410(void) {
  LOAD_REGS();
L_d5c410: /* d5c410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c414: mov dword ptr [eax + 0x44], 0 */
  W32((uint32_t)(eax + 0x44u), 0x0u);
/* d5c41b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c430(void) {
  LOAD_REGS();
L_d5c430: /* d5c430: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5c432: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c450(void) {
  LOAD_REGS();
L_d5c450: /* d5c450: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5c452: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c470(void) {
  LOAD_REGS();
L_d5c470: /* d5c470: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c490(void) {
  LOAD_REGS();
L_d5c490: /* d5c490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c491: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c492: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d5c496: push 0xd79bb0 */
  { uint32_t v = 0xd79bb0u; esp -= 4; W32(esp, v); }
/* d5c49b: mov ecx, esi */
  ecx = esi;
/* d5c49d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d5c4a5: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5c4abu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5c4ab: mov eax, esi */
  eax = esi;
/* d5c4ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c4ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5c4af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c4d0(void) {
  LOAD_REGS();
L_d5c4d0: /* d5c4d0: xor eax, eax */
  eax = 0;
/* d5c4d2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c4f0(void) {
  LOAD_REGS();
L_d5c4f0: /* d5c4f0: xor eax, eax */
  eax = 0;
/* d5c4f2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c510(void) {
  LOAD_REGS();
L_d5c510: /* d5c510: xor eax, eax */
  eax = 0;
/* d5c512: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c530(void) {
  LOAD_REGS();
L_d5c530: /* d5c530: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c550(void) {
  LOAD_REGS();
L_d5c550: /* d5c550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5c552: push 0xd655b1 */
  { uint32_t v = 0xd655b1u; esp -= 4; W32(esp, v); }
/* d5c557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5c55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c55e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5c565: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5c568: xor eax, eax */
  eax = 0;
/* d5c56a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c56b: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d5c56f: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* d5c573: xor ecx, ecx */
  ecx = 0;
/* d5c575: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5c577: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* d5c57f: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* d5c583: jbe 0xd5c5b2 */
  if ((cf | zf)) goto L_d5c5b2;
L_d5c585: /* d5c585: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5c586: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* d5c58a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5c58b: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* d5c58f: nop  */
L_d5c590: /* d5c590: cmp ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5c593: mov edx, edi */
  edx = edi;
/* d5c595: jae 0xd5c59b */
  if (!cf) goto L_d5c59b;
L_d5c597: /* d5c597: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
L_d5c59b: /* d5c59b: movsx edx, byte ptr [edx + eax] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + eax)));
/* d5c59f: imul ecx, ecx, 0x83 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x83u);
  ecx = (uint32_t)r;
  }
/* d5c5a5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5c5a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5c5a8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5c5aa: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* d5c5ae: jb 0xd5c590 */
  if (cf) goto L_d5c590;
L_d5c5b0: /* d5c5b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5c5b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_d5c5b2: /* d5c5b2: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* d5c5b6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d5c5b8: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d5c5bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c5bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c5be: call 0xd51037 */
  esp -= 4; W32(esp, 0xd5c5c3u); SPILL(); f_d51037(); if (g_unwind) return; RELOAD();
/* d5c5c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c5c6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5c5ca: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* d5c5d2: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* d5c5d7: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5c5ddu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5c5dd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5c5e1: mov eax, esi */
  eax = esi;
/* d5c5e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c5e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5c5eb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c5ee: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_d5c630(void) {
  LOAD_REGS();
L_d5c630: /* d5c630: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d5c633: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c650(void) {
  LOAD_REGS();
L_d5c650: /* d5c650: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5c652: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5c656: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5c658: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d5c65a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5c65c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5c65d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c670(void) {
  LOAD_REGS();
L_d5c670: /* d5c670: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5c672: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d5c676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c677: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d5c679: xor ecx, ecx */
  ecx = 0;
/* d5c67b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5c67d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5c680: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* d5c682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c683: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c6a0(void) {
  LOAD_REGS();
L_d5c6a0: /* d5c6a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5c6a2: push 0xd655d9 */
  { uint32_t v = 0xd655d9u; esp -= 4; W32(esp, v); }
/* d5c6a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5c6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c6ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5c6b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c6b7: mov esi, ecx */
  esi = ecx;
/* d5c6b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d5c6bd: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d5c6c0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5c6c8: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5c6ceu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5c6ce: mov ecx, esi */
  ecx = esi;
/* d5c6d0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d5c6d8: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5c6deu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5c6de: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5c6e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c6e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5c6ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c6ed: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c710(void) {
  LOAD_REGS();
L_d5c710: /* d5c710: mov eax, ecx */
  eax = ecx;
/* d5c712: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c730(void) {
  LOAD_REGS();
L_d5c730: /* d5c730: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5c734: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5c738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c73a: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd5c740u); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5c740: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c743: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5c760(void) {
  LOAD_REGS();
L_d5c760: /* d5c760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5c762: push 0xd655f9 */
  { uint32_t v = 0xd655f9u; esp -= 4; W32(esp, v); }
/* d5c767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5c76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c76e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5c775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c776: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5c77a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5c77b: mov esi, ecx */
  esi = ecx;
/* d5c77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5c77e: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* d5c782: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5c788u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5c788: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5c78c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5c78d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d5c790: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d5c798: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5c79eu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5c79e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5c7a2: mov eax, esi */
  eax = esi;
/* d5c7a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5c7a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5c7ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5c7af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5c7e0(void) {
  LOAD_REGS();
L_d5c7e0: /* d5c7e0: mov eax, ecx */
  eax = ecx;
/* d5c7e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5c7e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5c7e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c800(void) {
  LOAD_REGS();
L_d5c800: /* d5c800: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5c802: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c820(void) {
  LOAD_REGS();
L_d5c820: /* d5c820: mov eax, ecx */
  eax = ecx;
/* d5c822: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5c826: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5c828: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5c840(void) {
  LOAD_REGS();
L_d5c840: /* d5c840: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5c843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c845: jne 0xd5c848 */
  if (!zf) goto L_d5c848;
L_d5c847: /* d5c847: ret  */
  esp += 4; SPILL(); return;
L_d5c848: /* d5c848: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d5c84b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5c84d: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5c852: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5c854: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5c857: mov eax, edx */
  eax = edx;
/* d5c859: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5c85c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5c85e: mov eax, edx */
  eax = edx;
/* d5c860: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c880(void) {
  LOAD_REGS();
L_d5c880: /* d5c880: mov eax, ecx */
  eax = ecx;
/* d5c882: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c8a0(void) {
  LOAD_REGS();
L_d5c8a0: /* d5c8a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5c8a2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c8c0(void) {
  LOAD_REGS();
L_d5c8c0: /* d5c8c0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5c8c3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5c8c5: jne 0xd5c8ca */
  if (!zf) goto L_d5c8ca;
L_d5c8c7: /* d5c8c7: xor eax, eax */
  eax = 0;
/* d5c8c9: ret  */
  esp += 4; SPILL(); return;
L_d5c8ca: /* d5c8ca: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* d5c8cd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5c8cf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5c8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c8f0(void) {
  LOAD_REGS();
L_d5c8f0: /* d5c8f0: mov eax, ecx */
  eax = ecx;
/* d5c8f2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c910(void) {
  LOAD_REGS();
L_d5c910: /* d5c910: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5c912: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c930(void) {
  LOAD_REGS();
L_d5c930: /* d5c930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c934: add eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5c937: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c950(void) {
  LOAD_REGS();
L_d5c950: /* d5c950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c954: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c970(void) {
  LOAD_REGS();
L_d5c970: /* d5c970: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c974: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5c977: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c990(void) {
  LOAD_REGS();
L_d5c990: /* d5c990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c994: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5c997: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c9b0(void) {
  LOAD_REGS();
L_d5c9b0: /* d5c9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c9b4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5c9b7: ret  */
  esp += 4; SPILL(); return;
}

void f_d5c9d0(void) {
  LOAD_REGS();
L_d5c9d0: /* d5c9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5c9d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5c9d6: mov dl, byte ptr [ecx + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5c9d9: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5c9db: jne 0xd5c9eb */
  if (!zf) goto L_d5c9eb;
L_d5c9dd: /* d5c9dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5c9e0: /* d5c9e0: mov eax, ecx */
  eax = ecx;
/* d5c9e2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5c9e4: mov dl, byte ptr [ecx + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5c9e7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5c9e9: je 0xd5c9e0 */
  if (zf) goto L_d5c9e0;
L_d5c9eb: /* d5c9eb: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ca00(void) {
  LOAD_REGS();
L_d5ca00: /* d5ca00: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5ca03: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ca06: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ca20(void) {
  LOAD_REGS();
L_d5ca20: /* d5ca20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5ca24: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ca40(void) {
  LOAD_REGS();
L_d5ca40: /* d5ca40: mov eax, ecx */
  eax = ecx;
/* d5ca42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5ca60(void) {
  LOAD_REGS();
L_d5ca60: /* d5ca60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5ca64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ca65: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5ca6au); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5ca6a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5ca6b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5ca80(void) {
  LOAD_REGS();
L_d5ca80: /* d5ca80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5ca82: push 0xd65622 */
  { uint32_t v = 0xd65622u; esp -= 4; W32(esp, v); }
/* d5ca87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5ca8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ca8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5ca95: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ca98: push 0xd77f84 */
  { uint32_t v = 0xd77f84u; esp -= 4; W32(esp, v); }
/* d5ca9d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d5caa1: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5caa7u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5caa7: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5caab: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d5cab3: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd5cab9u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d5cab9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* d5cabd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5cabe: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5cac2: mov byte ptr [esp + 0x50], 1 */
  W8((uint32_t)(esp + 0x50u), 0x1u);
/* d5cac7: mov dword ptr [esp + 0x20], 0xd6c2fc */
  W32((uint32_t)(esp + 0x20u), 0xd6c2fcu);
/* d5cacf: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5cad5u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5cad5: push 0xd6d4a8 */
  { uint32_t v = 0xd6d4a8u; esp -= 4; W32(esp, v); }
/* d5cada: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5cade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5cadf: mov byte ptr [esp + 0x54], 0 */
  W8((uint32_t)(esp + 0x54u), 0x0u);
/* d5cae4: mov dword ptr [esp + 0x24], 0xd6c308 */
  W32((uint32_t)(esp + 0x24u), 0xd6c308u);
/* d5caec: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5caf1u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5caf1: guest_badaddr(0xd5caf1); return;
}

void f_d5cb20(void) {
  LOAD_REGS();
L_d5cb20: /* d5cb20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5cb22: push 0xd65649 */
  { uint32_t v = 0xd65649u; esp -= 4; W32(esp, v); }
/* d5cb27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5cb2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5cb2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5cb35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5cb36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5cb37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5cb38: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* d5cb3c: mov esi, ecx */
  esi = ecx;
/* d5cb3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5cb3f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d5cb43: call dword ptr [0xd7a618] */
  esp -= 4; W32(esp, 0xd5cb49u); SPILL(); f_41a9dc(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */ RELOAD();
/* d5cb49: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5cb4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5cb4d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* d5cb50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d5cb58: mov dword ptr [esi], 0xd6c2fc */
  W32((uint32_t)(esi), 0xd6c2fcu);
/* d5cb5e: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5cb64u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5cb64: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5cb68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5cb69: mov eax, esi */
  eax = esi;
/* d5cb6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5cb6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5cb73: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5cb76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cba0(void) {
  LOAD_REGS();
L_d5cba0: /* d5cba0: mov eax, ecx */
  eax = ecx;
/* d5cba2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cbc0(void) {
  LOAD_REGS();
L_d5cbc0: /* d5cbc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cbc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5cbc5: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5cbcau); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5cbca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5cbcb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5cbe0(void) {
  LOAD_REGS();
L_d5cbe0: /* d5cbe0: mov eax, ecx */
  eax = ecx;
/* d5cbe2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5cbe6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5cbe8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cc00(void) {
  LOAD_REGS();
L_d5cc00: /* d5cc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cc04: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5cc06: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d5cc08: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5cc0a: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5cc0f: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5cc11: mov eax, edx */
  eax = edx;
/* d5cc13: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5cc16: mov ecx, eax */
  ecx = eax;
/* d5cc18: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5cc1b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5cc1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cc30(void) {
  LOAD_REGS();
L_d5cc30: /* d5cc30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5cc32: push 0xd65672 */
  { uint32_t v = 0xd65672u; esp -= 4; W32(esp, v); }
/* d5cc37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5cc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5cc3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5cc45: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5cc48: push 0xd77f84 */
  { uint32_t v = 0xd77f84u; esp -= 4; W32(esp, v); }
/* d5cc4d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d5cc51: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5cc57u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5cc57: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5cc5b: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d5cc63: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd5cc69u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d5cc69: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* d5cc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5cc6e: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5cc72: mov byte ptr [esp + 0x50], 1 */
  W8((uint32_t)(esp + 0x50u), 0x1u);
/* d5cc77: mov dword ptr [esp + 0x20], 0xd6c2fc */
  W32((uint32_t)(esp + 0x20u), 0xd6c2fcu);
/* d5cc7f: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5cc85u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5cc85: push 0xd6d4a8 */
  { uint32_t v = 0xd6d4a8u; esp -= 4; W32(esp, v); }
/* d5cc8a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5cc8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5cc8f: mov byte ptr [esp + 0x54], 0 */
  W8((uint32_t)(esp + 0x54u), 0x0u);
/* d5cc94: mov dword ptr [esp + 0x24], 0xd6c308 */
  W32((uint32_t)(esp + 0x24u), 0xd6c308u);
/* d5cc9c: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5cca1u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5cca1: guest_badaddr(0xd5cca1); return;
}

void f_d5ccd0(void) {
  LOAD_REGS();
L_d5ccd0: /* d5ccd0: mov eax, ecx */
  eax = ecx;
/* d5ccd2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5ccf0(void) {
  LOAD_REGS();
L_d5ccf0: /* d5ccf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5ccf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ccf5: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5ccfau); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5ccfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5ccfb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5cd10(void) {
  LOAD_REGS();
L_d5cd10: /* d5cd10: mov eax, ecx */
  eax = ecx;
/* d5cd12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5cd16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5cd18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cd30(void) {
  LOAD_REGS();
L_d5cd30: /* d5cd30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5cd32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5cd36: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5cd38: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5cd3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cd50(void) {
  LOAD_REGS();
L_d5cd50: /* d5cd50: mov eax, ecx */
  eax = ecx;
/* d5cd52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5cd56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5cd58: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5cd5c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5cd5e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* d5cd60: mov byte ptr [eax + 4], dl */
  W8((uint32_t)(eax + 0x4u), (edx & 0xffu));
/* d5cd63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5cd80(void) {
  LOAD_REGS();
L_d5cd80: /* d5cd80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cd84: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5cd87: ret  */
  esp += 4; SPILL(); return;
}

void f_d5cda0(void) {
  LOAD_REGS();
L_d5cda0: /* d5cda0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d5cda4: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* d5cda7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5cda8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5cda9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d5cdab: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* d5cdae: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d5cdb0: mov bl, byte ptr [esi + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5cdb3: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5cdb5: jne 0xd5cdba */
  if (!zf) goto L_d5cdba;
L_d5cdb7: /* d5cdb7: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
L_d5cdba: /* d5cdba: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* d5cdbd: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d5cdc0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5cdc3: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5cdc6: jne 0xd5cdd5 */
  if (!zf) goto L_d5cdd5;
L_d5cdc8: /* d5cdc8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* d5cdcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5cdcc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5cdce: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5cdd1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5cdd2: ret 4 */
  esp += 8; SPILL(); return;
L_d5cdd5: /* d5cdd5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* d5cdd8: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5cdda: jne 0xd5cde8 */
  if (!zf) goto L_d5cde8;
L_d5cddc: /* d5cddc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5cdde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5cddf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5cde1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5cde4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5cde5: ret 4 */
  esp += 8; SPILL(); return;
L_d5cde8: /* d5cde8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* d5cdeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5cdec: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5cdee: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5cdf1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5cdf2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5ce20(void) {
  LOAD_REGS();
L_d5ce20: /* d5ce20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5ce23: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ce26: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ce40(void) {
  LOAD_REGS();
L_d5ce40: /* d5ce40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5ce43: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ce46: ret  */
  esp += 4; SPILL(); return;
}

void f_d5ce60(void) {
  LOAD_REGS();
L_d5ce60: /* d5ce60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d5ce64: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d5ce66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ce67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ce68: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* d5ce6b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* d5ce6d: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* d5ce70: mov bl, byte ptr [esi + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5ce73: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ce75: jne 0xd5ce7a */
  if (!zf) goto L_d5ce7a;
L_d5ce77: /* d5ce77: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
L_d5ce7a: /* d5ce7a: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* d5ce7d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d5ce80: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5ce83: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5ce86: jne 0xd5ce96 */
  if (!zf) goto L_d5ce96;
L_d5ce88: /* d5ce88: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* d5ce8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ce8c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d5ce8f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5ce92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ce93: ret 4 */
  esp += 8; SPILL(); return;
L_d5ce96: /* d5ce96: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* d5ce99: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5ce9c: jne 0xd5ceac */
  if (!zf) goto L_d5ceac;
L_d5ce9e: /* d5ce9e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* d5cea1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5cea2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d5cea5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5cea8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5cea9: ret 4 */
  esp += 8; SPILL(); return;
L_d5ceac: /* d5ceac: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5ceae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ceaf: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d5ceb2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* d5ceb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ceb6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cee0(void) {
  LOAD_REGS();
L_d5cee0: /* d5cee0: mov eax, 0x38e38e3 */
  eax = 0x38e38e3u;
/* d5cee5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5cf00(void) {
  LOAD_REGS();
L_d5cf00: /* d5cf00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5cf02: ret  */
  esp += 4; SPILL(); return;
}

void f_d5cf20(void) {
  LOAD_REGS();
L_d5cf20: /* d5cf20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5cf24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d5cf26: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5cf29: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5cf2c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5cf2e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cf32: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5cf34: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5cf50(void) {
  LOAD_REGS();
L_d5cf50: /* d5cf50: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* d5cf55: ret  */
  esp += 4; SPILL(); return;
}

void f_d5cf70(void) {
  LOAD_REGS();
L_d5cf70: /* d5cf70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5cf72: ret  */
  esp += 4; SPILL(); return;
}

void f_d5cf90(void) {
  LOAD_REGS();
L_d5cf90: /* d5cf90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5cf94: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d5cf96: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* d5cf9d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cfa1: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5cfa3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5cfa5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5cfc0(void) {
  LOAD_REGS();
L_d5cfc0: /* d5cfc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cfc4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5cfe0(void) {
  LOAD_REGS();
L_d5cfe0: /* d5cfe0: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* d5cfe2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5cfe6: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* d5cfe8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d000(void) {
  LOAD_REGS();
L_d5d000: /* d5d000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d004: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d5d007: mov dl, byte ptr [ecx + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5d00a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d00c: jne 0xd5d01c */
  if (!zf) goto L_d5d01c;
L_d5d00e: /* d5d00e: mov edi, edi */
  edi = edi;
L_d5d010: /* d5d010: mov eax, ecx */
  eax = ecx;
/* d5d012: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d5d015: mov dl, byte ptr [ecx + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5d018: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d01a: je 0xd5d010 */
  if (zf) goto L_d5d010;
L_d5d01c: /* d5d01c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d030(void) {
  LOAD_REGS();
L_d5d030: /* d5d030: mov eax, 0x4924924 */
  eax = 0x4924924u;
/* d5d035: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d050(void) {
  LOAD_REGS();
L_d5d050: /* d5d050: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d052: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5d056: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5d058: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d5d05a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5d05c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5d05d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d070(void) {
  LOAD_REGS();
L_d5d070: /* d5d070: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d072: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5d076: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5d078: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d5d07a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d5d07c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5d07d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d090(void) {
  LOAD_REGS();
L_d5d090: /* d5d090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5d092: push 0xd65699 */
  { uint32_t v = 0xd65699u; esp -= 4; W32(esp, v); }
/* d5d097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5d09d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d09e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5d0a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d0a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d0a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5d0a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* d5d0ac: mov esi, ecx */
  esi = ecx;
/* d5d0ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5d0af: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d5d0b3: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5d0b9u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5d0b9: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5d0bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5d0bd: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d5d0c0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d5d0c8: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5d0ceu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5d0ce: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5d0d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5d0d3: mov eax, esi */
  eax = esi;
/* d5d0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d0d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5d0dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d0e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d110(void) {
  LOAD_REGS();
L_d5d110: /* d5d110: mov eax, ecx */
  eax = ecx;
/* d5d112: mov cl, byte ptr [esp + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* d5d116: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* d5d118: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d130(void) {
  LOAD_REGS();
L_d5d130: /* d5d130: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d150(void) {
  LOAD_REGS();
L_d5d150: /* d5d150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d154: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5d157: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5d15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d15b: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d160u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d160: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d163: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d180(void) {
  LOAD_REGS();
L_d5d180: /* d5d180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d184: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* d5d18b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d18c: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d191u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d191: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d194: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d1b0(void) {
  LOAD_REGS();
L_d5d1b0: /* d5d1b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d1b4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d5d1b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d1b7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d5d1bb: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* d5d1bd: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* d5d1bf: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* d5d1c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d1c2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d1e0(void) {
  LOAD_REGS();
L_d5d1e0: /* d5d1e0: mov eax, ecx */
  eax = ecx;
/* d5d1e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d200(void) {
  LOAD_REGS();
L_d5d200: /* d5d200: mov eax, ecx */
  eax = ecx;
/* d5d202: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d220(void) {
  LOAD_REGS();
L_d5d220: /* d5d220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d224: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5d227: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5d22a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d22b: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d230u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d233: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d250(void) {
  LOAD_REGS();
L_d5d250: /* d5d250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d254: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5d256: je 0xd5d260 */
  if (zf) goto L_d5d260;
L_d5d258: /* d5d258: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5d25c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d25e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5d260: /* d5d260: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d280(void) {
  LOAD_REGS();
L_d5d280: /* d5d280: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5d283: jmp 0xd515b4 */
  SPILL(); f_d515b4(); return;
}

void f_d5d2a0(void) {
  LOAD_REGS();
L_d5d2a0: /* d5d2a0: mov eax, ecx */
  eax = ecx;
/* d5d2a2: add dword ptr [eax], 0x48 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* d5d2a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d2c0(void) {
  LOAD_REGS();
L_d5d2c0: /* d5d2c0: mov eax, ecx */
  eax = ecx;
/* d5d2c2: add dword ptr [eax], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* d5d2c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d2e0(void) {
  LOAD_REGS();
L_d5d2e0: /* d5d2e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d2e1: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d2e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d2e6: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d300(void) {
  LOAD_REGS();
L_d5d300: /* d5d300: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d301: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d305: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d306: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d320(void) {
  LOAD_REGS();
L_d5d320: /* d5d320: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d321: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d325: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d326: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d340(void) {
  LOAD_REGS();
L_d5d340: /* d5d340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d341: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d345: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d346: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d360(void) {
  LOAD_REGS();
L_d5d360: /* d5d360: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d361: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d365: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d366: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d380(void) {
  LOAD_REGS();
L_d5d380: /* d5d380: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d381: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d5d385: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5d386: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d3a0(void) {
  LOAD_REGS();
L_d5d3a0: /* d5d3a0: mov eax, ecx */
  eax = ecx;
/* d5d3a2: add dword ptr [eax], -0x48 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffb8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* d5d3a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d3c0(void) {
  LOAD_REGS();
L_d5d3c0: /* d5d3c0: mov eax, ecx */
  eax = ecx;
/* d5d3c2: add dword ptr [eax], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* d5d3c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d3e0(void) {
  LOAD_REGS();
L_d5d3e0: /* d5d3e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d3e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5d3e6: je 0xd5d3f0 */
  if (zf) goto L_d5d3f0;
L_d5d3e8: /* d5d3e8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5d3ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d3ee: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5d3f0: /* d5d3f0: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d410(void) {
  LOAD_REGS();
L_d5d410: /* d5d410: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d430(void) {
  LOAD_REGS();
L_d5d430: /* d5d430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d436: mov esi, ecx */
  esi = ecx;
/* d5d438: call 0xd514dd */
  esp -= 4; W32(esp, 0xd5d43du); SPILL(); f_d514dd(); if (g_unwind) return; RELOAD();
/* d5d43d: mov dword ptr [esi], 0xd6c308 */
  W32((uint32_t)(esi), 0xd6c308u);
/* d5d443: mov eax, esi */
  eax = esi;
/* d5d445: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d446: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d460(void) {
  LOAD_REGS();
L_d5d460: /* d5d460: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5d463: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d467: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5d469: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d480(void) {
  LOAD_REGS();
L_d5d480: /* d5d480: mov eax, ecx */
  eax = ecx;
/* d5d482: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* d5d488: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d4a0(void) {
  LOAD_REGS();
L_d5d4a0: /* d5d4a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d4a4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5d4a7: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d4c0(void) {
  LOAD_REGS();
L_d5d4c0: /* d5d4c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5d4c3: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d4e0(void) {
  LOAD_REGS();
L_d5d4e0: /* d5d4e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d4e2: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d4e5: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d4e7: jne 0xd5d536 */
  if (!zf) goto L_d5d536;
L_d5d4e9: /* d5d4e9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* d5d4ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5d4ed: mov bl, byte ptr [edx + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x45u))) & 0xffu);
/* d5d4f0: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d4f2: jne 0xd5d50f */
  if (!zf) goto L_d5d50f;
L_d5d4f4: /* d5d4f4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d5d4f6: mov bl, byte ptr [eax + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d4f9: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d4fb: jne 0xd5d50b */
  if (!zf) goto L_d5d50b;
L_d5d4fd: /* d5d4fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5d500: /* d5d500: mov edx, eax */
  edx = eax;
/* d5d502: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d5d504: mov bl, byte ptr [eax + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d507: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d509: je 0xd5d500 */
  if (zf) goto L_d5d500;
L_d5d50b: /* d5d50b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d5d50d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5d50e: ret  */
  esp += 4; SPILL(); return;
L_d5d50f: /* d5d50f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5d512: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d515: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d517: jne 0xd5d533 */
  if (!zf) goto L_d5d533;
L_d5d519: /* d5d519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d5d520: /* d5d520: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d522: cmp edx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d525: jne 0xd5d533 */
  if (!zf) goto L_d5d533;
L_d5d527: /* d5d527: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5d529: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5d52c: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d52f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d531: je 0xd5d520 */
  if (zf) goto L_d5d520;
L_d5d533: /* d5d533: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5d535: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d5d536: /* d5d536: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d560(void) {
  LOAD_REGS();
L_d5d560: /* d5d560: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d562: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5d565: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d580(void) {
  LOAD_REGS();
L_d5d580: /* d5d580: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5d583: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d587: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5d589: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d5a0(void) {
  LOAD_REGS();
L_d5d5a0: /* d5d5a0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d5d5a3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d5a7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5d5a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d5c0(void) {
  LOAD_REGS();
L_d5d5c0: /* d5d5c0: mov eax, ecx */
  eax = ecx;
/* d5d5c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d5e0(void) {
  LOAD_REGS();
L_d5d5e0: /* d5d5e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5d5e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d5d5e6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5d5e9: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* d5d5ec: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d5f0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5d5f2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d610(void) {
  LOAD_REGS();
L_d5d610: /* d5d610: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5d613: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d617: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5d619: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d630(void) {
  LOAD_REGS();
L_d5d630: /* d5d630: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d5d633: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d637: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5d639: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d650(void) {
  LOAD_REGS();
L_d5d650: /* d5d650: mov eax, ecx */
  eax = ecx;
/* d5d652: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d670(void) {
  LOAD_REGS();
L_d5d670: /* d5d670: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d672: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5d676: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* d5d679: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d67d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5d67f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d6a0(void) {
  LOAD_REGS();
L_d5d6a0: /* d5d6a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5d6a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d6a4: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d5d6a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5d6a8: mov edi, eax */
  edi = eax;
/* d5d6aa: mov al, byte ptr [esi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5d6ad: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d6af: jne 0xd5d6e0 */
  if (!zf) goto L_d5d6e0;
L_d5d6b1: /* d5d6b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5d6b2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* d5d6b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5d6b7: mov ebp, dword ptr [0xd7a5a4] */
  ebp = R32((uint32_t)(0xd7a5a4u));
/* d5d6bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5d6c0: /* d5d6c0: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* d5d6c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5d6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d6c5: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd5d6c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5d6c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d6ca: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d6cc: je 0xd5d6d3 */
  if (zf) goto L_d5d6d3;
L_d5d6ce: /* d5d6ce: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* d5d6d1: jmp 0xd5d6d7 */
  goto L_d5d6d7;
L_d5d6d3: /* d5d6d3: mov edi, esi */
  edi = esi;
/* d5d6d5: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_d5d6d7: /* d5d6d7: mov al, byte ptr [esi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5d6da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d6dc: je 0xd5d6c0 */
  if (zf) goto L_d5d6c0;
L_d5d6de: /* d5d6de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5d6df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d5d6e0: /* d5d6e0: mov eax, edi */
  eax = edi;
/* d5d6e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5d6e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d6e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d710(void) {
  LOAD_REGS();
L_d5d710: /* d5d710: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d730(void) {
  LOAD_REGS();
L_d5d730: /* d5d730: mov eax, 0x38e38e3 */
  eax = 0x38e38e3u;
/* d5d735: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d750(void) {
  LOAD_REGS();
L_d5d750: /* d5d750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d754: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5d757: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5d75a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d75b: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d760u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d760: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d763: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d780(void) {
  LOAD_REGS();
L_d5d780: /* d5d780: mov eax, ecx */
  eax = ecx;
/* d5d782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5d786: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d788: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5d78a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d7a0(void) {
  LOAD_REGS();
L_d5d7a0: /* d5d7a0: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* d5d7a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d7c0(void) {
  LOAD_REGS();
L_d5d7c0: /* d5d7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d7c4: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* d5d7cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5d7cc: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d7d1u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d7d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d7d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d7f0(void) {
  LOAD_REGS();
L_d5d7f0: /* d5d7f0: mov eax, ecx */
  eax = ecx;
/* d5d7f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5d7f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d7f8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5d7fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d810(void) {
  LOAD_REGS();
L_d5d810: /* d5d810: mov eax, 0x4924924 */
  eax = 0x4924924u;
/* d5d815: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d830(void) {
  LOAD_REGS();
L_d5d830: /* d5d830: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d832: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d835: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d837: je 0xd5d83f */
  if (zf) goto L_d5d83f;
L_d5d839: /* d5d839: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d5d83c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5d83e: ret  */
  esp += 4; SPILL(); return;
L_d5d83f: /* d5d83f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5d841: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5d842: mov bl, byte ptr [edx + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x45u))) & 0xffu);
/* d5d845: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d847: jne 0xd5d863 */
  if (!zf) goto L_d5d863;
L_d5d849: /* d5d849: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* d5d84c: mov bl, byte ptr [eax + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d84f: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d851: jne 0xd5d85f */
  if (!zf) goto L_d5d85f;
L_d5d853: /* d5d853: mov edx, eax */
  edx = eax;
/* d5d855: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* d5d858: mov bl, byte ptr [eax + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d85b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d85d: je 0xd5d853 */
  if (zf) goto L_d5d853;
L_d5d85f: /* d5d85f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d5d861: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5d862: ret  */
  esp += 4; SPILL(); return;
L_d5d863: /* d5d863: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5d866: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d869: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d86b: jne 0xd5d88b */
  if (!zf) goto L_d5d88b;
L_d5d86d: /* d5d86d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5d870: /* d5d870: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d872: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d874: jne 0xd5d882 */
  if (!zf) goto L_d5d882;
L_d5d876: /* d5d876: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5d878: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5d87b: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d87e: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d880: je 0xd5d870 */
  if (zf) goto L_d5d870;
L_d5d882: /* d5d882: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5d885: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5d887: jne 0xd5d88b */
  if (!zf) goto L_d5d88b;
L_d5d889: /* d5d889: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_d5d88b: /* d5d88b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5d88c: ret  */
  esp += 4; SPILL(); return;
}

void f_d5d8b0(void) {
  LOAD_REGS();
L_d5d8b0: /* d5d8b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d8b2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d5d8b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d8b7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d5d8b9: xor ecx, ecx */
  ecx = 0;
/* d5d8bb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d8bd: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5d8c0: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* d5d8c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d8c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d8e0(void) {
  LOAD_REGS();
L_d5d8e0: /* d5d8e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5d8e2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d5d8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d8e7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d5d8e9: xor ecx, ecx */
  ecx = 0;
/* d5d8eb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d8ed: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d5d8f0: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* d5d8f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d8f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5d910(void) {
  LOAD_REGS();
L_d5d910: /* d5d910: mov eax, ecx */
  eax = ecx;
/* d5d912: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5d916: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* d5d918: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* d5d91a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d930(void) {
  LOAD_REGS();
L_d5d930: /* d5d930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d934: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5d937: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5d93a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d93b: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5d940u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5d940: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5d943: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d960(void) {
  LOAD_REGS();
L_d5d960: /* d5d960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d964: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5d968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5d969: mov esi, ecx */
  esi = ecx;
/* d5d96b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5d96f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d5d971: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5d975: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5d978: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5d979: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* d5d97c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d5d97f: call 0xd51a91 */
  esp -= 4; W32(esp, 0xd5d984u); SPILL(); f_d51a91(); if (g_unwind) return; RELOAD();
/* d5d984: mov cl, byte ptr [esp + 0x18] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* d5d988: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* d5d98b: mov byte ptr [esi + 0x45], 0 */
  W8((uint32_t)(esi + 0x45u), 0x0u);
/* d5d98f: mov eax, esi */
  eax = esi;
/* d5d991: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5d992: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_d5d9b0(void) {
  LOAD_REGS();
L_d5d9b0: /* d5d9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d9b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5d9b6: je 0xd5d9c0 */
  if (zf) goto L_d5d9c0;
L_d5d9b8: /* d5d9b8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5d9bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5d9be: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5d9c0: /* d5d9c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5d9e0(void) {
  LOAD_REGS();
L_d5d9e0: /* d5d9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5d9e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5d9e8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d9ea: je 0xd5d9fd */
  if (zf) goto L_d5d9fd;
L_d5d9ec: /* d5d9ec: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5d9f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_d5d9f1: /* d5d9f1: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d5d9f3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5d9f5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5d9f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5d9fa: jne 0xd5d9f1 */
  if (!zf) goto L_d5d9f1;
L_d5d9fc: /* d5d9fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d5d9fd: /* d5d9fd: ret  */
  esp += 4; SPILL(); return;
}

void f_d5da10(void) {
  LOAD_REGS();
L_d5da10: /* d5da10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5da11: mov esi, ecx */
  esi = ecx;
/* d5da13: call 0xd51816 */
  esp -= 4; W32(esp, 0xd5da18u); SPILL(); f_d51816(); if (g_unwind) return; RELOAD();
/* d5da18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5da1d: je 0xd5da28 */
  if (zf) goto L_d5da28;
L_d5da1f: /* d5da1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5da20: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5da25u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5da25: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5da28: /* d5da28: mov eax, esi */
  eax = esi;
/* d5da2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5da2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5da40(void) {
  LOAD_REGS();
L_d5da40: /* d5da40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5da44: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5da48: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5da4a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5da4e: je 0xd5da60 */
  if (zf) goto L_d5da60;
L_d5da50: /* d5da50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_d5da51: /* d5da51: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d5da53: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5da55: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5da58: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5da5b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5da5d: jne 0xd5da51 */
  if (!zf) goto L_d5da51;
L_d5da5f: /* d5da5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d5da60: /* d5da60: ret  */
  esp += 4; SPILL(); return;
}

void f_d5da80(void) {
  LOAD_REGS();
L_d5da80: /* d5da80: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5da84: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5da88: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5da8a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5da8e: je 0xd5daa1 */
  if (zf) goto L_d5daa1;
L_d5da90: /* d5da90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_d5da91: /* d5da91: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* d5da94: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5da97: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5da9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5da9c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* d5da9e: jne 0xd5da91 */
  if (!zf) goto L_d5da91;
L_d5daa0: /* d5daa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d5daa1: /* d5daa1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5daa5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5daa7: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dac0(void) {
  LOAD_REGS();
L_d5dac0: /* d5dac0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5dac4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5dac6: je 0xd5dad0 */
  if (zf) goto L_d5dad0;
L_d5dac8: /* d5dac8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5dacc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5dace: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_d5dad0: /* d5dad0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5daf0(void) {
  LOAD_REGS();
L_d5daf0: /* d5daf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5db10(void) {
  LOAD_REGS();
L_d5db10: /* d5db10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5db14: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5db18: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5db1a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5db1e: je 0xd5db34 */
  if (zf) goto L_d5db34;
L_d5db20: /* d5db20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_d5db21: /* d5db21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5db23: je 0xd5db29 */
  if (zf) goto L_d5db29;
L_d5db25: /* d5db25: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d5db27: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_d5db29: /* d5db29: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5db2c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5db2f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5db31: jne 0xd5db21 */
  if (!zf) goto L_d5db21;
L_d5db33: /* d5db33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d5db34: /* d5db34: ret  */
  esp += 4; SPILL(); return;
}

void f_d5db50(void) {
  LOAD_REGS();
L_d5db50: /* d5db50: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5db53: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5db55: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5db59: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5db5b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5db70(void) {
  LOAD_REGS();
L_d5db70: /* d5db70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5db72: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5db75: ret  */
  esp += 4; SPILL(); return;
}

void f_d5db90(void) {
  LOAD_REGS();
L_d5db90: /* d5db90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5db91: mov esi, ecx */
  esi = ecx;
/* d5db93: call 0xd51339 */
  esp -= 4; W32(esp, 0xd5db98u); SPILL(); f_d51339(); if (g_unwind) return; RELOAD();
/* d5db98: mov eax, esi */
  eax = esi;
/* d5db9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5db9b: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dbb0(void) {
  LOAD_REGS();
L_d5dbb0: /* d5dbb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5dbb4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d5dbb7: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d5dbba: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* d5dbbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5dbd0(void) {
  LOAD_REGS();
L_d5dbd0: /* d5dbd0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5dbd3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5dbd7: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d5dbda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5dbf0(void) {
  LOAD_REGS();
L_d5dbf0: /* d5dbf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5dbf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5dbf5: call 0xd51078 */
  esp -= 4; W32(esp, 0xd5dbfau); SPILL(); f_d51078(); if (g_unwind) return; RELOAD();
/* d5dbfa: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5dbfe: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5dc00: mov eax, ecx */
  eax = ecx;
/* d5dc02: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5dc20(void) {
  LOAD_REGS();
L_d5dc20: /* d5dc20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5dc24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5dc25: mov esi, ecx */
  esi = ecx;
/* d5dc27: xor ecx, ecx */
  ecx = 0;
/* d5dc29: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5dc2b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5dc2e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* d5dc31: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* d5dc34: jne 0xd5dc3c */
  if (!zf) goto L_d5dc3c;
L_d5dc36: /* d5dc36: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d5dc38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dc39: ret 4 */
  esp += 8; SPILL(); return;
L_d5dc3c: /* d5dc3c: cmp eax, 0x38e38e3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38e38e3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5dc41: jbe 0xd5dc50 */
  if ((cf | zf)) goto L_d5dc50;
L_d5dc43: /* d5dc43: mov ecx, esi */
  ecx = esi;
/* d5dc45: call 0xd51046 */
  esp -= 4; W32(esp, 0xd5dc4au); SPILL(); f_d51046(); if (g_unwind) return; RELOAD();
/* d5dc4a: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5dc4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dc4d: ret 4 */
  esp += 8; SPILL(); return;
L_d5dc50: /* d5dc50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5dc51: lea edi, [eax + eax*8] */
  edi = (uint32_t)(eax + eax*8);
/* d5dc54: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* d5dc57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5dc58: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5dc5du); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5dc5d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5dc5f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5dc62: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* d5dc65: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d5dc68: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d5dc6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5dc6c: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5dc6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dc6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5dca0(void) {
  LOAD_REGS();
L_d5dca0: /* d5dca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5dca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5dca5: mov esi, ecx */
  esi = ecx;
/* d5dca7: xor ecx, ecx */
  ecx = 0;
/* d5dca9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5dcab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5dcae: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* d5dcb1: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* d5dcb4: jne 0xd5dcbc */
  if (!zf) goto L_d5dcbc;
L_d5dcb6: /* d5dcb6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d5dcb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dcb9: ret 4 */
  esp += 8; SPILL(); return;
L_d5dcbc: /* d5dcbc: cmp eax, 0x3fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d5dcc1: jbe 0xd5dcd0 */
  if ((cf | zf)) goto L_d5dcd0;
L_d5dcc3: /* d5dcc3: mov ecx, esi */
  ecx = esi;
/* d5dcc5: call 0xd51262 */
  esp -= 4; W32(esp, 0xd5dccau); SPILL(); f_d51262(); if (g_unwind) return; RELOAD();
/* d5dcca: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5dccc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dccd: ret 4 */
  esp += 8; SPILL(); return;
L_d5dcd0: /* d5dcd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5dcd1: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* d5dcd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5dcd9: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5dcdeu); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5dcde: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5dce0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5dce3: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* d5dce6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d5dce9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d5dcec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5dced: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5dcef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dcf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5dd20(void) {
  LOAD_REGS();
L_d5dd20: /* d5dd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5dd21: mov esi, ecx */
  esi = ecx;
/* d5dd23: call 0xd511ae */
  esp -= 4; W32(esp, 0xd5dd28u); SPILL(); f_d511ae(); if (g_unwind) return; RELOAD();
/* d5dd28: mov eax, esi */
  eax = esi;
/* d5dd2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5dd2b: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dd40(void) {
  LOAD_REGS();
L_d5dd40: /* d5dd40: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* d5dd42: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5dd47u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5dd47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5dd4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5dd4c: je 0xd5dd54 */
  if (zf) goto L_d5dd54;
L_d5dd4e: /* d5dd4e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_d5dd54: /* d5dd54: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* d5dd57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5dd59: je 0xd5dd61 */
  if (zf) goto L_d5dd61;
L_d5dd5b: /* d5dd5b: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_d5dd61: /* d5dd61: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* d5dd64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5dd66: je 0xd5dd6e */
  if (zf) goto L_d5dd6e;
L_d5dd68: /* d5dd68: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_d5dd6e: /* d5dd6e: mov byte ptr [eax + 0x44], 1 */
  W8((uint32_t)(eax + 0x44u), 0x1u);
/* d5dd72: mov byte ptr [eax + 0x45], 0 */
  W8((uint32_t)(eax + 0x45u), 0x0u);
/* d5dd76: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dd90(void) {
  LOAD_REGS();
L_d5dd90: /* d5dd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5dd91: mov ebp, esp */
  ebp = esp;
/* d5dd93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5dd95: push 0xd656c1 */
  { uint32_t v = 0xd656c1u; esp -= 4; W32(esp, v); }
/* d5dd9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5dda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5dda1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5dda8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ddab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ddac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ddad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ddae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d5ddb1: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* d5ddb3: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5ddb8u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5ddb8: mov esi, eax */
  esi = eax;
/* d5ddba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ddbd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d5ddc0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d5ddc7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d5ddca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ddcc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d5ddd0: je 0xd5ddf9 */
  if (zf) goto L_d5ddf9;
L_d5ddd2: /* d5ddd2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d5ddd5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d5ddd8: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* d5dddb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d5dddd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* d5dde0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d5dde3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5dde4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* d5dde7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d5ddea: call 0xd51a91 */
  esp -= 4; W32(esp, 0xd5ddefu); SPILL(); f_d51a91(); if (g_unwind) return; RELOAD();
/* d5ddef: mov cl, byte ptr [ebp + 0x18] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x18u))) & 0xffu);
/* d5ddf2: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* d5ddf5: mov byte ptr [esi + 0x45], 0 */
  W8((uint32_t)(esi + 0x45u), 0x0u);
L_d5ddf9: /* d5ddf9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5ddfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ddfd: mov eax, esi */
  eax = esi;
/* d5ddff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5de00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5de07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5de08: mov esp, ebp */
  esp = ebp;
/* d5de0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5de0b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_d5de0e(void) {
  LOAD_REGS();
L_d5de0e: /* d5de0e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d5de11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5de12: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5de17u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5de17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5de1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5de1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5de1e: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5de23u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5de23: guest_badaddr(0xd5de23); return;
}

void f_d5de60(void) {
  LOAD_REGS();
L_d5de60: /* d5de60: mov eax, ecx */
  eax = ecx;
/* d5de62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5de66: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* d5de68: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* d5de6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5de80(void) {
  LOAD_REGS();
L_d5de80: /* d5de80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5de81: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d5de83: call 0xd51339 */
  esp -= 4; W32(esp, 0xd5de88u); SPILL(); f_d51339(); if (g_unwind) return; RELOAD();
/* d5de88: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5de8c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5de8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5de8f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5deb0(void) {
  LOAD_REGS();
L_d5deb0: /* d5deb0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5deb4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5deb8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5deba: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5debe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5debf: je 0xd5decf */
  if (zf) goto L_d5decf;
L_d5dec1: /* d5dec1: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d5dec3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5dec5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5dec8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5decb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5decd: jne 0xd5dec1 */
  if (!zf) goto L_d5dec1;
L_d5decf: /* d5decf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ded0: ret  */
  esp += 4; SPILL(); return;
}

void f_d5def0(void) {
  LOAD_REGS();
L_d5def0: /* d5def0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5def4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5def8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5defa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5defe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5deff: je 0xd5df10 */
  if (zf) goto L_d5df10;
L_d5df01: /* d5df01: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* d5df04: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5df07: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5df0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5df0c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* d5df0e: jne 0xd5df01 */
  if (!zf) goto L_d5df01;
L_d5df10: /* d5df10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5df14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5df16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5df17: ret  */
  esp += 4; SPILL(); return;
}

void f_d5df30(void) {
  LOAD_REGS();
L_d5df30: /* d5df30: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5df34: jmp 0xd51816 */
  SPILL(); f_d51816(); return;
}

void f_d5df50(void) {
  LOAD_REGS();
L_d5df50: /* d5df50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d5df54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5df56: jbe 0xd5df72 */
  if ((cf | zf)) goto L_d5df72;
L_d5df58: /* d5df58: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5df5c: mov ecx, eax */
  ecx = eax;
/* d5df5e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5df62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_d5df63: /* d5df63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5df65: je 0xd5df6b */
  if (zf) goto L_d5df6b;
L_d5df67: /* d5df67: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d5df69: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_d5df6b: /* d5df6b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5df6e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* d5df6f: jne 0xd5df63 */
  if (!zf) goto L_d5df63;
L_d5df71: /* d5df71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d5df72: /* d5df72: ret  */
  esp += 4; SPILL(); return;
}

void f_d5df90(void) {
  LOAD_REGS();
L_d5df90: /* d5df90: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dfb0(void) {
  LOAD_REGS();
L_d5dfb0: /* d5dfb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5dfb4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5dfb8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5dfbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5dfbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5dfbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5dfbf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d5dfc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5dfc4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d5dfc8: mov eax, esp */
  eax = esp;
/* d5dfca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5dfcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5dfcd: mov eax, esp */
  eax = esp;
/* d5dfcf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5dfd1: call 0xd5106e */
  esp -= 4; W32(esp, 0xd5dfd6u); SPILL(); f_d5106e(); if (g_unwind) return; RELOAD();
/* d5dfd6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5dfd9: ret  */
  esp += 4; SPILL(); return;
}

void f_d5dff0(void) {
  LOAD_REGS();
L_d5dff0: /* d5dff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5dff1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5dff5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5dff7: jl 0xd5e015 */
  if ((sf != of)) goto L_d5e015;
L_d5dff9: /* d5dff9: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* d5dffc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5dffe: je 0xd5e015 */
  if (zf) goto L_d5e015;
L_d5e000: /* d5e000: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* d5e003: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5e005: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5e008: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e00a: jae 0xd5e015 */
  if (!cf) goto L_d5e015;
L_d5e00c: /* d5e00c: mov eax, edx */
  eax = edx;
/* d5e00e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* d5e011: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e012: ret 4 */
  esp += 8; SPILL(); return;
L_d5e015: /* d5e015: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d5e018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e019: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e030(void) {
  LOAD_REGS();
L_d5e030: /* d5e030: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5e036: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5e038: push 0xd656e9 */
  { uint32_t v = 0xd656e9u; esp -= 4; W32(esp, v); }
/* d5e03d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e03e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5e045: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e046: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5e047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e049: mov ebx, ecx */
  ebx = ecx;
/* d5e04b: xor ebp, ebp */
  ebp = 0;
/* d5e04d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* d5e051: xor edi, edi */
  edi = 0;
L_d5e053: /* d5e053: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* d5e056: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e058: je 0xd5e0a6 */
  if (zf) goto L_d5e0a6;
L_d5e05a: /* d5e05a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* d5e05d: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5e05f: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e064: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e066: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e069: mov eax, edx */
  eax = edx;
/* d5e06b: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e06e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e070: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e072: jae 0xd5e0a6 */
  if (!cf) goto L_d5e0a6;
L_d5e074: /* d5e074: lea eax, [esi + ebp] */
  eax = (uint32_t)(esi + ebp);
/* d5e077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e078: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d5e07c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e07d: call dword ptr [0xd7a5a0] */
  esp -= 4; W32(esp, 0xd5e083u); SPILL(); f_47275c(); if (g_unwind) return; /* MSVCP70!??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5e083: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e086: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e088: jne 0xd5e090 */
  if (!zf) goto L_d5e090;
L_d5e08a: /* d5e08a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5e08b: add ebp, 0x48 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* d5e08e: jmp 0xd5e053 */
  goto L_d5e053;
L_d5e090: /* d5e090: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5e094: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d5e09c: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5e0a2u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5e0a2: mov eax, edi */
  eax = edi;
/* d5e0a4: jmp 0xd5e0bb */
  goto L_d5e0bb;
L_d5e0a6: /* d5e0a6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5e0aa: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d5e0b2: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5e0b8u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5e0b8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_d5e0bb: /* d5e0bb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5e0bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e0c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5e0c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5e0c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e0ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e0cd: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_d5e100(void) {
  LOAD_REGS();
L_d5e100: /* d5e100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e101: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d5e105: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5e107: jl 0xd5e12a */
  if ((sf != of)) goto L_d5e12a;
L_d5e109: /* d5e109: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5e10c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e10e: je 0xd5e12a */
  if (zf) goto L_d5e12a;
L_d5e110: /* d5e110: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d5e113: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d5e115: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e11a: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e11c: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e11f: mov eax, edx */
  eax = edx;
/* d5e121: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e124: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e126: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e128: jb 0xd5e130 */
  if (cf) goto L_d5e130;
L_d5e12a: /* d5e12a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d5e12c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e12d: ret 8 */
  esp += 12; SPILL(); return;
L_d5e130: /* d5e130: mov dl, byte ptr [esp + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* d5e134: mov dword ptr [ecx + 0x24], esi */
  W32((uint32_t)(ecx + 0x24u), esi);
/* d5e137: mov byte ptr [ecx + 0x20], dl */
  W8((uint32_t)(ecx + 0x20u), (edx & 0xffu));
/* d5e13a: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5e13c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e13d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5e150(void) {
  LOAD_REGS();
L_d5e150: /* d5e150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5e152: push 0xd65718 */
  { uint32_t v = 0xd65718u; esp -= 4; W32(esp, v); }
/* d5e157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5e15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e15e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5e165: sub esp, 0xb8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5e16b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e16c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e16d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e16e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5e170: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5e174: call dword ptr [0xd7a578] */
  esp -= 4; W32(esp, 0xd5e17au); SPILL(); f_482548(); if (g_unwind) return; /* MSVCP70!??0?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAE@XZ */ RELOAD();
/* d5e17a: mov edi, dword ptr [esp + 0xd4] */
  edi = R32((uint32_t)(esp + 0xd4u));
/* d5e181: push 0xd6c2cc */
  { uint32_t v = 0xd6c2ccu; esp -= 4; W32(esp, v); }
/* d5e186: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* d5e189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e18a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d5e18e: xor ebx, ebx */
  ebx = 0;
/* d5e190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e191: mov dword ptr [esp + 0xd8], ebx */
  W32((uint32_t)(esp + 0xd8u), ebx);
/* d5e198: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd5e19du); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d5e19d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e1a0: cmp dword ptr [esp + 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e1a5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5e1a9: mov byte ptr [esp + 0xcc], 1 */
  W8((uint32_t)(esp + 0xccu), 0x1u);
/* d5e1b1: jae 0xd5e1b7 */
  if (!cf) goto L_d5e1b7;
L_d5e1b3: /* d5e1b3: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
L_d5e1b7: /* d5e1b7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d5e1b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e1ba: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d5e1be: call dword ptr [0xd7a580] */
  esp -= 4; W32(esp, 0xd5e1c4u); SPILL(); f_48544c(); if (g_unwind) return; /* MSVCP70!?open@?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXPBDH@Z */ RELOAD();
/* d5e1c4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* d5e1c8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5e1cb: mov eax, dword ptr [esp + eax + 0x30] */
  eax = R32((uint32_t)(esp + eax + 0x30u));
/* d5e1cf: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e1d1: jne 0xd5e2ed */
  if (!zf) goto L_d5e2ed;
L_d5e1d7: /* d5e1d7: mov ecx, eax */
  ecx = eax;
/* d5e1d9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5e1dc: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e1df: jne 0xd5e2ed */
  if (!zf) goto L_d5e2ed;
L_d5e1e5: /* d5e1e5: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e1e7: jne 0xd5e2ed */
  if (!zf) goto L_d5e2ed;
L_d5e1ed: /* d5e1ed: mov edx, dword ptr [0xd7a584] */
  edx = R32((uint32_t)(0xd7a584u));
/* d5e1f3: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* d5e1f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e1f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e1f8: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d5e1fc: call dword ptr [0xd7a588] */
  esp -= 4; W32(esp, 0xd5e202u); SPILL(); f_46f8ee(); if (g_unwind) return; /* MSVCP70!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z */ RELOAD();
/* d5e202: mov ecx, eax */
  ecx = eax;
/* d5e204: call dword ptr [0xd7a58c] */
  esp -= 4; W32(esp, 0xd5e20au); SPILL(); f_4613f7(); if (g_unwind) return; /* MSVCP70!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z */ RELOAD();
/* d5e20a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* d5e20e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d5e211: mov eax, dword ptr [esp + ecx + 0x30] */
  eax = R32((uint32_t)(esp + ecx + 0x30u));
/* d5e215: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e217: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e21d: /* d5e21d: mov edx, eax */
  edx = eax;
/* d5e21f: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* d5e222: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e225: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e22b: /* d5e22b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e22d: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e233: /* d5e233: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d5e236: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d5e238: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e23a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* d5e23e: je 0xd5e2af */
  if (zf) goto L_d5e2af;
L_d5e240: /* d5e240: mov esi, dword ptr [0xd7a590] */
  esi = R32((uint32_t)(0xd7a590u));
L_d5e246: /* d5e246: mov ecx, dword ptr [0xd7a584] */
  ecx = R32((uint32_t)(0xd7a584u));
/* d5e24c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e24d: lea edx, [eax + 0x28] */
  edx = (uint32_t)(eax + 0x28u);
/* d5e250: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e251: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5e254: push 0xd77f0c */
  { uint32_t v = 0xd77f0cu; esp -= 4; W32(esp, v); }
/* d5e259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e25a: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* d5e25e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e25f: call 0xd6418e */
  esp -= 4; W32(esp, 0xd5e264u); SPILL(); f_d6418e(); if (g_unwind) return; RELOAD();
/* d5e264: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e268: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd5e26au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d5e26a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e26e: call 0xd6418e */
  esp -= 4; W32(esp, 0xd5e273u); SPILL(); f_d6418e(); if (g_unwind) return; RELOAD();
/* d5e273: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e276: mov ecx, eax */
  ecx = eax;
/* d5e278: call dword ptr [0xd7a58c] */
  esp -= 4; W32(esp, 0xd5e27eu); SPILL(); f_4613f7(); if (g_unwind) return; /* MSVCP70!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z */ RELOAD();
/* d5e27e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d5e282: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e285: mov eax, dword ptr [esp + edx + 0x30] */
  eax = R32((uint32_t)(esp + edx + 0x30u));
/* d5e289: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e28b: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e28d: /* d5e28d: mov ecx, eax */
  ecx = eax;
/* d5e28f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5e292: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e295: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e297: /* d5e297: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e299: jne 0xd5e2e3 */
  if (!zf) goto L_d5e2e3;
L_d5e29b: /* d5e29b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d5e29f: call 0xd51339 */
  esp -= 4; W32(esp, 0xd5e2a4u); SPILL(); f_d51339(); if (g_unwind) return; RELOAD();
/* d5e2a4: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d5e2a7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5e2ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e2ad: jne 0xd5e246 */
  if (!zf) goto L_d5e246;
L_d5e2af: /* d5e2af: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5e2b3: call dword ptr [0xd7a598] */
  esp -= 4; W32(esp, 0xd5e2b9u); SPILL(); f_480cab(); if (g_unwind) return; /* MSVCP70!?close@?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5e2b9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5e2bd: mov byte ptr [esp + 0xcc], bl */
  W8((uint32_t)(esp + 0xccu), (ebx & 0xffu));
/* d5e2c4: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5e2cau); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5e2ca: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5e2ce: mov dword ptr [esp + 0xcc], 0xffffffff */
  W32((uint32_t)(esp + 0xccu), 0xffffffffu);
/* d5e2d9: call dword ptr [0xd7a59c] */
  esp -= 4; W32(esp, 0xd5e2dfu); SPILL(); f_484f46(); if (g_unwind) return; /* MSVCP70!??_D?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5e2df: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5e2e1: jmp 0xd5e315 */
  goto L_d5e315;
L_d5e2e3: /* d5e2e3: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5e2e7: call dword ptr [0xd7a598] */
  esp -= 4; W32(esp, 0xd5e2edu); SPILL(); f_480cab(); if (g_unwind) return; /* MSVCP70!?close@?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
L_d5e2ed: /* d5e2ed: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5e2f1: mov byte ptr [esp + 0xcc], bl */
  W8((uint32_t)(esp + 0xccu), (ebx & 0xffu));
/* d5e2f8: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5e2feu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5e2fe: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5e302: mov dword ptr [esp + 0xcc], 0xffffffff */
  W32((uint32_t)(esp + 0xccu), 0xffffffffu);
/* d5e30d: call dword ptr [0xd7a59c] */
  esp -= 4; W32(esp, 0xd5e313u); SPILL(); f_484f46(); if (g_unwind) return; /* MSVCP70!??_D?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5e313: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_d5e315: /* d5e315: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* d5e31c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e31d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e31e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e31f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5e326: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e32c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e3b0(void) {
  LOAD_REGS();
L_d5e3b0: /* d5e3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e3b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d5e3b6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5e3b8: jl 0xd5e3db */
  if ((sf != of)) goto L_d5e3db;
L_d5e3ba: /* d5e3ba: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* d5e3bd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e3bf: je 0xd5e3db */
  if (zf) goto L_d5e3db;
L_d5e3c1: /* d5e3c1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d5e3c4: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5e3c6: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e3cb: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e3cd: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e3d0: mov eax, edx */
  eax = edx;
/* d5e3d2: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e3d5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e3d7: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e3d9: jb 0xd5e3e5 */
  if (cf) goto L_d5e3e5;
L_d5e3db: /* d5e3db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e3dc: mov eax, 0xd6c2f2 */
  eax = 0xd6c2f2u;
/* d5e3e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e3e2: ret 4 */
  esp += 8; SPILL(); return;
L_d5e3e5: /* d5e3e5: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d5e3e8: lea eax, [esi + ecx*8] */
  eax = (uint32_t)(esi + ecx*8);
/* d5e3eb: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e3ef: jb 0xd5e3f9 */
  if (cf) goto L_d5e3f9;
L_d5e3f1: /* d5e3f1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5e3f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e3f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e3f6: ret 4 */
  esp += 8; SPILL(); return;
L_d5e3f9: /* d5e3f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e3fa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5e3fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e3fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e430(void) {
  LOAD_REGS();
L_d5e430: /* d5e430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e432: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d5e436: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5e438: jl 0xd5e45b */
  if ((sf != of)) goto L_d5e45b;
L_d5e43a: /* d5e43a: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* d5e43d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e43f: je 0xd5e45b */
  if (zf) goto L_d5e45b;
L_d5e441: /* d5e441: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d5e444: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5e446: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e44b: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e44d: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e450: mov eax, edx */
  eax = edx;
/* d5e452: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e455: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e457: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e459: jb 0xd5e465 */
  if (cf) goto L_d5e465;
L_d5e45b: /* d5e45b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e45c: mov eax, 0xd6c2f2 */
  eax = 0xd6c2f2u;
/* d5e461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e462: ret 4 */
  esp += 8; SPILL(); return;
L_d5e465: /* d5e465: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d5e468: lea eax, [esi + ecx*8 + 0x1c] */
  eax = (uint32_t)(esi + ecx*8 + 0x1cu);
/* d5e46c: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e470: jb 0xd5e47a */
  if (cf) goto L_d5e47a;
L_d5e472: /* d5e472: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5e475: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e477: ret 4 */
  esp += 8; SPILL(); return;
L_d5e47a: /* d5e47a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e47b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5e47e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e47f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e4b0(void) {
  LOAD_REGS();
L_d5e4b0: /* d5e4b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e4b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5e4b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e4b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e4b4: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* d5e4b7: xor ebp, ebp */
  ebp = 0;
/* d5e4b9: xor esi, esi */
  esi = 0;
/* d5e4bb: lea ebx, [edi + 0x44] */
  ebx = (uint32_t)(edi + 0x44u);
/* d5e4be: mov edi, edi */
  edi = edi;
L_d5e4c0: /* d5e4c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e4c2: je 0xd5e4f2 */
  if (zf) goto L_d5e4f2;
L_d5e4c4: /* d5e4c4: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d5e4c7: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d5e4c9: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e4ce: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e4d0: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e4d3: mov eax, edx */
  eax = edx;
/* d5e4d5: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e4d8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e4da: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e4dc: jae 0xd5e4f2 */
  if (!cf) goto L_d5e4f2;
L_d5e4de: /* d5e4de: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d5e4e0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d5e4e4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d5e4e6: jle 0xd5e4ea */
  if ((zf || sf != of)) goto L_d5e4ea;
L_d5e4e8: /* d5e4e8: mov eax, edx */
  eax = edx;
L_d5e4ea: /* d5e4ea: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* d5e4ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d5e4ed: add ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5e4f0: jmp 0xd5e4c0 */
  goto L_d5e4c0;
L_d5e4f2: /* d5e4f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e4f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e4f4: mov eax, ebp */
  eax = ebp;
/* d5e4f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5e4f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e4f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e520(void) {
  LOAD_REGS();
L_d5e520: /* d5e520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e522: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e523: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d5e527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e528: mov esi, ecx */
  esi = ecx;
/* d5e52a: call 0xd51078 */
  esp -= 4; W32(esp, 0xd5e52fu); SPILL(); f_d51078(); if (g_unwind) return; RELOAD();
/* d5e52f: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e532: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* d5e536: je 0xd5e55c */
  if (zf) goto L_d5e55c;
L_d5e538: /* d5e538: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5e53b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e53c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e53d: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd5e543u); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5e543: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e546: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e548: jne 0xd5e55c */
  if (!zf) goto L_d5e55c;
L_d5e54a: /* d5e54a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d5e54e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5e550: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5e554: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e555: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e557: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e558: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5e559: ret 8 */
  esp += 12; SPILL(); return;
L_d5e55c: /* d5e55c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e55f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d5e563: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d5e567: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5e569: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5e56d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e56e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e571: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5e572: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5e5a0(void) {
  LOAD_REGS();
L_d5e5a0: /* d5e5a0: mov eax, ecx */
  eax = ecx;
/* d5e5a2: xor ecx, ecx */
  ecx = 0;
/* d5e5a4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d5e5a7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d5e5aa: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d5e5ad: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e5c0(void) {
  LOAD_REGS();
L_d5e5c0: /* d5e5c0: mov eax, ecx */
  eax = ecx;
/* d5e5c2: xor ecx, ecx */
  ecx = 0;
/* d5e5c4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d5e5c7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d5e5ca: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d5e5cd: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e5e0(void) {
  LOAD_REGS();
L_d5e5e0: /* d5e5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e5e1: mov esi, ecx */
  esi = ecx;
/* d5e5e3: call 0xd513a7 */
  esp -= 4; W32(esp, 0xd5e5e8u); SPILL(); f_d513a7(); if (g_unwind) return; RELOAD();
/* d5e5e8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d5e5eb: mov byte ptr [eax + 0x45], 1 */
  W8((uint32_t)(eax + 0x45u), 0x1u);
/* d5e5ef: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e5f2: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d5e5f5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e5f8: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d5e5fa: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e5fd: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d5e600: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5e607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e608: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e620(void) {
  LOAD_REGS();
L_d5e620: /* d5e620: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5e626: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5e628: push 0xd65742 */
  { uint32_t v = 0xd65742u; esp -= 4; W32(esp, v); }
/* d5e62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e62e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5e635: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5e638: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e639: mov edi, ecx */
  edi = ecx;
/* d5e63b: cmp dword ptr [edi + 8], 0x4924923 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x4924923u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e642: jb 0xd5e69d */
  if (cf) goto L_d5e69d;
L_d5e644: /* d5e644: push 0xd77f9c */
  { uint32_t v = 0xd77f9cu; esp -= 4; W32(esp, v); }
/* d5e649: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d5e64d: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5e653u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5e653: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5e657: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* d5e65f: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd5e665u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d5e665: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d5e669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e66a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5e66e: mov byte ptr [esp + 0x54], 1 */
  W8((uint32_t)(esp + 0x54u), 0x1u);
/* d5e673: mov dword ptr [esp + 0x24], 0xd6c2fc */
  W32((uint32_t)(esp + 0x24u), 0xd6c2fcu);
/* d5e67b: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5e681u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5e681: push 0xd6d4a8 */
  { uint32_t v = 0xd6d4a8u; esp -= 4; W32(esp, v); }
/* d5e686: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d5e68a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e68b: mov byte ptr [esp + 0x58], 0 */
  W8((uint32_t)(esp + 0x58u), 0x0u);
/* d5e690: mov dword ptr [esp + 0x28], 0xd6c308 */
  W32((uint32_t)(esp + 0x28u), 0xd6c308u);
/* d5e698: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5e69du); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5e69d: /* d5e69d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* d5e6a1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5e6a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e6a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e6a6: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* d5e6aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5e6ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e6ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e6af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e6b0: mov ecx, edi */
  ecx = edi;
/* d5e6b2: call 0xd51636 */
  esp -= 4; W32(esp, 0xd5e6b7u); SPILL(); f_d51636(); if (g_unwind) return; RELOAD();
/* d5e6b7: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* d5e6ba: mov ecx, eax */
  ecx = eax;
/* d5e6bc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5e6bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d5e6c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e6c2: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* d5e6c6: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* d5e6c9: jne 0xd5e6db */
  if (!zf) goto L_d5e6db;
L_d5e6cb: /* d5e6cb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d5e6ce: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5e6d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e6d3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5e6d6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* d5e6d9: jmp 0xd5e6fe */
  goto L_d5e6fe;
L_d5e6db: /* d5e6db: mov al, byte ptr [esp + 0x64] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* d5e6df: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e6e1: je 0xd5e6f0 */
  if (zf) goto L_d5e6f0;
L_d5e6e3: /* d5e6e3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d5e6e5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5e6e8: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e6ea: jne 0xd5e6fe */
  if (!zf) goto L_d5e6fe;
L_d5e6ec: /* d5e6ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e6ee: jmp 0xd5e6fe */
  goto L_d5e6fe;
L_d5e6f0: /* d5e6f0: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* d5e6f3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5e6f6: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e6f9: jne 0xd5e6fe */
  if (!zf) goto L_d5e6fe;
L_d5e6fb: /* d5e6fb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_d5e6fe: /* d5e6fe: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e701: cmp byte ptr [edx + 0x44], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5e705: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* d5e708: mov esi, ecx */
  esi = ecx;
/* d5e70a: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5e70c: jne 0xd5e7cb */
  if (!zf) goto L_d5e7cb;
L_d5e712: /* d5e712: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_d5e713: /* d5e713: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5e715: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* d5e718: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* d5e71b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e71d: jne 0xd5e76d */
  if (!zf) goto L_d5e76d;
L_d5e71f: /* d5e71f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d5e722: cmp byte ptr [edx + 0x44], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5e726: jne 0xd5e73e */
  if (!zf) goto L_d5e73e;
L_d5e728: /* d5e728: mov byte ptr [ecx + 0x44], bl */
  W8((uint32_t)(ecx + 0x44u), (ebx & 0xffu));
/* d5e72b: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5e72e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5e730: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e733: mov byte ptr [edx + 0x44], 0 */
  W8((uint32_t)(edx + 0x44u), 0x0u);
/* d5e737: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d5e739: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d5e73c: jmp 0xd5e7b5 */
  goto L_d5e7b5;
L_d5e73e: /* d5e73e: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e741: jne 0xd5e74d */
  if (!zf) goto L_d5e74d;
L_d5e743: /* d5e743: mov esi, ecx */
  esi = ecx;
/* d5e745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e746: mov ecx, edi */
  ecx = edi;
/* d5e748: call 0xd512f3 */
  esp -= 4; W32(esp, 0xd5e74du); SPILL(); f_d512f3(); if (g_unwind) return; RELOAD();
L_d5e74d: /* d5e74d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5e750: mov byte ptr [ecx + 0x44], bl */
  W8((uint32_t)(ecx + 0x44u), (ebx & 0xffu));
/* d5e753: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5e756: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5e759: mov byte ptr [eax + 0x44], 0 */
  W8((uint32_t)(eax + 0x44u), 0x0u);
/* d5e75d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5e760: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e763: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e764: mov ecx, edi */
  ecx = edi;
/* d5e766: call 0xd519bf */
  esp -= 4; W32(esp, 0xd5e76bu); SPILL(); f_d519bf(); if (g_unwind) return; RELOAD();
/* d5e76b: jmp 0xd5e7b5 */
  goto L_d5e7b5;
L_d5e76d: /* d5e76d: cmp byte ptr [edx + 0x44], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5e771: jne 0xd5e789 */
  if (!zf) goto L_d5e789;
L_d5e773: /* d5e773: mov byte ptr [ecx + 0x44], bl */
  W8((uint32_t)(ecx + 0x44u), (ebx & 0xffu));
/* d5e776: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5e779: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5e77b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e77e: mov byte ptr [edx + 0x44], 0 */
  W8((uint32_t)(edx + 0x44u), 0x0u);
/* d5e782: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d5e784: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d5e787: jmp 0xd5e7b5 */
  goto L_d5e7b5;
L_d5e789: /* d5e789: cmp esi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5e78b: jne 0xd5e797 */
  if (!zf) goto L_d5e797;
L_d5e78d: /* d5e78d: mov esi, ecx */
  esi = ecx;
/* d5e78f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e790: mov ecx, edi */
  ecx = edi;
/* d5e792: call 0xd519bf */
  esp -= 4; W32(esp, 0xd5e797u); SPILL(); f_d519bf(); if (g_unwind) return; RELOAD();
L_d5e797: /* d5e797: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5e79a: mov byte ptr [ecx + 0x44], bl */
  W8((uint32_t)(ecx + 0x44u), (ebx & 0xffu));
/* d5e79d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5e7a0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5e7a3: mov byte ptr [eax + 0x44], 0 */
  W8((uint32_t)(eax + 0x44u), 0x0u);
/* d5e7a7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5e7aa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d5e7ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e7ae: mov ecx, edi */
  ecx = edi;
/* d5e7b0: call 0xd512f3 */
  esp -= 4; W32(esp, 0xd5e7b5u); SPILL(); f_d512f3(); if (g_unwind) return; RELOAD();
L_d5e7b5: /* d5e7b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5e7b8: mov dl, byte ptr [ecx + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* d5e7bb: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e7bd: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d5e7c0: je 0xd5e713 */
  if (zf) goto L_d5e713;
L_d5e7c6: /* d5e7c6: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* d5e7ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_d5e7cb: /* d5e7cb: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5e7ce: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5e7d1: mov byte ptr [eax + 0x44], bl */
  W8((uint32_t)(eax + 0x44u), (ebx & 0xffu));
/* d5e7d4: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* d5e7d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e7d9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e7db: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* d5e7df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e7e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e7e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5e7e8: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e7eb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d5e870(void) {
  LOAD_REGS();
L_d5e870: /* d5e870: mov eax, ecx */
  eax = ecx;
/* d5e872: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5e876: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* d5e878: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* d5e87a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5e890(void) {
  LOAD_REGS();
L_d5e890: /* d5e890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5e894: call 0xd51816 */
  esp -= 4; W32(esp, 0xd5e899u); SPILL(); f_d51816(); if (g_unwind) return; RELOAD();
/* d5e899: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5e8b0(void) {
  LOAD_REGS();
L_d5e8b0: /* d5e8b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e8b1: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* d5e8b5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d5e8b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d5e8bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e8be: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5e8c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e8c3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5e8c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5e8c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e8c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e8ca: call 0xd5164f */
  esp -= 4; W32(esp, 0xd5e8cfu); SPILL(); f_d5164f(); if (g_unwind) return; RELOAD();
/* d5e8cf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e8f0(void) {
  LOAD_REGS();
L_d5e8f0: /* d5e8f0: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e910(void) {
  LOAD_REGS();
L_d5e910: /* d5e910: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5e914: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5e918: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5e919: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e91a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d5e91e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e91f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e920: mov eax, esp */
  eax = esp;
/* d5e922: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5e923: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d5e927: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5e929: mov eax, esp */
  eax = esp;
/* d5e92b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5e92d: call 0xd5106e */
  esp -= 4; W32(esp, 0xd5e932u); SPILL(); f_d5106e(); if (g_unwind) return; RELOAD();
/* d5e932: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5e935: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5e950(void) {
  LOAD_REGS();
L_d5e950: /* d5e950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e951: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e952: mov esi, ecx */
  esi = ecx;
/* d5e954: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5e955: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* d5e958: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5e95a: jl 0xd5e996 */
  if ((sf != of)) goto L_d5e996;
L_d5e95c: /* d5e95c: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* d5e95f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5e961: je 0xd5e996 */
  if (zf) goto L_d5e996;
L_d5e963: /* d5e963: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5e966: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5e968: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5e96d: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5e96f: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5e972: mov eax, edx */
  eax = edx;
/* d5e974: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5e977: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5e979: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5e97b: jae 0xd5e996 */
  if (!cf) goto L_d5e996;
L_d5e97d: /* d5e97d: mov al, byte ptr [esi + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x20u))) & 0xffu);
/* d5e980: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e982: je 0xd5e9ad */
  if (zf) goto L_d5e9ad;
L_d5e984: /* d5e984: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d5e987: lea ebx, [ebx + ecx*8] */
  ebx = (uint32_t)(ebx + ecx*8);
/* d5e98a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5e98b: mov ecx, esi */
  ecx = esi;
/* d5e98d: call 0xd51465 */
  esp -= 4; W32(esp, 0xd5e992u); SPILL(); f_d51465(); if (g_unwind) return; RELOAD();
/* d5e992: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5e994: jne 0xd5e99c */
  if (!zf) goto L_d5e99c;
L_d5e996: /* d5e996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e998: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d5e99a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e99b: ret  */
  esp += 4; SPILL(); return;
L_d5e99c: /* d5e99c: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d5e99f: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* d5e9a2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e9a5: mov dword ptr [eax + edx*8 + 0x44], 0 */
  W32((uint32_t)(eax + edx*8 + 0x44u), 0x0u);
L_d5e9ad: /* d5e9ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5e9ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5e9af: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5e9b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5e9b2: ret  */
  esp += 4; SPILL(); return;
}

void f_d5e9e0(void) {
  LOAD_REGS();
L_d5e9e0: /* d5e9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5e9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5e9e5: mov esi, ecx */
  esi = ecx;
/* d5e9e7: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d5e9e9: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* d5e9eb: mov ecx, esi */
  ecx = esi;
/* d5e9ed: call 0xd513a7 */
  esp -= 4; W32(esp, 0xd5e9f2u); SPILL(); f_d513a7(); if (g_unwind) return; RELOAD();
/* d5e9f2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d5e9f5: mov byte ptr [eax + 0x45], 1 */
  W8((uint32_t)(eax + 0x45u), 0x1u);
/* d5e9f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5e9fc: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d5e9ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ea02: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d5ea04: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ea07: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d5ea0a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5ea11: mov eax, esi */
  eax = esi;
/* d5ea13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ea14: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5ea30(void) {
  LOAD_REGS();
L_d5ea30: /* d5ea30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ea31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ea32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ea33: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* d5ea37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ea38: mov ebx, ecx */
  ebx = ecx;
/* d5ea3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ea3b: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* d5ea3e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* d5ea41: mov cl, byte ptr [esi + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5ea44: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ea46: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5ea48: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* d5ea4c: jne 0xd5ea76 */
  if (!zf) goto L_d5ea76;
L_d5ea4e: /* d5ea4e: mov edi, edi */
  edi = edi;
L_d5ea50: /* d5ea50: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* d5ea53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ea54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ea55: mov edi, esi */
  edi = esi;
/* d5ea57: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd5ea5du); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5ea5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ea60: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ea62: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* d5ea66: je 0xd5ea6c */
  if (zf) goto L_d5ea6c;
L_d5ea68: /* d5ea68: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* d5ea6a: jmp 0xd5ea6f */
  goto L_d5ea6f;
L_d5ea6c: /* d5ea6c: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
L_d5ea6f: /* d5ea6f: mov cl, byte ptr [esi + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5ea72: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ea74: je 0xd5ea50 */
  if (zf) goto L_d5ea50;
L_d5ea76: /* d5ea76: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ea78: mov esi, edi */
  esi = edi;
/* d5ea7a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* d5ea7e: je 0xd5eab8 */
  if (zf) goto L_d5eab8;
L_d5ea80: /* d5ea80: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d5ea83: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5ea85: jne 0xd5eaab */
  if (!zf) goto L_d5eaab;
L_d5ea87: /* d5ea87: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ea88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ea89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5ea8b: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* d5ea8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ea90: mov ecx, ebx */
  ecx = ebx;
/* d5ea92: call 0xd519ba */
  esp -= 4; W32(esp, 0xd5ea97u); SPILL(); f_d519ba(); if (g_unwind) return; RELOAD();
/* d5ea97: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ea99: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5ea9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ea9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ea9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5eaa0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5eaa2: mov byte ptr [eax + 4], 1 */
  W8((uint32_t)(eax + 0x4u), 0x1u);
/* d5eaa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5eaa7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5eaa8: ret 8 */
  esp += 12; SPILL(); return;
L_d5eaab: /* d5eaab: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5eaaf: call 0xd511ae */
  esp -= 4; W32(esp, 0xd5eab4u); SPILL(); f_d511ae(); if (g_unwind) return; RELOAD();
/* d5eab4: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_d5eab8: /* d5eab8: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* d5eabb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5eabc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5eabd: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd5eac3u); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5eac3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5eac6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5eac8: je 0xd5eaf1 */
  if (zf) goto L_d5eaf1;
L_d5eaca: /* d5eaca: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5eace: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5eacf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ead0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ead1: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d5ead5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ead6: mov ecx, ebx */
  ecx = ebx;
/* d5ead8: call 0xd519ba */
  esp -= 4; W32(esp, 0xd5eaddu); SPILL(); f_d519ba(); if (g_unwind) return; RELOAD();
/* d5eadd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5eadf: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5eae3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5eae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5eae5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5eae6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5eae8: mov byte ptr [eax + 4], 1 */
  W8((uint32_t)(eax + 0x4u), 0x1u);
/* d5eaec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5eaed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5eaee: ret 8 */
  esp += 12; SPILL(); return;
L_d5eaf1: /* d5eaf1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5eaf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5eaf6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5eaf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5eaf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5eafa: mov byte ptr [eax + 4], 0 */
  W8((uint32_t)(eax + 0x4u), 0x0u);
/* d5eafe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5eaff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d5eb00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5eb50(void) {
  LOAD_REGS();
L_d5eb50: /* d5eb50: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5eb54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5eb55: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d5eb59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5eb5a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d5eb5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5eb5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eb60: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d5eb64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eb65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5eb66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5eb67: call 0xd5164f */
  esp -= 4; W32(esp, 0xd5eb6cu); SPILL(); f_d5164f(); if (g_unwind) return; RELOAD();
/* d5eb6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5eb6f: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* d5eb72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5eb73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5eb74: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5eb90(void) {
  LOAD_REGS();
L_d5eb90: /* d5eb90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5ebb0(void) {
  LOAD_REGS();
L_d5ebb0: /* d5ebb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ebb1: mov ebp, esp */
  ebp = esp;
/* d5ebb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5ebb5: push 0xd65760 */
  { uint32_t v = 0xd65760u; esp -= 4; W32(esp, v); }
/* d5ebba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5ebc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ebc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5ebc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ebcb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d5ebce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ebcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ebd0: mov esi, ecx */
  esi = ecx;
/* d5ebd2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ebd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ebd5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d5ebd8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ebda: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d5ebdd: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* d5ebe0: jne 0xd5ebe6 */
  if (!zf) goto L_d5ebe6;
L_d5ebe2: /* d5ebe2: xor eax, eax */
  eax = 0;
/* d5ebe4: jmp 0xd5ebee */
  goto L_d5ebee;
L_d5ebe6: /* d5ebe6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d5ebe9: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5ebeb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_d5ebee: /* d5ebee: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d5ebf1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ebf3: je 0xd5ee3a */
  if (zf) goto L_d5ee3a;
L_d5ebf9: /* d5ebf9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ebfb: jne 0xd5ec01 */
  if (!zf) goto L_d5ec01;
L_d5ebfd: /* d5ebfd: xor ecx, ecx */
  ecx = 0;
/* d5ebff: jmp 0xd5ec09 */
  goto L_d5ec09;
L_d5ec01: /* d5ec01: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ec04: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5ec06: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_d5ec09: /* d5ec09: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* d5ec0e: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d5ec10: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ec12: jae 0xd5ec2e */
  if (!cf) goto L_d5ec2e;
L_d5ec14: /* d5ec14: mov ecx, esi */
  ecx = esi;
/* d5ec16: call 0xd51262 */
  esp -= 4; W32(esp, 0xd5ec1bu); SPILL(); f_d51262(); if (g_unwind) return; RELOAD();
/* d5ec1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5ec1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5ec25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ec26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ec27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ec28: mov esp, ebp */
  esp = ebp;
/* d5ec2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ec2b: ret 0xc */
  esp += 16; SPILL(); return;
L_d5ec2e: /* d5ec2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ec30: jne 0xd5ec36 */
  if (!zf) goto L_d5ec36;
L_d5ec32: /* d5ec32: xor ecx, ecx */
  ecx = 0;
/* d5ec34: jmp 0xd5ec3e */
  goto L_d5ec3e;
L_d5ec36: /* d5ec36: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ec39: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5ec3b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_d5ec3e: /* d5ec3e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5ec40: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ec42: jae 0xd5ed58 */
  if (!cf) goto L_d5ed58;
L_d5ec48: /* d5ec48: mov ecx, eax */
  ecx = eax;
/* d5ec4a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5ec4c: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* d5ec51: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d5ec53: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ec55: jae 0xd5ec5b */
  if (!cf) goto L_d5ec5b;
L_d5ec57: /* d5ec57: xor eax, eax */
  eax = 0;
/* d5ec59: jmp 0xd5ec5d */
  goto L_d5ec5d;
L_d5ec5b: /* d5ec5b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_d5ec5d: /* d5ec5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ec5f: jne 0xd5ec65 */
  if (!zf) goto L_d5ec65;
L_d5ec61: /* d5ec61: xor ecx, ecx */
  ecx = 0;
/* d5ec63: jmp 0xd5ec6d */
  goto L_d5ec6d;
L_d5ec65: /* d5ec65: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ec68: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5ec6a: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_d5ec6d: /* d5ec6d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5ec6f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ec71: jae 0xd5ec85 */
  if (!cf) goto L_d5ec85;
L_d5ec73: /* d5ec73: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ec75: jne 0xd5ec7b */
  if (!zf) goto L_d5ec7b;
L_d5ec77: /* d5ec77: xor eax, eax */
  eax = 0;
/* d5ec79: jmp 0xd5ec83 */
  goto L_d5ec83;
L_d5ec7b: /* d5ec7b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5ec7e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5ec80: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_d5ec83: /* d5ec83: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_d5ec85: /* d5ec85: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d5ec88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ec89: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d5ec8c: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd5ec91u); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d5ec91: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d5ec94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ec97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ec98: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d5ec9b: mov ebx, eax */
  ebx = eax;
/* d5ec9d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5eca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5eca1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5eca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eca3: mov ecx, esp */
  ecx = esp;
/* d5eca5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d5eca7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eca8: mov ecx, esp */
  ecx = esp;
/* d5ecaa: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d5ecad: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d5ecb4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5ecb6: call 0xd5106e */
  esp -= 4; W32(esp, 0xd5ecbbu); SPILL(); f_d5106e(); if (g_unwind) return; RELOAD();
/* d5ecbb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d5ecbe: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ecc1: mov edi, eax */
  edi = eax;
/* d5ecc3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d5ecc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ecc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ecc8: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* d5eccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eccc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5eccd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ecce: call 0xd5164f */
  esp -= 4; W32(esp, 0xd5ecd3u); SPILL(); f_d5164f(); if (g_unwind) return; RELOAD();
/* d5ecd3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d5ecd6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ecd9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d5ecdc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ecdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ece0: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* d5ece3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ece4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ece5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ece6: mov eax, esp */
  eax = esp;
/* d5ece8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5ecea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eceb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d5ecee: mov eax, esp */
  eax = esp;
/* d5ecf0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5ecf2: call 0xd5106e */
  esp -= 4; W32(esp, 0xd5ecf7u); SPILL(); f_d5106e(); if (g_unwind) return; RELOAD();
/* d5ecf7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5ecfa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ecfd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ecff: jne 0xd5ed05 */
  if (!zf) goto L_d5ed05;
L_d5ed01: /* d5ed01: xor eax, eax */
  eax = 0;
/* d5ed03: jmp 0xd5ed0d */
  goto L_d5ed0d;
L_d5ed05: /* d5ed05: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5ed08: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5ed0a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_d5ed0d: /* d5ed0d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d5ed10: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5ed12: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ed14: je 0xd5ed1f */
  if (zf) goto L_d5ed1f;
L_d5ed16: /* d5ed16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed17: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5ed1cu); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5ed1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5ed1f: /* d5ed1f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d5ed22: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5ed24: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* d5ed27: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d5ed2a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d5ed2d: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* d5ed30: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5ed33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5ed3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ed3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ed3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ed3d: mov esp, ebp */
  esp = ebp;
/* d5ed3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ed40: ret 0xc */
  esp += 16; SPILL(); return;
L_d5ed58: /* d5ed58: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* d5ed5b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d5ed5e: mov eax, ebx */
  eax = ebx;
/* d5ed60: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5ed62: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5ed65: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ed67: jae 0xd5edca */
  if (!cf) goto L_d5edca;
L_d5ed69: /* d5ed69: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* d5ed70: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d5ed73: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ed75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ed76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed77: mov eax, esp */
  eax = esp;
/* d5ed79: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ed7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed7d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5ed7f: mov eax, esp */
  eax = esp;
/* d5ed81: mov ecx, esi */
  ecx = esi;
/* d5ed83: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ed86: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ed88: call 0xd51942 */
  esp -= 4; W32(esp, 0xd5ed8du); SPILL(); f_d51942(); if (g_unwind) return; RELOAD();
/* d5ed8d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ed90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d5ed93: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* d5ed96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ed97: mov edx, ecx */
  edx = ecx;
/* d5ed99: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d5ed9b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5ed9e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5eda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5eda1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eda2: mov ecx, esi */
  ecx = esi;
/* d5eda4: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d5edab: call 0xd51b0e */
  esp -= 4; W32(esp, 0xd5edb0u); SPILL(); f_d51b0e(); if (g_unwind) return; RELOAD();
/* d5edb0: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* d5edb3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d5edb6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5edb8: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* d5edbb: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* d5edbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5edbf: mov esi, ebx */
  esi = ebx;
/* d5edc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edc2: mov eax, esp */
  eax = esp;
/* d5edc4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d5edc6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5edc8: jmp 0xd5ee27 */
  goto L_d5ee27;
L_d5edca: /* d5edca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5edcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edcc: mov eax, esp */
  eax = esp;
/* d5edce: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5edd0: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5edd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edd4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d5edd7: mov ecx, esp */
  ecx = esp;
/* d5edd9: mov eax, ebx */
  eax = ebx;
/* d5eddb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5eddd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5eddf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ede2: mov ecx, esi */
  ecx = esi;
/* d5ede4: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* d5ede7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d5edea: call 0xd51942 */
  esp -= 4; W32(esp, 0xd5edefu); SPILL(); f_d51942(); if (g_unwind) return; RELOAD();
/* d5edef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edf0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d5edf3: mov eax, esp */
  eax = esp;
/* d5edf5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5edf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edf9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d5edfc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5edfe: mov eax, esp */
  eax = esp;
/* d5ee00: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ee03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5ee06: mov eax, esp */
  eax = esp;
/* d5ee08: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* d5ee0b: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ee0f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ee11: call 0xd5191a */
  esp -= 4; W32(esp, 0xd5ee16u); SPILL(); f_d5191a(); if (g_unwind) return; RELOAD();
/* d5ee16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ee19: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* d5ee1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ee1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d5ee21: mov eax, esp */
  eax = esp;
/* d5ee23: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5ee25: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_d5ee27: /* d5ee27: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee2b: mov eax, esp */
  eax = esp;
/* d5ee2d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ee2f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee32: call 0xd51b31 */
  esp -= 4; W32(esp, 0xd5ee37u); SPILL(); f_d51b31(); if (g_unwind) return; RELOAD();
/* d5ee37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5ee3a: /* d5ee3a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5ee3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ee3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ee3f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5ee46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ee47: mov esp, ebp */
  esp = ebp;
/* d5ee49: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ee4a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5ed43(void) {
  LOAD_REGS();
L_d5ed43: /* d5ed43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d5ed46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed47: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5ed4cu); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5ed4c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
  SPILL(); f_d5ed4f(); return;
}

void f_d5ed4f(void) {
  LOAD_REGS();
L_d5ed4f: /* d5ed4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ed51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5ed53: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5ed58u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
/* d5ed58: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* d5ed5b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d5ed5e: mov eax, ebx */
  eax = ebx;
/* d5ed60: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5ed62: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5ed65: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ed67: jae 0xd5edca */
  if (!cf) goto L_d5edca;
L_d5ed69: /* d5ed69: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* d5ed70: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d5ed73: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5ed75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ed76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed77: mov eax, esp */
  eax = esp;
/* d5ed79: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ed7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ed7d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5ed7f: mov eax, esp */
  eax = esp;
/* d5ed81: mov ecx, esi */
  ecx = esi;
/* d5ed83: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ed86: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ed88: call 0xd51942 */
  esp -= 4; W32(esp, 0xd5ed8du); SPILL(); f_d51942(); if (g_unwind) return; RELOAD();
/* d5ed8d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ed90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d5ed93: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* d5ed96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ed97: mov edx, ecx */
  edx = ecx;
/* d5ed99: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d5ed9b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5ed9e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5eda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5eda1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5eda2: mov ecx, esi */
  ecx = esi;
/* d5eda4: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d5edab: call 0xd51b0e */
  esp -= 4; W32(esp, 0xd5edb0u); SPILL(); f_d51b0e(); if (g_unwind) return; RELOAD();
/* d5edb0: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* d5edb3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d5edb6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d5edb8: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* d5edbb: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* d5edbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5edbf: mov esi, ebx */
  esi = ebx;
/* d5edc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edc2: mov eax, esp */
  eax = esp;
/* d5edc4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d5edc6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5edc8: jmp 0xd5ee27 */
  goto L_d5ee27;
L_d5edca: /* d5edca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5edcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edcc: mov eax, esp */
  eax = esp;
/* d5edce: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5edd0: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5edd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edd4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d5edd7: mov ecx, esp */
  ecx = esp;
/* d5edd9: mov eax, ebx */
  eax = ebx;
/* d5eddb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5eddd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5eddf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ede2: mov ecx, esi */
  ecx = esi;
/* d5ede4: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* d5ede7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d5edea: call 0xd51942 */
  esp -= 4; W32(esp, 0xd5edefu); SPILL(); f_d51942(); if (g_unwind) return; RELOAD();
/* d5edef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edf0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d5edf3: mov eax, esp */
  eax = esp;
/* d5edf5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5edf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5edf9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d5edfc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d5edfe: mov eax, esp */
  eax = esp;
/* d5ee00: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d5ee03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5ee06: mov eax, esp */
  eax = esp;
/* d5ee08: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* d5ee0b: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5ee0f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ee11: call 0xd5191a */
  esp -= 4; W32(esp, 0xd5ee16u); SPILL(); f_d5191a(); if (g_unwind) return; RELOAD();
/* d5ee16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ee19: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* d5ee1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ee1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d5ee21: mov eax, esp */
  eax = esp;
/* d5ee23: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d5ee25: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_d5ee27: /* d5ee27: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ee2b: mov eax, esp */
  eax = esp;
/* d5ee2d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5ee2f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d5ee32: call 0xd51b31 */
  esp -= 4; W32(esp, 0xd5ee37u); SPILL(); f_d51b31(); if (g_unwind) return; RELOAD();
/* d5ee37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5ee3a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5ee3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ee3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ee3f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5ee46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5ee47: mov esp, ebp */
  esp = ebp;
/* d5ee49: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5ee4a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5ef00(void) {
  LOAD_REGS();
L_d5ef00: /* d5ef00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5ef02: push 0xd6578b */
  { uint32_t v = 0xd6578bu; esp -= 4; W32(esp, v); }
/* d5ef07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5ef0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ef0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5ef15: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5ef18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ef19: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* d5ef1d: mov al, byte ptr [edi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x45u))) & 0xffu);
/* d5ef20: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ef22: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* d5ef26: je 0xd5ef81 */
  if (zf) goto L_d5ef81;
L_d5ef28: /* d5ef28: push 0xd77fdc */
  { uint32_t v = 0xd77fdcu; esp -= 4; W32(esp, v); }
/* d5ef2d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5ef31: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5ef37u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5ef37: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d5ef3b: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* d5ef43: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd5ef49u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d5ef49: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d5ef4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ef4e: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* d5ef52: mov byte ptr [esp + 0x5c], 1 */
  W8((uint32_t)(esp + 0x5cu), 0x1u);
/* d5ef57: mov dword ptr [esp + 0x2c], 0xd6c2fc */
  W32((uint32_t)(esp + 0x2cu), 0xd6c2fcu);
/* d5ef5f: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5ef65u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5ef65: push 0xd6d71c */
  { uint32_t v = 0xd6d71cu; esp -= 4; W32(esp, v); }
/* d5ef6a: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5ef6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ef6f: mov byte ptr [esp + 0x60], 0 */
  W8((uint32_t)(esp + 0x60u), 0x0u);
/* d5ef74: mov dword ptr [esp + 0x30], 0xd6c314 */
  W32((uint32_t)(esp + 0x30u), 0xd6c314u);
/* d5ef7c: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5ef81u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5ef81: /* d5ef81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5ef82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5ef83: mov ebx, edi */
  ebx = edi;
/* d5ef85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ef86: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* d5ef8a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* d5ef8e: call 0xd51339 */
  esp -= 4; W32(esp, 0xd5ef93u); SPILL(); f_d51339(); if (g_unwind) return; RELOAD();
/* d5ef93: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* d5ef95: mov al, byte ptr [ebp + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* d5ef98: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5ef9a: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* d5ef9d: jne 0xd5efb1 */
  if (!zf) goto L_d5efb1;
L_d5ef9f: /* d5ef9f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5efa1: mov cl, byte ptr [edx + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x45u))) & 0xffu);
/* d5efa4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5efa6: jne 0xd5efb3 */
  if (!zf) goto L_d5efb3;
L_d5efa8: /* d5efa8: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* d5efac: mov edi, eax */
  edi = eax;
/* d5efae: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_d5efb1: /* d5efb1: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
L_d5efb3: /* d5efb3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5efb5: jne 0xd5f025 */
  if (!zf) goto L_d5f025;
L_d5efb7: /* d5efb7: mov al, byte ptr [ebp + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* d5efba: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5efbc: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* d5efbf: jne 0xd5efc4 */
  if (!zf) goto L_d5efc4;
L_d5efc1: /* d5efc1: mov dword ptr [ebp + 4], esi */
  W32((uint32_t)(ebp + 0x4u), esi);
L_d5efc4: /* d5efc4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d5efc8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5efcb: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5efce: jne 0xd5efd5 */
  if (!zf) goto L_d5efd5;
L_d5efd0: /* d5efd0: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* d5efd3: jmp 0xd5efe0 */
  goto L_d5efe0;
L_d5efd5: /* d5efd5: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5efd7: jne 0xd5efdd */
  if (!zf) goto L_d5efdd;
L_d5efd9: /* d5efd9: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* d5efdb: jmp 0xd5efe0 */
  goto L_d5efe0;
L_d5efdd: /* d5efdd: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
L_d5efe0: /* d5efe0: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* d5efe3: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5efe5: jne 0xd5f001 */
  if (!zf) goto L_d5f001;
L_d5efe7: /* d5efe7: mov al, byte ptr [ebp + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* d5efea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5efec: je 0xd5eff2 */
  if (zf) goto L_d5eff2;
L_d5efee: /* d5efee: mov eax, esi */
  eax = esi;
/* d5eff0: jmp 0xd5efff */
  goto L_d5efff;
L_d5eff2: /* d5eff2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5eff3: call 0xd512bc */
  esp -= 4; W32(esp, 0xd5eff8u); SPILL(); f_d512bc(); if (g_unwind) return; RELOAD();
/* d5eff8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d5effc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5efff: /* d5efff: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_d5f001: /* d5f001: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* d5f004: cmp dword ptr [edi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f007: jne 0xd5f082 */
  if (!zf) goto L_d5f082;
L_d5f009: /* d5f009: mov al, byte ptr [ebp + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* d5f00c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f00e: je 0xd5f017 */
  if (zf) goto L_d5f017;
L_d5f010: /* d5f010: mov eax, esi */
  eax = esi;
/* d5f012: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* d5f015: jmp 0xd5f082 */
  goto L_d5f082;
L_d5f017: /* d5f017: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5f018: call 0xd519ab */
  esp -= 4; W32(esp, 0xd5f01du); SPILL(); f_d519ab(); if (g_unwind) return; RELOAD();
/* d5f01d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f020: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* d5f023: jmp 0xd5f082 */
  goto L_d5f082;
L_d5f025: /* d5f025: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d5f027: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* d5f02a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d5f02c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* d5f02e: cmp edi, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f031: jne 0xd5f037 */
  if (!zf) goto L_d5f037;
L_d5f033: /* d5f033: mov esi, edi */
  esi = edi;
/* d5f035: jmp 0xd5f051 */
  goto L_d5f051;
L_d5f037: /* d5f037: mov cl, byte ptr [ebp + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* d5f03a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f03c: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* d5f03f: jne 0xd5f044 */
  if (!zf) goto L_d5f044;
L_d5f041: /* d5f041: mov dword ptr [ebp + 4], esi */
  W32((uint32_t)(ebp + 0x4u), esi);
L_d5f044: /* d5f044: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* d5f046: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* d5f049: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5f04b: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* d5f04e: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
L_d5f051: /* d5f051: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5f055: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5f058: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f05b: jne 0xd5f062 */
  if (!zf) goto L_d5f062;
L_d5f05d: /* d5f05d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d5f060: jmp 0xd5f070 */
  goto L_d5f070;
L_d5f062: /* d5f062: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d5f065: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f067: jne 0xd5f06d */
  if (!zf) goto L_d5f06d;
L_d5f069: /* d5f069: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5f06b: jmp 0xd5f070 */
  goto L_d5f070;
L_d5f06d: /* d5f06d: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
L_d5f070: /* d5f070: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d5f073: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* d5f076: mov dl, byte ptr [ebx + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x44u))) & 0xffu);
/* d5f079: mov al, byte ptr [edi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* d5f07c: mov byte ptr [edi + 0x44], dl */
  W8((uint32_t)(edi + 0x44u), (edx & 0xffu));
/* d5f07f: mov byte ptr [ebx + 0x44], al */
  W8((uint32_t)(ebx + 0x44u), (eax & 0xffu));
L_d5f082: /* d5f082: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5f086: mov cl, byte ptr [eax + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* d5f089: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d5f08d: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5f08f: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f091: jne 0xd5f194 */
  if (!zf) goto L_d5f194;
L_d5f097: /* d5f097: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d5f09a: cmp ebp, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f09d: je 0xd5f191 */
  if (zf) goto L_d5f191;
L_d5f0a3: /* d5f0a3: cmp byte ptr [ebp + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f0a6: jne 0xd5f191 */
  if (!zf) goto L_d5f191;
L_d5f0ac: /* d5f0ac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5f0ae: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f0b0: jne 0xd5f119 */
  if (!zf) goto L_d5f119;
L_d5f0b2: /* d5f0b2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5f0b5: mov cl, byte ptr [eax + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* d5f0b8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f0ba: jne 0xd5f0ce */
  if (!zf) goto L_d5f0ce;
L_d5f0bc: /* d5f0bc: mov byte ptr [eax + 0x44], bl */
  W8((uint32_t)(eax + 0x44u), (ebx & 0xffu));
/* d5f0bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f0c0: mov ecx, edi */
  ecx = edi;
/* d5f0c2: mov byte ptr [esi + 0x44], 0 */
  W8((uint32_t)(esi + 0x44u), 0x0u);
/* d5f0c6: call 0xd512f3 */
  esp -= 4; W32(esp, 0xd5f0cbu); SPILL(); f_d512f3(); if (g_unwind) return; RELOAD();
/* d5f0cb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_d5f0ce: /* d5f0ce: mov cl, byte ptr [eax + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5f0d1: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f0d3: jne 0xd5f14b */
  if (!zf) goto L_d5f14b;
L_d5f0d5: /* d5f0d5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5f0d7: cmp byte ptr [edx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f0da: jne 0xd5f0e4 */
  if (!zf) goto L_d5f0e4;
L_d5f0dc: /* d5f0dc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d5f0df: cmp byte ptr [ecx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f0e2: je 0xd5f147 */
  if (zf) goto L_d5f147;
L_d5f0e4: /* d5f0e4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d5f0e7: cmp byte ptr [ecx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f0ea: jne 0xd5f100 */
  if (!zf) goto L_d5f100;
L_d5f0ec: /* d5f0ec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5f0ee: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5f0f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f0f2: mov ecx, edi */
  ecx = edi;
/* d5f0f4: mov byte ptr [eax + 0x44], 0 */
  W8((uint32_t)(eax + 0x44u), 0x0u);
/* d5f0f8: call 0xd519bf */
  esp -= 4; W32(esp, 0xd5f0fdu); SPILL(); f_d519bf(); if (g_unwind) return; RELOAD();
/* d5f0fd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_d5f100: /* d5f100: mov cl, byte ptr [esi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x44u))) & 0xffu);
/* d5f103: mov byte ptr [eax + 0x44], cl */
  W8((uint32_t)(eax + 0x44u), (ecx & 0xffu));
/* d5f106: mov byte ptr [esi + 0x44], bl */
  W8((uint32_t)(esi + 0x44u), (ebx & 0xffu));
/* d5f109: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* d5f10c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f10d: mov ecx, edi */
  ecx = edi;
/* d5f10f: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5f112: call 0xd512f3 */
  esp -= 4; W32(esp, 0xd5f117u); SPILL(); f_d512f3(); if (g_unwind) return; RELOAD();
/* d5f117: jmp 0xd5f191 */
  goto L_d5f191;
L_d5f119: /* d5f119: mov cl, byte ptr [eax + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* d5f11c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f11e: jne 0xd5f131 */
  if (!zf) goto L_d5f131;
L_d5f120: /* d5f120: mov byte ptr [eax + 0x44], bl */
  W8((uint32_t)(eax + 0x44u), (ebx & 0xffu));
/* d5f123: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f124: mov ecx, edi */
  ecx = edi;
/* d5f126: mov byte ptr [esi + 0x44], 0 */
  W8((uint32_t)(esi + 0x44u), 0x0u);
/* d5f12a: call 0xd519bf */
  esp -= 4; W32(esp, 0xd5f12fu); SPILL(); f_d519bf(); if (g_unwind) return; RELOAD();
/* d5f12f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
L_d5f131: /* d5f131: mov cl, byte ptr [eax + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5f134: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f136: jne 0xd5f14b */
  if (!zf) goto L_d5f14b;
L_d5f138: /* d5f138: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* d5f13b: cmp byte ptr [edx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f13e: jne 0xd5f160 */
  if (!zf) goto L_d5f160;
L_d5f140: /* d5f140: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5f142: cmp byte ptr [ecx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f145: jne 0xd5f160 */
  if (!zf) goto L_d5f160;
L_d5f147: /* d5f147: mov byte ptr [eax + 0x44], 0 */
  W8((uint32_t)(eax + 0x44u), 0x0u);
L_d5f14b: /* d5f14b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d5f14e: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5f151: mov ebp, esi */
  ebp = esi;
/* d5f153: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f155: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d5f158: jne 0xd5f0a3 */
  if (!zf) goto L_d5f0a3;
L_d5f15e: /* d5f15e: jmp 0xd5f191 */
  goto L_d5f191;
L_d5f160: /* d5f160: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5f162: cmp byte ptr [ecx + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d5f165: jne 0xd5f17b */
  if (!zf) goto L_d5f17b;
L_d5f167: /* d5f167: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* d5f16a: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5f16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f16e: mov ecx, edi */
  ecx = edi;
/* d5f170: mov byte ptr [eax + 0x44], 0 */
  W8((uint32_t)(eax + 0x44u), 0x0u);
/* d5f174: call 0xd512f3 */
  esp -= 4; W32(esp, 0xd5f179u); SPILL(); f_d512f3(); if (g_unwind) return; RELOAD();
/* d5f179: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
L_d5f17b: /* d5f17b: mov cl, byte ptr [esi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x44u))) & 0xffu);
/* d5f17e: mov byte ptr [eax + 0x44], cl */
  W8((uint32_t)(eax + 0x44u), (ecx & 0xffu));
/* d5f181: mov byte ptr [esi + 0x44], bl */
  W8((uint32_t)(esi + 0x44u), (ebx & 0xffu));
/* d5f184: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d5f186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f187: mov ecx, edi */
  ecx = edi;
/* d5f189: mov byte ptr [edx + 0x44], bl */
  W8((uint32_t)(edx + 0x44u), (ebx & 0xffu));
/* d5f18c: call 0xd519bf */
  esp -= 4; W32(esp, 0xd5f191u); SPILL(); f_d519bf(); if (g_unwind) return; RELOAD();
L_d5f191: /* d5f191: mov byte ptr [ebp + 0x44], bl */
  W8((uint32_t)(ebp + 0x44u), (ebx & 0xffu));
L_d5f194: /* d5f194: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* d5f198: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d5f19b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* d5f19f: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d5f1a2: mov dword ptr [esp + 0x64], 2 */
  W32((uint32_t)(esp + 0x64u), 0x2u);
/* d5f1aa: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f1b0u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f1b0: mov ecx, esi */
  ecx = esi;
/* d5f1b2: mov dword ptr [esp + 0x64], 0xffffffff */
  W32((uint32_t)(esp + 0x64u), 0xffffffffu);
/* d5f1ba: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f1c0u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f1c0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5f1c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f1c5: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5f1cau); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5f1ca: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* d5f1cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f1d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* d5f1d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f1d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5f1d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f1d5: jbe 0xd5f1db */
  if ((cf | zf)) goto L_d5f1db;
L_d5f1d7: /* d5f1d7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d5f1d8: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_d5f1db: /* d5f1db: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* d5f1df: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* d5f1e3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d5f1e5: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* d5f1e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f1ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f1f1: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f1f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5f2c0(void) {
  LOAD_REGS();
L_d5f2c0: /* d5f2c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d5f2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f2c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f2c6: mov esi, ecx */
  esi = ecx;
/* d5f2c8: call 0xd514dd */
  esp -= 4; W32(esp, 0xd5f2cdu); SPILL(); f_d514dd(); if (g_unwind) return; RELOAD();
/* d5f2cd: mov dword ptr [esi], 0xd6c314 */
  W32((uint32_t)(esi), 0xd6c314u);
/* d5f2d3: mov eax, esi */
  eax = esi;
/* d5f2d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f2d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5f2f0(void) {
  LOAD_REGS();
L_d5f2f0: /* d5f2f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5f2f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f2f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f2f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d5f2f7: mov al, byte ptr [edi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x45u))) & 0xffu);
/* d5f2fa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f2fc: mov ebx, ecx */
  ebx = ecx;
/* d5f2fe: mov esi, edi */
  esi = edi;
/* d5f300: jne 0xd5f328 */
  if (!zf) goto L_d5f328;
L_d5f302: /* d5f302: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5f305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f306: mov ecx, ebx */
  ecx = ebx;
/* d5f308: call 0xd51a3c */
  esp -= 4; W32(esp, 0xd5f30du); SPILL(); f_d51a3c(); if (g_unwind) return; RELOAD();
/* d5f30d: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* d5f30f: mov ecx, edi */
  ecx = edi;
/* d5f311: call 0xd51816 */
  esp -= 4; W32(esp, 0xd5f316u); SPILL(); f_d51816(); if (g_unwind) return; RELOAD();
/* d5f316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f317: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5f31cu); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5f31c: mov al, byte ptr [esi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5f31f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f322: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f324: mov edi, esi */
  edi = esi;
/* d5f326: je 0xd5f302 */
  if (zf) goto L_d5f302;
L_d5f328: /* d5f328: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f32a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f32b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5f340(void) {
  LOAD_REGS();
L_d5f340: /* d5f340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5f341: mov ebp, esp */
  ebp = esp;
/* d5f343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5f345: push 0xd657a0 */
  { uint32_t v = 0xd657a0u; esp -= 4; W32(esp, v); }
/* d5f34a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5f350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5f358: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5f35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5f35c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f35d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d5f360: mov ebx, ecx */
  ebx = ecx;
/* d5f362: mov cl, byte ptr [esi + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5f365: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f367: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d5f36a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f36b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d5f36e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d5f371: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d5f374: jne 0xd5f3bf */
  if (!zf) goto L_d5f3bf;
L_d5f376: /* d5f376: xor ecx, ecx */
  ecx = 0;
/* d5f378: mov cl, byte ptr [esi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x44u))) & 0xffu);
/* d5f37b: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* d5f37e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f37f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d5f382: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5f383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f386: mov ecx, ebx */
  ecx = ebx;
/* d5f388: call 0xd51636 */
  esp -= 4; W32(esp, 0xd5f38du); SPILL(); f_d51636(); if (g_unwind) return; RELOAD();
/* d5f38d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d5f390: mov edi, eax */
  edi = eax;
/* d5f392: mov al, byte ptr [edx + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x45u))) & 0xffu);
/* d5f395: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f397: je 0xd5f39c */
  if (zf) goto L_d5f39c;
L_d5f399: /* d5f399: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d5f39c: /* d5f39c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5f39e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f3a0: mov ecx, ebx */
  ecx = ebx;
/* d5f3a2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d5f3a9: call 0xd51721 */
  esp -= 4; W32(esp, 0xd5f3aeu); SPILL(); f_d51721(); if (g_unwind) return; RELOAD();
/* d5f3ae: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d5f3b0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5f3b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f3b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f3b5: mov ecx, ebx */
  ecx = ebx;
/* d5f3b7: call 0xd51721 */
  esp -= 4; W32(esp, 0xd5f3bcu); SPILL(); f_d51721(); if (g_unwind) return; RELOAD();
/* d5f3bc: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_d5f3bf: /* d5f3bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d5f3c2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d5f3c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f3c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f3c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f3ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f3cf: mov esp, ebp */
  esp = ebp;
/* d5f3d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5f3d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5f3d5(void) {
  LOAD_REGS();
L_d5f3d5: /* d5f3d5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d5f3d8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d5f3db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5f3dc: call 0xd51a3c */
  esp -= 4; W32(esp, 0xd5f3e1u); SPILL(); f_d51a3c(); if (g_unwind) return; RELOAD();
/* d5f3e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5f3e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5f3e5: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd5f3eau); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d5f3ea: guest_badaddr(0xd5f3ea); return;
}

void f_d5f420(void) {
  LOAD_REGS();
L_d5f420: /* d5f420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5f422: push 0xd657d3 */
  { uint32_t v = 0xd657d3u; esp -= 4; W32(esp, v); }
/* d5f427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5f42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5f435: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5f438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f439: mov esi, ecx */
  esi = ecx;
/* d5f43b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f43c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5f440: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd5f446u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f446: mov edi, eax */
  edi = eax;
/* d5f448: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* d5f44c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f44d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5f451: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* d5f459: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5f45fu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5f45f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f460: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5f464: mov byte ptr [esp + 0x70], 1 */
  W8((uint32_t)(esp + 0x70u), 0x1u);
/* d5f469: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd5f46fu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d5f46f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5f473: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f474: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* d5f478: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5f479: mov ecx, esi */
  ecx = esi;
/* d5f47b: mov byte ptr [esp + 0x74], 2 */
  W8((uint32_t)(esp + 0x74u), 0x2u);
/* d5f480: call 0xd5107d */
  esp -= 4; W32(esp, 0xd5f485u); SPILL(); f_d5107d(); if (g_unwind) return; RELOAD();
/* d5f485: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d5f487: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* d5f48b: mov byte ptr [esp + 0x6c], 3 */
  W8((uint32_t)(esp + 0x6cu), 0x3u);
/* d5f490: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f496u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f496: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d5f49a: mov byte ptr [esp + 0x6c], 0 */
  W8((uint32_t)(esp + 0x6cu), 0x0u);
/* d5f49f: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f4a5u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f4a5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d5f4a9: mov dword ptr [esp + 0x6c], 0xffffffff */
  W32((uint32_t)(esp + 0x6cu), 0xffffffffu);
/* d5f4b1: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f4b7u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f4b7: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* d5f4bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f4bc: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* d5f4bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f4c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f4c7: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f4ca: ret 4 */
  esp += 8; SPILL(); return;
}
