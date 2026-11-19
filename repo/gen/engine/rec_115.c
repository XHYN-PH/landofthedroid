#include "recomp.h"
#include "rec_mod.h"

void f_8f709d(void) {
  LOAD_REGS();
L_8f709d: /* 8f709d: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 8f70a3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f70a8: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f70ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ac: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8f70af: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f70b4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f70b4(); return;
}

void f_8f70b4(void) {
  LOAD_REGS();
L_8f70b4: /* 8f70b4: push 0xa1f0a8 */
  { uint32_t v = 0xa1f0a8u; esp -= 4; W32(esp, v); }
/* 8f70b9: push 0xaef0e0 */
  { uint32_t v = 0xaef0e0u; esp -= 4; W32(esp, v); }
/* 8f70be: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f70c4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f70c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f70d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f70d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f70d3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f70d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f70d8: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f70deu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f70de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f70df: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f70e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f70e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f70e7: push 0xaef0e8 */
  { uint32_t v = 0xaef0e8u; esp -= 4; W32(esp, v); }
/* 8f70ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f70ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f70f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f70f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f70f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f70f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f7100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f7101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f7102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f7103: mov esp, ebp */
  esp = ebp;
/* 8f7105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f7106: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f720a(void) {
  LOAD_REGS();
L_8f720a: /* 8f720a: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8f720d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f7212: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8f7215: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7216: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8f7219: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f721eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f721e(); return;
}

void f_8f721e(void) {
  LOAD_REGS();
L_8f721e: /* 8f721e: push 0xa1f088 */
  { uint32_t v = 0xa1f088u; esp -= 4; W32(esp, v); }
/* 8f7223: push 0xaef12c */
  { uint32_t v = 0xaef12cu; esp -= 4; W32(esp, v); }
/* 8f7228: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f722eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f722e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f7231: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7233: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7235: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f723au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f723a(); return;
}

void f_8f723a(void) {
  LOAD_REGS();
L_8f723a: /* 8f723a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8f723d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f7242: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8f7245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7246: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8f7249: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f724eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f724e(); return;
}

void f_8f724e(void) {
  LOAD_REGS();
L_8f724e: /* 8f724e: push 0xa1f06c */
  { uint32_t v = 0xa1f06cu; esp -= 4; W32(esp, v); }
/* 8f7253: push 0xaeef88 */
  { uint32_t v = 0xaeef88u; esp -= 4; W32(esp, v); }
/* 8f7258: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f725eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f725e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f7261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7263: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7265: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f726au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f726a(); return;
}

void f_8f726a(void) {
  LOAD_REGS();
L_8f726a: /* 8f726a: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 8f7270: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f7275: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8f7278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7279: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8f727c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f7281u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f7281(); return;
}

void f_8f7281(void) {
  LOAD_REGS();
L_8f7281: /* 8f7281: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8f7287: push 0xa1f024 */
  { uint32_t v = 0xa1f024u; esp -= 4; W32(esp, v); }
/* 8f728c: push 0xaef134 */
  { uint32_t v = 0xaef134u; esp -= 4; W32(esp, v); }
/* 8f7291: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8f7293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7293: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7296: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7299: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f729c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f729e: je 0x8f72a8 */
  if (zf) goto L_8f72a8;
L_8f72a0: /* 8f72a0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f72a6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f72a6: jmp 0x8f72ad */
  goto L_8f72ad;
L_8f72a8: /* 8f72a8: mov eax, 0xaef13c */
  eax = 0xaef13cu;
L_8f72ad: /* 8f72ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f72ae: push 0xaef148 */
  { uint32_t v = 0xaef148u; esp -= 4; W32(esp, v); }
/* 8f72b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8f72b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f72b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f72b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f72ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f72bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f72c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f72c1: guest_badaddr(0x8f72c1); return;
}

void f_8f7670(void) {
  LOAD_REGS();
L_8f7670: /* 8f7670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f7671: mov ebp, esp */
  ebp = esp;
/* 8f7673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f7675: push 0x9d9483 */
  { uint32_t v = 0x9d9483u; esp -= 4; W32(esp, v); }
/* 8f767a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f7680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f7688: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f768e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f768f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7690: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7691: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f7694: mov eax, ecx */
  eax = ecx;
/* 8f7696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7698: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f769b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f769c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f76a2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f76a9: call 0x6c6780 */
  esp -= 4; W32(esp, 0x8f76aeu); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 8f76ae: mov ebx, 1 */
  ebx = 0x1u;
/* 8f76b3: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f76b9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8f76bc: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f76c2u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f76c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f76c4: jne 0x8f825f */
  if (!zf) goto L_8f825f;
L_8f76ca: /* 8f76ca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f76cd: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 8f76d0: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f76d3: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8f76d6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f76d8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f76dc: je 0x8f7782 */
  if (zf) goto L_8f7782;
L_8f76e2: /* 8f76e2: and dword ptr [eax + 0x88], 0xfffbffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f76ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f76ef: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 8f76f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f76f7: jne 0x8f77bb */
  if (!zf) goto L_8f77bb;
L_8f76fd: /* 8f76fd: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8f7700: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7702: je 0x8f77bb */
  if (zf) goto L_8f77bb;
L_8f7708: /* 8f7708: mov dword ptr [eax + 0x88], ebx */
  W32((uint32_t)(eax + 0x88u), ebx);
/* 8f770e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7711: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 8f7717: lea esi, [ecx - 1] */
  esi = (uint32_t)(ecx + 0xffffffffu);
L_8f771a: /* 8f771a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f771c: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 8f771f: jl 0x8f77bb */
  if ((sf != of)) goto L_8f77bb;
L_8f7725: /* 8f7725: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* 8f772b: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8f772e: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8f7731: cmp dword ptr [ecx + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7734: je 0x8f774f */
  if (zf) goto L_8f774f;
L_8f7736: /* 8f7736: mov dl, byte ptr [ecx + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 8f7739: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f773b: jne 0x8f774f */
  if (!zf) goto L_8f774f;
L_8f773d: /* 8f773d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f7740: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7741: lea ecx, [eax + 0xb0] */
  ecx = (uint32_t)(eax + 0xb0u);
/* 8f7747: call 0x6c44fd */
  esp -= 4; W32(esp, 0x8f774cu); SPILL(); f_6c44fd(); if (g_unwind) return; RELOAD();
/* 8f774c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8f774f: /* 8f774f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8f7750: jmp 0x8f771a */
  goto L_8f771a;
L_8f7782: /* 8f7782: or dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f778c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f778f: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7792: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7798: shr edx, 0x1d */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 29;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8f779b: and dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f779e: mov byte ptr [ebp - 0x87], dl */
  W8((uint32_t)(ebp + 0xffffff79u), (edx & 0xffu));
/* 8f77a4: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f77a7: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f77ad: shr edx, 0x1d */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 29;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8f77b0: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 8f77b2: and dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f77b5: mov byte ptr [ebp - 0x86], dl */
  W8((uint32_t)(ebp + 0xffffff7au), (edx & 0xffu));
L_8f77bb: /* 8f77bb: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f77be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f77c1: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f77c7u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f77c7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f77ca: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f77cd: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f77d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f77d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f77d6: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f77dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f77dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f77de: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8f77e1: jne 0x8f77fb */
  if (!zf) goto L_8f77fb;
L_8f77e3: /* 8f77e3: push 0x45b */
  { uint32_t v = 0x45bu; esp -= 4; W32(esp, v); }
/* 8f77e8: push 0xaef168 */
  { uint32_t v = 0xaef168u; esp -= 4; W32(esp, v); }
/* 8f77ed: push 0xaef174 */
  { uint32_t v = 0xaef174u; esp -= 4; W32(esp, v); }
/* 8f77f2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f77f8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f77f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f77fb: /* 8f77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f77fe: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7801: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f780b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f780e: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7811: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7813: call dword ptr [edx + 0x18c] */
  { uint32_t t = R32((uint32_t)(edx + 0x18cu)); esp -= 4; W32(esp, 0x8f7819u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7819: mov ebx, eax */
  ebx = eax;
/* 8f781b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f781d: je 0x8f7827 */
  if (zf) goto L_8f7827;
L_8f781f: /* 8f781f: mov edi, dword ptr [ebx + 0x4c0] */
  edi = R32((uint32_t)(ebx + 0x4c0u));
/* 8f7825: jmp 0x8f7829 */
  goto L_8f7829;
L_8f7827: /* 8f7827: xor edi, edi */
  edi = 0;
L_8f7829: /* 8f7829: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f782c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f782f: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7832: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7834: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x8f783au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f783a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f783c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f783f: je 0x8f785d */
  if (zf) goto L_8f785d;
L_8f7841: /* 8f7841: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7844: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f7847: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f784d: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7854: jne 0x8f785d */
  if (!zf) goto L_8f785d;
L_8f7856: /* 8f7856: mov ecx, 1 */
  ecx = 0x1u;
/* 8f785b: jmp 0x8f7862 */
  goto L_8f7862;
L_8f785d: /* 8f785d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7860: xor ecx, ecx */
  ecx = 0;
L_8f7862: /* 8f7862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7864: je 0x8f78b8 */
  if (zf) goto L_8f78b8;
L_8f7866: /* 8f7866: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8f7869: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 8f786f: mov esi, 0x80000 */
  esi = 0x80000u;
/* 8f7874: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8f7876: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7878: mov dword ptr [eax + 0x88], edx */
  W32((uint32_t)(eax + 0x88u), edx);
/* 8f787e: je 0x8f78a4 */
  if (zf) goto L_8f78a4;
L_8f7880: /* 8f7880: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7882: je 0x8f7920 */
  if (zf) goto L_8f7920;
L_8f7888: /* 8f7888: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f788d: mov ecx, edi */
  ecx = edi;
/* 8f788f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f7895u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f7895: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7897: je 0x8f7920 */
  if (zf) goto L_8f7920;
L_8f789d: /* 8f789d: mov edi, 1 */
  edi = 0x1u;
/* 8f78a2: jmp 0x8f7922 */
  goto L_8f7922;
L_8f78a4: /* 8f78a4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78a7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f78aa: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* 8f78b0: shr edi, 0x19 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 8f78b3: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f78b6: jmp 0x8f7922 */
  goto L_8f7922;
L_8f78b8: /* 8f78b8: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f78bb: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f78be: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8f78c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78c3: je 0x8f78fa */
  if (zf) goto L_8f78fa;
L_8f78c5: /* 8f78c5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78c7: je 0x8f78ea */
  if (zf) goto L_8f78ea;
L_8f78c9: /* 8f78c9: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f78ce: mov ecx, edi */
  ecx = edi;
/* 8f78d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f78d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f78d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78d8: je 0x8f78ea */
  if (zf) goto L_8f78ea;
L_8f78da: /* 8f78da: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78dd: mov eax, edi */
  eax = edi;
/* 8f78df: xor ecx, ecx */
  ecx = 0;
/* 8f78e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78e3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f78e6: mov eax, ecx */
  eax = ecx;
/* 8f78e8: jmp 0x8f7903 */
  goto L_8f7903;
L_8f78ea: /* 8f78ea: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78ed: xor eax, eax */
  eax = 0;
/* 8f78ef: xor ecx, ecx */
  ecx = 0;
/* 8f78f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78f3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f78f6: mov eax, ecx */
  eax = ecx;
/* 8f78f8: jmp 0x8f7903 */
  goto L_8f7903;
L_8f78fa: /* 8f78fa: xor edx, edx */
  edx = 0;
/* 8f78fc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f78fe: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8f7901: mov eax, edx */
  eax = edx;
L_8f7903: /* 8f7903: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f7906: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 8f790c: shl eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 19;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f790f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7911: mov esi, 0x80000 */
  esi = 0x80000u;
/* 8f7916: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7918: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8f791a: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
L_8f7920: /* 8f7920: xor edi, edi */
  edi = 0;
L_8f7922: /* 8f7922: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7925: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f7928: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 8f792e: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7930: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7932: /* 8f7932: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7934: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7936: /* 8f7936: test dword ptr [ebx + 0x4c4], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4c4u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7940: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7942: /* 8f7942: mov eax, 1 */
  eax = 0x1u;
/* 8f7947: jmp 0x8f794b */
  goto L_8f794b;
L_8f7949: /* 8f7949: xor eax, eax */
  eax = 0;
L_8f794b: /* 8f794b: shl eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f794e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7950: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7955: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7957: mov dword ptr [edx + 0x88], eax */
  W32((uint32_t)(edx + 0x88u), eax);
/* 8f795d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7960: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f7963: test dword ptr [edx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f796d: je 0x8f79df */
  if (zf) goto L_8f79df;
L_8f796f: /* 8f796f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8f7972: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7974: je 0x8f79df */
  if (zf) goto L_8f79df;
L_8f7976: /* 8f7976: mov edx, ecx */
  edx = ecx;
/* 8f7978: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f797b: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 8f7981: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7983: lea ecx, [edx + 0x68] */
  ecx = (uint32_t)(edx + 0x68u);
/* 8f7986: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8f798a: jne 0x8f7a45 */
  if (!zf) goto L_8f7a45;
L_8f7990: /* 8f7990: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7993: jne 0x8f7a45 */
  if (!zf) goto L_8f7a45;
L_8f7999: /* 8f7999: add edx, 0x6c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f799c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f799d: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 8f79a3: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f79a9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f79acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f79ac: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f79af: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f79b2: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 8f79b8: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8f79bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f79be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f79bf: lea eax, [ecx + 0x17c] */
  eax = (uint32_t)(ecx + 0x17cu);
/* 8f79c5: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f79cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f79cc: mov ebx, edx */
  ebx = edx;
/* 8f79ce: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f79d4: call 0x8f48d0 */
  esp -= 4; W32(esp, 0x8f79d9u); SPILL(); f_8f48d0(); if (g_unwind) return; RELOAD();
/* 8f79d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f79dc: /* 8f79dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f79df: /* 8f79df: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f79e2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f79e8: cmp dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f79eb: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f79f2: mov byte ptr [ebp - 0x21], dl */
  W8((uint32_t)(ebp + 0xffffffdfu), (edx & 0xffu));
/* 8f79f5: jne 0x8f7a26 */
  if (!zf) goto L_8f7a26;
L_8f79f7: /* 8f79f7: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 8f79fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f79ff: je 0x8f7a11 */
  if (zf) goto L_8f7a11;
L_8f7a01: /* 8f7a01: test dword ptr [edx + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a07: jne 0x8f7a11 */
  if (!zf) goto L_8f7a11;
L_8f7a09: /* 8f7a09: test dword ptr [eax + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a0f: je 0x8f7a1c */
  if (zf) goto L_8f7a1c;
L_8f7a11: /* 8f7a11: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f7a14: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a16: je 0x8f7a26 */
  if (zf) goto L_8f7a26;
L_8f7a18: /* 8f7a18: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a1a: jne 0x8f7a26 */
  if (!zf) goto L_8f7a26;
L_8f7a1c: /* 8f7a1c: mov byte ptr [eax + 0x90], 2 */
  W8((uint32_t)(eax + 0x90u), 0x2u);
/* 8f7a23: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f7a26: /* 8f7a26: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 8f7a2c: xor esi, esi */
  esi = 0;
/* 8f7a2e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7a30: jne 0x8f7a87 */
  if (!zf) goto L_8f7a87;
L_8f7a32: /* 8f7a32: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f7a35: test dword ptr [edx + 0x88], 0x240000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x240000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a3f: jne 0x8f7a87 */
  if (!zf) goto L_8f7a87;
L_8f7a41: /* 8f7a41: xor eax, eax */
  eax = 0;
/* 8f7a43: jmp 0x8f7a8c */
  goto L_8f7a8c;
L_8f7a45: /* 8f7a45: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 8f7a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7a4c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7a52: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f7a55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7a55: jmp 0x8f79dc */
  goto L_8f79dc;
L_8f7a87: /* 8f7a87: mov eax, 1 */
  eax = 0x1u;
L_8f7a8c: /* 8f7a8c: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7a8f: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7a95: shl eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7a98: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f7a9e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8f7aa0: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
/* 8f7aa6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7aa9: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f7aac: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 8f7ab2: test ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ab8: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7aba: /* 8f7aba: cmp dword ptr [eax + 0x94], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ac0: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7ac2: /* 8f7ac2: xor eax, eax */
  eax = 0;
/* 8f7ac4: jmp 0x8f7acb */
  goto L_8f7acb;
L_8f7ac6: /* 8f7ac6: mov eax, 1 */
  eax = 0x1u;
L_8f7acb: /* 8f7acb: shl eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7ace: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad0: and eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7ad5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad7: mov dword ptr [edx + 0x88], eax */
  W32((uint32_t)(edx + 0x88u), eax);
/* 8f7add: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae0: mov dword ptr [eax + 0x90], esi */
  W32((uint32_t)(eax + 0x90u), esi);
/* 8f7ae6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae9: mov dword ptr [ecx + 0x94], esi */
  W32((uint32_t)(ecx + 0x94u), esi);
/* 8f7aef: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f7af5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7af6: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f7af9: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f7affu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f7aff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b02: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 8f7b08: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 8f7b0e: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8f7b11: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f7b14: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7b17: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f7b1a: xor eax, eax */
  eax = 0;
/* 8f7b1c: mov ebx, ecx */
  ebx = ecx;
/* 8f7b1e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f7b21: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f7b24: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f7b26: mov ecx, ebx */
  ecx = ebx;
/* 8f7b28: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f7b2a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b2d: mov eax, dword ptr [eax + 0xc0] */
  eax = R32((uint32_t)(eax + 0xc0u));
/* 8f7b33: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 8f7b3a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f7b3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7b3d: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f7b43: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f7b49u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f7b49: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8f7b4c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b4f: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7b55: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7b57: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8f7b5e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f7b62: je 0x8f7b6c */
  if (zf) goto L_8f7b6c;
L_8f7b64: /* 8f7b64: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 8f7b6a: jmp 0x8f7b75 */
  goto L_8f7b75;
L_8f7b6c: /* 8f7b6c: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f7b6f: mov edx, dword ptr [edx + 0x4e8] */
  edx = R32((uint32_t)(edx + 0x4e8u));
L_8f7b75: /* 8f7b75: mov ebx, dword ptr [eax + 0x28] */
  ebx = R32((uint32_t)(eax + 0x28u));
/* 8f7b78: mov ebx, dword ptr [ebx + 0xb4] */
  ebx = R32((uint32_t)(ebx + 0xb4u));
/* 8f7b7e: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7b81: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b86: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7b89: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8f7b8c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7b8f: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 8f7b95: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8f7b97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7b9a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8f7b9d: call dword ptr [edi + 0x68] */
  { uint32_t t = R32((uint32_t)(edi + 0x68u)); esp -= 4; W32(esp, 0x8f7ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ba0: mov edi, eax */
  edi = eax;
/* 8f7ba2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ba5: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ba8: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7bae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 8f7bb0: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8f7bb3: jns 0x8f7d41 */
  if (!sf) goto L_8f7d41;
L_8f7bb9: /* 8f7bb9: fld qword ptr [eax + 0x80] */
  { double v = F64((uint32_t)(eax + 0x80u)); FPUSH(v); }
/* 8f7bbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7bc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7bc2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8f7bc5: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0x8f7bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7bcd: je 0x8f7be1 */
  if (zf) goto L_8f7be1;
L_8f7bcf: /* 8f7bcf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7bd2: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 8f7bdc: jmp 0x8f7d41 */
  goto L_8f7d41;
L_8f7be1: /* 8f7be1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7be4: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f7beb: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7bf0: /* 8f7bf0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7bf3: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7bf6: jge 0x8f7d3e */
  if ((sf == of)) goto L_8f7d3e;
L_8f7bfc: /* 8f7bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7bfe: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8f7c01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8f7c03: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 8f7c09: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f7c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7c0e: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7c11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f7c14: je 0x8f7d36 */
  if (zf) goto L_8f7d36;
L_8f7c1a: /* 8f7c1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c1c: je 0x8f7c38 */
  if (zf) goto L_8f7c38;
L_8f7c1e: /* 8f7c1e: mov ecx, ebx */
  ecx = ebx;
/* 8f7c20: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f7c26u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f7c26: test dword ptr [eax + 0x498], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c33: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8f7c36: jne 0x8f7c3f */
  if (!zf) goto L_8f7c3f;
L_8f7c38: /* 8f7c38: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
L_8f7c3f: /* 8f7c3f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f7c46: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7c50: /* 8f7c50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7c53: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7c56: jge 0x8f7d36 */
  if ((sf == of)) goto L_8f7d36;
L_8f7c5c: /* 8f7c5c: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 8f7c5f: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 8f7c62: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f7c65: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f7c68: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c6a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7c6d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f7c6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c71: je 0x8f7c97 */
  if (zf) goto L_8f7c97;
L_8f7c73: /* 8f7c73: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f7c76: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f7c7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7c81: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8f7c84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c86: jne 0x8f7c97 */
  if (!zf) goto L_8f7c97;
L_8f7c88: /* 8f7c88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c8b: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8f7c95: xor esi, esi */
  esi = 0;
L_8f7c97: /* 8f7c97: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7c9a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8f7c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7c9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7ca0: mov ecx, ebx */
  ecx = ebx;
/* 8f7ca2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f7ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7caa: jne 0x8f7d21 */
  if (!zf) goto L_8f7d21;
L_8f7cac: /* 8f7cac: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7caf: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7cb2: jne 0x8f7d08 */
  if (!zf) goto L_8f7d08;
L_8f7cb4: /* 8f7cb4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cb7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8f7cbe: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7cc1: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7cc6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7cc9: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7ccc: movzx edx, word ptr [ecx + 0x44] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x44u)));
/* 8f7cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7cd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cd4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cd7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cdb: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8f7ce1: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f7ce7u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f7ce7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f7cea: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f7ced: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f7cee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f7cf1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f7cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f7cfb: mov ecx, esi */
  ecx = esi;
/* 8f7cfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f7d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7d00: mov cl, byte ptr [ebp - 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7d03: or cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f7d06: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_8f7d08: /* 8f7d08: test byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d0b: je 0x8f7d21 */
  if (zf) goto L_8f7d21;
L_8f7d0d: /* 8f7d0d: movzx edx, word ptr [ebx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x46u)));
/* 8f7d11: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d14: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f7d19: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f7d1b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8f7d21: /* 8f7d21: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d27: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d2a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7d2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7d2e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7d31: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7d36: /* 8f7d36: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 8f7d39: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7d3e: /* 8f7d3e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_8f7d41: /* 8f7d41: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7d47: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7d4du); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7d4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d4f: je 0x8f7d69 */
  if (zf) goto L_8f7d69;
L_8f7d51: /* 8f7d51: push 0x4cb */
  { uint32_t v = 0x4cbu; esp -= 4; W32(esp, v); }
/* 8f7d56: push 0xaef188 */
  { uint32_t v = 0xaef188u; esp -= 4; W32(esp, v); }
/* 8f7d5b: push 0xaef194 */
  { uint32_t v = 0xaef194u; esp -= 4; W32(esp, v); }
/* 8f7d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f7d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f7d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7d69: /* 8f7d69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d6c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f7d72: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8f7d79: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8f7d7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f7d80: /* 8f7d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7d82: jl 0x8f7dae */
  if ((sf != of)) goto L_8f7dae;
L_8f7d84: /* 8f7d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d87: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 8f7d8d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8f7d90: mov eax, ebx */
  eax = ebx;
L_8f7d92: /* 8f7d92: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8f7d94: jae 0x8f7da1 */
  if (!cf) goto L_8f7da1;
L_8f7d96: /* 8f7d96: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7d98: je 0x8f7d9f */
  if (zf) goto L_8f7d9f;
L_8f7d9a: /* 8f7d9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d9d: jmp 0x8f7d92 */
  goto L_8f7d92;
L_8f7d9f: /* 8f7d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8f7da1: /* 8f7da1: jne 0x8f7dab */
  if (!zf) goto L_8f7dab;
L_8f7da3: /* 8f7da3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8f7da5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7da8: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_8f7dab: /* 8f7dab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f7dac: jmp 0x8f7d80 */
  goto L_8f7d80;
L_8f7dae: /* 8f7dae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7db1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f7db8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f7dbeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f7dbe: mov eax, ebx */
  eax = ebx;
/* 8f7dc0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8f7dc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8f7dc7: /* 8f7dc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7dc9: jae 0x8f7f9c */
  if (!cf) goto L_8f7f9c;
L_8f7dcf: /* 8f7dcf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7dd2: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8f7dd5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f7dd7: mov ecx, dword ptr [edx + 0x4b8] */
  ecx = R32((uint32_t)(edx + 0x4b8u));
/* 8f7ddd: mov edi, dword ptr [ecx + eax*8] */
  edi = R32((uint32_t)(ecx + eax*8));
/* 8f7de0: mov ebx, dword ptr [edi + 0x38] */
  ebx = R32((uint32_t)(edi + 0x38u));
/* 8f7de3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f7de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f7de9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f7dec: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8f7def: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7df1: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 8f7df6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7df9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f7dfc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e02u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e02: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8f7e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e06: mov ecx, edi */
  ecx = edi;
/* 8f7e08: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e0eu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e12: mov ecx, eax */
  ecx = eax;
/* 8f7e14: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e1au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e1c: je 0x8f7e30 */
  if (zf) goto L_8f7e30;
L_8f7e1e: /* 8f7e1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e21: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e24: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e27: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e2e: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e30: /* 8f7e30: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 8f7e35: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e38: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e3eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e3e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f7e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e42: mov ecx, edi */
  ecx = edi;
/* 8f7e44: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e4au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e4a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e4e: mov ecx, eax */
  ecx = eax;
/* 8f7e50: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e56u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e58: je 0x8f7e69 */
  if (zf) goto L_8f7e69;
L_8f7e5a: /* 8f7e5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e5d: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e60: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e63: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* 8f7e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e67: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e69: /* 8f7e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8f7e6a: /* 8f7e6a: mov ecx, esi */
  ecx = esi;
/* 8f7e6c: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8f7e72u); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8f7e72: mov esi, eax */
  esi = eax;
/* 8f7e74: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e7b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7e7e: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f7e84u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f7e84: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7e87: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f7e8du); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f7e8d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e92: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e98: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f7e9eu); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f7e9e: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ea2: je 0x8f7ebe */
  if (zf) goto L_8f7ebe;
L_8f7ea4: /* 8f7ea4: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7ea7: lea eax, [ebp - 0x29] */
  eax = (uint32_t)(ebp + 0xffffffd7u);
/* 8f7eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eab: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7eb2: mov byte ptr [ebp - 0x29], dl */
  W8((uint32_t)(ebp + 0xffffffd7u), (edx & 0xffu));
/* 8f7eb5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f7ebbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f7ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7ebe: /* 8f7ebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ec1: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ec4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f7ec7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7ec9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ecc: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f7ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ed3: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eda: mov ecx, edi */
  ecx = edi;
/* 8f7edc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8f7ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ee2: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ee8: mov esi, eax */
  esi = eax;
/* 8f7eea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7ef0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ef2: jne 0x8f7f7f */
  if (!zf) goto L_8f7f7f;
L_8f7ef8: /* 8f7ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7efb: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7f01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f03: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f05: /* 8f7f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f07: je 0x8f7f26 */
  if (zf) goto L_8f7f26;
L_8f7f09: /* 8f7f09: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7f0c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f7f12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7f16: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7f18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7f19: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7f1c: mov ecx, edi */
  ecx = edi;
/* 8f7f1e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f7f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7f24: jmp 0x8f7f59 */
  goto L_8f7f59;
L_8f7f26: /* 8f7f26: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f7f29: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f2c: xor eax, eax */
  eax = 0;
/* 8f7f2e: mov edi, edi */
  edi = edi;
L_8f7f30: /* 8f7f30: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7f32: jge 0x8f7f41 */
  if ((sf == of)) goto L_8f7f41;
L_8f7f34: /* 8f7f34: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f37: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8f7f3a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7f3c: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f3e: /* 8f7f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7f3f: jmp 0x8f7f30 */
  goto L_8f7f30;
L_8f7f41: /* 8f7f41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f7f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7f45: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7f48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f7f4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f7f4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7f53: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f56: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8f7f59: /* 8f7f59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8f7f5e: mov ecx, dword ptr [0xce84e8] */
  ecx = R32((uint32_t)(0xce84e8u));
/* 8f7f64: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f7f67: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7f6a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7f6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8f7f6e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8f7f71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7f7a: jmp 0x8f7dc7 */
  goto L_8f7dc7;
L_8f7f7f: /* 8f7f7f: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7f86: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7f89: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f7f8fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f7f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f92: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8f7f95: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_8f7f9c: /* 8f7f9c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fa2: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f7fa9: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f7fafu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f7faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7fb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fb4: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f7fba: /* 8f7fba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7fbc: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7fc3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f7fc7: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f7fccu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f7fcc: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7fcf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_8f825f: /* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f7752(void) {
  LOAD_REGS();
L_8f7752: /* 8f7752: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7755: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f775a: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8f775d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f775e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8f7761: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f7766u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f7766(); return;
}

void f_8f7766(void) {
  LOAD_REGS();
L_8f7766: /* 8f7766: push 0xa1f298 */
  { uint32_t v = 0xa1f298u; esp -= 4; W32(esp, v); }
/* 8f776b: push 0xaef160 */
  { uint32_t v = 0xaef160u; esp -= 4; W32(esp, v); }
/* 8f7770: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f7776u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f7776: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f7779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f777b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f777d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f7782u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f7782: or dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f778c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f778f: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7792: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7798: shr edx, 0x1d */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 29;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8f779b: and dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f779e: mov byte ptr [ebp - 0x87], dl */
  W8((uint32_t)(ebp + 0xffffff79u), (edx & 0xffu));
/* 8f77a4: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f77a7: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f77ad: shr edx, 0x1d */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 29;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8f77b0: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 8f77b2: and dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f77b5: mov byte ptr [ebp - 0x86], dl */
  W8((uint32_t)(ebp + 0xffffff7au), (edx & 0xffu));
/* 8f77bb: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f77be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8f77c1: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f77c7u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f77c7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f77ca: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f77cd: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8f77d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f77d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f77d6: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8f77dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f77dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f77de: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8f77e1: jne 0x8f77fb */
  if (!zf) goto L_8f77fb;
L_8f77e3: /* 8f77e3: push 0x45b */
  { uint32_t v = 0x45bu; esp -= 4; W32(esp, v); }
/* 8f77e8: push 0xaef168 */
  { uint32_t v = 0xaef168u; esp -= 4; W32(esp, v); }
/* 8f77ed: push 0xaef174 */
  { uint32_t v = 0xaef174u; esp -= 4; W32(esp, v); }
/* 8f77f2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f77f8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f77f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f77fb: /* 8f77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f77fe: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f7801: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f780b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f780e: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7811: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7813: call dword ptr [edx + 0x18c] */
  { uint32_t t = R32((uint32_t)(edx + 0x18cu)); esp -= 4; W32(esp, 0x8f7819u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7819: mov ebx, eax */
  ebx = eax;
/* 8f781b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f781d: je 0x8f7827 */
  if (zf) goto L_8f7827;
L_8f781f: /* 8f781f: mov edi, dword ptr [ebx + 0x4c0] */
  edi = R32((uint32_t)(ebx + 0x4c0u));
/* 8f7825: jmp 0x8f7829 */
  goto L_8f7829;
L_8f7827: /* 8f7827: xor edi, edi */
  edi = 0;
L_8f7829: /* 8f7829: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f782c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8f782f: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7832: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7834: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x8f783au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f783a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f783c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f783f: je 0x8f785d */
  if (zf) goto L_8f785d;
L_8f7841: /* 8f7841: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7844: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f7847: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8f784d: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7854: jne 0x8f785d */
  if (!zf) goto L_8f785d;
L_8f7856: /* 8f7856: mov ecx, 1 */
  ecx = 0x1u;
/* 8f785b: jmp 0x8f7862 */
  goto L_8f7862;
L_8f785d: /* 8f785d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7860: xor ecx, ecx */
  ecx = 0;
L_8f7862: /* 8f7862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7864: je 0x8f78b8 */
  if (zf) goto L_8f78b8;
L_8f7866: /* 8f7866: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8f7869: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 8f786f: mov esi, 0x80000 */
  esi = 0x80000u;
/* 8f7874: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8f7876: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7878: mov dword ptr [eax + 0x88], edx */
  W32((uint32_t)(eax + 0x88u), edx);
/* 8f787e: je 0x8f78a4 */
  if (zf) goto L_8f78a4;
L_8f7880: /* 8f7880: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7882: je 0x8f7920 */
  if (zf) goto L_8f7920;
L_8f7888: /* 8f7888: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f788d: mov ecx, edi */
  ecx = edi;
/* 8f788f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f7895u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f7895: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7897: je 0x8f7920 */
  if (zf) goto L_8f7920;
L_8f789d: /* 8f789d: mov edi, 1 */
  edi = 0x1u;
/* 8f78a2: jmp 0x8f7922 */
  goto L_8f7922;
L_8f78a4: /* 8f78a4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78a7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f78aa: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* 8f78b0: shr edi, 0x19 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 8f78b3: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8f78b6: jmp 0x8f7922 */
  goto L_8f7922;
L_8f78b8: /* 8f78b8: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f78bb: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f78be: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8f78c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78c3: je 0x8f78fa */
  if (zf) goto L_8f78fa;
L_8f78c5: /* 8f78c5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78c7: je 0x8f78ea */
  if (zf) goto L_8f78ea;
L_8f78c9: /* 8f78c9: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8f78ce: mov ecx, edi */
  ecx = edi;
/* 8f78d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f78d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f78d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78d8: je 0x8f78ea */
  if (zf) goto L_8f78ea;
L_8f78da: /* 8f78da: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78dd: mov eax, edi */
  eax = edi;
/* 8f78df: xor ecx, ecx */
  ecx = 0;
/* 8f78e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78e3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f78e6: mov eax, ecx */
  eax = ecx;
/* 8f78e8: jmp 0x8f7903 */
  goto L_8f7903;
L_8f78ea: /* 8f78ea: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f78ed: xor eax, eax */
  eax = 0;
/* 8f78ef: xor ecx, ecx */
  ecx = 0;
/* 8f78f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f78f3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f78f6: mov eax, ecx */
  eax = ecx;
/* 8f78f8: jmp 0x8f7903 */
  goto L_8f7903;
L_8f78fa: /* 8f78fa: xor edx, edx */
  edx = 0;
/* 8f78fc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f78fe: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8f7901: mov eax, edx */
  eax = edx;
L_8f7903: /* 8f7903: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f7906: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 8f790c: shl eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 19;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f790f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7911: mov esi, 0x80000 */
  esi = 0x80000u;
/* 8f7916: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7918: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8f791a: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
L_8f7920: /* 8f7920: xor edi, edi */
  edi = 0;
L_8f7922: /* 8f7922: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7925: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f7928: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 8f792e: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7930: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7932: /* 8f7932: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7934: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7936: /* 8f7936: test dword ptr [ebx + 0x4c4], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4c4u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7940: je 0x8f7949 */
  if (zf) goto L_8f7949;
L_8f7942: /* 8f7942: mov eax, 1 */
  eax = 0x1u;
/* 8f7947: jmp 0x8f794b */
  goto L_8f794b;
L_8f7949: /* 8f7949: xor eax, eax */
  eax = 0;
L_8f794b: /* 8f794b: shl eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f794e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7950: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7955: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7957: mov dword ptr [edx + 0x88], eax */
  W32((uint32_t)(edx + 0x88u), eax);
/* 8f795d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7960: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f7963: test dword ptr [edx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f796d: je 0x8f79df */
  if (zf) goto L_8f79df;
L_8f796f: /* 8f796f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8f7972: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7974: je 0x8f79df */
  if (zf) goto L_8f79df;
L_8f7976: /* 8f7976: mov edx, ecx */
  edx = ecx;
/* 8f7978: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f797b: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 8f7981: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7983: lea ecx, [edx + 0x68] */
  ecx = (uint32_t)(edx + 0x68u);
/* 8f7986: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8f798a: jne 0x8f7a45 */
  if (!zf) goto L_8f7a45;
L_8f7990: /* 8f7990: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7993: jne 0x8f7a45 */
  if (!zf) goto L_8f7a45;
L_8f7999: /* 8f7999: add edx, 0x6c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f799c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f799d: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 8f79a3: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f79a9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f79acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f79ac: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f79af: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f79b2: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 8f79b8: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8f79bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f79be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f79bf: lea eax, [ecx + 0x17c] */
  eax = (uint32_t)(ecx + 0x17cu);
/* 8f79c5: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f79cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f79cc: mov ebx, edx */
  ebx = edx;
/* 8f79ce: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f79d4: call 0x8f48d0 */
  esp -= 4; W32(esp, 0x8f79d9u); SPILL(); f_8f48d0(); if (g_unwind) return; RELOAD();
/* 8f79d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f79dc: /* 8f79dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f79df: /* 8f79df: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f79e2: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 8f79e8: cmp dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f79eb: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f79f2: mov byte ptr [ebp - 0x21], dl */
  W8((uint32_t)(ebp + 0xffffffdfu), (edx & 0xffu));
/* 8f79f5: jne 0x8f7a26 */
  if (!zf) goto L_8f7a26;
L_8f79f7: /* 8f79f7: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 8f79fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f79ff: je 0x8f7a11 */
  if (zf) goto L_8f7a11;
L_8f7a01: /* 8f7a01: test dword ptr [edx + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a07: jne 0x8f7a11 */
  if (!zf) goto L_8f7a11;
L_8f7a09: /* 8f7a09: test dword ptr [eax + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a0f: je 0x8f7a1c */
  if (zf) goto L_8f7a1c;
L_8f7a11: /* 8f7a11: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f7a14: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a16: je 0x8f7a26 */
  if (zf) goto L_8f7a26;
L_8f7a18: /* 8f7a18: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a1a: jne 0x8f7a26 */
  if (!zf) goto L_8f7a26;
L_8f7a1c: /* 8f7a1c: mov byte ptr [eax + 0x90], 2 */
  W8((uint32_t)(eax + 0x90u), 0x2u);
/* 8f7a23: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f7a26: /* 8f7a26: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 8f7a2c: xor esi, esi */
  esi = 0;
/* 8f7a2e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7a30: jne 0x8f7a87 */
  if (!zf) goto L_8f7a87;
L_8f7a32: /* 8f7a32: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8f7a35: test dword ptr [edx + 0x88], 0x240000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x240000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7a3f: jne 0x8f7a87 */
  if (!zf) goto L_8f7a87;
L_8f7a41: /* 8f7a41: xor eax, eax */
  eax = 0;
/* 8f7a43: jmp 0x8f7a8c */
  goto L_8f7a8c;
L_8f7a45: /* 8f7a45: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 8f7a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7a4c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7a52: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f7a55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7a55: jmp 0x8f79dc */
  goto L_8f79dc;
L_8f7a87: /* 8f7a87: mov eax, 1 */
  eax = 0x1u;
L_8f7a8c: /* 8f7a8c: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7a8f: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7a95: shl eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7a98: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f7a9e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8f7aa0: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
/* 8f7aa6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7aa9: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f7aac: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 8f7ab2: test ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ab8: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7aba: /* 8f7aba: cmp dword ptr [eax + 0x94], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ac0: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7ac2: /* 8f7ac2: xor eax, eax */
  eax = 0;
/* 8f7ac4: jmp 0x8f7acb */
  goto L_8f7acb;
L_8f7ac6: /* 8f7ac6: mov eax, 1 */
  eax = 0x1u;
L_8f7acb: /* 8f7acb: shl eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7ace: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad0: and eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7ad5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad7: mov dword ptr [edx + 0x88], eax */
  W32((uint32_t)(edx + 0x88u), eax);
/* 8f7add: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae0: mov dword ptr [eax + 0x90], esi */
  W32((uint32_t)(eax + 0x90u), esi);
/* 8f7ae6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae9: mov dword ptr [ecx + 0x94], esi */
  W32((uint32_t)(ecx + 0x94u), esi);
/* 8f7aef: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f7af5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7af6: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f7af9: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f7affu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f7aff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b02: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 8f7b08: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 8f7b0e: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8f7b11: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f7b14: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7b17: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f7b1a: xor eax, eax */
  eax = 0;
/* 8f7b1c: mov ebx, ecx */
  ebx = ecx;
/* 8f7b1e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f7b21: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f7b24: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f7b26: mov ecx, ebx */
  ecx = ebx;
/* 8f7b28: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f7b2a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b2d: mov eax, dword ptr [eax + 0xc0] */
  eax = R32((uint32_t)(eax + 0xc0u));
/* 8f7b33: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 8f7b3a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f7b3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7b3d: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f7b43: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f7b49u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f7b49: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8f7b4c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b4f: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7b55: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7b57: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8f7b5e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f7b62: je 0x8f7b6c */
  if (zf) goto L_8f7b6c;
L_8f7b64: /* 8f7b64: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 8f7b6a: jmp 0x8f7b75 */
  goto L_8f7b75;
L_8f7b6c: /* 8f7b6c: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f7b6f: mov edx, dword ptr [edx + 0x4e8] */
  edx = R32((uint32_t)(edx + 0x4e8u));
L_8f7b75: /* 8f7b75: mov ebx, dword ptr [eax + 0x28] */
  ebx = R32((uint32_t)(eax + 0x28u));
/* 8f7b78: mov ebx, dword ptr [ebx + 0xb4] */
  ebx = R32((uint32_t)(ebx + 0xb4u));
/* 8f7b7e: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7b81: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b86: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7b89: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8f7b8c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7b8f: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 8f7b95: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8f7b97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7b9a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8f7b9d: call dword ptr [edi + 0x68] */
  { uint32_t t = R32((uint32_t)(edi + 0x68u)); esp -= 4; W32(esp, 0x8f7ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ba0: mov edi, eax */
  edi = eax;
/* 8f7ba2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ba5: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ba8: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7bae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 8f7bb0: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8f7bb3: jns 0x8f7d41 */
  if (!sf) goto L_8f7d41;
L_8f7bb9: /* 8f7bb9: fld qword ptr [eax + 0x80] */
  { double v = F64((uint32_t)(eax + 0x80u)); FPUSH(v); }
/* 8f7bbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7bc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7bc2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8f7bc5: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0x8f7bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7bcd: je 0x8f7be1 */
  if (zf) goto L_8f7be1;
L_8f7bcf: /* 8f7bcf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7bd2: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 8f7bdc: jmp 0x8f7d41 */
  goto L_8f7d41;
L_8f7be1: /* 8f7be1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7be4: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f7beb: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7bf0: /* 8f7bf0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7bf3: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7bf6: jge 0x8f7d3e */
  if ((sf == of)) goto L_8f7d3e;
L_8f7bfc: /* 8f7bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7bfe: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8f7c01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8f7c03: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 8f7c09: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f7c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7c0e: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7c11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f7c14: je 0x8f7d36 */
  if (zf) goto L_8f7d36;
L_8f7c1a: /* 8f7c1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c1c: je 0x8f7c38 */
  if (zf) goto L_8f7c38;
L_8f7c1e: /* 8f7c1e: mov ecx, ebx */
  ecx = ebx;
/* 8f7c20: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f7c26u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f7c26: test dword ptr [eax + 0x498], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c33: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8f7c36: jne 0x8f7c3f */
  if (!zf) goto L_8f7c3f;
L_8f7c38: /* 8f7c38: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
L_8f7c3f: /* 8f7c3f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f7c46: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7c50: /* 8f7c50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7c53: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7c56: jge 0x8f7d36 */
  if ((sf == of)) goto L_8f7d36;
L_8f7c5c: /* 8f7c5c: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 8f7c5f: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 8f7c62: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f7c65: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f7c68: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c6a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7c6d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f7c6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c71: je 0x8f7c97 */
  if (zf) goto L_8f7c97;
L_8f7c73: /* 8f7c73: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f7c76: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f7c7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7c81: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8f7c84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c86: jne 0x8f7c97 */
  if (!zf) goto L_8f7c97;
L_8f7c88: /* 8f7c88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c8b: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8f7c95: xor esi, esi */
  esi = 0;
L_8f7c97: /* 8f7c97: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7c9a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8f7c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7c9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7ca0: mov ecx, ebx */
  ecx = ebx;
/* 8f7ca2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f7ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7caa: jne 0x8f7d21 */
  if (!zf) goto L_8f7d21;
L_8f7cac: /* 8f7cac: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7caf: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7cb2: jne 0x8f7d08 */
  if (!zf) goto L_8f7d08;
L_8f7cb4: /* 8f7cb4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cb7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8f7cbe: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7cc1: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7cc6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7cc9: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7ccc: movzx edx, word ptr [ecx + 0x44] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x44u)));
/* 8f7cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7cd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cd4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cd7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cdb: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8f7ce1: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f7ce7u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f7ce7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f7cea: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f7ced: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f7cee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f7cf1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f7cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f7cfb: mov ecx, esi */
  ecx = esi;
/* 8f7cfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f7d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7d00: mov cl, byte ptr [ebp - 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7d03: or cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f7d06: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_8f7d08: /* 8f7d08: test byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d0b: je 0x8f7d21 */
  if (zf) goto L_8f7d21;
L_8f7d0d: /* 8f7d0d: movzx edx, word ptr [ebx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x46u)));
/* 8f7d11: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d14: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f7d19: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f7d1b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8f7d21: /* 8f7d21: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d27: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d2a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7d2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7d2e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7d31: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7d36: /* 8f7d36: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 8f7d39: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7d3e: /* 8f7d3e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_8f7d41: /* 8f7d41: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7d47: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7d4du); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7d4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d4f: je 0x8f7d69 */
  if (zf) goto L_8f7d69;
L_8f7d51: /* 8f7d51: push 0x4cb */
  { uint32_t v = 0x4cbu; esp -= 4; W32(esp, v); }
/* 8f7d56: push 0xaef188 */
  { uint32_t v = 0xaef188u; esp -= 4; W32(esp, v); }
/* 8f7d5b: push 0xaef194 */
  { uint32_t v = 0xaef194u; esp -= 4; W32(esp, v); }
/* 8f7d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f7d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f7d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7d69: /* 8f7d69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d6c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f7d72: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8f7d79: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8f7d7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f7d80: /* 8f7d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7d82: jl 0x8f7dae */
  if ((sf != of)) goto L_8f7dae;
L_8f7d84: /* 8f7d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d87: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 8f7d8d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8f7d90: mov eax, ebx */
  eax = ebx;
L_8f7d92: /* 8f7d92: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8f7d94: jae 0x8f7da1 */
  if (!cf) goto L_8f7da1;
L_8f7d96: /* 8f7d96: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7d98: je 0x8f7d9f */
  if (zf) goto L_8f7d9f;
L_8f7d9a: /* 8f7d9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d9d: jmp 0x8f7d92 */
  goto L_8f7d92;
L_8f7d9f: /* 8f7d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8f7da1: /* 8f7da1: jne 0x8f7dab */
  if (!zf) goto L_8f7dab;
L_8f7da3: /* 8f7da3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8f7da5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7da8: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_8f7dab: /* 8f7dab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f7dac: jmp 0x8f7d80 */
  goto L_8f7d80;
L_8f7dae: /* 8f7dae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7db1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f7db8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f7dbeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f7dbe: mov eax, ebx */
  eax = ebx;
/* 8f7dc0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8f7dc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8f7dc7: /* 8f7dc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7dc9: jae 0x8f7f9c */
  if (!cf) goto L_8f7f9c;
L_8f7dcf: /* 8f7dcf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7dd2: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8f7dd5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f7dd7: mov ecx, dword ptr [edx + 0x4b8] */
  ecx = R32((uint32_t)(edx + 0x4b8u));
/* 8f7ddd: mov edi, dword ptr [ecx + eax*8] */
  edi = R32((uint32_t)(ecx + eax*8));
/* 8f7de0: mov ebx, dword ptr [edi + 0x38] */
  ebx = R32((uint32_t)(edi + 0x38u));
/* 8f7de3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f7de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f7de9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f7dec: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8f7def: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7df1: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 8f7df6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7df9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f7dfc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e02u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e02: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8f7e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e06: mov ecx, edi */
  ecx = edi;
/* 8f7e08: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e0eu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e12: mov ecx, eax */
  ecx = eax;
/* 8f7e14: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e1au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e1c: je 0x8f7e30 */
  if (zf) goto L_8f7e30;
L_8f7e1e: /* 8f7e1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e21: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e24: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e27: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e2e: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e30: /* 8f7e30: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 8f7e35: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e38: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e3eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e3e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f7e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e42: mov ecx, edi */
  ecx = edi;
/* 8f7e44: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e4au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e4a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e4e: mov ecx, eax */
  ecx = eax;
/* 8f7e50: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e56u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e58: je 0x8f7e69 */
  if (zf) goto L_8f7e69;
L_8f7e5a: /* 8f7e5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e5d: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e60: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e63: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* 8f7e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e67: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e69: /* 8f7e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8f7e6a: /* 8f7e6a: mov ecx, esi */
  ecx = esi;
/* 8f7e6c: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8f7e72u); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8f7e72: mov esi, eax */
  esi = eax;
/* 8f7e74: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e7b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7e7e: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f7e84u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f7e84: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7e87: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f7e8du); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f7e8d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e92: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e98: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f7e9eu); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f7e9e: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ea2: je 0x8f7ebe */
  if (zf) goto L_8f7ebe;
L_8f7ea4: /* 8f7ea4: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7ea7: lea eax, [ebp - 0x29] */
  eax = (uint32_t)(ebp + 0xffffffd7u);
/* 8f7eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eab: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7eb2: mov byte ptr [ebp - 0x29], dl */
  W8((uint32_t)(ebp + 0xffffffd7u), (edx & 0xffu));
/* 8f7eb5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f7ebbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f7ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7ebe: /* 8f7ebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ec1: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ec4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f7ec7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7ec9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ecc: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f7ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ed3: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eda: mov ecx, edi */
  ecx = edi;
/* 8f7edc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8f7ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ee2: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ee8: mov esi, eax */
  esi = eax;
/* 8f7eea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7ef0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ef2: jne 0x8f7f7f */
  if (!zf) goto L_8f7f7f;
L_8f7ef8: /* 8f7ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7efb: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7f01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f03: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f05: /* 8f7f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f07: je 0x8f7f26 */
  if (zf) goto L_8f7f26;
L_8f7f09: /* 8f7f09: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7f0c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f7f12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7f16: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7f18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7f19: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7f1c: mov ecx, edi */
  ecx = edi;
/* 8f7f1e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f7f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7f24: jmp 0x8f7f59 */
  goto L_8f7f59;
L_8f7f26: /* 8f7f26: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f7f29: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f2c: xor eax, eax */
  eax = 0;
/* 8f7f2e: mov edi, edi */
  edi = edi;
L_8f7f30: /* 8f7f30: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7f32: jge 0x8f7f41 */
  if ((sf == of)) goto L_8f7f41;
L_8f7f34: /* 8f7f34: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f37: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8f7f3a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7f3c: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f3e: /* 8f7f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7f3f: jmp 0x8f7f30 */
  goto L_8f7f30;
L_8f7f41: /* 8f7f41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f7f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7f45: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7f48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f7f4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f7f4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7f53: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f56: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8f7f59: /* 8f7f59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8f7f5e: mov ecx, dword ptr [0xce84e8] */
  ecx = R32((uint32_t)(0xce84e8u));
/* 8f7f64: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f7f67: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7f6a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7f6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8f7f6e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8f7f71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7f7a: jmp 0x8f7dc7 */
  goto L_8f7dc7;
L_8f7f7f: /* 8f7f7f: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7f86: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7f89: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f7f8fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f7f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f92: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8f7f95: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_8f7f9c: /* 8f7f9c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fa2: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f7fa9: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f7fafu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f7faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7fb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fb4: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f7fba: /* 8f7fba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7fbc: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7fc3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f7fc7: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f7fccu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f7fcc: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7fcf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f7a57(void) {
  LOAD_REGS();
L_8f7a57: /* 8f7a57: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7a5a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f7a5f: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8f7a62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7a63: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8f7a66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f7a6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f7a6b(); return;
}

void f_8f7a6b(void) {
  LOAD_REGS();
L_8f7a6b: /* 8f7a6b: push 0xa1f264 */
  { uint32_t v = 0xa1f264u; esp -= 4; W32(esp, v); }
/* 8f7a70: push 0xaef180 */
  { uint32_t v = 0xaef180u; esp -= 4; W32(esp, v); }
/* 8f7a75: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f7a7bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f7a7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f7a7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7a80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7a82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f7a87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f7a87: mov eax, 1 */
  eax = 0x1u;
/* 8f7a8c: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f7a8f: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7a95: shl eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7a98: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8f7a9e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8f7aa0: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
/* 8f7aa6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7aa9: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 8f7aac: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 8f7ab2: test ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ab8: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7aba: /* 8f7aba: cmp dword ptr [eax + 0x94], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ac0: jne 0x8f7ac6 */
  if (!zf) goto L_8f7ac6;
L_8f7ac2: /* 8f7ac2: xor eax, eax */
  eax = 0;
/* 8f7ac4: jmp 0x8f7acb */
  goto L_8f7acb;
L_8f7ac6: /* 8f7ac6: mov eax, 1 */
  eax = 0x1u;
L_8f7acb: /* 8f7acb: shl eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f7ace: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad0: and eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f7ad5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8f7ad7: mov dword ptr [edx + 0x88], eax */
  W32((uint32_t)(edx + 0x88u), eax);
/* 8f7add: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae0: mov dword ptr [eax + 0x90], esi */
  W32((uint32_t)(eax + 0x90u), esi);
/* 8f7ae6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ae9: mov dword ptr [ecx + 0x94], esi */
  W32((uint32_t)(ecx + 0x94u), esi);
/* 8f7aef: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 8f7af5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7af6: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f7af9: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8f7affu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8f7aff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b02: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 8f7b08: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 8f7b0e: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8f7b11: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8f7b14: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7b17: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f7b1a: xor eax, eax */
  eax = 0;
/* 8f7b1c: mov ebx, ecx */
  ebx = ecx;
/* 8f7b1e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8f7b21: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8f7b24: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8f7b26: mov ecx, ebx */
  ecx = ebx;
/* 8f7b28: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8f7b2a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b2d: mov eax, dword ptr [eax + 0xc0] */
  eax = R32((uint32_t)(eax + 0xc0u));
/* 8f7b33: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 8f7b3a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f7b3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7b3d: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8f7b43: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8f7b49u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8f7b49: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8f7b4c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7b4f: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7b55: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7b57: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8f7b5e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f7b62: je 0x8f7b6c */
  if (zf) goto L_8f7b6c;
L_8f7b64: /* 8f7b64: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 8f7b6a: jmp 0x8f7b75 */
  goto L_8f7b75;
L_8f7b6c: /* 8f7b6c: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8f7b6f: mov edx, dword ptr [edx + 0x4e8] */
  edx = R32((uint32_t)(edx + 0x4e8u));
L_8f7b75: /* 8f7b75: mov ebx, dword ptr [eax + 0x28] */
  ebx = R32((uint32_t)(eax + 0x28u));
/* 8f7b78: mov ebx, dword ptr [ebx + 0xb4] */
  ebx = R32((uint32_t)(ebx + 0xb4u));
/* 8f7b7e: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7b81: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b86: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7b89: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8f7b8c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7b8f: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 8f7b95: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8f7b97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f7b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7b99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7b9a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8f7b9d: call dword ptr [edi + 0x68] */
  { uint32_t t = R32((uint32_t)(edi + 0x68u)); esp -= 4; W32(esp, 0x8f7ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ba0: mov edi, eax */
  edi = eax;
/* 8f7ba2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ba5: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ba8: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7bae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 8f7bb0: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8f7bb3: jns 0x8f7d41 */
  if (!sf) goto L_8f7d41;
L_8f7bb9: /* 8f7bb9: fld qword ptr [eax + 0x80] */
  { double v = F64((uint32_t)(eax + 0x80u)); FPUSH(v); }
/* 8f7bbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7bc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7bc2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8f7bc5: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0x8f7bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7bcd: je 0x8f7be1 */
  if (zf) goto L_8f7be1;
L_8f7bcf: /* 8f7bcf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7bd2: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 8f7bdc: jmp 0x8f7d41 */
  goto L_8f7d41;
L_8f7be1: /* 8f7be1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7be4: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8f7beb: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7bf0: /* 8f7bf0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7bf3: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7bf6: jge 0x8f7d3e */
  if ((sf == of)) goto L_8f7d3e;
L_8f7bfc: /* 8f7bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7bfe: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8f7c01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8f7c03: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 8f7c09: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f7c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7c0e: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7c11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f7c14: je 0x8f7d36 */
  if (zf) goto L_8f7d36;
L_8f7c1a: /* 8f7c1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c1c: je 0x8f7c38 */
  if (zf) goto L_8f7c38;
L_8f7c1e: /* 8f7c1e: mov ecx, ebx */
  ecx = ebx;
/* 8f7c20: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f7c26u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f7c26: test dword ptr [eax + 0x498], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c33: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8f7c36: jne 0x8f7c3f */
  if (!zf) goto L_8f7c3f;
L_8f7c38: /* 8f7c38: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
L_8f7c3f: /* 8f7c3f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f7c46: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7c50: /* 8f7c50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7c53: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7c56: jge 0x8f7d36 */
  if ((sf == of)) goto L_8f7d36;
L_8f7c5c: /* 8f7c5c: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 8f7c5f: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 8f7c62: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f7c65: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f7c68: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c6a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7c6d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f7c6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c71: je 0x8f7c97 */
  if (zf) goto L_8f7c97;
L_8f7c73: /* 8f7c73: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f7c76: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f7c7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7c81: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8f7c84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c86: jne 0x8f7c97 */
  if (!zf) goto L_8f7c97;
L_8f7c88: /* 8f7c88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c8b: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8f7c95: xor esi, esi */
  esi = 0;
L_8f7c97: /* 8f7c97: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7c9a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8f7c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7c9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7ca0: mov ecx, ebx */
  ecx = ebx;
/* 8f7ca2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f7ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7caa: jne 0x8f7d21 */
  if (!zf) goto L_8f7d21;
L_8f7cac: /* 8f7cac: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7caf: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7cb2: jne 0x8f7d08 */
  if (!zf) goto L_8f7d08;
L_8f7cb4: /* 8f7cb4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cb7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8f7cbe: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7cc1: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7cc6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7cc9: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7ccc: movzx edx, word ptr [ecx + 0x44] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x44u)));
/* 8f7cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7cd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cd4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cd7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cdb: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8f7ce1: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f7ce7u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f7ce7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f7cea: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f7ced: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f7cee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f7cf1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f7cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f7cfb: mov ecx, esi */
  ecx = esi;
/* 8f7cfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f7d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7d00: mov cl, byte ptr [ebp - 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7d03: or cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f7d06: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_8f7d08: /* 8f7d08: test byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d0b: je 0x8f7d21 */
  if (zf) goto L_8f7d21;
L_8f7d0d: /* 8f7d0d: movzx edx, word ptr [ebx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x46u)));
/* 8f7d11: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d14: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f7d19: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f7d1b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8f7d21: /* 8f7d21: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d27: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d2a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7d2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7d2e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7d31: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7d36: /* 8f7d36: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 8f7d39: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7d3e: /* 8f7d3e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_8f7d41: /* 8f7d41: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7d47: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7d4du); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7d4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d4f: je 0x8f7d69 */
  if (zf) goto L_8f7d69;
L_8f7d51: /* 8f7d51: push 0x4cb */
  { uint32_t v = 0x4cbu; esp -= 4; W32(esp, v); }
/* 8f7d56: push 0xaef188 */
  { uint32_t v = 0xaef188u; esp -= 4; W32(esp, v); }
/* 8f7d5b: push 0xaef194 */
  { uint32_t v = 0xaef194u; esp -= 4; W32(esp, v); }
/* 8f7d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f7d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f7d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7d69: /* 8f7d69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d6c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f7d72: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8f7d79: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8f7d7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f7d80: /* 8f7d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7d82: jl 0x8f7dae */
  if ((sf != of)) goto L_8f7dae;
L_8f7d84: /* 8f7d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d87: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 8f7d8d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8f7d90: mov eax, ebx */
  eax = ebx;
L_8f7d92: /* 8f7d92: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8f7d94: jae 0x8f7da1 */
  if (!cf) goto L_8f7da1;
L_8f7d96: /* 8f7d96: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7d98: je 0x8f7d9f */
  if (zf) goto L_8f7d9f;
L_8f7d9a: /* 8f7d9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d9d: jmp 0x8f7d92 */
  goto L_8f7d92;
L_8f7d9f: /* 8f7d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8f7da1: /* 8f7da1: jne 0x8f7dab */
  if (!zf) goto L_8f7dab;
L_8f7da3: /* 8f7da3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8f7da5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7da8: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_8f7dab: /* 8f7dab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f7dac: jmp 0x8f7d80 */
  goto L_8f7d80;
L_8f7dae: /* 8f7dae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7db1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f7db8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f7dbeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f7dbe: mov eax, ebx */
  eax = ebx;
/* 8f7dc0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8f7dc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8f7dc7: /* 8f7dc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7dc9: jae 0x8f7f9c */
  if (!cf) goto L_8f7f9c;
L_8f7dcf: /* 8f7dcf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7dd2: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8f7dd5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f7dd7: mov ecx, dword ptr [edx + 0x4b8] */
  ecx = R32((uint32_t)(edx + 0x4b8u));
/* 8f7ddd: mov edi, dword ptr [ecx + eax*8] */
  edi = R32((uint32_t)(ecx + eax*8));
/* 8f7de0: mov ebx, dword ptr [edi + 0x38] */
  ebx = R32((uint32_t)(edi + 0x38u));
/* 8f7de3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f7de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f7de9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f7dec: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8f7def: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7df1: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 8f7df6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7df9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f7dfc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e02u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e02: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8f7e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e06: mov ecx, edi */
  ecx = edi;
/* 8f7e08: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e0eu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e12: mov ecx, eax */
  ecx = eax;
/* 8f7e14: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e1au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e1c: je 0x8f7e30 */
  if (zf) goto L_8f7e30;
L_8f7e1e: /* 8f7e1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e21: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e24: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e27: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e2e: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e30: /* 8f7e30: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 8f7e35: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e38: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e3eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e3e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f7e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e42: mov ecx, edi */
  ecx = edi;
/* 8f7e44: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e4au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e4a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e4e: mov ecx, eax */
  ecx = eax;
/* 8f7e50: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e56u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e58: je 0x8f7e69 */
  if (zf) goto L_8f7e69;
L_8f7e5a: /* 8f7e5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e5d: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e60: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e63: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* 8f7e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e67: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e69: /* 8f7e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8f7e6a: /* 8f7e6a: mov ecx, esi */
  ecx = esi;
/* 8f7e6c: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8f7e72u); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8f7e72: mov esi, eax */
  esi = eax;
/* 8f7e74: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e7b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7e7e: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f7e84u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f7e84: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7e87: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f7e8du); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f7e8d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e92: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e98: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f7e9eu); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f7e9e: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ea2: je 0x8f7ebe */
  if (zf) goto L_8f7ebe;
L_8f7ea4: /* 8f7ea4: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7ea7: lea eax, [ebp - 0x29] */
  eax = (uint32_t)(ebp + 0xffffffd7u);
/* 8f7eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eab: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7eb2: mov byte ptr [ebp - 0x29], dl */
  W8((uint32_t)(ebp + 0xffffffd7u), (edx & 0xffu));
/* 8f7eb5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f7ebbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f7ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7ebe: /* 8f7ebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ec1: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ec4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f7ec7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7ec9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ecc: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f7ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ed3: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eda: mov ecx, edi */
  ecx = edi;
/* 8f7edc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8f7ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ee2: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ee8: mov esi, eax */
  esi = eax;
/* 8f7eea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7ef0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ef2: jne 0x8f7f7f */
  if (!zf) goto L_8f7f7f;
L_8f7ef8: /* 8f7ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7efb: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7f01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f03: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f05: /* 8f7f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f07: je 0x8f7f26 */
  if (zf) goto L_8f7f26;
L_8f7f09: /* 8f7f09: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7f0c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f7f12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7f16: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7f18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7f19: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7f1c: mov ecx, edi */
  ecx = edi;
/* 8f7f1e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f7f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7f24: jmp 0x8f7f59 */
  goto L_8f7f59;
L_8f7f26: /* 8f7f26: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f7f29: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f2c: xor eax, eax */
  eax = 0;
/* 8f7f2e: mov edi, edi */
  edi = edi;
L_8f7f30: /* 8f7f30: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7f32: jge 0x8f7f41 */
  if ((sf == of)) goto L_8f7f41;
L_8f7f34: /* 8f7f34: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f37: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8f7f3a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7f3c: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f3e: /* 8f7f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7f3f: jmp 0x8f7f30 */
  goto L_8f7f30;
L_8f7f41: /* 8f7f41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f7f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7f45: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7f48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f7f4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f7f4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7f53: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f56: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8f7f59: /* 8f7f59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8f7f5e: mov ecx, dword ptr [0xce84e8] */
  ecx = R32((uint32_t)(0xce84e8u));
/* 8f7f64: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f7f67: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7f6a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7f6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8f7f6e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8f7f71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7f7a: jmp 0x8f7dc7 */
  goto L_8f7dc7;
L_8f7f7f: /* 8f7f7f: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7f86: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7f89: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f7f8fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f7f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f92: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8f7f95: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_8f7f9c: /* 8f7f9c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fa2: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f7fa9: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f7fafu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f7faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7fb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fb4: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f7fba: /* 8f7fba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7fbc: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7fc3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f7fc7: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f7fccu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f7fcc: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7fcf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f7bed(void) {
  LOAD_REGS();
L_8f7bed: /* 8f7bed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8f7bf0: /* 8f7bf0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7bf3: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7bf6: jge 0x8f7d3e */
  if ((sf == of)) goto L_8f7d3e;
L_8f7bfc: /* 8f7bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7bfe: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8f7c01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8f7c03: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 8f7c09: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f7c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7c0e: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7c11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f7c14: je 0x8f7d36 */
  if (zf) goto L_8f7d36;
L_8f7c1a: /* 8f7c1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c1c: je 0x8f7c38 */
  if (zf) goto L_8f7c38;
L_8f7c1e: /* 8f7c1e: mov ecx, ebx */
  ecx = ebx;
/* 8f7c20: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f7c26u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f7c26: test dword ptr [eax + 0x498], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c33: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8f7c36: jne 0x8f7c3f */
  if (!zf) goto L_8f7c3f;
L_8f7c38: /* 8f7c38: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
L_8f7c3f: /* 8f7c3f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f7c46: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7c50: /* 8f7c50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7c53: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7c56: jge 0x8f7d36 */
  if ((sf == of)) goto L_8f7d36;
L_8f7c5c: /* 8f7c5c: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 8f7c5f: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 8f7c62: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f7c65: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f7c68: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c6a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7c6d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f7c6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c71: je 0x8f7c97 */
  if (zf) goto L_8f7c97;
L_8f7c73: /* 8f7c73: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f7c76: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f7c7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7c81: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8f7c84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c86: jne 0x8f7c97 */
  if (!zf) goto L_8f7c97;
L_8f7c88: /* 8f7c88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c8b: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8f7c95: xor esi, esi */
  esi = 0;
L_8f7c97: /* 8f7c97: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7c9a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8f7c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7c9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7ca0: mov ecx, ebx */
  ecx = ebx;
/* 8f7ca2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f7ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7caa: jne 0x8f7d21 */
  if (!zf) goto L_8f7d21;
L_8f7cac: /* 8f7cac: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7caf: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7cb2: jne 0x8f7d08 */
  if (!zf) goto L_8f7d08;
L_8f7cb4: /* 8f7cb4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cb7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8f7cbe: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7cc1: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7cc6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7cc9: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7ccc: movzx edx, word ptr [ecx + 0x44] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x44u)));
/* 8f7cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7cd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cd4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cd7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cdb: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8f7ce1: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f7ce7u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f7ce7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f7cea: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f7ced: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f7cee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f7cf1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f7cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f7cfb: mov ecx, esi */
  ecx = esi;
/* 8f7cfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f7d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7d00: mov cl, byte ptr [ebp - 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7d03: or cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f7d06: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_8f7d08: /* 8f7d08: test byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d0b: je 0x8f7d21 */
  if (zf) goto L_8f7d21;
L_8f7d0d: /* 8f7d0d: movzx edx, word ptr [ebx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x46u)));
/* 8f7d11: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d14: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f7d19: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f7d1b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8f7d21: /* 8f7d21: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d27: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d2a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7d2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7d2e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7d31: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7d36: /* 8f7d36: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 8f7d39: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7d3e: /* 8f7d3e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7d41: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7d47: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7d4du); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7d4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d4f: je 0x8f7d69 */
  if (zf) goto L_8f7d69;
L_8f7d51: /* 8f7d51: push 0x4cb */
  { uint32_t v = 0x4cbu; esp -= 4; W32(esp, v); }
/* 8f7d56: push 0xaef188 */
  { uint32_t v = 0xaef188u; esp -= 4; W32(esp, v); }
/* 8f7d5b: push 0xaef194 */
  { uint32_t v = 0xaef194u; esp -= 4; W32(esp, v); }
/* 8f7d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f7d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f7d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7d69: /* 8f7d69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d6c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f7d72: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8f7d79: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8f7d7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f7d80: /* 8f7d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7d82: jl 0x8f7dae */
  if ((sf != of)) goto L_8f7dae;
L_8f7d84: /* 8f7d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d87: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 8f7d8d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8f7d90: mov eax, ebx */
  eax = ebx;
L_8f7d92: /* 8f7d92: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8f7d94: jae 0x8f7da1 */
  if (!cf) goto L_8f7da1;
L_8f7d96: /* 8f7d96: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7d98: je 0x8f7d9f */
  if (zf) goto L_8f7d9f;
L_8f7d9a: /* 8f7d9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d9d: jmp 0x8f7d92 */
  goto L_8f7d92;
L_8f7d9f: /* 8f7d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8f7da1: /* 8f7da1: jne 0x8f7dab */
  if (!zf) goto L_8f7dab;
L_8f7da3: /* 8f7da3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8f7da5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7da8: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_8f7dab: /* 8f7dab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f7dac: jmp 0x8f7d80 */
  goto L_8f7d80;
L_8f7dae: /* 8f7dae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7db1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f7db8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f7dbeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f7dbe: mov eax, ebx */
  eax = ebx;
/* 8f7dc0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8f7dc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8f7dc7: /* 8f7dc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7dc9: jae 0x8f7f9c */
  if (!cf) goto L_8f7f9c;
L_8f7dcf: /* 8f7dcf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7dd2: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8f7dd5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f7dd7: mov ecx, dword ptr [edx + 0x4b8] */
  ecx = R32((uint32_t)(edx + 0x4b8u));
/* 8f7ddd: mov edi, dword ptr [ecx + eax*8] */
  edi = R32((uint32_t)(ecx + eax*8));
/* 8f7de0: mov ebx, dword ptr [edi + 0x38] */
  ebx = R32((uint32_t)(edi + 0x38u));
/* 8f7de3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f7de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f7de9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f7dec: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8f7def: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7df1: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 8f7df6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7df9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f7dfc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e02u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e02: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8f7e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e06: mov ecx, edi */
  ecx = edi;
/* 8f7e08: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e0eu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e12: mov ecx, eax */
  ecx = eax;
/* 8f7e14: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e1au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e1c: je 0x8f7e30 */
  if (zf) goto L_8f7e30;
L_8f7e1e: /* 8f7e1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e21: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e24: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e27: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e2e: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e30: /* 8f7e30: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 8f7e35: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e38: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e3eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e3e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f7e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e42: mov ecx, edi */
  ecx = edi;
/* 8f7e44: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e4au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e4a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e4e: mov ecx, eax */
  ecx = eax;
/* 8f7e50: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e56u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e58: je 0x8f7e69 */
  if (zf) goto L_8f7e69;
L_8f7e5a: /* 8f7e5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e5d: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e60: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e63: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* 8f7e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e67: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e69: /* 8f7e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8f7e6a: /* 8f7e6a: mov ecx, esi */
  ecx = esi;
/* 8f7e6c: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8f7e72u); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8f7e72: mov esi, eax */
  esi = eax;
/* 8f7e74: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e7b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7e7e: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f7e84u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f7e84: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7e87: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f7e8du); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f7e8d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e92: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e98: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f7e9eu); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f7e9e: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ea2: je 0x8f7ebe */
  if (zf) goto L_8f7ebe;
L_8f7ea4: /* 8f7ea4: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7ea7: lea eax, [ebp - 0x29] */
  eax = (uint32_t)(ebp + 0xffffffd7u);
/* 8f7eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eab: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7eb2: mov byte ptr [ebp - 0x29], dl */
  W8((uint32_t)(ebp + 0xffffffd7u), (edx & 0xffu));
/* 8f7eb5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f7ebbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f7ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7ebe: /* 8f7ebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ec1: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ec4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f7ec7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7ec9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ecc: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f7ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ed3: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eda: mov ecx, edi */
  ecx = edi;
/* 8f7edc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8f7ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ee2: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ee8: mov esi, eax */
  esi = eax;
/* 8f7eea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7ef0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ef2: jne 0x8f7f7f */
  if (!zf) goto L_8f7f7f;
L_8f7ef8: /* 8f7ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7efb: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7f01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f03: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f05: /* 8f7f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f07: je 0x8f7f26 */
  if (zf) goto L_8f7f26;
L_8f7f09: /* 8f7f09: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7f0c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f7f12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7f16: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7f18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7f19: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7f1c: mov ecx, edi */
  ecx = edi;
/* 8f7f1e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f7f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7f24: jmp 0x8f7f59 */
  goto L_8f7f59;
L_8f7f26: /* 8f7f26: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f7f29: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f2c: xor eax, eax */
  eax = 0;
/* 8f7f2e: mov edi, edi */
  edi = edi;
L_8f7f30: /* 8f7f30: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7f32: jge 0x8f7f41 */
  if ((sf == of)) goto L_8f7f41;
L_8f7f34: /* 8f7f34: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f37: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8f7f3a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7f3c: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f3e: /* 8f7f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7f3f: jmp 0x8f7f30 */
  goto L_8f7f30;
L_8f7f41: /* 8f7f41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f7f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7f45: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7f48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f7f4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f7f4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7f53: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f56: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8f7f59: /* 8f7f59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8f7f5e: mov ecx, dword ptr [0xce84e8] */
  ecx = R32((uint32_t)(0xce84e8u));
/* 8f7f64: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f7f67: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7f6a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7f6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8f7f6e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8f7f71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7f7a: jmp 0x8f7dc7 */
  goto L_8f7dc7;
L_8f7f7f: /* 8f7f7f: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7f86: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7f89: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f7f8fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f7f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f92: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8f7f95: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_8f7f9c: /* 8f7f9c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fa2: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f7fa9: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f7fafu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f7faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7fb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fb4: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f7fba: /* 8f7fba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7fbc: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7fc3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f7fc7: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f7fccu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f7fcc: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7fcf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f7c48(void) {
  LOAD_REGS();
  goto L_8f7c48;
L_8f7bf0: /* 8f7bf0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f7bf3: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7bf6: jge 0x8f7d3e */
  if ((sf == of)) goto L_8f7d3e;
L_8f7bfc: /* 8f7bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7bfe: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8f7c01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8f7c03: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 8f7c09: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8f7c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7c0e: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7c11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f7c14: je 0x8f7d36 */
  if (zf) goto L_8f7d36;
L_8f7c1a: /* 8f7c1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c1c: je 0x8f7c38 */
  if (zf) goto L_8f7c38;
L_8f7c1e: /* 8f7c1e: mov ecx, ebx */
  ecx = ebx;
/* 8f7c20: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8f7c26u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8f7c26: test dword ptr [eax + 0x498], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c33: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8f7c36: jne 0x8f7c3f */
  if (!zf) goto L_8f7c3f;
L_8f7c38: /* 8f7c38: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
L_8f7c3f: /* 8f7c3f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8f7c46: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7c48: /* 8f7c48: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8f7c4f: nop  */
L_8f7c50: /* 8f7c50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7c53: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7c56: jge 0x8f7d36 */
  if ((sf == of)) goto L_8f7d36;
L_8f7c5c: /* 8f7c5c: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 8f7c5f: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 8f7c62: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8f7c65: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8f7c68: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c6a: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7c6d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f7c6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c71: je 0x8f7c97 */
  if (zf) goto L_8f7c97;
L_8f7c73: /* 8f7c73: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 8f7c76: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8f7c7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f7c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7c81: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8f7c84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7c86: jne 0x8f7c97 */
  if (!zf) goto L_8f7c97;
L_8f7c88: /* 8f7c88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7c8b: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 8f7c95: xor esi, esi */
  esi = 0;
L_8f7c97: /* 8f7c97: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8f7c9a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8f7c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f7c9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7c9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f7ca0: mov ecx, ebx */
  ecx = ebx;
/* 8f7ca2: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f7ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7caa: jne 0x8f7d21 */
  if (!zf) goto L_8f7d21;
L_8f7cac: /* 8f7cac: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f7caf: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7cb2: jne 0x8f7d08 */
  if (!zf) goto L_8f7d08;
L_8f7cb4: /* 8f7cb4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cb7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8f7cbe: mov esi, dword ptr [ecx + 0x68] */
  esi = R32((uint32_t)(ecx + 0x68u));
/* 8f7cc1: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7cc6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7cc9: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8f7ccc: movzx edx, word ptr [ecx + 0x44] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x44u)));
/* 8f7cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7cd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cd4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7cd7: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cdb: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8f7ce1: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x8f7ce7u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 8f7ce7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8f7cea: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 8f7ced: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8f7cee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8f7cf1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8f7cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7cf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8f7cfb: mov ecx, esi */
  ecx = esi;
/* 8f7cfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8f7d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7d00: mov cl, byte ptr [ebp - 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7d03: or cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8f7d06: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_8f7d08: /* 8f7d08: test byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d0b: je 0x8f7d21 */
  if (zf) goto L_8f7d21;
L_8f7d0d: /* 8f7d0d: movzx edx, word ptr [ebx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x46u)));
/* 8f7d11: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d14: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f7d19: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8f7d1b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8f7d21: /* 8f7d21: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7d24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d27: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7d2a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7d2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7d2e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7d31: jmp 0x8f7c50 */
  goto L_8f7c50;
L_8f7d36: /* 8f7d36: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 8f7d39: jmp 0x8f7bf0 */
  goto L_8f7bf0;
L_8f7d3e: /* 8f7d3e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7d41: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7d47: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7d4du); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7d4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7d4f: je 0x8f7d69 */
  if (zf) goto L_8f7d69;
L_8f7d51: /* 8f7d51: push 0x4cb */
  { uint32_t v = 0x4cbu; esp -= 4; W32(esp, v); }
/* 8f7d56: push 0xaef188 */
  { uint32_t v = 0xaef188u; esp -= 4; W32(esp, v); }
/* 8f7d5b: push 0xaef194 */
  { uint32_t v = 0xaef194u; esp -= 4; W32(esp, v); }
/* 8f7d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f7d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f7d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7d69: /* 8f7d69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d6c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8f7d72: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8f7d79: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8f7d7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f7d80: /* 8f7d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7d82: jl 0x8f7dae */
  if ((sf != of)) goto L_8f7dae;
L_8f7d84: /* 8f7d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7d87: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 8f7d8d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8f7d90: mov eax, ebx */
  eax = ebx;
L_8f7d92: /* 8f7d92: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8f7d94: jae 0x8f7da1 */
  if (!cf) goto L_8f7da1;
L_8f7d96: /* 8f7d96: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7d98: je 0x8f7d9f */
  if (zf) goto L_8f7d9f;
L_8f7d9a: /* 8f7d9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7d9d: jmp 0x8f7d92 */
  goto L_8f7d92;
L_8f7d9f: /* 8f7d9f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8f7da1: /* 8f7da1: jne 0x8f7dab */
  if (!zf) goto L_8f7dab;
L_8f7da3: /* 8f7da3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8f7da5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f7da8: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_8f7dab: /* 8f7dab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8f7dac: jmp 0x8f7d80 */
  goto L_8f7d80;
L_8f7dae: /* 8f7dae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7db1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f7db8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f7dbeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f7dbe: mov eax, ebx */
  eax = ebx;
/* 8f7dc0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8f7dc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8f7dc7: /* 8f7dc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7dc9: jae 0x8f7f9c */
  if (!cf) goto L_8f7f9c;
L_8f7dcf: /* 8f7dcf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7dd2: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8f7dd5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8f7dd7: mov ecx, dword ptr [edx + 0x4b8] */
  ecx = R32((uint32_t)(edx + 0x4b8u));
/* 8f7ddd: mov edi, dword ptr [ecx + eax*8] */
  edi = R32((uint32_t)(ecx + eax*8));
/* 8f7de0: mov ebx, dword ptr [edi + 0x38] */
  ebx = R32((uint32_t)(edi + 0x38u));
/* 8f7de3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8f7de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8f7de9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 8f7dec: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8f7def: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7df1: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 8f7df6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7df9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8f7dfc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e02u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e02: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8f7e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e06: mov ecx, edi */
  ecx = edi;
/* 8f7e08: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e0eu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f7e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e12: mov ecx, eax */
  ecx = eax;
/* 8f7e14: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e1au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e1c: je 0x8f7e30 */
  if (zf) goto L_8f7e30;
L_8f7e1e: /* 8f7e1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e21: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e24: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e27: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 8f7e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e2e: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e30: /* 8f7e30: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 8f7e35: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e38: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f7e3eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f7e3e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f7e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e42: mov ecx, edi */
  ecx = edi;
/* 8f7e44: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x8f7e4au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 8f7e4a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8f7e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e4e: mov ecx, eax */
  ecx = eax;
/* 8f7e50: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8f7e56u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8f7e56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7e58: je 0x8f7e69 */
  if (zf) goto L_8f7e69;
L_8f7e5a: /* 8f7e5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7e5d: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8f7e60: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7e63: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* 8f7e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7e67: jmp 0x8f7e6a */
  goto L_8f7e6a;
L_8f7e69: /* 8f7e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8f7e6a: /* 8f7e6a: mov ecx, esi */
  ecx = esi;
/* 8f7e6c: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8f7e72u); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8f7e72: mov esi, eax */
  esi = eax;
/* 8f7e74: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e7b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7e7e: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f7e84u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f7e84: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7e87: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x8f7e8du); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 8f7e8d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8f7e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7e91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7e92: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7e98: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f7e9eu); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f7e9e: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ea2: je 0x8f7ebe */
  if (zf) goto L_8f7ebe;
L_8f7ea4: /* 8f7ea4: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 8f7ea7: lea eax, [ebp - 0x29] */
  eax = (uint32_t)(ebp + 0xffffffd7u);
/* 8f7eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eab: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7eb2: mov byte ptr [ebp - 0x29], dl */
  W8((uint32_t)(ebp + 0xffffffd7u), (edx & 0xffu));
/* 8f7eb5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8f7ebbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8f7ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f7ebe: /* 8f7ebe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7ec1: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7ec4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8f7ec7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7ec9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ecc: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8f7ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7ed3: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7eda: mov ecx, edi */
  ecx = edi;
/* 8f7edc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8f7ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7ee2: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7ee8: mov esi, eax */
  esi = eax;
/* 8f7eea: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f7ef0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f7ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7ef2: jne 0x8f7f7f */
  if (!zf) goto L_8f7f7f;
L_8f7ef8: /* 8f7ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7efb: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 8f7f01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f03: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f05: /* 8f7f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7f07: je 0x8f7f26 */
  if (zf) goto L_8f7f26;
L_8f7f09: /* 8f7f09: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f7f0c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 8f7f12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f7f16: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f7f18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f7f19: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7f1c: mov ecx, edi */
  ecx = edi;
/* 8f7f1e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8f7f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f7f24: jmp 0x8f7f59 */
  goto L_8f7f59;
L_8f7f26: /* 8f7f26: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8f7f29: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f2c: xor eax, eax */
  eax = 0;
/* 8f7f2e: mov edi, edi */
  edi = edi;
L_8f7f30: /* 8f7f30: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7f32: jge 0x8f7f41 */
  if ((sf == of)) goto L_8f7f41;
L_8f7f34: /* 8f7f34: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f37: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8f7f3a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7f3c: je 0x8f7f59 */
  if (zf) goto L_8f7f59;
L_8f7f3e: /* 8f7f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f7f3f: jmp 0x8f7f30 */
  goto L_8f7f30;
L_8f7f41: /* 8f7f41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f7f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7f45: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f7f48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f7f4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f7f4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f7f53: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f7f56: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8f7f59: /* 8f7f59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8f7f5e: mov ecx, dword ptr [0xce84e8] */
  ecx = R32((uint32_t)(0xce84e8u));
/* 8f7f64: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8f7f67: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8f7f6a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8f7f6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8f7f6e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8f7f71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f7f77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f7f7a: jmp 0x8f7dc7 */
  goto L_8f7dc7;
L_8f7f7f: /* 8f7f7f: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f7f86: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8f7f89: call dword ptr [0xcfac88] */
  esp -= 4; W32(esp, 0x8f7f8fu); SPILL(); f_4e42cd(); if (g_unwind) return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */ RELOAD();
/* 8f7f8f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f7f92: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8f7f95: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_8f7f9c: /* 8f7f9c: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fa2: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f7fa9: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f7fafu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f7faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f7fb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fb4: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f7fba: /* 8f7fba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f7fbc: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8f7fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f7fc3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8f7fc7: call 0x6c76cb */
  esp -= 4; W32(esp, 0x8f7fccu); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 8f7fcc: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8f7fcf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8064(void) {
  LOAD_REGS();
L_8f8064: /* 8f8064: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8f8067: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f806c: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8f806f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8070: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8f8073: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8078u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8078(); return;
}

void f_8f8078(void) {
  LOAD_REGS();
  goto L_8f8078;
L_8f7fd2: /* 8f7fd2: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8f7fd5: jae 0x8f80bc */
  if (!cf) goto L_8f80bc;
L_8f7fdb: /* 8f7fdb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f7fde: add ebx, 0xb0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f7fe4: xor edi, edi */
  edi = 0;
L_8f7fe6: /* 8f7fe6: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f7fe9: jge 0x8f8094 */
  if ((sf == of)) goto L_8f8094;
L_8f7fef: /* 8f7fef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8f7ff1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8f7ff4: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f7ff6: jne 0x8f8061 */
  if (!zf) goto L_8f8061;
L_8f7ff8: /* 8f7ff8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f7ffa: jge 0x8f8014 */
  if ((sf == of)) goto L_8f8014;
L_8f7ffc: /* 8f7ffc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8f8001: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8006: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8f800b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8011u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8014: /* 8f8014: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8017: jle 0x8f8031 */
  if ((zf || sf != of)) goto L_8f8031;
L_8f8019: /* 8f8019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8f801e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8023: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8f8028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f802eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f802e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8031: /* 8f8031: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8f8034: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8f8037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8039: jle 0x8f8053 */
  if ((zf || sf != of)) goto L_8f8053;
L_8f803b: /* 8f803b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8f8040: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8f8045: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8f804a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8050u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8053: /* 8f8053: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8058: mov ecx, ebx */
  ecx = ebx;
/* 8f805a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8f8060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8f8060: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8f8061: /* 8f8061: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f8062: jmp 0x8f7fe6 */
  goto L_8f7fe6;
L_8f8078: /* 8f8078: push 0xa1f240 */
  { uint32_t v = 0xa1f240u; esp -= 4; W32(esp, v); }
/* 8f807d: push 0xaef1b8 */
  { uint32_t v = 0xaef1b8u; esp -= 4; W32(esp, v); }
/* 8f8082: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8088u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8088: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f808b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f808d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f808f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8094u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8094: /* 8f8094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8096: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8099: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8f809c: mov eax, dword ptr [edx + 0xbc] */
  eax = R32((uint32_t)(edx + 0xbcu));
/* 8f80a2: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8f80a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8f80a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8f80ab: mov dl, byte ptr [ebp - 0x86] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff7au))) & 0xffu);
/* 8f80b1: mov byte ptr [eax + 8], dl */
  W8((uint32_t)(eax + 0x8u), (edx & 0xffu));
/* 8f80b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f80b7: jmp 0x8f7fd2 */
  goto L_8f7fd2;
L_8f80bc: /* 8f80bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80bf: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f80c2: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f80cc: je 0x8f80f1 */
  if (zf) goto L_8f80f1;
L_8f80ce: /* 8f80ce: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8f80d1: add edi, 0x3ecc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3eccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8f80d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f80d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f80db: mov ecx, edi */
  ecx = edi;
/* 8f80dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f80e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f80e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f80e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f80e8: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 8f80eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f80ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f80f1: /* 8f80f1: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8f80f8: xor ebx, ebx */
  ebx = 0;
/* 8f80fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8124(void) {
  LOAD_REGS();
L_8f8124: /* 8f8124: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8f8127: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f812c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8f812f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f8130: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8f8133: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8138u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8138(); return;
}

void f_8f8138(void) {
  LOAD_REGS();
  goto L_8f8138;
L_8f8100: /* 8f8100: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8103: jge 0x8f816d */
  if ((sf == of)) goto L_8f816d;
L_8f8105: /* 8f8105: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8f8108: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 8f810b: lea esi, [ecx + 0xb0] */
  esi = (uint32_t)(ecx + 0xb0u);
/* 8f8111: xor eax, eax */
  eax = 0;
L_8f8113: /* 8f8113: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8116: jge 0x8f8154 */
  if ((sf == of)) goto L_8f8154;
L_8f8118: /* 8f8118: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f811a: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8f811d: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f811f: je 0x8f816a */
  if (zf) goto L_8f816a;
L_8f8121: /* 8f8121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f8122: jmp 0x8f8113 */
  goto L_8f8113;
L_8f8138: /* 8f8138: push 0xa1f224 */
  { uint32_t v = 0xa1f224u; esp -= 4; W32(esp, v); }
/* 8f813d: push 0xaef1c0 */
  { uint32_t v = 0xaef1c0u; esp -= 4; W32(esp, v); }
/* 8f8142: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8148u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8148: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f814b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f814d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f814f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8154u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8154: /* 8f8154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f8156: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f8158: mov ecx, esi */
  ecx = esi;
/* 8f815a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f8160u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f8160: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f8162: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8164: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f8167: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8f816a: /* 8f816a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8f816b: jmp 0x8f8100 */
  goto L_8f8100;
L_8f816d: /* 8f816d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8172: je 0x8f81a5 */
  if (zf) goto L_8f81a5;
L_8f8174: /* 8f8174: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 8f8177: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f817du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f817d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f8180: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* 8f8186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8188: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 8f818d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f818f: push 0xaef1c8 */
  { uint32_t v = 0xaef1c8u; esp -= 4; W32(esp, v); }
/* 8f8194: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 8f8199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f819a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8f81a0u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8f81a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f81a3: jmp 0x8f81ba */
  goto L_8f81ba;
L_8f81a5: /* 8f81a5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8f81a8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f81ab: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8f81ae: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* 8f81b1: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 8f81b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81b7: mov dword ptr [ecx + 0x7c], eax */
  W32((uint32_t)(ecx + 0x7cu), eax);
L_8f81ba: /* 8f81ba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81bd: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f81c0: test dword ptr [eax + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81ca: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81cc: /* 8f81cc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f81cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81d1: jne 0x8f81e9 */
  if (!zf) goto L_8f81e9;
L_8f81d3: /* 8f81d3: test dword ptr [eax + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81dd: jne 0x8f81f0 */
  if (!zf) goto L_8f81f0;
L_8f81df: /* 8f81df: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f81e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f81e7: je 0x8f81f0 */
  if (zf) goto L_8f81f0;
L_8f81e9: /* 8f81e9: mov eax, 1 */
  eax = 0x1u;
/* 8f81ee: jmp 0x8f81f2 */
  goto L_8f81f2;
L_8f81f0: /* 8f81f0: xor eax, eax */
  eax = 0;
L_8f81f2: /* 8f81f2: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 8f81f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f81fb: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 8f8201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8203: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f8205: /* 8f8205: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8f8208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f820a: jne 0x8f8210 */
  if (!zf) goto L_8f8210;
L_8f820c: /* 8f820c: xor eax, eax */
  eax = 0;
/* 8f820e: jmp 0x8f8215 */
  goto L_8f8215;
L_8f8210: /* 8f8210: mov eax, 1 */
  eax = 0x1u;
L_8f8215: /* 8f8215: mov dword ptr [ecx + 0x8c], eax */
  W32((uint32_t)(ecx + 0x8cu), eax);
/* 8f821b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f821e: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8f8221: and dword ptr [eax + 0x88], 0xfff7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8f822b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f822e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 8f8231: mov dl, byte ptr [ebp - 0x21] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
/* 8f8234: mov byte ptr [ecx + 0x90], dl */
  W8((uint32_t)(ecx + 0x90u), (edx & 0xffu));
/* 8f823a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f823d: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8f8240: and dword ptr [eax + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8f824a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8f824d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8f8253u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8f8253: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f8256: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f825a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8f825fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8f825f: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8f8265: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8269: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f826fu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f826f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f827b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f827c: mov esp, ebp */
  esp = ebp;
/* 8f827e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f827f: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8280(void) {
  LOAD_REGS();
L_8f8280: /* 8f8280: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8f8283: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8288: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8f828b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f828c: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 8f828f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8294u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8294(); return;
}

void f_8f8294(void) {
  LOAD_REGS();
L_8f8294: /* 8f8294: push 0xa1f1dc */
  { uint32_t v = 0xa1f1dcu; esp -= 4; W32(esp, v); }
/* 8f8299: push 0xaef1a8 */
  { uint32_t v = 0xaef1a8u; esp -= 4; W32(esp, v); }
/* 8f829e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f82a4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f82a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f82a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f82a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f82ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f82b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f82b0(); return;
}

void f_8f82b0(void) {
  LOAD_REGS();
L_8f82b0: /* 8f82b0: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8f82b6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f82bb: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8f82be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f82bf: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8f82c2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f82c7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f82c7(); return;
}

void f_8f82c7(void) {
  LOAD_REGS();
L_8f82c7: /* 8f82c7: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8f82cd: push 0xa1f194 */
  { uint32_t v = 0xa1f194u; esp -= 4; W32(esp, v); }
/* 8f82d2: push 0xaef234 */
  { uint32_t v = 0xaef234u; esp -= 4; W32(esp, v); }
/* 8f82d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8f82d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f82d9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f82dc: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8f82df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f82e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f82e4: je 0x8f82ee */
  if (zf) goto L_8f82ee;
L_8f82e6: /* 8f82e6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f82ecu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f82ec: jmp 0x8f82f3 */
  goto L_8f82f3;
L_8f82ee: /* 8f82ee: mov eax, 0xaef23c */
  eax = 0xaef23cu;
L_8f82f3: /* 8f82f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f82f4: push 0xaef248 */
  { uint32_t v = 0xaef248u; esp -= 4; W32(esp, v); }
/* 8f82f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8f82fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f82fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8300: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8302: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8307u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8307: guest_badaddr(0x8f8307); return;
}

void f_8f8640(void) {
  LOAD_REGS();
L_8f8640: /* 8f8640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8641: mov ebp, esp */
  ebp = esp;
/* 8f8643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8645: push 0x9d94a0 */
  { uint32_t v = 0x9d94a0u; esp -= 4; W32(esp, v); }
/* 8f864a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8658: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f865b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f865c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f865d: mov esi, ecx */
  esi = ecx;
/* 8f865f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8f8662: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8664: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8665: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8668: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f866f: jne 0x8f8689 */
  if (!zf) goto L_8f8689;
L_8f8671: /* 8f8671: push 0x5e0 */
  { uint32_t v = 0x5e0u; esp -= 4; W32(esp, v); }
/* 8f8676: push 0xaef410 */
  { uint32_t v = 0xaef410u; esp -= 4; W32(esp, v); }
/* 8f867b: push 0xaef41c */
  { uint32_t v = 0xaef41cu; esp -= 4; W32(esp, v); }
/* 8f8680: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8686u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8686: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8689: /* 8f8689: mov ecx, esi */
  ecx = esi;
/* 8f868b: call 0x6c9caf */
  esp -= 4; W32(esp, 0x8f8690u); SPILL(); f_6c9caf(); if (g_unwind) return; RELOAD();
/* 8f8690: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8692: jne 0x8f86f7 */
  if (!zf) goto L_8f86f7;
L_8f8694: /* 8f8694: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 8f8697: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8f869a: cmp dword ptr [ecx + eax*4 + 0xeb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0xeb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f86a1: je 0x8f86bb */
  if (zf) goto L_8f86bb;
L_8f86a3: /* 8f86a3: push 0x5e3 */
  { uint32_t v = 0x5e3u; esp -= 4; W32(esp, v); }
/* 8f86a8: push 0xaef428 */
  { uint32_t v = 0xaef428u; esp -= 4; W32(esp, v); }
/* 8f86ad: push 0xaef434 */
  { uint32_t v = 0xaef434u; esp -= 4; W32(esp, v); }
/* 8f86b2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f86b8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f86b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f86bb: /* 8f86bb: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8f86be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f86c0: je 0x8f86cf */
  if (zf) goto L_8f86cf;
L_8f86c2: /* 8f86c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f86c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f86c6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8f86c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f86c8: mov dword ptr [esi + 0x68], 0 */
  W32((uint32_t)(esi + 0x68u), 0x0u);
L_8f86cf: /* 8f86cf: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8f86d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f86d4: je 0x8f86f0 */
  if (zf) goto L_8f86f0;
L_8f86d6: /* 8f86d6: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 8f86d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f86db: je 0x8f86f0 */
  if (zf) goto L_8f86f0;
L_8f86dd: /* 8f86dd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f86df: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8f86e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f86e2: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 8f86e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f86e7: je 0x8f86f0 */
  if (zf) goto L_8f86f0;
L_8f86e9: /* 8f86e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f86eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f86ed: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f86f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f86f0: /* 8f86f0: mov ecx, esi */
  ecx = esi;
/* 8f86f2: call 0x6cb938 */
  esp -= 4; W32(esp, 0x8f86f7u); SPILL(); f_6cb938(); if (g_unwind) return; RELOAD();
L_8f86f7: /* 8f86f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f86fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f86fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f86fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8703: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8704: mov esp, ebp */
  esp = ebp;
/* 8f8706: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8707: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8708(void) {
  LOAD_REGS();
L_8f8708: /* 8f8708: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f870b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8710: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f8713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f8714: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f8717: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f871cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f871c(); return;
}

void f_8f871c(void) {
  LOAD_REGS();
L_8f871c: /* 8f871c: push 0xa1f2b8 */
  { uint32_t v = 0xa1f2b8u; esp -= 4; W32(esp, v); }
/* 8f8721: push 0xaef458 */
  { uint32_t v = 0xaef458u; esp -= 4; W32(esp, v); }
/* 8f8726: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f872cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f872c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f872f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8733: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8738u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8738: guest_badaddr(0x8f8738); return;
}

void f_8f8780(void) {
  LOAD_REGS();
L_8f8780: /* 8f8780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8781: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8f8785: mov eax, esi */
  eax = esi;
/* 8f8787: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f8788: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f878a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8f878e: mov ecx, eax */
  ecx = eax;
/* 8f8790: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8f8792: mov eax, ecx */
  eax = ecx;
/* 8f8794: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f8796: add eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f879a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8f879b: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f879d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f879f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f87a0: ret  */
  esp += 4; SPILL(); return;
}

void f_8f87c0(void) {
  LOAD_REGS();
L_8f87c0: /* 8f87c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f87c1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8f87c5: mov eax, esi */
  eax = esi;
/* 8f87c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8f87c8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f87ca: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8f87ce: mov ecx, eax */
  ecx = eax;
/* 8f87d0: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8f87d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f87d3: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8f87d7: mov eax, ecx */
  eax = ecx;
/* 8f87d9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f87db: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f87dd: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8f87de: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8f87e0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8f87e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f87e3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f87e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f87e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8800(void) {
  LOAD_REGS();
L_8f8800: /* 8f8800: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f8804: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f8808: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f880a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f880b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8f880eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f880e: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8820(void) {
  LOAD_REGS();
L_8f8820: /* 8f8820: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f8824: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f8828: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f882a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f882b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8f882eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f882e: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8840(void) {
  LOAD_REGS();
L_8f8840: /* 8f8840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8f8844: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f8848: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f884a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f884b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8f884eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f884e: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8860(void) {
  LOAD_REGS();
L_8f8860: /* 8f8860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8861: mov ebp, esp */
  ebp = esp;
/* 8f8863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8865: push 0x9d94b0 */
  { uint32_t v = 0x9d94b0u; esp -= 4; W32(esp, v); }
/* 8f886a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8878: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f887b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f887c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f887d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f8880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8881: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8884: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8885: mov ebx, ecx */
  ebx = ecx;
/* 8f8887: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f888e: call 0x6c7fbd */
  esp -= 4; W32(esp, 0x8f8893u); SPILL(); f_6c7fbd(); if (g_unwind) return; RELOAD();
/* 8f8893: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8895: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 8f889b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f889c: mov ecx, esi */
  ecx = esi;
/* 8f889e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8f88a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f88a1: xor edi, edi */
  edi = 0;
L_8f88a3: /* 8f88a3: cmp edi, 0x3ff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f88a9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f88ab: mov ecx, esi */
  ecx = esi;
/* 8f88ad: jge 0x8f88bd */
  if ((sf == of)) goto L_8f88bd;
L_8f88af: /* 8f88af: lea eax, [ebx + edi*4 + 0xeb4] */
  eax = (uint32_t)(ebx + edi*4 + 0xeb4u);
/* 8f88b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f88b7: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f88bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f88ba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8f88bb: jmp 0x8f88a3 */
  goto L_8f88a3;
L_8f88bd: /* 8f88bd: add ebx, 0x3eec */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3eecu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8f88c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f88c4: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8f88c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f88c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f88ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f88cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f88cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f88d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f88d4: mov esp, ebp */
  esp = ebp;
/* 8f88d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f88d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f88da(void) {
  LOAD_REGS();
L_8f88da: /* 8f88da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f88dd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f88e2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f88e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f88e6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f88e9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f88eeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f88ee(); return;
}

void f_8f88ee(void) {
  LOAD_REGS();
L_8f88ee: /* 8f88ee: push 0xa1f2fc */
  { uint32_t v = 0xa1f2fcu; esp -= 4; W32(esp, v); }
/* 8f88f3: push 0xaef868 */
  { uint32_t v = 0xaef868u; esp -= 4; W32(esp, v); }
/* 8f88f8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f88feu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f88fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8901: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8903: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8905: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f890au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f890a: guest_badaddr(0x8f890a); return;
}

void f_8f8940(void) {
  LOAD_REGS();
L_8f8940: /* 8f8940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8941: mov ebp, esp */
  ebp = esp;
/* 8f8943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8945: push 0x9d94c0 */
  { uint32_t v = 0x9d94c0u; esp -= 4; W32(esp, v); }
/* 8f894a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8958: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f895b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f895c: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8f8962: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8964: mov esi, ecx */
  esi = ecx;
/* 8f8966: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 8f896c: mov edi, 1 */
  edi = 0x1u;
/* 8f8971: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8973: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8976: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f897d: jge 0x8f8993 */
  if ((sf == of)) goto L_8f8993;
L_8f897f: /* 8f897f: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 8f8984: push 0xaef964 */
  { uint32_t v = 0xaef964u; esp -= 4; W32(esp, v); }
/* 8f8989: push 0xaef970 */
  { uint32_t v = 0xaef970u; esp -= 4; W32(esp, v); }
/* 8f898e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8990: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8993: /* 8f8993: cmp dword ptr [esi + 0xb8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8999: jle 0x8f89af */
  if ((zf || sf != of)) goto L_8f89af;
L_8f899b: /* 8f899b: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* 8f89a0: push 0xaef998 */
  { uint32_t v = 0xaef998u; esp -= 4; W32(esp, v); }
/* 8f89a5: push 0xaef9a4 */
  { uint32_t v = 0xaef9a4u; esp -= 4; W32(esp, v); }
/* 8f89aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f89acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f89ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f89af: /* 8f89af: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8f89b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f89b4: je 0x8f89d4 */
  if (zf) goto L_8f89d4;
L_8f89b6: /* 8f89b6: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f89b9: je 0x8f89d4 */
  if (zf) goto L_8f89d4;
L_8f89bb: /* 8f89bb: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f89be: je 0x8f89d4 */
  if (zf) goto L_8f89d4;
L_8f89c0: /* 8f89c0: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* 8f89c5: push 0xaef9cc */
  { uint32_t v = 0xaef9ccu; esp -= 4; W32(esp, v); }
/* 8f89ca: push 0xaef9d8 */
  { uint32_t v = 0xaef9d8u; esp -= 4; W32(esp, v); }
/* 8f89cf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f89d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f89d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f89d4: /* 8f89d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f89d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f89d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f89d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f89e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f89e1: mov esp, ebp */
  esp = ebp;
/* 8f89e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f89e4: ret  */
  esp += 4; SPILL(); return;
}

void f_8f89e5(void) {
  LOAD_REGS();
L_8f89e5: /* 8f89e5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f89e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f89ed: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f89f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f89f1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f89f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f89f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f89f9(); return;
}

void f_8f89f9(void) {
  LOAD_REGS();
L_8f89f9: /* 8f89f9: push 0xa1f33c */
  { uint32_t v = 0xa1f33cu; esp -= 4; W32(esp, v); }
/* 8f89fe: push 0xaefa1c */
  { uint32_t v = 0xaefa1cu; esp -= 4; W32(esp, v); }
/* 8f8a03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8a09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8a09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8a0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8a10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8a15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8a15: guest_badaddr(0x8f8a15); return;
}

void f_8f8a60(void) {
  LOAD_REGS();
L_8f8a60: /* 8f8a60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8a61: mov ebp, esp */
  ebp = esp;
/* 8f8a63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8a65: push 0x9d94d9 */
  { uint32_t v = 0x9d94d9u; esp -= 4; W32(esp, v); }
/* 8f8a6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8a71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8a78: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8a7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8a7d: mov esi, ecx */
  esi = ecx;
/* 8f8a7f: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 8f8a85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8a86: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f8a89: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8a8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8a8d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8f8a90: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8a97: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8f8a9du); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8f8a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8a9e: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 8f8aa4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f8aa8: call dword ptr [0xcfa4e0] */
  esp -= 4; W32(esp, 0x8f8aaeu); SPILL(); f_4e107d(); if (g_unwind) return; /* Core!??4FBitWriter@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 8f8aae: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8f8ab1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8ab5: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f8abbu); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f8abb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8abe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8abf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8ac0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8ac7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8ac8: mov esp, ebp */
  esp = ebp;
/* 8f8aca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8acb: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8acc(void) {
  LOAD_REGS();
L_8f8acc: /* 8f8acc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f8acf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8ad4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f8ad7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8ad8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f8adb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8ae0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8ae0(); return;
}

void f_8f8ae0(void) {
  LOAD_REGS();
L_8f8ae0: /* 8f8ae0: push 0xa1f380 */
  { uint32_t v = 0xa1f380u; esp -= 4; W32(esp, v); }
/* 8f8ae5: push 0xaefb00 */
  { uint32_t v = 0xaefb00u; esp -= 4; W32(esp, v); }
/* 8f8aea: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8af0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8af0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8af3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8af5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8af7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8afcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8afc: guest_badaddr(0x8f8afc); return;
}

void f_8f8b30(void) {
  LOAD_REGS();
L_8f8b30: /* 8f8b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8b31: mov ebp, esp */
  ebp = esp;
/* 8f8b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8b35: push 0x9d94f0 */
  { uint32_t v = 0x9d94f0u; esp -= 4; W32(esp, v); }
/* 8f8b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8b48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8b4b: mov eax, dword ptr [ecx + 0xe8c] */
  eax = R32((uint32_t)(ecx + 0xe8cu));
/* 8f8b51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8b53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8b54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8b55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8b56: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8b59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8b60: je 0x8f8b78 */
  if (zf) goto L_8f8b78;
L_8f8b62: /* 8f8b62: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8f8b65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8b67: jne 0x8f8b78 */
  if (!zf) goto L_8f8b78;
L_8f8b69: /* 8f8b69: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f8b6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8b6d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f8b70: lea ecx, [eax + 0x64] */
  ecx = (uint32_t)(eax + 0x64u);
/* 8f8b73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f8b75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8b76: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8f8b78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f8b78: /* 8f8b78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8b7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8b7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8b7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8b84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8b85: mov esp, ebp */
  esp = ebp;
/* 8f8b87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8b88: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f8b8b(void) {
  LOAD_REGS();
L_8f8b8b: /* 8f8b8b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f8b8e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8b93: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f8b96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f8b97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f8b9a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8b9fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8b9f(); return;
}

void f_8f8b9f(void) {
  LOAD_REGS();
L_8f8b9f: /* 8f8b9f: push 0xa1f3c4 */
  { uint32_t v = 0xa1f3c4u; esp -= 4; W32(esp, v); }
/* 8f8ba4: push 0xaefbf8 */
  { uint32_t v = 0xaefbf8u; esp -= 4; W32(esp, v); }
/* 8f8ba9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8bafu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8baf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8bb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8bb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8bb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8bbbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8bbb: guest_badaddr(0x8f8bbb); return;
}

void f_8f8bf0(void) {
  LOAD_REGS();
L_8f8bf0: /* 8f8bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8bf1: mov ebp, esp */
  ebp = esp;
/* 8f8bf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8bf5: push 0x9d9500 */
  { uint32_t v = 0x9d9500u; esp -= 4; W32(esp, v); }
/* 8f8bfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8c01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8c08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8c0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f8c0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8c10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8c11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8c12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8c13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8c16: mov esi, ecx */
  esi = ecx;
/* 8f8c18: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8c1f: je 0x8f8c35 */
  if (zf) goto L_8f8c35;
L_8f8c21: /* 8f8c21: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 8f8c27: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8f8c2du); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f8c2d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8f8c2f: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
L_8f8c35: /* 8f8c35: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 8f8c3b: call dword ptr [0xcfac90] */
  esp -= 4; W32(esp, 0x8f8c41u); SPILL(); f_4e30da(); if (g_unwind) return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f8c41: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 8f8c47: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f8c49: xor eax, eax */
  eax = 0;
/* 8f8c4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8c4c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f8c4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8c51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8c52: setle al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8f8c55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8c5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8c5d: mov esp, ebp */
  esp = ebp;
/* 8f8c5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8c60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f8c63(void) {
  LOAD_REGS();
L_8f8c63: /* 8f8c63: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f8c66: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8c6b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f8c6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8c6f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f8c72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8c77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8c77(); return;
}

void f_8f8c77(void) {
  LOAD_REGS();
L_8f8c77: /* 8f8c77: push 0xa1f404 */
  { uint32_t v = 0xa1f404u; esp -= 4; W32(esp, v); }
/* 8f8c7c: push 0xaefc00 */
  { uint32_t v = 0xaefc00u; esp -= 4; W32(esp, v); }
/* 8f8c81: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8c87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8c87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8c8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8c8e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8c93u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8c93: guest_badaddr(0x8f8c93); return;
}

void f_8f8cd0(void) {
  LOAD_REGS();
L_8f8cd0: /* 8f8cd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f8cf0(void) {
  LOAD_REGS();
L_8f8cf0: /* 8f8cf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8cf1: mov ebp, esp */
  ebp = esp;
/* 8f8cf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8cf5: push 0x9d9510 */
  { uint32_t v = 0x9d9510u; esp -= 4; W32(esp, v); }
/* 8f8cfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8d01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8d08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8d0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8d0c: mov ebx, dword ptr [0xcfac94] */
  ebx = R32((uint32_t)(0xcfac94u));
/* 8f8d12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8d13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8d14: mov edi, ecx */
  edi = ecx;
/* 8f8d16: lea esi, [edi + 0x254] */
  esi = (uint32_t)(edi + 0x254u);
/* 8f8d1c: mov ecx, esi */
  ecx = esi;
/* 8f8d1e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8d21: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8d28: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8d2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8d2a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f8d2d: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 8f8d31: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 8f8d37: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f8d3a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8d3c: jle 0x8f8d48 */
  if ((zf || sf != of)) goto L_8f8d48;
L_8f8d3e: /* 8f8d3e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f8d40: mov ecx, edi */
  ecx = edi;
/* 8f8d42: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8f8d48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f8d48: /* 8f8d48: mov ecx, esi */
  ecx = esi;
/* 8f8d4a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8d4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8d4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8d4e: jne 0x8f8d85 */
  if (!zf) goto L_8f8d85;
L_8f8d50: /* 8f8d50: mov eax, dword ptr [edi + 0xeac] */
  eax = R32((uint32_t)(edi + 0xeacu));
/* 8f8d56: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8f8d5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8d5c: mov ecx, esi */
  ecx = esi;
/* 8f8d5e: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f8d64u); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f8d64: mov ecx, esi */
  ecx = esi;
/* 8f8d66: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8d68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8d68: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8d6b: jle 0x8f8d85 */
  if ((zf || sf != of)) goto L_8f8d85;
L_8f8d6d: /* 8f8d6d: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 8f8d72: push 0xaf0168 */
  { uint32_t v = 0xaf0168u; esp -= 4; W32(esp, v); }
/* 8f8d77: push 0xaf0174 */
  { uint32_t v = 0xaf0174u; esp -= 4; W32(esp, v); }
/* 8f8d7c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8d82u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8d82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8d85: /* 8f8d85: mov ecx, esi */
  ecx = esi;
/* 8f8d87: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f8d8c: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 8f8d90: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 8f8d96: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8f8d99: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8d9b: jle 0x8f8dc6 */
  if ((zf || sf != of)) goto L_8f8dc6;
L_8f8d9d: /* 8f8d9d: mov ecx, esi */
  ecx = esi;
/* 8f8d9f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8da1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8da1: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 8f8da7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f8daa: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f8dad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f8dae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8daf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8db0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f8db5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f8db7: push 0xaf01a0 */
  { uint32_t v = 0xaf01a0u; esp -= 4; W32(esp, v); }
/* 8f8dbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f8dbd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f8dc3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f8dc3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8dc6: /* 8f8dc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8dc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8dca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8dcb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8dd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8dd3: mov esp, ebp */
  esp = ebp;
/* 8f8dd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8dd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f8dd9(void) {
  LOAD_REGS();
L_8f8dd9: /* 8f8dd9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f8ddc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8de1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f8de4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8de5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f8de8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8dedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8ded(); return;
}

void f_8f8ded(void) {
  LOAD_REGS();
L_8f8ded: /* 8f8ded: push 0xa1f440 */
  { uint32_t v = 0xa1f440u; esp -= 4; W32(esp, v); }
/* 8f8df2: push 0xaf01dc */
  { uint32_t v = 0xaf01dcu; esp -= 4; W32(esp, v); }
/* 8f8df7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8dfdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8dfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8e00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8e02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8e04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8e09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8e09: guest_badaddr(0x8f8e09); return;
}

void f_8f8e60(void) {
  LOAD_REGS();
L_8f8e60: /* 8f8e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8e61: mov ebp, esp */
  ebp = esp;
/* 8f8e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8e65: push 0x9d9520 */
  { uint32_t v = 0x9d9520u; esp -= 4; W32(esp, v); }
/* 8f8e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8e78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8e7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8e7c: mov ebx, dword ptr [0xcfac94] */
  ebx = R32((uint32_t)(0xcfac94u));
/* 8f8e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8e83: mov esi, ecx */
  esi = ecx;
/* 8f8e85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8e86: lea edi, [esi + 0x254] */
  edi = (uint32_t)(esi + 0x254u);
/* 8f8e8c: mov ecx, edi */
  ecx = edi;
/* 8f8e8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8e91: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8e98: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8e9a: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* 8f8ea0: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8f8ea3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f8ea5: jle 0x8f8ebf */
  if ((zf || sf != of)) goto L_8f8ebf;
L_8f8ea7: /* 8f8ea7: push 0x275 */
  { uint32_t v = 0x275u; esp -= 4; W32(esp, v); }
/* 8f8eac: push 0xaf01e4 */
  { uint32_t v = 0xaf01e4u; esp -= 4; W32(esp, v); }
/* 8f8eb1: push 0xaf01f0 */
  { uint32_t v = 0xaf01f0u; esp -= 4; W32(esp, v); }
/* 8f8eb6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8ebcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8ebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8ebf: /* 8f8ebf: mov ecx, edi */
  ecx = edi;
/* 8f8ec1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8f8ec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8ec3: mov edx, dword ptr [esi + 0xbc] */
  edx = R32((uint32_t)(esi + 0xbcu));
/* 8f8ec9: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8f8ecc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f8ece: jne 0x8f8eda */
  if (!zf) goto L_8f8eda;
L_8f8ed0: /* 8f8ed0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8f8ed2: mov ecx, esi */
  ecx = esi;
/* 8f8ed4: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8f8edau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f8eda: /* 8f8eda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f8edd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f8ede: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f8edf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f8ee6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f8ee7: mov esp, ebp */
  esp = ebp;
/* 8f8ee9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f8eea: ret  */
  esp += 4; SPILL(); return;
}

void f_8f8eeb(void) {
  LOAD_REGS();
L_8f8eeb: /* 8f8eeb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f8eee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f8ef3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8f8ef6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f8ef7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f8efa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8effu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f8eff(); return;
}

void f_8f8eff(void) {
  LOAD_REGS();
L_8f8eff: /* 8f8eff: push 0xa1f47c */
  { uint32_t v = 0xa1f47cu; esp -= 4; W32(esp, v); }
/* 8f8f04: push 0xaf0210 */
  { uint32_t v = 0xaf0210u; esp -= 4; W32(esp, v); }
/* 8f8f09: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f8f0fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f8f0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f8f12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8f16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f8f1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f8f1b: guest_badaddr(0x8f8f1b); return;
}

void f_8f8f50(void) {
  LOAD_REGS();
L_8f8f50: /* 8f8f50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f8f51: mov ebp, esp */
  ebp = esp;
/* 8f8f53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f8f55: push 0x9d9539 */
  { uint32_t v = 0x9d9539u; esp -= 4; W32(esp, v); }
/* 8f8f5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f8f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f8f61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f8f68: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f8f6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f8f6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f8f6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f8f70: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8f8f73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8f75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f8f76: mov ebx, ecx */
  ebx = ecx;
/* 8f8f78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f8f7b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8f8f7e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f8f85: je 0x8f8f9f */
  if (zf) goto L_8f8f9f;
L_8f8f87: /* 8f8f87: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* 8f8f8c: push 0xaf0228 */
  { uint32_t v = 0xaf0228u; esp -= 4; W32(esp, v); }
/* 8f8f91: push 0xaf0234 */
  { uint32_t v = 0xaf0234u; esp -= 4; W32(esp, v); }
/* 8f8f96: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8f9cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8f9c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8f9f: /* 8f8f9f: mov ecx, esi */
  ecx = esi;
/* 8f8fa1: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f8fa7u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f8fa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8fa9: je 0x8f8fc3 */
  if (zf) goto L_8f8fc3;
L_8f8fab: /* 8f8fab: push 0x2a5 */
  { uint32_t v = 0x2a5u; esp -= 4; W32(esp, v); }
/* 8f8fb0: push 0xaf0248 */
  { uint32_t v = 0xaf0248u; esp -= 4; W32(esp, v); }
/* 8f8fb5: push 0xaf0254 */
  { uint32_t v = 0xaf0254u; esp -= 4; W32(esp, v); }
/* 8f8fba: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f8fc0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f8fc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f8fc3: /* 8f8fc3: inc dword ptr [ebx + 0x214] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x214u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x214u), r);
  }
/* 8f8fc9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8f8fcb: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f8fce: mov dword ptr [ebx + 0x138], 1 */
  W32((uint32_t)(ebx + 0x138u), 0x1u);
/* 8f8fd8: call dword ptr [0xcfac78] */
  esp -= 4; W32(esp, 0x8f8fdeu); SPILL(); f_4e149c(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@H@Z */ RELOAD();
/* 8f8fde: mov edi, dword ptr [0xcfab74] */
  edi = R32((uint32_t)(0xcfab74u));
/* 8f8fe4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f8fe6: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f8fe9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f8fed: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f8fefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f8fef: mov al, byte ptr [esi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x78u))) & 0xffu);
/* 8f8ff2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8ff4: jne 0x8f9001 */
  if (!zf) goto L_8f9001;
L_8f8ff6: /* 8f8ff6: mov al, byte ptr [esi + 0x79] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x79u))) & 0xffu);
/* 8f8ff9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f8ffb: jne 0x8f9001 */
  if (!zf) goto L_8f9001;
L_8f8ffd: /* 8f8ffd: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8f8fff: jmp 0x8f9005 */
  goto L_8f9005;
L_8f9001: /* 8f9001: xor eax, eax */
  eax = 0;
/* 8f9003: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_8f9005: /* 8f9005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9006: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9009: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f900bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f900b: xor eax, eax */
  eax = 0;
/* 8f900d: mov al, byte ptr [esi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x78u))) & 0xffu);
/* 8f9010: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9012: jne 0x8f901b */
  if (!zf) goto L_8f901b;
L_8f9014: /* 8f9014: mov cl, byte ptr [esi + 0x79] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x79u))) & 0xffu);
/* 8f9017: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9019: je 0x8f902c */
  if (zf) goto L_8f902c;
L_8f901b: /* 8f901b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f901c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f901f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9021: xor eax, eax */
  eax = 0;
/* 8f9023: mov al, byte ptr [esi + 0x79] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x79u))) & 0xffu);
/* 8f9026: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f902a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f902cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f902c: /* 8f902c: xor ecx, ecx */
  ecx = 0;
/* 8f902e: mov cl, byte ptr [esi + 0x7a] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x7au))) & 0xffu);
/* 8f9031: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9032: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9035: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9037u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9037: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8f903a: mov edi, dword ptr [0xcfab78] */
  edi = R32((uint32_t)(0xcfab78u));
/* 8f9040: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* 8f9045: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9046: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9049: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f904bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f904b: mov al, byte ptr [esi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x7au))) & 0xffu);
/* 8f904e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9050: je 0x8f9067 */
  if (zf) goto L_8f9067;
L_8f9052: /* 8f9052: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 8f9055: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8f905a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f905b: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f905e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9060: mov al, byte ptr [esi + 0x7a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x7au))) & 0xffu);
/* 8f9063: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9065: jne 0x8f906e */
  if (!zf) goto L_8f906e;
L_8f9067: /* 8f9067: mov al, byte ptr [esi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x78u))) & 0xffu);
/* 8f906a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8f906c: je 0x8f9079 */
  if (zf) goto L_8f9079;
L_8f906e: /* 8f906e: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8f9071: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8f9073: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9074: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9077: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f9079: /* 8f9079: mov edi, dword ptr [0xcfac94] */
  edi = R32((uint32_t)(0xcfac94u));
/* 8f907f: mov ecx, esi */
  ecx = esi;
/* 8f9081: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9083: mov edx, dword ptr [ebx + 0xbc] */
  edx = R32((uint32_t)(ebx + 0xbcu));
/* 8f9089: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8f908c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f908d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f908e: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9091: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8f9097u); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8f9097: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f909a: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x8f90a0u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 8f90a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f90a2: je 0x8f90bc */
  if (zf) goto L_8f90bc;
L_8f90a4: /* 8f90a4: push 0x2b9 */
  { uint32_t v = 0x2b9u; esp -= 4; W32(esp, v); }
/* 8f90a9: push 0xaf0268 */
  { uint32_t v = 0xaf0268u; esp -= 4; W32(esp, v); }
/* 8f90ae: push 0xaf0274 */
  { uint32_t v = 0xaf0274u; esp -= 4; W32(esp, v); }
/* 8f90b3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f90b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f90b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f90bc: /* 8f90bc: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f90bf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f90c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f90c1: mov ecx, esi */
  ecx = esi;
/* 8f90c3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8f90c6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f90c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f90c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f90cb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f90cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f90ce: mov ecx, ebx */
  ecx = ebx;
/* 8f90d0: call 0x6c6348 */
  esp -= 4; W32(esp, 0x8f90d5u); SPILL(); f_6c6348(); if (g_unwind) return; RELOAD();
/* 8f90d5: mov eax, dword ptr [ebx + 0xeac] */
  eax = R32((uint32_t)(ebx + 0xeacu));
/* 8f90db: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8f90de: mov dword ptr [ebx + 0x134], edx */
  W32((uint32_t)(ebx + 0x134u), edx);
/* 8f90e4: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 8f90e7: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 8f90ea: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8f90ed: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 8f90f0: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 8f90f3: lea edi, [ebx + 0x254] */
  edi = (uint32_t)(ebx + 0x254u);
/* 8f90f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f90fa: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8f90fd: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 8f9100: call dword ptr [0xcfac84] */
  esp -= 4; W32(esp, 0x8f9106u); SPILL(); f_4e19bf(); if (g_unwind) return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */ RELOAD();
/* 8f9106: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9108: mov dword ptr [ebx + 0x124], ecx */
  W32((uint32_t)(ebx + 0x124u), ecx);
/* 8f910e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8f9111: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9114: mov dword ptr [ebx + 0x128], edx */
  W32((uint32_t)(ebx + 0x128u), edx);
/* 8f911a: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f9120u); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f9120: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f9123: mov ebx, eax */
  ebx = eax;
/* 8f9125: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x8f912bu); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 8f912b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f912d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f912e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f912f: mov ecx, edi */
  ecx = edi;
/* 8f9131: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8f9134u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9134: mov ecx, esi */
  ecx = esi;
/* 8f9136: call dword ptr [0xcfac94] */
  esp -= 4; W32(esp, 0x8f913cu); SPILL(); f_4e3daa(); if (g_unwind) return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */ RELOAD();
/* 8f913c: mov ecx, esi */
  ecx = esi;
/* 8f913e: mov ebx, eax */
  ebx = eax;
/* 8f9140: call dword ptr [0xcfac8c] */
  esp -= 4; W32(esp, 0x8f9146u); SPILL(); f_4e21ee(); if (g_unwind) return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */ RELOAD();
/* 8f9146: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8f9148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f9149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f914a: mov ecx, edi */
  ecx = edi;
/* 8f914c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8f914fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f914f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9152: call 0x6c492b */
  esp -= 4; W32(esp, 0x8f9157u); SPILL(); f_6c492b(); if (g_unwind) return; RELOAD();
/* 8f9157: mov esi, dword ptr [esi + 0x74] */
  esi = R32((uint32_t)(esi + 0x74u));
/* 8f915a: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8f915d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9161: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x8f9167u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 8f9167: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f916a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f916b: mov eax, esi */
  eax = esi;
/* 8f916d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f916e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9175: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9176: mov esp, ebp */
  esp = ebp;
/* 8f9178: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9179: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f917c(void) {
  LOAD_REGS();
L_8f917c: /* 8f917c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f917f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9184: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f9187: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9188: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f918b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9190u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9190(); return;
}

void f_8f9190(void) {
  LOAD_REGS();
L_8f9190: /* 8f9190: push 0xa1f4b8 */
  { uint32_t v = 0xa1f4b8u; esp -= 4; W32(esp, v); }
/* 8f9195: push 0xaf0288 */
  { uint32_t v = 0xaf0288u; esp -= 4; W32(esp, v); }
/* 8f919a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f91a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f91a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f91a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f91a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f91a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f91acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f91ac: guest_badaddr(0x8f91ac); return;
}

void f_8f9250(void) {
  LOAD_REGS();
L_8f9250: /* 8f9250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9251: mov esi, ecx */
  esi = ecx;
/* 8f9253: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f9259u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f9259: mov eax, esi */
  eax = esi;
/* 8f925b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f925c: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9270(void) {
  LOAD_REGS();
L_8f9270: /* 8f9270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9271: mov esi, ecx */
  esi = ecx;
/* 8f9273: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f9279u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f9279: mov eax, esi */
  eax = esi;
/* 8f927b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f927c: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9290(void) {
  LOAD_REGS();
L_8f9290: /* 8f9290: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f9294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9295: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8f9297: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8f929du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8f929d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f92b0(void) {
  LOAD_REGS();
L_8f92b0: /* 8f92b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f92b1: mov esi, ecx */
  esi = ecx;
/* 8f92b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f92b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f92b9: mov eax, esi */
  eax = esi;
/* 8f92bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f92bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8f92d0(void) {
  LOAD_REGS();
L_8f92d0: /* 8f92d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8f92d4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f92d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f92d7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f92ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f92dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f92f0(void) {
  LOAD_REGS();
L_8f92f0: /* 8f92f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f92f1: mov esi, ecx */
  esi = ecx;
/* 8f92f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8f92f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8f92f9: mov eax, esi */
  eax = esi;
/* 8f92fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f92fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9310(void) {
  LOAD_REGS();
L_8f9310: /* 8f9310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9311: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f9315: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9318: je 0x8f9338 */
  if (zf) goto L_8f9338;
L_8f931a: /* 8f931a: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f931f: mov ecx, esi */
  ecx = esi;
/* 8f9321: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9327u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9329: jne 0x8f9360 */
  if (!zf) goto L_8f9360;
L_8f932b: /* 8f932b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f932c: mov ecx, esi */
  ecx = esi;
/* 8f932e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9334u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9334: mov edi, eax */
  edi = eax;
/* 8f9336: jmp 0x8f933d */
  goto L_8f933d;
L_8f9338: /* 8f9338: mov edi, 0xaf04b4 */
  edi = 0xaf04b4u;
L_8f933d: /* 8f933d: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9342: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9348u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9349: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f934e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9350: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9351: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9356: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9357: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f935du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f935d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9360: /* 8f9360: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9361: mov eax, esi */
  eax = esi;
/* 8f9363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9364: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9390(void) {
  LOAD_REGS();
L_8f9390: /* 8f9390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9391: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f9395: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 8f939a: mov ecx, esi */
  ecx = esi;
/* 8f939c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f93a2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f93a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f93a4: jne 0x8f93be */
  if (!zf) goto L_8f93be;
L_8f93a6: /* 8f93a6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8f93ab: push 0xaf04f0 */
  { uint32_t v = 0xaf04f0u; esp -= 4; W32(esp, v); }
/* 8f93b0: push 0xaf0534 */
  { uint32_t v = 0xaf0534u; esp -= 4; W32(esp, v); }
/* 8f93b5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f93bbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f93bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f93be: /* 8f93be: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8f93c2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f93c5: jne 0x8f93cd */
  if (!zf) goto L_8f93cd;
L_8f93c7: /* 8f93c7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8f93cdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_8f93cd: /* 8f93cd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f93d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f93d5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8f93d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f93db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f93dc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8f93e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f93e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f93e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f93e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f93e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f93e6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8f93ecu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8f93ec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f93ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f93f0: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9420(void) {
  LOAD_REGS();
L_8f9420: /* 8f9420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9421: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8f9425: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f942a: mov ecx, esi */
  ecx = esi;
/* 8f942c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f9432u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f9432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9434: jne 0x8f944e */
  if (!zf) goto L_8f944e;
L_8f9436: /* 8f9436: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8f943b: push 0xaf0558 */
  { uint32_t v = 0xaf0558u; esp -= 4; W32(esp, v); }
/* 8f9440: push 0xaf059c */
  { uint32_t v = 0xaf059cu; esp -= 4; W32(esp, v); }
/* 8f9445: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f944bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f944b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f944e: /* 8f944e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8f9452: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9455: jne 0x8f945d */
  if (!zf) goto L_8f945d;
L_8f9457: /* 8f9457: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8f945du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_8f945d: /* 8f945d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9463: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9465: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8f9469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f946b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f946c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8f9470: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9472: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9473: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9475: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9476: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8f947cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8f947c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f947f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9480: ret  */
  esp += 4; SPILL(); return;
}

void f_8f94b0(void) {
  LOAD_REGS();
L_8f94b0: /* 8f94b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f94b1: mov ebp, esp */
  ebp = esp;
/* 8f94b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f94b5: push 0x9d9550 */
  { uint32_t v = 0x9d9550u; esp -= 4; W32(esp, v); }
/* 8f94ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f94c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f94c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f94c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f94cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f94cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f94cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f94ce: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 8f94d4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f94d7: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8f94da: push 0xaef92c */
  { uint32_t v = 0xaef92cu; esp -= 4; W32(esp, v); }
/* 8f94df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f94e0: mov esi, ecx */
  esi = ecx;
/* 8f94e2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f94e9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f94ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f94eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f94ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f94f0: je 0x8f9538 */
  if (zf) goto L_8f9538;
L_8f94f2: /* 8f94f2: fld dword ptr [esi + 0x1c4] */
  { double v = F32((uint32_t)(esi + 0x1c4u)); FPUSH(v); }
/* 8f94f8: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8f94fe: call 0x99c958 */
  esp -= 4; W32(esp, 0x8f9503u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8f9503: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9506: jg 0x8f950d */
  if ((!zf && sf == of)) goto L_8f950d;
L_8f9508: /* 8f9508: mov eax, 5 */
  eax = 0x5u;
L_8f950d: /* 8f950d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8f9510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9511: push 0xaef93c */
  { uint32_t v = 0xaef93cu; esp -= 4; W32(esp, v); }
/* 8f9516: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8f9517: /* 8f9517: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f951du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f951d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9520: mov eax, 1 */
  eax = 0x1u;
/* 8f9525: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9528: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f952f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9531: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9532: mov esp, ebp */
  esp = ebp;
/* 8f9534: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9535: ret 8 */
  esp += 12; SPILL(); return;
L_8f9538: /* 8f9538: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8f953b: push 0xaef944 */
  { uint32_t v = 0xaef944u; esp -= 4; W32(esp, v); }
/* 8f9540: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9541: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8f9543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9543: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9546: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9548: je 0x8f9561 */
  if (zf) goto L_8f9561;
L_8f954a: /* 8f954a: fld dword ptr [esi + 0x1b4] */
  { double v = F32((uint32_t)(esi + 0x1b4u)); FPUSH(v); }
/* 8f9550: call 0x99c958 */
  esp -= 4; W32(esp, 0x8f9555u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8f9555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9556: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8f9559: push 0xaef954 */
  { uint32_t v = 0xaef954u; esp -= 4; W32(esp, v); }
/* 8f955e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f955f: jmp 0x8f9517 */
  goto L_8f9517;
L_8f9561: /* 8f9561: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8f9564: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f9567: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9568: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9569: mov ecx, esi */
  ecx = esi;
/* 8f956b: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x8f9570u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 8f9570: xor ecx, ecx */
  ecx = 0;
/* 8f9572: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9574: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8f9577: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9578: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9579: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f957a: mov eax, ecx */
  eax = ecx;
/* 8f957c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f957f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9586: mov esp, ebp */
  esp = ebp;
/* 8f9588: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9589: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8f958c(void) {
  LOAD_REGS();
L_8f958c: /* 8f958c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f958f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9594: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f9597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9598: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f959b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f95a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f95a0(); return;
}

void f_8f95a0(void) {
  LOAD_REGS();
L_8f95a0: /* 8f95a0: push 0xa1f500 */
  { uint32_t v = 0xa1f500u; esp -= 4; W32(esp, v); }
/* 8f95a5: push 0xaef95c */
  { uint32_t v = 0xaef95cu; esp -= 4; W32(esp, v); }
/* 8f95aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f95b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f95b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f95b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f95b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f95b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f95bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f95bc: guest_badaddr(0x8f95bc); return;
}

void f_8f9610(void) {
  LOAD_REGS();
L_8f9610: /* 8f9610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f9611: mov ebp, esp */
  ebp = esp;
/* 8f9613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f9615: push 0x9d9560 */
  { uint32_t v = 0x9d9560u; esp -= 4; W32(esp, v); }
/* 8f961a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f9620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f9628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f962b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f962c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f962d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f962e: mov ebx, ecx */
  ebx = ecx;
/* 8f9630: mov edi, dword ptr [ebx + 0x3ec4] */
  edi = R32((uint32_t)(ebx + 0x3ec4u));
/* 8f9636: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f9639: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8f9640: /* 8f9640: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8f9641: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8f9643: jl 0x8f969a */
  if ((sf != of)) goto L_8f969a;
L_8f9645: /* 8f9645: mov eax, dword ptr [ebx + 0x3ec0] */
  eax = R32((uint32_t)(ebx + 0x3ec0u));
/* 8f964b: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 8f964e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8f9651: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8f9653: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9654: mov ecx, esi */
  ecx = esi;
/* 8f9656: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8f9659u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9659: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f965c: cmp dword ptr [esi + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f965f: jne 0x8f9640 */
  if (!zf) goto L_8f9640;
L_8f9661: /* 8f9661: mov ecx, esi */
  ecx = esi;
/* 8f9663: call 0x6c913d */
  esp -= 4; W32(esp, 0x8f9668u); SPILL(); f_6c913d(); if (g_unwind) return; RELOAD();
/* 8f9668: jmp 0x8f9640 */
  goto L_8f9640;
L_8f969a: /* 8f969a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f969d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f969e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f969f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f96a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f96a7: mov esp, ebp */
  esp = ebp;
/* 8f96a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f96aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f966a(void) {
  LOAD_REGS();
L_8f966a: /* 8f966a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f966d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9672: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f9675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9676: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f9679: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f967eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f967e(); return;
}

void f_8f967e(void) {
  LOAD_REGS();
L_8f967e: /* 8f967e: push 0xa1f534 */
  { uint32_t v = 0xa1f534u; esp -= 4; W32(esp, v); }
/* 8f9683: push 0xaefc28 */
  { uint32_t v = 0xaefc28u; esp -= 4; W32(esp, v); }
/* 8f9688: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f968eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f968e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9693: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9695: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f969au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f969a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f969d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f969e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f969f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f96a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f96a7: mov esp, ebp */
  esp = ebp;
/* 8f96a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f96aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f96e0(void) {
  LOAD_REGS();
L_8f96e0: /* 8f96e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f96e1: mov ebp, esp */
  ebp = esp;
/* 8f96e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f96e5: push 0x9d9570 */
  { uint32_t v = 0x9d9570u; esp -= 4; W32(esp, v); }
/* 8f96ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f96f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f96f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f96f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f96fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f96fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f96fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8f9700: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8f9706: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8f9709: mov ebx, ecx */
  ebx = ecx;
/* 8f970b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8f970e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9710: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9711: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f9714: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f971b: jne 0x8f9735 */
  if (!zf) goto L_8f9735;
L_8f971d: /* 8f971d: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 8f9722: push 0xaf0388 */
  { uint32_t v = 0xaf0388u; esp -= 4; W32(esp, v); }
/* 8f9727: push 0xaf0394 */
  { uint32_t v = 0xaf0394u; esp -= 4; W32(esp, v); }
/* 8f972c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f9732u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f9732: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9735: /* 8f9735: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8f973b: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8f973e: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8f9741: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8f9744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9746: jne 0x8f9760 */
  if (!zf) goto L_8f9760;
L_8f9748: /* 8f9748: push 0x3a9 */
  { uint32_t v = 0x3a9u; esp -= 4; W32(esp, v); }
/* 8f974d: push 0xaf03b4 */
  { uint32_t v = 0xaf03b4u; esp -= 4; W32(esp, v); }
/* 8f9752: push 0xaf03c0 */
  { uint32_t v = 0xaf03c0u; esp -= 4; W32(esp, v); }
/* 8f9757: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f975du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f975d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9760: /* 8f9760: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8f9766: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8f9769: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8f976c: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 8f976f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8f9771: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8f9774: mov dword ptr [eax + 0x4c0], 0 */
  W32((uint32_t)(eax + 0x4c0u), 0x0u);
/* 8f977e: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 8f9781: mov dword ptr [edi + 0x44], ecx */
  W32((uint32_t)(edi + 0x44u), ecx);
/* 8f9784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9785: mov ecx, esi */
  ecx = esi;
/* 8f9787: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f978b: mov byte ptr [esi + 0x91], 3 */
  W8((uint32_t)(esi + 0x91u), 0x3u);
/* 8f9792: mov dword ptr [esi + 0x534], 0x334cc80c */
  W32((uint32_t)(esi + 0x534u), 0x334cc80cu);
/* 8f979c: mov dword ptr [esi + 0x540], 5 */
  W32((uint32_t)(esi + 0x540u), 0x5u);
/* 8f97a6: call 0x6c20fe */
  esp -= 4; W32(esp, 0x8f97abu); SPILL(); f_6c20fe(); if (g_unwind) return; RELOAD();
/* 8f97ab: mov ecx, edi */
  ecx = edi;
/* 8f97ad: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f97b3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f97b3: mov ecx, esi */
  ecx = esi;
/* 8f97b5: mov edi, eax */
  edi = eax;
/* 8f97b7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f97bdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f97bd: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8f97c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f97c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f97c5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8f97c7: push 0xaf03f0 */
  { uint32_t v = 0xaf03f0u; esp -= 4; W32(esp, v); }
/* 8f97cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f97cd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f97d3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f97d3: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8f97d9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8f97dc: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8f97df: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8f97e2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f97e4: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 8f97e7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f97e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f97ec: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8f97f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f97f2: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8f97f8: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8f97fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8f97fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f97ff: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x8f9802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9802: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8f9808: mov byte ptr [ecx + 0x4bc], 0 */
  W8((uint32_t)(ecx + 0x4bcu), 0x0u);
/* 8f980f: cmp dword ptr [ebx + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9813: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f981a: je 0x8f9834 */
  if (zf) goto L_8f9834;
L_8f981c: /* 8f981c: push 0x3bb */
  { uint32_t v = 0x3bbu; esp -= 4; W32(esp, v); }
/* 8f9821: push 0xaf0418 */
  { uint32_t v = 0xaf0418u; esp -= 4; W32(esp, v); }
/* 8f9826: push 0xaf0424 */
  { uint32_t v = 0xaf0424u; esp -= 4; W32(esp, v); }
/* 8f982b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f9831u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f9831: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9834: /* 8f9834: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9837: mov dword ptr [ebx + 0x30], esi */
  W32((uint32_t)(ebx + 0x30u), esi);
/* 8f983a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f983b: mov dword ptr [ebx + 0x6c], 3 */
  W32((uint32_t)(ebx + 0x6cu), 0x3u);
/* 8f9842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9843: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f984a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f984b: mov esp, ebp */
  esp = ebp;
/* 8f984d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f984e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f9851(void) {
  LOAD_REGS();
L_8f9851: /* 8f9851: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8f9854: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9859: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8f985c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f985d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8f9860: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9865u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9865(); return;
}

void f_8f9865(void) {
  LOAD_REGS();
L_8f9865: /* 8f9865: push 0xa1f5cc */
  { uint32_t v = 0xa1f5ccu; esp -= 4; W32(esp, v); }
/* 8f986a: push 0xaf0410 */
  { uint32_t v = 0xaf0410u; esp -= 4; W32(esp, v); }
/* 8f986f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f9875u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f9875: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9878: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f987a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f987c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9881u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9881(); return;
}

void f_8f9881(void) {
  LOAD_REGS();
L_8f9881: /* 8f9881: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f9884: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9889: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8f988c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f988d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8f9890: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9895u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9895(); return;
}

void f_8f9895(void) {
  LOAD_REGS();
L_8f9895: /* 8f9895: push 0xa1f578 */
  { uint32_t v = 0xa1f578u; esp -= 4; W32(esp, v); }
/* 8f989a: push 0xaf043c */
  { uint32_t v = 0xaf043cu; esp -= 4; W32(esp, v); }
/* 8f989f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f98a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f98a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f98a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f98aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f98ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f98b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f98b1: guest_badaddr(0x8f98b1); return;
}

void f_8f9940(void) {
  LOAD_REGS();
L_8f9940: /* 8f9940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f9941: mov ebp, esp */
  ebp = esp;
/* 8f9943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f9945: push 0x9d9580 */
  { uint32_t v = 0x9d9580u; esp -= 4; W32(esp, v); }
/* 8f994a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f9950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f9958: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f995b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f995c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8f995f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9960: mov esi, ecx */
  esi = ecx;
/* 8f9962: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8f9968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9969: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f996c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f996d: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f9970: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9977: call dword ptr [0xcfacc0] */
  esp -= 4; W32(esp, 0x8f997du); SPILL(); f_4e4561(); if (g_unwind) return; /* Core!?IsValidIndex@FArray@@QBEHH@Z */ RELOAD();
/* 8f997d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f997f: jne 0x8f9999 */
  if (!zf) goto L_8f9999;
L_8f9981: /* 8f9981: push 0x3cc */
  { uint32_t v = 0x3ccu; esp -= 4; W32(esp, v); }
/* 8f9986: push 0xaf0444 */
  { uint32_t v = 0xaf0444u; esp -= 4; W32(esp, v); }
/* 8f998b: push 0xaf0450 */
  { uint32_t v = 0xaf0450u; esp -= 4; W32(esp, v); }
/* 8f9990: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f9996u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f9996: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9999: /* 8f9999: mov eax, dword ptr [esi + 0x3ef4] */
  eax = R32((uint32_t)(esi + 0x3ef4u));
/* 8f999f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f99a1: jne 0x8f99e6 */
  if (!zf) goto L_8f99e6;
L_8f99a3: /* 8f99a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f99a5: lea edi, [esi + 0x3ef0] */
  edi = (uint32_t)(esi + 0x3ef0u);
/* 8f99ab: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8f99ad: mov ecx, edi */
  ecx = edi;
/* 8f99af: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8f99b5u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8f99b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8f99b7: mov dword ptr [eax], 0xcf0e18 */
  W32((uint32_t)(eax), 0xcf0e18u);
/* 8f99bd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f99bf: push 0xaf047c */
  { uint32_t v = 0xaf047cu; esp -= 4; W32(esp, v); }
/* 8f99c4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f99c7: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8f99cdu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8f99cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f99cf: push 0xceefc8 */
  { uint32_t v = 0xceefc8u; esp -= 4; W32(esp, v); }
/* 8f99d4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f99d7: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8f99ddu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8f99dd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8f99df: mov dword ptr [ecx + 0x1c], 0 */
  W32((uint32_t)(ecx + 0x1cu), 0x0u);
L_8f99e6: /* 8f99e6: mov ecx, dword ptr [esi + 0x3eec] */
  ecx = R32((uint32_t)(esi + 0x3eecu));
/* 8f99ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f99ee: je 0x8f99f7 */
  if (zf) goto L_8f99f7;
L_8f99f0: /* 8f99f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f99f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f99f4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8f99f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8f99f7: /* 8f99f7: mov edi, dword ptr [esi + 0x3ef0] */
  edi = R32((uint32_t)(esi + 0x3ef0u));
/* 8f99fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f99ff: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8f9a02: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8f9a08u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8f9a08: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8f9a0a: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9a0f: mov ecx, edi */
  ecx = edi;
/* 8f9a11: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8f9a17u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8f9a17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9a19: jne 0x8f9a33 */
  if (!zf) goto L_8f9a33;
L_8f9a1b: /* 8f9a1b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8f9a20: push 0xaf0558 */
  { uint32_t v = 0xaf0558u; esp -= 4; W32(esp, v); }
/* 8f9a25: push 0xaf059c */
  { uint32_t v = 0xaf059cu; esp -= 4; W32(esp, v); }
/* 8f9a2a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8f9a30u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8f9a30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9a33: /* 8f9a33: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8f9a39u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8f9a39: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9a3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9a41: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8f9a44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9a46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9a47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9a49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9a4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9a4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9a4e: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8f9a54u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8f9a54: mov ecx, dword ptr [esi + 0x3ef0] */
  ecx = R32((uint32_t)(esi + 0x3ef0u));
/* 8f9a5a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9a5d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8f9a60: mov dword ptr [esi + 0x3eec], eax */
  W32((uint32_t)(esi + 0x3eecu), eax);
/* 8f9a66: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9a6cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9a6c: mov edi, dword ptr [esi + 0x3ef0] */
  edi = R32((uint32_t)(esi + 0x3ef0u));
/* 8f9a72: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 8f9a75: mov ecx, dword ptr [esi + 0x3eec] */
  ecx = R32((uint32_t)(esi + 0x3eecu));
/* 8f9a7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9a7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9a7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f9a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9a81: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x8f9a84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8f9a84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9a87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9a88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9a89: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9a90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9a91: mov esp, ebp */
  esp = ebp;
/* 8f9a93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9a94: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f9a97(void) {
  LOAD_REGS();
L_8f9a97: /* 8f9a97: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f9a9a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9a9f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8f9aa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9aa3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8f9aa6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9aabu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9aab(); return;
}

void f_8f9aab(void) {
  LOAD_REGS();
L_8f9aab: /* 8f9aab: push 0xa1f5f8 */
  { uint32_t v = 0xa1f5f8u; esp -= 4; W32(esp, v); }
/* 8f9ab0: push 0xaf04ac */
  { uint32_t v = 0xaf04acu; esp -= 4; W32(esp, v); }
/* 8f9ab5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f9abbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f9abb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9abe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9ac0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9ac2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9ac7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8f9ac7: guest_badaddr(0x8f9ac7); return;
}

void f_8f9b40(void) {
  LOAD_REGS();
L_8f9b40: /* 8f9b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9b41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8f9b43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8f9b45: mov esi, ecx */
  esi = ecx;
/* 8f9b47: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8f9b4du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8f9b4d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8f9b51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9b53: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8f9b55: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8f9b58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9b59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8f9b70(void) {
  LOAD_REGS();
L_8f9b70: /* 8f9b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8f9b71: mov ebp, esp */
  ebp = esp;
/* 8f9b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8f9b75: push 0x9d95c6 */
  { uint32_t v = 0x9d95c6u; esp -= 4; W32(esp, v); }
/* 8f9b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8f9b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8f9b88: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8f9b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f9b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9b8d: mov esi, dword ptr [ecx + 0xb4] */
  esi = R32((uint32_t)(ecx + 0xb4u));
/* 8f9b93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9b94: xor edi, edi */
  edi = 0;
/* 8f9b96: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8f9b99: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8f9b9c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8f9b9f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8f9ba2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8f9ba5: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8f9ba8: jmp 0x8f9bb0 */
  goto L_8f9bb0;
L_8f9bb0: /* 8f9bb0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9bb3: jge 0x8f9d5f */
  if ((sf == of)) goto L_8f9d5f;
L_8f9bb9: /* 8f9bb9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9bbb: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9bbe: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8f9bc1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9bc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9bc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bc8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bcb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9bd1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9bd1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_8f9bd5: /* 8f9bd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9bd7: push 0xaefa24 */
  { uint32_t v = 0xaefa24u; esp -= 4; W32(esp, v); }
/* 8f9bdc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bdf: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9be5u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9be5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9be8: je 0x8f9c20 */
  if (zf) { SPILL(); f_8f9c20(); return; }
L_8f9bea: /* 8f9bea: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9bef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bf1: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9bf5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bf8: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9bfeu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bff: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c02: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f9c06: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c0cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c0c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9c0f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9c13: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9c19u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9c19: jmp 0x8f9bd5 */
  goto L_8f9bd5;
L_8f9d5f: /* 8f9d5f: xor esi, esi */
  esi = 0;
L_8f9d61: /* 8f9d61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d64: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f9d67: cmp esi, dword ptr [eax + 0x94] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9d6d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8f9d70: jge 0x8f9ef0 */
  if ((sf == of)) goto L_8f9ef0;
L_8f9d76: /* 8f9d76: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 8f9d7c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8f9d7f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8f9d82: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d88u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8f9d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d91: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9d96: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8f9d9cu); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8f9d9c: mov ebx, eax */
  ebx = eax;
/* 8f9d9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9da1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9da3: je 0x8f9eba */
  if (zf) goto L_8f9eba;
L_8f9da9: /* 8f9da9: mov ecx, ebx */
  ecx = ebx;
/* 8f9dab: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9db1u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9db1: mov edi, eax */
  edi = eax;
/* 8f9db3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9db5: je 0x8f9dd5 */
  if (zf) goto L_8f9dd5;
L_8f9db7: /* 8f9db7: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9dbc: mov ecx, edi */
  ecx = edi;
/* 8f9dbe: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9dc4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9dc6: jne 0x8f9dfe */
  if (!zf) goto L_8f9dfe;
L_8f9dc8: /* 8f9dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dc9: mov ecx, edi */
  ecx = edi;
/* 8f9dcb: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9dd1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9dd1: mov esi, eax */
  esi = eax;
/* 8f9dd3: jmp 0x8f9dda */
  goto L_8f9dda;
L_8f9dd5: /* 8f9dd5: mov esi, 0xaf04b4 */
  esi = 0xaf04b4u;
L_8f9dda: /* 8f9dda: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9ddf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9de5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9de5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9deb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9def: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9df5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9dfbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9dfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9dfe: /* 8f9dfe: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8f9e01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e08: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e0b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9e11u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9e11: mov ecx, ebx */
  ecx = ebx;
/* 8f9e13: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f9e17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9e1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9e1d: mov esi, eax */
  esi = eax;
/* 8f9e1f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e21: je 0x8f9e41 */
  if (zf) goto L_8f9e41;
L_8f9e23: /* 8f9e23: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9e28: mov ecx, esi */
  ecx = esi;
/* 8f9e2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9e30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e32: jne 0x8f9e69 */
  if (!zf) goto L_8f9e69;
L_8f9e34: /* 8f9e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e35: mov ecx, esi */
  ecx = esi;
/* 8f9e37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9e3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9e3d: mov edi, eax */
  edi = eax;
/* 8f9e3f: jmp 0x8f9e46 */
  goto L_8f9e46;
L_8f9e41: /* 8f9e41: mov edi, 0xaf04b4 */
  edi = 0xaf04b4u;
L_8f9e46: /* 8f9e46: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9e4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9e51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e52: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f9e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e5a: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9e60: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9e66u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9e66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9e69: /* 8f9e69: mov esi, dword ptr [esi + 0x40] */
  esi = R32((uint32_t)(esi + 0x40u));
/* 8f9e6c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e6f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e75: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9e79: je 0x8f9eaa */
  if (zf) goto L_8f9eaa;
L_8f9e7b: /* 8f9e7b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e7e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e88: mov ecx, ebx */
  ecx = ebx;
/* 8f9e8a: mov edi, eax */
  edi = eax;
/* 8f9e8c: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8f9e92u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8f9e92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e98: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f9e9b: push 0xaefaa8 */
  { uint32_t v = 0xaefaa8u; esp -= 4; W32(esp, v); }
/* 8f9ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9ea1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9ea7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9ea7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9eaa: /* 8f9eaa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9ead: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9eb1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9eb7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9eb7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f9eba: /* 8f9eba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f9ebb: jmp 0x8f9d61 */
  goto L_8f9d61;
L_8f9ef0: /* 8f9ef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9efd: mov esp, ebp */
  esp = ebp;
/* 8f9eff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9f00: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9baa(void) {
  LOAD_REGS();
L_8f9baa: /* 8f9baa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* 8f9bb0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9bb3: jge 0x8f9d5f */
  if ((sf == of)) goto L_8f9d5f;
L_8f9bb9: /* 8f9bb9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9bbb: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9bbe: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8f9bc1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9bc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9bc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bc8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bcb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9bd1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9bd1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_8f9bd5: /* 8f9bd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9bd7: push 0xaefa24 */
  { uint32_t v = 0xaefa24u; esp -= 4; W32(esp, v); }
/* 8f9bdc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bdf: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9be5u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9be5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9be8: je 0x8f9c20 */
  if (zf) { SPILL(); f_8f9c20(); return; }
L_8f9bea: /* 8f9bea: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9bef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bf1: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9bf5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bf8: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9bfeu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bff: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c02: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f9c06: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c0cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c0c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9c0f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9c13: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9c19u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9c19: jmp 0x8f9bd5 */
  goto L_8f9bd5;
L_8f9d5f: /* 8f9d5f: xor esi, esi */
  esi = 0;
L_8f9d61: /* 8f9d61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d64: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f9d67: cmp esi, dword ptr [eax + 0x94] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9d6d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8f9d70: jge 0x8f9ef0 */
  if ((sf == of)) goto L_8f9ef0;
L_8f9d76: /* 8f9d76: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 8f9d7c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8f9d7f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8f9d82: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d88u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8f9d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d91: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9d96: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8f9d9cu); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8f9d9c: mov ebx, eax */
  ebx = eax;
/* 8f9d9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9da1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9da3: je 0x8f9eba */
  if (zf) goto L_8f9eba;
L_8f9da9: /* 8f9da9: mov ecx, ebx */
  ecx = ebx;
/* 8f9dab: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9db1u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9db1: mov edi, eax */
  edi = eax;
/* 8f9db3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9db5: je 0x8f9dd5 */
  if (zf) goto L_8f9dd5;
L_8f9db7: /* 8f9db7: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9dbc: mov ecx, edi */
  ecx = edi;
/* 8f9dbe: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9dc4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9dc6: jne 0x8f9dfe */
  if (!zf) goto L_8f9dfe;
L_8f9dc8: /* 8f9dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dc9: mov ecx, edi */
  ecx = edi;
/* 8f9dcb: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9dd1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9dd1: mov esi, eax */
  esi = eax;
/* 8f9dd3: jmp 0x8f9dda */
  goto L_8f9dda;
L_8f9dd5: /* 8f9dd5: mov esi, 0xaf04b4 */
  esi = 0xaf04b4u;
L_8f9dda: /* 8f9dda: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9ddf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9de5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9de5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9deb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9def: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9df5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9dfbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9dfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9dfe: /* 8f9dfe: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8f9e01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e08: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e0b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9e11u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9e11: mov ecx, ebx */
  ecx = ebx;
/* 8f9e13: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f9e17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9e1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9e1d: mov esi, eax */
  esi = eax;
/* 8f9e1f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e21: je 0x8f9e41 */
  if (zf) goto L_8f9e41;
L_8f9e23: /* 8f9e23: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9e28: mov ecx, esi */
  ecx = esi;
/* 8f9e2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9e30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e32: jne 0x8f9e69 */
  if (!zf) goto L_8f9e69;
L_8f9e34: /* 8f9e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e35: mov ecx, esi */
  ecx = esi;
/* 8f9e37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9e3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9e3d: mov edi, eax */
  edi = eax;
/* 8f9e3f: jmp 0x8f9e46 */
  goto L_8f9e46;
L_8f9e41: /* 8f9e41: mov edi, 0xaf04b4 */
  edi = 0xaf04b4u;
L_8f9e46: /* 8f9e46: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9e4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9e51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e52: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f9e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e5a: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9e60: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9e66u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9e66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9e69: /* 8f9e69: mov esi, dword ptr [esi + 0x40] */
  esi = R32((uint32_t)(esi + 0x40u));
/* 8f9e6c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e6f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e75: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9e79: je 0x8f9eaa */
  if (zf) goto L_8f9eaa;
L_8f9e7b: /* 8f9e7b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e7e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e88: mov ecx, ebx */
  ecx = ebx;
/* 8f9e8a: mov edi, eax */
  edi = eax;
/* 8f9e8c: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8f9e92u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8f9e92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e98: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f9e9b: push 0xaefaa8 */
  { uint32_t v = 0xaefaa8u; esp -= 4; W32(esp, v); }
/* 8f9ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9ea1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9ea7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9ea7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9eaa: /* 8f9eaa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9ead: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9eb1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9eb7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9eb7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f9eba: /* 8f9eba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f9ebb: jmp 0x8f9d61 */
  goto L_8f9d61;
L_8f9ef0: /* 8f9ef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9efd: mov esp, ebp */
  esp = ebp;
/* 8f9eff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9f00: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9c1b(void) {
  LOAD_REGS();
L_8f9c1b: /* 8f9c1b: jmp 0x8f9c20 */
  SPILL(); f_8f9c20(); return;
}

void f_8f9c1d(void) {
  LOAD_REGS();
L_8f9c1d: /* 8f9c1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
  SPILL(); f_8f9c20(); return;
}

void f_8f9c20(void) {
  LOAD_REGS();
  goto L_8f9c20;
L_8f9bb0: /* 8f9bb0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9bb3: jge 0x8f9d5f */
  if ((sf == of)) goto L_8f9d5f;
L_8f9bb9: /* 8f9bb9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9bbb: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9bbe: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8f9bc1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9bc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9bc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bc8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bcb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9bd1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9bd1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_8f9bd5: /* 8f9bd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9bd7: push 0xaefa24 */
  { uint32_t v = 0xaefa24u; esp -= 4; W32(esp, v); }
/* 8f9bdc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bdf: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9be5u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9be5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9be8: je 0x8f9c20 */
  if (zf) goto L_8f9c20;
L_8f9bea: /* 8f9bea: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9bef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bf1: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9bf5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bf8: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9bfeu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bff: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c02: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f9c06: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c0cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c0c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9c0f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9c13: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9c19u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9c19: jmp 0x8f9bd5 */
  goto L_8f9bd5;
L_8f9c20: /* 8f9c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9c22: push 0xaefa28 */
  { uint32_t v = 0xaefa28u; esp -= 4; W32(esp, v); }
/* 8f9c27: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c2a: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9c30u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9c30: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9c33: je 0x8f9c66 */
  if (zf) goto L_8f9c66;
L_8f9c35: /* 8f9c35: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9c3a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9c3c: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8f9c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9c40: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c43: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9c49u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9c49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9c4a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c4d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8f9c51: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c57u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c57: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8f9c5a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9c5e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9c64u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9c64: jmp 0x8f9c20 */
  goto L_8f9c20;
L_8f9c66: /* 8f9c66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9c68: push 0xaefa2c */
  { uint32_t v = 0xaefa2cu; esp -= 4; W32(esp, v); }
/* 8f9c6d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c70: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9c76u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9c76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9c79: je 0x8f9cb0 */
  if (zf) goto L_8f9cb0;
L_8f9c7b: /* 8f9c7b: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9c80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9c82: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f9c85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9c86: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c89: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9c8fu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9c8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9c90: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c93: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8f9c97: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c9du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c9d: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8f9ca0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9ca4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9caau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9caa: jmp 0x8f9c66 */
  goto L_8f9c66;
L_8f9cb0: /* 8f9cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9cb2: push 0xaefa30 */
  { uint32_t v = 0xaefa30u; esp -= 4; W32(esp, v); }
/* 8f9cb7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cba: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9cc0u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9cc0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9cc3: je 0x8f9cf6 */
  if (zf) goto L_8f9cf6;
L_8f9cc5: /* 8f9cc5: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9cca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9ccc: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8f9ccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9cd0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cd3: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9cd9u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9cda: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cdd: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f9ce1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9ce7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9ce7: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8f9cea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9cee: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9cf4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9cf4: jmp 0x8f9cb0 */
  goto L_8f9cb0;
L_8f9cf6: /* 8f9cf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9cf8: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9cfb: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 8f9cfe: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9d01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d07: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8f9d0a: mov edi, eax */
  edi = eax;
/* 8f9d0c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9d12u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9d12: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8f9d15: mov ebx, eax */
  ebx = eax;
/* 8f9d17: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x8f9d1du); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 8f9d1d: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8f9d20: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 8f9d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9d25: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 8f9d28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9d29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9d2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f9d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d2c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d2f: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f9d32: push 0xaefa38 */
  { uint32_t v = 0xaefa38u; esp -= 4; W32(esp, v); }
/* 8f9d37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d38: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9d3eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9d3e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9d41: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9d44: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9d48: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9d4eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9d4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f9d51: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f9d54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9d55: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f9d58: mov edi, eax */
  edi = eax;
/* 8f9d5a: jmp 0x8f9bb0 */
  goto L_8f9bb0;
L_8f9d5f: /* 8f9d5f: xor esi, esi */
  esi = 0;
L_8f9d61: /* 8f9d61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d64: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f9d67: cmp esi, dword ptr [eax + 0x94] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9d6d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8f9d70: jge 0x8f9ef0 */
  if ((sf == of)) goto L_8f9ef0;
L_8f9d76: /* 8f9d76: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 8f9d7c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8f9d7f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8f9d82: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d88u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8f9d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d91: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9d96: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8f9d9cu); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8f9d9c: mov ebx, eax */
  ebx = eax;
/* 8f9d9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9da1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9da3: je 0x8f9eba */
  if (zf) goto L_8f9eba;
L_8f9da9: /* 8f9da9: mov ecx, ebx */
  ecx = ebx;
/* 8f9dab: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9db1u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9db1: mov edi, eax */
  edi = eax;
/* 8f9db3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9db5: je 0x8f9dd5 */
  if (zf) goto L_8f9dd5;
L_8f9db7: /* 8f9db7: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9dbc: mov ecx, edi */
  ecx = edi;
/* 8f9dbe: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9dc4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9dc6: jne 0x8f9dfe */
  if (!zf) goto L_8f9dfe;
L_8f9dc8: /* 8f9dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dc9: mov ecx, edi */
  ecx = edi;
/* 8f9dcb: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9dd1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9dd1: mov esi, eax */
  esi = eax;
/* 8f9dd3: jmp 0x8f9dda */
  goto L_8f9dda;
L_8f9dd5: /* 8f9dd5: mov esi, 0xaf04b4 */
  esi = 0xaf04b4u;
L_8f9dda: /* 8f9dda: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9ddf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9de5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9de5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9deb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9def: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9df5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9dfbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9dfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9dfe: /* 8f9dfe: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8f9e01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e08: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e0b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9e11u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9e11: mov ecx, ebx */
  ecx = ebx;
/* 8f9e13: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f9e17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9e1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9e1d: mov esi, eax */
  esi = eax;
/* 8f9e1f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e21: je 0x8f9e41 */
  if (zf) goto L_8f9e41;
L_8f9e23: /* 8f9e23: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9e28: mov ecx, esi */
  ecx = esi;
/* 8f9e2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9e30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e32: jne 0x8f9e69 */
  if (!zf) goto L_8f9e69;
L_8f9e34: /* 8f9e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e35: mov ecx, esi */
  ecx = esi;
/* 8f9e37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9e3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9e3d: mov edi, eax */
  edi = eax;
/* 8f9e3f: jmp 0x8f9e46 */
  goto L_8f9e46;
L_8f9e41: /* 8f9e41: mov edi, 0xaf04b4 */
  edi = 0xaf04b4u;
L_8f9e46: /* 8f9e46: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9e4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9e51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e52: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f9e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e5a: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9e60: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9e66u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9e66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9e69: /* 8f9e69: mov esi, dword ptr [esi + 0x40] */
  esi = R32((uint32_t)(esi + 0x40u));
/* 8f9e6c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e6f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e75: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9e79: je 0x8f9eaa */
  if (zf) goto L_8f9eaa;
L_8f9e7b: /* 8f9e7b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e7e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e88: mov ecx, ebx */
  ecx = ebx;
/* 8f9e8a: mov edi, eax */
  edi = eax;
/* 8f9e8c: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8f9e92u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8f9e92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e98: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f9e9b: push 0xaefaa8 */
  { uint32_t v = 0xaefaa8u; esp -= 4; W32(esp, v); }
/* 8f9ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9ea1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9ea7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9ea7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9eaa: /* 8f9eaa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9ead: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9eb1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9eb7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9eb7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f9eba: /* 8f9eba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f9ebb: jmp 0x8f9d61 */
  goto L_8f9d61;
L_8f9ef0: /* 8f9ef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9efd: mov esp, ebp */
  esp = ebp;
/* 8f9eff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9f00: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9cac(void) {
  LOAD_REGS();
  goto L_8f9cac;
L_8f9bb0: /* 8f9bb0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9bb3: jge 0x8f9d5f */
  if ((sf == of)) goto L_8f9d5f;
L_8f9bb9: /* 8f9bb9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9bbb: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9bbe: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8f9bc1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9bc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9bc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bc8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bcb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9bd1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9bd1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_8f9bd5: /* 8f9bd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9bd7: push 0xaefa24 */
  { uint32_t v = 0xaefa24u; esp -= 4; W32(esp, v); }
/* 8f9bdc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bdf: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9be5u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9be5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9be8: je 0x8f9c20 */
  if (zf) { SPILL(); f_8f9c20(); return; }
L_8f9bea: /* 8f9bea: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9bef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bf1: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9bf5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9bf8: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9bfeu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9bff: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9c02: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8f9c06: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9c0cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9c0c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8f9c0f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9c13: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9c19u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9c19: jmp 0x8f9bd5 */
  goto L_8f9bd5;
L_8f9cac: /* 8f9cac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8f9cb0: /* 8f9cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9cb2: push 0xaefa30 */
  { uint32_t v = 0xaefa30u; esp -= 4; W32(esp, v); }
/* 8f9cb7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cba: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8f9cc0u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8f9cc0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9cc3: je 0x8f9cf6 */
  if (zf) goto L_8f9cf6;
L_8f9cc5: /* 8f9cc5: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 8f9cca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9ccc: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8f9ccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9cd0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cd3: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x8f9cd9u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 8f9cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9cda: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9cdd: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8f9ce1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8f9ce7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8f9ce7: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8f9cea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8f9cee: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9cf4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9cf4: jmp 0x8f9cb0 */
  goto L_8f9cb0;
L_8f9cf6: /* 8f9cf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8f9cf8: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8f9cfb: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 8f9cfe: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9d01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d07: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8f9d0a: mov edi, eax */
  edi = eax;
/* 8f9d0c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9d12u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9d12: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8f9d15: mov ebx, eax */
  ebx = eax;
/* 8f9d17: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x8f9d1du); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 8f9d1d: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8f9d20: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 8f9d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9d25: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 8f9d28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9d29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9d2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8f9d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d2c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d2f: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8f9d32: push 0xaefa38 */
  { uint32_t v = 0xaefa38u; esp -= 4; W32(esp, v); }
/* 8f9d37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d38: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9d3eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9d3e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9d41: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9d44: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9d48: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9d4eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9d4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8f9d51: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8f9d54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8f9d55: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8f9d58: mov edi, eax */
  edi = eax;
/* 8f9d5a: jmp 0x8f9bb0 */
  goto L_8f9bb0;
L_8f9d5f: /* 8f9d5f: xor esi, esi */
  esi = 0;
L_8f9d61: /* 8f9d61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9d64: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8f9d67: cmp esi, dword ptr [eax + 0x94] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8f9d6d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8f9d70: jge 0x8f9ef0 */
  if ((sf == of)) goto L_8f9ef0;
L_8f9d76: /* 8f9d76: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 8f9d7c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8f9d7f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8f9d82: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9d88u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8f9d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9d91: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9d96: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x8f9d9cu); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 8f9d9c: mov ebx, eax */
  ebx = eax;
/* 8f9d9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9da1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9da3: je 0x8f9eba */
  if (zf) goto L_8f9eba;
L_8f9da9: /* 8f9da9: mov ecx, ebx */
  ecx = ebx;
/* 8f9dab: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9db1u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9db1: mov edi, eax */
  edi = eax;
/* 8f9db3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9db5: je 0x8f9dd5 */
  if (zf) goto L_8f9dd5;
L_8f9db7: /* 8f9db7: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9dbc: mov ecx, edi */
  ecx = edi;
/* 8f9dbe: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9dc4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9dc6: jne 0x8f9dfe */
  if (!zf) goto L_8f9dfe;
L_8f9dc8: /* 8f9dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dc9: mov ecx, edi */
  ecx = edi;
/* 8f9dcb: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9dd1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9dd1: mov esi, eax */
  esi = eax;
/* 8f9dd3: jmp 0x8f9dda */
  goto L_8f9dda;
L_8f9dd5: /* 8f9dd5: mov esi, 0xaf04b4 */
  esi = 0xaf04b4u;
L_8f9dda: /* 8f9dda: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9ddf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9de5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9de5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8f9deb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8f9ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9def: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9df5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9dfbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9dfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9dfe: /* 8f9dfe: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8f9e01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e08: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e0b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8f9e11u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8f9e11: mov ecx, ebx */
  ecx = ebx;
/* 8f9e13: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8f9e17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8f9e1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8f9e1d: mov esi, eax */
  esi = eax;
/* 8f9e1f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e21: je 0x8f9e41 */
  if (zf) goto L_8f9e41;
L_8f9e23: /* 8f9e23: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 8f9e28: mov ecx, esi */
  ecx = esi;
/* 8f9e2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8f9e30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8f9e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8f9e32: jne 0x8f9e69 */
  if (!zf) goto L_8f9e69;
L_8f9e34: /* 8f9e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e35: mov ecx, esi */
  ecx = esi;
/* 8f9e37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8f9e3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8f9e3d: mov edi, eax */
  edi = eax;
/* 8f9e3f: jmp 0x8f9e46 */
  goto L_8f9e46;
L_8f9e41: /* 8f9e41: mov edi, 0xaf04b4 */
  edi = 0xaf04b4u;
L_8f9e46: /* 8f9e46: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 8f9e4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8f9e51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8f9e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e52: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8f9e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8f9e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e5a: push 0xaf04c0 */
  { uint32_t v = 0xaf04c0u; esp -= 4; W32(esp, v); }
/* 8f9e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9e60: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9e66u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9e66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9e69: /* 8f9e69: mov esi, dword ptr [esi + 0x40] */
  esi = R32((uint32_t)(esi + 0x40u));
/* 8f9e6c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e6f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e75: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8f9e79: je 0x8f9eaa */
  if (zf) goto L_8f9eaa;
L_8f9e7b: /* 8f9e7b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9e7e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8f9e84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8f9e84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9e88: mov ecx, ebx */
  ecx = ebx;
/* 8f9e8a: mov edi, eax */
  edi = eax;
/* 8f9e8c: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8f9e92u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8f9e92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8f9e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8f9e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8f9e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8f9e98: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8f9e9b: push 0xaefaa8 */
  { uint32_t v = 0xaefaa8u; esp -= 4; W32(esp, v); }
/* 8f9ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8f9ea1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8f9ea7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8f9ea7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8f9eaa: /* 8f9eaa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8f9ead: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8f9eb1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8f9eb7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8f9eb7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_8f9eba: /* 8f9eba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8f9ebb: jmp 0x8f9d61 */
  goto L_8f9d61;
L_8f9ef0: /* 8f9ef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9efd: mov esp, ebp */
  esp = ebp;
/* 8f9eff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9f00: ret  */
  esp += 4; SPILL(); return;
}

void f_8f9ec0(void) {
  LOAD_REGS();
L_8f9ec0: /* 8f9ec0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8f9ec3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8f9ec8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8f9ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8f9ecc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8f9ecf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9ed4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8f9ed4(); return;
}

void f_8f9ed4(void) {
  LOAD_REGS();
L_8f9ed4: /* 8f9ed4: push 0xa1f63c */
  { uint32_t v = 0xa1f63cu; esp -= 4; W32(esp, v); }
/* 8f9ed9: push 0xaefaf8 */
  { uint32_t v = 0xaefaf8u; esp -= 4; W32(esp, v); }
/* 8f9ede: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8f9ee4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8f9ee4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8f9ee7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9ee9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8f9eeb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8f9ef0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8f9ef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8f9ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8f9ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8f9ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8f9efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8f9efd: mov esp, ebp */
  esp = ebp;
/* 8f9eff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8f9f00: ret  */
  esp += 4; SPILL(); return;
}

void f_8fa000(void) {
  LOAD_REGS();
L_8fa000: /* 8fa000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa001: mov esi, ecx */
  esi = ecx;
/* 8fa003: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8fa009u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8fa009: mov eax, esi */
  eax = esi;
/* 8fa00b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa00c: ret  */
  esp += 4; SPILL(); return;
}

void f_8fa020(void) {
  LOAD_REGS();
L_8fa020: /* 8fa020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa021: mov ebp, esp */
  ebp = esp;
/* 8fa023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fa025: push 0x9d95e0 */
  { uint32_t v = 0x9d95e0u; esp -= 4; W32(esp, v); }
/* 8fa02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fa030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fa038: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa03b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa03c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa03d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa03e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fa041: mov esi, ecx */
  esi = ecx;
/* 8fa043: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa04a: xor edi, edi */
  edi = 0;
/* 8fa04c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8fa050: /* 8fa050: cmp edi, dword ptr [esi + 0x3eb8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3eb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa056: jge 0x8fa071 */
  if ((sf == of)) goto L_8fa071;
L_8fa058: /* 8fa058: mov ecx, dword ptr [esi + 0x3eb4] */
  ecx = R32((uint32_t)(esi + 0x3eb4u));
/* 8fa05e: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8fa061: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fa063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa066: mov ecx, esi */
  ecx = esi;
/* 8fa068: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8fa06eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa06e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8fa06f: jmp 0x8fa050 */
  goto L_8fa050;
L_8fa071: /* 8fa071: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8fa073: lea ecx, [esi + 0x3eb4] */
  ecx = (uint32_t)(esi + 0x3eb4u);
/* 8fa079: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fa07b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8fa081u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8fa081: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa084: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa085: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa086: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa08d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa08e: mov esp, ebp */
  esp = ebp;
/* 8fa090: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa091: ret  */
  esp += 4; SPILL(); return;
}

void f_8fa092(void) {
  LOAD_REGS();
L_8fa092: /* 8fa092: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fa095: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa09a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8fa09d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa09e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8fa0a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa0a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa0a6(); return;
}

void f_8fa0a6(void) {
  LOAD_REGS();
L_8fa0a6: /* 8fa0a6: push 0xa1f688 */
  { uint32_t v = 0xa1f688u; esp -= 4; W32(esp, v); }
/* 8fa0ab: push 0xaf0218 */
  { uint32_t v = 0xaf0218u; esp -= 4; W32(esp, v); }
/* 8fa0b0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa0b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa0b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa0b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa0bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa0bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa0c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa0c2: guest_badaddr(0x8fa0c2); return;
}

void f_8fa100(void) {
  LOAD_REGS();
L_8fa100: /* 8fa100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa101: mov ebp, esp */
  ebp = esp;
/* 8fa103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fa105: push 0x9d95f0 */
  { uint32_t v = 0x9d95f0u; esp -= 4; W32(esp, v); }
/* 8fa10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fa110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fa118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa11b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa11d: mov esi, ecx */
  esi = ecx;
/* 8fa11f: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8fa125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa127: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa128: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fa12b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa132: jne 0x8fa1a6 */
  if (!zf) goto L_8fa1a6;
L_8fa134: /* 8fa134: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fa137: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa139: je 0x8fa15a */
  if (zf) goto L_8fa15a;
L_8fa13b: /* 8fa13b: call 0x6c6375 */
  esp -= 4; W32(esp, 0x8fa140u); SPILL(); f_6c6375(); if (g_unwind) return; RELOAD();
/* 8fa140: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fa142: lea edi, [esi + 0x3ea8] */
  edi = (uint32_t)(esi + 0x3ea8u);
/* 8fa148: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa14a: mov ecx, edi */
  ecx = edi;
/* 8fa14c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fa152u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fa152: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8fa154: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8fa157: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_8fa15a: /* 8fa15a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa15f: call dword ptr [0xcfa2b0] */
  esp -= 4; W32(esp, 0x8fa165u); SPILL(); f_4e2428(); if (g_unwind) return; /* Core!?appCeilLogTwo@@YAEK@Z */ RELOAD();
/* 8fa165: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8fa168: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa16b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8fa16c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa16d: mov ecx, esi */
  ecx = esi;
/* 8fa16f: call 0x6c6348 */
  esp -= 4; W32(esp, 0x8fa174u); SPILL(); f_6c6348(); if (g_unwind) return; RELOAD();
/* 8fa174: lea edi, [esi + 0x254] */
  edi = (uint32_t)(esi + 0x254u);
/* 8fa17a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa17c: mov ecx, edi */
  ecx = edi;
/* 8fa17e: call dword ptr [0xcfab74] */
  esp -= 4; W32(esp, 0x8fa184u); SPILL(); f_4e24eb(); if (g_unwind) return; /* Core!?WriteBit@FBitWriter@@QAEXE@Z */ RELOAD();
/* 8fa184: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa187: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 8fa18c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa18d: mov ecx, edi */
  ecx = edi;
/* 8fa18f: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x8fa195u); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 8fa195: mov ecx, esi */
  ecx = esi;
/* 8fa197: mov dword ptr [esi + 0x134], 0 */
  W32((uint32_t)(esi + 0x134u), 0x0u);
/* 8fa1a1: call 0x6c492b */
  esp -= 4; W32(esp, 0x8fa1a6u); SPILL(); f_6c492b(); if (g_unwind) return; RELOAD();
L_8fa1a6: /* 8fa1a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa1a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa1aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa1ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa1b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa1b3: mov esp, ebp */
  esp = ebp;
/* 8fa1b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa1b6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8fa1b9(void) {
  LOAD_REGS();
L_8fa1b9: /* 8fa1b9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fa1bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa1c1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8fa1c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa1c5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8fa1c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa1cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa1cd(); return;
}

void f_8fa1cd(void) {
  LOAD_REGS();
L_8fa1cd: /* 8fa1cd: push 0xa1f6c8 */
  { uint32_t v = 0xa1f6c8u; esp -= 4; W32(esp, v); }
/* 8fa1d2: push 0xaf0220 */
  { uint32_t v = 0xaf0220u; esp -= 4; W32(esp, v); }
/* 8fa1d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa1ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa1dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa1e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa1e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa1e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa1e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa1e9: guest_badaddr(0x8fa1e9); return;
}

void f_8fa230(void) {
  LOAD_REGS();
L_8fa230: /* 8fa230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa231: mov ebp, esp */
  ebp = esp;
/* 8fa233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fa235: push 0x9d9600 */
  { uint32_t v = 0x9d9600u; esp -= 4; W32(esp, v); }
/* 8fa23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fa240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fa248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa24b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa24d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa24e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8fa251: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fa254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa255: mov ebx, ecx */
  ebx = ecx;
/* 8fa257: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa25e: call 0x6c82ab */
  esp -= 4; W32(esp, 0x8fa263u); SPILL(); f_6c82ab(); if (g_unwind) return; RELOAD();
/* 8fa263: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa266: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa268: jne 0x8fa282 */
  if (!zf) goto L_8fa282;
L_8fa26a: /* 8fa26a: push 0x2d9 */
  { uint32_t v = 0x2d9u; esp -= 4; W32(esp, v); }
/* 8fa26f: push 0xaf0290 */
  { uint32_t v = 0xaf0290u; esp -= 4; W32(esp, v); }
/* 8fa274: push 0xaf029c */
  { uint32_t v = 0xaf029cu; esp -= 4; W32(esp, v); }
/* 8fa279: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa27fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa27f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa282: /* 8fa282: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8fa284: mov ecx, ebx */
  ecx = ebx;
/* 8fa286: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8fa289u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa289: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8fa28c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa28f: jne 0x8fa2d3 */
  if (!zf) goto L_8fa2d3;
L_8fa291: /* 8fa291: mov esi, 1 */
  esi = 0x1u;
/* 8fa296: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa298: jne 0x8fa2a0 */
  if (!zf) goto L_8fa2a0;
L_8fa29a: /* 8fa29a: xor esi, esi */
  esi = 0;
/* 8fa29c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8fa2a0: /* 8fa2a0: cmp esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa2a6: jge 0x8fa2bc */
  if ((sf == of)) goto L_8fa2bc;
L_8fa2a8: /* 8fa2a8: mov eax, dword ptr [ebx + esi*4 + 0xeb4] */
  eax = R32((uint32_t)(ebx + esi*4 + 0xeb4u));
/* 8fa2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa2b1: je 0x8fa2b6 */
  if (zf) goto L_8fa2b6;
L_8fa2b3: /* 8fa2b3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa2b4: jmp 0x8fa2a0 */
  goto L_8fa2a0;
L_8fa2b6: /* 8fa2b6: cmp esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8fa2bc: /* 8fa2bc: jne 0x8fa2d3 */
  if (!zf) goto L_8fa2d3;
L_8fa2be: /* 8fa2be: xor eax, eax */
  eax = 0;
/* 8fa2c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa2c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa2ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa2cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa2cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa2cd: mov esp, ebp */
  esp = ebp;
/* 8fa2cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa2d0: ret 0xc */
  esp += 16; SPILL(); return;
L_8fa2d3: /* 8fa2d3: cmp esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa2d9: jl 0x8fa2f3 */
  if ((sf != of)) goto L_8fa2f3;
L_8fa2db: /* 8fa2db: push 0x2ea */
  { uint32_t v = 0x2eau; esp -= 4; W32(esp, v); }
/* 8fa2e0: push 0xaf02c4 */
  { uint32_t v = 0xaf02c4u; esp -= 4; W32(esp, v); }
/* 8fa2e5: push 0xaf02d0 */
  { uint32_t v = 0xaf02d0u; esp -= 4; W32(esp, v); }
/* 8fa2ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa2f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa2f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa2f3: /* 8fa2f3: mov eax, dword ptr [ebx + esi*4 + 0xeb4] */
  eax = R32((uint32_t)(ebx + esi*4 + 0xeb4u));
/* 8fa2fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa2fc: je 0x8fa316 */
  if (zf) goto L_8fa316;
L_8fa2fe: /* 8fa2fe: push 0x2eb */
  { uint32_t v = 0x2ebu; esp -= 4; W32(esp, v); }
/* 8fa303: push 0xaf02e8 */
  { uint32_t v = 0xaf02e8u; esp -= 4; W32(esp, v); }
/* 8fa308: push 0xaf02f4 */
  { uint32_t v = 0xaf02f4u; esp -= 4; W32(esp, v); }
/* 8fa30d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa313u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa313: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa316: /* 8fa316: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa318: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8fa31b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8fa321u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8fa321: mov edi, dword ptr [edi*4 + 0xced6a8] */
  edi = R32((uint32_t)(edi*4 + 0xced6a8u));
/* 8fa328: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 8fa32d: mov ecx, edi */
  ecx = edi;
/* 8fa32f: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8fa335u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8fa335: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa337: jne 0x8fa351 */
  if (!zf) goto L_8fa351;
L_8fa339: /* 8fa339: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8fa33e: push 0xaf04f0 */
  { uint32_t v = 0xaf04f0u; esp -= 4; W32(esp, v); }
/* 8fa343: push 0xaf0534 */
  { uint32_t v = 0xaf0534u; esp -= 4; W32(esp, v); }
/* 8fa348: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa34eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa34e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa351: /* 8fa351: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8fa357u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8fa357: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8fa35d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa35f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8fa362: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa367: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa36a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa36b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa36c: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8fa372u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8fa372: mov edi, eax */
  edi = eax;
/* 8fa374: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8fa377: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8fa379: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa37c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa37d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa37e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa37f: mov ecx, edi */
  ecx = edi;
/* 8fa381: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8fa384u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa384: mov dword ptr [ebx + esi*4 + 0xeb4], edi */
  W32((uint32_t)(ebx + esi*4 + 0xeb4u), edi);
/* 8fa38b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8fa38d: lea esi, [ebx + 0x3ec0] */
  esi = (uint32_t)(ebx + 0x3ec0u);
/* 8fa393: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa395: mov ecx, esi */
  ecx = esi;
/* 8fa397: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8fa39du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8fa39d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8fa39f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8fa3a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa3a5: mov eax, edi */
  eax = edi;
/* 8fa3a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa3a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa3a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa3b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa3b1: mov esp, ebp */
  esp = ebp;
/* 8fa3b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa3b4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8fa3b7(void) {
  LOAD_REGS();
L_8fa3b7: /* 8fa3b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8fa3ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8fa3bf: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8fa3c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa3c3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8fa3c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa3cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8fa3cb(); return;
}

void f_8fa3cb(void) {
  LOAD_REGS();
L_8fa3cb: /* 8fa3cb: push 0xa1f704 */
  { uint32_t v = 0xa1f704u; esp -= 4; W32(esp, v); }
/* 8fa3d0: push 0xaf030c */
  { uint32_t v = 0xaf030cu; esp -= 4; W32(esp, v); }
/* 8fa3d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8fa3dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8fa3db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa3de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa3e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8fa3e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8fa3e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8fa3e7: guest_badaddr(0x8fa3e7); return;
}

void f_8fa460(void) {
  LOAD_REGS();
L_8fa460: /* 8fa460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa462: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa463: mov edi, ecx */
  edi = ecx;
/* 8fa465: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 8fa468: xor esi, esi */
  esi = 0;
/* 8fa46a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa46c: jle 0x8fa490 */
  if ((zf || sf != of)) goto L_8fa490;
L_8fa46e: /* 8fa46e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa46f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_8fa473: /* 8fa473: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8fa475: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8fa478: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa47a: jne 0x8fa487 */
  if (!zf) goto L_8fa487;
L_8fa47c: /* 8fa47c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa47e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa47f: mov ecx, edi */
  ecx = edi;
/* 8fa481: call 0x6c9b10 */
  esp -= 4; W32(esp, 0x8fa486u); SPILL(); f_6c9b10(); if (g_unwind) return; RELOAD();
/* 8fa486: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8fa487: /* 8fa487: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8fa48a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8fa48b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8fa48d: jl 0x8fa473 */
  if ((sf != of)) goto L_8fa473;
L_8fa48f: /* 8fa48f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8fa490: /* 8fa490: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8fa493: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa494: mov eax, ebp */
  eax = ebp;
/* 8fa496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa497: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8fa499: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa49a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8fa4b0(void) {
  LOAD_REGS();
L_8fa4b0: /* 8fa4b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8fa4b1: mov ebp, esp */
  ebp = esp;
/* 8fa4b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8fa4b5: push 0x9d9619 */
  { uint32_t v = 0x9d9619u; esp -= 4; W32(esp, v); }
/* 8fa4ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8fa4c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa4c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8fa4c8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8fa4cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa4cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8fa4cd: mov esi, ecx */
  esi = ecx;
/* 8fa4cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fa4d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa4d2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8fa4d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8fa4d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8fa4d9: mov ecx, esi */
  ecx = esi;
/* 8fa4db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa4e2: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8fa4e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa4e5: mov edi, eax */
  edi = eax;
/* 8fa4e7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8fa4eb: call dword ptr [0xcfaa84] */
  esp -= 4; W32(esp, 0x8fa4f1u); SPILL(); f_4e1ebf(); if (g_unwind) return; /* Core!?appTimestamp@@YAPBGXZ */ RELOAD();
/* 8fa4f1: mov ecx, edi */
  ecx = edi;
/* 8fa4f3: mov ebx, eax */
  ebx = eax;
/* 8fa4f5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8fa4fbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8fa4fb: mov ecx, esi */
  ecx = esi;
/* 8fa4fd: mov edi, eax */
  edi = eax;
/* 8fa4ff: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8fa505u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8fa505: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8fa50b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8fa50c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8fa50d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa50e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8fa510: push 0xaef870 */
  { uint32_t v = 0xaef870u; esp -= 4; W32(esp, v); }
/* 8fa515: push 0x313 */
  { uint32_t v = 0x313u; esp -= 4; W32(esp, v); }
/* 8fa51a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8fa51b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8fa521u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8fa521: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8fa524: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8fa527: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8fa52b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8fa531u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8fa531: mov ecx, dword ptr [esi + 0xeb4] */
  ecx = R32((uint32_t)(esi + 0xeb4u));
/* 8fa537: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa539: je 0x8fa540 */
  if (zf) goto L_8fa540;
L_8fa53b: /* 8fa53b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa53d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8fa540u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fa540: /* 8fa540: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8fa542: mov ecx, esi */
  ecx = esi;
/* 8fa544: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8fa54au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8fa54a: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8fa54d: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8fa550: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa552: je 0x8fa579 */
  if (zf) goto L_8fa579;
L_8fa554: /* 8fa554: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa556: je 0x8fa56d */
  if (zf) goto L_8fa56d;
L_8fa558: /* 8fa558: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 8fa55a: push 0xaef890 */
  { uint32_t v = 0xaef890u; esp -= 4; W32(esp, v); }
/* 8fa55f: push 0xaef89c */
  { uint32_t v = 0xaef89cu; esp -= 4; W32(esp, v); }
/* 8fa564: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa56au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa56a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa56d: /* 8fa56d: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8fa570: mov dword ptr [ecx + 0x38], 0 */
  W32((uint32_t)(ecx + 0x38u), 0x0u);
/* 8fa577: jmp 0x8fa5a2 */
  goto L_8fa5a2;
L_8fa579: /* 8fa579: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8fa57c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8fa57d: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 8fa580: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8fa583: call 0x6c42c3 */
  esp -= 4; W32(esp, 0x8fa588u); SPILL(); f_6c42c3(); if (g_unwind) return; RELOAD();
/* 8fa588: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8fa58b: je 0x8fa5a2 */
  if (zf) goto L_8fa5a2;
L_8fa58d: /* 8fa58d: push 0x63 */
  { uint32_t v = 0x63u; esp -= 4; W32(esp, v); }
/* 8fa58f: push 0xaef8e8 */
  { uint32_t v = 0xaef8e8u; esp -= 4; W32(esp, v); }
/* 8fa594: push 0xaef8f4 */
  { uint32_t v = 0xaef8f4u; esp -= 4; W32(esp, v); }
/* 8fa599: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8fa59fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8fa59f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8fa5a2: /* 8fa5a2: mov eax, dword ptr [esi + 0x3ec4] */
  eax = R32((uint32_t)(esi + 0x3ec4u));
/* 8fa5a8: mov dword ptr [esi + 0x6c], 1 */
  W32((uint32_t)(esi + 0x6cu), 0x1u);
/* 8fa5af: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_8fa5b2: /* 8fa5b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8fa5b4: jl 0x8fa5cd */
  if ((sf != of)) goto L_8fa5cd;
L_8fa5b6: /* 8fa5b6: mov eax, dword ptr [esi + 0x3ec0] */
  eax = R32((uint32_t)(esi + 0x3ec0u));
/* 8fa5bc: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8fa5bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa5c1: je 0x8fa5ca */
  if (zf) goto L_8fa5ca;
L_8fa5c3: /* 8fa5c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa5c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa5c7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fa5cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fa5ca: /* 8fa5ca: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8fa5cb: jmp 0x8fa5b2 */
  goto L_8fa5b2;
L_8fa5cd: /* 8fa5cd: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8fa5d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa5d5: je 0x8fa5de */
  if (zf) goto L_8fa5de;
L_8fa5d7: /* 8fa5d7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8fa5d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa5db: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8fa5deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fa5de: /* 8fa5de: mov ecx, dword ptr [esi + 0x3eec] */
  ecx = R32((uint32_t)(esi + 0x3eecu));
/* 8fa5e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8fa5e6: je 0x8fa5ef */
  if (zf) goto L_8fa5ef;
L_8fa5e8: /* 8fa5e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8fa5ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8fa5ec: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8fa5efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8fa5ef: /* 8fa5ef: mov ecx, esi */
  ecx = esi;
/* 8fa5f1: call 0x6c8c60 */
  esp -= 4; W32(esp, 0x8fa5f6u); SPILL(); f_6c8c60(); if (g_unwind) return; RELOAD();
/* 8fa5f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8fa5f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8fa5fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8fa5fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8fa602: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8fa603: mov esp, ebp */
  esp = ebp;
/* 8fa605: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8fa606: ret  */
  esp += 4; SPILL(); return;
}
