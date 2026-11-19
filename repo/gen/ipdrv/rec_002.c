#include "recomp.h"
#include "rec_mod.h"

void f_edd588(void) {
  LOAD_REGS();
L_edd588: /* edd588: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edd58b: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edd590: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edd593: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd594: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edd597: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd59cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edd59c(); return;
}

void f_edd59c(void) {
  LOAD_REGS();
L_edd59c: /* edd59c: push 0xef5d88 */
  { uint32_t v = 0xef5d88u; esp -= 4; W32(esp, v); }
/* edd5a1: push 0xf03088 */
  { uint32_t v = 0xf03088u; esp -= 4; W32(esp, v); }
/* edd5a6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedd5acu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edd5ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd5af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd5b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd5b3: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd5b8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edd5b8: guest_badaddr(0xedd5b8); return;
}

void f_edd630(void) {
  LOAD_REGS();
L_edd630: /* edd630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edd631: mov ebp, esp */
  ebp = esp;
/* edd633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd635: push 0xeee6b9 */
  { uint32_t v = 0xeee6b9u; esp -= 4; W32(esp, v); }
/* edd63a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd648: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edd64b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd64c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd64d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd64e: mov edi, ecx */
  edi = ecx;
/* edd650: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd653: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edd656: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd65d: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedd663u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edd663: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edd666: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edd669: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edd66c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edd66f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edd670: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edd673: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* edd676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd677: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edd67c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd67d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edd681: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedd684u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd684: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edd687: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edd688: mov eax, edx */
  eax = edx;
/* edd68a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edd68d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edd690: jne 0xedd6a8 */
  if (!zf) goto L_edd6a8;
L_edd692: /* edd692: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edd695: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edd696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd698: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edd69b: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edd6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd6a2: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedd6a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edd6a8: /* edd6a8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd6ab: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedd6b1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edd6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd6b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd6b4: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xedd6bau); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* edd6ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd6be: call 0xeebbb8 */
  esp -= 4; W32(esp, 0xedd6c3u); SPILL(); f_eebbb8(); if (g_unwind) return; RELOAD();
/* edd6c3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edd6c6: jne 0xedd72e */
  if (!zf) goto L_edd72e;
L_edd6c8: /* edd6c8: push 0xf030e8 */
  { uint32_t v = 0xf030e8u; esp -= 4; W32(esp, v); }
/* edd6cd: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd6d0: call dword ptr [0xf0dc14] */
  esp -= 4; W32(esp, 0xedd6d6u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* edd6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd6d8: je 0xedd718 */
  if (zf) goto L_edd718;
L_edd6da: /* edd6da: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* edd6df: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edd6e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edd6e3: push 0xf03108 */
  { uint32_t v = 0xf03108u; esp -= 4; W32(esp, v); }
/* edd6e8: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* edd6ed: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedd6efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd6ef: mov esi, eax */
  esi = eax;
/* edd6f1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd6f3: je 0xedd70e */
  if (zf) goto L_edd70e;
L_edd6f5: /* edd6f5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd6f8: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedd6feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edd6fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd6ff: mov ecx, esi */
  ecx = esi;
/* edd701: call 0xed1429 */
  esp -= 4; W32(esp, 0xedd706u); SPILL(); f_ed1429(); if (g_unwind) return; RELOAD();
/* edd706: mov dword ptr [edi + 0x34c], eax */
  W32((uint32_t)(edi + 0x34cu), eax);
/* edd70c: jmp 0xedd759 */
  goto L_edd759;
L_edd70e: /* edd70e: xor eax, eax */
  eax = 0;
/* edd710: mov dword ptr [edi + 0x34c], eax */
  W32((uint32_t)(edi + 0x34cu), eax);
/* edd716: jmp 0xedd759 */
  goto L_edd759;
L_edd718: /* edd718: mov eax, dword ptr [0xf07d24] */
  eax = R32((uint32_t)(0xf07d24u));
/* edd71d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd720: mov ecx, edi */
  ecx = edi;
/* edd722: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xedd728u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* edd728: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd72a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd72c: jmp 0xedd751 */
  goto L_edd751;
L_edd72e: /* edd72e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd72f: call 0xeebc0c */
  esp -= 4; W32(esp, 0xedd734u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* edd734: xor ecx, ecx */
  ecx = 0;
/* edd736: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* edd739: mov eax, dword ptr [0xf07d58] */
  eax = R32((uint32_t)(0xf07d58u));
/* edd73e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd73f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* edd742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd743: mov ecx, edi */
  ecx = edi;
/* edd745: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xedd74bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* edd74b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd74d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* edd750: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_edd751: /* edd751: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* edd753: mov ecx, edi */
  ecx = edi;
/* edd755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd756: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xedd759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edd759: /* edd759: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd75c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd760: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedd766u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edd766: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd769: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd76a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd76b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd773: mov esp, ebp */
  esp = ebp;
/* edd775: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd776: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edd779(void) {
  LOAD_REGS();
L_edd779: /* edd779: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edd77c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edd781: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edd784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd785: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* edd788: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd78du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edd78d(); return;
}

void f_edd78d(void) {
  LOAD_REGS();
L_edd78d: /* edd78d: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* edd793: push 0xef5db8 */
  { uint32_t v = 0xef5db8u; esp -= 4; W32(esp, v); }
/* edd798: push 0xf03130 */
  { uint32_t v = 0xf03130u; esp -= 4; W32(esp, v); }
/* edd79d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedd79fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd79f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edd7a2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* edd7a5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edd7a8: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* edd7ab: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* edd7b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd7b4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edd7b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd7b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd7b9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedd7bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd7bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edd7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd7bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd7c1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedd7c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd7c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd7c4: push 0xf03138 */
  { uint32_t v = 0xf03138u; esp -= 4; W32(esp, v); }
/* edd7c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedd7cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd7cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd7ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd7d2: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd7d7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edd7d7: guest_badaddr(0xedd7d7); return;
}

void f_edd850(void) {
  LOAD_REGS();
L_edd850: /* edd850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edd851: mov ebp, esp */
  ebp = esp;
/* edd853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd855: push 0xeee6d0 */
  { uint32_t v = 0xeee6d0u; esp -= 4; W32(esp, v); }
/* edd85a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edd86b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd86c: mov ebx, ecx */
  ebx = ecx;
/* edd86e: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* edd871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd873: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd874: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd875: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edd878: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd87f: je 0xedd93c */
  if (zf) goto L_edd93c;
L_edd885: /* edd885: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* edd888: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* edd88b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edd88d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edd88f: lea esi, [ebx + 0x44] */
  esi = (uint32_t)(ebx + 0x44u);
/* edd892: jne 0xedd93c */
  if (!zf) goto L_edd93c;
L_edd898: /* edd898: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* edd89b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edd89d: jl 0xedd93c */
  if ((sf != of)) goto L_edd93c;
L_edd8a3: /* edd8a3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* edd8a6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edd8a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd8aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd8ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd8ac: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedd8b1u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edd8b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* edd8b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd8b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd8b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd8b9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edd8bc: call dword ptr [0xf0df74] */
  esp -= 4; W32(esp, 0xedd8c2u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* edd8c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edd8c4: sub dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* edd8c6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edd8c8: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edd8cb: jne 0xedd8f2 */
  if (!zf) goto L_edd8f2;
L_edd8cd: /* edd8cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edd8cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd8d1: mov ecx, esi */
  ecx = esi;
/* edd8d3: call 0xed18cf */
  esp -= 4; W32(esp, 0xedd8d8u); SPILL(); f_ed18cf(); if (g_unwind) return; RELOAD();
/* edd8d8: mov dword ptr [ebx + 0x50], 1 */
  W32((uint32_t)(ebx + 0x50u), 0x1u);
/* edd8df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd8e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd8e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd8ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd8eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd8ec: mov esp, ebp */
  esp = ebp;
/* edd8ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd8ef: ret 8 */
  esp += 12; SPILL(); return;
L_edd8f2: /* edd8f2: mov dword ptr [ebx + 0x50], 0 */
  W32((uint32_t)(ebx + 0x50u), 0x0u);
/* edd8f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd8fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd905: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd906: mov esp, ebp */
  esp = ebp;
/* edd908: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd909: ret 8 */
  esp += 12; SPILL(); return;
L_edd93c: /* edd93c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd93f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd940: mov dword ptr [ebx + 0x2c], 1 */
  W32((uint32_t)(ebx + 0x2cu), 0x1u);
/* edd947: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd948: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd94f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd950: mov esp, ebp */
  esp = ebp;
/* edd952: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd953: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edd90c(void) {
  LOAD_REGS();
L_edd90c: /* edd90c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edd90f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edd914: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edd917: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd918: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edd91b: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd920u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edd920(); return;
}

void f_edd920(void) {
  LOAD_REGS();
L_edd920: /* edd920: push 0xef5df8 */
  { uint32_t v = 0xef5df8u; esp -= 4; W32(esp, v); }
/* edd925: push 0xf03648 */
  { uint32_t v = 0xf03648u; esp -= 4; W32(esp, v); }
/* edd92a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedd930u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edd930: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd937: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd93cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* edd93c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd93f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd940: mov dword ptr [ebx + 0x2c], 1 */
  W32((uint32_t)(ebx + 0x2cu), 0x1u);
/* edd947: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd948: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd94f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd950: mov esp, ebp */
  esp = ebp;
/* edd952: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd953: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edd9b0(void) {
  LOAD_REGS();
L_edd9b0: /* edd9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd9b1: mov esi, ecx */
  esi = ecx;
/* edd9b3: call dword ptr [0xf0db90] */
  esp -= 4; W32(esp, 0xedd9b9u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* edd9b9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edd9bd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* edd9c0: xor eax, eax */
  eax = 0;
/* edd9c2: mov dword ptr [esi], 0xef5548 */
  W32((uint32_t)(esi), 0xef5548u);
/* edd9c8: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* edd9cb: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* edd9ce: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* edd9d1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* edd9d4: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* edd9db: mov dword ptr [esi + 0x38], 0x2710 */
  W32((uint32_t)(esi + 0x38u), 0x2710u);
/* edd9e2: mov eax, esi */
  eax = esi;
/* edd9e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd9e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edda00(void) {
  LOAD_REGS();
L_edda00: /* edda00: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edda06: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edda08: push 0xeee6f6 */
  { uint32_t v = 0xeee6f6u; esp -= 4; W32(esp, v); }
/* edda0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edda0e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* edda12: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edda19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edda1a: mov esi, ecx */
  esi = ecx;
/* edda1c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* edda1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* edda20: je 0xedda60 */
  if (zf) goto L_edda60;
L_edda22: /* edda22: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* edda25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edda27: je 0xedda36 */
  if (zf) goto L_edda36;
L_edda29: /* edda29: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edda2b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edda2d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xedda2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edda2f: mov dword ptr [esi + 0x4c], 0 */
  W32((uint32_t)(esi + 0x4cu), 0x0u);
L_edda36: /* edda36: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* edda39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edda3b: je 0xeddad8 */
  if (zf) goto L_eddad8;
L_edda41: /* edda41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edda43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edda45: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedda47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edda47: mov dword ptr [esi + 0x50], 0 */
  W32((uint32_t)(esi + 0x50u), 0x0u);
/* edda4e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* edda52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edda59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edda5a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edda5d: ret 4 */
  esp += 8; SPILL(); return;
L_edda60: /* edda60: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* edda63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edda65: jne 0xeddaa0 */
  if (!zf) goto L_eddaa0;
L_edda67: /* edda67: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* edda6c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edda6e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edda70: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* edda75: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* edda77: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedda79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edda79: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* edda7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edda7f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* edda87: je 0xedda93 */
  if (zf) goto L_edda93;
L_edda89: /* edda89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edda8a: mov ecx, eax */
  ecx = eax;
/* edda8c: call 0xed1276 */
  esp -= 4; W32(esp, 0xedda91u); SPILL(); f_ed1276(); if (g_unwind) return; RELOAD();
/* edda91: jmp 0xedda95 */
  goto L_edda95;
L_edda93: /* edda93: xor eax, eax */
  eax = 0;
L_edda95: /* edda95: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* edda9d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
L_eddaa0: /* eddaa0: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* eddaa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddaa5: jne 0xeddad8 */
  if (!zf) goto L_eddad8;
L_eddaa7: /* eddaa7: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* eddaac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eddaae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eddab0: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* eddab5: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* eddab7: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xeddab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eddab9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* eddabd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddabf: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* eddac7: je 0xeddad3 */
  if (zf) goto L_eddad3;
L_eddac9: /* eddac9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddaca: mov ecx, eax */
  ecx = eax;
/* eddacc: call 0xed10f5 */
  esp -= 4; W32(esp, 0xeddad1u); SPILL(); f_ed10f5(); if (g_unwind) return; RELOAD();
/* eddad1: jmp 0xeddad5 */
  goto L_eddad5;
L_eddad3: /* eddad3: xor eax, eax */
  eax = 0;
L_eddad5: /* eddad5: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_eddad8: /* eddad8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eddadc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddae3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddae4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddae7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eddb30(void) {
  LOAD_REGS();
L_eddb30: /* eddb30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eddb34: mov dword ptr [0xf07d1c], eax */
  W32((uint32_t)(0xf07d1cu), eax);
/* eddb39: mov eax, 1 */
  eax = 0x1u;
/* eddb3e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eddb60(void) {
  LOAD_REGS();
L_eddb60: /* eddb60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eddb61: mov ebp, esp */
  ebp = esp;
/* eddb63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eddb65: push 0xeee710 */
  { uint32_t v = 0xeee710u; esp -= 4; W32(esp, v); }
/* eddb6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eddb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddb71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eddb78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eddb7b: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* eddb81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddb83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eddb84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddb85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eddb86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eddb89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eddb90: je 0xeddb97 */
  if (zf) goto L_eddb97;
L_eddb92: /* eddb92: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eddb94: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xeddb97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eddb97: /* eddb97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eddb9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eddb9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddb9c: xor eax, eax */
  eax = 0;
/* eddb9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eddba6: mov esp, ebp */
  esp = ebp;
/* eddba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eddba9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eddbac(void) {
  LOAD_REGS();
L_eddbac: /* eddbac: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eddbaf: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eddbb4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eddbb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eddbb8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eddbbb: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddbc0u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eddbc0(); return;
}

void f_eddbc0(void) {
  LOAD_REGS();
L_eddbc0: /* eddbc0: push 0xef5e40 */
  { uint32_t v = 0xef5e40u; esp -= 4; W32(esp, v); }
/* eddbc5: push 0xf03aa0 */
  { uint32_t v = 0xf03aa0u; esp -= 4; W32(esp, v); }
/* eddbca: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeddbd0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eddbd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddbd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddbd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddbd7: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddbdcu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eddbdc: guest_badaddr(0xeddbdc); return;
}

void f_eddc00(void) {
  LOAD_REGS();
L_eddc00: /* eddc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddc01: mov esi, ecx */
  esi = ecx;
/* eddc03: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* eddc09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddc0b: je 0xeddc14 */
  if (zf) goto L_eddc14;
L_eddc0d: /* eddc0d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eddc0f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* eddc11: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xeddc14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eddc14: /* eddc14: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* eddc1e: mov ecx, esi */
  ecx = esi;
/* eddc20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddc21: jmp dword ptr [0xf0df2c] */
  SPILL(); f_6c1ee7(); return; /* Engine!?Destroy@AActor@@UAEXXZ */
}

void f_eddc40(void) {
  LOAD_REGS();
L_eddc40: /* eddc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddc41: mov esi, ecx */
  esi = ecx;
/* eddc43: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* eddc49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddc4b: je 0xeddc54 */
  if (zf) goto L_eddc54;
L_eddc4d: /* eddc4d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eddc4f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* eddc51: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xeddc54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eddc54: /* eddc54: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* eddc5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddc5f: ret  */
  esp += 4; SPILL(); return;
}

void f_eddc70(void) {
  LOAD_REGS();
L_eddc70: /* eddc70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eddc72: push 0xeee734 */
  { uint32_t v = 0xeee734u; esp -= 4; W32(esp, v); }
/* eddc77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eddc7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddc7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eddc85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eddc86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddc87: mov esi, ecx */
  esi = ecx;
/* eddc89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* eddc8d: call 0xed1979 */
  esp -= 4; W32(esp, 0xeddc92u); SPILL(); f_ed1979(); if (g_unwind) return; RELOAD();
/* eddc92: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* eddc96: xor eax, eax */
  eax = 0;
/* eddc98: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* eddc9b: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* eddc9e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* eddca2: mov dword ptr [esi], 0xef5e80 */
  W32((uint32_t)(esi), 0xef5e80u);
/* eddca8: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* eddcab: mov dword ptr [esi + 0x5c], 0xffffffff */
  W32((uint32_t)(esi + 0x5cu), 0xffffffffu);
/* eddcb2: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* eddcb5: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeddcbbu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eddcbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* eddcbd: mov ecx, esi */
  ecx = esi;
/* eddcbf: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* eddcc4: call 0xed1947 */
  esp -= 4; W32(esp, 0xeddcc9u); SPILL(); f_ed1947(); if (g_unwind) return; RELOAD();
/* eddcc9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eddccd: mov eax, esi */
  eax = esi;
/* eddccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddcd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddcd7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddcda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eddd00(void) {
  LOAD_REGS();
L_eddd00: /* eddd00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eddd02: push 0xeee759 */
  { uint32_t v = 0xeee759u; esp -= 4; W32(esp, v); }
/* eddd07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eddd0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddd0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eddd15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eddd18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddd19: mov esi, ecx */
  esi = ecx;
/* eddd1b: mov eax, dword ptr [esi + 0x74] */
  eax = R32((uint32_t)(esi + 0x74u));
/* eddd1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddd20: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* eddd24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eddd25: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* eddd29: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* eddd2d: call 0xed1861 */
  esp -= 4; W32(esp, 0xeddd32u); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* eddd32: mov ecx, eax */
  ecx = eax;
/* eddd34: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* eddd3c: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xeddd42u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* eddd42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddd43: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* eddd46: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xeddd4cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* eddd4c: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* eddd52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddd53: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* eddd55: push 0xf03bd0 */
  { uint32_t v = 0xf03bd0u; esp -= 4; W32(esp, v); }
/* eddd5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddd5b: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeddd61u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eddd61: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddd64: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* eddd68: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* eddd70: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeddd76u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eddd76: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* eddd7a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* eddd7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* eddd80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddd81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eddd82: mov ecx, esi */
  ecx = esi;
/* eddd84: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xeddd87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eddd87: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eddd8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddd8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddd93: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddd96: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edddd0(void) {
  LOAD_REGS();
L_edddd0: /* edddd0: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edddd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edddd7: push 0xf03bfc */
  { uint32_t v = 0xf03bfcu; esp -= 4; W32(esp, v); }
/* eddddc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eddddd: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xeddde3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* eddde3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddde6: ret  */
  esp += 4; SPILL(); return;
}

void f_edde00(void) {
  LOAD_REGS();
L_edde00: /* edde00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edde01: mov ebp, esp */
  ebp = esp;
/* edde03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edde05: push 0xeee770 */
  { uint32_t v = 0xeee770u; esp -= 4; W32(esp, v); }
/* edde0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edde10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edde11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edde18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edde1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edde1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edde1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edde20: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edde23: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* edde2a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edde2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edde2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edde2f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edde32: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edde35: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edde38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edde39: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edde3e: mov edi, ecx */
  edi = ecx;
/* edde40: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edde43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edde44: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edde4b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedde4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edde4e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edde51: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edde52: mov eax, edx */
  eax = edx;
/* edde54: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edde57: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edde5a: jne 0xedde72 */
  if (!zf) goto L_edde72;
L_edde5c: /* edde5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edde5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edde60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edde62: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edde65: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edde6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edde6c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedde72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edde72: /* edde72: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edde75: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* edde77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edde78: mov ecx, edi */
  ecx = edi;
/* edde7a: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0xedde80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edde80: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* edde83: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edde86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edde87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edde88: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* edde8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edde91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edde92: mov esp, ebp */
  esp = ebp;
/* edde94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edde95: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edde98(void) {
  LOAD_REGS();
L_edde98: /* edde98: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edde9b: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eddea0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eddea3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eddea4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eddea7: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddeacu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eddeac(); return;
}

void f_eddeac(void) {
  LOAD_REGS();
L_eddeac: /* eddeac: push 0xef5ef4 */
  { uint32_t v = 0xef5ef4u; esp -= 4; W32(esp, v); }
/* eddeb1: push 0xf03ad0 */
  { uint32_t v = 0xf03ad0u; esp -= 4; W32(esp, v); }
/* eddeb6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeddebcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eddebc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddebf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddec3: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddec8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eddec8: guest_badaddr(0xeddec8); return;
}

void f_eddf10(void) {
  LOAD_REGS();
L_eddf10: /* eddf10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eddf11: mov ebp, esp */
  ebp = esp;
/* eddf13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eddf15: push 0xeee780 */
  { uint32_t v = 0xeee780u; esp -= 4; W32(esp, v); }
/* eddf1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eddf20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eddf21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eddf28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eddf2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eddf2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddf2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eddf2e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* eddf31: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eddf34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eddf35: mov esi, ecx */
  esi = ecx;
/* eddf37: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eddf3e: call 0xed17e9 */
  esp -= 4; W32(esp, 0xeddf43u); SPILL(); f_ed17e9(); if (g_unwind) return; RELOAD();
/* eddf43: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* eddf49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddf4b: je 0xeddf66 */
  if (zf) goto L_eddf66;
L_eddf4d: /* eddf4d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eddf4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eddf50: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xeddf53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eddf53: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eddf56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddf5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eddf5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddf5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eddf60: mov esp, ebp */
  esp = ebp;
/* eddf62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eddf63: ret 4 */
  esp += 8; SPILL(); return;
L_eddf66: /* eddf66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eddf69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eddf6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eddf6b: xor eax, eax */
  eax = 0;
/* eddf6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eddf74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eddf75: mov esp, ebp */
  esp = ebp;
/* eddf77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eddf78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_eddf7b(void) {
  LOAD_REGS();
L_eddf7b: /* eddf7b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eddf7e: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eddf83: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eddf86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eddf87: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eddf8a: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddf8fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eddf8f(); return;
}

void f_eddf8f(void) {
  LOAD_REGS();
L_eddf8f: /* eddf8f: push 0xef5f38 */
  { uint32_t v = 0xef5f38u; esp -= 4; W32(esp, v); }
/* eddf94: push 0xf03afc */
  { uint32_t v = 0xf03afcu; esp -= 4; W32(esp, v); }
/* eddf99: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeddf9fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eddf9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eddfa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddfa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eddfa6: call 0xeec520 */
  esp -= 4; W32(esp, 0xeddfabu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eddfab: guest_badaddr(0xeddfab); return;
}

void f_eddfe0(void) {
  LOAD_REGS();
L_eddfe0: /* eddfe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eddfe1: mov esi, ecx */
  esi = ecx;
/* eddfe3: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* eddfe9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddfeb: je 0xeddff4 */
  if (zf) goto L_eddff4;
L_eddfed: /* eddfed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eddfef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* eddff1: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xeddff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eddff4: /* eddff4: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* eddffa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eddffc: mov dword ptr [esi + 0x3b0], 0 */
  W32((uint32_t)(esi + 0x3b0u), 0x0u);
/* ede006: je 0xede00f */
  if (zf) goto L_ede00f;
L_ede008: /* ede008: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede00a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede00c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xede00fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede00f: /* ede00f: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* ede019: mov ecx, esi */
  ecx = esi;
/* ede01b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede01c: jmp dword ptr [0xf0df2c] */
  SPILL(); f_6c1ee7(); return; /* Engine!?Destroy@AActor@@UAEXXZ */
}

void f_ede050(void) {
  LOAD_REGS();
L_ede050: /* ede050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede051: mov esi, ecx */
  esi = ecx;
/* ede053: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* ede059: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ede05b: je 0xede064 */
  if (zf) goto L_ede064;
L_ede05d: /* ede05d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ede05f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede061: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xede064u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede064: /* ede064: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* ede06a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ede06c: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* ede076: je 0xede07f */
  if (zf) goto L_ede07f;
L_ede078: /* ede078: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede07a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede07c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xede07fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede07f: /* ede07f: mov dword ptr [esi + 0x3b0], 0 */
  W32((uint32_t)(esi + 0x3b0u), 0x0u);
/* ede089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede08a: ret  */
  esp += 4; SPILL(); return;
}

void f_ede0a0(void) {
  LOAD_REGS();
L_ede0a0: /* ede0a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ede0a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede0a5: mov esi, ecx */
  esi = ecx;
/* ede0a7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ede0aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ede0ab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* ede0ae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ede0b1: jne 0xede0c8 */
  if (!zf) goto L_ede0c8;
L_ede0b3: /* ede0b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ede0b4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* ede0b7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ede0ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede0bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede0bd: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ede0c2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xede0c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede0c8: /* ede0c8: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* ede0ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ede0d0: je 0xede0d9 */
  if (zf) goto L_ede0d9;
L_ede0d2: /* ede0d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede0d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede0d6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xede0d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede0d9: /* ede0d9: mov dword ptr [esi + 0x3b0], 0 */
  W32((uint32_t)(esi + 0x3b0u), 0x0u);
/* ede0e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede0e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ede110(void) {
  LOAD_REGS();
L_ede110: /* ede110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ede111: mov ebp, esp */
  ebp = esp;
/* ede113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ede115: push 0xeee790 */
  { uint32_t v = 0xeee790u; esp -= 4; W32(esp, v); }
/* ede11a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ede120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ede128: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede12b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ede12e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* ede131: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ede132: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede133: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede134: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ede137: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ede13a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede13b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ede13e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ede145: jne 0xede15c */
  if (!zf) goto L_ede15c;
L_ede147: /* ede147: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ede14a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ede14b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede14d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ede150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede151: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ede156: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xede15cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede15c: /* ede15c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede15e: push 0xf03b04 */
  { uint32_t v = 0xf03b04u; esp -= 4; W32(esp, v); }
/* ede163: push 0xf03b18 */
  { uint32_t v = 0xf03b18u; esp -= 4; W32(esp, v); }
/* ede168: call dword ptr [0xf0dc70] */
  esp -= 4; W32(esp, 0xede16eu); SPILL(); f_4e31b6(); if (g_unwind) return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */ RELOAD();
/* ede16e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede171: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede173: call dword ptr [0xf0dc6c] */
  esp -= 4; W32(esp, 0xede179u); SPILL(); f_4e3201(); if (g_unwind) return; /* Core!?appRequestExit@@YAXH@Z */ RELOAD();
/* ede179: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ede17c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede17f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede180: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede181: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ede188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ede189: mov esp, ebp */
  esp = ebp;
/* ede18b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ede18c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ede18f(void) {
  LOAD_REGS();
L_ede18f: /* ede18f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ede192: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ede197: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ede19a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ede19b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ede19e: call 0xeec520 */
  esp -= 4; W32(esp, 0xede1a3u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ede1a3(); return;
}

void f_ede1a3(void) {
  LOAD_REGS();
L_ede1a3: /* ede1a3: push 0xef5f78 */
  { uint32_t v = 0xef5f78u; esp -= 4; W32(esp, v); }
/* ede1a8: push 0xf03b2c */
  { uint32_t v = 0xf03b2cu; esp -= 4; W32(esp, v); }
/* ede1ad: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xede1b3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ede1b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede1b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede1b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede1ba: call 0xeec520 */
  esp -= 4; W32(esp, 0xede1bfu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ede1bf: guest_badaddr(0xede1bf); return;
}

void f_ede1f0(void) {
  LOAD_REGS();
L_ede1f0: /* ede1f0: mov eax, ecx */
  eax = ecx;
/* ede1f2: xor ecx, ecx */
  ecx = 0;
/* ede1f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ede1f6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* ede1f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* ede1fc: ret  */
  esp += 4; SPILL(); return;
}

void f_ede210(void) {
  LOAD_REGS();
L_ede210: /* ede210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ede214: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede216: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ede219: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ede21b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede230(void) {
  LOAD_REGS();
L_ede230: /* ede230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ede234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede235: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* ede23a: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xede240u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ede240: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede260(void) {
  LOAD_REGS();
L_ede260: /* ede260: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ede263: jmp dword ptr [0xf0df50] */
  SPILL(); f_6c46a1(); return; /* Engine!??1FServerResponseLine@@QAE@XZ */
}

void f_ede280(void) {
  LOAD_REGS();
L_ede280: /* ede280: mov eax, 1 */
  eax = 0x1u;
/* ede285: ret  */
  esp += 4; SPILL(); return;
}

void f_ede2a0(void) {
  LOAD_REGS();
L_ede2a0: /* ede2a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ede2a1: mov ebp, esp */
  ebp = esp;
/* ede2a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ede2a5: push 0xeee7c0 */
  { uint32_t v = 0xeee7c0u; esp -= 4; W32(esp, v); }
/* ede2aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ede2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede2b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ede2b8: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede2bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede2bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede2bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ede2c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede2c1: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ede2c4: xor eax, eax */
  eax = 0;
/* ede2c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ede2c9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ede2cc: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ede2cf: nop  */
L_ede2d0: /* ede2d0: cmp eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ede2d3: jge 0xede2f0 */
  if ((sf == of)) goto L_ede2f0;
L_ede2d5: /* ede2d5: mov ebx, dword ptr [ecx + 0x2c] */
  ebx = R32((uint32_t)(ecx + 0x2cu));
/* ede2d8: mov edx, eax */
  edx = eax;
/* ede2da: shl edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ede2dd: lea edx, [edx + ebx + 8] */
  edx = (uint32_t)(edx + ebx + 0x8u);
/* ede2e1: cmp esi, dword ptr [edx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ede2e3: jne 0xede2ea */
  if (!zf) goto L_ede2ea;
L_ede2e5: /* ede2e5: cmp edi, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ede2e8: je 0xede2ed */
  if (zf) goto L_ede2ed;
L_ede2ea: /* ede2ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ede2eb: jmp 0xede2d0 */
  goto L_ede2d0;
L_ede2ed: /* ede2ed: cmp eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_ede2f0: /* ede2f0: jne 0xede305 */
  if (!zf) goto L_ede305;
L_ede2f2: /* ede2f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede2f4: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* ede2f9: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ede2fc: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xede302u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ede302: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_ede305: /* ede305: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ede308: mov esi, eax */
  esi = eax;
/* ede30a: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ede30d: mov dword ptr [eax + esi + 0x7c], 0 */
  W32((uint32_t)(eax + esi + 0x7cu), 0x0u);
/* ede315: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ede317: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ede31a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ede31d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ede320: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ede323: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ede325: jge 0xede32d */
  if ((sf == of)) goto L_ede32d;
L_ede327: /* ede327: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ede32d: /* ede32d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ede330: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ede336: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ede338: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ede33b: jge 0xede343 */
  if ((sf == of)) goto L_ede343;
L_ede33d: /* ede33d: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ede343: /* ede343: mov eax, dword ptr [0xf0daf8] */
  eax = R32((uint32_t)(0xf0daf8u));
/* ede348: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ede34a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede34d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ede350: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* ede352: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ede358: fstp qword ptr [edx + esi + 0x10] */
  WF64((uint32_t)(edx + esi + 0x10u), ST0); FPOP();
/* ede35c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ede35f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* ede362: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ede365: mov dword ptr [ecx + esi + 8], edx */
  W32((uint32_t)(ecx + esi + 0x8u), edx);
/* ede369: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ede36c: mov dword ptr [ecx + esi + 0xc], eax */
  W32((uint32_t)(ecx + esi + 0xcu), eax);
/* ede370: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ede373: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede376: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* ede379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede37a: lea ecx, [eax + esi + 0x18] */
  ecx = (uint32_t)(eax + esi + 0x18u);
/* ede37e: call dword ptr [0xf0df5c] */
  esp -= 4; W32(esp, 0xede384u); SPILL(); f_6c7482(); if (g_unwind) return; /* Engine!??4FServerResponseLine@@QAEAAU0@ABU0@@Z */ RELOAD();
/* ede384: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede387: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ede38a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ede38d: mov dword ptr [esi + edx], eax */
  W32((uint32_t)(esi + edx), eax);
/* ede390: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede393: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ede396: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* ede399: mov byte ptr [edx + esi + 4], al */
  W8((uint32_t)(edx + esi + 0x4u), (eax & 0xffu));
/* ede39d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede3a0: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ede3a3: mov al, byte ptr [ebp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x18u))) & 0xffu);
/* ede3a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ede3a8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ede3ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede3ac: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* ede3af: mov byte ptr [edx + esi + 5], al */
  W8((uint32_t)(edx + esi + 0x5u), (eax & 0xffu));
/* ede3b3: call 0xed1861 */
  esp -= 4; W32(esp, 0xede3b8u); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* ede3b8: mov ecx, eax */
  ecx = eax;
/* ede3ba: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ede3be: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xede3c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ede3c4: movzx edx, byte ptr [ebp + 0x18] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x18u)));
/* ede3c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ede3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede3ca: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ede3cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede3d1: push 0xf03c38 */
  { uint32_t v = 0xf03c38u; esp -= 4; W32(esp, v); }
/* ede3d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede3d7: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xede3ddu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ede3dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede3e0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ede3e3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ede3e7: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xede3edu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ede3ed: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ede3f0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ede3f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ede3f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ede3f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede3f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede3f9: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* ede3ff: call 0xed1136 */
  esp -= 4; W32(esp, 0xede404u); SPILL(); f_ed1136(); if (g_unwind) return; RELOAD();
/* ede404: mov esi, dword ptr [0xf0dbfc] */
  esi = R32((uint32_t)(0xf0dbfcu));
/* ede40a: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* ede40d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ede40e: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* ede414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede415: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ede419: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xede41bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede41b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede41e: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* ede424: call 0xed13a7 */
  esp -= 4; W32(esp, 0xede429u); SPILL(); f_ed13a7(); if (g_unwind) return; RELOAD();
/* ede429: mov al, byte ptr [ebp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x18u))) & 0xffu);
/* ede42c: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* ede42e: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ede430: jne 0xede451 */
  if (!zf) goto L_ede451;
L_ede432: /* ede432: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* ede435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede436: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* ede43c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ede43d: mov byte ptr [ebp + 0x18], 0 */
  W8((uint32_t)(ebp + 0x18u), 0x0u);
/* ede441: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xede443u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede443: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede446: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* ede44c: call 0xed13a7 */
  esp -= 4; W32(esp, 0xede451u); SPILL(); f_ed13a7(); if (g_unwind) return; RELOAD();
L_ede451: /* ede451: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ede454: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ede457: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xede45du); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* ede45d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ede460: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede462: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ede469: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ede46a: mov esp, ebp */
  esp = ebp;
/* ede46c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ede46d: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ede470(void) {
  LOAD_REGS();
L_ede470: /* ede470: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* ede473: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ede478: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* ede47b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede47c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ede47f: call 0xeec520 */
  esp -= 4; W32(esp, 0xede484u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ede484(); return;
}

void f_ede484(void) {
  LOAD_REGS();
L_ede484: /* ede484: push 0xef5fdc */
  { uint32_t v = 0xef5fdcu; esp -= 4; W32(esp, v); }
/* ede489: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ede48e: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xede494u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ede494: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede499: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede49b: call 0xeec520 */
  esp -= 4; W32(esp, 0xede4a0u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ede4a0: guest_badaddr(0xede4a0); return;
}

void f_ede540(void) {
  LOAD_REGS();
L_ede540: /* ede540: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede543: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ede548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede549: mov esi, ecx */
  esi = ecx;
/* ede54b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede54d: push 0xf03c8c */
  { uint32_t v = 0xf03c8cu; esp -= 4; W32(esp, v); }
/* ede552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede553: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xede559u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ede559: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* ede55c: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* ede562: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede565: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ede566: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede568: mov dword ptr [eax + 0x348], ecx */
  W32((uint32_t)(eax + 0x348u), ecx);
/* ede56e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede571: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ede576: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xede57cu); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ede57c: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede57f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede583: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ede587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede588: lea eax, [ecx + 0x3c4] */
  eax = (uint32_t)(ecx + 0x3c4u);
/* ede58e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede58f: mov eax, dword ptr [0xf07d90] */
  eax = R32((uint32_t)(0xf07d90u));
/* ede594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede595: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* ede59a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ede5a2: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xede5a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede5a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede5a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede5a9: ret  */
  esp += 4; SPILL(); return;
}

void f_ede5d0(void) {
  LOAD_REGS();
L_ede5d0: /* ede5d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede5d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede5d4: mov esi, ecx */
  esi = ecx;
/* ede5d6: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* ede5d9: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xede5dfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ede5df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede5e0: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ede5e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede5e7: push 0xf03cbc */
  { uint32_t v = 0xf03cbcu; esp -= 4; W32(esp, v); }
/* ede5ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede5ed: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xede5f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ede5f3: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* ede5f6: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* ede5fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede5ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ede600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede602: mov dword ptr [eax + 0x348], ecx */
  W32((uint32_t)(eax + 0x348u), ecx);
/* ede608: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede60b: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ede610: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xede616u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ede616: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede619: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede61d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ede621: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede622: lea eax, [ecx + 0x3c4] */
  eax = (uint32_t)(ecx + 0x3c4u);
/* ede628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede629: mov eax, dword ptr [0xf07d90] */
  eax = R32((uint32_t)(0xf07d90u));
/* ede62e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede62f: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* ede634: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ede63c: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xede63fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede63f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede640: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede643: ret  */
  esp += 4; SPILL(); return;
}

void f_ede670(void) {
  LOAD_REGS();
L_ede670: /* ede670: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ede675: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede679: mov esi, ecx */
  esi = ecx;
/* ede67b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede67d: push 0xf03cf4 */
  { uint32_t v = 0xf03cf4u; esp -= 4; W32(esp, v); }
/* ede682: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede683: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xede689u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ede689: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* ede68c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede68f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ede691: jl 0xede6c1 */
  if ((sf != of)) goto L_ede6c1;
L_ede693: /* ede693: cmp dword ptr [esi + 0x60], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ede696: je 0xede6c1 */
  if (zf) goto L_ede6c1;
L_ede698: /* ede698: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede69b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede69d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede69f: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ede6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede6a4: lea eax, [ecx + 0x3c4] */
  eax = (uint32_t)(ecx + 0x3c4u);
/* ede6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede6ab: mov eax, dword ptr [0xf07d90] */
  eax = R32((uint32_t)(0xf07d90u));
/* ede6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede6b1: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* ede6b6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ede6be: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xede6c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede6c1: /* ede6c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede6c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede6c5: ret  */
  esp += 4; SPILL(); return;
}

void f_ede6f0(void) {
  LOAD_REGS();
L_ede6f0: /* ede6f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede6f1: mov esi, ecx */
  esi = ecx;
/* ede6f3: call 0xed1870 */
  esp -= 4; W32(esp, 0xede6f8u); SPILL(); f_ed1870(); if (g_unwind) return; RELOAD();
/* ede6f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ede6fd: je 0xede70c */
  if (zf) goto L_ede70c;
L_ede6ff: /* ede6ff: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ede704: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede706: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede708: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede709: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xede70cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede70c: /* ede70c: mov eax, esi */
  eax = esi;
/* ede70e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede70f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede730(void) {
  LOAD_REGS();
L_ede730: /* ede730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ede732: push 0xeee7e8 */
  { uint32_t v = 0xeee7e8u; esp -= 4; W32(esp, v); }
/* ede737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ede73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ede745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede747: mov esi, ecx */
  esi = ecx;
/* ede749: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ede74d: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* ede750: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ede758: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xede75eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ede75e: mov ecx, esi */
  ecx = esi;
/* ede760: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ede768: call 0xed14d3 */
  esp -= 4; W32(esp, 0xede76du); SPILL(); f_ed14d3(); if (g_unwind) return; RELOAD();
/* ede76d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ede771: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede772: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ede779: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede77c: ret  */
  esp += 4; SPILL(); return;
}

void f_ede7a0(void) {
  LOAD_REGS();
L_ede7a0: /* ede7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede7a1: mov esi, ecx */
  esi = ecx;
/* ede7a3: call 0xed14b5 */
  esp -= 4; W32(esp, 0xede7a8u); SPILL(); f_ed14b5(); if (g_unwind) return; RELOAD();
/* ede7a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ede7ad: je 0xede7bc */
  if (zf) goto L_ede7bc;
L_ede7af: /* ede7af: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ede7b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ede7b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ede7b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede7b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xede7bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ede7bc: /* ede7bc: mov eax, esi */
  eax = esi;
/* ede7be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede7bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede7e0(void) {
  LOAD_REGS();
L_ede7e0: /* ede7e0: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* ede7e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede7e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede7e6: mov esi, ecx */
  esi = ecx;
/* ede7e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede7e9: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* ede7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede7ed: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ede7f0: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* ede7f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede7f4: mov byte ptr [esi + 0x65], al */
  W8((uint32_t)(esi + 0x65u), (eax & 0xffu));
/* ede7f7: call 0xed14c4 */
  esp -= 4; W32(esp, 0xede7fcu); SPILL(); f_ed14c4(); if (g_unwind) return; RELOAD();
/* ede7fc: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* ede7fe: mov ecx, edi */
  ecx = edi;
/* ede800: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xede806u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ede806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede807: mov ecx, esi */
  ecx = esi;
/* ede809: call dword ptr [ebx + 0x40] */
  { uint32_t t = R32((uint32_t)(ebx + 0x40u)); esp -= 4; W32(esp, 0xede80cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede80c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede80d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede80e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ede80f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede830(void) {
  LOAD_REGS();
L_ede830: /* ede830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede831: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ede835: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ede837: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ede838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede839: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* ede83f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede840: mov ebp, ecx */
  ebp = ecx;
/* ede842: jge 0xede858 */
  if ((sf == of)) goto L_ede858;
L_ede844: /* ede844: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ede849: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ede84e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ede853: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xede855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede855: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ede858: /* ede858: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ede85b: jle 0xede871 */
  if ((zf || sf != of)) goto L_ede871;
L_ede85d: /* ede85d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ede862: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ede867: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ede86c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xede86eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede86e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ede871: /* ede871: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ede875: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ede878: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ede87b: jle 0xede891 */
  if ((zf || sf != of)) goto L_ede891;
L_ede87d: /* ede87d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ede882: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ede887: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ede88c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xede88eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ede88e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ede891: /* ede891: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ede893: jge 0xede8b3 */
  if ((sf == of)) goto L_ede8b3;
L_ede895: /* ede895: mov esi, ebx */
  esi = ebx;
/* ede897: shl esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ede89a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ede89c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ede8a0: /* ede8a0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ede8a3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ede8a5: call 0xed14b5 */
  esp -= 4; W32(esp, 0xede8aau); SPILL(); f_ed14b5(); if (g_unwind) return; RELOAD();
/* ede8aa: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ede8b0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ede8b1: jne 0xede8a0 */
  if (!zf) goto L_ede8a0;
L_ede8b3: /* ede8b3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ede8b7: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* ede8bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede8bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede8be: mov ecx, ebp */
  ecx = ebp;
/* ede8c0: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xede8c6u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ede8c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede8c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede8c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ede8c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ede8ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ede900(void) {
  LOAD_REGS();
L_ede900: /* ede900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede901: mov esi, ecx */
  esi = ecx;
/* ede903: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ede906: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede907: xor edi, edi */
  edi = 0;
/* ede909: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ede90b: jle 0xede928 */
  if ((zf || sf != of)) goto L_ede928;
L_ede90d: /* ede90d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede90e: xor ebx, ebx */
  ebx = 0;
L_ede910: /* ede910: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ede912: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ede914: call 0xed14b5 */
  esp -= 4; W32(esp, 0xede919u); SPILL(); f_ed14b5(); if (g_unwind) return; RELOAD();
/* ede919: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ede91c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ede91d: add ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ede923: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ede925: jl 0xede910 */
  if ((sf != of)) goto L_ede910;
L_ede927: /* ede927: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ede928: /* ede928: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ede92c: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* ede931: mov ecx, esi */
  ecx = esi;
/* ede933: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ede93a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ede93d: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xede943u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ede943: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede944: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede945: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ede970(void) {
  LOAD_REGS();
L_ede970: /* ede970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ede971: mov ebp, esp */
  ebp = esp;
/* ede973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ede975: push 0xeee800 */
  { uint32_t v = 0xeee800u; esp -= 4; W32(esp, v); }
/* ede97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ede980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ede981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ede988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ede98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ede98c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ede98d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ede98e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ede991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede993: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ede996: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ede99d: call 0xed1041 */
  esp -= 4; W32(esp, 0xede9a2u); SPILL(); f_ed1041(); if (g_unwind) return; RELOAD();
/* ede9a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ede9a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ede9a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ede9a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ede9ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ede9af: mov esp, ebp */
  esp = ebp;
/* ede9b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ede9b2: ret  */
  esp += 4; SPILL(); return;
}

void f_ede9b3(void) {
  LOAD_REGS();
L_ede9b3: /* ede9b3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ede9b6: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ede9bb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ede9be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ede9bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ede9c2: call 0xeec520 */
  esp -= 4; W32(esp, 0xede9c7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ede9c7(); return;
}

void f_ede9c7(void) {
  LOAD_REGS();
L_ede9c7: /* ede9c7: push 0xef6024 */
  { uint32_t v = 0xef6024u; esp -= 4; W32(esp, v); }
/* ede9cc: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ede9d1: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xede9d7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ede9d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ede9da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede9dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ede9de: call 0xeec520 */
  esp -= 4; W32(esp, 0xede9e3u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ede9e3: guest_badaddr(0xede9e3); return;
}

void f_edea10(void) {
  LOAD_REGS();
L_edea10: /* edea10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edea12: push 0xeee819 */
  { uint32_t v = 0xeee819u; esp -= 4; W32(esp, v); }
/* edea17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edea1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edea1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edea25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edea26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edea27: mov esi, ecx */
  esi = ecx;
/* edea29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* edea2d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edea30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edea33: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* edea3b: call 0xed17e4 */
  esp -= 4; W32(esp, 0xedea40u); SPILL(); f_ed17e4(); if (g_unwind) return; RELOAD();
/* edea40: mov ecx, esi */
  ecx = esi;
/* edea42: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* edea4a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xedea50u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* edea50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edea54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edea55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edea5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edea5f: ret  */
  esp += 4; SPILL(); return;
}

void f_edea80(void) {
  LOAD_REGS();
L_edea80: /* edea80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edea81: mov ebp, esp */
  ebp = esp;
/* edea83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edea85: push 0xeee843 */
  { uint32_t v = 0xeee843u; esp -= 4; W32(esp, v); }
/* edea8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edea90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edea91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edea98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edea9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edea9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edea9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edea9e: mov esi, ecx */
  esi = ecx;
/* edeaa0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edeaa3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* edeaa6: call 0xed1028 */
  esp -= 4; W32(esp, 0xedeaabu); SPILL(); f_ed1028(); if (g_unwind) return; RELOAD();
/* edeaab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edeaae: xor eax, eax */
  eax = 0;
/* edeab0: mov dword ptr [esi], 0xef60c4 */
  W32((uint32_t)(esi), 0xef60c4u);
/* edeab6: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* edeab9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* edeabc: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* edeabf: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* edeac2: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* edeac5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* edeac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edeac9: mov ecx, esi */
  ecx = esi;
/* edeacb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* edeacf: call 0xed1a50 */
  esp -= 4; W32(esp, 0xedead4u); SPILL(); f_ed1a50(); if (g_unwind) return; RELOAD();
/* edead4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edead7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edead8: mov eax, esi */
  eax = esi;
/* edeada: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edeadb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edeae2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edeae3: mov esp, ebp */
  esp = ebp;
/* edeae5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edeae6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edeae9(void) {
  LOAD_REGS();
L_edeae9: /* edeae9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* edeaec: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edeaf1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edeaf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edeaf5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edeaf8: call 0xeec520 */
  esp -= 4; W32(esp, 0xedeafdu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edeafd(); return;
}

void f_edeafd(void) {
  LOAD_REGS();
L_edeafd: /* edeafd: push 0xef6070 */
  { uint32_t v = 0xef6070u; esp -= 4; W32(esp, v); }
/* edeb02: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* edeb07: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedeb0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edeb0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edeb10: xor eax, eax */
  eax = 0;
/* edeb12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edeb13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edeb14: call 0xeec520 */
  esp -= 4; W32(esp, 0xedeb19u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edeb19: guest_badaddr(0xedeb19); return;
}

void f_edeb50(void) {
  LOAD_REGS();
L_edeb50: /* edeb50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edeb51: mov ebp, esp */
  ebp = esp;
/* edeb53: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* edeb56: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edeb58: push 0xeee868 */
  { uint32_t v = 0xeee868u; esp -= 4; W32(esp, v); }
/* edeb5d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edeb63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edeb64: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edeb6b: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edeb6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edeb6f: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* edeb73: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* edeb76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edeb77: xor ebx, ebx */
  ebx = 0;
/* edeb79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edeb7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edeb7c: jle 0xedece6 */
  if ((zf || sf != of)) goto L_edece6;
L_edeb82: /* edeb82: xor esi, esi */
  esi = 0;
L_edeb84: /* edeb84: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edeb86: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* edeb8a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* edeb8e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* edeb92: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* edeb96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edeb98: jge 0xedeba0 */
  if ((sf == of)) goto L_edeba0;
L_edeb9a: /* edeb9a: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edeba0: /* edeba0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edeba4: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edebaa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edebac: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* edebb0: jge 0xedebb8 */
  if ((sf == of)) goto L_edebb8;
L_edebb2: /* edebb2: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edebb8: /* edebb8: mov edx, dword ptr [0xf0daf8] */
  edx = R32((uint32_t)(0xf0daf8u));
/* edebbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edebc0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* edebc4: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edebc7: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* edebc9: lea edi, [ecx + 0x2c] */
  edi = (uint32_t)(ecx + 0x2cu);
/* edebcc: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* edebcf: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edebd5: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* edebd8: fadd qword ptr [0xef60e0] */
  ST0 = ST0 + (F64((uint32_t)(0xef60e0u)));
/* edebde: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* edebe0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* edebe2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* edebe4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* edebe7: jne 0xedecd0 */
  if (!zf) goto L_edecd0;
L_edebed: /* edebed: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* edebf0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edebf2: jne 0xedecbf */
  if (!zf) goto L_edecbf;
L_edebf8: /* edebf8: cmp dword ptr [edx + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edebfc: je 0xedecbf */
  if (zf) goto L_edecbf;
L_edec02: /* edec02: mov al, byte ptr [edx + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4u))) & 0xffu);
/* edec05: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edec07: jne 0xedec8f */
  if (!zf) goto L_edec8f;
L_edec0d: /* edec0d: cmp dword ptr [edx + 0x7c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x7cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edec11: jge 0xedec8f */
  if ((sf == of)) goto L_edec8f;
L_edec13: /* edec13: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* edec15: lea eax, [ecx + esi + 0x7c] */
  eax = (uint32_t)(ecx + esi + 0x7cu);
/* edec19: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* edec1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* edec1f: mov edi, dword ptr [edx + 0x2c] */
  edi = R32((uint32_t)(edx + 0x2cu));
/* edec22: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* edec24: call 0xed19ab */
  esp -= 4; W32(esp, 0xedec29u); SPILL(); f_ed19ab(); if (g_unwind) return; RELOAD();
/* edec29: fstp qword ptr [edi + 0x10] */
  WF64((uint32_t)(edi + 0x10u), ST0); FPOP();
/* edec2c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* edec30: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* edec33: mov dl, byte ptr [ecx + esi + 5] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi + 0x5u))) & 0xffu);
/* edec37: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* edec3b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* edec3e: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* edec42: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* edec46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edec47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edec48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edec49: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* edec4d: call 0xed1136 */
  esp -= 4; W32(esp, 0xedec52u); SPILL(); f_ed1136(); if (g_unwind) return; RELOAD();
/* edec52: lea edx, [esp + 0xf] */
  edx = (uint32_t)(esp + 0xfu);
/* edec56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edec57: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* edec5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edec5c: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* edec67: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xedec6du); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* edec6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edec70: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* edec74: call 0xed13a7 */
  esp -= 4; W32(esp, 0xedec79u); SPILL(); f_ed13a7(); if (g_unwind) return; RELOAD();
/* edec79: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* edec7d: mov dword ptr [esp + 0x8c], 0xffffffff */
  W32((uint32_t)(esp + 0x8cu), 0xffffffffu);
/* edec88: call 0xed1889 */
  esp -= 4; W32(esp, 0xedec8du); SPILL(); f_ed1889(); if (g_unwind) return; RELOAD();
/* edec8d: jmp 0xedecd0 */
  goto L_edecd0;
L_edec8f: /* edec8f: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* edec91: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* edec94: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* edec98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edec9a: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* edec9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edec9f: lea edx, [ecx + 0x3a8] */
  edx = (uint32_t)(ecx + 0x3a8u);
/* edeca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edeca6: mov edx, dword ptr [0xf07d4c] */
  edx = R32((uint32_t)(0xf07d4cu));
/* edecac: mov byte ptr [esp + 0x30], al */
  W8((uint32_t)(esp + 0x30u), (eax & 0xffu));
/* edecb0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edecb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edecb3: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xedecb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edecb6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* edecba: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edecbd: jmp 0xedecc1 */
  goto L_edecc1;
L_edecbf: /* edecbf: mov ecx, edi */
  ecx = edi;
L_edecc1: /* edecc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edecc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edecc4: call 0xed17e4 */
  esp -= 4; W32(esp, 0xedecc9u); SPILL(); f_ed17e4(); if (g_unwind) return; RELOAD();
/* edecc9: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* edecca: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_edecd0: /* edecd0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* edecd4: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* edecd7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edecd8: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* edecde: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edece0: jl 0xedeb84 */
  if ((sf != of)) goto L_edeb84;
L_edece6: /* edece6: call 0xed17b2 */
  esp -= 4; W32(esp, 0xedecebu); SPILL(); f_ed17b2(); if (g_unwind) return; RELOAD();
/* edeceb: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* edecf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edecf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edecf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edecfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edecfc: mov esp, ebp */
  esp = ebp;
/* edecfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edecff: ret  */
  esp += 4; SPILL(); return;
}

void f_eded70(void) {
  LOAD_REGS();
L_eded70: /* eded70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eded71: mov ebp, esp */
  ebp = esp;
/* eded73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eded75: push 0xeee90a */
  { uint32_t v = 0xeee90au; esp -= 4; W32(esp, v); }
/* eded7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eded80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eded81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eded88: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eded8e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* eded91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eded92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eded93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eded94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eded97: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* eded9a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* eded9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eded9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eded9f: xor esi, esi */
  esi = 0;
/* ededa1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* ededa7: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* ededaa: call 0xed1127 */
  esp -= 4; W32(esp, 0xededafu); SPILL(); f_ed1127(); if (g_unwind) return; RELOAD();
/* ededaf: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ededb2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ededb5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ededb9: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_ededbc: /* ededbc: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ededbf: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* ededc2: jge 0xedede6 */
  if ((sf == of)) goto L_edede6;
L_ededc4: /* ededc4: mov edi, dword ptr [ecx + 0x2c] */
  edi = R32((uint32_t)(ecx + 0x2cu));
/* ededc7: mov eax, esi */
  eax = esi;
/* ededc9: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ededcc: lea eax, [eax + edi + 8] */
  eax = (uint32_t)(eax + edi + 0x8u);
/* ededd0: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ededd2: jne 0xededdc */
  if (!zf) goto L_ededdc;
L_ededd4: /* ededd4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ededd7: cmp edi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ededda: je 0xedede6 */
  if (zf) goto L_edede6;
L_ededdc: /* ededdc: cmp dword ptr [eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ededdf: jne 0xedede3 */
  if (!zf) goto L_edede3;
L_edede1: /* edede1: mov ebx, esi */
  ebx = esi;
L_edede3: /* edede3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* edede4: jmp 0xededbc */
  goto L_ededbc;
L_edede6: /* edede6: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* edede9: xor edi, edi */
  edi = 0;
/* ededeb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ededed: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* ededf0: jge 0xedee69 */
  if ((sf == of)) goto L_edee69;
L_ededf2: /* ededf2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ededf4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ededf7: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ededfa: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ededfd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edee00: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edee02: jge 0xedee0a */
  if ((sf == of)) goto L_edee0a;
L_edee04: /* edee04: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edee0a: /* edee0a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* edee0d: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edee13: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edee15: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* edee18: jge 0xedee20 */
  if ((sf == of)) goto L_edee20;
L_edee1a: /* edee1a: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edee20: /* edee20: mov eax, dword ptr [0xf0daf8] */
  eax = R32((uint32_t)(0xf0daf8u));
/* edee25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edee27: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edee2a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* edee2d: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* edee2f: shl esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* edee32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edee33: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edee39: fsub qword ptr [edx + esi + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edx + esi + 0x10u)));
/* edee3d: fmul qword ptr [0xef6140] */
  ST0 = ST0 * (F64((uint32_t)(0xef6140u)));
/* edee43: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* edee46: call dword ptr [0xf0dc7c] */
  esp -= 4; W32(esp, 0xedee4cu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* edee4c: mov ebx, eax */
  ebx = eax;
/* edee4e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edee51: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* edee54: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* edee57: lea edi, [eax + 0x18] */
  edi = (uint32_t)(eax + 0x18u);
/* edee5a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edee5d: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* edee60: mov dword ptr [eax + 0x78], 1 */
  W32((uint32_t)(eax + 0x78u), 0x1u);
/* edee67: jmp 0xedeed4 */
  goto L_edeed4;
L_edee69: /* edee69: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edee6b: jl 0xedeecf */
  if ((sf != of)) goto L_edeecf;
L_edee6d: /* edee6d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edee6f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* edee72: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* edee75: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* edee78: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edee7b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edee7d: jge 0xedee85 */
  if ((sf == of)) goto L_edee85;
L_edee7f: /* edee7f: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edee85: /* edee85: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* edee88: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edee8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edee90: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* edee93: jge 0xedee9b */
  if ((sf == of)) goto L_edee9b;
L_edee95: /* edee95: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edee9b: /* edee9b: mov ecx, dword ptr [0xf0daf8] */
  ecx = R32((uint32_t)(0xf0daf8u));
/* edeea1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edeea3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edeea6: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* edeea9: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* edeeab: shl ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* edeeae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edeeaf: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edeeb5: fsub qword ptr [ebx + eax + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ebx + eax + 0x10u)));
/* edeeb9: fmul qword ptr [0xef6140] */
  ST0 = ST0 * (F64((uint32_t)(0xef6140u)));
/* edeebf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* edeec2: call dword ptr [0xf0dc7c] */
  esp -= 4; W32(esp, 0xedeec8u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* edeec8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edeecb: mov ebx, eax */
  ebx = eax;
/* edeecd: jmp 0xedeed4 */
  goto L_edeed4;
L_edeecf: /* edeecf: mov ebx, 0x270f */
  ebx = 0x270fu;
L_edeed4: /* edeed4: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* edeed7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edeed8: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* edeede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edeedf: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xedeee5u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* edeee5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* edeee8: xor esi, esi */
  esi = 0;
/* edeeea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edeeed: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edeeef: je 0xedef47 */
  if (zf) goto L_edef47;
L_edeef1: /* edeef1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edeef3: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* edeef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edeef7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* edeefa: call 0xed1861 */
  esp -= 4; W32(esp, 0xedeeffu); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* edeeff: mov ecx, eax */
  ecx = eax;
/* edef01: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* edef05: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedef0bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edef0b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* edef0e: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edef14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edef15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edef16: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edef18: push 0xf03e48 */
  { uint32_t v = 0xf03e48u; esp -= 4; W32(esp, v); }
/* edef1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edef1e: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedef24u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edef24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edef27: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edef2b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
L_edef2e: /* edef2e: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedef34u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_edef34: /* edef34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edef37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edef3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edef3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edef40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edef41: mov esp, ebp */
  esp = ebp;
/* edef43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edef44: ret 0x10 */
  esp += 20; SPILL(); return;
L_edef47: /* edef47: movzx eax, byte ptr [ebp - 0x11] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* edef4b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* edef4d: je 0xedf332 */
  if (zf) goto L_edf332;
L_edef53: /* edef53: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* edef54: je 0xedf0c4 */
  if (zf) goto L_edf0c4;
L_edef5a: /* edef5a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* edef5b: jne 0xedef34 */
  if (!zf) goto L_edef34;
L_edef5d: /* edef5d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edef5f: je 0xedf081 */
  if (zf) goto L_edf081;
L_edef65: /* edef65: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* edef68: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* edef6b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* edef6e: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
L_edef72: /* edef72: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* edef78: call 0xed15eb */
  esp -= 4; W32(esp, 0xedef7du); SPILL(); f_ed15eb(); if (g_unwind) return; RELOAD();
/* edef7d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edef7f: jne 0xedefac */
  if (!zf) goto L_edefac;
L_edef81: /* edef81: cmp dword ptr [ebp - 0x58], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edef84: jne 0xedefac */
  if (!zf) goto L_edefac;
L_edef86: /* edef86: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edef88: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* edef8a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edef8d: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedef93u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edef93: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* edef96: add eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edef99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edef9a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* edefa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edefa1: call dword ptr [0xf0dfb8] */
  esp -= 4; W32(esp, 0xedefa7u); SPILL(); f_6c6f73(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFPlayerResponseLine@@@Z */ RELOAD();
/* edefa7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edefaa: jmp 0xedef72 */
  goto L_edef72;
L_edefac: /* edefac: xor ebx, ebx */
  ebx = 0;
/* edefae: mov edi, edi */
  edi = edi;
L_edefb0: /* edefb0: cmp ebx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edefb3: jge 0xedefe8 */
  if ((sf == of)) goto L_edefe8;
L_edefb5: /* edefb5: xor esi, esi */
  esi = 0;
L_edefb7: /* edefb7: cmp esi, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edefba: jge 0xedefe5 */
  if ((sf == of)) goto L_edefe5;
L_edefbc: /* edefbc: mov eax, esi */
  eax = esi;
/* edefbe: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* edefc1: mov edx, ebx */
  edx = ebx;
/* edefc3: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* edefc6: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* edefc9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* edefcb: mov eax, dword ptr [eax + edi] */
  eax = R32((uint32_t)(eax + edi));
/* edefce: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* edefd1: cmp eax, dword ptr [edx + edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edefd4: jne 0xedefdf */
  if (!zf) goto L_edefdf;
L_edefd6: /* edefd6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edefd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edefd9: call 0xed1a87 */
  esp -= 4; W32(esp, 0xedefdeu); SPILL(); f_ed1a87(); if (g_unwind) return; RELOAD();
/* edefde: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_edefdf: /* edefdf: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* edefe2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* edefe3: jmp 0xedefb7 */
  goto L_edefb7;
L_edefe5: /* edefe5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edefe6: jmp 0xedefb0 */
  goto L_edefb0;
L_edefe8: /* edefe8: xor ebx, ebx */
  ebx = 0;
/* edefea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_edeff0: /* edeff0: cmp ebx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edeff3: jge 0xedf021 */
  if ((sf == of)) goto L_edf021;
L_edeff5: /* edeff5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edeff7: lea esi, [edi + 0x54] */
  esi = (uint32_t)(edi + 0x54u);
/* edeffa: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* edeffc: mov ecx, esi */
  ecx = esi;
/* edeffe: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedf004u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edf004: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf007: mov ecx, ebx */
  ecx = ebx;
/* edf009: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* edf00c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf00e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf00f: mov ecx, eax */
  ecx = eax;
/* edf011: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edf013: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* edf016: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf018: call dword ptr [0xf0dfb4] */
  esp -= 4; W32(esp, 0xedf01eu); SPILL(); f_6c5cd1(); if (g_unwind) return; /* Engine!??4FPlayerResponseLine@@QAEAAU0@ABU0@@Z */ RELOAD();
/* edf01e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edf01f: jmp 0xedeff0 */
  goto L_edeff0;
L_edf021: /* edf021: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edf024: mov ecx, esp */
  ecx = esp;
/* edf026: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* edf029: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf02a: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xedf030u); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* edf030: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edf033: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* edf036: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* edf039: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* edf03c: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* edf03f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edf041: xor edx, edx */
  edx = 0;
/* edf043: mov dl, byte ptr [eax + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* edf046: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edf048: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf04a: call 0xed16f4 */
  esp -= 4; W32(esp, 0xedf04fu); SPILL(); f_ed16f4(); if (g_unwind) return; RELOAD();
/* edf04f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* edf052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf053: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edf055: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf058: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* edf05c: call 0xed1a87 */
  esp -= 4; W32(esp, 0xedf061u); SPILL(); f_ed1a87(); if (g_unwind) return; RELOAD();
/* edf061: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf064: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edf068: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xedf06eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* edf06e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edf071: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edf078: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf07a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf07b: mov esp, ebp */
  esp = ebp;
/* edf07d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edf07e: ret 0x10 */
  esp += 20; SPILL(); return;
L_edf081: /* edf081: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf083: lea edx, [ebp - 0x114] */
  edx = (uint32_t)(ebp + 0xfffffeecu);
/* edf089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf08a: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* edf08d: call 0xed1861 */
  esp -= 4; W32(esp, 0xedf092u); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* edf092: mov ecx, eax */
  ecx = eax;
/* edf094: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* edf098: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedf09eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edf09e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf09f: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edf0a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edf0a6: push 0xf03dc0 */
  { uint32_t v = 0xf03dc0u; esp -= 4; W32(esp, v); }
/* edf0ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf0ac: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedf0b2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edf0b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf0b5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edf0b9: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* edf0bf: jmp 0xedef2e */
  goto L_edef2e;
L_edf0c4: /* edf0c4: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edf0c6: je 0xedf2ef */
  if (zf) goto L_edf2ef;
L_edf0cc: /* edf0cc: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* edf0cf: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* edf0d2: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* edf0d5: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
/* edf0db: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* edf0df: nop  */
L_edf0e0: /* edf0e0: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* edf0e6: call 0xed15eb */
  esp -= 4; W32(esp, 0xedf0ebu); SPILL(); f_ed15eb(); if (g_unwind) return; RELOAD();
/* edf0eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf0ed: jne 0xedf125 */
  if (!zf) goto L_edf125;
L_edf0ef: /* edf0ef: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* edf0f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf0f4: jne 0xedf125 */
  if (!zf) goto L_edf125;
L_edf0f6: /* edf0f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf0f8: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf0fa: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf0fd: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedf103u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edf103: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* edf106: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf109: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* edf10c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* edf112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf114: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedf116u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf116: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf119: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* edf11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf11e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedf120u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf120: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf123: jmp 0xedf0e0 */
  goto L_edf0e0;
L_edf125: /* edf125: xor esi, esi */
  esi = 0;
/* edf127: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_edf12a: /* edf12a: cmp esi, dword ptr [edi + 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf12d: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* edf130: jge 0xedf1bb */
  if ((sf == of)) goto L_edf1bb;
L_edf136: /* edf136: xor ebx, ebx */
  ebx = 0;
L_edf138: /* edf138: cmp ebx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf13b: jge 0xedf196 */
  if ((sf == of)) goto L_edf196;
L_edf13d: /* edf13d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* edf140: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf143: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* edf146: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* edf149: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* edf14c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* edf14f: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* edf152: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* edf155: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* edf158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf159: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf15b: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xedf161u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* edf161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf163: je 0xedf18d */
  if (zf) goto L_edf18d;
L_edf165: /* edf165: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf168: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* edf16b: lea eax, [esi + edx + 0xc] */
  eax = (uint32_t)(esi + edx + 0xcu);
/* edf16f: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* edf172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf173: lea ecx, [edi + edx + 0xc] */
  ecx = (uint32_t)(edi + edx + 0xcu);
/* edf177: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xedf17du); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* edf17d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf17f: je 0xedf18d */
  if (zf) goto L_edf18d;
L_edf181: /* edf181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf183: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf184: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf187: call 0xed1a0a */
  esp -= 4; W32(esp, 0xedf18cu); SPILL(); f_ed1a0a(); if (g_unwind) return; RELOAD();
/* edf18c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_edf18d: /* edf18d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* edf190: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* edf193: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edf194: jmp 0xedf138 */
  goto L_edf138;
L_edf196: /* edf196: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* edf199: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* edf19c: push 0xf03db4 */
  { uint32_t v = 0xf03db4u; esp -= 4; W32(esp, v); }
/* edf1a1: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* edf1a4: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xedf1aau); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* edf1aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf1ac: je 0xedf1b5 */
  if (zf) goto L_edf1b5;
L_edf1ae: /* edf1ae: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_edf1b5: /* edf1b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* edf1b6: jmp 0xedf12a */
  goto L_edf12a;
L_edf1bb: /* edf1bb: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_edf1c2: /* edf1c2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* edf1c5: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf1c8: jge 0xedf21c */
  if ((sf == of)) goto L_edf21c;
L_edf1ca: /* edf1ca: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* edf1cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf1cf: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* edf1d2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf1d4: mov ecx, edi */
  ecx = edi;
/* edf1d6: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedf1dcu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edf1dc: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* edf1df: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* edf1e2: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf1e5: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* edf1e8: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* edf1eb: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* edf1ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf1ef: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* edf1f1: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* edf1f4: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf1f6: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf1fcu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edf1fc: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edf1ff: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* edf201: lea eax, [esi + edx + 0xc] */
  eax = (uint32_t)(esi + edx + 0xcu);
/* edf205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf206: lea ecx, [ebx + ecx + 0xc] */
  ecx = (uint32_t)(ebx + ecx + 0xcu);
/* edf20a: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf210u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edf210: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* edf213: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* edf216: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edf217: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* edf21a: jmp 0xedf1c2 */
  goto L_edf1c2;
L_edf21c: /* edf21c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edf21f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf221: jne 0xedf28f */
  if (!zf) goto L_edf28f;
L_edf227: /* edf227: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf229: lea ebx, [edi + 0x48] */
  ebx = (uint32_t)(edi + 0x48u);
/* edf22c: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf22e: mov ecx, ebx */
  ecx = ebx;
/* edf230: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedf236u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edf236: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* edf238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* edf23b: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* edf23e: push 0xf03db4 */
  { uint32_t v = 0xf03db4u; esp -= 4; W32(esp, v); }
/* edf243: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf245: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xedf24bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* edf24b: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* edf24e: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedf254u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edf254: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* edf257: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf258: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf259: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* edf25f: push 0xf03da4 */
  { uint32_t v = 0xf03da4u; esp -= 4; W32(esp, v); }
/* edf264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf265: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xedf26bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* edf26b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf26e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* edf270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf271: lea ecx, [esi + ecx + 0xc] */
  ecx = (uint32_t)(esi + ecx + 0xcu);
/* edf275: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* edf279: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf27fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edf27f: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* edf285: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* edf289: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedf28fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_edf28f: /* edf28f: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edf292: mov ecx, esp */
  ecx = esp;
/* edf294: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* edf297: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf298: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xedf29eu); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* edf29e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edf2a1: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* edf2a4: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* edf2a7: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* edf2aa: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* edf2ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edf2af: xor edx, edx */
  edx = 0;
/* edf2b1: mov dl, byte ptr [eax + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* edf2b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edf2b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf2b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf2b8: call 0xed16f4 */
  esp -= 4; W32(esp, 0xedf2bdu); SPILL(); f_ed16f4(); if (g_unwind) return; RELOAD();
/* edf2bd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* edf2c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf2c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edf2c3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf2c6: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* edf2ca: call 0xed1a0a */
  esp -= 4; W32(esp, 0xedf2cfu); SPILL(); f_ed1a0a(); if (g_unwind) return; RELOAD();
/* edf2cf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edf2d2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edf2d6: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xedf2dcu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* edf2dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edf2df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edf2e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf2e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf2e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf2e9: mov esp, ebp */
  esp = ebp;
/* edf2eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edf2ec: ret 0x10 */
  esp += 20; SPILL(); return;
L_edf2ef: /* edf2ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf2f1: lea edx, [ebp - 0x12c] */
  edx = (uint32_t)(ebp + 0xfffffed4u);
/* edf2f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf2f8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* edf2fb: call 0xed1861 */
  esp -= 4; W32(esp, 0xedf300u); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* edf300: mov ecx, eax */
  ecx = eax;
/* edf302: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* edf306: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedf30cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edf30c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf30d: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edf312: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edf314: push 0xf03d28 */
  { uint32_t v = 0xf03d28u; esp -= 4; W32(esp, v); }
/* edf319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf31a: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedf320u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edf320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf323: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edf327: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* edf32d: jmp 0xedef2e */
  goto L_edef2e;
L_edf332: /* edf332: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* edf338: call dword ptr [0xf0df54] */
  esp -= 4; W32(esp, 0xedf33eu); SPILL(); f_6cb00f(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@XZ */ RELOAD();
/* edf33e: lea edx, [ebp - 0xe4] */
  edx = (uint32_t)(ebp + 0xffffff1cu);
/* edf344: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf345: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* edf34b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf34c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* edf350: call dword ptr [0xf0dfb0] */
  esp -= 4; W32(esp, 0xedf356u); SPILL(); f_6c509c(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFServerResponseLine@@@Z */ RELOAD();
/* edf356: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf359: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf35a: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* edf360: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf361: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* edf364: mov dword ptr [ebp - 0xa0], ebx */
  W32((uint32_t)(ebp + 0xffffff60u), ebx);
/* edf36a: call 0xed1861 */
  esp -= 4; W32(esp, 0xedf36fu); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* edf36f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf370: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* edf376: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* edf37a: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf380u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edf380: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* edf386: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* edf38a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedf390u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edf390: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edf392: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* edf395: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* edf39b: je 0xedf4b0 */
  if (zf) goto L_edf4b0;
L_edf3a1: /* edf3a1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* edf3a4: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* edf3a7: mov ecx, eax */
  ecx = eax;
/* edf3a9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edf3ac: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* edf3af: mov bl, byte ptr [edx + ecx + 5] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x5u))) & 0xffu);
/* edf3b3: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* edf3b5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* edf3b8: je 0xedf3f9 */
  if (zf) goto L_edf3f9;
L_edf3ba: /* edf3ba: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* edf3bd: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf3c0: jle 0xedf3e9 */
  if ((zf || sf != of)) goto L_edf3e9;
L_edf3c2: /* edf3c2: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* edf3c5: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* edf3c8: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* edf3cb: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* edf3d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf3d2: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* edf3d8: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* edf3de: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf3e4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edf3e4: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* edf3e7: jmp 0xedf3f3 */
  goto L_edf3f3;
L_edf3e9: /* edf3e9: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* edf3ec: cmp eax, 0x270f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x270fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf3f1: jge 0xedf3f9 */
  if ((sf == of)) goto L_edf3f9;
L_edf3f3: /* edf3f3: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
L_edf3f9: /* edf3f9: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* edf3ff: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* edf402: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf403: mov ecx, ebx */
  ecx = ebx;
/* edf405: call dword ptr [0xf0dc10] */
  esp -= 4; W32(esp, 0xedf40bu); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* edf40b: mov esi, eax */
  esi = eax;
/* edf40d: lea edx, [ebp - 0x120] */
  edx = (uint32_t)(ebp + 0xfffffee0u);
/* edf413: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf414: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* edf41a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* edf41e: call dword ptr [0xf0dc10] */
  esp -= 4; W32(esp, 0xedf424u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* edf424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf425: mov ecx, eax */
  ecx = eax;
/* edf427: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* edf42b: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xedf431u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* edf431: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* edf437: mov esi, eax */
  esi = eax;
/* edf439: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* edf43d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedf443u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edf443: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* edf449: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* edf44d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedf453u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edf453: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf455: je 0xedf464 */
  if (zf) goto L_edf464;
L_edf457: /* edf457: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf458: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* edf45e: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedf464u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_edf464: /* edf464: lea eax, [edi + 0x54] */
  eax = (uint32_t)(edi + 0x54u);
/* edf467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf468: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* edf46e: call 0xed1104 */
  esp -= 4; W32(esp, 0xedf473u); SPILL(); f_ed1104(); if (g_unwind) return; RELOAD();
/* edf473: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* edf476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf477: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* edf47d: call 0xed19b5 */
  esp -= 4; W32(esp, 0xedf482u); SPILL(); f_ed19b5(); if (g_unwind) return; RELOAD();
/* edf482: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edf485: lea edx, [ebp - 0xe4] */
  edx = (uint32_t)(ebp + 0xffffff1cu);
/* edf48b: mov ecx, esp */
  ecx = esp;
/* edf48d: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* edf490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf491: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xedf497u); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* edf497: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edf49a: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edf49d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edf4a0: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* edf4a3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edf4a5: xor edx, edx */
  edx = 0;
/* edf4a7: mov dl, byte ptr [eax + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* edf4aa: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edf4ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf4ae: jmp 0xedf4ce */
  goto L_edf4ce;
L_edf4b0: /* edf4b0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edf4b3: lea edx, [ebp - 0xe4] */
  edx = (uint32_t)(ebp + 0xffffff1cu);
/* edf4b9: mov ecx, esp */
  ecx = esp;
/* edf4bb: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* edf4be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf4bf: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xedf4c5u); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* edf4c5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edf4c8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* edf4cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf4cc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
L_edf4ce: /* edf4ce: call 0xed16f4 */
  esp -= 4; W32(esp, 0xedf4d3u); SPILL(); f_ed16f4(); if (g_unwind) return; RELOAD();
/* edf4d3: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* edf4d9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edf4dd: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xedf4e3u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* edf4e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edf4e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf4e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf4e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edf4ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf4f0: mov esp, ebp */
  esp = ebp;
/* edf4f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edf4f3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_edf4f6(void) {
  LOAD_REGS();
L_edf4f6: /* edf4f6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* edf4f9: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edf4fe: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* edf501: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edf502: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* edf505: call 0xeec520 */
  esp -= 4; W32(esp, 0xedf50au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edf50a(); return;
}

void f_edf50a(void) {
  LOAD_REGS();
L_edf50a: /* edf50a: push 0xef60f0 */
  { uint32_t v = 0xef60f0u; esp -= 4; W32(esp, v); }
/* edf50f: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* edf514: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedf51au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edf51a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf51d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edf51f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edf521: call 0xeec520 */
  esp -= 4; W32(esp, 0xedf526u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edf526: guest_badaddr(0xedf526); return;
}

void f_edf720(void) {
  LOAD_REGS();
L_edf720: /* edf720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf721: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* edf725: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edf727: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edf728: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf729: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* edf72f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf730: mov ebp, ecx */
  ebp = ecx;
/* edf732: jge 0xedf748 */
  if ((sf == of)) goto L_edf748;
L_edf734: /* edf734: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* edf739: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf73e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* edf743: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf745: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf748: /* edf748: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf74b: jle 0xedf761 */
  if ((zf || sf != of)) goto L_edf761;
L_edf74d: /* edf74d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* edf752: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf757: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* edf75c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf75eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf75e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf761: /* edf761: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* edf765: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* edf768: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf76b: jle 0xedf781 */
  if ((zf || sf != of)) goto L_edf781;
L_edf76d: /* edf76d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* edf772: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf777: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* edf77c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf77eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf77e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf781: /* edf781: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf783: jge 0xedf7a1 */
  if ((sf == of)) goto L_edf7a1;
L_edf785: /* edf785: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* edf788: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* edf78b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* edf78d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_edf790: /* edf790: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* edf793: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf795: call dword ptr [0xf0dfbc] */
  esp -= 4; W32(esp, 0xedf79bu); SPILL(); f_6c627b(); if (g_unwind) return; /* Engine!??1FKeyValuePair@@QAE@XZ */ RELOAD();
/* edf79b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* edf79e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* edf79f: jne 0xedf790 */
  if (!zf) goto L_edf790;
L_edf7a1: /* edf7a1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edf7a5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf7a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf7a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf7a9: mov ecx, ebp */
  ecx = ebp;
/* edf7ab: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xedf7b1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* edf7b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf7b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf7b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edf7b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf7b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edf7f0(void) {
  LOAD_REGS();
L_edf7f0: /* edf7f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf7f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* edf7f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edf7f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edf7f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf7f9: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* edf7ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf800: mov ebp, ecx */
  ebp = ecx;
/* edf802: jge 0xedf818 */
  if ((sf == of)) goto L_edf818;
L_edf804: /* edf804: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* edf809: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf80e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* edf813: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf815u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf815: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf818: /* edf818: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf81b: jle 0xedf831 */
  if ((zf || sf != of)) goto L_edf831;
L_edf81d: /* edf81d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* edf822: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf827: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* edf82c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf82eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf82e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf831: /* edf831: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* edf835: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* edf838: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf83b: jle 0xedf851 */
  if ((zf || sf != of)) goto L_edf851;
L_edf83d: /* edf83d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* edf842: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* edf847: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* edf84c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xedf84eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edf84e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edf851: /* edf851: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf853: jge 0xedf871 */
  if ((sf == of)) goto L_edf871;
L_edf855: /* edf855: mov esi, ebx */
  esi = ebx;
/* edf857: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* edf85a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* edf85c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_edf860: /* edf860: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* edf863: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf865: call dword ptr [0xf0dfc0] */
  esp -= 4; W32(esp, 0xedf86bu); SPILL(); f_6c3265(); if (g_unwind) return; /* Engine!??1FPlayerResponseLine@@QAE@XZ */ RELOAD();
/* edf86b: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* edf86e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* edf86f: jne 0xedf860 */
  if (!zf) goto L_edf860;
L_edf871: /* edf871: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edf875: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* edf877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf879: mov ecx, ebp */
  ecx = ebp;
/* edf87b: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xedf881u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* edf881: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf883: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edf884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf885: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edf8c0(void) {
  LOAD_REGS();
L_edf8c0: /* edf8c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edf8c2: push 0xeee949 */
  { uint32_t v = 0xeee949u; esp -= 4; W32(esp, v); }
/* edf8c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edf8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf8ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edf8d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edf8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf8d7: mov esi, ecx */
  esi = ecx;
/* edf8d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* edf8dd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edf8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf8e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edf8e3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* edf8eb: call 0xed1a0a */
  esp -= 4; W32(esp, 0xedf8f0u); SPILL(); f_ed1a0a(); if (g_unwind) return; RELOAD();
/* edf8f0: mov ecx, esi */
  ecx = esi;
/* edf8f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* edf8fa: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xedf900u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* edf900: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edf904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf905: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edf90c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edf90f: ret  */
  esp += 4; SPILL(); return;
}

void f_edf930(void) {
  LOAD_REGS();
L_edf930: /* edf930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf932: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf933: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* edf937: mov esi, ecx */
  esi = ecx;
/* edf939: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edf93b: je 0xedf981 */
  if (zf) goto L_edf981;
L_edf93d: /* edf93d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edf940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf941: call 0xed1a28 */
  esp -= 4; W32(esp, 0xedf946u); SPILL(); f_ed1a28(); if (g_unwind) return; RELOAD();
/* edf946: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edf949: xor ebx, ebx */
  ebx = 0;
/* edf94b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edf94d: jle 0xedf981 */
  if ((zf || sf != of)) goto L_edf981;
L_edf94f: /* edf94f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edf950: xor ebp, ebp */
  ebp = 0;
L_edf952: /* edf952: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf954: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edf956: mov ecx, esi */
  ecx = esi;
/* edf958: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedf95eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edf95e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edf960: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* edf963: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* edf966: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edf968: je 0xedf975 */
  if (zf) goto L_edf975;
L_edf96a: /* edf96a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* edf96c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edf96e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edf96f: call dword ptr [0xf0dfc4] */
  esp -= 4; W32(esp, 0xedf975u); SPILL(); f_6cc7f7(); if (g_unwind) return; /* Engine!??0FKeyValuePair@@QAE@ABU0@@Z */ RELOAD();
L_edf975: /* edf975: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edf978: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edf979: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* edf97c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf97e: jl 0xedf952 */
  if ((sf != of)) goto L_edf952;
L_edf980: /* edf980: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_edf981: /* edf981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf982: mov eax, esi */
  eax = esi;
/* edf984: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf985: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edf986: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edf9b0(void) {
  LOAD_REGS();
L_edf9b0: /* edf9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edf9b1: mov esi, ecx */
  esi = ecx;
/* edf9b3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edf9b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edf9b7: xor edi, edi */
  edi = 0;
/* edf9b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edf9bb: jle 0xedf9d6 */
  if ((zf || sf != of)) goto L_edf9d6;
L_edf9bd: /* edf9bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edf9be: xor ebx, ebx */
  ebx = 0;
L_edf9c0: /* edf9c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* edf9c2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edf9c4: call dword ptr [0xf0dfbc] */
  esp -= 4; W32(esp, 0xedf9cau); SPILL(); f_6c627b(); if (g_unwind) return; /* Engine!??1FKeyValuePair@@QAE@XZ */ RELOAD();
/* edf9ca: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edf9cd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* edf9ce: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* edf9d1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edf9d3: jl 0xedf9c0 */
  if ((sf != of)) goto L_edf9c0;
L_edf9d5: /* edf9d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_edf9d6: /* edf9d6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* edf9da: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* edf9dc: mov ecx, esi */
  ecx = esi;
/* edf9de: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* edf9e5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* edf9e8: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xedf9eeu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* edf9ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edf9ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edf9f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edfa20(void) {
  LOAD_REGS();
L_edfa20: /* edfa20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edfa22: push 0xeee969 */
  { uint32_t v = 0xeee969u; esp -= 4; W32(esp, v); }
/* edfa27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edfa2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfa2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edfa35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edfa36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfa37: mov esi, ecx */
  esi = ecx;
/* edfa39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* edfa3d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edfa40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfa41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edfa43: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* edfa4b: call 0xed1a87 */
  esp -= 4; W32(esp, 0xedfa50u); SPILL(); f_ed1a87(); if (g_unwind) return; RELOAD();
/* edfa50: mov ecx, esi */
  ecx = esi;
/* edfa52: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* edfa5a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xedfa60u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* edfa60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edfa64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfa65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edfa6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edfa6f: ret  */
  esp += 4; SPILL(); return;
}

void f_edfa90(void) {
  LOAD_REGS();
L_edfa90: /* edfa90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edfa91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfa92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edfa93: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* edfa97: mov esi, ecx */
  esi = ecx;
/* edfa99: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edfa9b: je 0xedfade */
  if (zf) goto L_edfade;
L_edfa9d: /* edfa9d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edfaa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfaa1: call 0xed17d5 */
  esp -= 4; W32(esp, 0xedfaa6u); SPILL(); f_ed17d5(); if (g_unwind) return; RELOAD();
/* edfaa6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edfaa9: xor ebx, ebx */
  ebx = 0;
/* edfaab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edfaad: jle 0xedfade */
  if ((zf || sf != of)) goto L_edfade;
L_edfaaf: /* edfaaf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edfab0: xor ebp, ebp */
  ebp = 0;
L_edfab2: /* edfab2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* edfab4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edfab6: mov ecx, esi */
  ecx = esi;
/* edfab8: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedfabeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edfabe: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* edfac1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* edfac3: je 0xedfad2 */
  if (zf) goto L_edfad2;
L_edfac5: /* edfac5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* edfac7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edfac9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edfaca: mov ecx, eax */
  ecx = eax;
/* edfacc: call dword ptr [0xf0dfc8] */
  esp -= 4; W32(esp, 0xedfad2u); SPILL(); f_6c73a1(); if (g_unwind) return; /* Engine!??0FPlayerResponseLine@@QAE@ABU0@@Z */ RELOAD();
L_edfad2: /* edfad2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* edfad5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* edfad6: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* edfad9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edfadb: jl 0xedfab2 */
  if ((sf != of)) goto L_edfab2;
L_edfadd: /* edfadd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_edfade: /* edfade: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edfadf: mov eax, esi */
  eax = esi;
/* edfae1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfae2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edfae3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edfb10(void) {
  LOAD_REGS();
L_edfb10: /* edfb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfb11: mov esi, ecx */
  esi = ecx;
/* edfb13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edfb16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edfb17: xor edi, edi */
  edi = 0;
/* edfb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edfb1b: jle 0xedfb36 */
  if ((zf || sf != of)) goto L_edfb36;
L_edfb1d: /* edfb1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edfb1e: xor ebx, ebx */
  ebx = 0;
L_edfb20: /* edfb20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* edfb22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edfb24: call dword ptr [0xf0dfc0] */
  esp -= 4; W32(esp, 0xedfb2au); SPILL(); f_6c3265(); if (g_unwind) return; /* Engine!??1FPlayerResponseLine@@QAE@XZ */ RELOAD();
/* edfb2a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* edfb2d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* edfb2e: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* edfb31: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edfb33: jl 0xedfb20 */
  if ((sf != of)) goto L_edfb20;
L_edfb35: /* edfb35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_edfb36: /* edfb36: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* edfb3a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* edfb3c: mov ecx, esi */
  ecx = esi;
/* edfb3e: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* edfb45: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* edfb48: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xedfb4eu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* edfb4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edfb4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfb50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edfb80(void) {
  LOAD_REGS();
L_edfb80: /* edfb80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edfb82: push 0xeee98b */
  { uint32_t v = 0xeee98bu; esp -= 4; W32(esp, v); }
/* edfb87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edfb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfb8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edfb95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edfb96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfb97: mov esi, ecx */
  esi = ecx;
/* edfb99: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* edfb9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edfba1: jne 0xedfc07 */
  if (!zf) goto L_edfc07;
L_edfba3: /* edfba3: test byte ptr [esi + 0x39c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x39cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* edfbaa: je 0xedfbb6 */
  if (zf) goto L_edfbb6;
L_edfbac: /* edfbac: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* edfbb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edfbb4: jl 0xedfc07 */
  if ((sf != of)) goto L_edfc07;
L_edfbb6: /* edfbb6: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* edfbbb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edfbbd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edfbbf: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* edfbc4: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* edfbc6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedfbc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfbc8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* edfbcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edfbce: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* edfbd6: je 0xedfbff */
  if (zf) goto L_edfbff;
L_edfbd8: /* edfbd8: test byte ptr [esi + 0x39c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x39cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* edfbdf: je 0xedfbf2 */
  if (zf) goto L_edfbf2;
L_edfbe1: /* edfbe1: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* edfbe7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edfbe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfbe9: mov ecx, eax */
  ecx = eax;
/* edfbeb: call 0xed1438 */
  esp -= 4; W32(esp, 0xedfbf0u); SPILL(); f_ed1438(); if (g_unwind) return; RELOAD();
/* edfbf0: jmp 0xedfc01 */
  goto L_edfc01;
L_edfbf2: /* edfbf2: xor edx, edx */
  edx = 0;
/* edfbf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edfbf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfbf6: mov ecx, eax */
  ecx = eax;
/* edfbf8: call 0xed1438 */
  esp -= 4; W32(esp, 0xedfbfdu); SPILL(); f_ed1438(); if (g_unwind) return; RELOAD();
/* edfbfd: jmp 0xedfc01 */
  goto L_edfc01;
L_edfbff: /* edfbff: xor eax, eax */
  eax = 0;
L_edfc01: /* edfc01: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
L_edfc07: /* edfc07: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edfc0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfc0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edfc13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edfc16: ret  */
  esp += 4; SPILL(); return;
}

void f_edfc50(void) {
  LOAD_REGS();
L_edfc50: /* edfc50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edfc52: push 0xeee9b2 */
  { uint32_t v = 0xeee9b2u; esp -= 4; W32(esp, v); }
/* edfc57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edfc5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfc5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edfc65: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edfc68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edfc69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edfc6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfc6b: mov esi, dword ptr [esp + 0x98] */
  esi = R32((uint32_t)(esp + 0x98u));
/* edfc72: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfc75: xor ebx, ebx */
  ebx = 0;
/* edfc77: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* edfc7b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfc7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfc7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edfc80: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfc83: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* edfc87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfc88: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfc8d: mov edi, ecx */
  edi = ecx;
/* edfc8f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfc92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfc93: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfc96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfc96: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfc99: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfc9c: mov byte ptr [esp + 0x18], bl */
  W8((uint32_t)(esp + 0x18u), (ebx & 0xffu));
/* edfca0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfca3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfca4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfca7: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* edfcab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfcac: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfcb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfcb2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfcb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfcb5: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* edfcb9: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedfcbfu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edfcbf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfcc2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfcc5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfcc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfcc9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfccc: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* edfcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfcd1: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfcd7: mov dword ptr [esp + 0x9c], ebx */
  W32((uint32_t)(esp + 0x9cu), ebx);
/* edfcde: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfce1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfce1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfce4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfce7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* edfceb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfcee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfcef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfcf2: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* edfcf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfcf7: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfcfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfcfd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfd00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfd00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfd03: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfd06: mov byte ptr [esp + 0x14], bl */
  W8((uint32_t)(esp + 0x14u), (ebx & 0xffu));
/* edfd0a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfd0d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfd0e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfd11: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* edfd15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfd16: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfd1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfd1c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfd1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfd1f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* edfd23: call dword ptr [0xf0df54] */
  esp -= 4; W32(esp, 0xedfd29u); SPILL(); f_6cb00f(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@XZ */ RELOAD();
/* edfd29: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edfd2c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edfd2f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfd32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfd33: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfd36: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* edfd3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfd3b: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfd41: mov byte ptr [esp + 0x9c], 1 */
  W8((uint32_t)(esp + 0x9cu), 0x1u);
/* edfd49: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedfd4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edfd4c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edfd4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edfd50: mov eax, edx */
  eax = edx;
/* edfd52: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edfd55: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edfd58: jne 0xedfd6f */
  if (!zf) goto L_edfd6f;
L_edfd5a: /* edfd5a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edfd5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edfd5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edfd5f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edfd62: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edfd68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfd69: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedfd6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edfd6f: /* edfd6f: mov ecx, edi */
  ecx = edi;
/* edfd71: call 0xed10fa */
  esp -= 4; W32(esp, 0xedfd76u); SPILL(); f_ed10fa(); if (g_unwind) return; RELOAD();
/* edfd76: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* edfd7a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* edfd7e: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedfd84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edfd84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edfd85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfd86: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xedfd8cu); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* edfd8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edfd8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfd90: call 0xeebbb8 */
  esp -= 4; W32(esp, 0xedfd95u); SPILL(); f_eebbb8(); if (g_unwind) return; RELOAD();
/* edfd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfd96: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xedfd9bu); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* edfd9b: push 0xf03a8c */
  { uint32_t v = 0xf03a8cu; esp -= 4; W32(esp, v); }
/* edfda0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* edfda4: mov esi, eax */
  esi = eax;
/* edfda6: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xedfdacu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* edfdac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edfdae: je 0xedfdb3 */
  if (zf) goto L_edfdb3;
L_edfdb0: /* edfdb0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_edfdb3: /* edfdb3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* edfdb7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* edfdbb: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* edfdbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfdc0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* edfdc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edfdc5: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* edfdcb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edfdcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfdcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edfdce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfdcf: call 0xed1898 */
  esp -= 4; W32(esp, 0xedfdd4u); SPILL(); f_ed1898(); if (g_unwind) return; RELOAD();
/* edfdd4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* edfdd8: mov byte ptr [esp + 0x94], bl */
  W8((uint32_t)(esp + 0x94u), (ebx & 0xffu));
/* edfddf: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xedfde5u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* edfde5: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* edfde9: mov dword ptr [esp + 0x94], 0xffffffff */
  W32((uint32_t)(esp + 0x94u), 0xffffffffu);
/* edfdf4: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedfdfau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edfdfa: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* edfe01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edfe02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfe03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edfe04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edfe05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edfe0c: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edfe12: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edfea0(void) {
  LOAD_REGS();
L_edfea0: /* edfea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* edfea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edfea5: mov esi, ecx */
  esi = ecx;
/* edfea7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* edfeaa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* edfeab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* edfeae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edfeb1: jne 0xedfec8 */
  if (!zf) goto L_edfec8;
L_edfeb3: /* edfeb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* edfeb4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* edfeb7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* edfeba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edfebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edfebd: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edfec2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xedfec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edfec8: /* edfec8: mov ecx, esi */
  ecx = esi;
/* edfeca: call 0xed10fa */
  esp -= 4; W32(esp, 0xedfecfu); SPILL(); f_ed10fa(); if (g_unwind) return; RELOAD();
/* edfecf: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* edfed5: call 0xed1131 */
  esp -= 4; W32(esp, 0xedfedau); SPILL(); f_ed1131(); if (g_unwind) return; RELOAD();
/* edfeda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edfedb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edfef0(void) {
  LOAD_REGS();
L_edfef0: /* edfef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edfef1: mov ebp, esp */
  ebp = esp;
/* edfef3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* edfef6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edfef8: push 0xeeeb40 */
  { uint32_t v = 0xeeeb40u; esp -= 4; W32(esp, v); }
/* edfefd: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edff03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edff04: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edff0b: sub esp, 0x1fc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edff11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edff12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edff13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edff14: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* edff18: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edff1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edff1b: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xedff1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edff1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edff20: je 0xee0cca */
  if (zf) goto L_ee0cca;
L_edff26: /* edff26: mov ebp, dword ptr [0xf0dbf8] */
  ebp = R32((uint32_t)(0xf0dbf8u));
/* edff2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_edff30: /* edff30: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* edff34: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* edff37: mov ebx, 3 */
  ebx = 0x3u;
/* edff3c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* edff3e: ja 0xee0c82 */
  if ((!cf && !zf)) goto L_ee0c82;
L_edff44: /* edff44: jmp dword ptr [eax*4 + 0xee0ce0] */
  switch (R32((uint32_t)(eax*4 + 0xee0ce0u))) {
    case 0xedff4bu: goto L_edff4b;
    case 0xee015fu: goto L_ee015f;
    case 0xee0502u: goto L_ee0502;
    case 0xee06cfu: goto L_ee06cf;
    default: guest_badjump(0xedff44, R32((uint32_t)(eax*4 + 0xee0ce0u))); return;
  }
L_edff4b: /* edff4b: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* edff52: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedff58u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edff58: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* edff5c: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* edff5f: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* edff66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edff67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edff68: mov dword ptr [esp + 0x21c], 0 */
  W32((uint32_t)(esp + 0x21cu), 0x0u);
/* edff73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xedff75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edff75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edff78: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* edff7f: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedff85u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edff85: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* edff8c: mov byte ptr [esp + 0x214], 1 */
  W8((uint32_t)(esp + 0x214u), 0x1u);
/* edff94: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedff9au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edff9a: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* edffa1: mov byte ptr [esp + 0x214], 2 */
  W8((uint32_t)(esp + 0x214u), 0x2u);
/* edffa9: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedffafu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edffaf: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* edffb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edffb7: mov byte ptr [esp + 0x218], bl */
  W8((uint32_t)(esp + 0x218u), (ebx & 0xffu));
/* edffbe: call dword ptr [0xf0dfd0] */
  esp -= 4; W32(esp, 0xedffc4u); SPILL(); f_6c7ac2(); if (g_unwind) return; /* Engine!?GetCDKeyHash@@YA?AVFString@@XZ */ RELOAD();
/* edffc4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edffc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edffc8: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* edffcf: mov byte ptr [esp + 0x218], 4 */
  W8((uint32_t)(esp + 0x218u), 0x4u);
/* edffd7: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedffddu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edffdd: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* edffe4: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* edffeb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedfff1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edfff1: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* edfff8: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedfffeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edfffe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edffff: lea edx, [esp + 0x1c8] */
  edx = (uint32_t)(esp + 0x1c8u);
/* ee0006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0007: call dword ptr [0xf0dfcc] */
  esp -= 4; W32(esp, 0xee000du); SPILL(); f_6c944e(); if (g_unwind) return; /* Engine!?GetCDKeyResponse@@YA?AVFString@@PBG@Z */ RELOAD();
/* ee000d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0011: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* ee0018: mov byte ptr [esp + 0x218], 5 */
  W8((uint32_t)(esp + 0x218u), 0x5u);
/* ee0020: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee0026u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee0026: lea ecx, [esp + 0x1c4] */
  ecx = (uint32_t)(esp + 0x1c4u);
/* ee002d: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee0034: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee003au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee003a: push 0xf03fe4 */
  { uint32_t v = 0xf03fe4u; esp -= 4; W32(esp, v); }
/* ee003f: lea ecx, [esp + 0x180] */
  ecx = (uint32_t)(esp + 0x180u);
/* ee0046: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee004cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee004c: mov eax, dword ptr [0xf0d9a0] */
  eax = R32((uint32_t)(0xf0d9a0u));
/* ee0051: mov dword ptr [esp + 0x68], 0x8b2 */
  W32((uint32_t)(esp + 0x68u), 0x8b2u);
/* ee0059: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ee005b: mov byte ptr [esp + 0x15], cl */
  W8((uint32_t)(esp + 0x15u), (ecx & 0xffu));
/* ee005f: call dword ptr [0xf0d9a4] */
  esp -= 4; W32(esp, 0xee0065u); SPILL(); f_4e3ddc(); if (g_unwind) return; /* Core!?GetLanguage@UObject@@SAPBGXZ */ RELOAD();
/* ee0065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0066: lea ecx, [esp + 0x200] */
  ecx = (uint32_t)(esp + 0x200u);
/* ee006d: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee0073u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee0073: lea edx, [esp + 0x1fc] */
  edx = (uint32_t)(esp + 0x1fcu);
/* ee007a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee007b: lea eax, [esp + 0x19] */
  eax = (uint32_t)(esp + 0x19u);
/* ee007f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0080: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee0084: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0085: lea edx, [esp + 0x188] */
  edx = (uint32_t)(esp + 0x188u);
/* ee008c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee008d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ee0091: lea eax, [esp + 0xfc] */
  eax = (uint32_t)(esp + 0xfcu);
/* ee0098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0099: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* ee009c: lea ecx, [esp + 0x124] */
  ecx = (uint32_t)(esp + 0x124u);
/* ee00a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee00a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00a5: mov byte ptr [esp + 0x230], 6 */
  W8((uint32_t)(esp + 0x230u), 0x6u);
/* ee00ad: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee00afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee00af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee00b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee00b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00b9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee00bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee00bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00bf: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee00c5u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee00c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00c9: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee00cfu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee00cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee00d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee00d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee00d5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee00d9: mov ecx, dword ptr [ecx + 0x4c] */
  ecx = R32((uint32_t)(ecx + 0x4cu));
/* ee00dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee00de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee00e1: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee00e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee00e4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee00e8: lea ecx, [esp + 0x1fc] */
  ecx = (uint32_t)(esp + 0x1fcu);
/* ee00ef: mov dword ptr [eax + 0x54], 1 */
  W32((uint32_t)(eax + 0x54u), 0x1u);
/* ee00f6: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee00fd: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0103u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0103: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* ee010a: mov byte ptr [esp + 0x214], 2 */
  W8((uint32_t)(esp + 0x214u), 0x2u);
/* ee0112: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0118u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0118: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* ee011f: mov byte ptr [esp + 0x214], 1 */
  W8((uint32_t)(esp + 0x214u), 0x1u);
/* ee0127: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee012du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee012d: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* ee0134: mov byte ptr [esp + 0x214], 0 */
  W8((uint32_t)(esp + 0x214u), 0x0u);
/* ee013c: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0142u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0142: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* ee0149: mov dword ptr [esp + 0x214], 0xffffffff */
  W32((uint32_t)(esp + 0x214u), 0xffffffffu);
/* ee0154: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee015au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee015a: jmp 0xee0c7e */
  goto L_ee0c7e;
L_ee015f: /* ee015f: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* ee0163: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee0169u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee0169: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee016d: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* ee0170: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* ee0174: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0176: mov dword ptr [esp + 0x21c], 7 */
  W32((uint32_t)(esp + 0x21cu), 0x7u);
/* ee0181: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee0183u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0183: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0186: push 0xf03fcc */
  { uint32_t v = 0xf03fccu; esp -= 4; W32(esp, v); }
/* ee018b: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* ee018f: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0195u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0195: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0197: je 0xee01ed */
  if (zf) goto L_ee01ed;
L_ee0199: /* ee0199: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee019d: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* ee01a0: lea ecx, [eax + 0x65] */
  ecx = (uint32_t)(eax + 0x65u);
/* ee01a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee01a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee01a5: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee01abu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee01ab: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ee01af: mov cl, byte ptr [eax + 0x65] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x65u))) & 0xffu);
/* ee01b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee01b5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee01b7: jne 0xee01d3 */
  if (!zf) goto L_ee01d3;
L_ee01b9: /* ee01b9: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee01bc: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* ee01bf: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee01c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee01c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee01c7: call 0xed1802 */
  esp -= 4; W32(esp, 0xee01ccu); SPILL(); f_ed1802(); if (g_unwind) return; RELOAD();
/* ee01cc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ee01d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee01d3: /* ee01d3: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* ee01d6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ee01d8: mov ecx, eax */
  ecx = eax;
/* ee01da: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee01ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee01dd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee01e1: mov dword ptr [eax + 0x54], 2 */
  W32((uint32_t)(eax + 0x54u), 0x2u);
/* ee01e8: jmp 0xee04e8 */
  goto L_ee04e8;
L_ee01ed: /* ee01ed: push 0xf03fb8 */
  { uint32_t v = 0xf03fb8u; esp -= 4; W32(esp, v); }
/* ee01f2: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* ee01f6: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee01fcu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee01fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee01fe: je 0xee0321 */
  if (zf) goto L_ee0321;
L_ee0204: /* ee0204: xor esi, esi */
  esi = 0;
/* ee0206: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* ee020a: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* ee020e: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* ee0212: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* ee0214: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* ee021b: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee0222: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee0228u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee0228: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* ee022f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0230: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ee0234: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* ee0238: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0239: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* ee023c: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* ee0240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0241: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0242: mov byte ptr [esp + 0x224], 9 */
  W8((uint32_t)(esp + 0x224u), 0x9u);
/* ee024a: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee0250u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee0250: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0254: call 0xed18ac */
  esp -= 4; W32(esp, 0xee0259u); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ee0259: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee025c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee025d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee025fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee025f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee0263: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0266: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* ee026a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee026b: call 0xed1776 */
  esp -= 4; W32(esp, 0xee0270u); SPILL(); f_ed1776(); if (g_unwind) return; RELOAD();
/* ee0270: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* ee0274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0275: lea edx, [esp + 0x150] */
  edx = (uint32_t)(esp + 0x150u);
/* ee027c: push 0xf03fb0 */
  { uint32_t v = 0xf03fb0u; esp -= 4; W32(esp, v); }
/* ee0281: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0282: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee0288u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee0288: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee028b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee028c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ee0290: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee0293: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee0295: mov byte ptr [esp + 0x21c], 0xa */
  W8((uint32_t)(esp + 0x21cu), 0xau);
/* ee029d: call 0xed172b */
  esp -= 4; W32(esp, 0xee02a2u); SPILL(); f_ed172b(); if (g_unwind) return; RELOAD();
/* ee02a2: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* ee02a9: mov byte ptr [esp + 0x214], 9 */
  W8((uint32_t)(esp + 0x214u), 0x9u);
/* ee02b1: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee02b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee02b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee02bb: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* ee02c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee02c3: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* ee02c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee02c7: call 0xed172b */
  esp -= 4; W32(esp, 0xee02ccu); SPILL(); f_ed172b(); if (g_unwind) return; RELOAD();
/* ee02cc: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ee02d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee02d4: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee02d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee02d8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee02da: call 0xed145b */
  esp -= 4; W32(esp, 0xee02dfu); SPILL(); f_ed145b(); if (g_unwind) return; RELOAD();
/* ee02df: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* ee02e6: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee02ed: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee02f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee02f3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* ee02f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee02f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee02f9: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* ee02fd: mov byte ptr [esp + 0x21c], 0xb */
  W8((uint32_t)(esp + 0x21cu), 0xbu);
/* ee0305: call 0xed1636 */
  esp -= 4; W32(esp, 0xee030au); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee030a: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* ee030e: mov byte ptr [esp + 0x214], 7 */
  W8((uint32_t)(esp + 0x214u), 0x7u);
/* ee0316: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee031cu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee031c: jmp 0xee04e8 */
  goto L_ee04e8;
L_ee0321: /* ee0321: push 0xf03fa0 */
  { uint32_t v = 0xf03fa0u; esp -= 4; W32(esp, v); }
/* ee0326: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* ee032a: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0330u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0330: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0332: je 0xee04a0 */
  if (zf) goto L_ee04a0;
L_ee0338: /* ee0338: xor ebx, ebx */
  ebx = 0;
/* ee033a: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* ee033e: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* ee0342: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* ee0346: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* ee034a: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* ee034e: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ee0352: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee0356: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* ee035a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee035b: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* ee035e: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* ee0362: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0363: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0364: mov byte ptr [esp + 0x220], 0xd */
  W8((uint32_t)(esp + 0x220u), 0xdu);
/* ee036c: call 0xed18ac */
  esp -= 4; W32(esp, 0xee0371u); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ee0371: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0375: call 0xed14fb */
  esp -= 4; W32(esp, 0xee037au); SPILL(); f_ed14fb(); if (g_unwind) return; RELOAD();
/* ee037a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee037d: mov edi, 0x34c */
  edi = 0x34cu;
/* ee0382: mov esi, 0x360 */
  esi = 0x360u;
L_ee0387: /* ee0387: cmp ebx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee038b: jge 0xee03aa */
  if ((sf == of)) goto L_ee03aa;
L_ee038d: /* ee038d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ee0391: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee0395: lea edx, [esi + ecx - 0x360] */
  edx = (uint32_t)(esi + ecx + 0xfffffca0u);
/* ee039c: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee039f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee03a0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee03a2: call dword ptr [0xf0d9a8] */
  esp -= 4; W32(esp, 0xee03a8u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* ee03a8: jmp 0xee03be */
  goto L_ee03be;
L_ee03aa: /* ee03aa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee03ae: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee03b1: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee03b6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee03b8: call dword ptr [0xf0d9ac] */
  esp -= 4; W32(esp, 0xee03beu); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
L_ee03be: /* ee03be: cmp ebx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee03c2: jge 0xee03db */
  if ((sf == of)) goto L_ee03db;
L_ee03c4: /* ee03c4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee03c8: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ee03cc: mov eax, dword ptr [edx + 0x58] */
  eax = R32((uint32_t)(edx + 0x58u));
/* ee03cf: mov edx, dword ptr [edi + ecx - 0x34c] */
  edx = R32((uint32_t)(edi + ecx + 0xfffffcb4u));
/* ee03d6: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* ee03d9: jmp 0xee03e9 */
  goto L_ee03e9;
L_ee03db: /* ee03db: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee03df: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee03e2: mov dword ptr [edi + ecx], 0 */
  W32((uint32_t)(edi + ecx), 0x0u);
L_ee03e9: /* ee03e9: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee03ec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee03ed: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ee03f0: cmp esi, 0x39c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee03f6: jl 0xee0387 */
  if ((sf != of)) goto L_ee0387;
L_ee03f8: /* ee03f8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee03fc: mov eax, dword ptr [edx + 0x58] */
  eax = R32((uint32_t)(edx + 0x58u));
/* ee03ff: xor esi, esi */
  esi = 0;
/* ee0401: mov dword ptr [eax + 0x348], esi */
  W32((uint32_t)(eax + 0x348u), esi);
/* ee0407: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee040b: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee040e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee040f: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee0414: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee041au); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee041a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee041e: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* ee0421: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0423: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee0424: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* ee042b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee042c: lea edx, [ecx + 0x3c4] */
  edx = (uint32_t)(ecx + 0x3c4u);
/* ee0432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0433: mov edx, dword ptr [0xf07d90] */
  edx = R32((uint32_t)(0xf07d90u));
/* ee0439: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee043a: mov byte ptr [esp + 0xf4], 1 */
  W8((uint32_t)(esp + 0xf4u), 0x1u);
/* ee0442: mov dword ptr [esp + 0xf8], esi */
  W32((uint32_t)(esp + 0xf8u), esi);
/* ee0449: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xee044cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee044c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ee0450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee0452: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* ee0456: mov byte ptr [esp + 0x21c], 0xe */
  W8((uint32_t)(esp + 0x21cu), 0xeu);
/* ee045e: call 0xed1717 */
  esp -= 4; W32(esp, 0xee0463u); SPILL(); f_ed1717(); if (g_unwind) return; RELOAD();
/* ee0463: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* ee0467: mov byte ptr [esp + 0x214], 0xc */
  W8((uint32_t)(esp + 0x214u), 0xcu);
/* ee046f: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee0475u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee0475: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* ee0479: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee047a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee047b: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* ee047f: mov byte ptr [esp + 0x21c], 0xf */
  W8((uint32_t)(esp + 0x21cu), 0xfu);
/* ee0487: call 0xed1636 */
  esp -= 4; W32(esp, 0xee048cu); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee048c: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* ee0490: mov byte ptr [esp + 0x214], 7 */
  W8((uint32_t)(esp + 0x214u), 0x7u);
/* ee0498: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee049eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee049e: jmp 0xee04e8 */
  goto L_ee04e8;
L_ee04a0: /* ee04a0: push 0xf03f90 */
  { uint32_t v = 0xf03f90u; esp -= 4; W32(esp, v); }
/* ee04a5: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* ee04a9: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee04afu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee04af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee04b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee04b3: je 0xee04b9 */
  if (zf) goto L_ee04b9;
L_ee04b5: /* ee04b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee04b7: jmp 0xee04dc */
  goto L_ee04dc;
L_ee04b9: /* ee04b9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ee04bd: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* ee04c0: inc dword ptr [eax + 0x348] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x348u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x348u), r);
  }
/* ee04c6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ee04ca: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee04cd: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee04d2: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee04d8u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee04d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee04da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_ee04dc: /* ee04dc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ee04e0: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* ee04e3: call 0xed145b */
  esp -= 4; W32(esp, 0xee04e8u); SPILL(); f_ed145b(); if (g_unwind) return; RELOAD();
L_ee04e8: /* ee04e8: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* ee04ec: mov dword ptr [esp + 0x214], 0xffffffff */
  W32((uint32_t)(esp + 0x214u), 0xffffffffu);
/* ee04f7: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee04fdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee04fd: jmp 0xee0c7e */
  goto L_ee0c7e;
L_ee0502: /* ee0502: movzx eax, byte ptr [ecx + 0x65] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x65u)));
/* ee0506: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee0509: je 0xee0672 */
  if (zf) goto L_ee0672;
L_ee050f: /* ee050f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee0510: jne 0xee0c82 */
  if (!zf) goto L_ee0c82;
L_ee0516: /* ee0516: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* ee051d: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee0523u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee0523: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee0527: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* ee052b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee052c: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* ee052f: lea ecx, [esp + 0x138] */
  ecx = (uint32_t)(esp + 0x138u);
/* ee0536: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0537: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0538: mov dword ptr [esp + 0x220], 0x10 */
  W32((uint32_t)(esp + 0x220u), 0x10u);
/* ee0543: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee0545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0545: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0549: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee054fu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee054f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ee0553: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0556: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* ee055d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee055e: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* ee0561: xor esi, esi */
  esi = 0;
/* ee0563: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee0564: call 0xed172b */
  esp -= 4; W32(esp, 0xee0569u); SPILL(); f_ed172b(); if (g_unwind) return; RELOAD();
/* ee0569: cmp dword ptr [esp + 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee056d: je 0xee061a */
  if (zf) goto L_ee061a;
L_ee0573: /* ee0573: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* ee0577: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* ee057b: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* ee057f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee0583: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* ee0586: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* ee058a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee058b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee058c: mov byte ptr [esp + 0x21c], 0x11 */
  W8((uint32_t)(esp + 0x21cu), 0x11u);
/* ee0594: call 0xed18ac */
  esp -= 4; W32(esp, 0xee0599u); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ee0599: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee059d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee05a0: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* ee05a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee05a5: call 0xed1776 */
  esp -= 4; W32(esp, 0xee05aau); SPILL(); f_ed1776(); if (g_unwind) return; RELOAD();
/* ee05aa: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ee05ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee05af: lea edx, [esp + 0x198] */
  edx = (uint32_t)(esp + 0x198u);
/* ee05b6: push 0xf03fb0 */
  { uint32_t v = 0xf03fb0u; esp -= 4; W32(esp, v); }
/* ee05bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee05bc: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee05c2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee05c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee05c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee05c6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ee05ca: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee05cd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee05cf: mov byte ptr [esp + 0x21c], 0x12 */
  W8((uint32_t)(esp + 0x21cu), 0x12u);
/* ee05d7: call 0xed172b */
  esp -= 4; W32(esp, 0xee05dcu); SPILL(); f_ed172b(); if (g_unwind) return; RELOAD();
/* ee05dc: lea ecx, [esp + 0x194] */
  ecx = (uint32_t)(esp + 0x194u);
/* ee05e3: mov byte ptr [esp + 0x214], 0x11 */
  W8((uint32_t)(esp + 0x214u), 0x11u);
/* ee05eb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee05f1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee05f1: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* ee05f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee05f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee05f7: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* ee05fb: mov byte ptr [esp + 0x21c], 0x13 */
  W8((uint32_t)(esp + 0x21cu), 0x13u);
/* ee0603: call 0xed1636 */
  esp -= 4; W32(esp, 0xee0608u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee0608: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* ee060c: mov byte ptr [esp + 0x214], 0x10 */
  W8((uint32_t)(esp + 0x214u), 0x10u);
/* ee0614: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee061au); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_ee061a: /* ee061a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee061e: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* ee0621: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee0624: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* ee062b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee062c: lea edx, [ecx + 0x3c4] */
  edx = (uint32_t)(ecx + 0x3c4u);
/* ee0632: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0633: mov edx, dword ptr [0xf07d90] */
  edx = R32((uint32_t)(0xf07d90u));
/* ee0639: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee063a: mov byte ptr [esp + 0xec], bl */
  W8((uint32_t)(esp + 0xecu), (ebx & 0xffu));
/* ee0641: mov dword ptr [esp + 0xf0], esi */
  W32((uint32_t)(esp + 0xf0u), esi);
/* ee0648: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xee064bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee064b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee064f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee0652: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xee0655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0655: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* ee065c: mov dword ptr [esp + 0x214], 0xffffffff */
  W32((uint32_t)(esp + 0x214u), 0xffffffffu);
/* ee0667: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee066du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee066d: jmp 0xee0c7e */
  goto L_ee0c7e;
L_ee0672: /* ee0672: lea edx, [ecx + 0x64] */
  edx = (uint32_t)(ecx + 0x64u);
/* ee0675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0676: lea eax, [ecx + 0x5c] */
  eax = (uint32_t)(ecx + 0x5cu);
/* ee0679: mov ecx, dword ptr [ecx + 0x50] */
  ecx = R32((uint32_t)(ecx + 0x50u));
/* ee067c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee067d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee067e: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee0684u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee0684: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0688: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee068eu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee068e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ee0692: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* ee0695: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* ee0698: mov dword ptr [edx + 0x3c0], eax */
  W32((uint32_t)(edx + 0x3c0u), eax);
/* ee069e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ee06a2: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* ee06a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee06a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee06aa: jle 0xee06b4 */
  if ((zf || sf != of)) goto L_ee06b4;
L_ee06ac: /* ee06ac: mov dword ptr [eax + 0x54], ebx */
  W32((uint32_t)(eax + 0x54u), ebx);
/* ee06af: jmp 0xee0c7e */
  goto L_ee0c7e;
L_ee06b4: /* ee06b4: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* ee06b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee06b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee06ba: call 0xed145b */
  esp -= 4; W32(esp, 0xee06bfu); SPILL(); f_ed145b(); if (g_unwind) return; RELOAD();
/* ee06bf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee06c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee06c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee06c7: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xee06cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee06ca: jmp 0xee0c7e */
  goto L_ee0c7e;
L_ee06cf: /* ee06cf: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* ee06d2: cmp eax, dword ptr [ecx + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee06d5: jge 0xee0c39 */
  if ((sf == of)) goto L_ee0c39;
L_ee06db: /* ee06db: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee06df: call dword ptr [0xf0df54] */
  esp -= 4; W32(esp, 0xee06e5u); SPILL(); f_6cb00f(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@XZ */ RELOAD();
/* ee06e5: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee06e9: mov dword ptr [esp + 0x214], 0x14 */
  W32((uint32_t)(esp + 0x214u), 0x14u);
/* ee06f4: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ee06f8: mov ecx, 0x60 */
  ecx = 0x60u;
/* ee06fd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ee0701: xor eax, eax */
  eax = 0;
/* ee0703: mov ebx, ecx */
  ebx = ecx;
/* ee0705: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee0708: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ee070b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ee070d: mov ecx, ebx */
  ecx = ebx;
/* ee070f: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ee0711: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee0715: inc dword ptr [eax + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* ee0718: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee071c: mov cl, byte ptr [eax + 0x64] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x64u))) & 0xffu);
/* ee071f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee0721: je 0xee0be3 */
  if (zf) goto L_ee0be3;
L_ee0727: /* ee0727: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* ee072a: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* ee072e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee072f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* ee0733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0734: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* ee0738: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0739: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee073a: call dword ptr [0xf0db38] */
  esp -= 4; W32(esp, 0xee0740u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* ee0740: mov esi, dword ptr [0xf0d9b0] */
  esi = R32((uint32_t)(0xf0d9b0u));
/* ee0746: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee074a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee074cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee074c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee074f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0750: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee0752u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0752: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee0756: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* ee0759: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* ee075c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee075f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0761: jne 0xee0cae */
  if (!zf) goto L_ee0cae;
L_ee0767: /* ee0767: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* ee076e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0770: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee0772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0772: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* ee0779: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee077c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee077e: je 0xee07cb */
  if (zf) goto L_ee07cb;
L_ee0780: /* ee0780: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ee0781: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee0784: jne 0xee07cb */
  if (!zf) goto L_ee07cb;
L_ee0786: /* ee0786: push 0xf03f84 */
  { uint32_t v = 0xf03f84u; esp -= 4; W32(esp, v); }
/* ee078b: lea edx, [esp + 0x1b0] */
  edx = (uint32_t)(esp + 0x1b0u);
/* ee0792: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0793: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* ee079a: call dword ptr [0xf0dc00] */
  esp -= 4; W32(esp, 0xee07a0u); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* ee07a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee07a1: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* ee07a8: mov byte ptr [esp + 0x218], 0x15 */
  W8((uint32_t)(esp + 0x218u), 0x15u);
/* ee07b0: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee07b6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee07b6: lea ecx, [esp + 0x1ac] */
  ecx = (uint32_t)(esp + 0x1acu);
/* ee07bd: mov byte ptr [esp + 0x214], 0x14 */
  W8((uint32_t)(esp + 0x214u), 0x14u);
/* ee07c5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee07cbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee07cb: /* ee07cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee07cf: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* ee07d2: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* ee07d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee07d7: jne 0xee0ca5 */
  if (!zf) goto L_ee0ca5;
L_ee07dd: /* ee07dd: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee07e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee07e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee07e6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee07e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee07e8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee07ec: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* ee07ef: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* ee07f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee07f5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee07f7: jne 0xee0cae */
  if (!zf) goto L_ee0cae;
L_ee07fd: /* ee07fd: lea edx, [esp + 0x17] */
  edx = (uint32_t)(esp + 0x17u);
/* ee0801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0802: lea ecx, [esp + 0x1a] */
  ecx = (uint32_t)(esp + 0x1au);
/* ee0806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0807: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* ee080e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee080f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0810: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee0812u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0812: mov edi, dword ptr [0xf0dbfc] */
  edi = R32((uint32_t)(0xf0dbfcu));
/* ee0818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee081b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee081c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee081eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee081e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0822: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee0824u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0824: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0827: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0829: push 0xf03f80 */
  { uint32_t v = 0xf03f80u; esp -= 4; W32(esp, v); }
/* ee082e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* ee0835: call dword ptr [0xf0dc1c] */
  esp -= 4; W32(esp, 0xee083bu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* ee083b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee083e: je 0xee0849 */
  if (zf) goto L_ee0849;
L_ee0840: /* ee0840: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee0843: je 0xee0849 */
  if (zf) goto L_ee0849;
L_ee0845: /* ee0845: xor esi, esi */
  esi = 0;
/* ee0847: jmp 0xee084e */
  goto L_ee084e;
L_ee0849: /* ee0849: mov esi, 1 */
  esi = 0x1u;
L_ee084e: /* ee084e: push 0xf03f7c */
  { uint32_t v = 0xf03f7cu; esp -= 4; W32(esp, v); }
/* ee0853: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* ee085a: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0860u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0860: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0862: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* ee0869: je 0xee08e7 */
  if (zf) goto L_ee08e7;
L_ee086b: /* ee086b: push 0xf03f60 */
  { uint32_t v = 0xf03f60u; esp -= 4; W32(esp, v); }
/* ee0870: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee0876u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee0876: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0878: jne 0xee0b38 */
  if (!zf) goto L_ee0b38;
L_ee087e: /* ee087e: push 0xf03f54 */
  { uint32_t v = 0xf03f54u; esp -= 4; W32(esp, v); }
/* ee0883: lea ecx, [esp + 0xfc] */
  ecx = (uint32_t)(esp + 0xfcu);
/* ee088a: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee0890u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee0890: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee0897: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0898: lea edx, [esp + 0x108] */
  edx = (uint32_t)(esp + 0x108u);
/* ee089f: mov bl, 0x16 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x16u) & 0xffu);
/* ee08a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee08a2: mov ecx, eax */
  ecx = eax;
/* ee08a4: mov byte ptr [esp + 0x21c], bl */
  W8((uint32_t)(esp + 0x21cu), (ebx & 0xffu));
/* ee08ab: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee08b1u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee08b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee08b2: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* ee08b9: mov byte ptr [esp + 0x218], 0x17 */
  W8((uint32_t)(esp + 0x218u), 0x17u);
/* ee08c1: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee08c7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee08c7: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* ee08ce: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee08d5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee08dbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee08db: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* ee08e2: jmp 0xee0b2a */
  goto L_ee0b2a;
L_ee08e7: /* ee08e7: push 0xf03f50 */
  { uint32_t v = 0xf03f50u; esp -= 4; W32(esp, v); }
/* ee08ec: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee08f2u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee08f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee08f4: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* ee08fb: je 0xee0979 */
  if (zf) goto L_ee0979;
L_ee08fd: /* ee08fd: push 0xf03f38 */
  { uint32_t v = 0xf03f38u; esp -= 4; W32(esp, v); }
/* ee0902: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee0908u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee0908: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee090a: jne 0xee0b38 */
  if (!zf) goto L_ee0b38;
L_ee0910: /* ee0910: push 0xf03f2c */
  { uint32_t v = 0xf03f2cu; esp -= 4; W32(esp, v); }
/* ee0915: lea ecx, [esp + 0x144] */
  ecx = (uint32_t)(esp + 0x144u);
/* ee091c: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee0922u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee0922: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee0929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee092a: lea edx, [esp + 0x12c] */
  edx = (uint32_t)(esp + 0x12cu);
/* ee0931: mov bl, 0x18 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x18u) & 0xffu);
/* ee0933: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0934: mov ecx, eax */
  ecx = eax;
/* ee0936: mov byte ptr [esp + 0x21c], bl */
  W8((uint32_t)(esp + 0x21cu), (ebx & 0xffu));
/* ee093d: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee0943u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee0943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0944: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* ee094b: mov byte ptr [esp + 0x218], 0x19 */
  W8((uint32_t)(esp + 0x218u), 0x19u);
/* ee0953: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee0959u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee0959: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* ee0960: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee0967: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee096du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee096d: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* ee0974: jmp 0xee0b2a */
  goto L_ee0b2a;
L_ee0979: /* ee0979: push 0xf03f28 */
  { uint32_t v = 0xf03f28u; esp -= 4; W32(esp, v); }
/* ee097e: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0984u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0986: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* ee098d: je 0xee0a0b */
  if (zf) goto L_ee0a0b;
L_ee098f: /* ee098f: push 0xf03f0c */
  { uint32_t v = 0xf03f0cu; esp -= 4; W32(esp, v); }
/* ee0994: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee099au); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee099a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee099c: jne 0xee0b38 */
  if (!zf) goto L_ee0b38;
L_ee09a2: /* ee09a2: push 0xf03f00 */
  { uint32_t v = 0xf03f00u; esp -= 4; W32(esp, v); }
/* ee09a7: lea ecx, [esp + 0x174] */
  ecx = (uint32_t)(esp + 0x174u);
/* ee09ae: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee09b4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee09b4: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee09bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee09bc: lea edx, [esp + 0x15c] */
  edx = (uint32_t)(esp + 0x15cu);
/* ee09c3: mov bl, 0x1a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1au) & 0xffu);
/* ee09c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee09c6: mov ecx, eax */
  ecx = eax;
/* ee09c8: mov byte ptr [esp + 0x21c], bl */
  W8((uint32_t)(esp + 0x21cu), (ebx & 0xffu));
/* ee09cf: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee09d5u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee09d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee09d6: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* ee09dd: mov byte ptr [esp + 0x218], 0x1b */
  W8((uint32_t)(esp + 0x218u), 0x1bu);
/* ee09e5: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee09ebu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee09eb: lea ecx, [esp + 0x158] */
  ecx = (uint32_t)(esp + 0x158u);
/* ee09f2: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee09f9: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee09ffu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee09ff: lea ecx, [esp + 0x170] */
  ecx = (uint32_t)(esp + 0x170u);
/* ee0a06: jmp 0xee0b2a */
  goto L_ee0b2a;
L_ee0a0b: /* ee0a0b: push 0xf03efc */
  { uint32_t v = 0xf03efcu; esp -= 4; W32(esp, v); }
/* ee0a10: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0a16u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0a16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0a18: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* ee0a1f: je 0xee0a9d */
  if (zf) goto L_ee0a9d;
L_ee0a21: /* ee0a21: push 0xf03ee4 */
  { uint32_t v = 0xf03ee4u; esp -= 4; W32(esp, v); }
/* ee0a26: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee0a2cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee0a2c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0a2e: jne 0xee0b38 */
  if (!zf) goto L_ee0b38;
L_ee0a34: /* ee0a34: push 0xf03f54 */
  { uint32_t v = 0xf03f54u; esp -= 4; W32(esp, v); }
/* ee0a39: lea ecx, [esp + 0x1a4] */
  ecx = (uint32_t)(esp + 0x1a4u);
/* ee0a40: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee0a46u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee0a46: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0a4e: lea edx, [esp + 0x18c] */
  edx = (uint32_t)(esp + 0x18cu);
/* ee0a55: mov bl, 0x1c */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1cu) & 0xffu);
/* ee0a57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0a58: mov ecx, eax */
  ecx = eax;
/* ee0a5a: mov byte ptr [esp + 0x21c], bl */
  W8((uint32_t)(esp + 0x21cu), (ebx & 0xffu));
/* ee0a61: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee0a67u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee0a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0a68: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* ee0a6f: mov byte ptr [esp + 0x218], 0x1d */
  W8((uint32_t)(esp + 0x218u), 0x1du);
/* ee0a77: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee0a7du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee0a7d: lea ecx, [esp + 0x188] */
  ecx = (uint32_t)(esp + 0x188u);
/* ee0a84: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee0a8b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0a91u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0a91: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
/* ee0a98: jmp 0xee0b2a */
  goto L_ee0b2a;
L_ee0a9d: /* ee0a9d: push 0xf03ee0 */
  { uint32_t v = 0xf03ee0u; esp -= 4; W32(esp, v); }
/* ee0aa2: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee0aa8u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee0aa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0aaa: je 0xee0b38 */
  if (zf) goto L_ee0b38;
L_ee0ab0: /* ee0ab0: push 0xf03ec4 */
  { uint32_t v = 0xf03ec4u; esp -= 4; W32(esp, v); }
/* ee0ab5: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* ee0abc: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee0ac2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee0ac2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0ac4: jne 0xee0b38 */
  if (!zf) goto L_ee0b38;
L_ee0ac6: /* ee0ac6: push 0xf03eb8 */
  { uint32_t v = 0xf03eb8u; esp -= 4; W32(esp, v); }
/* ee0acb: lea ecx, [esp + 0x1d4] */
  ecx = (uint32_t)(esp + 0x1d4u);
/* ee0ad2: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee0ad8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee0ad8: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* ee0adf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0ae0: lea edx, [esp + 0x1bc] */
  edx = (uint32_t)(esp + 0x1bcu);
/* ee0ae7: mov bl, 0x1e */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1eu) & 0xffu);
/* ee0ae9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0aea: mov ecx, eax */
  ecx = eax;
/* ee0aec: mov byte ptr [esp + 0x21c], bl */
  W8((uint32_t)(esp + 0x21cu), (ebx & 0xffu));
/* ee0af3: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee0af9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee0af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0afa: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* ee0b01: mov byte ptr [esp + 0x218], 0x1f */
  W8((uint32_t)(esp + 0x218u), 0x1fu);
/* ee0b09: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee0b0fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee0b0f: lea ecx, [esp + 0x1b8] */
  ecx = (uint32_t)(esp + 0x1b8u);
/* ee0b16: mov byte ptr [esp + 0x214], bl */
  W8((uint32_t)(esp + 0x214u), (ebx & 0xffu));
/* ee0b1d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0b23u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0b23: lea ecx, [esp + 0x1d0] */
  ecx = (uint32_t)(esp + 0x1d0u);
L_ee0b2a: /* ee0b2a: mov byte ptr [esp + 0x214], 0x14 */
  W8((uint32_t)(esp + 0x214u), 0x14u);
/* ee0b32: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0b38u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee0b38: /* ee0b38: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* ee0b3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0b3d: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xee0b42u); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* ee0b42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0b44: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* ee0b4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0b4c: lea ecx, [esp + 0x1fc] */
  ecx = (uint32_t)(esp + 0x1fcu);
/* ee0b53: mov dword ptr [esp + 0x1fc], eax */
  W32((uint32_t)(esp + 0x1fcu), eax);
/* ee0b5a: call 0xed1861 */
  esp -= 4; W32(esp, 0xee0b5fu); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* ee0b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0b60: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* ee0b64: mov byte ptr [esp + 0x218], 0x20 */
  W8((uint32_t)(esp + 0x218u), 0x20u);
/* ee0b6c: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee0b72u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee0b72: lea ecx, [esp + 0x1e8] */
  ecx = (uint32_t)(esp + 0x1e8u);
/* ee0b79: mov byte ptr [esp + 0x214], 0x14 */
  W8((uint32_t)(esp + 0x214u), 0x14u);
/* ee0b81: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee0b87u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee0b87: movzx edx, word ptr [esp + 0x18] */
  edx = (uint32_t)(R16((uint32_t)(esp + 0x18u)));
/* ee0b8c: movzx eax, word ptr [esp + 0x1c] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x1cu)));
/* ee0b91: movzx ecx, byte ptr [esp + 0x16] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x16u)));
/* ee0b96: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* ee0b9d: movzx edx, byte ptr [esp + 0x17] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x17u)));
/* ee0ba2: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* ee0ba9: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* ee0bb0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee0bb4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ee0bb8: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* ee0bbf: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* ee0bc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0bc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0bc4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee0bc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0bc6: movzx eax, byte ptr [esp + 0x1c] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x1cu)));
/* ee0bcb: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* ee0bd2: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ee0bd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee0bd8: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ee0bda: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* ee0be1: jmp 0xee0bf5 */
  goto L_ee0bf5;
L_ee0be3: /* ee0be3: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* ee0be6: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee0bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee0beb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0bec: call dword ptr [0xf0dfb0] */
  esp -= 4; W32(esp, 0xee0bf2u); SPILL(); f_6c509c(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFServerResponseLine@@@Z */ RELOAD();
/* ee0bf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee0bf5: /* ee0bf5: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee0bf8: lea eax, [esp + 0xd0] */
  eax = (uint32_t)(esp + 0xd0u);
/* ee0bff: mov ecx, esp */
  ecx = esp;
/* ee0c01: mov dword ptr [esp + 0x80], esp */
  W32((uint32_t)(esp + 0x80u), esp);
/* ee0c08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee0c09: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xee0c0fu); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* ee0c0f: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* ee0c13: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee0c16: call 0xed1203 */
  esp -= 4; W32(esp, 0xee0c1bu); SPILL(); f_ed1203(); if (g_unwind) return; RELOAD();
/* ee0c1b: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee0c1f: mov dword ptr [esp + 0x214], 0xffffffff */
  W32((uint32_t)(esp + 0x214u), 0xffffffffu);
/* ee0c2a: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xee0c30u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ee0c30: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee0c34: mov ebx, 3 */
  ebx = 0x3u;
L_ee0c39: /* ee0c39: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* ee0c3c: cmp edx, dword ptr [ecx + 0x5c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee0c3f: jne 0xee0c82 */
  if (!zf) goto L_ee0c82;
L_ee0c41: /* ee0c41: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* ee0c44: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0c46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0c48: lea edx, [esp + 0xd8] */
  edx = (uint32_t)(esp + 0xd8u);
/* ee0c4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0c50: lea edx, [ecx + 0x3c4] */
  edx = (uint32_t)(ecx + 0x3c4u);
/* ee0c56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0c57: mov edx, dword ptr [0xf07d90] */
  edx = R32((uint32_t)(0xf07d90u));
/* ee0c5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee0c5e: mov byte ptr [esp + 0xe4], bl */
  W8((uint32_t)(esp + 0xe4u), (ebx & 0xffu));
/* ee0c65: mov dword ptr [esp + 0xe8], 0 */
  W32((uint32_t)(esp + 0xe8u), 0x0u);
/* ee0c70: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xee0c73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0c73: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee0c77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0c7b: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xee0c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee0c7e: /* ee0c7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_ee0c82: /* ee0c82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee0c84: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xee0c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0c87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee0c89: jne 0xedff30 */
  if (!zf) goto L_edff30;
L_ee0c8f: /* ee0c8f: mov ecx, dword ptr [esp + 0x20c] */
  ecx = R32((uint32_t)(esp + 0x20cu));
/* ee0c96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee0c9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee0c9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee0c9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee0ca0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee0ca1: mov esp, ebp */
  esp = ebp;
/* ee0ca3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee0ca4: ret  */
  esp += 4; SPILL(); return;
L_ee0ca5: /* ee0ca5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee0ca7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0ca9: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xee0cacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee0cac: jmp 0xee0cb5 */
  goto L_ee0cb5;
L_ee0cae: /* ee0cae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee0cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee0cb2: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xee0cb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee0cb5: /* ee0cb5: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* ee0cb9: mov dword ptr [esp + 0x214], 0xffffffff */
  W32((uint32_t)(esp + 0x214u), 0xffffffffu);
/* ee0cc4: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xee0ccau); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
L_ee0cca: /* ee0cca: mov ecx, dword ptr [esp + 0x20c] */
  ecx = R32((uint32_t)(esp + 0x20cu));
/* ee0cd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee0cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee0cd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee0cda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee0cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee0cdc: mov esp, ebp */
  esp = ebp;
/* ee0cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee0cdf: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1070(void) {
  LOAD_REGS();
L_ee1070: /* ee1070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1071: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee1072: mov ebp, dword ptr [0xf0dba4] */
  ebp = R32((uint32_t)(0xf0dba4u));
/* ee1078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1079: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee107a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ee107e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee1080: mov esi, ecx */
  esi = ecx;
/* ee1082: jge 0xee1098 */
  if ((sf == of)) goto L_ee1098;
L_ee1084: /* ee1084: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ee1089: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee108e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ee1093: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee1095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1095: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee1098: /* ee1098: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee109b: jle 0xee10b1 */
  if ((zf || sf != of)) goto L_ee10b1;
L_ee109d: /* ee109d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ee10a2: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee10a7: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ee10ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee10aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee10ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee10b1: /* ee10b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ee10b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee10b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* ee10bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee10bd: jle 0xee10d3 */
  if ((zf || sf != of)) goto L_ee10d3;
L_ee10bf: /* ee10bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ee10c4: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee10c9: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ee10ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xee10d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee10d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee10d3: /* ee10d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee10d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee10d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee10d7: mov ecx, esi */
  ecx = esi;
/* ee10d9: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xee10dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ee10df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee10e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee10e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee10e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee10e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee1110(void) {
  LOAD_REGS();
L_ee1110: /* ee1110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1112: push 0xeeebcb */
  { uint32_t v = 0xeeebcbu; esp -= 4; W32(esp, v); }
/* ee1117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee111d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee111e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1125: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee1128: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1129: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee112a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee112b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee112c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee1130: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee1136u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee1136: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* ee113a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee113d: xor ebp, ebp */
  ebp = 0;
/* ee113f: xor esi, esi */
  esi = 0;
/* ee1141: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee1143: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* ee1147: mov ebx, 1 */
  ebx = 0x1u;
/* ee114c: jle 0xee11b2 */
  if ((zf || sf != of)) goto L_ee11b2;
L_ee114e: /* ee114e: mov edi, edi */
  edi = edi;
L_ee1150: /* ee1150: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee1152: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee1154: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1155: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* ee1159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee115a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* ee115e: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xee1164u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ee1164: push 0xf04018 */
  { uint32_t v = 0xf04018u; esp -= 4; W32(esp, v); }
/* ee1169: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ee116d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee116e: mov ecx, eax */
  ecx = eax;
/* ee1170: mov byte ptr [esp + 0x44], bl */
  W8((uint32_t)(esp + 0x44u), (ebx & 0xffu));
/* ee1174: call dword ptr [0xf0dc00] */
  esp -= 4; W32(esp, 0xee117au); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* ee117a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee117b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ee117f: mov byte ptr [esp + 0x40], 2 */
  W8((uint32_t)(esp + 0x40u), 0x2u);
/* ee1184: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee118au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee118a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* ee118e: mov byte ptr [esp + 0x3c], bl */
  W8((uint32_t)(esp + 0x3cu), (ebx & 0xffu));
/* ee1192: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee1198u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee1198: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* ee119c: mov byte ptr [esp + 0x3c], 0 */
  W8((uint32_t)(esp + 0x3cu), 0x0u);
/* ee11a1: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee11a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee11a7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee11aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee11ab: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ee11ae: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee11b0: jl 0xee1150 */
  if ((sf != of)) goto L_ee1150;
L_ee11b2: /* ee11b2: mov eax, dword ptr [0xf0d998] */
  eax = R32((uint32_t)(0xf0d998u));
/* ee11b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee11b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee11bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee11bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee11be: push 0xf03ff4 */
  { uint32_t v = 0xf03ff4u; esp -= 4; W32(esp, v); }
/* ee11c3: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee11c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee11c6: mov eax, dword ptr [0xf0d998] */
  eax = R32((uint32_t)(0xf0d998u));
/* ee11cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee11cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee11ce: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* ee11d2: push 0xf03ff4 */
  { uint32_t v = 0xf03ff4u; esp -= 4; W32(esp, v); }
/* ee11d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee11d8: call dword ptr [0xf0d99c] */
  esp -= 4; W32(esp, 0xee11deu); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* ee11de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee11e1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee11e5: mov dword ptr [esp + 0x3c], 0xffffffff */
  W32((uint32_t)(esp + 0x3cu), 0xffffffffu);
/* ee11ed: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee11f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee11f3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ee11f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee11f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee11f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee11fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee11fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee1202: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1205: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1250(void) {
  LOAD_REGS();
L_ee1250: /* ee1250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1252: push 0xeeebe9 */
  { uint32_t v = 0xeeebe9u; esp -= 4; W32(esp, v); }
/* ee1257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee125d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee125e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1266: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1268: mov esi, ecx */
  esi = ecx;
/* ee126a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee126b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ee126f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* ee1272: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee1274: mov ebx, dword ptr [0xf0dba4] */
  ebx = R32((uint32_t)(0xf0dba4u));
/* ee127a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ee1282: jge 0xee1298 */
  if ((sf == of)) goto L_ee1298;
L_ee1284: /* ee1284: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ee1289: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee128e: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ee1293: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee1295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1295: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee1298: /* ee1298: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee129b: jle 0xee12b1 */
  if ((zf || sf != of)) goto L_ee12b1;
L_ee129d: /* ee129d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ee12a2: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee12a7: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ee12ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee12aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee12ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee12b1: /* ee12b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee12b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee12b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee12b6: mov ecx, esi */
  ecx = esi;
/* ee12b8: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xee12beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ee12be: mov ecx, esi */
  ecx = esi;
/* ee12c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* ee12c8: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee12ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee12ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee12d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee12d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee12d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee12d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee12dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee12df: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1310(void) {
  LOAD_REGS();
L_ee1310: /* ee1310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee1311: mov ebp, esp */
  ebp = esp;
/* ee1313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1315: push 0xeeec00 */
  { uint32_t v = 0xeeec00u; esp -= 4; W32(esp, v); }
/* ee131a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee1320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1328: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee132b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee132c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ee132f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1330: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee1333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1334: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee1337: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee1339: xor edi, edi */
  edi = 0;
/* ee133b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee133c: mov ecx, esi */
  ecx = esi;
/* ee133e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee1341: call dword ptr [0xf0db30] */
  esp -= 4; W32(esp, 0xee1347u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* ee1347: cmp dword ptr [ebx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee134a: je 0xee139f */
  if (zf) goto L_ee139f;
L_ee134c: /* ee134c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee134f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1351: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee1357u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee1357: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee135a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee135d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* ee1360: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee1362: mov ecx, esi */
  ecx = esi;
/* ee1364: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* ee1367: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xee136du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ee136d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ee1370: mov edi, dword ptr [0xf0dbf4] */
  edi = R32((uint32_t)(0xf0dbf4u));
L_ee1376: /* ee1376: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee1379: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee137c: jge 0xee13c8 */
  if ((sf == of)) goto L_ee13c8;
L_ee137e: /* ee137e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee1380: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee1382: mov ecx, esi */
  ecx = esi;
/* ee1384: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee138au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee138a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee138c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ee138f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1391: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee1393u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1393: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee1396: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1399: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee139a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee139d: jmp 0xee1376 */
  goto L_ee1376;
L_ee139f: /* ee139f: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* ee13a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee13a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee13a4: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee13aau); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee13aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee13ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ee13b0: /* ee13b0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee13b3: jge 0xee13c8 */
  if ((sf == of)) goto L_ee13c8;
L_ee13b5: /* ee13b5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee13b7: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* ee13ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee13bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee13bc: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee13c2u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee13c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee13c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee13c6: jmp 0xee13b0 */
  goto L_ee13b0;
L_ee13c8: /* ee13c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee13cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee13cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee13cd: mov eax, ebx */
  eax = ebx;
/* ee13cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee13d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee13d7: mov esp, ebp */
  esp = ebp;
/* ee13d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee13da: ret  */
  esp += 4; SPILL(); return;
}

void f_ee13db(void) {
  LOAD_REGS();
L_ee13db: /* ee13db: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee13de: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee13e3: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* ee13e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee13e7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ee13ea: call 0xeec520 */
  esp -= 4; W32(esp, 0xee13efu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee13ef(); return;
}

void f_ee13ef(void) {
  LOAD_REGS();
L_ee13ef: /* ee13ef: push 0xef614c */
  { uint32_t v = 0xef614cu; esp -= 4; W32(esp, v); }
/* ee13f4: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee13f9: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee13ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee13ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1402: xor edi, edi */
  edi = 0;
/* ee1404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1405: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1406: call 0xeec520 */
  esp -= 4; W32(esp, 0xee140bu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee140b: guest_badaddr(0xee140b); return;
}

void f_ee1450(void) {
  LOAD_REGS();
L_ee1450: /* ee1450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee1451: mov ebp, esp */
  ebp = esp;
/* ee1453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1455: push 0xeeec19 */
  { uint32_t v = 0xeeec19u; esp -= 4; W32(esp, v); }
/* ee145a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee1460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1468: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee146b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee146c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee146d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee1470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1471: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ee1474: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee1477: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee1479: xor ebx, ebx */
  ebx = 0;
/* ee147b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee147c: mov ecx, esi */
  ecx = esi;
/* ee147e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee1481: call dword ptr [0xf0db30] */
  esp -= 4; W32(esp, 0xee1487u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* ee1487: cmp dword ptr [edi + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee148a: je 0xee1524 */
  if (zf) goto L_ee1524;
L_ee1490: /* ee1490: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee1493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1494: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1495: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee149bu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee149b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee149e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee14a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee14a2: mov ecx, esi */
  ecx = esi;
/* ee14a4: call 0xed15af */
  esp -= 4; W32(esp, 0xee14a9u); SPILL(); f_ed15af(); if (g_unwind) return; RELOAD();
/* ee14a9: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee14ac: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
L_ee14b2: /* ee14b2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee14b5: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee14b8: jge 0xee1581 */
  if ((sf == of)) goto L_ee1581;
L_ee14be: /* ee14be: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee14c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee14c2: mov ecx, esi */
  ecx = esi;
/* ee14c4: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee14cau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee14ca: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* ee14cd: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ee14cf: mov esi, eax */
  esi = eax;
/* ee14d1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* ee14d4: je 0xee14f1 */
  if (zf) goto L_ee14f1;
L_ee14d6: /* ee14d6: mov ecx, esi */
  ecx = esi;
/* ee14d8: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee14deu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee14de: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee14e1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee14e5: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee14ebu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee14eb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee14ef: jmp 0xee14f3 */
  goto L_ee14f3;
L_ee14f1: /* ee14f1: xor esi, esi */
  esi = 0;
L_ee14f3: /* ee14f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee14f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee14f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee14f8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee14fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee14fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee14fd: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee1500: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1502: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee1504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1504: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1507: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee150a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee150b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee150c: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee1512u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee1512: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee1515: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee1518: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ee151b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee151e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee151f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee1522: jmp 0xee14b2 */
  goto L_ee14b2;
L_ee1524: /* ee1524: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* ee1527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1529: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee152fu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee152f: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
/* ee1535: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1538: xor edi, edi */
  edi = 0;
/* ee153a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ee1540: /* ee1540: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee1543: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee1545: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* ee1548: jge 0xee157e */
  if ((sf == of)) goto L_ee157e;
L_ee154a: /* ee154a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee154d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ee154f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee1552: mov esi, edi */
  esi = edi;
/* ee1554: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* ee1557: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee1559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee155a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee155b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee155du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee155d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1560: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee1563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1565: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee1567u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1567: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee156a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee156d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee156e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee156f: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee1575u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee1575: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee1578: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee157b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee157c: jmp 0xee1540 */
  goto L_ee1540;
L_ee157e: /* ee157e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_ee1581: /* ee1581: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee1584: mov eax, edi */
  eax = edi;
/* ee1586: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1587: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1588: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee158f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee1590: mov esp, ebp */
  esp = ebp;
/* ee1592: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee1593: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1594(void) {
  LOAD_REGS();
L_ee1594: /* ee1594: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee1597: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee159c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee159f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee15a0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ee15a3: call 0xeec520 */
  esp -= 4; W32(esp, 0xee15a8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee15a8(); return;
}

void f_ee15a8(void) {
  LOAD_REGS();
L_ee15a8: /* ee15a8: push 0xef6164 */
  { uint32_t v = 0xef6164u; esp -= 4; W32(esp, v); }
/* ee15ad: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee15b2: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee15b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee15b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee15bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee15bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee15bf: call 0xeec520 */
  esp -= 4; W32(esp, 0xee15c4u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee15c4: guest_badaddr(0xee15c4); return;
}

void f_ee1630(void) {
  LOAD_REGS();
L_ee1630: /* ee1630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1632: push 0xeeec3b */
  { uint32_t v = 0xeeec3bu; esp -= 4; W32(esp, v); }
/* ee1637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee163d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee163e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1647: mov esi, ecx */
  esi = ecx;
/* ee1649: call 0xed10fa */
  esp -= 4; W32(esp, 0xee164eu); SPILL(); f_ed10fa(); if (g_unwind) return; RELOAD();
/* ee164e: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* ee1654: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee1656: je 0xee165f */
  if (zf) goto L_ee165f;
L_ee1658: /* ee1658: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee165a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee165c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xee165fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee165f: /* ee165f: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee1665: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee1667: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee1669: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee166e: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* ee1670: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee1672u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1672: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* ee1676: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee1678: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee1680: je 0xee168c */
  if (zf) goto L_ee168c;
L_ee1682: /* ee1682: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1683: mov ecx, eax */
  ecx = eax;
/* ee1685: call 0xed17da */
  esp -= 4; W32(esp, 0xee168au); SPILL(); f_ed17da(); if (g_unwind) return; RELOAD();
/* ee168a: jmp 0xee168e */
  goto L_ee168e;
L_ee168c: /* ee168c: xor eax, eax */
  eax = 0;
L_ee168e: /* ee168e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee1692: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* ee1698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1699: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee16a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee16a3: ret  */
  esp += 4; SPILL(); return;
}

void f_ee16d0(void) {
  LOAD_REGS();
L_ee16d0: /* ee16d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee16d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee16d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee16d3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ee16d7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee16da: xor ebx, ebx */
  ebx = 0;
/* ee16dc: mov byte ptr [esp + 0xb], bl */
  W8((uint32_t)(esp + 0xbu), (ebx & 0xffu));
/* ee16e0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee16e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee16e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee16e5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee16e8: lea eax, [esp + 0xf] */
  eax = (uint32_t)(esp + 0xfu);
/* ee16ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee16ed: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee16f2: mov edi, ecx */
  edi = ecx;
/* ee16f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee16f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee16f8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee16fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee16fb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee16fe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee16ff: mov eax, edx */
  eax = edx;
/* ee1701: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee1704: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee1707: jne 0xee171e */
  if (!zf) goto L_ee171e;
L_ee1709: /* ee1709: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee170c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee170d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee170e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee1711: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee1717: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1718: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee171eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee171e: /* ee171e: mov ecx, edi */
  ecx = edi;
/* ee1720: call 0xed13ed */
  esp -= 4; W32(esp, 0xee1725u); SPILL(); f_ed13ed(); if (g_unwind) return; RELOAD();
/* ee1725: mov esi, dword ptr [edi + 0x3b0] */
  esi = R32((uint32_t)(edi + 0x3b0u));
/* ee172b: mov al, byte ptr [esp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* ee172f: mov dword ptr [edi + 0x3c0], ebx */
  W32((uint32_t)(edi + 0x3c0u), ebx);
/* ee1735: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* ee1738: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1739: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ee173c: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* ee173f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1740: mov byte ptr [esi + 0x65], al */
  W8((uint32_t)(esi + 0x65u), (eax & 0xffu));
/* ee1743: call 0xed14c4 */
  esp -= 4; W32(esp, 0xee1748u); SPILL(); f_ed14c4(); if (g_unwind) return; RELOAD();
/* ee1748: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* ee174a: mov ecx, edi */
  ecx = edi;
/* ee174c: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee1752u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee1752: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1753: mov ecx, esi */
  ecx = esi;
/* ee1755: call dword ptr [ebx + 0x40] */
  { uint32_t t = R32((uint32_t)(ebx + 0x40u)); esp -= 4; W32(esp, 0xee1758u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee1758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1759: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee175a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee175b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ee175c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee1790(void) {
  LOAD_REGS();
L_ee1790: /* ee1790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1791: mov esi, ecx */
  esi = ecx;
/* ee1793: call 0xed1591 */
  esp -= 4; W32(esp, 0xee1798u); SPILL(); f_ed1591(); if (g_unwind) return; RELOAD();
/* ee1798: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee179d: je 0xee17ac */
  if (zf) goto L_ee17ac;
L_ee179f: /* ee179f: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee17a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee17a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee17a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee17a9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee17acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee17ac: /* ee17ac: mov eax, esi */
  eax = esi;
/* ee17ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee17af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee17d0(void) {
  LOAD_REGS();
L_ee17d0: /* ee17d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee17d2: push 0xeeec58 */
  { uint32_t v = 0xeeec58u; esp -= 4; W32(esp, v); }
/* ee17d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee17dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee17de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee17e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee17e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee17e7: mov esi, ecx */
  esi = ecx;
/* ee17e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee17ed: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* ee17f0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee17f8: call 0xed155f */
  esp -= 4; W32(esp, 0xee17fdu); SPILL(); f_ed155f(); if (g_unwind) return; RELOAD();
/* ee17fd: mov ecx, esi */
  ecx = esi;
/* ee17ff: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee1807: call 0xed1640 */
  esp -= 4; W32(esp, 0xee180cu); SPILL(); f_ed1640(); if (g_unwind) return; RELOAD();
/* ee180c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee1810: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1811: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee1818: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee181b: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1840(void) {
  LOAD_REGS();
L_ee1840: /* ee1840: mov eax, 0xf0a340 */
  eax = 0xf0a340u;
/* ee1845: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1860(void) {
  LOAD_REGS();
L_ee1860: /* ee1860: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee1865: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee1867: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee186b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ee186f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee1871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee1873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1874: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ee1878: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee187a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee187b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee187c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee187d: push 0xf0a340 */
  { uint32_t v = 0xf0a340u; esp -= 4; W32(esp, v); }
/* ee1882: call dword ptr [0xf0dad0] */
  esp -= 4; W32(esp, 0xee1888u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* ee1888: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee188b: ret  */
  esp += 4; SPILL(); return;
}

void f_ee18a0(void) {
  LOAD_REGS();
L_ee18a0: /* ee18a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ee18a4: ret  */
  esp += 4; SPILL(); return;
}

void f_ee18c0(void) {
  LOAD_REGS();
L_ee18c0: /* ee18c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee18c2: push 0xeeec79 */
  { uint32_t v = 0xeeec79u; esp -= 4; W32(esp, v); }
/* ee18c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee18cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee18ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee18d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee18d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee18d7: mov esi, ecx */
  esi = ecx;
/* ee18d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee18dd: mov dword ptr [esi], 0xef6190 */
  W32((uint32_t)(esi), 0xef6190u);
/* ee18e3: mov dword ptr [esi + 0x28], 0xef6180 */
  W32((uint32_t)(esi + 0x28u), 0xef6180u);
/* ee18ea: mov dword ptr [esi + 0x2c], 0xef617c */
  W32((uint32_t)(esi + 0x2cu), 0xef617cu);
/* ee18f1: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee18f9: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xee18ffu); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ee18ff: mov ecx, esi */
  ecx = esi;
/* ee1901: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee1909: call dword ptr [0xf0e008] */
  esp -= 4; W32(esp, 0xee190fu); SPILL(); f_6c2dfb(); if (g_unwind) return; /* Engine!??1UNetConnection@@UAE@XZ */ RELOAD();
/* ee190f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee1913: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1914: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee191b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee191e: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1940(void) {
  LOAD_REGS();
L_ee1940: /* ee1940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1941: mov esi, ecx */
  esi = ecx;
/* ee1943: call dword ptr [0xf0e00c] */
  esp -= 4; W32(esp, 0xee1949u); SPILL(); f_6c3625(); if (g_unwind) return; /* Engine!??0UNetConnection@@QAE@XZ */ RELOAD();
/* ee1949: mov dword ptr [esi], 0xef6190 */
  W32((uint32_t)(esi), 0xef6190u);
/* ee194f: mov dword ptr [esi + 0x28], 0xef6180 */
  W32((uint32_t)(esi + 0x28u), 0xef6180u);
/* ee1956: mov dword ptr [esi + 0x2c], 0xef617c */
  W32((uint32_t)(esi + 0x2cu), 0xef617cu);
/* ee195d: mov eax, esi */
  eax = esi;
/* ee195f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1960: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1980(void) {
  LOAD_REGS();
L_ee1980: /* ee1980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1982: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ee1986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1987: mov esi, ecx */
  esi = ecx;
/* ee1989: call dword ptr [0xf0e010] */
  esp -= 4; W32(esp, 0xee198fu); SPILL(); f_6c8f0d(); if (g_unwind) return; /* Engine!??0UNetConnection@@QAE@ABV0@@Z */ RELOAD();
/* ee198f: mov dword ptr [esi], 0xef6190 */
  W32((uint32_t)(esi), 0xef6190u);
/* ee1995: mov dword ptr [esi + 0x28], 0xef6180 */
  W32((uint32_t)(esi + 0x28u), 0xef6180u);
/* ee199c: mov dword ptr [esi + 0x2c], 0xef617c */
  W32((uint32_t)(esi + 0x2cu), 0xef617cu);
/* ee19a3: lea eax, [edi + 0x3f30] */
  eax = (uint32_t)(edi + 0x3f30u);
/* ee19a9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ee19ab: lea ecx, [esi + 0x3f30] */
  ecx = (uint32_t)(esi + 0x3f30u);
/* ee19b1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* ee19b3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ee19b6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* ee19b9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* ee19bc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* ee19bf: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ee19c2: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* ee19c5: mov ecx, dword ptr [edi + 0x3f40] */
  ecx = R32((uint32_t)(edi + 0x3f40u));
/* ee19cb: mov dword ptr [esi + 0x3f40], ecx */
  W32((uint32_t)(esi + 0x3f40u), ecx);
/* ee19d1: mov edx, dword ptr [edi + 0x3f44] */
  edx = R32((uint32_t)(edi + 0x3f44u));
/* ee19d7: mov dword ptr [esi + 0x3f44], edx */
  W32((uint32_t)(esi + 0x3f44u), edx);
/* ee19dd: mov eax, dword ptr [edi + 0x3f48] */
  eax = R32((uint32_t)(edi + 0x3f48u));
/* ee19e3: mov dword ptr [esi + 0x3f48], eax */
  W32((uint32_t)(esi + 0x3f48u), eax);
/* ee19e9: mov ecx, dword ptr [edi + 0x3f4c] */
  ecx = R32((uint32_t)(edi + 0x3f4cu));
/* ee19ef: mov dword ptr [esi + 0x3f4c], ecx */
  W32((uint32_t)(esi + 0x3f4cu), ecx);
/* ee19f5: mov edx, dword ptr [edi + 0x3f50] */
  edx = R32((uint32_t)(edi + 0x3f50u));
/* ee19fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee19fc: mov dword ptr [esi + 0x3f50], edx */
  W32((uint32_t)(esi + 0x3f50u), edx);
/* ee1a02: mov eax, esi */
  eax = esi;
/* ee1a04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1a05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1a40(void) {
  LOAD_REGS();
L_ee1a40: /* ee1a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1a41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1a42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ee1a46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1a47: mov esi, ecx */
  esi = ecx;
/* ee1a49: call dword ptr [0xf0e014] */
  esp -= 4; W32(esp, 0xee1a4fu); SPILL(); f_6cac95(); if (g_unwind) return; /* Engine!??4UNetConnection@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee1a4f: lea eax, [edi + 0x3f30] */
  eax = (uint32_t)(edi + 0x3f30u);
/* ee1a55: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ee1a57: lea ecx, [esi + 0x3f30] */
  ecx = (uint32_t)(esi + 0x3f30u);
/* ee1a5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* ee1a5f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ee1a62: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* ee1a65: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* ee1a68: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* ee1a6b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ee1a6e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* ee1a71: mov ecx, dword ptr [edi + 0x3f40] */
  ecx = R32((uint32_t)(edi + 0x3f40u));
/* ee1a77: mov dword ptr [esi + 0x3f40], ecx */
  W32((uint32_t)(esi + 0x3f40u), ecx);
/* ee1a7d: mov edx, dword ptr [edi + 0x3f44] */
  edx = R32((uint32_t)(edi + 0x3f44u));
/* ee1a83: mov dword ptr [esi + 0x3f44], edx */
  W32((uint32_t)(esi + 0x3f44u), edx);
/* ee1a89: mov eax, dword ptr [edi + 0x3f48] */
  eax = R32((uint32_t)(edi + 0x3f48u));
/* ee1a8f: mov dword ptr [esi + 0x3f48], eax */
  W32((uint32_t)(esi + 0x3f48u), eax);
/* ee1a95: mov ecx, dword ptr [edi + 0x3f4c] */
  ecx = R32((uint32_t)(edi + 0x3f4cu));
/* ee1a9b: mov dword ptr [esi + 0x3f4c], ecx */
  W32((uint32_t)(esi + 0x3f4cu), ecx);
/* ee1aa1: mov edx, dword ptr [edi + 0x3f50] */
  edx = R32((uint32_t)(edi + 0x3f50u));
/* ee1aa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1aa8: mov dword ptr [esi + 0x3f50], edx */
  W32((uint32_t)(esi + 0x3f50u), edx);
/* ee1aae: mov eax, esi */
  eax = esi;
/* ee1ab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1ab1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1ae0(void) {
  LOAD_REGS();
L_ee1ae0: /* ee1ae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1ae1: mov esi, ecx */
  esi = ecx;
/* ee1ae3: call 0xed1339 */
  esp -= 4; W32(esp, 0xee1ae8u); SPILL(); f_ed1339(); if (g_unwind) return; RELOAD();
/* ee1ae8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee1aed: je 0xee1afe */
  if (zf) goto L_ee1afe;
L_ee1aef: /* ee1aef: push 0x3f54 */
  { uint32_t v = 0x3f54u; esp -= 4; W32(esp, v); }
/* ee1af4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1af5: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee1afbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee1afb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee1afe: /* ee1afe: mov eax, esi */
  eax = esi;
/* ee1b00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1b01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1b20(void) {
  LOAD_REGS();
L_ee1b20: /* ee1b20: mov eax, 0xf0a870 */
  eax = 0xf0a870u;
/* ee1b25: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1b40(void) {
  LOAD_REGS();
L_ee1b40: /* ee1b40: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee1b45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee1b47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ee1b4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ee1b4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee1b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee1b53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1b54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ee1b58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee1b5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee1b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1b5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1b5d: push 0xf0a870 */
  { uint32_t v = 0xf0a870u; esp -= 4; W32(esp, v); }
/* ee1b62: call dword ptr [0xf0dad0] */
  esp -= 4; W32(esp, 0xee1b68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* ee1b68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1b6b: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1b80(void) {
  LOAD_REGS();
L_ee1b80: /* ee1b80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ee1b84: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1ba0(void) {
  LOAD_REGS();
L_ee1ba0: /* ee1ba0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1ba2: push 0xeeec99 */
  { uint32_t v = 0xeeec99u; esp -= 4; W32(esp, v); }
/* ee1ba7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee1bad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1bae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1bb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1bb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1bb7: mov esi, ecx */
  esi = ecx;
/* ee1bb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee1bbd: mov dword ptr [esi], 0xef6248 */
  W32((uint32_t)(esi), 0xef6248u);
/* ee1bc3: mov dword ptr [esi + 0x28], 0xef6244 */
  W32((uint32_t)(esi + 0x28u), 0xef6244u);
/* ee1bca: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee1bd2: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xee1bd8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ee1bd8: mov ecx, esi */
  ecx = esi;
/* ee1bda: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee1be2: call dword ptr [0xf0dda0] */
  esp -= 4; W32(esp, 0xee1be8u); SPILL(); f_6c97c8(); if (g_unwind) return; /* Engine!??1UNetDriver@@UAE@XZ */ RELOAD();
/* ee1be8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee1bec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1bed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee1bf4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1bf7: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1c20(void) {
  LOAD_REGS();
L_ee1c20: /* ee1c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1c21: mov esi, ecx */
  esi = ecx;
/* ee1c23: call dword ptr [0xf0dd9c] */
  esp -= 4; W32(esp, 0xee1c29u); SPILL(); f_6c1780(); if (g_unwind) return; /* Engine!??0UNetDriver@@QAE@XZ */ RELOAD();
/* ee1c29: mov dword ptr [esi], 0xef6248 */
  W32((uint32_t)(esi), 0xef6248u);
/* ee1c2f: mov dword ptr [esi + 0x28], 0xef6244 */
  W32((uint32_t)(esi + 0x28u), 0xef6244u);
/* ee1c36: mov eax, esi */
  eax = esi;
/* ee1c38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1c39: ret  */
  esp += 4; SPILL(); return;
}

void f_ee1c50(void) {
  LOAD_REGS();
L_ee1c50: /* ee1c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1c51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1c52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ee1c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1c57: mov esi, ecx */
  esi = ecx;
/* ee1c59: call dword ptr [0xf0dd98] */
  esp -= 4; W32(esp, 0xee1c5fu); SPILL(); f_6cbac8(); if (g_unwind) return; /* Engine!??0UNetDriver@@QAE@ABV0@@Z */ RELOAD();
/* ee1c5f: mov dword ptr [esi], 0xef6248 */
  W32((uint32_t)(esi), 0xef6248u);
/* ee1c65: mov dword ptr [esi + 0x28], 0xef6244 */
  W32((uint32_t)(esi + 0x28u), 0xef6244u);
/* ee1c6c: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* ee1c72: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* ee1c78: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* ee1c7e: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* ee1c84: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* ee1c8a: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* ee1c90: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* ee1c96: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* ee1c9c: lea ecx, [edi + 0xac] */
  ecx = (uint32_t)(edi + 0xacu);
/* ee1ca2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee1ca4: lea edx, [esi + 0xac] */
  edx = (uint32_t)(esi + 0xacu);
/* ee1caa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ee1cac: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ee1caf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* ee1cb2: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ee1cb5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* ee1cb8: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* ee1cbb: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* ee1cbe: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* ee1cc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1cc5: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* ee1ccb: mov eax, esi */
  eax = esi;
/* ee1ccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1cce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1d10(void) {
  LOAD_REGS();
L_ee1d10: /* ee1d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1d11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1d12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ee1d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1d17: mov esi, ecx */
  esi = ecx;
/* ee1d19: call dword ptr [0xf0dd94] */
  esp -= 4; W32(esp, 0xee1d1fu); SPILL(); f_6c8d5f(); if (g_unwind) return; /* Engine!??4UNetDriver@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee1d1f: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* ee1d25: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* ee1d2b: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* ee1d31: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* ee1d37: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* ee1d3d: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* ee1d43: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* ee1d49: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* ee1d4f: lea ecx, [edi + 0xac] */
  ecx = (uint32_t)(edi + 0xacu);
/* ee1d55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee1d57: lea edx, [esi + 0xac] */
  edx = (uint32_t)(esi + 0xacu);
/* ee1d5d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ee1d5f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ee1d62: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* ee1d65: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ee1d68: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* ee1d6b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* ee1d6e: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* ee1d71: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* ee1d77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1d78: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* ee1d7e: mov eax, esi */
  eax = esi;
/* ee1d80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1d81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1db0(void) {
  LOAD_REGS();
L_ee1db0: /* ee1db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1db1: mov esi, ecx */
  esi = ecx;
/* ee1db3: call 0xed16fe */
  esp -= 4; W32(esp, 0xee1db8u); SPILL(); f_ed16fe(); if (g_unwind) return; RELOAD();
/* ee1db8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee1dbd: je 0xee1dce */
  if (zf) goto L_ee1dce;
L_ee1dbf: /* ee1dbf: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* ee1dc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1dc5: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee1dcbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee1dcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee1dce: /* ee1dce: mov eax, esi */
  eax = esi;
/* ee1dd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1dd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1df0(void) {
  LOAD_REGS();
L_ee1df0: /* ee1df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1df1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* ee1df5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee1df8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1df9: mov esi, ecx */
  esi = ecx;
/* ee1dfb: je 0xee1e30 */
  if (zf) goto L_ee1e30;
L_ee1dfd: /* ee1dfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* ee1e00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1e01: push 0xed16fe */
  { uint32_t v = 0xed16feu; esp -= 4; W32(esp, v); }
/* ee1e06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* ee1e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1e0a: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* ee1e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1e10: call 0xeec596 */
  esp -= 4; W32(esp, 0xee1e15u); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* ee1e15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee1e18: je 0xee1e28 */
  if (zf) goto L_ee1e28;
L_ee1e1a: /* ee1e1a: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee1e20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee1e22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee1e24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1e25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee1e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee1e28: /* ee1e28: mov eax, edi */
  eax = edi;
/* ee1e2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1e2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1e2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee1e2d: ret 4 */
  esp += 8; SPILL(); return;
L_ee1e30: /* ee1e30: mov ecx, esi */
  ecx = esi;
/* ee1e32: call 0xed16fe */
  esp -= 4; W32(esp, 0xee1e37u); SPILL(); f_ed16fe(); if (g_unwind) return; RELOAD();
/* ee1e37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee1e3a: je 0xee1e4b */
  if (zf) goto L_ee1e4b;
L_ee1e3c: /* ee1e3c: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* ee1e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1e42: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee1e48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee1e48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee1e4b: /* ee1e4b: mov eax, esi */
  eax = esi;
/* ee1e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1e4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee1e4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1e80(void) {
  LOAD_REGS();
L_ee1e80: /* ee1e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee1e81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1e82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1e83: mov ebx, ecx */
  ebx = ecx;
/* ee1e85: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee1e88: mov edi, esp */
  edi = esp;
/* ee1e8a: mov ecx, 6 */
  ecx = 0x6u;
/* ee1e8f: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* ee1e93: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ee1e95: mov ecx, ebx */
  ecx = ebx;
/* ee1e97: call 0xed18d9 */
  esp -= 4; W32(esp, 0xee1e9cu); SPILL(); f_ed18d9(); if (g_unwind) return; RELOAD();
/* ee1e9c: mov al, byte ptr [esp + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x28u))) & 0xffu);
/* ee1ea0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee1ea1: mov byte ptr [ebx + 0x28], al */
  W8((uint32_t)(ebx + 0x28u), (eax & 0xffu));
/* ee1ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1ea5: mov dword ptr [ebx], 0xef62f4 */
  W32((uint32_t)(ebx), 0xef62f4u);
/* ee1eab: mov eax, ebx */
  eax = ebx;
/* ee1ead: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee1eae: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_ee1ed0(void) {
  LOAD_REGS();
L_ee1ed0: /* ee1ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1ed1: mov esi, ecx */
  esi = ecx;
/* ee1ed3: call 0xed1028 */
  esp -= 4; W32(esp, 0xee1ed8u); SPILL(); f_ed1028(); if (g_unwind) return; RELOAD();
/* ee1ed8: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* ee1edc: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* ee1edf: mov dword ptr [esi], 0xef62f4 */
  W32((uint32_t)(esi), 0xef62f4u);
/* ee1ee5: mov eax, esi */
  eax = esi;
/* ee1ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1ee8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee1f00(void) {
  LOAD_REGS();
L_ee1f00: /* ee1f00: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ee1f20(void) {
  LOAD_REGS();
L_ee1f20: /* ee1f20: jmp 0xed1640 */
  SPILL(); f_ed1640(); return;
}

void f_ee1f40(void) {
  LOAD_REGS();
L_ee1f40: /* ee1f40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee1f42: push 0xeeecb8 */
  { uint32_t v = 0xeeecb8u; esp -= 4; W32(esp, v); }
/* ee1f47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee1f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1f4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee1f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1f57: mov esi, ecx */
  esi = ecx;
/* ee1f59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee1f5d: call 0xed1028 */
  esp -= 4; W32(esp, 0xee1f62u); SPILL(); f_ed1028(); if (g_unwind) return; RELOAD();
/* ee1f62: xor eax, eax */
  eax = 0;
/* ee1f64: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* ee1f67: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee1f6b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ee1f6f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ee1f73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1f74: mov ecx, esi */
  ecx = esi;
/* ee1f76: mov dword ptr [esi], 0xef6318 */
  W32((uint32_t)(esi), 0xef6318u);
/* ee1f7c: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* ee1f7f: call 0xed1a50 */
  esp -= 4; W32(esp, 0xee1f84u); SPILL(); f_ed1a50(); if (g_unwind) return; RELOAD();
/* ee1f84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee1f88: mov eax, esi */
  eax = esi;
/* ee1f8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee1f8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee1f92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee1f95: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee1fc0(void) {
  LOAD_REGS();
L_ee1fc0: /* ee1fc0: jmp 0xed1640 */
  SPILL(); f_ed1640(); return;
}

void f_ee1fe0(void) {
  LOAD_REGS();
L_ee1fe0: /* ee1fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1fe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1fe2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ee1fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee1fe7: mov edi, dword ptr [0xf0dbfc] */
  edi = R32((uint32_t)(0xf0dbfcu));
/* ee1fed: lea eax, [esp + 0xa] */
  eax = (uint32_t)(esp + 0xau);
/* ee1ff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee1ff2: lea ecx, [esp + 0xf] */
  ecx = (uint32_t)(esp + 0xfu);
/* ee1ff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee1ff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee1ff8: mov byte ptr [esp + 0x17], 4 */
  W8((uint32_t)(esp + 0x17u), 0x4u);
/* ee1ffd: mov byte ptr [esp + 0x16], 0x50 */
  W8((uint32_t)(esp + 0x16u), 0x50u);
/* ee2002: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee2004u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2008: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee200au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee200a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee200c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee200f: mov ecx, esi */
  ecx = esi;
/* ee2011: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee2014u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2014: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2016: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ee2017: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2030(void) {
  LOAD_REGS();
L_ee2030: /* ee2030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee2031: mov ebp, esp */
  ebp = esp;
/* ee2033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee2035: push 0xeeecd0 */
  { uint32_t v = 0xeeecd0u; esp -= 4; W32(esp, v); }
/* ee203a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee2040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee2048: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee204b: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* ee2051: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee2053: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2055: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2056: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee2059: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee2060: je 0xee20ae */
  if (zf) goto L_ee20ae;
L_ee2062: /* ee2062: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ee2065: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee2067: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2068: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xee206bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee206b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee206e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee2075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee2078: mov esp, ebp */
  esp = ebp;
/* ee207a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee207b: ret 4 */
  esp += 8; SPILL(); return;
L_ee20ae: /* ee20ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee20b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee20b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee20b3: xor eax, eax */
  eax = 0;
/* ee20b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee20bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee20bd: mov esp, ebp */
  esp = ebp;
/* ee20bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee20c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee207e(void) {
  LOAD_REGS();
L_ee207e: /* ee207e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee2081: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee2086: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee2089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee208a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee208d: call 0xeec520 */
  esp -= 4; W32(esp, 0xee2092u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee2092(); return;
}

void f_ee2092(void) {
  LOAD_REGS();
L_ee2092: /* ee2092: push 0xef633c */
  { uint32_t v = 0xef633cu; esp -= 4; W32(esp, v); }
/* ee2097: push 0xf04110 */
  { uint32_t v = 0xf04110u; esp -= 4; W32(esp, v); }
/* ee209c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee20a2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee20a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee20a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee20a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee20a9: call 0xeec520 */
  esp -= 4; W32(esp, 0xee20aeu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee20ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee20b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee20b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee20b3: xor eax, eax */
  eax = 0;
/* ee20b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee20bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee20bd: mov esp, ebp */
  esp = ebp;
/* ee20bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee20c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2100(void) {
  LOAD_REGS();
L_ee2100: /* ee2100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2101: mov esi, ecx */
  esi = ecx;
/* ee2103: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* ee2109: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee210b: je 0xee2114 */
  if (zf) goto L_ee2114;
L_ee210d: /* ee210d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee210f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee2111: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xee2114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee2114: /* ee2114: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* ee211e: mov ecx, esi */
  ecx = esi;
/* ee2120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2121: jmp dword ptr [0xf0df2c] */
  SPILL(); f_6c1ee7(); return; /* Engine!?Destroy@AActor@@UAEXXZ */
}

void f_ee2140(void) {
  LOAD_REGS();
L_ee2140: /* ee2140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2141: mov esi, ecx */
  esi = ecx;
/* ee2143: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* ee2149: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee214b: je 0xee2154 */
  if (zf) goto L_ee2154;
L_ee214d: /* ee214d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee214f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee2151: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xee2154u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee2154: /* ee2154: mov dword ptr [esi + 0x33c], 0 */
  W32((uint32_t)(esi + 0x33cu), 0x0u);
/* ee215e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee215f: ret  */
  esp += 4; SPILL(); return;
}

void f_ee2170(void) {
  LOAD_REGS();
L_ee2170: /* ee2170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ee2174: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee2176: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* ee2179: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* ee217c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2190(void) {
  LOAD_REGS();
L_ee2190: /* ee2190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ee2194: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2196: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* ee2199: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee219b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee21b0(void) {
  LOAD_REGS();
L_ee21b0: /* ee21b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee21b1: mov esi, ecx */
  esi = ecx;
/* ee21b3: call dword ptr [0xf0dfbc] */
  esp -= 4; W32(esp, 0xee21b9u); SPILL(); f_6c627b(); if (g_unwind) return; /* Engine!??1FKeyValuePair@@QAE@XZ */ RELOAD();
/* ee21b9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee21be: je 0xee21cd */
  if (zf) goto L_ee21cd;
L_ee21c0: /* ee21c0: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee21c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee21c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee21c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee21ca: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee21cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee21cd: /* ee21cd: mov eax, esi */
  eax = esi;
/* ee21cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee21d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee21f0(void) {
  LOAD_REGS();
L_ee21f0: /* ee21f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee21f1: mov esi, ecx */
  esi = ecx;
/* ee21f3: call dword ptr [0xf0dfc0] */
  esp -= 4; W32(esp, 0xee21f9u); SPILL(); f_6c3265(); if (g_unwind) return; /* Engine!??1FPlayerResponseLine@@QAE@XZ */ RELOAD();
/* ee21f9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee21fe: je 0xee220d */
  if (zf) goto L_ee220d;
L_ee2200: /* ee2200: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee2205: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee2207: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2209: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee220a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee220du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee220d: /* ee220d: mov eax, esi */
  eax = esi;
/* ee220f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2210: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2230(void) {
  LOAD_REGS();
L_ee2230: /* ee2230: mov eax, 1 */
  eax = 0x1u;
/* ee2235: ret  */
  esp += 4; SPILL(); return;
}

void f_ee2250(void) {
  LOAD_REGS();
L_ee2250: /* ee2250: mov eax, 1 */
  eax = 0x1u;
/* ee2255: ret  */
  esp += 4; SPILL(); return;
}

void f_ee2270(void) {
  LOAD_REGS();
L_ee2270: /* ee2270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ee2274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee2276: je 0xee228f */
  if (zf) goto L_ee228f;
L_ee2278: /* ee2278: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* ee227b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee227d: je 0xee228f */
  if (zf) goto L_ee228f;
L_ee227f: /* ee227f: nop  */
L_ee2280: /* ee2280: cmp ecx, 0xf0a870 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0a870u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2286: je 0xee2291 */
  if (zf) goto L_ee2291;
L_ee2288: /* ee2288: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* ee228b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee228d: jne 0xee2280 */
  if (!zf) goto L_ee2280;
L_ee228f: /* ee228f: xor eax, eax */
  eax = 0;
L_ee2291: /* ee2291: ret  */
  esp += 4; SPILL(); return;
}

void f_ee22b0(void) {
  LOAD_REGS();
L_ee22b0: /* ee22b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee22b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee22b6: je 0xee22bd */
  if (zf) goto L_ee22bd;
L_ee22b8: /* ee22b8: jmp 0xed11ae */
  SPILL(); f_ed11ae(); return;
L_ee22bd: /* ee22bd: ret  */
  esp += 4; SPILL(); return;
}

void f_ee22d0(void) {
  LOAD_REGS();
L_ee22d0: /* ee22d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee22d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* ee22d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee22d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee22d9: mov esi, ecx */
  esi = ecx;
/* ee22db: je 0xee2310 */
  if (zf) goto L_ee2310;
L_ee22dd: /* ee22dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* ee22e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee22e1: push 0xed1339 */
  { uint32_t v = 0xed1339u; esp -= 4; W32(esp, v); }
/* ee22e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* ee22e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee22ea: push 0x3f54 */
  { uint32_t v = 0x3f54u; esp -= 4; W32(esp, v); }
/* ee22ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee22f0: call 0xeec596 */
  esp -= 4; W32(esp, 0xee22f5u); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* ee22f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee22f8: je 0xee2308 */
  if (zf) goto L_ee2308;
L_ee22fa: /* ee22fa: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee2300: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee2302: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2304: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2305: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee2308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee2308: /* ee2308: mov eax, edi */
  eax = edi;
/* ee230a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee230b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee230c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee230d: ret 4 */
  esp += 8; SPILL(); return;
L_ee2310: /* ee2310: mov ecx, esi */
  ecx = esi;
/* ee2312: call 0xed1339 */
  esp -= 4; W32(esp, 0xee2317u); SPILL(); f_ed1339(); if (g_unwind) return; RELOAD();
/* ee2317: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee231a: je 0xee232b */
  if (zf) goto L_ee232b;
L_ee231c: /* ee231c: push 0x3f54 */
  { uint32_t v = 0x3f54u; esp -= 4; W32(esp, v); }
/* ee2321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2322: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee2328u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee2328: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee232b: /* ee232b: mov eax, esi */
  eax = esi;
/* ee232d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee232e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee232f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2360(void) {
  LOAD_REGS();
L_ee2360: /* ee2360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee2364: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee2366: je 0xee236d */
  if (zf) goto L_ee236d;
L_ee2368: /* ee2368: jmp 0xed1753 */
  SPILL(); f_ed1753(); return;
L_ee236d: /* ee236d: ret  */
  esp += 4; SPILL(); return;
}

void f_ee2380(void) {
  LOAD_REGS();
L_ee2380: /* ee2380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee2382: push 0xeeecf1 */
  { uint32_t v = 0xeeecf1u; esp -= 4; W32(esp, v); }
/* ee2387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee238d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee238e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee2395: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee2398: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* ee239c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee239d: mov esi, ecx */
  esi = ecx;
/* ee239f: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* ee23a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee23a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee23a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee23a6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee23aa: call 0xed1136 */
  esp -= 4; W32(esp, 0xee23afu); SPILL(); f_ed1136(); if (g_unwind) return; RELOAD();
/* ee23af: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* ee23b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee23b4: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee23b7: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ee23bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee23bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee23bd: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* ee23c5: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee23cbu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee23cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee23ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee23cf: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee23d5u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee23d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee23d8: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* ee23dc: call 0xed13a7 */
  esp -= 4; W32(esp, 0xee23e1u); SPILL(); f_ed13a7(); if (g_unwind) return; RELOAD();
/* ee23e1: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* ee23e5: mov dword ptr [esp + 0x64], 1 */
  W32((uint32_t)(esp + 0x64u), 0x1u);
/* ee23ed: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xee23f3u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* ee23f3: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* ee23f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee23f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee23ff: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2402: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ee2440(void) {
  LOAD_REGS();
L_ee2440: /* ee2440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2441: mov esi, ecx */
  esi = ecx;
/* ee2443: call 0xed118b */
  esp -= 4; W32(esp, 0xee2448u); SPILL(); f_ed118b(); if (g_unwind) return; RELOAD();
/* ee2448: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee244d: je 0xee245c */
  if (zf) goto L_ee245c;
L_ee244f: /* ee244f: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee2454: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee2456: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2459: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee245cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee245c: /* ee245c: mov eax, esi */
  eax = esi;
/* ee245e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee245f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2480(void) {
  LOAD_REGS();
L_ee2480: /* ee2480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2481: mov esi, ecx */
  esi = ecx;
/* ee2483: call 0xed19dd */
  esp -= 4; W32(esp, 0xee2488u); SPILL(); f_ed19dd(); if (g_unwind) return; RELOAD();
/* ee2488: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee248d: je 0xee249c */
  if (zf) goto L_ee249c;
L_ee248f: /* ee248f: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee2494: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee2496: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2499: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee249cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee249c: /* ee249c: mov eax, esi */
  eax = esi;
/* ee249e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee249f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee24c0(void) {
  LOAD_REGS();
L_ee24c0: /* ee24c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee24c1: mov ebp, esp */
  ebp = esp;
/* ee24c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee24c5: push 0xeeed19 */
  { uint32_t v = 0xeeed19u; esp -= 4; W32(esp, v); }
/* ee24ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee24d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee24d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee24d8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee24db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee24dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee24dd: mov esi, ecx */
  esi = ecx;
/* ee24df: cmp dword ptr [esi + 0x64], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee24e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee24e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee24e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee24ee: jne 0xee253b */
  if (!zf) goto L_ee253b;
L_ee24f0: /* ee24f0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee24f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee24f4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee24f7: mov byte ptr [ebp - 0x11], 2 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x2u);
/* ee24fb: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee2501u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee2501: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* ee2504: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* ee2507: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2509: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee250d: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee2513u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee2513: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2516: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee2519: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee251a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee251b: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xee2521u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ee2521: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee2524: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2526: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2529: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee252cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee252c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee252f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee2533: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee2539u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee2539: jmp 0xee255c */
  goto L_ee255c;
L_ee253b: /* ee253b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee253d: add esi, 0x78 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee2540: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ee2542: mov ecx, esi */
  ecx = esi;
/* ee2544: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xee254au); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ee254a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee254d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* ee2550: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee2552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2553: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ee2556: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee255cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_ee255c: /* ee255c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee255f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2561: mov eax, 1 */
  eax = 0x1u;
/* ee2566: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee256d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee256e: mov esp, ebp */
  esp = ebp;
/* ee2570: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee2571: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2574(void) {
  LOAD_REGS();
L_ee2574: /* ee2574: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee2577: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee257c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee257f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2580: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee2583: call 0xeec520 */
  esp -= 4; W32(esp, 0xee2588u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee2588(); return;
}

void f_ee2588(void) {
  LOAD_REGS();
L_ee2588: /* ee2588: push 0xef637c */
  { uint32_t v = 0xef637cu; esp -= 4; W32(esp, v); }
/* ee258d: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee2592: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee2598u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee2598: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee259b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee259d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee259f: call 0xeec520 */
  esp -= 4; W32(esp, 0xee25a4u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee25a4: guest_badaddr(0xee25a4); return;
}

void f_ee25f0(void) {
  LOAD_REGS();
L_ee25f0: /* ee25f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee25f1: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ee25f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee25f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee25f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee25f7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ee25fb: lea ecx, [esp + 0xf] */
  ecx = (uint32_t)(esp + 0xfu);
/* ee25ff: mov byte ptr [esp + 0xf], 1 */
  W8((uint32_t)(esp + 0xfu), 0x1u);
/* ee2604: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* ee2607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2608: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2609: add esi, 0x3e4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3e4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee260f: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee2615u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee2615: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee2618: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee261b: xor ebx, ebx */
  ebx = 0;
/* ee261d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee261f: jle 0xee2671 */
  if ((zf || sf != of)) goto L_ee2671;
L_ee2621: /* ee2621: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee2622: xor ebp, ebp */
  ebp = 0;
L_ee2624: /* ee2624: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ee2626: mov ecx, edi */
  ecx = edi;
/* ee2628: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xee262bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee262b: cmp eax, 0x1c2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee2630: jle 0xee2648 */
  if ((zf || sf != of)) goto L_ee2648;
L_ee2632: /* ee2632: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee2634: mov ecx, edi */
  ecx = edi;
/* ee2636: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee2639u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2639: lea ecx, [esp + 0x13] */
  ecx = (uint32_t)(esp + 0x13u);
/* ee263d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee263e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee263f: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee2645u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee2645: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee2648: /* ee2648: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee264a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee264c: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* ee264f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2652: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xee2658u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ee2658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee265b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee265c: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xee2662u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ee2662: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee2665: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2668: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee2669: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ee266c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee266e: jl 0xee2624 */
  if ((sf != of)) goto L_ee2624;
L_ee2670: /* ee2670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ee2671: /* ee2671: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee2673: mov ecx, edi */
  ecx = edi;
/* ee2675: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee2678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2678: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2679: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee267a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee267b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ee267c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee26b0(void) {
  LOAD_REGS();
L_ee26b0: /* ee26b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee26b1: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ee26b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee26b5: mov byte ptr [esp + 7], 2 */
  W8((uint32_t)(esp + 0x7u), 0x2u);
/* ee26ba: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* ee26bd: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* ee26c3: add edi, 0x3f0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ee26c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee26cb: je 0xee2738 */
  if (zf) goto L_ee2738;
L_ee26cd: /* ee26cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee26ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee26cf: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ee26d3: lea ecx, [esp + 0xf] */
  ecx = (uint32_t)(esp + 0xfu);
/* ee26d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee26d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee26d9: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee26dfu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee26df: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee26e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee26e5: xor ebx, ebx */
  ebx = 0;
/* ee26e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee26e9: jle 0xee272f */
  if ((zf || sf != of)) goto L_ee272f;
L_ee26eb: /* ee26eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee26ec: xor ebp, ebp */
  ebp = 0;
/* ee26ee: mov edi, edi */
  edi = edi;
L_ee26f0: /* ee26f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee26f2: mov ecx, esi */
  ecx = esi;
/* ee26f4: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xee26f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee26f7: cmp eax, 0x1c2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee26fc: jle 0xee2714 */
  if ((zf || sf != of)) goto L_ee2714;
L_ee26fe: /* ee26fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee2700: mov ecx, esi */
  ecx = esi;
/* ee2702: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee2705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2705: lea ecx, [esp + 0x13] */
  ecx = (uint32_t)(esp + 0x13u);
/* ee2709: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee270a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee270b: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee2711u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee2711: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee2714: /* ee2714: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ee2716: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee2718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2719: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee271a: call dword ptr [0xf0dfb8] */
  esp -= 4; W32(esp, 0xee2720u); SPILL(); f_6c6f73(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFPlayerResponseLine@@@Z */ RELOAD();
/* ee2720: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee2723: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2726: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee2727: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ee272a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee272c: jl 0xee26f0 */
  if ((sf != of)) goto L_ee26f0;
L_ee272e: /* ee272e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ee272f: /* ee272f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee2731: mov ecx, esi */
  ecx = esi;
/* ee2733: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee2736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2736: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2737: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ee2738: /* ee2738: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2739: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ee273a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2770(void) {
  LOAD_REGS();
L_ee2770: /* ee2770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee2771: mov ebp, esp */
  ebp = esp;
/* ee2773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee2775: push 0xeeed30 */
  { uint32_t v = 0xeeed30u; esp -= 4; W32(esp, v); }
/* ee277a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee2780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee2788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee278b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee278c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee278d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee278e: mov edi, ecx */
  edi = ecx;
/* ee2790: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* ee2793: mov ecx, dword ptr [0xf07d28] */
  ecx = R32((uint32_t)(0xf07d28u));
/* ee2799: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* ee279c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee279f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee27a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee27a2: mov ecx, esi */
  ecx = esi;
/* ee27a4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee27ab: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee27b1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee27b1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee27b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee27b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee27b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee27b8: mov ecx, esi */
  ecx = esi;
/* ee27ba: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee27bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee27bd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ee27c0: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* ee27c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee27c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee27c6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ee27c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee27ca: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee27cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee27ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ee27d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee27d2: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xee27d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee27d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee27d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee27d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee27da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee27e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee27e2: mov esp, ebp */
  esp = ebp;
/* ee27e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee27e5: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ee27e8(void) {
  LOAD_REGS();
L_ee27e8: /* ee27e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee27eb: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee27f0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee27f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee27f4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee27f7: call 0xeec520 */
  esp -= 4; W32(esp, 0xee27fcu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee27fc(); return;
}

void f_ee27fc(void) {
  LOAD_REGS();
L_ee27fc: /* ee27fc: push 0xef63a0 */
  { uint32_t v = 0xef63a0u; esp -= 4; W32(esp, v); }
/* ee2801: push 0xf0406c */
  { uint32_t v = 0xf0406cu; esp -= 4; W32(esp, v); }
/* ee2806: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee280cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee280c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee280f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2813: call 0xeec520 */
  esp -= 4; W32(esp, 0xee2818u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee2818: guest_badaddr(0xee2818); return;
}

void f_ee2850(void) {
  LOAD_REGS();
L_ee2850: /* ee2850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2852: mov esi, ecx */
  esi = ecx;
/* ee2854: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee2857: xor eax, eax */
  eax = 0;
/* ee2859: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee285a: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* ee285d: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* ee2863: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* ee2869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee286a: lea edi, [esi + 0xb4] */
  edi = (uint32_t)(esi + 0xb4u);
/* ee2870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2871: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* ee287b: call 0xed14c4 */
  esp -= 4; W32(esp, 0xee2880u); SPILL(); f_ed14c4(); if (g_unwind) return; RELOAD();
/* ee2880: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* ee2882: mov ecx, edi */
  ecx = edi;
/* ee2884: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee288au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee288a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee288b: mov ecx, esi */
  ecx = esi;
/* ee288d: call dword ptr [ebx + 0x40] */
  { uint32_t t = R32((uint32_t)(ebx + 0x40u)); esp -= 4; W32(esp, 0xee2890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2890: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2892: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee2893: ret  */
  esp += 4; SPILL(); return;
}

void f_ee28c0(void) {
  LOAD_REGS();
L_ee28c0: /* ee28c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee28c2: push 0xeeed49 */
  { uint32_t v = 0xeeed49u; esp -= 4; W32(esp, v); }
/* ee28c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee28cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee28ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee28d5: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee28d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee28d9: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* ee28dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee28de: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* ee28e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee28e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee28e4: mov edi, ecx */
  edi = ecx;
/* ee28e6: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* ee28eb: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee28f1u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee28f1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* ee28f4: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* ee28f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee28fa: add edx, 0x39c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee2900: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2901: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee2905: call dword ptr [0xf0df58] */
  esp -= 4; W32(esp, 0xee290bu); SPILL(); f_6c2847(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@ABU0@@Z */ RELOAD();
/* ee290b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee290d: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* ee2911: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* ee2919: call 0xed17d5 */
  esp -= 4; W32(esp, 0xee291eu); SPILL(); f_ed17d5(); if (g_unwind) return; RELOAD();
/* ee291e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2920: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* ee2924: call 0xed1a28 */
  esp -= 4; W32(esp, 0xee2929u); SPILL(); f_ed1a28(); if (g_unwind) return; RELOAD();
/* ee2929: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* ee292d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee292e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee292f: call dword ptr [0xf0dfb0] */
  esp -= 4; W32(esp, 0xee2935u); SPILL(); f_6c509c(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFServerResponseLine@@@Z */ RELOAD();
/* ee2935: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee2937: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee293a: mov ecx, esi */
  ecx = esi;
/* ee293c: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee293fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee293f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ee2943: mov dword ptr [esp + 0x74], 0xffffffff */
  W32((uint32_t)(esp + 0x74u), 0xffffffffu);
/* ee294b: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xee2951u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ee2951: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* ee2955: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2956: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2957: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee295e: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2961: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee29a0(void) {
  LOAD_REGS();
L_ee29a0: /* ee29a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee29a2: push 0xeeed79 */
  { uint32_t v = 0xeeed79u; esp -= 4; W32(esp, v); }
/* ee29a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee29ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee29ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee29b5: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee29b8: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* ee29bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee29bd: mov esi, ecx */
  esi = ecx;
/* ee29bf: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* ee29c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee29c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee29c5: mov ecx, esi */
  ecx = esi;
/* ee29c7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ee29cb: call 0xed10c8 */
  esp -= 4; W32(esp, 0xee29d0u); SPILL(); f_ed10c8(); if (g_unwind) return; RELOAD();
/* ee29d0: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* ee29d4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* ee29d7: mov dword ptr [esi], 0xef63f8 */
  W32((uint32_t)(esi), 0xef63f8u);
/* ee29dd: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* ee29e0: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* ee29e3: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* ee29e9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee29eb: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* ee29f3: jl 0xee2a54 */
  if ((sf != of)) goto L_ee2a54;
L_ee29f5: /* ee29f5: mov edx, dword ptr [0xf07d28] */
  edx = R32((uint32_t)(0xf07d28u));
/* ee29fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee29fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee29fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee29ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2a01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2a03: mov edi, ecx */
  edi = ecx;
/* ee2a05: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* ee2a07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2a08: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee2a0eu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee2a0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2a0f: mov ecx, edi */
  ecx = edi;
/* ee2a11: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xee2a14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2a14: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ee2a17: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* ee2a1a: mov ecx, dword ptr [edx + 0x340] */
  ecx = R32((uint32_t)(edx + 0x340u));
/* ee2a20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2a21: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ee2a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2a25: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ee2a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2a29: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* ee2a2d: call 0xed1136 */
  esp -= 4; W32(esp, 0xee2a32u); SPILL(); f_ed1136(); if (g_unwind) return; RELOAD();
/* ee2a32: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee2a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2a37: mov ecx, esi */
  ecx = esi;
/* ee2a39: mov byte ptr [esp + 0x74], 1 */
  W8((uint32_t)(esp + 0x74u), 0x1u);
/* ee2a3e: call 0xed17df */
  esp -= 4; W32(esp, 0xee2a43u); SPILL(); f_ed17df(); if (g_unwind) return; RELOAD();
/* ee2a43: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* ee2a47: mov byte ptr [esp + 0x70], 2 */
  W8((uint32_t)(esp + 0x70u), 0x2u);
/* ee2a4c: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xee2a52u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* ee2a52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2a53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ee2a54: /* ee2a54: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* ee2a58: mov eax, esi */
  eax = esi;
/* ee2a5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2a5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee2a62: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2a65: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ee2ab0(void) {
  LOAD_REGS();
L_ee2ab0: /* ee2ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2ab1: mov esi, ecx */
  esi = ecx;
/* ee2ab3: call 0xed1537 */
  esp -= 4; W32(esp, 0xee2ab8u); SPILL(); f_ed1537(); if (g_unwind) return; RELOAD();
/* ee2ab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee2abd: je 0xee2acc */
  if (zf) goto L_ee2acc;
L_ee2abf: /* ee2abf: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee2ac4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee2ac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2ac9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee2accu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee2acc: /* ee2acc: mov eax, esi */
  eax = esi;
/* ee2ace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2acf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2af0(void) {
  LOAD_REGS();
L_ee2af0: /* ee2af0: jmp 0xed1640 */
  SPILL(); f_ed1640(); return;
}

void f_ee2b10(void) {
  LOAD_REGS();
L_ee2b10: /* ee2b10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee2b11: mov ebp, esp */
  ebp = esp;
/* ee2b13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee2b15: push 0xeeede9 */
  { uint32_t v = 0xeeede9u; esp -= 4; W32(esp, v); }
/* ee2b1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee2b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2b21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee2b28: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee2b2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2b2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2b2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2b2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee2b31: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee2b34: call 0xed1979 */
  esp -= 4; W32(esp, 0xee2b39u); SPILL(); f_ed1979(); if (g_unwind) return; RELOAD();
/* ee2b39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b3c: mov dword ptr [eax], 0xef6498 */
  W32((uint32_t)(eax), 0xef6498u);
/* ee2b42: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b45: xor ebx, ebx */
  ebx = 0;
/* ee2b47: mov dword ptr [ecx + 0x54], ebx */
  W32((uint32_t)(ecx + 0x54u), ebx);
/* ee2b4a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b4d: mov dword ptr [edx + 0x58], ebx */
  W32((uint32_t)(edx + 0x58u), ebx);
/* ee2b50: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b53: mov dword ptr [eax + 0x5c], ebx */
  W32((uint32_t)(eax + 0x5cu), ebx);
/* ee2b56: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b59: mov dword ptr [ecx + 0x60], ebx */
  W32((uint32_t)(ecx + 0x60u), ebx);
/* ee2b5c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b5f: mov dword ptr [edx + 0x64], ebx */
  W32((uint32_t)(edx + 0x64u), ebx);
/* ee2b62: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b65: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee2b68: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* ee2b6b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b6e: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee2b71: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee2b74: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ee2b76: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* ee2b79: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ee2b7c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b7f: add eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee2b82: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ee2b84: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* ee2b87: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ee2b8a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b8d: mov dword ptr [edx + 0x8c], ebx */
  W32((uint32_t)(edx + 0x8cu), ebx);
/* ee2b93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2b96: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* ee2ba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2ba3: mov dword ptr [ecx + 0x94], ebx */
  W32((uint32_t)(ecx + 0x94u), ebx);
/* ee2ba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bac: mov dword ptr [edx + 0xa8], ebx */
  W32((uint32_t)(edx + 0xa8u), ebx);
/* ee2bb2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bb5: mov dword ptr [eax + 0xac], ebx */
  W32((uint32_t)(eax + 0xacu), ebx);
/* ee2bbb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bbe: mov dword ptr [ecx + 0xb0], ebx */
  W32((uint32_t)(ecx + 0xb0u), ebx);
/* ee2bc4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bc7: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee2bcd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee2bd1: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee2bd7u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee2bd7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bda: mov dword ptr [edx + 0xc0], ebx */
  W32((uint32_t)(edx + 0xc0u), ebx);
/* ee2be0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2be3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee2be5: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee2be9: call 0xed1947 */
  esp -= 4; W32(esp, 0xee2beeu); SPILL(); f_ed1947(); if (g_unwind) return; RELOAD();
/* ee2bee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bf1: mov dword ptr [eax + 0x84], ebx */
  W32((uint32_t)(eax + 0x84u), ebx);
/* ee2bf7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2bfa: mov dword ptr [ecx + 0x88], 0xc04e0000 */
  W32((uint32_t)(ecx + 0x88u), 0xc04e0000u);
/* ee2c04: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee2c06: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee2c09: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ee2c0c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ee2c0f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee2c12: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee2c14: jge 0xee2c1c */
  if ((sf == of)) goto L_ee2c1c;
L_ee2c16: /* ee2c16: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee2c1c: /* ee2c1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee2c1f: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ee2c25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee2c27: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ee2c2a: jge 0xee2c32 */
  if ((sf == of)) goto L_ee2c32;
L_ee2c2c: /* ee2c2c: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee2c32: /* ee2c32: mov ecx, dword ptr [0xf0daf8] */
  ecx = R32((uint32_t)(0xf0daf8u));
/* ee2c38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ee2c3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2c3d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* ee2c3f: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ee2c45: fstp qword ptr [edx + 0x98] */
  WF64((uint32_t)(edx + 0x98u), ST0); FPOP();
/* ee2c4b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2c4e: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* ee2c51: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* ee2c57: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* ee2c5a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2c5c: je 0xee2cdd */
  if (zf) goto L_ee2cdd;
L_ee2c5e: /* ee2c5e: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_ee2c61: /* ee2c61: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2c63: je 0xee2cdd */
  if (zf) goto L_ee2cdd;
L_ee2c65: /* ee2c65: cmp eax, 0xf0a870 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0a870u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2c6a: je 0xee2c71 */
  if (zf) goto L_ee2c71;
L_ee2c6c: /* ee2c6c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ee2c6f: jmp 0xee2c61 */
  goto L_ee2c61;
L_ee2c71: /* ee2c71: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2c73: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee2c76: jne 0xee2c90 */
  if (!zf) goto L_ee2c90;
L_ee2c78: /* ee2c78: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* ee2c7d: push 0xf04208 */
  { uint32_t v = 0xf04208u; esp -= 4; W32(esp, v); }
/* ee2c82: push 0xf041fc */
  { uint32_t v = 0xf041fcu; esp -= 4; W32(esp, v); }
/* ee2c87: call dword ptr [0xf0dba4] */
  esp -= 4; W32(esp, 0xee2c8du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* ee2c8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee2c90: /* ee2c90: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee2c95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee2c97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2c99: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee2c9e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ee2ca0: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee2ca2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2ca2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee2ca5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2ca7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee2cab: je 0xee2ce2 */
  if (zf) goto L_ee2ce2;
L_ee2cad: /* ee2cad: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee2cb0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* ee2cb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2cb4: call 0xed1235 */
  esp -= 4; W32(esp, 0xee2cb9u); SPILL(); f_ed1235(); if (g_unwind) return; RELOAD();
/* ee2cb9: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee2cbc: mov esi, eax */
  esi = eax;
/* ee2cbe: mov edi, esp */
  edi = esp;
/* ee2cc0: mov ecx, 6 */
  ecx = 0x6u;
/* ee2cc5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ee2cc7: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee2cca: mov ecx, esi */
  ecx = esi;
/* ee2ccc: call 0xed18d9 */
  esp -= 4; W32(esp, 0xee2cd1u); SPILL(); f_ed18d9(); if (g_unwind) return; RELOAD();
/* ee2cd1: mov dword ptr [esi], 0xef62f4 */
  W32((uint32_t)(esi), 0xef62f4u);
/* ee2cd7: mov byte ptr [esi + 0x28], 1 */
  W8((uint32_t)(esi + 0x28u), 0x1u);
/* ee2cdb: jmp 0xee2ce4 */
  goto L_ee2ce4;
L_ee2cdd: /* ee2cdd: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ee2ce0: jmp 0xee2c78 */
  goto L_ee2c78;
L_ee2ce2: /* ee2ce2: xor esi, esi */
  esi = 0;
L_ee2ce4: /* ee2ce4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2ce7: mov dword ptr [ecx + 0x5c], esi */
  W32((uint32_t)(ecx + 0x5cu), esi);
/* ee2cea: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2ced: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* ee2cf0: cmp dword ptr [eax + 0x400], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x400u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2cf6: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee2cfa: je 0xee2d5f */
  if (zf) goto L_ee2d5f;
L_ee2cfc: /* ee2cfc: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee2d02: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee2d04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2d06: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee2d0b: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ee2d0d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee2d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2d0f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee2d12: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2d14: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ee2d18: je 0xee2d53 */
  if (zf) goto L_ee2d53;
L_ee2d1a: /* ee2d1a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2d1d: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* ee2d20: mov ecx, dword ptr [edx + 0x400] */
  ecx = R32((uint32_t)(edx + 0x400u));
/* ee2d26: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* ee2d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2d2a: call 0xed1582 */
  esp -= 4; W32(esp, 0xee2d2fu); SPILL(); f_ed1582(); if (g_unwind) return; RELOAD();
/* ee2d2f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee2d32: mov esi, eax */
  esi = eax;
/* ee2d34: mov edi, esp */
  edi = esp;
/* ee2d36: mov ecx, 6 */
  ecx = 0x6u;
/* ee2d3b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ee2d3d: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee2d40: mov ecx, esi */
  ecx = esi;
/* ee2d42: call 0xed18d9 */
  esp -= 4; W32(esp, 0xee2d47u); SPILL(); f_ed18d9(); if (g_unwind) return; RELOAD();
/* ee2d47: mov dword ptr [esi], 0xef62f4 */
  W32((uint32_t)(esi), 0xef62f4u);
/* ee2d4d: mov byte ptr [esi + 0x28], 2 */
  W8((uint32_t)(esi + 0x28u), 0x2u);
/* ee2d51: jmp 0xee2d55 */
  goto L_ee2d55;
L_ee2d53: /* ee2d53: xor esi, esi */
  esi = 0;
L_ee2d55: /* ee2d55: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2d58: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee2d5c: mov dword ptr [eax + 0x60], esi */
  W32((uint32_t)(eax + 0x60u), esi);
L_ee2d5f: /* ee2d5f: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee2d65: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee2d67: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2d69: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee2d6e: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* ee2d70: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee2d72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2d72: mov esi, eax */
  esi = eax;
/* ee2d74: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* ee2d77: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2d79: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* ee2d7d: je 0xee2d9d */
  if (zf) goto L_ee2d9d;
L_ee2d7f: /* ee2d7f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee2d82: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* ee2d85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2d86: call 0xed1235 */
  esp -= 4; W32(esp, 0xee2d8bu); SPILL(); f_ed1235(); if (g_unwind) return; RELOAD();
/* ee2d8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2d8e: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* ee2d91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee2d92: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee2d93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2d94: mov ecx, esi */
  ecx = esi;
/* ee2d96: call 0xed10c8 */
  esp -= 4; W32(esp, 0xee2d9bu); SPILL(); f_ed10c8(); if (g_unwind) return; RELOAD();
/* ee2d9b: jmp 0xee2d9f */
  goto L_ee2d9f;
L_ee2d9d: /* ee2d9d: xor eax, eax */
  eax = 0;
L_ee2d9f: /* ee2d9f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2da2: mov dword ptr [ecx + 0x54], eax */
  W32((uint32_t)(ecx + 0x54u), eax);
/* ee2da5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2da8: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* ee2dab: cmp dword ptr [eax + 0x344], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x344u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee2db1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee2db5: jl 0xee2df6 */
  if ((sf != of)) goto L_ee2df6;
L_ee2db7: /* ee2db7: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee2dbd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee2dbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2dc1: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee2dc6: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* ee2dc8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee2dcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2dca: mov ecx, eax */
  ecx = eax;
/* ee2dcc: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ee2dcf: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee2dd1: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* ee2dd5: je 0xee2df0 */
  if (zf) goto L_ee2df0;
L_ee2dd7: /* ee2dd7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2dda: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* ee2ddd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2dde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2ddf: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* ee2de2: mov edx, dword ptr [eax + 0x344] */
  edx = R32((uint32_t)(eax + 0x344u));
/* ee2de8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2de9: call 0xed105a */
  esp -= 4; W32(esp, 0xee2deeu); SPILL(); f_ed105a(); if (g_unwind) return; RELOAD();
/* ee2dee: mov ebx, eax */
  ebx = eax;
L_ee2df0: /* ee2df0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2df3: mov dword ptr [eax + 0x58], ebx */
  W32((uint32_t)(eax + 0x58u), ebx);
L_ee2df6: /* ee2df6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee2df9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee2dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2dfe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee2e05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee2e06: mov esp, ebp */
  esp = ebp;
/* ee2e08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee2e09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee2e0c(void) {
  LOAD_REGS();
L_ee2e0c: /* ee2e0c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee2e0f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee2e14: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* ee2e17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2e18: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* ee2e1b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee2e20u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee2e20(); return;
}

void f_ee2e20(void) {
  LOAD_REGS();
L_ee2e20: /* ee2e20: push 0xef6420 */
  { uint32_t v = 0xef6420u; esp -= 4; W32(esp, v); }
/* ee2e25: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee2e2a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee2e30u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee2e30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2e33: xor ebx, ebx */
  ebx = 0;
/* ee2e35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2e36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2e37: call 0xeec520 */
  esp -= 4; W32(esp, 0xee2e3cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee2e3c: guest_badaddr(0xee2e3c); return;
}

void f_ee2f10(void) {
  LOAD_REGS();
L_ee2f10: /* ee2f10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee2f12: push 0xeeee19 */
  { uint32_t v = 0xeeee19u; esp -= 4; W32(esp, v); }
/* ee2f17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee2f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2f1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee2f25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee2f28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2f29: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* ee2f2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2f2f: mov esi, ecx */
  esi = ecx;
/* ee2f31: mov edi, dword ptr [esi + 0xc0] */
  edi = R32((uint32_t)(esi + 0xc0u));
/* ee2f37: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* ee2f3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee2f3f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ee2f43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2f44: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee2f46: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* ee2f49: call 0xed1861 */
  esp -= 4; W32(esp, 0xee2f4eu); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* ee2f4e: mov ecx, eax */
  ecx = eax;
/* ee2f50: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ee2f58: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee2f5eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee2f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2f5f: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* ee2f65: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee2f6bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee2f6b: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* ee2f71: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee2f73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee2f74: push 0xf04228 */
  { uint32_t v = 0xf04228u; esp -= 4; W32(esp, v); }
/* ee2f79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee2f7a: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee2f80u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee2f80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2f83: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ee2f87: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* ee2f8f: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee2f95u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee2f95: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee2f97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee2f98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee2f99: mov ecx, esi */
  ecx = esi;
/* ee2f9b: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xee2f9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee2f9e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee2fa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee2fa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee2fa4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee2fa5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee2fac: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee2faf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee2ff0(void) {
  LOAD_REGS();
L_ee2ff0: /* ee2ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee2ff1: mov esi, ecx */
  esi = ecx;
/* ee2ff3: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* ee2ff9: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee2fffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee2fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3000: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3007: push 0xf04288 */
  { uint32_t v = 0xf04288u; esp -= 4; W32(esp, v); }
/* ee300c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee300d: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3013u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3013: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee3016: mov dword ptr [esi + 0x8c], 1 */
  W32((uint32_t)(esi + 0x8cu), 0x1u);
/* ee3020: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* ee3026: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3029: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee302a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee302c: mov dword ptr [eax + 0x348], edx */
  W32((uint32_t)(eax + 0x348u), edx);
/* ee3032: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3035: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee303a: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee3040u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee3040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee3041: ret  */
  esp += 4; SPILL(); return;
}

void f_ee3070(void) {
  LOAD_REGS();
L_ee3070: /* ee3070: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee3076: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee307cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee307c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee307d: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3082: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3084: push 0xf04310 */
  { uint32_t v = 0xf04310u; esp -= 4; W32(esp, v); }
/* ee3089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee308a: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3090u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3090: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3093: ret  */
  esp += 4; SPILL(); return;
}

void f_ee30b0(void) {
  LOAD_REGS();
L_ee30b0: /* ee30b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee30b1: mov esi, ecx */
  esi = ecx;
/* ee30b3: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* ee30b9: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee30bfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee30bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee30c0: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee30c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee30c7: push 0xf04388 */
  { uint32_t v = 0xf04388u; esp -= 4; W32(esp, v); }
/* ee30cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee30cd: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee30d3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee30d3: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee30d6: mov dword ptr [esi + 0x8c], 1 */
  W32((uint32_t)(esi + 0x8cu), 0x1u);
/* ee30e0: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* ee30e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee30e9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee30ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee30ec: mov dword ptr [eax + 0x348], edx */
  W32((uint32_t)(eax + 0x348u), edx);
/* ee30f2: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee30f5: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee30fa: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee3100u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee3100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee3101: ret  */
  esp += 4; SPILL(); return;
}

void f_ee3130(void) {
  LOAD_REGS();
L_ee3130: /* ee3130: mov dword ptr [ecx + 0x8c], 1 */
  W32((uint32_t)(ecx + 0x8cu), 0x1u);
/* ee313a: ret  */
  esp += 4; SPILL(); return;
}

void f_ee3150(void) {
  LOAD_REGS();
L_ee3150: /* ee3150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee3151: mov esi, ecx */
  esi = ecx;
/* ee3153: call 0xed1573 */
  esp -= 4; W32(esp, 0xee3158u); SPILL(); f_ed1573(); if (g_unwind) return; RELOAD();
/* ee3158: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee315d: je 0xee316c */
  if (zf) goto L_ee316c;
L_ee315f: /* ee315f: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee3164: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3166: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee3168: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee3169: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee316cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee316c: /* ee316c: mov eax, esi */
  eax = esi;
/* ee316e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee316f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee3190(void) {
  LOAD_REGS();
L_ee3190: /* ee3190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee3191: mov ebp, esp */
  ebp = esp;
/* ee3193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee3195: push 0xeeee5d */
  { uint32_t v = 0xeeee5du; esp -= 4; W32(esp, v); }
/* ee319a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee31a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee31a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee31a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee31ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee31ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee31ad: mov esi, ecx */
  esi = ecx;
/* ee31af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee31b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee31b3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* ee31b6: mov dword ptr [esi], 0xef6498 */
  W32((uint32_t)(esi), 0xef6498u);
/* ee31bc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee31c3: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ee31c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee31c8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee31cc: je 0xee31d5 */
  if (zf) goto L_ee31d5;
L_ee31ce: /* ee31ce: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee31d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee31d2: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xee31d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee31d5: /* ee31d5: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* ee31d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee31da: je 0xee31e3 */
  if (zf) goto L_ee31e3;
L_ee31dc: /* ee31dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee31de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee31e0: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xee31e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee31e3: /* ee31e3: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* ee31e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee31e8: je 0xee31f1 */
  if (zf) goto L_ee31f1;
L_ee31ea: /* ee31ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee31ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee31ee: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xee31f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee31f1: /* ee31f1: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* ee31f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee31f6: je 0xee31ff */
  if (zf) goto L_ee31ff;
L_ee31f8: /* ee31f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee31fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee31fc: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xee31ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee31ff: /* ee31ff: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* ee3205: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee320c: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3212u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3212: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* ee3215: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee3219: call 0xed1569 */
  esp -= 4; W32(esp, 0xee321eu); SPILL(); f_ed1569(); if (g_unwind) return; RELOAD();
/* ee321e: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* ee3221: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee3225: call 0xed1569 */
  esp -= 4; W32(esp, 0xee322au); SPILL(); f_ed1569(); if (g_unwind) return; RELOAD();
/* ee322a: mov ecx, esi */
  ecx = esi;
/* ee322c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* ee3233: call 0xed14d3 */
  esp -= 4; W32(esp, 0xee3238u); SPILL(); f_ed14d3(); if (g_unwind) return; RELOAD();
/* ee3238: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee323b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee323c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee323d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee3244: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee3245: mov esp, ebp */
  esp = ebp;
/* ee3247: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee3248: ret  */
  esp += 4; SPILL(); return;
}

void f_ee3249(void) {
  LOAD_REGS();
L_ee3249: /* ee3249: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee324c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee3251: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee3254: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3255: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee3258: call 0xeec520 */
  esp -= 4; W32(esp, 0xee325du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee325d(); return;
}

void f_ee325d(void) {
  LOAD_REGS();
L_ee325d: /* ee325d: push 0xef6510 */
  { uint32_t v = 0xef6510u; esp -= 4; W32(esp, v); }
/* ee3262: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee3267: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee326du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee326d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3270: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee3272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee3274: call 0xeec520 */
  esp -= 4; W32(esp, 0xee3279u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee3279: guest_badaddr(0xee3279); return;
}

void f_ee32c0(void) {
  LOAD_REGS();
L_ee32c0: /* ee32c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee32c1: mov ebp, esp */
  ebp = esp;
/* ee32c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee32c5: push 0xeeee9c */
  { uint32_t v = 0xeeee9cu; esp -= 4; W32(esp, v); }
/* ee32ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee32d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee32d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee32d8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee32de: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ee32e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee32e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee32e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee32e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee32e7: mov esi, ecx */
  esi = ecx;
/* ee32e9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ee32ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee32ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee32ee: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* ee32f4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee32fb: call 0xed1127 */
  esp -= 4; W32(esp, 0xee3300u); SPILL(); f_ed1127(); if (g_unwind) return; RELOAD();
/* ee3300: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee3303: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee3306: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee3309: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* ee330c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee3310: call 0xed1136 */
  esp -= 4; W32(esp, 0xee3315u); SPILL(); f_ed1136(); if (g_unwind) return; RELOAD();
/* ee3315: lea ecx, [ebp + 0x17] */
  ecx = (uint32_t)(ebp + 0x17u);
/* ee3318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3319: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* ee331f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3320: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee3324: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee332au); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee332a: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* ee3330: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee3335: jne 0xee33bd */
  if (!zf) goto L_ee33bd;
L_ee333b: /* ee333b: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* ee3341: call 0xed15eb */
  esp -= 4; W32(esp, 0xee3346u); SPILL(); f_ed15eb(); if (g_unwind) return; RELOAD();
/* ee3346: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee3348: je 0xee33bd */
  if (zf) goto L_ee33bd;
L_ee334a: /* ee334a: movzx eax, byte ptr [ebp + 0x17] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x17u)));
/* ee334e: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee3351: ja 0xee33a6 */
  if ((!cf && !zf)) goto L_ee33a6;
L_ee3353: /* ee3353: jmp dword ptr [eax*4 + 0xee3410] */
  switch (R32((uint32_t)(eax*4 + 0xee3410u))) {
    case 0xee335au: goto L_ee335a;
    case 0xee3367u: goto L_ee3367;
    case 0xee3374u: goto L_ee3374;
    case 0xee3381u: goto L_ee3381;
    case 0xee3399u: goto L_ee3399;
    default: guest_badjump(0xee3353, R32((uint32_t)(eax*4 + 0xee3410u))); return;
  }
L_ee335a: /* ee335a: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* ee335d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee335e: mov ecx, esi */
  ecx = esi;
/* ee3360: call 0xed17df */
  esp -= 4; W32(esp, 0xee3365u); SPILL(); f_ed17df(); if (g_unwind) return; RELOAD();
/* ee3365: jmp 0xee33bd */
  goto L_ee33bd;
L_ee3367: /* ee3367: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* ee336a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee336b: mov ecx, esi */
  ecx = esi;
/* ee336d: call 0xed13ac */
  esp -= 4; W32(esp, 0xee3372u); SPILL(); f_ed13ac(); if (g_unwind) return; RELOAD();
/* ee3372: jmp 0xee33bd */
  goto L_ee33bd;
L_ee3374: /* ee3374: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* ee3377: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3378: mov ecx, esi */
  ecx = esi;
/* ee337a: call 0xed17c1 */
  esp -= 4; W32(esp, 0xee337fu); SPILL(); f_ed17c1(); if (g_unwind) return; RELOAD();
/* ee337f: jmp 0xee33bd */
  goto L_ee33bd;
L_ee3381: /* ee3381: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* ee3384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3385: mov ecx, esi */
  ecx = esi;
/* ee3387: call 0xed13ac */
  esp -= 4; W32(esp, 0xee338cu); SPILL(); f_ed13ac(); if (g_unwind) return; RELOAD();
/* ee338c: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* ee338f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3390: mov ecx, esi */
  ecx = esi;
/* ee3392: call 0xed17c1 */
  esp -= 4; W32(esp, 0xee3397u); SPILL(); f_ed17c1(); if (g_unwind) return; RELOAD();
/* ee3397: jmp 0xee33bd */
  goto L_ee33bd;
L_ee3399: /* ee3399: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* ee339c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee339d: mov ecx, esi */
  ecx = esi;
/* ee339f: call 0xed117c */
  esp -= 4; W32(esp, 0xee33a4u); SPILL(); f_ed117c(); if (g_unwind) return; RELOAD();
/* ee33a4: jmp 0xee33bd */
  goto L_ee33bd;
L_ee33a6: /* ee33a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee33a7: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee33ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee33ae: push 0xf04020 */
  { uint32_t v = 0xf04020u; esp -= 4; W32(esp, v); }
/* ee33b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee33b4: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee33bau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee33ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee33bd: /* ee33bd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee33c0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee33c4: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xee33cau); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* ee33ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee33cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee33ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee33cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee33d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee33d7: mov esp, ebp */
  esp = ebp;
/* ee33d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee33da: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ee33dd(void) {
  LOAD_REGS();
L_ee33dd: /* ee33dd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee33e0: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee33e5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee33e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee33e9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee33ec: call 0xeec520 */
  esp -= 4; W32(esp, 0xee33f1u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee33f1(); return;
}

void f_ee33f1(void) {
  LOAD_REGS();
L_ee33f1: /* ee33f1: push 0xef6588 */
  { uint32_t v = 0xef6588u; esp -= 4; W32(esp, v); }
/* ee33f6: push 0xf04064 */
  { uint32_t v = 0xf04064u; esp -= 4; W32(esp, v); }
/* ee33fb: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee3401u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee3401: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3404: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee3406: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee3408: call 0xeec520 */
  esp -= 4; W32(esp, 0xee340du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee340d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* ee3410: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* ee3411: xor ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* ee3413: add byte ptr [edi + 0x33], ah */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x33u))); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(edi + 0x33u), r);
  }
/* ee3416: out dx, al */
  guest_unsupported(0xee3416); /* out dx, al */
/* ee3417: add byte ptr [ebx + esi - 0x12], dh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + esi + 0xffffffeeu))); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebx + esi + 0xffffffeeu), r);
  }
/* ee341b: add byte ptr [ecx - 0x66ff11cd], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x9900ee33u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0x9900ee33u), r);
  }
/* ee3421: xor ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* ee3423: add byte ptr [eax - 0x6f6f6f70], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x90909090u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(eax + 0x90909090u), r);
  }
/* ee3429: nop  */
/* ee342a: nop  */
/* ee342b: nop  */
/* ee342c: nop  */
/* ee342d: nop  */
/* ee342e: nop  */
/* ee342f: nop  */
L_ee3430: guest_badaddr(0xee3430); return;
}

void f_ee3490(void) {
  LOAD_REGS();
L_ee3490: /* ee3490: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee3496: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee3498: push 0xeeeebb */
  { uint32_t v = 0xeeeebbu; esp -= 4; W32(esp, v); }
/* ee349d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee349e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee34a2: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee34a9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* ee34ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee34ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee34ae: mov esi, ecx */
  esi = ecx;
/* ee34b0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee34b3: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee34b6: jne 0xee34cd */
  if (!zf) goto L_ee34cd;
L_ee34b8: /* ee34b8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ee34bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee34bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee34be: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee34c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee34c2: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee34c7: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xee34cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee34cd: /* ee34cd: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* ee34d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee34d5: jne 0xee3527 */
  if (!zf) goto L_ee3527;
L_ee34d7: /* ee34d7: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee34dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee34df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee34e1: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee34e6: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* ee34eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee34edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee34ed: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ee34f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee34f3: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ee34fb: je 0xee3515 */
  if (zf) goto L_ee3515;
L_ee34fd: /* ee34fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee34fe: mov ecx, eax */
  ecx = eax;
/* ee3500: call 0xed19b0 */
  esp -= 4; W32(esp, 0xee3505u); SPILL(); f_ed19b0(); if (g_unwind) return; RELOAD();
/* ee3505: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* ee350d: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* ee3513: jmp 0xee352e */
  goto L_ee352e;
L_ee3515: /* ee3515: xor eax, eax */
  eax = 0;
/* ee3517: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* ee351f: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* ee3525: jmp 0xee352e */
  goto L_ee352e;
L_ee3527: /* ee3527: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee3529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee352b: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xee352eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee352e: /* ee352e: test byte ptr [esi + 0x40c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee3535: je 0xee3554 */
  if (zf) goto L_ee3554;
L_ee3537: /* ee3537: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* ee353d: call 0xed1997 */
  esp -= 4; W32(esp, 0xee3542u); SPILL(); f_ed1997(); if (g_unwind) return; RELOAD();
/* ee3542: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee3546: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee354d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee354e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3551: ret 8 */
  esp += 12; SPILL(); return;
L_ee3554: /* ee3554: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* ee355a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee355c: push 0xf04078 */
  { uint32_t v = 0xf04078u; esp -= 4; W32(esp, v); }
/* ee3561: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3562: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3568u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3568: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ee356c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee356f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee3576: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee3577: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee357a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee35c0(void) {
  LOAD_REGS();
L_ee35c0: /* ee35c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee35c2: push 0xeeeee4 */
  { uint32_t v = 0xeeeee4u; esp -= 4; W32(esp, v); }
/* ee35c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee35cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee35ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee35d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee35d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee35d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee35da: mov edi, ecx */
  edi = ecx;
/* ee35dc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ee35e0: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee35e6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee35e6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ee35ea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee35ed: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee35f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee35f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee35f4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee35f7: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ee35fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee35fc: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee3601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee3602: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* ee360a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee360du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee360d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee3610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee3611: mov eax, edx */
  eax = edx;
/* ee3613: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee3616: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee3619: jne 0xee3631 */
  if (!zf) goto L_ee3631;
L_ee361b: /* ee361b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee361e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee361f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee3621: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee3624: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee362a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee362b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee3631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee3631: /* ee3631: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* ee3637: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee3639: jne 0xee3674 */
  if (!zf) goto L_ee3674;
L_ee363b: /* ee363b: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ee3640: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3642: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee3644: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee3649: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* ee364e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee3650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3650: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ee3654: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee3656: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* ee365b: je 0xee3667 */
  if (zf) goto L_ee3667;
L_ee365d: /* ee365d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee365e: mov ecx, eax */
  ecx = eax;
/* ee3660: call 0xed19b0 */
  esp -= 4; W32(esp, 0xee3665u); SPILL(); f_ed19b0(); if (g_unwind) return; RELOAD();
/* ee3665: jmp 0xee3669 */
  goto L_ee3669;
L_ee3667: /* ee3667: xor eax, eax */
  eax = 0;
L_ee3669: /* ee3669: mov byte ptr [esp + 0x1c], 0 */
  W8((uint32_t)(esp + 0x1cu), 0x0u);
/* ee366e: mov dword ptr [edi + 0x33c], eax */
  W32((uint32_t)(edi + 0x33cu), eax);
L_ee3674: /* ee3674: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ee3678: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee367eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee367e: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* ee3684: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3685: call 0xed1078 */
  esp -= 4; W32(esp, 0xee368au); SPILL(); f_ed1078(); if (g_unwind) return; RELOAD();
/* ee368a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ee368e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ee3690: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ee3694: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* ee369c: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee36a2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee36a2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ee36a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee36a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee36a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee36af: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee36b2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee3700(void) {
  LOAD_REGS();
L_ee3700: /* ee3700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee3701: mov ebp, esp */
  ebp = esp;
/* ee3703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee3705: push 0xeeefc3 */
  { uint32_t v = 0xeeefc3u; esp -= 4; W32(esp, v); }
/* ee370a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee3710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee3718: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee371e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee371f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee3720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee3721: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee3724: mov esi, ecx */
  esi = ecx;
/* ee3726: xor ebx, ebx */
  ebx = 0;
L_ee3728: /* ee3728: mov edi, dword ptr [0xf0dbf8] */
  edi = R32((uint32_t)(0xf0dbf8u));
L_ee372e: /* ee372e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_ee3731: /* ee3731: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee3733: mov ecx, esi */
  ecx = esi;
/* ee3735: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xee3738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3738: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee373a: je 0xee405e */
  if (zf) goto L_ee405e;
L_ee3740: /* ee3740: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* ee3743: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee3746: ja 0xee3731 */
  if ((!cf && !zf)) goto L_ee3731;
L_ee3748: /* ee3748: jmp dword ptr [eax*4 + 0xee4070] */
  switch (R32((uint32_t)(eax*4 + 0xee4070u))) {
    case 0xee374fu: goto L_ee374f;
    case 0xee395au: goto L_ee395a;
    case 0xee3c5bu: goto L_ee3c5b;
    case 0xee3d74u: goto L_ee3d74;
    case 0xee3d9du: goto L_ee3d9d;
    case 0xee3e25u: goto L_ee3e25;
    case 0xee3e6eu: goto L_ee3e6e;
    case 0xee3e85u: goto L_ee3e85;
    case 0xee3f10u: goto L_ee3f10;
    default: guest_badjump(0xee3748, R32((uint32_t)(eax*4 + 0xee4070u))); return;
  }
L_ee374f: /* ee374f: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ee3755: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee3759: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee375fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee375f: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ee3762: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ee3768: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3769: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee376a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee376e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3770u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3770: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3773: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ee3779: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee377fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee377f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ee3785: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee3789: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee378fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee378f: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ee3795: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee3799: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee379fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee379f: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* ee37a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee37a6: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee37aa: call dword ptr [0xf0dfd0] */
  esp -= 4; W32(esp, 0xee37b0u); SPILL(); f_6c7ac2(); if (g_unwind) return; /* Engine!?GetCDKeyHash@@YA?AVFString@@XZ */ RELOAD();
/* ee37b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee37b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee37b4: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ee37ba: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ee37be: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee37c4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee37c4: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* ee37ca: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee37ce: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee37d4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee37d4: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ee37da: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee37e0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee37e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee37e1: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* ee37e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee37e8: call dword ptr [0xf0dfcc] */
  esp -= 4; W32(esp, 0xee37eeu); SPILL(); f_6c944e(); if (g_unwind) return; /* Engine!?GetCDKeyResponse@@YA?AVFString@@PBG@Z */ RELOAD();
/* ee37ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee37f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee37f2: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ee37f8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* ee37fc: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee3802u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee3802: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* ee3808: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee380c: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3812u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3812: push 0xf048a0 */
  { uint32_t v = 0xf048a0u; esp -= 4; W32(esp, v); }
/* ee3817: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ee381d: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee3823u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee3823: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* ee3826: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* ee382c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee382d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee382e: mov dword ptr [ebp - 0x64], 0x8b2 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x8b2u);
/* ee3835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee383a: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ee3840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3842: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3844u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3844: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3847: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* ee384d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee384e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee384f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3851u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3851: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3854: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* ee3857: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3859: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee385fu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee385f: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee3862: mov ecx, dword ptr [eax + 0x3fc] */
  ecx = R32((uint32_t)(eax + 0x3fcu));
/* ee3868: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee386b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee386d: je 0xee387a */
  if (zf) goto L_ee387a;
L_ee386f: /* ee386f: mov edx, dword ptr [eax + 0x404] */
  edx = R32((uint32_t)(eax + 0x404u));
/* ee3875: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* ee3878: jmp 0xee3881 */
  goto L_ee3881;
L_ee387a: /* ee387a: mov dword ptr [ebp - 0x40], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xffffffffu);
L_ee3881: /* ee3881: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee3884: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ee3887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3889: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee388fu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee388f: mov edx, dword ptr [0xf0d9a0] */
  edx = R32((uint32_t)(0xf0d9a0u));
/* ee3895: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* ee3897: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* ee389a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee389d: lea ecx, [ebp - 0x12] */
  ecx = (uint32_t)(ebp + 0xffffffeeu);
/* ee38a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee38a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee38a2: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* ee38a5: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee38abu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee38ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee38ae: call dword ptr [0xf0d9a4] */
  esp -= 4; W32(esp, 0xee38b4u); SPILL(); f_4e3ddc(); if (g_unwind) return; /* Core!?GetLanguage@UObject@@SAPBGXZ */ RELOAD();
/* ee38b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee38b5: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* ee38bb: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee38c1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee38c1: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee38c4: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* ee38ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee38cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee38cc: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* ee38d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee38d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee38d2: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee38d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee38d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee38da: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee38ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee38dd: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* ee38e3: mov dword ptr [esi + 0x64], 1 */
  W32((uint32_t)(esi + 0x64u), 0x1u);
/* ee38ea: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee38ee: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee38f4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee38f4: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ee38fa: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee38fe: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3904u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3904: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ee390a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee390e: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3914u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3914: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ee391a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee391e: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3924u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3924: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ee392a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee392e: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3934: jmp 0xee372e */
  goto L_ee372e;
L_ee395a: /* ee395a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee395d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ee3961: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee3967u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee3967: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* ee396a: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* ee396d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee396e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee396f: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* ee3973: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3975: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3978: push 0xf03fcc */
  { uint32_t v = 0xf03fccu; esp -= 4; W32(esp, v); }
/* ee397d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3980: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee3986u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee3986: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3988: je 0xee39aa */
  if (zf) goto L_ee39aa;
L_ee398a: /* ee398a: mov ecx, esi */
  ecx = esi;
/* ee398c: call 0xed1875 */
  esp -= 4; W32(esp, 0xee3991u); SPILL(); f_ed1875(); if (g_unwind) return; RELOAD();
/* ee3991: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3994: mov dword ptr [esi + 0x64], 2 */
  W32((uint32_t)(esi + 0x64u), 0x2u);
/* ee399b: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ee399f: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee39a5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee39a5: jmp 0xee3728 */
  goto L_ee3728;
L_ee39aa: /* ee39aa: push 0xf03fb8 */
  { uint32_t v = 0xf03fb8u; esp -= 4; W32(esp, v); }
/* ee39af: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee39b2: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee39b8u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee39b8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee39ba: je 0xee3a0a */
  if (zf) goto L_ee3a0a;
L_ee39bc: /* ee39bc: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ee39bf: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* ee39c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee39c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee39c4: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee39cau); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee39ca: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* ee39cd: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* ee39d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee39d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee39d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee39d9: push 0xf04810 */
  { uint32_t v = 0xf04810u; esp -= 4; W32(esp, v); }
/* ee39de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee39df: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee39e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee39e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee39e8: /* ee39e8: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee39eb: mov dword ptr [esi + 0x90], ebx */
  W32((uint32_t)(esi + 0x90u), ebx);
/* ee39f1: mov dword ptr [esi + 0x8c], 1 */
  W32((uint32_t)(esi + 0x8cu), 0x1u);
/* ee39fb: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ee39ff: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3a05u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3a05: jmp 0xee3728 */
  goto L_ee3728;
L_ee3a0a: /* ee3a0a: push 0xf03fa0 */
  { uint32_t v = 0xf03fa0u; esp -= 4; W32(esp, v); }
/* ee3a0f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3a12: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee3a18u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee3a18: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3a1a: je 0xee3b1d */
  if (zf) goto L_ee3b1d;
L_ee3a20: /* ee3a20: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* ee3a23: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* ee3a26: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* ee3a29: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* ee3a2c: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* ee3a2f: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* ee3a32: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* ee3a35: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* ee3a38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3a39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3a3a: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* ee3a3e: call 0xed18ac */
  esp -= 4; W32(esp, 0xee3a43u); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ee3a43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3a46: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* ee3a49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3a4b: call 0xed14fb */
  esp -= 4; W32(esp, 0xee3a50u); SPILL(); f_ed14fb(); if (g_unwind) return; RELOAD();
/* ee3a50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3a53: xor edi, edi */
  edi = 0;
L_ee3a55: /* ee3a55: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee3a58: jge 0xee3ab8 */
  if ((sf == of)) goto L_ee3ab8;
L_ee3a5a: /* ee3a5a: cmp edi, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee3a5d: jge 0xee3a7e */
  if ((sf == of)) goto L_ee3a7e;
L_ee3a5f: /* ee3a5f: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ee3a62: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* ee3a65: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* ee3a68: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3a6b: lea eax, [edi + edi*2 + 0xd8] */
  eax = (uint32_t)(edi + edi*2 + 0xd8u);
/* ee3a72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3a73: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* ee3a76: call dword ptr [0xf0d9a8] */
  esp -= 4; W32(esp, 0xee3a7cu); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* ee3a7c: jmp 0xee3a96 */
  goto L_ee3a96;
L_ee3a7e: /* ee3a7e: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee3a81: lea edx, [edi + edi*2 + 0xd8] */
  edx = (uint32_t)(edi + edi*2 + 0xd8u);
/* ee3a88: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee3a8d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ee3a90: call dword ptr [0xf0d9ac] */
  esp -= 4; W32(esp, 0xee3a96u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
L_ee3a96: /* ee3a96: cmp edi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee3a99: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3a9c: jge 0xee3aae */
  if ((sf == of)) goto L_ee3aae;
L_ee3a9e: /* ee3a9e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* ee3aa1: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ee3aa4: mov dword ptr [ecx + edi*4 + 0x34c], eax */
  W32((uint32_t)(ecx + edi*4 + 0x34cu), eax);
/* ee3aab: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee3aac: jmp 0xee3a55 */
  goto L_ee3a55;
L_ee3aae: /* ee3aae: mov dword ptr [ecx + edi*4 + 0x34c], ebx */
  W32((uint32_t)(ecx + edi*4 + 0x34cu), ebx);
/* ee3ab5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee3ab6: jmp 0xee3a55 */
  goto L_ee3a55;
L_ee3ab8: /* ee3ab8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* ee3abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee3abc: mov dword ptr [edx + 0x348], ebx */
  W32((uint32_t)(edx + 0x348u), ebx);
/* ee3ac2: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3ac5: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee3aca: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee3ad0u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee3ad0: mov eax, 1 */
  eax = 0x1u;
/* ee3ad5: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* ee3adb: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* ee3ae1: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* ee3ae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3ae5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee3ae6: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee3ae9: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* ee3aed: call 0xed1717 */
  esp -= 4; W32(esp, 0xee3af2u); SPILL(); f_ed1717(); if (g_unwind) return; RELOAD();
/* ee3af2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee3af5: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* ee3af9: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee3affu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee3aff: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ee3b02: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* ee3b06: call 0xed1569 */
  esp -= 4; W32(esp, 0xee3b0bu); SPILL(); f_ed1569(); if (g_unwind) return; RELOAD();
/* ee3b0b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3b0e: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ee3b12: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3b18u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3b18: jmp 0xee3728 */
  goto L_ee3728;
L_ee3b1d: /* ee3b1d: push 0xf03f90 */
  { uint32_t v = 0xf03f90u; esp -= 4; W32(esp, v); }
/* ee3b22: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3b25: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee3b2bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee3b2b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3b2d: je 0xee3bf8 */
  if (zf) goto L_ee3bf8;
L_ee3b33: /* ee3b33: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* ee3b39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee3b3b: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* ee3b41: push 0xf04770 */
  { uint32_t v = 0xf04770u; esp -= 4; W32(esp, v); }
/* ee3b46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3b47: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3b49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3b49: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3b4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3b50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3b53: push 0xf04740 */
  { uint32_t v = 0xf04740u; esp -= 4; W32(esp, v); }
/* ee3b58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3b59: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3b5b: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* ee3b61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3b64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3b65: call dword ptr [0xf0dfd0] */
  esp -= 4; W32(esp, 0xee3b6bu); SPILL(); f_6c7ac2(); if (g_unwind) return; /* Engine!?GetCDKeyHash@@YA?AVFString@@XZ */ RELOAD();
/* ee3b6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3b6e: push 0xf046f0 */
  { uint32_t v = 0xf046f0u; esp -= 4; W32(esp, v); }
/* ee3b73: mov ecx, eax */
  ecx = eax;
/* ee3b75: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* ee3b79: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee3b7fu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee3b7f: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* ee3b85: mov edi, eax */
  edi = eax;
/* ee3b87: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* ee3b8b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3b91u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3b91: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3b93: je 0xee3bb0 */
  if (zf) goto L_ee3bb0;
L_ee3b95: /* ee3b95: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3b9a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3b9c: push 0xf04618 */
  { uint32_t v = 0xf04618u; esp -= 4; W32(esp, v); }
/* ee3ba1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3ba2: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3ba8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3ba8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3bab: jmp 0xee39e8 */
  goto L_ee39e8;
L_ee3bb0: /* ee3bb0: lea edx, [ebp - 0x11c] */
  edx = (uint32_t)(ebp + 0xfffffee4u);
/* ee3bb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3bb7: call dword ptr [0xf0dfd0] */
  esp -= 4; W32(esp, 0xee3bbdu); SPILL(); f_6c7ac2(); if (g_unwind) return; /* Engine!?GetCDKeyHash@@YA?AVFString@@XZ */ RELOAD();
/* ee3bbd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3bc0: mov ecx, eax */
  ecx = eax;
/* ee3bc2: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* ee3bc6: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3bccu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3bcd: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3bd2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3bd4: push 0xf045e0 */
  { uint32_t v = 0xf045e0u; esp -= 4; W32(esp, v); }
/* ee3bd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3bda: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3be0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3be0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3be3: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* ee3be9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* ee3bed: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3bf3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3bf3: jmp 0xee39e8 */
  goto L_ee39e8;
L_ee3bf8: /* ee3bf8: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee3bfb: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* ee3c01: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee3c02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee3c03: mov dword ptr [eax + 0x348], edx */
  W32((uint32_t)(eax + 0x348u), edx);
/* ee3c09: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3c0c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee3c11: call dword ptr [0xf0dc74] */
  esp -= 4; W32(esp, 0xee3c17u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* ee3c17: mov eax, 1 */
  eax = 0x1u;
/* ee3c1c: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee3c1f: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* ee3c25: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* ee3c2b: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ee3c2f: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3c35u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3c35: jmp 0xee3728 */
  goto L_ee3728;
L_ee3c5b: /* ee3c5b: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ee3c5e: lea ecx, [ebp - 0x13] */
  ecx = (uint32_t)(ebp + 0xffffffedu);
/* ee3c61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3c62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3c63: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* ee3c67: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee3c6du); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee3c6d: mov al, byte ptr [ebp - 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffedu))) & 0xffu);
/* ee3c70: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* ee3c73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3c76: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee3c78: je 0xee3cd4 */
  if (zf) goto L_ee3cd4;
L_ee3c7a: /* ee3c7a: lea eax, [esi + 0x94] */
  eax = (uint32_t)(esi + 0x94u);
/* ee3c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3c82: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee3c88u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee3c88: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* ee3c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3c8e: lea edx, [esi + 0xa8] */
  edx = (uint32_t)(esi + 0xa8u);
/* ee3c94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3c95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3c96: call dword ptr [0xf0db38] */
  esp -= 4; W32(esp, 0xee3c9cu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* ee3c9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3c9f: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* ee3ca5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3ca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3ca7: call dword ptr [0xf0db38] */
  esp -= 4; W32(esp, 0xee3cadu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* ee3cad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3cb0: lea edx, [esi + 0xb0] */
  edx = (uint32_t)(esi + 0xb0u);
/* ee3cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3cb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3cb8: call dword ptr [0xf0db38] */
  esp -= 4; W32(esp, 0xee3cbeu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* ee3cbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3cc1: mov ecx, esi */
  ecx = esi;
/* ee3cc3: mov dword ptr [esi + 0x64], 3 */
  W32((uint32_t)(esi + 0x64u), 0x3u);
/* ee3cca: call 0xed1654 */
  esp -= 4; W32(esp, 0xee3ccfu); SPILL(); f_ed1654(); if (g_unwind) return; RELOAD();
/* ee3ccf: jmp 0xee372e */
  goto L_ee372e;
L_ee3cd4: /* ee3cd4: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* ee3cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3cd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3cd9: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee3cdfu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee3cdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3ce2: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* ee3ce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3ce6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3ce7: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee3cedu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee3ced: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee3cf0: movzx ecx, byte ptr [ebp - 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* ee3cf4: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* ee3cfa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3cfe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee3d00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3d01: push 0xf04568 */
  { uint32_t v = 0xf04568u; esp -= 4; W32(esp, v); }
/* ee3d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3d07: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3d0du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3d0d: movzx eax, byte ptr [ebp - 0x11] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* ee3d11: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3d14: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee3d16: je 0xee3d34 */
  if (zf) goto L_ee3d34;
L_ee3d18: /* ee3d18: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee3d19: je 0xee3d2f */
  if (zf) goto L_ee3d2f;
L_ee3d1b: /* ee3d1b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee3d1c: jne 0xee372e */
  if (!zf) goto L_ee372e;
L_ee3d22: /* ee3d22: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* ee3d25: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3d27: je 0xee372e */
  if (zf) goto L_ee372e;
L_ee3d2d: /* ee3d2d: jmp 0xee3d37 */
  goto L_ee3d37;
L_ee3d2f: /* ee3d2f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* ee3d32: jmp 0xee3d37 */
  goto L_ee3d37;
L_ee3d34: /* ee3d34: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
L_ee3d37: /* ee3d37: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee3d3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee3d3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3d3d: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* ee3d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3d44: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ee3d4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3d4b: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xee3d4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3d4e: jmp 0xee372e */
  goto L_ee372e;
L_ee3d74: /* ee3d74: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* ee3d77: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee3d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3d7c: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* ee3d80: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee3d86u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee3d86: movzx eax, byte ptr [ebp - 0x14] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffecu)));
/* ee3d8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3d8d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee3d90: ja 0xee3ff4 */
  if ((!cf && !zf)) goto L_ee3ff4;
L_ee3d96: /* ee3d96: jmp dword ptr [eax*4 + 0xee4080] */
  switch (R32((uint32_t)(eax*4 + 0xee4080u))) {
    case 0xee3d9du: goto L_ee3d9d;
    case 0xee3e25u: goto L_ee3e25;
    case 0xee3e6eu: goto L_ee3e6e;
    case 0xee3e85u: goto L_ee3e85;
    case 0xee3f10u: goto L_ee3f10;
    default: guest_badjump(0xee3d96, R32((uint32_t)(eax*4 + 0xee4080u))); return;
  }
L_ee3d9d: /* ee3d9d: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* ee3da3: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee3da9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee3da9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* ee3daf: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* ee3db3: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee3db9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee3db9: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* ee3dbc: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* ee3dc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3dc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3dc4: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* ee3dc8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3dcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3dca: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ee3dcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3dd0: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* ee3dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3dd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3dd8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3ddau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3dda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3ddd: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* ee3de3: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3de9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3de9: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* ee3def: mov edi, eax */
  edi = eax;
/* ee3df1: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3df7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee3df8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3df9: mov ecx, esi */
  ecx = esi;
/* ee3dfb: call 0xed183e */
  esp -= 4; W32(esp, 0xee3e00u); SPILL(); f_ed183e(); if (g_unwind) return; RELOAD();
/* ee3e00: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* ee3e06: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* ee3e0a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3e10u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3e10: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* ee3e16: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* ee3e1a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3e20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3e20: jmp 0xee3728 */
  goto L_ee3728;
L_ee3e25: /* ee3e25: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* ee3e2b: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee3e31u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee3e31: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* ee3e34: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* ee3e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3e3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3e3c: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* ee3e40: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee3e42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3e42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3e45: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* ee3e4b: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3e51u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3e52: mov ecx, esi */
  ecx = esi;
/* ee3e54: call 0xed13fc */
  esp -= 4; W32(esp, 0xee3e59u); SPILL(); f_ed13fc(); if (g_unwind) return; RELOAD();
/* ee3e59: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* ee3e5f: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* ee3e63: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee3e69u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee3e69: jmp 0xee3728 */
  goto L_ee3728;
L_ee3e6e: /* ee3e6e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee3e70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee3e71: mov ecx, esi */
  ecx = esi;
/* ee3e73: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xee3e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee3e76: mov dword ptr [esi + 0x8c], 1 */
  W32((uint32_t)(esi + 0x8cu), 0x1u);
/* ee3e80: jmp 0xee3728 */
  goto L_ee3728;
L_ee3e85: /* ee3e85: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* ee3e88: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee3e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3e8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3e8d: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee3e93u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee3e93: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee3e96: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3e9b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3e9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3ea1: push 0xf04508 */
  { uint32_t v = 0xf04508u; esp -= 4; W32(esp, v); }
/* ee3ea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3ea7: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3eadu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3ead: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* ee3eb0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee3eb3: mov dword ptr [edx + 0x404], eax */
  W32((uint32_t)(edx + 0x404u), eax);
/* ee3eb9: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* ee3ebc: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* ee3ec2: mov eax, dword ptr [edx + 0x508] */
  eax = R32((uint32_t)(edx + 0x508u));
/* ee3ec8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3ecb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3ecd: je 0xee3ee2 */
  if (zf) goto L_ee3ee2;
L_ee3ecf: /* ee3ecf: mov eax, dword ptr [eax + 0x47c] */
  eax = R32((uint32_t)(eax + 0x47cu));
/* ee3ed5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3ed7: je 0xee3ee2 */
  if (zf) goto L_ee3ee2;
L_ee3ed9: /* ee3ed9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee3edc: mov dword ptr [eax + 0x418], ecx */
  W32((uint32_t)(eax + 0x418u), ecx);
L_ee3ee2: /* ee3ee2: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3ee5: jne 0xee3728 */
  if (!zf) goto L_ee3728;
L_ee3eeb: /* ee3eeb: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* ee3eee: mov eax, dword ptr [edx + 0x3fc] */
  eax = R32((uint32_t)(edx + 0x3fcu));
/* ee3ef4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3ef6: je 0xee3728 */
  if (zf) goto L_ee3728;
L_ee3efc: /* ee3efc: mov dword ptr [eax + 0x348], ebx */
  W32((uint32_t)(eax + 0x348u), ebx);
/* ee3f02: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee3f05: mov dword ptr [eax + 0x3fc], ebx */
  W32((uint32_t)(eax + 0x3fcu), ebx);
/* ee3f0b: jmp 0xee3728 */
  goto L_ee3728;
L_ee3f10: /* ee3f10: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* ee3f13: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* ee3f16: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* ee3f19: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ee3f1c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ee3f1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3f20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3f21: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* ee3f25: call 0xed10dc */
  esp -= 4; W32(esp, 0xee3f2au); SPILL(); f_ed10dc(); if (g_unwind) return; RELOAD();
/* ee3f2a: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3f2f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3f31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3f34: push 0xf04498 */
  { uint32_t v = 0xf04498u; esp -= 4; W32(esp, v); }
/* ee3f39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3f3a: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee3f40u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee3f40: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* ee3f43: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* ee3f49: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ee3f4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee3f4f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f51: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* ee3f54: je 0xee3fd1 */
  if (zf) goto L_ee3fd1;
L_ee3f56: /* ee3f56: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* ee3f59: mov edx, dword ptr [0xf0dd88] */
  edx = R32((uint32_t)(0xf0dd88u));
/* ee3f5f: nop  */
L_ee3f60: /* ee3f60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f62: je 0xee3f6d */
  if (zf) goto L_ee3f6d;
L_ee3f64: /* ee3f64: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f66: je 0xee3f78 */
  if (zf) goto L_ee3f78;
L_ee3f68: /* ee3f68: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ee3f6b: jmp 0xee3f60 */
  goto L_ee3f60;
L_ee3f6d: /* ee3f6d: xor eax, eax */
  eax = 0;
/* ee3f6f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f71: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee3f74: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f76: je 0xee3fd1 */
  if (zf) goto L_ee3fd1;
L_ee3f78: /* ee3f78: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee3f7a: je 0xee3fd1 */
  if (zf) goto L_ee3fd1;
L_ee3f7c: /* ee3f7c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ee3f7f: nop  */
L_ee3f80: /* ee3f80: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee3f83: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee3f86: jge 0xee3fcb */
  if ((sf == of)) goto L_ee3fcb;
L_ee3f88: /* ee3f88: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee3f8b: mov edi, edx */
  edi = edx;
/* ee3f8d: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* ee3f90: lea ebx, [edi + eax] */
  ebx = (uint32_t)(edi + eax);
/* ee3f93: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* ee3f96: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3f9cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3f9c: mov ecx, ebx */
  ecx = ebx;
/* ee3f9e: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* ee3fa1: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee3fa7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee3fa7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee3faa: mov edx, dword ptr [edi + ecx + 0x18] */
  edx = R32((uint32_t)(edi + ecx + 0x18u));
/* ee3fae: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* ee3fb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3fb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee3fb3: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* ee3fb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3fb7: call dword ptr [0xf0dd8c] */
  esp -= 4; W32(esp, 0xee3fbdu); SPILL(); f_6c6cee(); if (g_unwind) return; /* Engine!?AddMD5@UGameEngine@@QAEXPBG0H@Z */ RELOAD();
/* ee3fbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee3fc0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* ee3fc3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee3fc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ee3fc7: xor ebx, ebx */
  ebx = 0;
/* ee3fc9: jmp 0xee3f80 */
  goto L_ee3f80;
L_ee3fcb: /* ee3fcb: call dword ptr [0xf0dd90] */
  esp -= 4; W32(esp, 0xee3fd1u); SPILL(); f_6c5196(); if (g_unwind) return; /* Engine!?SaveMD5Database@UGameEngine@@QAEXXZ */ RELOAD();
L_ee3fd1: /* ee3fd1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee3fd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3fd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee3fd6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ee3fd9: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* ee3fdd: call 0xed187a */
  esp -= 4; W32(esp, 0xee3fe2u); SPILL(); f_ed187a(); if (g_unwind) return; RELOAD();
/* ee3fe2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ee3fe5: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* ee3fe9: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee3fefu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee3fef: jmp 0xee3728 */
  goto L_ee3728;
L_ee3ff4: /* ee3ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3ff5: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee3ffa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee3ffc: push 0xf04428 */
  { uint32_t v = 0xf04428u; esp -= 4; W32(esp, v); }
/* ee4001: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4002: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee4008u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee4008: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee400b: jmp 0xee3728 */
  goto L_ee3728;
L_ee405e: /* ee405e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee4061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4062: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4063: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee406a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee406b: mov esp, ebp */
  esp = ebp;
/* ee406d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee406e: ret  */
  esp += 4; SPILL(); return;
}
