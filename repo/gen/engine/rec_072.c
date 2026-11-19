#include "recomp.h"
#include "rec_mod.h"

void f_84de5e(void) {
  LOAD_REGS();
L_84de5e: /* 84de5e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84de61: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84de66: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 84de69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84de6a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 84de6d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84de72u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84de72(); return;
}

void f_84de72(void) {
  LOAD_REGS();
L_84de72: /* 84de72: push 0xa16a38 */
  { uint32_t v = 0xa16a38u; esp -= 4; W32(esp, v); }
/* 84de77: push 0xae44d0 */
  { uint32_t v = 0xae44d0u; esp -= 4; W32(esp, v); }
/* 84de7c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84de82u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84de82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84de85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84de87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84de89: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84de8eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84de8e: guest_badaddr(0x84de8e); return;
}

void f_84e060(void) {
  LOAD_REGS();
L_84e060: /* 84e060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84e061: mov ebp, esp */
  ebp = esp;
/* 84e063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84e065: push 0x9d3d8a */
  { uint32_t v = 0x9d3d8au; esp -= 4; W32(esp, v); }
/* 84e06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84e070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84e078: sub esp, 0x174 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e07e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84e07f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84e082: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84e084: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84e085: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84e086: mov esi, ecx */
  esi = ecx;
/* 84e088: mov ecx, ebx */
  ecx = ebx;
/* 84e08a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84e08d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e094: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x84e096u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e096: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84e099: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84e09c: mov edx, dword ptr [ecx + 0x540] */
  edx = R32((uint32_t)(ecx + 0x540u));
/* 84e0a2: mov edi, 8 */
  edi = 0x8u;
/* 84e0a7: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e0a9: jne 0x84e0dc */
  if (!zf) goto L_84e0dc;
L_84e0ab: /* 84e0ab: mov eax, ecx */
  eax = ecx;
/* 84e0ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e0af: je 0x84e0c0 */
  if (zf) goto L_84e0c0;
L_84e0b1: /* 84e0b1: cmp dword ptr [eax + 0x540], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e0b7: jne 0x84e0c0 */
  if (!zf) goto L_84e0c0;
L_84e0b9: /* 84e0b9: mov eax, 1 */
  eax = 0x1u;
/* 84e0be: jmp 0x84e0c2 */
  goto L_84e0c2;
L_84e0c0: /* 84e0c0: xor eax, eax */
  eax = 0;
L_84e0c2: /* 84e0c2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84e0c4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84e0c6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84e0c8: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84e0cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e0cc: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 84e0ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e0d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e0d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e0d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e0d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84e0d7: mov ecx, ebx */
  ecx = ebx;
/* 84e0d9: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84e0dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84e0dc: /* 84e0dc: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 84e0e1: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e0e4: jne 0x84e11a */
  if (!zf) goto L_84e11a;
L_84e0e6: /* 84e0e6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84e0e9: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84e0eeu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84e0ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e0f0: je 0x84e11a */
  if (zf) goto L_84e11a;
L_84e0f2: /* 84e0f2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84e0f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e0f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e0f8: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 84e0fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e0ff: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84e103: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 84e107: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 84e10b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84e10f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e112: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e113: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e115: mov ecx, ebx */
  ecx = ebx;
/* 84e117: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x84e11au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84e11a: /* 84e11a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84e11b: mov ecx, esi */
  ecx = esi;
/* 84e11d: call 0x6c5efc */
  esp -= 4; W32(esp, 0x84e122u); SPILL(); f_6c5efc(); if (g_unwind) return; RELOAD();
/* 84e122: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84e125: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84e128: cmp dword ptr [edx + 0x540], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e12e: jne 0x84e618 */
  if (!zf) goto L_84e618;
L_84e134: /* 84e134: mov eax, dword ptr [0xcc9a90] */
  eax = R32((uint32_t)(0xcc9a90u));
/* 84e139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e13b: jne 0x84e1fb */
  if (!zf) goto L_84e1fb;
L_84e141: /* 84e141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e143: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 84e146: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84e14cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84e14c: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84e151: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 84e156: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84e15cu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84e15c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e15e: jne 0x84e178 */
  if (!zf) goto L_84e178;
L_84e160: /* 84e160: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84e165: push 0xae4590 */
  { uint32_t v = 0xae4590u; esp -= 4; W32(esp, v); }
/* 84e16a: push 0xae45d4 */
  { uint32_t v = 0xae45d4u; esp -= 4; W32(esp, v); }
/* 84e16f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84e175u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84e175: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84e178: /* 84e178: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84e17eu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84e17e: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84e184: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e186: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84e189: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e18b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e18c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e18e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e192: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84e197: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84e19du); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84e19d: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84e1a3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84e1a6: push 0xcc9a90 */
  { uint32_t v = 0xcc9a90u; esp -= 4; W32(esp, v); }
/* 84e1ab: mov dword ptr [0xcc9a90], eax */
  W32((uint32_t)(0xcc9a90u), eax);
/* 84e1b0: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84e1b5u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84e1b5: test byte ptr [0xcc9a8c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9a8cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84e1bc: jne 0x84e1eb */
  if (!zf) goto L_84e1eb;
L_84e1be: /* 84e1be: or dword ptr [0xcc9a8c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9a8cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9a8cu), r);
  }
/* 84e1c5: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 84e1c9: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 84e1cd: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 84e1d1: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84e1d5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e1d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e1d9: mov ecx, 0xcc9a74 */
  ecx = 0xcc9a74u;
/* 84e1de: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84e1e2: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x84e1e7u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 84e1e7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_84e1eb: /* 84e1eb: mov ecx, dword ptr [0xcc9a90] */
  ecx = R32((uint32_t)(0xcc9a90u));
/* 84e1f1: push 0xcc9a74 */
  { uint32_t v = 0xcc9a74u; esp -= 4; W32(esp, v); }
/* 84e1f6: call 0x6cccfc */
  esp -= 4; W32(esp, 0x84e1fbu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_84e1fb: /* 84e1fb: mov eax, dword ptr [0xcc9a70] */
  eax = R32((uint32_t)(0xcc9a70u));
/* 84e200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e202: jne 0x84e293 */
  if (!zf) goto L_84e293;
L_84e208: /* 84e208: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e20a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 84e20d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84e213u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84e213: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84e218: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84e21d: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84e223u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84e223: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e225: jne 0x84e23f */
  if (!zf) goto L_84e23f;
L_84e227: /* 84e227: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84e22c: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84e231: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84e236: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84e23cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84e23c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84e23f: /* 84e23f: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84e245u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84e245: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84e24b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e24d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84e250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e252: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e253: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e257: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e258: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e259: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84e25e: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84e264u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84e264: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84e26a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84e26d: push 0xcc9a70 */
  { uint32_t v = 0xcc9a70u; esp -= 4; W32(esp, v); }
/* 84e272: mov dword ptr [0xcc9a70], eax */
  W32((uint32_t)(0xcc9a70u), eax);
/* 84e277: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84e27cu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84e27c: mov eax, dword ptr [0xcc9a70] */
  eax = R32((uint32_t)(0xcc9a70u));
/* 84e281: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84e285: mov edx, dword ptr [0xcc9a90] */
  edx = R32((uint32_t)(0xcc9a90u));
/* 84e28b: mov eax, dword ptr [0xcc9a70] */
  eax = R32((uint32_t)(0xcc9a70u));
/* 84e290: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
L_84e293: /* 84e293: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84e296: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 84e29c: xor edi, edi */
  edi = 0;
/* 84e29e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 84e2a1: fmul dword ptr [0xa16ab0] */
  ST0 = ST0 * (F32((uint32_t)(0xa16ab0u)));
/* 84e2a7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 84e2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_84e2b0: /* 84e2b0: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 84e2b3: jae 0x84e45b */
  if (!cf) goto L_84e45b;
L_84e2b9: /* 84e2b9: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e2bc: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84e2bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e2c1: je 0x84e2d3 */
  if (zf) goto L_84e2d3;
L_84e2c3: /* 84e2c3: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e2ca: jne 0x84e2d3 */
  if (!zf) goto L_84e2d3;
L_84e2cc: /* 84e2cc: mov ecx, 1 */
  ecx = 0x1u;
/* 84e2d1: jmp 0x84e2d5 */
  goto L_84e2d5;
L_84e2d3: /* 84e2d3: xor ecx, ecx */
  ecx = 0;
L_84e2d5: /* 84e2d5: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84e2d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e2da: je 0x84e2ec */
  if (zf) goto L_84e2ec;
L_84e2dc: /* 84e2dc: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e2e3: jne 0x84e2ec */
  if (!zf) goto L_84e2ec;
L_84e2e5: /* 84e2e5: mov eax, 1 */
  eax = 0x1u;
/* 84e2ea: jmp 0x84e2ee */
  goto L_84e2ee;
L_84e2ec: /* 84e2ec: xor eax, eax */
  eax = 0;
L_84e2ee: /* 84e2ee: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84e2f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 84e2f1: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 84e2f3: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 84e2f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e2f7: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84e2fa: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84e2fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e2fe: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84e300: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e302: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84e305: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e307: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e308: not eax */
  eax = ~eax;
/* 84e30a: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 84e30c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e30d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 84e30f: mov ecx, ebx */
  ecx = ebx;
/* 84e311: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84e314u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e314: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84e317: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84e318: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84e31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e31e: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84e324: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84e329u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84e329: mov bl, byte ptr [ebp - 0x1c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
/* 84e32c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e32f: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 84e335: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 84e33b: shl bl, 6 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 6;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84e33e: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84e342: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 84e346: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 84e349: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84e34d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e351: mov ecx, dword ptr [0xcc9a70] */
  ecx = R32((uint32_t)(0xcc9a70u));
/* 84e357: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e358: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e35a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e35c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e35e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e360: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e362: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e365: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84e369: sub edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 84e36c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84e36f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e372: mov ecx, eax */
  ecx = eax;
/* 84e374: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 84e378: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84e37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e37f: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84e384u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84e384: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84e38a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e38e: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84e393u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84e393: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e396: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84e398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e39a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e39c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e39e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e3a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3a4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84e3a6: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x84e3a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e3a9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e3ac: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e3af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e3b0: add edx, 0xd0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84e3b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e3b7: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 84e3bd: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84e3c2u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84e3c2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 84e3c6: mov byte ptr [ebp - 0x20], 0 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 84e3ca: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 84e3ce: mov byte ptr [ebp - 0x1e], bl */
  W8((uint32_t)(ebp + 0xffffffe2u), (ebx & 0xffu));
/* 84e3d1: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 84e3d5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84e3d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84e3da: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 84e3e0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84e3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e3e4: mov ecx, dword ptr [0xcc9a70] */
  ecx = R32((uint32_t)(0xcc9a70u));
/* 84e3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e3eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3f3: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 84e3f6: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84e3f9: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84e3fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e3fe: jge 0x84e406 */
  if ((sf == of)) goto L_84e406;
L_84e400: /* 84e400: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84e406: /* 84e406: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84e409: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84e40c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e40f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84e411: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 84e415: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e418: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 84e41c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84e41f: jge 0x84e427 */
  if ((sf == of)) goto L_84e427;
L_84e421: /* 84e421: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84e427: /* 84e427: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84e42a: add edx, -0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84e42d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84e430: mov ecx, eax */
  ecx = eax;
/* 84e432: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84e436: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e439: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84e43c: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84e441u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84e441: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 84e447: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e44b: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84e450u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84e450: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84e453: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 84e456: jmp 0x84e2b0 */
  goto L_84e2b0;
L_84e45b: /* 84e45b: mov edi, 4 */
  edi = 0x4u;
/* 84e460: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_84e463: /* 84e463: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 84e466: jae 0x84e618 */
  if (!cf) goto L_84e618;
L_84e46c: /* 84e46c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e46f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84e472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e474: je 0x84e486 */
  if (zf) goto L_84e486;
L_84e476: /* 84e476: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e47d: jne 0x84e486 */
  if (!zf) goto L_84e486;
L_84e47f: /* 84e47f: mov ecx, 1 */
  ecx = 0x1u;
/* 84e484: jmp 0x84e488 */
  goto L_84e488;
L_84e486: /* 84e486: xor ecx, ecx */
  ecx = 0;
L_84e488: /* 84e488: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84e48b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e48d: je 0x84e49f */
  if (zf) goto L_84e49f;
L_84e48f: /* 84e48f: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e496: jne 0x84e49f */
  if (!zf) goto L_84e49f;
L_84e498: /* 84e498: mov eax, 1 */
  eax = 0x1u;
/* 84e49d: jmp 0x84e4a1 */
  goto L_84e4a1;
L_84e49f: /* 84e49f: xor eax, eax */
  eax = 0;
L_84e4a1: /* 84e4a1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84e4a3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 84e4a4: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 84e4a6: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 84e4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e4aa: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84e4ad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84e4af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e4b1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84e4b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e4b5: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84e4b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e4ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e4bb: not eax */
  eax = ~eax;
/* 84e4bd: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 84e4bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e4c0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 84e4c2: mov ecx, ebx */
  ecx = ebx;
/* 84e4c4: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84e4c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e4c7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84e4ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84e4cb: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84e4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e4d1: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 84e4d7: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84e4dcu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84e4dc: mov ecx, eax */
  ecx = eax;
/* 84e4de: mov dl, byte ptr [ebp - 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 84e4e1: sub dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84e4e4: mov al, 0xb */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xbu) & 0xffu);
/* 84e4e6: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84e4e8: mov dl, 0x15 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 84e4ea: imul dl */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)((edx & 0xffu));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 84e4ec: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 84e4ee: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84e4f1: mov byte ptr [ebp - 0x1c], 0 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 84e4f5: mov byte ptr [ebp - 0x1b], bl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ebx & 0xffu));
/* 84e4f8: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 84e4fe: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 84e504: mov byte ptr [ebp - 0x1a], 0xff */
  W8((uint32_t)(ebp + 0xffffffe6u), 0xffu);
/* 84e508: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 84e50c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84e50f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e510: mov edx, dword ptr [0xcc9a70] */
  edx = R32((uint32_t)(0xcc9a70u));
/* 84e516: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e517: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e519: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e51b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e51d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e51f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e521: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e524: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 84e527: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 84e52a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84e52e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 84e532: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e535: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84e538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e53a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e53c: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84e541u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84e541: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 84e547: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e54b: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84e550u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84e550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e553: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e555: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e557: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e559: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e55b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e55d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e55f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e561: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84e563: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84e566u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e566: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84e569: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84e56c: add ecx, 0xd0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84e572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e573: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e574: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84e57a: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84e57fu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84e57f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84e581: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e584: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 84e58a: mov byte ptr [ebp - 0x20], 0 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 84e58e: mov byte ptr [ebp - 0x1f], bl */
  W8((uint32_t)(ebp + 0xffffffe1u), (ebx & 0xffu));
/* 84e591: mov byte ptr [ebp - 0x1e], 0xff */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xffu);
/* 84e595: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 84e599: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84e59c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e59d: mov ecx, dword ptr [0xcc9a70] */
  ecx = R32((uint32_t)(0xcc9a70u));
/* 84e5a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e5a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e5a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e5a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e5aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e5ac: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 84e5af: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84e5b2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 84e5b6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84e5b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e5bb: jge 0x84e5c3 */
  if ((sf == of)) goto L_84e5c3;
L_84e5bd: /* 84e5bd: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84e5c3: /* 84e5c3: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84e5c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e5c9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e5cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84e5ce: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 84e5d2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e5d5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 84e5d9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84e5dc: jge 0x84e5e4 */
  if ((sf == of)) goto L_84e5e4;
L_84e5de: /* 84e5de: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84e5e4: /* 84e5e4: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84e5e7: add edx, -0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84e5ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84e5ed: mov ecx, eax */
  ecx = eax;
/* 84e5ef: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84e5f3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84e5f6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84e5f9: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84e5feu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84e5fe: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84e604: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e608: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84e60du); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84e60d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84e610: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 84e613: jmp 0x84e463 */
  goto L_84e463;
L_84e618: /* 84e618: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84e61b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e61c: call 0x6c8a26 */
  esp -= 4; W32(esp, 0x84e621u); SPILL(); f_6c8a26(); if (g_unwind) return; RELOAD();
/* 84e621: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84e624: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 84e627: mov ecx, dword ptr [ecx + 0x9c] */
  ecx = R32((uint32_t)(ecx + 0x9cu));
/* 84e62d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84e630: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e632: je 0x84e639 */
  if (zf) goto L_84e639;
L_84e634: /* 84e634: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x84e639u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_84e639: /* 84e639: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84e63b: mov ecx, ebx */
  ecx = ebx;
/* 84e63d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84e640u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e640: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84e643: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84e644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84e645: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84e64c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84e64d: mov esp, ebp */
  esp = ebp;
/* 84e64f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84e650: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84e653(void) {
  LOAD_REGS();
L_84e653: /* 84e653: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84e656: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84e65b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 84e65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84e65f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 84e662: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84e667u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84e667(); return;
}

void f_84e667(void) {
  LOAD_REGS();
L_84e667: /* 84e667: push 0xa16a74 */
  { uint32_t v = 0xa16a74u; esp -= 4; W32(esp, v); }
/* 84e66c: push 0xae44e0 */
  { uint32_t v = 0xae44e0u; esp -= 4; W32(esp, v); }
/* 84e671: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84e677u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84e677: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84e67a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e67c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e67e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84e683u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84e683: guest_badaddr(0x84e683); return;
}

void f_84e820(void) {
  LOAD_REGS();
L_84e820: /* 84e820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84e821: mov ebp, esp */
  ebp = esp;
/* 84e823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84e825: push 0x9d3e03 */
  { uint32_t v = 0x9d3e03u; esp -= 4; W32(esp, v); }
/* 84e82a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84e830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84e838: sub esp, 0x1a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84e83e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84e83f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84e842: mov eax, ecx */
  eax = ecx;
/* 84e844: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84e847: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84e848: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84e849: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 84e84c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e84f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e851: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84e854: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84e85b: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 84e85e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x84e860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e860: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e863: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84e866: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84e869: mov esi, dword ptr [ecx + 0x540] */
  esi = R32((uint32_t)(ecx + 0x540u));
/* 84e86f: mov edx, 8 */
  edx = 0x8u;
/* 84e874: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e876: jne 0x84e8aa */
  if (!zf) goto L_84e8aa;
L_84e878: /* 84e878: mov eax, ecx */
  eax = ecx;
/* 84e87a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e87c: je 0x84e88d */
  if (zf) goto L_84e88d;
L_84e87e: /* 84e87e: cmp dword ptr [eax + 0x540], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e884: jne 0x84e88d */
  if (!zf) goto L_84e88d;
L_84e886: /* 84e886: mov eax, 1 */
  eax = 0x1u;
/* 84e88b: jmp 0x84e88f */
  goto L_84e88f;
L_84e88d: /* 84e88d: xor eax, eax */
  eax = 0;
L_84e88f: /* 84e88f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e892: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 84e894: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84e896: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84e898: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84e89b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e89c: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 84e89e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e8a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e8a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e8a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e8a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e8a7: call dword ptr [esi + 0x40] */
  { uint32_t t = R32((uint32_t)(esi + 0x40u)); esp -= 4; W32(esp, 0x84e8aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84e8aa: /* 84e8aa: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 84e8b0: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84e8b3: jne 0x84e8ed */
  if (!zf) goto L_84e8ed;
L_84e8b5: /* 84e8b5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e8b8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84e8bb: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84e8c0u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84e8c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e8c2: je 0x84e8ed */
  if (zf) goto L_84e8ed;
L_84e8c4: /* 84e8c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e8c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e8c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e8cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e8cd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 84e8d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e8d4: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84e8d8: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 84e8dc: mov byte ptr [ebp - 0x16], 0 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x0u);
/* 84e8e0: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84e8e4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84e8e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e8e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e8ea: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x84e8edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84e8ed: /* 84e8ed: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e8f0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84e8f3: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 84e8f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84e8f8: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x84e8fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e8fb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e8fe: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84e901: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 84e904: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 84e90a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e90c: je 0x84e913 */
  if (zf) goto L_84e913;
L_84e90e: /* 84e90e: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x84e913u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_84e913: /* 84e913: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 84e919: mov edx, dword ptr [0xce849c] */
  edx = R32((uint32_t)(0xce849cu));
/* 84e91f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 84e922: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84e924: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 84e926: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e929: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84e92c: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84e92f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e931: je 0x84e93c */
  if (zf) goto L_84e93c;
L_84e933: /* 84e933: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 84e936: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e937: call 0x6c9917 */
  esp -= 4; W32(esp, 0x84e93cu); SPILL(); f_6c9917(); if (g_unwind) return; RELOAD();
L_84e93c: /* 84e93c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 84e941: mov ecx, dword ptr [0xce849c] */
  ecx = R32((uint32_t)(0xce849cu));
/* 84e947: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 84e94a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84e94c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e94e: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84e951: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84e953: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84e955: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e958: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84e95b: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 84e961: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84e963: je 0x84e9ed */
  if (zf) goto L_84e9ed;
L_84e969: /* 84e969: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84e96c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84e96e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e972: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e974: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e976: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84e97a: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 84e97e: mov byte ptr [ebp - 0x16], 0 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x0u);
/* 84e982: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84e986: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84e989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e98a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84e98c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x84e98fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e98f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e992: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84e995: mov edx, dword ptr [eax + 0x120] */
  edx = R32((uint32_t)(eax + 0x120u));
/* 84e99b: mov dword ptr [eax + 0x94], edx */
  W32((uint32_t)(eax + 0x94u), edx);
/* 84e9a1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e9a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84e9a6: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0x84e9a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e9a9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84e9ac: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 84e9af: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 84e9b5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84e9b8: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 84e9ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 84e9bc: fdiv dword ptr [esi + 0x94] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x94u)));
/* 84e9c2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 84e9c4: call 0x99c958 */
  esp -= 4; W32(esp, 0x84e9c9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84e9c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84e9cb: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 84e9d1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 84e9d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e9d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84e9d5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 84e9db: call 0x99c958 */
  esp -= 4; W32(esp, 0x84e9e0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84e9e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84e9e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84e9e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84e9e5: mov ecx, ebx */
  ecx = ebx;
/* 84e9e7: call dword ptr [edi + 0xc] */
  { uint32_t t = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, 0x84e9eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84e9ea: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_84e9ed: /* 84e9ed: mov esi, dword ptr [edi + 0x574] */
  esi = R32((uint32_t)(edi + 0x574u));
/* 84e9f3: xor ebx, ebx */
  ebx = 0;
L_84e9f5: /* 84e9f5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 84e9f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84e9f8: jl 0x84ea24 */
  if ((sf != of)) goto L_84ea24;
L_84e9fa: /* 84e9fa: mov eax, dword ptr [edi + 0x570] */
  eax = R32((uint32_t)(edi + 0x570u));
/* 84ea00: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 84ea03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84ea06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ea08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ea09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84ea0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ea10: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x84ea13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ea13: mov ecx, dword ptr [edi + 0x570] */
  ecx = R32((uint32_t)(edi + 0x570u));
/* 84ea19: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 84ea1c: test byte ptr [edx + 0x2c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x2cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84ea20: mov ebx, esi */
  ebx = esi;
/* 84ea22: je 0x84e9f5 */
  if (zf) goto L_84e9f5;
L_84ea24: /* 84ea24: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84ea27: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ea2b: call 0x6c5efc */
  esp -= 4; W32(esp, 0x84ea30u); SPILL(); f_6c5efc(); if (g_unwind) return; RELOAD();
/* 84ea30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea33: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84ea36: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 84ea39: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 84ea3f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ea41: je 0x84ea48 */
  if (zf) goto L_84ea48;
L_84ea43: /* 84ea43: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x84ea48u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_84ea48: /* 84ea48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea4b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84ea4e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 84ea54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ea56: je 0x84ea8a */
  if (zf) goto L_84ea8a;
L_84ea58: /* 84ea58: mov dword ptr [eax + 0x94], 0x3f800000 */
  W32((uint32_t)(eax + 0x94u), 0x3f800000u);
/* 84ea62: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ea67: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x84ea6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ea6a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ea6d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84ea70: mov esi, dword ptr [eax + 0x8c] */
  esi = R32((uint32_t)(eax + 0x8cu));
/* 84ea76: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 84ea7c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84ea7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ea81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ea82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ea83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ea85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ea87: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x84ea8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84ea8a: /* 84ea8a: mov esi, ebx */
  esi = ebx;
/* 84ea8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84ea90: /* 84ea90: cmp esi, dword ptr [edi + 0x574] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x574u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84ea96: jge 0x84eac3 */
  if ((sf == of)) goto L_84eac3;
L_84ea98: /* 84ea98: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84ea9b: mov ecx, dword ptr [edi + 0x570] */
  ecx = R32((uint32_t)(edi + 0x570u));
/* 84eaa1: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 84eaa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84eaa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84eaa7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eaaa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84eaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84eaae: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x84eab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84eab1: mov ecx, dword ptr [edi + 0x570] */
  ecx = R32((uint32_t)(edi + 0x570u));
/* 84eab7: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 84eaba: test byte ptr [edx + 0x2c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x2cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84eabe: jne 0x84eac3 */
  if (!zf) goto L_84eac3;
L_84eac0: /* 84eac0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84eac1: jmp 0x84ea90 */
  goto L_84ea90;
L_84eac3: /* 84eac3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84eac6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84eac8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 84eaca: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0x84eacdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84eacd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ead0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 84ead3: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x84ead9u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 84ead9: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 84eadc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84eade: je 0x84eaf0 */
  if (zf) goto L_84eaf0;
L_84eae0: /* 84eae0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eae3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84eae6: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 84eae9: add eax, 0x5e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5e0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84eaee: jmp 0x84eb08 */
  goto L_84eb08;
L_84eaf0: /* 84eaf0: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 84eaf7: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 84eafe: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 84eb05: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
L_84eb08: /* 84eb08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84eb0a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84eb0d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84eb10: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 84eb13: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eb16: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 84eb19: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 84eb1c: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 84eb1f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x84eb25u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 84eb25: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 84eb28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84eb2a: je 0x84eb3c */
  if (zf) goto L_84eb3c;
L_84eb2c: /* 84eb2c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eb2f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84eb32: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 84eb35: add eax, 0x5ec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84eb3a: jmp 0x84eb54 */
  goto L_84eb54;
L_84eb3c: /* 84eb3c: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 84eb43: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 84eb4a: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 84eb51: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
L_84eb54: /* 84eb54: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84eb57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84eb59: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84eb5c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84eb62: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84eb65: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 84eb68: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 84eb6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84eb6d: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 84eb70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84eb73: jp 0x84eb7e */
  if (pf) goto L_84eb7e;
L_84eb75: /* 84eb75: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 84eb7c: jmp 0x84eb95 */
  goto L_84eb95;
L_84eb7e: /* 84eb7e: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84eb81: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84eb87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84eb89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84eb8c: jnp 0x84eb95 */
  if (!pf) goto L_84eb95;
L_84eb8e: /* 84eb8e: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
L_84eb95: /* 84eb95: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84eb98: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84eb9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84eba0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84eba3: jp 0x84ebae */
  if (pf) goto L_84ebae;
L_84eba5: /* 84eba5: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 84ebac: jmp 0x84ebc5 */
  goto L_84ebc5;
L_84ebae: /* 84ebae: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84ebb1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84ebb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ebb9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ebbc: jnp 0x84ebc5 */
  if (!pf) goto L_84ebc5;
L_84ebbe: /* 84ebbe: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
L_84ebc5: /* 84ebc5: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84ebc8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84ebce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ebd0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ebd3: jp 0x84ebde */
  if (pf) goto L_84ebde;
L_84ebd5: /* 84ebd5: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 84ebdc: jmp 0x84ebf5 */
  goto L_84ebf5;
L_84ebde: /* 84ebde: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84ebe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84ebe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ebe9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ebec: jnp 0x84ebf5 */
  if (!pf) goto L_84ebf5;
L_84ebee: /* 84ebee: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
L_84ebf5: /* 84ebf5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84ebf8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84ebfe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ec00: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ec03: jp 0x84ec0e */
  if (pf) goto L_84ec0e;
L_84ec05: /* 84ec05: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 84ec0c: jmp 0x84ec25 */
  goto L_84ec25;
L_84ec0e: /* 84ec0e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84ec11: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84ec17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ec19: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ec1c: jnp 0x84ec25 */
  if (!pf) goto L_84ec25;
L_84ec1e: /* 84ec1e: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
L_84ec25: /* 84ec25: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84ec28: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84ec2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ec30: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84ec33: jp 0x84ee9a */
  if (pf) goto L_84ee9a;
L_84ec39: /* 84ec39: test byte ptr [0xcc9ad4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9ad4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84ec40: jne 0x84ec6f */
  if (!zf) goto L_84ec6f;
L_84ec42: /* 84ec42: or dword ptr [0xcc9ad4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9ad4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9ad4u), r);
  }
/* 84ec49: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 84ec4d: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 84ec51: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 84ec55: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84ec59: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84ec5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ec5d: mov ecx, 0xcc9abc */
  ecx = 0xcc9abcu;
/* 84ec62: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84ec66: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x84ec6bu); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 84ec6b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_84ec6f: /* 84ec6f: mov eax, dword ptr [0xcc9ab8] */
  eax = R32((uint32_t)(0xcc9ab8u));
/* 84ec74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ec76: jne 0x84ed5b */
  if (!zf) goto L_84ed5b;
L_84ec7c: /* 84ec7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ec7e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84ec81: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84ec87u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84ec87: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84ec8c: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 84ec91: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84ec97u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84ec97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ec99: jne 0x84ecb3 */
  if (!zf) goto L_84ecb3;
L_84ec9b: /* 84ec9b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84eca0: push 0xae4590 */
  { uint32_t v = 0xae4590u; esp -= 4; W32(esp, v); }
/* 84eca5: push 0xae45d4 */
  { uint32_t v = 0xae45d4u; esp -= 4; W32(esp, v); }
/* 84ecaa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84ecb0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84ecb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84ecb3: /* 84ecb3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84ecb9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84ecb9: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 84ecbf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84ecc1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84ecc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ecc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ecc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84eccb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84eccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84eccd: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84ecd2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84ecd8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84ecd8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84ecde: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ece1: push 0xcc9ab8 */
  { uint32_t v = 0xcc9ab8u; esp -= 4; W32(esp, v); }
/* 84ece6: mov dword ptr [0xcc9ab8], eax */
  W32((uint32_t)(0xcc9ab8u), eax);
/* 84eceb: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84ecf0u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84ecf0: mov ebx, dword ptr [0xcc9ab8] */
  ebx = R32((uint32_t)(0xcc9ab8u));
/* 84ecf6: mov esi, ebx */
  esi = ebx;
/* 84ecf8: add ebx, 0x50 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 84ecfb: mov dword ptr [ebx], 0xcc9abc */
  W32((uint32_t)(ebx), 0xcc9abcu);
/* 84ed01: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84ed03: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84ed05: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x84ed08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed08: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84ed0a: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 84ed0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ed0f: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x84ed12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed12: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84ed14: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 84ed17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84ed19: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84ed1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed1c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84ed1e: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 84ed21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ed23: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x84ed26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed26: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 84ed28: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 84ed2b: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 84ed2e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84ed30: mov ecx, ebx */
  ecx = ebx;
/* 84ed32: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x84ed35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed35: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 84ed38: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
/* 84ed3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ed3f: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 84ed42: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 84ed45: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84ed47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed47: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 84ed4a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ed4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ed4e: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 84ed51: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84ed53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ed53: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ed56: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 84ed59: jmp 0x84ed61 */
  goto L_84ed61;
L_84ed5b: /* 84ed5b: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
L_84ed61: /* 84ed61: mov eax, dword ptr [0xcc9ab4] */
  eax = R32((uint32_t)(0xcc9ab4u));
/* 84ed66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ed68: jne 0x84ee03 */
  if (!zf) goto L_84ee03;
L_84ed6e: /* 84ed6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ed70: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84ed73: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84ed79u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84ed79: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84ed7e: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84ed83: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84ed89u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84ed89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ed8b: jne 0x84eda5 */
  if (!zf) goto L_84eda5;
L_84ed8d: /* 84ed8d: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84ed92: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84ed97: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84ed9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84eda2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84eda2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84eda5: /* 84eda5: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84edabu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84edab: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84edb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84edb3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84edb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84edb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84edb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84edbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84edbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84edbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84edbf: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84edc4: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84edcau); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84edca: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84edd0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84edd3: push 0xcc9ab4 */
  { uint32_t v = 0xcc9ab4u; esp -= 4; W32(esp, v); }
/* 84edd8: mov dword ptr [0xcc9ab4], eax */
  W32((uint32_t)(0xcc9ab4u), eax);
/* 84eddd: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84ede2u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84ede2: mov edx, dword ptr [0xcc9ab4] */
  edx = R32((uint32_t)(0xcc9ab4u));
/* 84ede8: mov byte ptr [edx + 0x3c], 2 */
  W8((uint32_t)(edx + 0x3cu), 0x2u);
/* 84edec: mov eax, dword ptr [0xcc9ab4] */
  eax = R32((uint32_t)(0xcc9ab4u));
/* 84edf1: mov ecx, dword ptr [0xcc9ab8] */
  ecx = R32((uint32_t)(0xcc9ab8u));
/* 84edf7: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 84edfa: mov eax, dword ptr [0xcc9ab4] */
  eax = R32((uint32_t)(0xcc9ab4u));
/* 84edff: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_84ee03: /* 84ee03: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ee06: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 84ee09: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84ee0c: add ecx, 0xd0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84ee12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ee13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ee14: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84ee1a: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84ee1fu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84ee1f: mov esi, eax */
  esi = eax;
/* 84ee21: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84ee27: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84ee2a: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 84ee2d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84ee30: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 84ee33: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 84ee36: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 84ee39: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 84ee3c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 84ee3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ee40: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 84ee43: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 84ee47: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 84ee4a: call 0x6c576d */
  esp -= 4; W32(esp, 0x84ee4fu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 84ee4f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84ee51: mov eax, dword ptr [0xcc9ab4] */
  eax = R32((uint32_t)(0xcc9ab4u));
/* 84ee56: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ee59: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 84ee5c: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 84ee62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ee63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ee64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee6e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ee71: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84ee75: fild dword ptr [ecx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x88u)); FPUSH(v); }
/* 84ee7b: mov ecx, esi */
  ecx = esi;
/* 84ee7d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84ee80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ee84: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84ee89u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84ee89: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84ee8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84ee93: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84ee98u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84ee98: jmp 0x84eea0 */
  goto L_84eea0;
L_84ee9a: /* 84ee9a: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
L_84eea0: /* 84eea0: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 84eea6: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84eea9: jne 0x84ef4f */
  if (!zf) goto L_84ef4f;
L_84eeaf: /* 84eeaf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eeb2: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84eeb5: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84eeb8: test byte ptr [ecx + 0x534], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x534u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84eebf: je 0x84ef4f */
  if (zf) goto L_84ef4f;
L_84eec5: /* 84eec5: mov eax, dword ptr [0xcfa40c] */
  eax = R32((uint32_t)(0xcfa40cu));
/* 84eeca: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 84eecd: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 84eed3: mov eax, dword ptr [0xce8494] */
  eax = R32((uint32_t)(0xce8494u));
/* 84eed8: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84eedb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84eedd: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 84eedf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84eee2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84eee5: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 84eee8: mov esi, dword ptr [edx + 0x648] */
  esi = R32((uint32_t)(edx + 0x648u));
/* 84eeee: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84eef0: je 0x84ef16 */
  if (zf) goto L_84ef16;
L_84eef2: /* 84eef2: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 84eef5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84eef8: mov eax, dword ptr [0xb7e3a4] */
  eax = R32((uint32_t)(0xb7e3a4u));
/* 84eefd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84eeff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ef00: mov ecx, esi */
  ecx = esi;
/* 84ef02: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x84ef08u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 84ef08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84ef0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ef0c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84ef0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ef10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ef11: mov ecx, esi */
  ecx = esi;
/* 84ef13: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x84ef16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84ef16: /* 84ef16: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ef19: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84ef1c: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 84ef1f: mov ecx, dword ptr [ecx + 0x9c] */
  ecx = R32((uint32_t)(ecx + 0x9cu));
/* 84ef25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ef27: je 0x84ef2e */
  if (zf) goto L_84ef2e;
L_84ef29: /* 84ef29: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x84ef2eu); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_84ef2e: /* 84ef2e: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 84ef34: mov eax, dword ptr [0xce8494] */
  eax = R32((uint32_t)(0xce8494u));
/* 84ef39: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84ef3c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84ef3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ef40: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84ef43: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84ef45: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84ef47: mov eax, dword ptr [0xcfa40c] */
  eax = R32((uint32_t)(0xcfa40cu));
/* 84ef4c: and dword ptr [eax], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_84ef4f: /* 84ef4f: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 84ef55: mov edx, dword ptr [0xce849c] */
  edx = R32((uint32_t)(0xce849cu));
/* 84ef5b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 84ef5e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84ef60: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 84ef62: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ef65: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84ef68: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84ef6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ef6d: je 0x84ef78 */
  if (zf) goto L_84ef78;
L_84ef6f: /* 84ef6f: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 84ef72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ef73: call 0x6cb3d4 */
  esp -= 4; W32(esp, 0x84ef78u); SPILL(); f_6cb3d4(); if (g_unwind) return; RELOAD();
L_84ef78: /* 84ef78: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 84ef7d: mov ecx, dword ptr [0xce849c] */
  ecx = R32((uint32_t)(0xce849cu));
/* 84ef83: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 84ef86: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84ef88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84ef8a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84ef8d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84ef8f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84ef91: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 84ef97: mov eax, dword ptr [0xce8448] */
  eax = R32((uint32_t)(0xce8448u));
/* 84ef9c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84ef9f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84efa1: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 84efa3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84efa6: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 84efac: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 84efaf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84efb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84efb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84efb4: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 84efb9: call 0x6ca7db */
  esp -= 4; W32(esp, 0x84efbeu); SPILL(); f_6ca7db(); if (g_unwind) return; RELOAD();
/* 84efbe: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 84efc4: mov edx, dword ptr [0xce8448] */
  edx = R32((uint32_t)(0xce8448u));
/* 84efca: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 84efcd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84efcf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84efd1: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84efd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84efd6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84efd8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84efdb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84efde: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84efe1: cmp dword ptr [edx + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84efe8: jne 0x84f54a */
  if (!zf) goto L_84f54a;
L_84efee: /* 84efee: mov eax, dword ptr [0xcc9ab0] */
  eax = R32((uint32_t)(0xcc9ab0u));
/* 84eff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84eff5: jne 0x84f108 */
  if (!zf) goto L_84f108;
L_84effb: /* 84effb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84effd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84f000: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84f006u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84f006: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84f00b: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 84f010: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84f016u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84f016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f018: jne 0x84f032 */
  if (!zf) goto L_84f032;
L_84f01a: /* 84f01a: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84f01f: push 0xae4590 */
  { uint32_t v = 0xae4590u; esp -= 4; W32(esp, v); }
/* 84f024: push 0xae45d4 */
  { uint32_t v = 0xae45d4u; esp -= 4; W32(esp, v); }
/* 84f029: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84f02fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84f02f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84f032: /* 84f032: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84f038u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84f038: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84f03e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f040: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84f043: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f045: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f046: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f04a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f04b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f04c: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84f051: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84f057u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84f057: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84f05d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f060: push 0xcc9ab0 */
  { uint32_t v = 0xcc9ab0u; esp -= 4; W32(esp, v); }
/* 84f065: mov dword ptr [0xcc9ab0], eax */
  W32((uint32_t)(0xcc9ab0u), eax);
/* 84f06a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84f06fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84f06f: test byte ptr [0xcc9ad4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9ad4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84f076: jne 0x84f0a5 */
  if (!zf) goto L_84f0a5;
L_84f078: /* 84f078: or dword ptr [0xcc9ad4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9ad4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9ad4u), r);
  }
/* 84f07f: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 84f083: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 84f087: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 84f08b: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84f08f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84f092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f093: mov ecx, 0xcc9a98 */
  ecx = 0xcc9a98u;
/* 84f098: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 84f09c: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x84f0a1u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 84f0a1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_84f0a5: /* 84f0a5: mov ebx, dword ptr [0xcc9ab0] */
  ebx = R32((uint32_t)(0xcc9ab0u));
/* 84f0ab: mov esi, ebx */
  esi = ebx;
/* 84f0ad: add ebx, 0x50 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 84f0b0: mov dword ptr [ebx], 0xcc9a98 */
  W32((uint32_t)(ebx), 0xcc9a98u);
/* 84f0b6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84f0b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84f0ba: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x84f0bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0bd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84f0bf: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 84f0c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f0c4: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x84f0c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0c7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84f0c9: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 84f0cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84f0ce: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84f0d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0d1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84f0d3: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 84f0d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f0d8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x84f0dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0db: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 84f0dd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 84f0e0: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 84f0e3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84f0e5: mov ecx, ebx */
  ecx = ebx;
/* 84f0e7: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x84f0eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0ea: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 84f0ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f0ee: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 84f0f1: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 84f0f4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84f0f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f0f6: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 84f0f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f0fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f0fd: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 84f100: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84f102u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f102: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f105: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_84f108: /* 84f108: mov eax, dword ptr [0xcc9a94] */
  eax = R32((uint32_t)(0xcc9a94u));
/* 84f10d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f10f: jne 0x84f1a0 */
  if (!zf) goto L_84f1a0;
L_84f115: /* 84f115: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f117: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84f11a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84f120u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84f120: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84f125: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84f12a: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84f130u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84f130: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f132: jne 0x84f14c */
  if (!zf) goto L_84f14c;
L_84f134: /* 84f134: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84f139: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84f13e: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84f143: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84f149u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84f149: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84f14c: /* 84f14c: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84f152u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84f152: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84f158: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f15a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84f15d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f15f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f164: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f166: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84f16b: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84f171u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84f171: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84f177: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f17a: push 0xcc9a94 */
  { uint32_t v = 0xcc9a94u; esp -= 4; W32(esp, v); }
/* 84f17f: mov dword ptr [0xcc9a94], eax */
  W32((uint32_t)(0xcc9a94u), eax);
/* 84f184: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84f189u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84f189: mov eax, dword ptr [0xcc9a94] */
  eax = R32((uint32_t)(0xcc9a94u));
/* 84f18e: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84f192: mov edx, dword ptr [0xcc9ab0] */
  edx = R32((uint32_t)(0xcc9ab0u));
/* 84f198: mov eax, dword ptr [0xcc9a94] */
  eax = R32((uint32_t)(0xcc9a94u));
/* 84f19d: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
L_84f1a0: /* 84f1a0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f1a3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f1a6: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 84f1ac: xor ebx, ebx */
  ebx = 0;
/* 84f1ae: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 84f1b1: fmul dword ptr [0xa16ab0] */
  ST0 = ST0 * (F32((uint32_t)(0xa16ab0u)));
/* 84f1b7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84f1ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_84f1c0: /* 84f1c0: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 84f1c3: jae 0x84f37b */
  if (!cf) goto L_84f37b;
L_84f1c9: /* 84f1c9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f1cc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84f1cf: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84f1d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f1d4: je 0x84f1e6 */
  if (zf) goto L_84f1e6;
L_84f1d6: /* 84f1d6: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f1dd: jne 0x84f1e6 */
  if (!zf) goto L_84f1e6;
L_84f1df: /* 84f1df: mov edx, 1 */
  edx = 0x1u;
/* 84f1e4: jmp 0x84f1e8 */
  goto L_84f1e8;
L_84f1e6: /* 84f1e6: xor edx, edx */
  edx = 0;
L_84f1e8: /* 84f1e8: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84f1eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f1ed: je 0x84f1ff */
  if (zf) goto L_84f1ff;
L_84f1ef: /* 84f1ef: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f1f6: jne 0x84f1ff */
  if (!zf) goto L_84f1ff;
L_84f1f8: /* 84f1f8: mov eax, 1 */
  eax = 0x1u;
/* 84f1fd: jmp 0x84f201 */
  goto L_84f201;
L_84f1ff: /* 84f1ff: xor eax, eax */
  eax = 0;
L_84f201: /* 84f201: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f204: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 84f206: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 84f208: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 84f20a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f20c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f20e: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 84f211: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84f213: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84f215: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f217: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84f21a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f21c: not eax */
  eax = ~eax;
/* 84f21e: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 84f221: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f222: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 84f224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f225: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 84f227: call dword ptr [edi + 0x40] */
  { uint32_t t = R32((uint32_t)(edi + 0x40u)); esp -= 4; W32(esp, 0x84f22au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f22a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f22d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f230: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84f233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f234: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84f239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f23a: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84f240: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84f245u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84f245: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f248: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f24b: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 84f251: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 84f257: shl bl, 6 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 6;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84f25a: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84f25e: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 84f262: mov byte ptr [ebp - 0x16], bl */
  W8((uint32_t)(ebp + 0xffffffeau), (ebx & 0xffu));
/* 84f265: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84f269: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84f26c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f26d: mov ecx, dword ptr [0xcc9a94] */
  ecx = R32((uint32_t)(0xcc9a94u));
/* 84f273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f274: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f276: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f278: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f27a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f27c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f27e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84f281: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84f285: sub edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 84f288: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 84f28b: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f28e: mov ecx, eax */
  ecx = eax;
/* 84f290: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 84f294: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84f297: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f29b: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84f2a0u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84f2a0: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84f2a6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84f2aa: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84f2afu); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84f2af: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f2b2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84f2b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f2b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f2b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f2ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f2bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f2be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f2c0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84f2c2: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x84f2c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f2c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f2c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f2cb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84f2ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f2cf: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84f2d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f2d5: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 84f2db: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84f2e0u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84f2e0: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 84f2e4: mov byte ptr [ebp - 0x24], 0 */
  W8((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 84f2e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84f2ea: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f2ed: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f2f0: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 84f2f6: mov byte ptr [ebp - 0x23], 0xff */
  W8((uint32_t)(ebp + 0xffffffddu), 0xffu);
/* 84f2fa: mov byte ptr [ebp - 0x22], bl */
  W8((uint32_t)(ebp + 0xffffffdeu), (ebx & 0xffu));
/* 84f2fd: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 84f301: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84f304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f305: mov ecx, dword ptr [0xcc9a94] */
  ecx = R32((uint32_t)(0xcc9a94u));
/* 84f30b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f30c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f30e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f310: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f314: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 84f317: fild dword ptr [ebp - 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84f31a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 84f31d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f31f: jge 0x84f327 */
  if ((sf == of)) goto L_84f327;
L_84f321: /* 84f321: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84f327: /* 84f327: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84f32a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84f32d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84f330: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84f332: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 84f336: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f339: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 84f33d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84f340: jge 0x84f348 */
  if ((sf == of)) goto L_84f348;
L_84f342: /* 84f342: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84f348: /* 84f348: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84f34b: add edx, -0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84f34e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 84f351: mov ecx, eax */
  ecx = eax;
/* 84f353: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84f357: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f35a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84f35d: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84f362u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84f362: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 84f368: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84f36c: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84f371u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84f371: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 84f374: mov ebx, esi */
  ebx = esi;
/* 84f376: jmp 0x84f1c0 */
  goto L_84f1c0;
L_84f37b: /* 84f37b: mov ebx, 4 */
  ebx = 0x4u;
/* 84f380: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_84f383: /* 84f383: cmp ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 84f386: jae 0x84f54a */
  if (!cf) goto L_84f54a;
L_84f38c: /* 84f38c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f38f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84f392: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84f395: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f397: je 0x84f3a9 */
  if (zf) goto L_84f3a9;
L_84f399: /* 84f399: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f3a0: jne 0x84f3a9 */
  if (!zf) goto L_84f3a9;
L_84f3a2: /* 84f3a2: mov edx, 1 */
  edx = 0x1u;
/* 84f3a7: jmp 0x84f3ab */
  goto L_84f3ab;
L_84f3a9: /* 84f3a9: xor edx, edx */
  edx = 0;
L_84f3ab: /* 84f3ab: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84f3ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f3b0: je 0x84f3c2 */
  if (zf) goto L_84f3c2;
L_84f3b2: /* 84f3b2: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f3b9: jne 0x84f3c2 */
  if (!zf) goto L_84f3c2;
L_84f3bb: /* 84f3bb: mov eax, 1 */
  eax = 0x1u;
/* 84f3c0: jmp 0x84f3c4 */
  goto L_84f3c4;
L_84f3c2: /* 84f3c2: xor eax, eax */
  eax = 0;
L_84f3c4: /* 84f3c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f3c7: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 84f3c9: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 84f3cb: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 84f3cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f3cf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f3d1: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 84f3d4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84f3d6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84f3d8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f3da: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84f3dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f3df: not eax */
  eax = ~eax;
/* 84f3e1: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 84f3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f3e5: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 84f3e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f3e8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 84f3ea: call dword ptr [edi + 0x40] */
  { uint32_t t = R32((uint32_t)(edi + 0x40u)); esp -= 4; W32(esp, 0x84f3edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f3ed: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f3f0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f3f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84f3f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f3f7: add edx, 0xd0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84f3fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f3fe: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 84f404: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84f409u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84f409: mov ecx, eax */
  ecx = eax;
/* 84f40b: mov al, 0xb */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xbu) & 0xffu);
/* 84f40d: sub bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84f410: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 84f412: mov dl, 0x15 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 84f414: imul dl */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)((edx & 0xffu));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 84f416: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 84f418: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f41b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84f41e: mov byte ptr [ebp - 0x24], 0 */
  W8((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 84f422: mov byte ptr [ebp - 0x23], bl */
  W8((uint32_t)(ebp + 0xffffffddu), (ebx & 0xffu));
/* 84f425: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 84f42b: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 84f431: mov byte ptr [ebp - 0x22], 0xff */
  W8((uint32_t)(ebp + 0xffffffdeu), 0xffu);
/* 84f435: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 84f439: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84f43c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f43d: mov edx, dword ptr [0xcc9a94] */
  edx = R32((uint32_t)(0xcc9a94u));
/* 84f443: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f446: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f44a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f44c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f44e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84f451: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 84f454: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 84f457: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84f45b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 84f45f: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f462: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84f465: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f467: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f469: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84f46eu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84f46e: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 84f474: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84f478: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84f47du); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84f47d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f480: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f482: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f484: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f486: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f488: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f48a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f48c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f48e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84f490: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84f493u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f493: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f496: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 84f499: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f49c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f49d: add edx, 0xd0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84f4a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84f4a4: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84f4aa: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84f4afu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84f4af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84f4b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f4b4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f4b7: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 84f4bd: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84f4c1: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 84f4c4: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 84f4c8: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 84f4cc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84f4cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f4d0: mov ecx, dword ptr [0xcc9a94] */
  ecx = R32((uint32_t)(0xcc9a94u));
/* 84f4d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f4d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f4d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f4db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f4dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f4df: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 84f4e2: fild dword ptr [ebp - 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84f4e5: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 84f4e9: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 84f4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f4ee: jge 0x84f4f6 */
  if ((sf == of)) goto L_84f4f6;
L_84f4f0: /* 84f4f0: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84f4f6: /* 84f4f6: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84f4f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84f4fc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84f4ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84f501: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 84f505: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f508: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 84f50c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84f50f: jge 0x84f517 */
  if ((sf == of)) goto L_84f517;
L_84f511: /* 84f511: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_84f517: /* 84f517: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84f51a: add edx, -0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84f51d: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 84f520: mov ecx, eax */
  ecx = eax;
/* 84f522: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84f526: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84f529: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84f52c: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84f531u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84f531: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 84f537: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84f53b: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84f540u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 84f540: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 84f543: mov ebx, esi */
  ebx = esi;
/* 84f545: jmp 0x84f383 */
  goto L_84f383;
L_84f54a: /* 84f54a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f54d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84f550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f551: call 0x6c8a26 */
  esp -= 4; W32(esp, 0x84f556u); SPILL(); f_6c8a26(); if (g_unwind) return; RELOAD();
/* 84f556: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84f559: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84f55c: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 84f55f: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 84f565: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f568: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f56a: je 0x84f571 */
  if (zf) goto L_84f571;
L_84f56c: /* 84f56c: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x84f571u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_84f571: /* 84f571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84f574: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84f576: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84f579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f579: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84f57c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84f57d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84f57e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84f585: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84f586: mov esp, ebp */
  esp = ebp;
/* 84f588: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84f589: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84f58c(void) {
  LOAD_REGS();
L_84f58c: /* 84f58c: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 84f58f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84f594: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 84f597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f598: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 84f59b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84f5a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84f5a0(); return;
}

void f_84f5a0(void) {
  LOAD_REGS();
L_84f5a0: /* 84f5a0: push 0xa16ab4 */
  { uint32_t v = 0xa16ab4u; esp -= 4; W32(esp, v); }
/* 84f5a5: push 0xae44e8 */
  { uint32_t v = 0xae44e8u; esp -= 4; W32(esp, v); }
/* 84f5aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84f5b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84f5b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84f5b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f5b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84f5b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84f5bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84f5bc: guest_badaddr(0x84f5bc); return;
}

void f_84f930(void) {
  LOAD_REGS();
L_84f930: /* 84f930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84f931: mov ebp, esp */
  ebp = esp;
/* 84f933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84f935: push 0x9d3e30 */
  { uint32_t v = 0x9d3e30u; esp -= 4; W32(esp, v); }
/* 84f93a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84f940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84f948: sub esp, 0x44c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84f94e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84f94f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84f950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84f951: mov ebx, ecx */
  ebx = ecx;
/* 84f953: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84f956: xor edi, edi */
  edi = 0;
/* 84f958: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 84f95d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 84f960: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 84f963: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 84f966: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x84f96cu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 84f96c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84f96f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84f971: mov ecx, esi */
  ecx = esi;
/* 84f973: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x84f975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f975: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84f978: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84f97b: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84f985: je 0x84f998 */
  if (zf) goto L_84f998;
L_84f987: /* 84f987: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84f989: add eax, 0x5a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84f98e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f98f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f991: mov ecx, esi */
  ecx = esi;
/* 84f993: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84f996u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f996: jmp 0x84f9a5 */
  goto L_84f9a5;
L_84f998: /* 84f998: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84f99a: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 84f99d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84f99e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84f9a0: mov ecx, esi */
  ecx = esi;
/* 84f9a2: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84f9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84f9a5: /* 84f9a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84f9a7: lea eax, [ebx + 0x94] */
  eax = (uint32_t)(ebx + 0x94u);
/* 84f9ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84f9ae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 84f9b0: mov ecx, esi */
  ecx = esi;
/* 84f9b2: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84f9b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84f9b5: mov ecx, dword ptr [ebx + 0x1e4] */
  ecx = R32((uint32_t)(ebx + 0x1e4u));
/* 84f9bb: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x84f9c0u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 84f9c0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 84f9c3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 84f9c6: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 84f9c9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9cb: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 84f9ce: je 0x84fb93 */
  if (zf) goto L_84fb93;
L_84f9d4: /* 84f9d4: mov ecx, dword ptr [eax + 0x540] */
  ecx = R32((uint32_t)(eax + 0x540u));
/* 84f9da: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9dd: je 0x84fa03 */
  if (zf) goto L_84fa03;
L_84f9df: /* 84f9df: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9e2: je 0x84fa03 */
  if (zf) goto L_84fa03;
L_84f9e4: /* 84f9e4: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9e7: je 0x84fa03 */
  if (zf) goto L_84fa03;
L_84f9e9: /* 84f9e9: cmp ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9ec: je 0x84fa03 */
  if (zf) goto L_84fa03;
L_84f9ee: /* 84f9ee: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9f1: jne 0x84fb93 */
  if (!zf) goto L_84fb93;
L_84f9f7: /* 84f9f7: cmp dword ptr [eax + 0x538], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x538u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84f9fd: je 0x84fb93 */
  if (zf) goto L_84fb93;
L_84fa03: /* 84fa03: xor ecx, ecx */
  ecx = 0;
/* 84fa05: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 84fa08: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 84fa0b: jmp 0x84fa10 */
  goto L_84fa10;
L_84fa10: /* 84fa10: mov eax, dword ptr [ebx + 0x1e4] */
  eax = R32((uint32_t)(ebx + 0x1e4u));
/* 84fa16: cmp ecx, dword ptr [eax + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fa1c: jge 0x84fb63 */
  if ((sf == of)) goto L_84fb63;
L_84fa22: /* 84fa22: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* 84fa28: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 84fa2b: mov ecx, dword ptr [ebx + 0x1c0] */
  ecx = R32((uint32_t)(ebx + 0x1c0u));
/* 84fa31: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 84fa37: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 84fa3a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 84fa3d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84fa40: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fa43: je 0x84fb53 */
  if (zf) goto L_84fb53;
L_84fa49: /* 84fa49: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fa50: jge 0x84fb53 */
  if ((sf == of)) goto L_84fb53;
L_84fa56: /* 84fa56: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 84fa59: mov eax, dword ptr [ebx + 0x1c0] */
  eax = R32((uint32_t)(ebx + 0x1c0u));
/* 84fa5f: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 84fa65: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fa68: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 84fa6b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa6d: je 0x84fb53 */
  if (zf) goto L_84fb53;
L_84fa73: /* 84fa73: mov ecx, edi */
  ecx = edi;
/* 84fa75: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x84fa7au); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 84fa7a: mov esi, eax */
  esi = eax;
/* 84fa7c: mov eax, dword ptr [ebx + 0x1e4] */
  eax = R32((uint32_t)(ebx + 0x1e4u));
/* 84fa82: cmp byte ptr [eax + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84fa86: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa88: /* 84fa88: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 84fa8e: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa91: je 0x84faaa */
  if (zf) goto L_84faaa;
L_84fa93: /* 84fa93: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa96: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa98: /* 84fa98: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 84fa9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa9d: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa9f: /* 84fa9f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 84faa2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84faa4: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84faaa: /* 84faaa: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 84faac: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 84fab2: xor edx, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 84fab8: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fabb: jne 0x84fb4a */
  if (!zf) goto L_84fb4a;
L_84fac1: /* 84fac1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fac4: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 84fac7: fsub dword ptr [eax + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xb0u)));
/* 84facd: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 84fad0: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 84fad3: fsub dword ptr [eax + 0xac] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xacu)));
/* 84fad9: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 84fadc: fsub dword ptr [eax + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa8u)));
/* 84fae2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 84fae5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 84fae8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84faeb: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x84faf1u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 84faf1: mov al, byte ptr [edi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x29u))) & 0xffu);
/* 84faf4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84faf7: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84faf9: je 0x84fb19 */
  if (zf) goto L_84fb19;
L_84fafb: /* 84fafb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fafe: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 84fb04: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 84fb07: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 84fb09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84fb0b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84fb0e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 84fb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84fb12: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84fb14: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fb17: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84fb19: /* 84fb19: xor ecx, ecx */
  ecx = 0;
/* 84fb1b: xor eax, eax */
  eax = 0;
/* 84fb1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84fb20: /* 84fb20: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fb23: jge 0x84fb31 */
  if ((sf == of)) goto L_84fb31;
L_84fb25: /* 84fb25: cmp dword ptr [ebp + eax*4 - 0x458], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax*4 + 0xfffffba8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fb2c: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84fb2e: /* 84fb2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb2f: jmp 0x84fb20 */
  goto L_84fb20;
L_84fb31: /* 84fb31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fb33: jne 0x84fb4a */
  if (!zf) goto L_84fb4a;
L_84fb35: /* 84fb35: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fb38: mov dword ptr [ebp + eax*4 - 0x458], esi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffba8u), esi);
/* 84fb3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb40: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fb45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84fb48: jge 0x84fb53 */
  if ((sf == of)) goto L_84fb53;
L_84fb4a: /* 84fb4a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fb4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb4e: jmp 0x84fa56 */
  goto L_84fa56;
L_84fb53: /* 84fb53: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84fb56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb57: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84fb5a: xor edi, edi */
  edi = 0;
/* 84fb5c: mov ecx, eax */
  ecx = eax;
/* 84fb5e: jmp 0x84fa10 */
  goto L_84fa10;
L_84fb63: /* 84fb63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fb66: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fb69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fb6a: lea edx, [ebp - 0x458] */
  edx = (uint32_t)(ebp + 0xfffffba8u);
/* 84fb70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fb71: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84fb74: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 84fb7a: mov ecx, esp */
  ecx = esp;
/* 84fb7c: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 84fb7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fb80: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x84fb86u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 84fb86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84fb87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84fb88: call 0x6c20ae */
  esp -= 4; W32(esp, 0x84fb8du); SPILL(); f_6c20ae(); if (g_unwind) return; RELOAD();
/* 84fb8d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84fb90: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_84fb93: /* 84fb93: mov ecx, dword ptr [ebx + 0x1e4] */
  ecx = R32((uint32_t)(ebx + 0x1e4u));
/* 84fb99: test dword ptr [ecx + 0x80], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fba3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 84fba6: je 0x84fd65 */
  if (zf) goto L_84fd65;
L_84fbac: /* 84fbac: xor ebx, ebx */
  ebx = 0;
/* 84fbae: mov edi, edi */
  edi = edi;
L_84fbb0: /* 84fbb0: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84fbb3: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fbb9: cmp ebx, dword ptr [eax + 0x1138] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1138u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fbbf: jge 0x84fd68 */
  if ((sf == of)) goto L_84fd68;
L_84fbc5: /* 84fbc5: mov edx, dword ptr [eax + 0x1134] */
  edx = R32((uint32_t)(eax + 0x1134u));
/* 84fbcb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 84fbce: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 84fbd0: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 84fbd3: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 84fbd9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84fbdc: mov ecx, esi */
  ecx = esi;
/* 84fbde: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 84fbe1: call 0x6ca46b */
  esp -= 4; W32(esp, 0x84fbe6u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 84fbe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fbe8: jne 0x84fc22 */
  if (!zf) goto L_84fc22;
L_84fbea: /* 84fbea: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fbf0: mov ecx, dword ptr [eax + 0x1138] */
  ecx = R32((uint32_t)(eax + 0x1138u));
/* 84fbf6: mov eax, dword ptr [eax + 0x1134] */
  eax = R32((uint32_t)(eax + 0x1134u));
/* 84fbfc: mov ecx, dword ptr [eax + ecx*4 - 4] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 84fc00: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 84fc03: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fc09: mov ecx, dword ptr [eax + 0x1138] */
  ecx = R32((uint32_t)(eax + 0x1138u));
/* 84fc0f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 84fc10: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 84fc11: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84fc13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fc14: lea ecx, [eax + 0x1134] */
  ecx = (uint32_t)(eax + 0x1134u);
/* 84fc1a: call 0x6cb320 */
  esp -= 4; W32(esp, 0x84fc1fu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 84fc1f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fc20: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fc22: /* 84fc22: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fc25: jne 0x84fc3f */
  if (!zf) goto L_84fc3f;
L_84fc27: /* 84fc27: push 0x717 */
  { uint32_t v = 0x717u; esp -= 4; W32(esp, v); }
/* 84fc2c: push 0xae44f0 */
  { uint32_t v = 0xae44f0u; esp -= 4; W32(esp, v); }
/* 84fc31: push 0xae4500 */
  { uint32_t v = 0xae4500u; esp -= 4; W32(esp, v); }
/* 84fc36: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84fc3cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84fc3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84fc3f: /* 84fc3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84fc41: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84fc43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fc44: mov ecx, edi */
  ecx = edi;
/* 84fc46: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x84fc49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84fc49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc4b: je 0x84fd5f */
  if (zf) goto L_84fd5f;
L_84fc51: /* 84fc51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 84fc53: mov eax, dword ptr [ecx + 0x34c] */
  eax = R32((uint32_t)(ecx + 0x34cu));
/* 84fc59: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc5b: jne 0x84fc71 */
  if (!zf) goto L_84fc71;
L_84fc5d: /* 84fc5d: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* 84fc63: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 84fc69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc6b: jne 0x84fd5f */
  if (!zf) goto L_84fd5f;
L_84fc71: /* 84fc71: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc73: jne 0x84fc86 */
  if (!zf) goto L_84fc86;
L_84fc75: /* 84fc75: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* 84fc7b: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84fc7e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc80: jne 0x84fd5f */
  if (!zf) goto L_84fd5f;
L_84fc86: /* 84fc86: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fc89: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 84fc8c: add edi, 0x8c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84fc92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fc93: mov ecx, edi */
  ecx = edi;
/* 84fc95: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x84fc9bu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 84fc9b: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 84fc9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fc9f: mov ecx, edi */
  ecx = edi;
/* 84fca1: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x84fca7u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 84fca7: xor ecx, ecx */
  ecx = 0;
/* 84fca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84fcb0: /* 84fcb0: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fcb3: jge 0x84fd2b */
  if ((sf == of)) goto L_84fd2b;
L_84fcb5: /* 84fcb5: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84fcb8: mov eax, ecx */
  eax = ecx;
/* 84fcba: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 84fcbd: fmul dword ptr [eax + esi + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xbcu)));
/* 84fcc4: lea eax, [eax + esi + 0xbc] */
  eax = (uint32_t)(eax + esi + 0xbcu);
/* 84fccb: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
/* 84fcd0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84fcd3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84fcd6: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 84fcd9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84fcdc: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84fcde: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 84fce1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84fce4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84fce7: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fcea: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84fced: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84fcef: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 84fcf2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84fcf5: and dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 84fcf8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84fcfb: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 84fcfe: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84fd01: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 84fd04: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84fd07: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84fd0a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84fd0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84fd0f: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 84fd12: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84fd14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84fd16: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 84fd19: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84fd1b: fchs  */
  ST0 = -ST0;
/* 84fd1d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84fd1f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 84fd21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84fd23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84fd26: jnp 0x84fd5f */
  if (!pf) goto L_84fd5f;
L_84fd28: /* 84fd28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 84fd29: jmp 0x84fcb0 */
  goto L_84fcb0;
L_84fd2b: /* 84fd2b: mov eax, 1 */
  eax = 0x1u;
/* 84fd30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fd32: je 0x84fd5f */
  if (zf) goto L_84fd5f;
L_84fd34: /* 84fd34: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84fd36: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84fd38: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 84fd3d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x84fd43u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 84fd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fd45: je 0x84fd58 */
  if (zf) goto L_84fd58;
L_84fd47: /* 84fd47: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fd4a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 84fd4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84fd4f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84fd52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fd53: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fd58: /* 84fd58: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_84fd5f: /* 84fd5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fd60: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fd65: /* 84fd65: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_84fd68: /* 84fd68: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84fd6b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fd6e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84fd71: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fd74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84fd75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fd76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fd77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84fd78: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x84fd7du); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
/* 84fd7d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84fd7f: mov ecx, esi */
  ecx = esi;
/* 84fd81: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84fd84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84fd84: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 84fd87: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x84fd8du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 84fd8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84fd90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84fd91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84fd92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84fd99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84fd9a: mov esp, ebp */
  esp = ebp;
/* 84fd9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84fd9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84fa0d(void) {
  LOAD_REGS();
L_84fa0d: /* 84fa0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84fa10: /* 84fa10: mov eax, dword ptr [ebx + 0x1e4] */
  eax = R32((uint32_t)(ebx + 0x1e4u));
/* 84fa16: cmp ecx, dword ptr [eax + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fa1c: jge 0x84fb63 */
  if ((sf == of)) goto L_84fb63;
L_84fa22: /* 84fa22: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* 84fa28: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 84fa2b: mov ecx, dword ptr [ebx + 0x1c0] */
  ecx = R32((uint32_t)(ebx + 0x1c0u));
/* 84fa31: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 84fa37: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 84fa3a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 84fa3d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 84fa40: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fa43: je 0x84fb53 */
  if (zf) goto L_84fb53;
L_84fa49: /* 84fa49: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fa50: jge 0x84fb53 */
  if ((sf == of)) goto L_84fb53;
L_84fa56: /* 84fa56: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 84fa59: mov eax, dword ptr [ebx + 0x1c0] */
  eax = R32((uint32_t)(ebx + 0x1c0u));
/* 84fa5f: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 84fa65: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fa68: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 84fa6b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa6d: je 0x84fb53 */
  if (zf) goto L_84fb53;
L_84fa73: /* 84fa73: mov ecx, edi */
  ecx = edi;
/* 84fa75: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x84fa7au); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 84fa7a: mov esi, eax */
  esi = eax;
/* 84fa7c: mov eax, dword ptr [ebx + 0x1e4] */
  eax = R32((uint32_t)(ebx + 0x1e4u));
/* 84fa82: cmp byte ptr [eax + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84fa86: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa88: /* 84fa88: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 84fa8e: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa91: je 0x84faaa */
  if (zf) goto L_84faaa;
L_84fa93: /* 84fa93: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa96: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa98: /* 84fa98: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 84fa9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fa9d: jne 0x84faaa */
  if (!zf) goto L_84faaa;
L_84fa9f: /* 84fa9f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 84faa2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84faa4: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84faaa: /* 84faaa: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 84faac: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 84fab2: xor edx, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 84fab8: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fabb: jne 0x84fb4a */
  if (!zf) goto L_84fb4a;
L_84fac1: /* 84fac1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fac4: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 84fac7: fsub dword ptr [eax + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xb0u)));
/* 84facd: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 84fad0: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 84fad3: fsub dword ptr [eax + 0xac] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xacu)));
/* 84fad9: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 84fadc: fsub dword ptr [eax + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa8u)));
/* 84fae2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 84fae5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 84fae8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84faeb: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x84faf1u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 84faf1: mov al, byte ptr [edi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x29u))) & 0xffu);
/* 84faf4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84faf7: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84faf9: je 0x84fb19 */
  if (zf) goto L_84fb19;
L_84fafb: /* 84fafb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fafe: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 84fb04: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 84fb07: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 84fb09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84fb0b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84fb0e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 84fb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84fb12: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84fb14: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fb17: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84fb19: /* 84fb19: xor ecx, ecx */
  ecx = 0;
/* 84fb1b: xor eax, eax */
  eax = 0;
/* 84fb1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84fb20: /* 84fb20: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fb23: jge 0x84fb31 */
  if ((sf == of)) goto L_84fb31;
L_84fb25: /* 84fb25: cmp dword ptr [ebp + eax*4 - 0x458], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax*4 + 0xfffffba8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fb2c: je 0x84fb4a */
  if (zf) goto L_84fb4a;
L_84fb2e: /* 84fb2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb2f: jmp 0x84fb20 */
  goto L_84fb20;
L_84fb31: /* 84fb31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fb33: jne 0x84fb4a */
  if (!zf) goto L_84fb4a;
L_84fb35: /* 84fb35: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fb38: mov dword ptr [ebp + eax*4 - 0x458], esi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffba8u), esi);
/* 84fb3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb40: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fb45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84fb48: jge 0x84fb53 */
  if ((sf == of)) goto L_84fb53;
L_84fb4a: /* 84fb4a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fb4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb4e: jmp 0x84fa56 */
  goto L_84fa56;
L_84fb53: /* 84fb53: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84fb56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84fb57: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84fb5a: xor edi, edi */
  edi = 0;
/* 84fb5c: mov ecx, eax */
  ecx = eax;
/* 84fb5e: jmp 0x84fa10 */
  goto L_84fa10;
L_84fb63: /* 84fb63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fb66: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fb69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fb6a: lea edx, [ebp - 0x458] */
  edx = (uint32_t)(ebp + 0xfffffba8u);
/* 84fb70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fb71: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84fb74: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 84fb7a: mov ecx, esp */
  ecx = esp;
/* 84fb7c: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 84fb7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fb80: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x84fb86u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 84fb86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84fb87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84fb88: call 0x6c20ae */
  esp -= 4; W32(esp, 0x84fb8du); SPILL(); f_6c20ae(); if (g_unwind) return; RELOAD();
/* 84fb8d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84fb90: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 84fb93: mov ecx, dword ptr [ebx + 0x1e4] */
  ecx = R32((uint32_t)(ebx + 0x1e4u));
/* 84fb99: test dword ptr [ecx + 0x80], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fba3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 84fba6: je 0x84fd65 */
  if (zf) goto L_84fd65;
L_84fbac: /* 84fbac: xor ebx, ebx */
  ebx = 0;
/* 84fbae: mov edi, edi */
  edi = edi;
L_84fbb0: /* 84fbb0: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84fbb3: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fbb9: cmp ebx, dword ptr [eax + 0x1138] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1138u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fbbf: jge 0x84fd68 */
  if ((sf == of)) goto L_84fd68;
L_84fbc5: /* 84fbc5: mov edx, dword ptr [eax + 0x1134] */
  edx = R32((uint32_t)(eax + 0x1134u));
/* 84fbcb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 84fbce: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 84fbd0: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 84fbd3: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 84fbd9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84fbdc: mov ecx, esi */
  ecx = esi;
/* 84fbde: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 84fbe1: call 0x6ca46b */
  esp -= 4; W32(esp, 0x84fbe6u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 84fbe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fbe8: jne 0x84fc22 */
  if (!zf) goto L_84fc22;
L_84fbea: /* 84fbea: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fbf0: mov ecx, dword ptr [eax + 0x1138] */
  ecx = R32((uint32_t)(eax + 0x1138u));
/* 84fbf6: mov eax, dword ptr [eax + 0x1134] */
  eax = R32((uint32_t)(eax + 0x1134u));
/* 84fbfc: mov ecx, dword ptr [eax + ecx*4 - 4] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 84fc00: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 84fc03: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 84fc09: mov ecx, dword ptr [eax + 0x1138] */
  ecx = R32((uint32_t)(eax + 0x1138u));
/* 84fc0f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 84fc10: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 84fc11: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84fc13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fc14: lea ecx, [eax + 0x1134] */
  ecx = (uint32_t)(eax + 0x1134u);
/* 84fc1a: call 0x6cb320 */
  esp -= 4; W32(esp, 0x84fc1fu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 84fc1f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fc20: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fc22: /* 84fc22: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84fc25: jne 0x84fc3f */
  if (!zf) goto L_84fc3f;
L_84fc27: /* 84fc27: push 0x717 */
  { uint32_t v = 0x717u; esp -= 4; W32(esp, v); }
/* 84fc2c: push 0xae44f0 */
  { uint32_t v = 0xae44f0u; esp -= 4; W32(esp, v); }
/* 84fc31: push 0xae4500 */
  { uint32_t v = 0xae4500u; esp -= 4; W32(esp, v); }
/* 84fc36: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84fc3cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84fc3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84fc3f: /* 84fc3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84fc41: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84fc43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fc44: mov ecx, edi */
  ecx = edi;
/* 84fc46: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x84fc49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84fc49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc4b: je 0x84fd5f */
  if (zf) goto L_84fd5f;
L_84fc51: /* 84fc51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 84fc53: mov eax, dword ptr [ecx + 0x34c] */
  eax = R32((uint32_t)(ecx + 0x34cu));
/* 84fc59: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc5b: jne 0x84fc71 */
  if (!zf) goto L_84fc71;
L_84fc5d: /* 84fc5d: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* 84fc63: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 84fc69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc6b: jne 0x84fd5f */
  if (!zf) goto L_84fd5f;
L_84fc71: /* 84fc71: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc73: jne 0x84fc86 */
  if (!zf) goto L_84fc86;
L_84fc75: /* 84fc75: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* 84fc7b: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84fc7e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fc80: jne 0x84fd5f */
  if (!zf) goto L_84fd5f;
L_84fc86: /* 84fc86: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fc89: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 84fc8c: add edi, 0x8c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84fc92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fc93: mov ecx, edi */
  ecx = edi;
/* 84fc95: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x84fc9bu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 84fc9b: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 84fc9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fc9f: mov ecx, edi */
  ecx = edi;
/* 84fca1: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x84fca7u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 84fca7: xor ecx, ecx */
  ecx = 0;
/* 84fca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84fcb0: /* 84fcb0: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84fcb3: jge 0x84fd2b */
  if ((sf == of)) goto L_84fd2b;
L_84fcb5: /* 84fcb5: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84fcb8: mov eax, ecx */
  eax = ecx;
/* 84fcba: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 84fcbd: fmul dword ptr [eax + esi + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xbcu)));
/* 84fcc4: lea eax, [eax + esi + 0xbc] */
  eax = (uint32_t)(eax + esi + 0xbcu);
/* 84fccb: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
/* 84fcd0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84fcd3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84fcd6: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 84fcd9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84fcdc: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84fcde: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 84fce1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84fce4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84fce7: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84fcea: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84fced: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84fcef: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 84fcf2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84fcf5: and dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 84fcf8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84fcfb: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 84fcfe: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84fd01: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 84fd04: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84fd07: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84fd0a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84fd0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84fd0f: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 84fd12: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84fd14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84fd16: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 84fd19: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84fd1b: fchs  */
  ST0 = -ST0;
/* 84fd1d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84fd1f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 84fd21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84fd23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84fd26: jnp 0x84fd5f */
  if (!pf) goto L_84fd5f;
L_84fd28: /* 84fd28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 84fd29: jmp 0x84fcb0 */
  goto L_84fcb0;
L_84fd2b: /* 84fd2b: mov eax, 1 */
  eax = 0x1u;
/* 84fd30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fd32: je 0x84fd5f */
  if (zf) goto L_84fd5f;
L_84fd34: /* 84fd34: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84fd36: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 84fd38: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 84fd3d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x84fd43u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 84fd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84fd45: je 0x84fd58 */
  if (zf) goto L_84fd58;
L_84fd47: /* 84fd47: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fd4a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 84fd4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84fd4f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84fd52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fd53: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fd58: /* 84fd58: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_84fd5f: /* 84fd5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 84fd60: jmp 0x84fbb0 */
  goto L_84fbb0;
L_84fd65: /* 84fd65: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_84fd68: /* 84fd68: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84fd6b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84fd6e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84fd71: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84fd74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84fd75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84fd76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84fd77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84fd78: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x84fd7du); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
/* 84fd7d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84fd7f: mov ecx, esi */
  ecx = esi;
/* 84fd81: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84fd84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84fd84: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 84fd87: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x84fd8du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 84fd8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84fd90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84fd91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84fd92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84fd99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84fd9a: mov esp, ebp */
  esp = ebp;
/* 84fd9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84fd9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84fda0(void) {
  LOAD_REGS();
L_84fda0: /* 84fda0: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 84fda3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84fda8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 84fdab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84fdac: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 84fdaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84fdb4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84fdb4(); return;
}

void f_84fdb4(void) {
  LOAD_REGS();
L_84fdb4: /* 84fdb4: push 0xa16af0 */
  { uint32_t v = 0xa16af0u; esp -= 4; W32(esp, v); }
/* 84fdb9: push 0xae451c */
  { uint32_t v = 0xae451cu; esp -= 4; W32(esp, v); }
/* 84fdbe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84fdc4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84fdc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84fdc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84fdc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84fdcb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84fdd0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84fdd0: guest_badaddr(0x84fdd0); return;
}

void f_84ff10(void) {
  LOAD_REGS();
L_84ff10: /* 84ff10: mov eax, ecx */
  eax = ecx;
/* 84ff12: mov dword ptr [eax], 0xa16b2c */
  W32((uint32_t)(eax), 0xa16b2cu);
/* 84ff18: ret  */
  esp += 4; SPILL(); return;
}

void f_84ff30(void) {
  LOAD_REGS();
L_84ff30: /* 84ff30: mov eax, ecx */
  eax = ecx;
/* 84ff32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 84ff36: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 84ff39: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 84ff3d: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 84ff40: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84ff42: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84ff46: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84ff49: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 84ff4d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84ff50: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 84ff54: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 84ff58: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 84ff5b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 84ff5f: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 84ff62: lea edx, [ecx + ecx*2 - 6] */
  edx = (uint32_t)(ecx + ecx*2 + 0xfffffffau);
/* 84ff66: mov dword ptr [eax], 0xa16b38 */
  W32((uint32_t)(eax), 0xa16b38u);
/* 84ff6c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84ff6f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84ff72: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_84ffa0(void) {
  LOAD_REGS();
L_84ffa0: /* 84ffa0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 84ffa3: mov edx, 2 */
  edx = 0x2u;
/* 84ffa8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84ffaa: jle 0x84ffda */
  if ((zf || sf != of)) goto L_84ffda;
L_84ffac: /* 84ffac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 84ffb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84ffb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ffb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84ffb3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_84ffb7: /* 84ffb7: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 84ffba: lea esi, [edx + edi] */
  esi = (uint32_t)(edx + edi);
/* 84ffbd: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84ffc0: lea ebx, [esi - 1] */
  ebx = (uint32_t)(esi + 0xffffffffu);
/* 84ffc3: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 84ffc6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84ffc9: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 84ffcc: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 84ffcf: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84ffd2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 84ffd3: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84ffd5: jl 0x84ffb7 */
  if ((sf != of)) goto L_84ffb7;
L_84ffd7: /* 84ffd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84ffd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84ffd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_84ffda: /* 84ffda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_84fff0(void) {
  LOAD_REGS();
L_84fff0: /* 84fff0: mov eax, ecx */
  eax = ecx;
/* 84fff2: xor ecx, ecx */
  ecx = 0;
/* 84fff4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84fff7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84fff9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84fffc: ret  */
  esp += 4; SPILL(); return;
}

void f_850010(void) {
  LOAD_REGS();
L_850010: /* 850010: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 850014: mov eax, ecx */
  eax = ecx;
/* 850016: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85001a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85001c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85001f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850040(void) {
  LOAD_REGS();
L_850040: /* 850040: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 850044: mov eax, ecx */
  eax = ecx;
/* 850046: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85004a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85004c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85004f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850070(void) {
  LOAD_REGS();
L_850070: /* 850070: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 850074: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 850078: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 85007f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 850083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 850084: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 850085: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85008bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85008b: ret  */
  esp += 4; SPILL(); return;
}

void f_850084(void) {
  LOAD_REGS();
L_850084: /* 850084: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 850085: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85008bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85008b: ret  */
  esp += 4; SPILL(); return;
}

void f_8500a0(void) {
  LOAD_REGS();
L_8500a0: /* 8500a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8500a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8500a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8500a9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8500ac: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8500af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8500b0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8500b4: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8500bau); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8500ba: ret  */
  esp += 4; SPILL(); return;
}

void f_8500d0(void) {
  LOAD_REGS();
L_8500d0: /* 8500d0: mov eax, ecx */
  eax = ecx;
/* 8500d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8500d6: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 8500dc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8500df: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8500e2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8500e5: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 8500e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8500eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850100(void) {
  LOAD_REGS();
L_850100: /* 850100: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850101: mov ebx, ecx */
  ebx = ecx;
/* 850103: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 850106: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 850109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85010a: xor esi, esi */
  esi = 0;
/* 85010c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85010e: jle 0x850143 */
  if ((zf || sf != of)) goto L_850143;
L_850110: /* 850110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 850111: mov bp, word ptr [esp + 0x14] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x14u))) & 0xffffu);
/* 850116: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850117: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 85011b: jmp 0x850120 */
  goto L_850120;
L_850120: /* 850120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850121: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 850124: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x85012au); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 85012a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 85012d: add ax, bp */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 850130: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 850133: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 850136: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 850139: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85013c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85013d: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85013f: jl 0x850120 */
  if ((sf != of)) goto L_850120;
L_850141: /* 850141: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850142: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_850143: /* 850143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850144: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850145: ret 8 */
  esp += 12; SPILL(); return;
}

void f_85011d(void) {
  LOAD_REGS();
L_85011d: /* 85011d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_850120: /* 850120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850121: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 850124: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x85012au); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 85012a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 85012d: add ax, bp */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 850130: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 850133: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 850136: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 850139: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85013c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85013d: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85013f: jl 0x850120 */
  if ((sf != of)) goto L_850120;
L_850141: /* 850141: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850142: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 850143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850144: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850145: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850170(void) {
  LOAD_REGS();
L_850170: /* 850170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 850171: mov ebp, esp */
  ebp = esp;
/* 850173: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 850176: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 850179: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 85017d: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 850180: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 850183: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850184: xor eax, eax */
  eax = 0;
/* 850186: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850188: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850189: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85018a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 85018e: jle 0x8503a5 */
  if ((zf || sf != of)) goto L_8503a5;
L_850194: /* 850194: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 850198: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 85019c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85019f: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_8501a3: /* 8501a3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8501a6: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8501aa: mov ebx, eax */
  ebx = eax;
/* 8501ac: mov eax, ecx */
  eax = ecx;
/* 8501ae: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8501b0: mov edx, ebx */
  edx = ebx;
/* 8501b2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8501b4: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8501b7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8501ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8501bd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8501c0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8501c3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8501c7: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8501ca: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8501cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8501ce: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8501d2: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8501d5: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8501d8: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8501dc: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8501e0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 8501e4: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 8501ec: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8501f0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8501f4: lea edi, [esp + 0x40] */
  edi = (uint32_t)(esp + 0x40u);
/* 8501f8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8501fa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8501fc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8501fe: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 850201: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 850203: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 850206: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 850208: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85020b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85020e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 850211: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 850214: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 850217: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85021a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85021d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 850220: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 850223: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850225: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 850227: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 850229: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85022b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85022d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850230: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 850233: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850236: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 850239: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85023c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85023f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850242: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 850245: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850247: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 850249: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85024b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85024d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85024f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 850252: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 850255: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 850258: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85025b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85025e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 850261: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 850264: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 850267: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850269: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85026b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85026d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85026f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 850271: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850273: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 850275: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 850277: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85027a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85027d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 850280: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 850284: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 850287: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 850289: test byte ptr [edi + 0x15c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x15cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 850290: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 850294: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 850298: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 85029c: jne 0x8502aa */
  if (!zf) goto L_8502aa;
L_85029e: /* 85029e: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 8502a6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_8502aa: /* 8502aa: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 8502ad: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8502af: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8502b2: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8502b5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8502b9: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8502bc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8502be: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8502c1: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8502c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8502c9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8502cc: jp 0x8502d6 */
  if (pf) goto L_8502d6;
L_8502ce: /* 8502ce: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 8502d4: jmp 0x8502dc */
  goto L_8502dc;
L_8502d6: /* 8502d6: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8502d9: fsub qword ptr [edx + 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x8u)));
L_8502dc: /* 8502dc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8502e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8502e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8502e7: jp 0x8502f3 */
  if (pf) goto L_8502f3;
L_8502e9: /* 8502e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8502eb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8502f1: jmp 0x850308 */
  goto L_850308;
L_8502f3: /* 8502f3: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8502f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8502fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8502fe: jnp 0x850308 */
  if (!pf) goto L_850308;
L_850300: /* 850300: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 850302: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_850308: /* 850308: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 85030b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85030c: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 850312: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 850315: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85031bu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85031b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85031e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 850320: jge 0x850326 */
  if ((sf == of)) goto L_850326;
L_850322: /* 850322: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 850324: jmp 0x85032f */
  goto L_85032f;
L_850326: /* 850326: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85032b: jl 0x85032f */
  if ((sf != of)) goto L_85032f;
L_85032d: /* 85032d: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_85032f: /* 85032f: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* 850333: mov byte ptr [esp + 0x11], al */
  W8((uint32_t)(esp + 0x11u), (eax & 0xffu));
/* 850337: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 85033b: mov byte ptr [esp + 0x13], al */
  W8((uint32_t)(esp + 0x13u), (eax & 0xffu));
/* 85033f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 850343: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 850346: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 850349: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 85034d: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850350: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 850353: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 850356: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 850359: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85035b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 85035f: je 0x850383 */
  if (zf) goto L_850383;
L_850361: /* 850361: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 850364: mov ecx, dword ptr [ecx + edx*8] */
  ecx = R32((uint32_t)(ecx + edx*8));
/* 850367: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 850369: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 85036d: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 850370: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 850373: mov ecx, dword ptr [ecx + edx*8 + 4] */
  ecx = R32((uint32_t)(ecx + edx*8 + 0x4u));
/* 850377: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85037a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85037d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850380: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_850383: /* 850383: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 850387: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 85038b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 85038e: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 850391: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 850392: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 850395: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850397: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 85039b: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 85039f: jl 0x8501a3 */
  if ((sf != of)) goto L_8501a3;
L_8503a5: /* 8503a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8503a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8503a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8503a8: mov esp, ebp */
  esp = ebp;
/* 8503aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8503ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850440(void) {
  LOAD_REGS();
L_850440: /* 850440: mov eax, ecx */
  eax = ecx;
/* 850442: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 850446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850447: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 85044b: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 85044e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 850452: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 850455: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 850459: xor edx, edx */
  edx = 0;
/* 85045b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85045d: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 850460: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 850464: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 850467: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85046a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 85046c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85046f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 850472: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 850475: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 850478: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 85047f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850480: je 0x850489 */
  if (zf) goto L_850489;
L_850482: /* 850482: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_850489: /* 850489: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8504b0(void) {
  LOAD_REGS();
L_8504b0: /* 8504b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8504b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8504b5: mov esi, ecx */
  esi = ecx;
/* 8504b7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8504bb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8504be: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8504c1: xor edx, edx */
  edx = 0;
/* 8504c3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8504c5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8504c8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8504cb: mov ecx, dword ptr [ecx + 0xd8] */
  ecx = R32((uint32_t)(ecx + 0xd8u));
/* 8504d1: mov eax, dword ptr [ecx + eax + 0x1c] */
  eax = R32((uint32_t)(ecx + eax + 0x1cu));
/* 8504d5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8504d7: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 8504de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8504df: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8504e4: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8504eau); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8504ea: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8504ed: mov eax, esi */
  eax = esi;
/* 8504ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8504f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850520(void) {
  LOAD_REGS();
L_850520: /* 850520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850521: mov esi, ecx */
  esi = ecx;
/* 850523: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 850527: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85052a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85052c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 85052f: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 850532: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 850534: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 850536: xor ecx, ecx */
  ecx = 0;
/* 850538: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 85053b: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 85053e: mov ecx, dword ptr [edx + 0xd8] */
  ecx = R32((uint32_t)(edx + 0xd8u));
/* 850544: mov eax, dword ptr [ecx + eax + 0x1c] */
  eax = R32((uint32_t)(ecx + eax + 0x1cu));
/* 850548: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85054a: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 850551: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 850552: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 850557: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85055du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85055d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 850560: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 850564: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 850567: mov eax, esi */
  eax = esi;
/* 850569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85056a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850590(void) {
  LOAD_REGS();
L_850590: /* 850590: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 850594: mov eax, edx */
  eax = edx;
/* 850596: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 850599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85059a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 85059c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85059d: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
/* 8505a0: mov esi, dword ptr [eax + edi + 0x64] */
  esi = R32((uint32_t)(eax + edi + 0x64u));
/* 8505a4: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8505a6: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8505a9: je 0x8505ca */
  if (zf) goto L_8505ca;
L_8505ab: /* 8505ab: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 8505ae: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 8505b1: mov dword ptr [edi + esi*4], edx */
  W32((uint32_t)(edi + esi*4), edx);
/* 8505b4: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 8505b7: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8505ba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8505bb: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8505be: movzx eax, byte ptr [eax + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x56u)));
/* 8505c2: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8505c5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8505c7: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
L_8505ca: /* 8505ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8505cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8505cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8505e0(void) {
  LOAD_REGS();
L_8505e0: /* 8505e0: mov eax, ecx */
  eax = ecx;
/* 8505e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8505e6: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8505e9: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 8505ef: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8505f2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8505f5: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 8505f8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8505fb: mov dword ptr [eax], 0xa16b50 */
  W32((uint32_t)(eax), 0xa16b50u);
/* 850601: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 850604: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 850607: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 85060a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85060d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850620(void) {
  LOAD_REGS();
L_850620: /* 850620: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 850623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850624: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 850627: mov edx, 2 */
  edx = 0x2u;
/* 85062c: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85062e: jle 0x850665 */
  if ((zf || sf != of)) goto L_850665;
L_850630: /* 850630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 850634: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850635: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850636: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 85063a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_850640: /* 850640: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 850643: lea esi, [edx + edi] */
  esi = (uint32_t)(edx + edi);
/* 850646: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850649: lea ebx, [esi - 1] */
  ebx = (uint32_t)(esi + 0xffffffffu);
/* 85064c: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 85064f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850652: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 850655: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 850658: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 85065b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85065e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85065f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850661: jl 0x850640 */
  if ((sf != of)) goto L_850640;
L_850663: /* 850663: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_850665: /* 850665: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850666: ret 8 */
  esp += 12; SPILL(); return;
}

void f_850690(void) {
  LOAD_REGS();
L_850690: /* 850690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 850691: mov ebp, esp */
  ebp = esp;
/* 850693: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 850696: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 850699: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85069a: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 85069e: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 8506a1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8506a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8506a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8506a5: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 8506a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8506aa: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8506b0: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8506b6u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8506b6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8506ba: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8506bd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8506bf: fild dword ptr [eax + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x348u)); FPUSH(v); }
/* 8506c5: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8506c8: xor edx, edx */
  edx = 0;
/* 8506ca: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8506cc: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8506d2: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8506d6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8506da: jle 0x850991 */
  if ((zf || sf != of)) goto L_850991;
L_8506e0: /* 8506e0: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8506e4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8506e8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8506eb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8506ef: jmp 0x8506f5 */
  goto L_8506f5;
L_8506f1: /* 8506f1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_8506f5: /* 8506f5: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 8506f8: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8506fa: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8506fc: mov ebx, eax */
  ebx = eax;
/* 8506fe: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 850700: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 850703: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 850706: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 850709: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85070c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 850710: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 850713: fld dword ptr [eax + edx + 4] */
  { double v = F32((uint32_t)(eax + edx + 0x4u)); FPUSH(v); }
/* 850717: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850719: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 85071c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85071e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 850722: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 850725: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 850728: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 85072c: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 850730: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 850734: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 85073c: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 850740: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 850744: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 850748: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85074a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85074c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85074e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 850751: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 850753: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 850756: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 850758: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85075b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85075e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 850761: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 850764: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 850767: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85076a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85076d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 850770: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 850773: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850775: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 850777: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 850779: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85077b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85077d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850780: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 850783: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850786: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 850789: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85078c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85078f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 850792: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 850795: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 850797: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 850799: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85079b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85079d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85079f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8507a2: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8507a5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8507a8: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8507ab: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8507ae: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8507b1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8507b4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8507b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8507b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8507bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8507bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8507bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8507c1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8507c3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8507c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8507c7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8507ca: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8507cd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8507d0: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8507d4: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8507d8: lea edx, [ebx + 0x10] */
  edx = (uint32_t)(ebx + 0x10u);
/* 8507db: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8507dd: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 8507e1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8507e4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8507e7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8507eb: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8507ee: fld qword ptr [ecx + 0x10] */
  { double v = F64((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8507f1: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8507f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8507f9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8507fc: jp 0x850806 */
  if (pf) goto L_850806;
L_8507fe: /* 8507fe: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 850804: jmp 0x850838 */
  goto L_850838;
L_850806: /* 850806: fld qword ptr [ecx + 0x10] */
  { double v = F64((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 850809: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 85080c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 850812: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 850814: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 850817: jp 0x850823 */
  if (pf) goto L_850823;
L_850819: /* 850819: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85081b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 850821: jmp 0x850838 */
  goto L_850838;
L_850823: /* 850823: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 850829: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85082b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85082e: jnp 0x850838 */
  if (!pf) goto L_850838;
L_850830: /* 850830: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 850832: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_850838: /* 850838: mov edx, dword ptr [ecx + 0x15c] */
  edx = R32((uint32_t)(ecx + 0x15cu));
/* 85083e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 850844: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 850847: jne 0x850883 */
  if (!zf) goto L_850883;
L_850849: /* 850849: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85084b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 85084f: fchs  */
  ST0 = -ST0;
/* 850851: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 850855: fchs  */
  ST0 = -ST0;
/* 850857: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 85085b: fchs  */
  ST0 = -ST0;
/* 85085d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 850860: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 850862: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 850865: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 850867: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 850869: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 85086c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85086e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 850874: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 850876: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 850879: je 0x850883 */
  if (zf) goto L_850883;
L_85087b: /* 85087b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85087d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_850883: /* 850883: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 850886: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 85088c: je 0x850901 */
  if (zf) goto L_850901;
L_85088e: /* 85088e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 850890: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 850892: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 850895: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 850899: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 85089c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85089e: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 8508a4: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8508a9: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8508ac: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8508af: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8508b2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8508b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8508b7: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8508bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8508bd: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8508c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8508c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8508c5: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8508c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8508cb: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8508cf: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8508d5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8508db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8508dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8508e0: jp 0x8508ec */
  if (pf) goto L_8508ec;
L_8508e2: /* 8508e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8508e4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8508ea: jmp 0x850901 */
  goto L_850901;
L_8508ec: /* 8508ec: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8508f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8508f4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8508f7: jnp 0x850901 */
  if (!pf) goto L_850901;
L_8508f9: /* 8508f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8508fb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_850901: /* 850901: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 850903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 850904: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 850906: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 85090c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85090f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 850911: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 850913: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x850919u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 850919: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85091c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85091e: jge 0x850924 */
  if ((sf == of)) goto L_850924;
L_850920: /* 850920: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 850922: jmp 0x85092d */
  goto L_85092d;
L_850924: /* 850924: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850929: jl 0x85092d */
  if ((sf != of)) goto L_85092d;
L_85092b: /* 85092b: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_85092d: /* 85092d: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* 850931: mov byte ptr [esp + 0x15], al */
  W8((uint32_t)(esp + 0x15u), (eax & 0xffu));
/* 850935: mov byte ptr [esp + 0x16], al */
  W8((uint32_t)(esp + 0x16u), (eax & 0xffu));
/* 850939: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* 85093d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 850941: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 850944: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 850947: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 85094b: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85094e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 850951: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 850954: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850956: je 0x850972 */
  if (zf) goto L_850972;
L_850958: /* 850958: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85095e: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 850965: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 850968: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 85096c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85096f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_850972: /* 850972: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 850976: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 85097a: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 85097d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85097e: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 850981: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850983: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 850987: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 85098b: jl 0x8506f1 */
  if ((sf != of)) goto L_8506f1;
L_850991: /* 850991: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850992: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850993: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850994: mov esp, ebp */
  esp = ebp;
/* 850996: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 850997: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850a70(void) {
  LOAD_REGS();
L_850a70: /* 850a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 850a74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850a75: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 850a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850a77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850a78: mov esi, ecx */
  esi = ecx;
/* 850a7a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 850a7d: mov dword ptr [esi], 0xa16b5c */
  W32((uint32_t)(esi), 0xa16b5cu);
/* 850a83: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 850a89: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 850a8c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 850a8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 850a91: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 850a96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850a97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850a98: call 0x99c910 */
  esp -= 4; W32(esp, 0x850a9du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 850a9d: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 850aa2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 850aa5: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 850aa8: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 850aab: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 850ab1: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 850ab4: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 850ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850ab8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 850abb: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 850abe: mov word ptr [esi + 0x10], 0x7fff */
  W16((uint32_t)(esi + 0x10u), 0x7fffu);
/* 850ac4: mov word ptr [esi + 0x12], 0 */
  W16((uint32_t)(esi + 0x12u), 0x0u);
/* 850aca: mov eax, esi */
  eax = esi;
/* 850acc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850acd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 850ace: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850acf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850b00(void) {
  LOAD_REGS();
L_850b00: /* 850b00: mov eax, 1 */
  eax = 0x1u;
/* 850b05: ret  */
  esp += 4; SPILL(); return;
}

void f_850b20(void) {
  LOAD_REGS();
L_850b20: /* 850b20: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 850b23: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 850b26: ret  */
  esp += 4; SPILL(); return;
}

void f_850b40(void) {
  LOAD_REGS();
L_850b40: /* 850b40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 850b43: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 850b46: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 850b49: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 850b4b: ret  */
  esp += 4; SPILL(); return;
}

void f_850b60(void) {
  LOAD_REGS();
L_850b60: /* 850b60: mov eax, 2 */
  eax = 0x2u;
/* 850b65: ret  */
  esp += 4; SPILL(); return;
}

void f_850b80(void) {
  LOAD_REGS();
L_850b80: /* 850b80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850b81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850b82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 850b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850b87: mov edi, ecx */
  edi = ecx;
/* 850b89: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 850b8c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 850b8f: xor ebx, ebx */
  ebx = 0;
/* 850b91: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 850b93: jle 0x850c32 */
  if ((zf || sf != of)) goto L_850c32;
L_850b99: /* 850b99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_850ba0: /* 850ba0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 850ba3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 850ba6: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 850ba9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 850bab: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 850bae: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 850bb1: mov cl, byte ptr [eax + edx + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx + 0x56u))) & 0xffu);
/* 850bb5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850bb7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 850bb9: jbe 0x850c23 */
  if ((cf | zf)) goto L_850c23;
L_850bbb: /* 850bbb: mov edx, 2 */
  edx = 0x2u;
/* 850bc0: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 850bc2: jbe 0x850bf5 */
  if ((cf | zf)) goto L_850bf5;
L_850bc4: /* 850bc4: mov cx, word ptr [eax + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x64u))) & 0xffffu);
/* 850bc8: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 850bcb: mov cx, word ptr [eax + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x64u))) & 0xffffu);
/* 850bcf: add cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 850bd2: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 850bd5: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 850bd8: xor ecx, ecx */
  ecx = 0;
/* 850bda: mov cx, word ptr [eax + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x64u))) & 0xffffu);
/* 850bde: add cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 850be1: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 850be4: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 850be7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 850be8: mov word ptr [esi - 2], cx */
  W16((uint32_t)(esi + 0xfffffffeu), (ecx & 0xffffu));
/* 850bec: movzx ecx, byte ptr [eax + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x56u)));
/* 850bf0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 850bf1: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850bf3: jl 0x850bc4 */
  if ((sf != of)) goto L_850bc4;
L_850bf5: /* 850bf5: mov cx, word ptr [edi + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x10u))) & 0xffffu);
/* 850bf9: xor edx, edx */
  edx = 0;
/* 850bfb: mov dx, word ptr [eax + 0x64] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x64u))) & 0xffffu);
/* 850bff: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 850c02: ja 0x850c06 */
  if ((!cf && !zf)) goto L_850c06;
L_850c04: /* 850c04: mov ecx, edx */
  ecx = edx;
L_850c06: /* 850c06: mov word ptr [edi + 0x10], cx */
  W16((uint32_t)(edi + 0x10u), (ecx & 0xffffu));
/* 850c0a: movzx dx, byte ptr [eax + 0x56] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x56u)))) & 0xffffu);
/* 850c0f: add dx, word ptr [eax + 0x64] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x64u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 850c13: mov cx, word ptr [edi + 0x12] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x12u))) & 0xffffu);
/* 850c17: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 850c18: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 850c1b: jb 0x850c1f */
  if (cf) goto L_850c1f;
L_850c1d: /* 850c1d: mov ecx, edx */
  ecx = edx;
L_850c1f: /* 850c1f: mov word ptr [edi + 0x12], cx */
  W16((uint32_t)(edi + 0x12u), (ecx & 0xffffu));
L_850c23: /* 850c23: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 850c26: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 850c29: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 850c2a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 850c2c: jl 0x850ba0 */
  if ((sf != of)) goto L_850ba0;
L_850c32: /* 850c32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850c33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850c34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850c35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850c70(void) {
  LOAD_REGS();
L_850c70: /* 850c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850c71: mov esi, ecx */
  esi = ecx;
/* 850c73: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 850c76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850c78: je 0x850c84 */
  if (zf) goto L_850c84;
L_850c7a: /* 850c7a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 850c7d: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 850c7f: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 850c82: jne 0x850cc4 */
  if (!zf) goto L_850cc4;
L_850c84: /* 850c84: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 850c86: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 850c8b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 850c90: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x850c96u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 850c96: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 850ca0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 850ca3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850ca5: je 0x850cb9 */
  if (zf) goto L_850cb9;
L_850ca7: /* 850ca7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 850ca9: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 850cac: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 850cae: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 850cb1: mov dword ptr [ecx + 0x84], eax */
  W32((uint32_t)(ecx + 0x84u), eax);
/* 850cb7: jmp 0x850cc1 */
  goto L_850cc1;
L_850cb9: /* 850cb9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 850cbf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_850cc1: /* 850cc1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_850cc4: /* 850cc4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 850cc7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 850cc9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 850ccc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 850cce: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 850cd2: mov dword ptr [eax + edx*4 + 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0x4u), ecx);
/* 850cd6: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 850cd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850cda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850d00(void) {
  LOAD_REGS();
L_850d00: /* 850d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850d01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 850d05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850d07: je 0x850d1e */
  if (zf) goto L_850d1e;
L_850d09: /* 850d09: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 850d0e: mov ecx, esi */
  ecx = esi;
/* 850d10: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x850d16u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 850d16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850d18: je 0x850d1e */
  if (zf) goto L_850d1e;
L_850d1a: /* 850d1a: mov eax, esi */
  eax = esi;
/* 850d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850d1d: ret  */
  esp += 4; SPILL(); return;
L_850d1e: /* 850d1e: xor eax, eax */
  eax = 0;
/* 850d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850d21: ret  */
  esp += 4; SPILL(); return;
}

void f_850d40(void) {
  LOAD_REGS();
L_850d40: /* 850d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850d41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 850d45: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850d48: je 0x850d68 */
  if (zf) goto L_850d68;
L_850d4a: /* 850d4a: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 850d4f: mov ecx, esi */
  ecx = esi;
/* 850d51: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x850d57u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 850d57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 850d59: jne 0x850d90 */
  if (!zf) goto L_850d90;
L_850d5b: /* 850d5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 850d5c: mov ecx, esi */
  ecx = esi;
/* 850d5e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x850d64u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 850d64: mov edi, eax */
  edi = eax;
/* 850d66: jmp 0x850d6d */
  goto L_850d6d;
L_850d68: /* 850d68: mov edi, 0xae47e8 */
  edi = 0xae47e8u;
L_850d6d: /* 850d6d: mov ecx, 0xb86630 */
  ecx = 0xb86630u;
/* 850d72: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x850d78u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 850d78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 850d79: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 850d7e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 850d80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850d81: push 0xae47f4 */
  { uint32_t v = 0xae47f4u; esp -= 4; W32(esp, v); }
/* 850d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 850d87: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x850d8du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 850d8d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_850d90: /* 850d90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850d91: mov eax, esi */
  eax = esi;
/* 850d93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850d94: ret  */
  esp += 4; SPILL(); return;
}

void f_850dc0(void) {
  LOAD_REGS();
L_850dc0: /* 850dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850dc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 850dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850dc7: mov esi, ecx */
  esi = ecx;
/* 850dc9: call 0x6c503d */
  esp -= 4; W32(esp, 0x850dceu); SPILL(); f_6c503d(); if (g_unwind) return; RELOAD();
/* 850dce: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 850dd1: imul eax, dword ptr [edi + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x8u)));
  eax = (uint32_t)r;
  }
/* 850dd5: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 850dd8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 850dda: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 850ddd: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 850de0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 850de3: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 850de5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 850de7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850de8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 850deb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850dec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850e00(void) {
  LOAD_REGS();
L_850e00: /* 850e00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850e01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 850e02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 850e03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850e04: mov esi, ecx */
  esi = ecx;
/* 850e06: mov dword ptr [esi], 0xa16b78 */
  W32((uint32_t)(esi), 0xa16b78u);
/* 850e0c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 850e12: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 850e15: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 850e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 850e1a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 850e1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 850e20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 850e21: call 0x99c910 */
  esp -= 4; W32(esp, 0x850e26u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 850e26: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 850e2b: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 850e2e: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 850e31: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 850e34: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 850e3a: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 850e3d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 850e40: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 850e43: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 850e47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 850e48: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 850e4b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 850e4e: mov eax, esi */
  eax = esi;
/* 850e50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 850e51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 850e52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 850e53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850e80(void) {
  LOAD_REGS();
L_850e80: /* 850e80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 850e83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 850e86: ret  */
  esp += 4; SPILL(); return;
}

void f_850ea0(void) {
  LOAD_REGS();
L_850ea0: /* 850ea0: mov eax, 1 */
  eax = 0x1u;
/* 850ea5: ret  */
  esp += 4; SPILL(); return;
}

void f_850ec0(void) {
  LOAD_REGS();
L_850ec0: /* 850ec0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 850ec3: ret  */
  esp += 4; SPILL(); return;
}

void f_850ee0(void) {
  LOAD_REGS();
L_850ee0: /* 850ee0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 850ee3: ret  */
  esp += 4; SPILL(); return;
}

void f_850f00(void) {
  LOAD_REGS();
L_850f00: /* 850f00: mov eax, 1 */
  eax = 0x1u;
/* 850f05: ret  */
  esp += 4; SPILL(); return;
}

void f_850f20(void) {
  LOAD_REGS();
L_850f20: /* 850f20: xor eax, eax */
  eax = 0;
/* 850f22: ret  */
  esp += 4; SPILL(); return;
}

void f_850f40(void) {
  LOAD_REGS();
L_850f40: /* 850f40: mov eax, 5 */
  eax = 0x5u;
/* 850f45: ret  */
  esp += 4; SPILL(); return;
}

void f_850f60(void) {
  LOAD_REGS();
L_850f60: /* 850f60: mov eax, 1 */
  eax = 0x1u;
/* 850f65: ret  */
  esp += 4; SPILL(); return;
}

void f_850f80(void) {
  LOAD_REGS();
L_850f80: /* 850f80: mov eax, 1 */
  eax = 0x1u;
/* 850f85: ret  */
  esp += 4; SPILL(); return;
}

void f_850fa0(void) {
  LOAD_REGS();
L_850fa0: /* 850fa0: xor eax, eax */
  eax = 0;
/* 850fa2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850fc0(void) {
  LOAD_REGS();
L_850fc0: /* 850fc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_850fe0(void) {
  LOAD_REGS();
L_850fe0: /* 850fe0: xor eax, eax */
  eax = 0;
/* 850fe2: ret  */
  esp += 4; SPILL(); return;
}

void f_851000(void) {
  LOAD_REGS();
L_851000: /* 851000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 851001: mov ebp, esp */
  ebp = esp;
/* 851003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 851005: push 0x9d3e40 */
  { uint32_t v = 0x9d3e40u; esp -= 4; W32(esp, v); }
/* 85100a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 851010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 851018: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85101b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 85101e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85101f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851020: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 851026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851027: xor ebx, ebx */
  ebx = 0;
/* 851029: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85102c: mov edi, ecx */
  edi = ecx;
/* 85102e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 851031: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 851034: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 851037: je 0x85104d */
  if (zf) goto L_85104d;
L_851039: /* 851039: push 0x2aa */
  { uint32_t v = 0x2aau; esp -= 4; W32(esp, v); }
/* 85103e: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 851043: push 0xae492c */
  { uint32_t v = 0xae492cu; esp -= 4; W32(esp, v); }
/* 851048: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x85104au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85104a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85104d: /* 85104d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 851050: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 851053: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 851056: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851058: je 0x85106e */
  if (zf) goto L_85106e;
L_85105a: /* 85105a: push 0x2ab */
  { uint32_t v = 0x2abu; esp -= 4; W32(esp, v); }
/* 85105f: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 851064: push 0xae4908 */
  { uint32_t v = 0xae4908u; esp -= 4; W32(esp, v); }
/* 851069: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x85106bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85106b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85106e: /* 85106e: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851071: je 0x851087 */
  if (zf) goto L_851087;
L_851073: /* 851073: push 0x2ac */
  { uint32_t v = 0x2acu; esp -= 4; W32(esp, v); }
/* 851078: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 85107d: push 0xae48f8 */
  { uint32_t v = 0xae48f8u; esp -= 4; W32(esp, v); }
/* 851082: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x851084u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 851084: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_851087: /* 851087: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 85108a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 85108d: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 851090: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 851093: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 851096: lea edx, [eax - 2] */
  edx = (uint32_t)(eax + 0xfffffffeu);
/* 851099: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 85109c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8510a2: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 8510a5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8510a8: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8510ab: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8510ae: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
L_8510b1: /* 8510b1: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8510b4: jge 0x8511a3 */
  if ((sf == of)) goto L_8511a3;
L_8510ba: /* 8510ba: xor edi, edi */
  edi = 0;
L_8510bc: /* 8510bc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8510bf: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8510c2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8510c4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8510c7: jge 0x85119b */
  if ((sf == of)) goto L_85119b;
L_8510cd: /* 8510cd: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8510d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8510d3: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8510d6: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8510d9: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8510dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8510de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8510e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8510e2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8510e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8510e6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8510e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8510eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8510ed: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8510f3u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8510f3: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 8510f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8510f9: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8510fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8510fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 851101: jp 0x85114f */
  if (pf) goto L_85114f;
L_851103: /* 851103: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 851106: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851107: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 85110a: mov dword ptr [ebp - 0x38], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f000000u);
/* 851111: mov dword ptr [ebp - 0x34], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f000000u);
/* 851118: mov dword ptr [ebp - 0x30], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f000000u);
/* 85111f: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 851126: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85112c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85112f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851130: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 851133: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x851139u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 851139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85113a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 85113d: call 0x6c576d */
  esp -= 4; W32(esp, 0x851142u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 851142: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 851144: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 851146: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851149: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85114a: jmp 0x8510bc */
  goto L_8510bc;
L_85114f: /* 85114f: mov byte ptr [ebp + 0x14], bl */
  W8((uint32_t)(ebp + 0x14u), (ebx & 0xffu));
/* 851152: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 851154: mov byte ptr [ebp + 0x15], bl */
  W8((uint32_t)(ebp + 0x15u), (ebx & 0xffu));
/* 851157: mov byte ptr [ebp + 0x16], bl */
  W8((uint32_t)(ebp + 0x16u), (ebx & 0xffu));
/* 85115a: mov byte ptr [ebp + 0x17], bl */
  W8((uint32_t)(ebp + 0x17u), (ebx & 0xffu));
/* 85115d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 851160: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 851162: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851165: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 851166: jmp 0x8510bc */
  goto L_8510bc;
L_85119b: /* 85119b: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 85119e: jmp 0x8510b1 */
  goto L_8510b1;
L_8511a3: /* 8511a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8511a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8511a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8511a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8511af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8511b0: mov esp, ebp */
  esp = ebp;
/* 8511b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8511b3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_85116b(void) {
  LOAD_REGS();
L_85116b: /* 85116b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85116e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 851173: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 851176: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851177: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 85117a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85117fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85117f(); return;
}

void f_85117f(void) {
  LOAD_REGS();
  goto L_85117f;
L_8510b1: /* 8510b1: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8510b4: jge 0x8511a3 */
  if ((sf == of)) goto L_8511a3;
L_8510ba: /* 8510ba: xor edi, edi */
  edi = 0;
L_8510bc: /* 8510bc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8510bf: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8510c2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8510c4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8510c7: jge 0x85119b */
  if ((sf == of)) goto L_85119b;
L_8510cd: /* 8510cd: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8510d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8510d3: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8510d6: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8510d9: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8510dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8510de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8510e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8510e2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8510e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8510e6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8510e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8510eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8510ed: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8510f3u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8510f3: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 8510f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8510f9: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8510fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8510fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 851101: jp 0x85114f */
  if (pf) goto L_85114f;
L_851103: /* 851103: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 851106: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851107: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 85110a: mov dword ptr [ebp - 0x38], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f000000u);
/* 851111: mov dword ptr [ebp - 0x34], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f000000u);
/* 851118: mov dword ptr [ebp - 0x30], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f000000u);
/* 85111f: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 851126: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85112c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85112f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851130: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 851133: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x851139u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 851139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85113a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 85113d: call 0x6c576d */
  esp -= 4; W32(esp, 0x851142u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 851142: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 851144: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 851146: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851149: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85114a: jmp 0x8510bc */
  goto L_8510bc;
L_85114f: /* 85114f: mov byte ptr [ebp + 0x14], bl */
  W8((uint32_t)(ebp + 0x14u), (ebx & 0xffu));
/* 851152: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 851154: mov byte ptr [ebp + 0x15], bl */
  W8((uint32_t)(ebp + 0x15u), (ebx & 0xffu));
/* 851157: mov byte ptr [ebp + 0x16], bl */
  W8((uint32_t)(ebp + 0x16u), (ebx & 0xffu));
/* 85115a: mov byte ptr [ebp + 0x17], bl */
  W8((uint32_t)(ebp + 0x17u), (ebx & 0xffu));
/* 85115d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 851160: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 851162: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851165: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 851166: jmp 0x8510bc */
  goto L_8510bc;
L_85117f: /* 85117f: push 0xa16bd8 */
  { uint32_t v = 0xa16bd8u; esp -= 4; W32(esp, v); }
/* 851184: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 851189: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85118fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85118f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851192: xor ebx, ebx */
  ebx = 0;
/* 851194: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851195: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851196: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85119bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85119b: /* 85119b: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 85119e: jmp 0x8510b1 */
  goto L_8510b1;
L_8511a3: /* 8511a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8511a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8511a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8511a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8511af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8511b0: mov esp, ebp */
  esp = ebp;
/* 8511b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8511b3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_851230(void) {
  LOAD_REGS();
L_851230: /* 851230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851231: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 851232: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851233: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851234: mov esi, ecx */
  esi = ecx;
/* 851236: mov dword ptr [esi], 0xa16c48 */
  W32((uint32_t)(esi), 0xa16c48u);
/* 85123c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 851242: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 851245: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 851248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85124a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 85124f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851251: call 0x99c910 */
  esp -= 4; W32(esp, 0x851256u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 851256: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 85125b: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 85125e: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 851261: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 851264: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 85126a: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85126d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 851270: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 851273: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 851277: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 851278: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 85127b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 85127e: mov eax, esi */
  eax = esi;
/* 851280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 851281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 851282: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 851283: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8512b0(void) {
  LOAD_REGS();
L_8512b0: /* 8512b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8512b3: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8512b6: ret  */
  esp += 4; SPILL(); return;
}

void f_8512d0(void) {
  LOAD_REGS();
L_8512d0: /* 8512d0: mov eax, 1 */
  eax = 0x1u;
/* 8512d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8512f0(void) {
  LOAD_REGS();
L_8512f0: /* 8512f0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8512f3: ret  */
  esp += 4; SPILL(); return;
}

void f_851310(void) {
  LOAD_REGS();
L_851310: /* 851310: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 851313: ret  */
  esp += 4; SPILL(); return;
}

void f_851330(void) {
  LOAD_REGS();
L_851330: /* 851330: mov eax, 1 */
  eax = 0x1u;
/* 851335: ret  */
  esp += 4; SPILL(); return;
}

void f_851350(void) {
  LOAD_REGS();
L_851350: /* 851350: xor eax, eax */
  eax = 0;
/* 851352: ret  */
  esp += 4; SPILL(); return;
}

void f_851370(void) {
  LOAD_REGS();
L_851370: /* 851370: mov eax, 5 */
  eax = 0x5u;
/* 851375: ret  */
  esp += 4; SPILL(); return;
}

void f_851390(void) {
  LOAD_REGS();
L_851390: /* 851390: mov eax, 1 */
  eax = 0x1u;
/* 851395: ret  */
  esp += 4; SPILL(); return;
}

void f_8513b0(void) {
  LOAD_REGS();
L_8513b0: /* 8513b0: mov eax, 1 */
  eax = 0x1u;
/* 8513b5: ret  */
  esp += 4; SPILL(); return;
}

void f_8513d0(void) {
  LOAD_REGS();
L_8513d0: /* 8513d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8513f0(void) {
  LOAD_REGS();
L_8513f0: /* 8513f0: xor eax, eax */
  eax = 0;
/* 8513f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_851410(void) {
  LOAD_REGS();
L_851410: /* 851410: xor eax, eax */
  eax = 0;
/* 851412: ret  */
  esp += 4; SPILL(); return;
}

void f_851430(void) {
  LOAD_REGS();
L_851430: /* 851430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 851431: mov ebp, esp */
  ebp = esp;
/* 851433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 851435: push 0x9d3e50 */
  { uint32_t v = 0x9d3e50u; esp -= 4; W32(esp, v); }
/* 85143a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 851440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 851448: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85144b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 85144e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85144f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851450: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 851456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851457: xor ebx, ebx */
  ebx = 0;
/* 851459: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85145c: mov edi, ecx */
  edi = ecx;
/* 85145e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 851461: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 851464: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 851467: je 0x85147d */
  if (zf) goto L_85147d;
L_851469: /* 851469: push 0x2ee */
  { uint32_t v = 0x2eeu; esp -= 4; W32(esp, v); }
/* 85146e: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 851473: push 0xae492c */
  { uint32_t v = 0xae492cu; esp -= 4; W32(esp, v); }
/* 851478: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x85147au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85147a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85147d: /* 85147d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 851480: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 851483: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 851486: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851488: je 0x85149e */
  if (zf) goto L_85149e;
L_85148a: /* 85148a: push 0x2ef */
  { uint32_t v = 0x2efu; esp -= 4; W32(esp, v); }
/* 85148f: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 851494: push 0xae4908 */
  { uint32_t v = 0xae4908u; esp -= 4; W32(esp, v); }
/* 851499: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x85149bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85149b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85149e: /* 85149e: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8514a1: je 0x8514b7 */
  if (zf) goto L_8514b7;
L_8514a3: /* 8514a3: push 0x2f0 */
  { uint32_t v = 0x2f0u; esp -= 4; W32(esp, v); }
/* 8514a8: push 0xae494c */
  { uint32_t v = 0xae494cu; esp -= 4; W32(esp, v); }
/* 8514ad: push 0xae48f8 */
  { uint32_t v = 0xae48f8u; esp -= 4; W32(esp, v); }
/* 8514b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8514b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8514b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8514b7: /* 8514b7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8514ba: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8514bd: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 8514c0: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8514c3: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8514c6: lea edx, [eax - 2] */
  edx = (uint32_t)(eax + 0xfffffffeu);
/* 8514c9: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8514cc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8514d2: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 8514d5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8514d8: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8514db: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8514de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8514e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8514e2: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8514e5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8514e7: /* 8514e7: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8514ea: jge 0x8515e0 */
  if ((sf == of)) goto L_8515e0;
L_8514f0: /* 8514f0: xor edi, edi */
  edi = 0;
L_8514f2: /* 8514f2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8514f5: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8514f8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8514fa: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8514fd: jge 0x8515d8 */
  if ((sf == of)) goto L_8515d8;
L_851503: /* 851503: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 851506: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 851509: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 85150c: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 85150f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 851511: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 851513: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 851515: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 851517: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851519: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 85151b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85151d: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 851520: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 851522: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 851525: jp 0x8515bc */
  if (pf) goto L_8515bc;
L_85152b: /* 85152b: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 85152e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851531: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 851538: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 85153f: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 851546: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 85154d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 851550: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x851556u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 851556: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 851559: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 85155f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851562: fsub qword ptr [ebp - 0x18] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 851565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851566: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 851569: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85156c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85156d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 851570: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x851576u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 851576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851577: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 85157a: call 0x6c576d */
  esp -= 4; W32(esp, 0x85157fu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85157f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 851581: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 851583: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851586: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 851587: jmp 0x8514f2 */
  goto L_8514f2;
L_8515bc: /* 8515bc: mov byte ptr [ebp + 0x14], bl */
  W8((uint32_t)(ebp + 0x14u), (ebx & 0xffu));
/* 8515bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8515c1: mov byte ptr [ebp + 0x15], bl */
  W8((uint32_t)(ebp + 0x15u), (ebx & 0xffu));
/* 8515c4: mov byte ptr [ebp + 0x16], bl */
  W8((uint32_t)(ebp + 0x16u), (ebx & 0xffu));
/* 8515c7: mov byte ptr [ebp + 0x17], bl */
  W8((uint32_t)(ebp + 0x17u), (ebx & 0xffu));
/* 8515ca: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8515cd: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8515cf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8515d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8515d3: jmp 0x8514f2 */
  goto L_8514f2;
L_8515d8: /* 8515d8: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 8515db: jmp 0x8514e7 */
  goto L_8514e7;
L_8515e0: /* 8515e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8515e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8515e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8515e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8515ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8515ed: mov esp, ebp */
  esp = ebp;
/* 8515ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8515f0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_85158c(void) {
  LOAD_REGS();
L_85158c: /* 85158c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85158f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 851594: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 851597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851598: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85159b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8515a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8515a0(); return;
}

void f_8515a0(void) {
  LOAD_REGS();
  goto L_8515a0;
L_8514e7: /* 8514e7: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8514ea: jge 0x8515e0 */
  if ((sf == of)) goto L_8515e0;
L_8514f0: /* 8514f0: xor edi, edi */
  edi = 0;
L_8514f2: /* 8514f2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8514f5: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8514f8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8514fa: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8514fd: jge 0x8515d8 */
  if ((sf == of)) goto L_8515d8;
L_851503: /* 851503: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 851506: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 851509: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 85150c: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 85150f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 851511: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 851513: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 851515: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 851517: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851519: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 85151b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85151d: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 851520: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 851522: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 851525: jp 0x8515bc */
  if (pf) goto L_8515bc;
L_85152b: /* 85152b: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 85152e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851531: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 851538: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 85153f: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 851546: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 85154d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 851550: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x851556u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 851556: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 851559: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 85155f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851562: fsub qword ptr [ebp - 0x18] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 851565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851566: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 851569: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85156c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85156d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 851570: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x851576u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 851576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851577: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 85157a: call 0x6c576d */
  esp -= 4; W32(esp, 0x85157fu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85157f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 851581: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 851583: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851586: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 851587: jmp 0x8514f2 */
  goto L_8514f2;
L_8515a0: /* 8515a0: push 0xa16ca8 */
  { uint32_t v = 0xa16ca8u; esp -= 4; W32(esp, v); }
/* 8515a5: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8515aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8515b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8515b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8515b3: xor ebx, ebx */
  ebx = 0;
/* 8515b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8515b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8515b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8515bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8515bc: /* 8515bc: mov byte ptr [ebp + 0x14], bl */
  W8((uint32_t)(ebp + 0x14u), (ebx & 0xffu));
/* 8515bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8515c1: mov byte ptr [ebp + 0x15], bl */
  W8((uint32_t)(ebp + 0x15u), (ebx & 0xffu));
/* 8515c4: mov byte ptr [ebp + 0x16], bl */
  W8((uint32_t)(ebp + 0x16u), (ebx & 0xffu));
/* 8515c7: mov byte ptr [ebp + 0x17], bl */
  W8((uint32_t)(ebp + 0x17u), (ebx & 0xffu));
/* 8515ca: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8515cd: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8515cf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8515d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8515d3: jmp 0x8514f2 */
  goto L_8514f2;
L_8515d8: /* 8515d8: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 8515db: jmp 0x8514e7 */
  goto L_8514e7;
L_8515e0: /* 8515e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8515e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8515e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8515e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8515ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8515ed: mov esp, ebp */
  esp = ebp;
/* 8515ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8515f0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_851680(void) {
  LOAD_REGS();
L_851680: /* 851680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 851684: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851685: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 851686: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851687: mov esi, ecx */
  esi = ecx;
/* 851689: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 85168d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85168e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 851691: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 851694: mov dword ptr [esi], 0xa16d28 */
  W32((uint32_t)(esi), 0xa16d28u);
/* 85169a: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8516a0: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8516a3: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8516a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8516a8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8516ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8516ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8516af: call 0x99c910 */
  esp -= 4; W32(esp, 0x8516b4u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8516b4: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8516b9: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8516bc: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8516bf: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8516c2: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8516c8: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8516cb: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8516ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8516cf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8516d2: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8516d5: mov eax, esi */
  eax = esi;
/* 8516d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8516d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8516d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8516da: ret 8 */
  esp += 12; SPILL(); return;
}

void f_851700(void) {
  LOAD_REGS();
L_851700: /* 851700: mov eax, 1 */
  eax = 0x1u;
/* 851705: ret  */
  esp += 4; SPILL(); return;
}

void f_851720(void) {
  LOAD_REGS();
L_851720: /* 851720: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 851723: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 851726: ret  */
  esp += 4; SPILL(); return;
}

void f_851740(void) {
  LOAD_REGS();
L_851740: /* 851740: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 851743: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 851746: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 851749: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85174c: ret  */
  esp += 4; SPILL(); return;
}

void f_851760(void) {
  LOAD_REGS();
L_851760: /* 851760: mov eax, 0x20 */
  eax = 0x20u;
/* 851765: ret  */
  esp += 4; SPILL(); return;
}

void f_851780(void) {
  LOAD_REGS();
L_851780: /* 851780: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8517a0(void) {
  LOAD_REGS();
L_8517a0: /* 8517a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8517a4: xor edx, edx */
  edx = 0;
/* 8517a6: mov ecx, 1 */
  ecx = 0x1u;
/* 8517ab: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8517ad: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8517b0: mov ecx, 4 */
  ecx = 0x4u;
/* 8517b5: mov edx, 2 */
  edx = 0x2u;
/* 8517ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8517bd: mov ecx, edx */
  ecx = edx;
/* 8517bf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8517c2: mov edx, 4 */
  edx = 0x4u;
/* 8517c7: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 8517ca: mov edx, 5 */
  edx = 0x5u;
/* 8517cf: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8517d2: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8517d5: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 8517d8: mov eax, 4 */
  eax = 0x4u;
/* 8517dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8517f0(void) {
  LOAD_REGS();
L_8517f0: /* 8517f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8517f1: mov ebp, esp */
  ebp = esp;
/* 8517f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8517f5: push 0x9d3e60 */
  { uint32_t v = 0x9d3e60u; esp -= 4; W32(esp, v); }
/* 8517fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 851800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 851808: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85180e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 851811: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851812: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851813: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851814: mov edi, ecx */
  edi = ecx;
/* 851816: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 851819: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 85181c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85181f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 851821: mov eax, dword ptr [eax + 0xd8] */
  eax = R32((uint32_t)(eax + 0xd8u));
/* 851827: xor ecx, ecx */
  ecx = 0;
/* 851829: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 85182c: mov edx, dword ptr [edx + eax + 4] */
  edx = R32((uint32_t)(edx + eax + 0x4u));
/* 851830: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 851833: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 851836: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 851839: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 85183c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85183f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 851841: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 851844: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 851846: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 851849: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85184b: jmp 0x851850 */
  goto L_851850;
L_851850: /* 851850: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 851853: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 851856: jge 0x851b3b */
  if ((sf == of)) goto L_851b3b;
L_85185c: /* 85185c: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 85185f: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 851862: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 851864: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 851867: mov ebx, dword ptr [eax + 0x58] */
  ebx = R32((uint32_t)(eax + 0x58u));
/* 85186a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 85186d: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851870: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851872: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851875: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 851878: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 85187b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85187e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 851881: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851883: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 851885: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 851887: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851889: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 85188c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 85188f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 851892: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 851895: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 851898: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85189b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85189e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8518a4u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8518a4: mov ebx, dword ptr [edi + 0x10] */
  ebx = R32((uint32_t)(edi + 0x10u));
/* 8518a7: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8518aa: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8518ac: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8518af: mov al, byte ptr [ecx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x29u))) & 0xffu);
/* 8518b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8518b5: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8518b7: jne 0x85192a */
  if (!zf) goto L_85192a;
L_8518b9: /* 8518b9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8518bc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8518bf: fdiv dword ptr [ebp - 0x34] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8518c2: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8518c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8518cb: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8518d1u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8518d1: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8518d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8518d7: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8518da: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8518e1: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8518e4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8518e7: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 8518ea: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8518ed: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8518f0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8518f3: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8518f6: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 8518fc: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8518ff: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 851902: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 851908: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 85190b: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85190e: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 851911: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851912: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 851918: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 85191e: call 0x6c576d */
  esp -= 4; W32(esp, 0x851923u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 851923: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 851925: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 851928: jmp 0x8519a2 */
  goto L_8519a2;
L_85192a: /* 85192a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 85192d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 851933: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 851936: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 851938: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85193b: je 0x85193f */
  if (zf) goto L_85193f;
L_85193d: /* 85193d: fchs  */
  ST0 = -ST0;
L_85193f: /* 85193f: fdiv dword ptr [ebx + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x30u)));
/* 851942: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851945: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85194b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85194e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x851954u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 851954: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 851957: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85195a: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 85195d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 851964: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 851967: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 85196a: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 85196d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 851970: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 851973: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 851976: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 851979: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 85197c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85197f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 851982: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 851985: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 851988: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85198b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85198c: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 851992: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 851995: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 851998: call 0x6c576d */
  esp -= 4; W32(esp, 0x85199du); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85199d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85199f: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_8519a2: /* 8519a2: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 8519a7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8519aa: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 8519ae: je 0x8519d1 */
  if (zf) goto L_8519d1;
L_8519b0: /* 8519b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8519b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8519b6: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 8519b9: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8519bc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8519bf: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 8519c2: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 8519c5: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 8519c8: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8519cc: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8519cf: jmp 0x8519d7 */
  goto L_8519d7;
L_8519d1: /* 8519d1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8519d4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8519d7: /* 8519d7: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8519da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8519db: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8519de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8519df: mov ecx, esi */
  ecx = esi;
/* 8519e1: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x8519e7u); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 8519e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8519ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8519eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8519ec: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8519ef: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8519f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8519f3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8519f6: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8519f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8519fa: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8519fd: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 851a00: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a05: mov ecx, edi */
  ecx = edi;
/* 851a07: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a0cu); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a0c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851a0f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851a13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a14: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 851a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a18: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 851a1b: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 851a1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a1f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851a22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851a25: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 851a28: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a2b: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 851a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a2f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851a32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a33: mov ecx, edi */
  ecx = edi;
/* 851a35: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a3au); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a3a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851a3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851a3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a3f: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 851a42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a43: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851a46: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 851a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a4a: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 851a4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 851a4e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 851a51: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 851a54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a57: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a5c: mov ecx, edi */
  ecx = edi;
/* 851a5e: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a63u); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a63: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 851a66: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 851a69: mov ebx, 1 */
  ebx = 0x1u;
/* 851a6e: mov edi, edi */
  edi = edi;
L_851a70: /* 851a70: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 851a74: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 851a77: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 851a79: jge 0x851ae5 */
  if ((sf == of)) goto L_851ae5;
L_851a7b: /* 851a7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a7e: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 851a81: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 851a84: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 851a86: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a8a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851a8d: call 0x6ca83f */
  esp -= 4; W32(esp, 0x851a92u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 851a92: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 851a95: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 851a98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851a9b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 851a9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a9e: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851aa2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x851aa7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 851aa7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 851aaa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851aad: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 851ab0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851ab3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851ab4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ab5: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 851ab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851ab9: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 851abc: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 851abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ac0: lea eax, [ebx + edx + 2] */
  eax = (uint32_t)(ebx + edx + 0x2u);
/* 851ac4: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851ac7: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 851aca: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851acd: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 851ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ad1: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851ad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851ad5: mov ecx, edi */
  ecx = edi;
/* 851ad7: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851adcu); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851adc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 851adf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 851ae2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 851ae3: jmp 0x851a70 */
  goto L_851a70;
L_851ae5: /* 851ae5: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 851ae9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851aec: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 851aef: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 851af2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 851af5: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 851af8: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851afa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 851afb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 851afe: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 851b01: mov ecx, eax */
  ecx = eax;
/* 851b03: jmp 0x851850 */
  goto L_851850;
L_851b3b: /* 851b3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 851b3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 851b3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 851b40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 851b47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 851b48: mov esp, ebp */
  esp = ebp;
/* 851b4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 851b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85184d(void) {
  LOAD_REGS();
L_85184d: /* 85184d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_851850: /* 851850: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 851853: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 851856: jge 0x851b3b */
  if ((sf == of)) goto L_851b3b;
L_85185c: /* 85185c: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 85185f: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 851862: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 851864: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 851867: mov ebx, dword ptr [eax + 0x58] */
  ebx = R32((uint32_t)(eax + 0x58u));
/* 85186a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 85186d: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851870: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851872: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851875: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 851878: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 85187b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85187e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 851881: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851883: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 851885: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 851887: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851889: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 85188c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 85188f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 851892: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 851895: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 851898: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85189b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85189e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8518a4u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8518a4: mov ebx, dword ptr [edi + 0x10] */
  ebx = R32((uint32_t)(edi + 0x10u));
/* 8518a7: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8518aa: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8518ac: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8518af: mov al, byte ptr [ecx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x29u))) & 0xffu);
/* 8518b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8518b5: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8518b7: jne 0x85192a */
  if (!zf) goto L_85192a;
L_8518b9: /* 8518b9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8518bc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8518bf: fdiv dword ptr [ebp - 0x34] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8518c2: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8518c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8518cb: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8518d1u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8518d1: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8518d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8518d7: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8518da: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8518e1: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8518e4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8518e7: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 8518ea: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8518ed: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8518f0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8518f3: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8518f6: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 8518fc: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8518ff: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 851902: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 851908: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 85190b: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85190e: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 851911: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851912: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 851918: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 85191e: call 0x6c576d */
  esp -= 4; W32(esp, 0x851923u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 851923: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 851925: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 851928: jmp 0x8519a2 */
  goto L_8519a2;
L_85192a: /* 85192a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 85192d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 851933: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 851936: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 851938: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85193b: je 0x85193f */
  if (zf) goto L_85193f;
L_85193d: /* 85193d: fchs  */
  ST0 = -ST0;
L_85193f: /* 85193f: fdiv dword ptr [ebx + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x30u)));
/* 851942: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851945: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85194b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85194e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x851954u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 851954: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 851957: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85195a: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 85195d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 851964: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 851967: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 85196a: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 85196d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 851970: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 851973: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 851976: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 851979: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 85197c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85197f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 851982: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 851985: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 851988: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85198b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85198c: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 851992: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 851995: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 851998: call 0x6c576d */
  esp -= 4; W32(esp, 0x85199du); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85199d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85199f: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_8519a2: /* 8519a2: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 8519a7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8519aa: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 8519ae: je 0x8519d1 */
  if (zf) goto L_8519d1;
L_8519b0: /* 8519b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8519b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8519b6: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 8519b9: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8519bc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8519bf: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 8519c2: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 8519c5: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 8519c8: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8519cc: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8519cf: jmp 0x8519d7 */
  goto L_8519d7;
L_8519d1: /* 8519d1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8519d4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8519d7: /* 8519d7: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8519da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8519db: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8519de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8519df: mov ecx, esi */
  ecx = esi;
/* 8519e1: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x8519e7u); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 8519e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8519ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8519eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8519ec: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8519ef: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8519f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8519f3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8519f6: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8519f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8519fa: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8519fd: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 851a00: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a05: mov ecx, edi */
  ecx = edi;
/* 851a07: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a0cu); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a0c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851a0f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851a13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a14: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 851a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a18: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 851a1b: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 851a1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a1f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851a22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851a25: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 851a28: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a2b: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 851a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a2f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851a32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a33: mov ecx, edi */
  ecx = edi;
/* 851a35: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a3au); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a3a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851a3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851a3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a3f: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 851a42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a43: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851a46: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 851a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a4a: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 851a4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 851a4e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 851a51: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 851a54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a57: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a5c: mov ecx, edi */
  ecx = edi;
/* 851a5e: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851a63u); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851a63: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 851a66: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 851a69: mov ebx, 1 */
  ebx = 0x1u;
/* 851a6e: mov edi, edi */
  edi = edi;
L_851a70: /* 851a70: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 851a74: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 851a77: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 851a79: jge 0x851ae5 */
  if ((sf == of)) goto L_851ae5;
L_851a7b: /* 851a7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851a7e: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 851a81: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 851a84: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 851a86: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851a89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851a8a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851a8d: call 0x6ca83f */
  esp -= 4; W32(esp, 0x851a92u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 851a92: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 851a95: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 851a98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851a9b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 851a9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851a9e: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 851aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851aa2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x851aa7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 851aa7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 851aaa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 851aad: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 851ab0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851ab3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851ab4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ab5: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 851ab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851ab9: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 851abc: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 851abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ac0: lea eax, [ebx + edx + 2] */
  eax = (uint32_t)(ebx + edx + 0x2u);
/* 851ac4: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 851ac7: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 851aca: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851acd: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 851ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851ad1: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 851ad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851ad5: mov ecx, edi */
  ecx = edi;
/* 851ad7: call 0x6c5344 */
  esp -= 4; W32(esp, 0x851adcu); SPILL(); f_6c5344(); if (g_unwind) return; RELOAD();
/* 851adc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 851adf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 851ae2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 851ae3: jmp 0x851a70 */
  goto L_851a70;
L_851ae5: /* 851ae5: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 851ae9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851aec: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 851aef: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 851af2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 851af5: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 851af8: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851afa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 851afb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 851afe: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 851b01: mov ecx, eax */
  ecx = eax;
/* 851b03: jmp 0x851850 */
  goto L_851850;
L_851b3b: /* 851b3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 851b3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 851b3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 851b40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 851b47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 851b48: mov esp, ebp */
  esp = ebp;
/* 851b4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 851b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_851b08(void) {
  LOAD_REGS();
L_851b08: /* 851b08: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 851b0e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 851b13: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 851b16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851b17: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 851b1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x851b1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_851b1f(); return;
}

void f_851b1f(void) {
  LOAD_REGS();
L_851b1f: /* 851b1f: push 0xa16d58 */
  { uint32_t v = 0xa16d58u; esp -= 4; W32(esp, v); }
/* 851b24: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 851b29: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x851b2fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 851b2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851b32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 851b34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 851b36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x851b3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 851b3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 851b3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 851b3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 851b40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 851b47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 851b48: mov esp, ebp */
  esp = ebp;
/* 851b4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 851b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_851c30(void) {
  LOAD_REGS();
L_851c30: /* 851c30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 851c34: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 851c38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851c39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851c3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851c3b: mov esi, eax */
  esi = eax;
/* 851c3d: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 851c3f: mov edi, edx */
  edi = edx;
/* 851c41: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 851c43: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 851c46: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 851c49: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 851c4c: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 851c4f: mov esi, dword ptr [eax + 0x18] */
  esi = R32((uint32_t)(eax + 0x18u));
/* 851c52: mov dword ptr [edx + 0x10], esi */
  W32((uint32_t)(edx + 0x10u), esi);
/* 851c55: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 851c58: mov dword ptr [edx + 0x14], esi */
  W32((uint32_t)(edx + 0x14u), esi);
/* 851c5b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 851c5d: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 851c60: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 851c63: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 851c66: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 851c69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 851c6a: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 851c6d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 851c70: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 851c73: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 851c77: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 851c7d: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 851c81: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 851c85: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 851c88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 851c8a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 851c8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851c8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 851c91: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 851c93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 851c94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 851c95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851c97: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 851c9b: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 851ca1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 851ca7: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 851caa: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 851cad: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 851caf: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 851cb2: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 851cb4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 851cb7: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 851cba: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 851cbd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 851cc1: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 851cc4: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 851cc7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 851cc9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 851ccc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851cce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 851cd0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 851cd2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 851cd6: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 851cd9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 851cdb: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 851cdf: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 851ce5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 851ceb: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 851cee: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_851d40(void) {
  LOAD_REGS();
L_851d40: /* 851d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 851d41: mov ebp, esp */
  ebp = esp;
/* 851d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 851d45: push 0x9d3e7e */
  { uint32_t v = 0x9d3e7eu; esp -= 4; W32(esp, v); }
/* 851d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 851d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 851d58: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 851d5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 851d5c: mov ebx, dword ptr [0xcc9b38] */
  ebx = R32((uint32_t)(0xcc9b38u));
/* 851d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851d63: xor esi, esi */
  esi = 0;
/* 851d65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851d68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 851d69: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 851d6c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 851d6f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 851d72: jne 0x851d89 */
  if (!zf) goto L_851d89;
L_851d74: /* 851d74: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 851d77: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 851d79: mov ecx, 0xcc9b24 */
  ecx = 0xcc9b24u;
/* 851d7e: mov dword ptr [0xcc9b38], ebx */
  W32((uint32_t)(0xcc9b38u), ebx);
/* 851d84: call 0x6c2117 */
  esp -= 4; W32(esp, 0x851d89u); SPILL(); f_6c2117(); if (g_unwind) return; RELOAD();
L_851d89: /* 851d89: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851d8c: jne 0x851da3 */
  if (!zf) goto L_851da3;
L_851d8e: /* 851d8e: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 851d91: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 851d93: mov ecx, 0xcc9b10 */
  ecx = 0xcc9b10u;
/* 851d98: mov dword ptr [0xcc9b38], ebx */
  W32((uint32_t)(0xcc9b38u), ebx);
/* 851d9e: call 0x6c9269 */
  esp -= 4; W32(esp, 0x851da3u); SPILL(); f_6c9269(); if (g_unwind) return; RELOAD();
L_851da3: /* 851da3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 851da8: mov ecx, dword ptr [0xce8350] */
  ecx = R32((uint32_t)(0xce8350u));
/* 851dae: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 851db1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 851db3: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 851db5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 851db8: cmp dword ptr [eax + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 851dbb: jle 0x852216 */
  if ((zf || sf != of)) goto L_852216;
L_851dc1: /* 851dc1: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 851dc4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 851dc6: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 851dc9: mov eax, dword ptr [edx + 0xd8] */
  eax = R32((uint32_t)(edx + 0xd8u));
/* 851dcf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 851dd2: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 851dd4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 851dd6: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 851dd9: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x851ddbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 851ddb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 851dde: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 851de1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 851de3: mov al, byte ptr [eax + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x29u))) & 0xffu);
/* 851de6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851de8: je 0x851df6 */
  if (zf) goto L_851df6;
L_851dea: /* 851dea: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 851dec: je 0x851df6 */
  if (zf) goto L_851df6;
L_851dee: /* 851dee: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 851df0: jne 0x85220e */
  if (!zf) goto L_85220e;
L_851df6: /* 851df6: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
/* 851dfb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851dfd: jne 0x851e7d */
  if (!zf) goto L_851e7d;
L_851dff: /* 851dff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851e00: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 851e03: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x851e09u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 851e09: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 851e0e: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 851e13: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x851e19u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 851e19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851e1b: jne 0x851e35 */
  if (!zf) goto L_851e35;
L_851e1d: /* 851e1d: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 851e22: push 0xae4780 */
  { uint32_t v = 0xae4780u; esp -= 4; W32(esp, v); }
/* 851e27: push 0xae47c4 */
  { uint32_t v = 0xae47c4u; esp -= 4; W32(esp, v); }
/* 851e2c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x851e32u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 851e32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_851e35: /* 851e35: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x851e3bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 851e3b: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 851e41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 851e43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851e47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 851e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851e49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851e4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851e4c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 851e51: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x851e57u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 851e57: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 851e5d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851e60: push 0xcc9b0c */
  { uint32_t v = 0xcc9b0cu; esp -= 4; W32(esp, v); }
/* 851e65: mov dword ptr [0xcc9b0c], eax */
  W32((uint32_t)(0xcc9b0cu), eax);
/* 851e6a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x851e6fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 851e6f: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
/* 851e74: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 851e78: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
L_851e7d: /* 851e7d: and dword ptr [eax + 0x40], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 851e81: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 851e87: mov byte ptr [edx + 0x44], 0 */
  W8((uint32_t)(edx + 0x44u), 0x0u);
/* 851e8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 851e8e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 851e91: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 851e94: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851e9b: jne 0x851f3c */
  if (!zf) goto L_851f3c;
L_851ea1: /* 851ea1: cmp dword ptr [0xcc9b08], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b08u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 851ea7: jne 0x851f1f */
  if (!zf) goto L_851f1f;
L_851ea9: /* 851ea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 851eab: mov ecx, esp */
  ecx = esp;
/* 851ead: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 851eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 851eb1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x851eb7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 851eb7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 851eb9: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 851ebe: call 0x6c7612 */
  esp -= 4; W32(esp, 0x851ec3u); SPILL(); f_6c7612(); if (g_unwind) return; RELOAD();
/* 851ec3: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 851ec9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 851ecc: push 0xcc9b08 */
  { uint32_t v = 0xcc9b08u; esp -= 4; W32(esp, v); }
/* 851ed1: mov dword ptr [0xcc9b08], eax */
  W32((uint32_t)(0xcc9b08u), eax);
/* 851ed6: call 0x6c1203 */
  esp -= 4; W32(esp, 0x851edbu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 851edb: test byte ptr [0xcc9b38], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9b38u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851ee2: jne 0x851f0f */
  if (!zf) goto L_851f0f;
L_851ee4: /* 851ee4: or dword ptr [0xcc9b38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9b38u), r);
  }
/* 851eeb: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 851eed: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 851ef0: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 851ef3: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 851ef6: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 851ef9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 851efc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 851efd: mov ecx, 0xcc9af0 */
  ecx = 0xcc9af0u;
/* 851f02: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 851f06: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x851f0bu); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 851f0b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_851f0f: /* 851f0f: mov ecx, dword ptr [0xcc9b08] */
  ecx = R32((uint32_t)(0xcc9b08u));
/* 851f15: push 0xcc9af0 */
  { uint32_t v = 0xcc9af0u; esp -= 4; W32(esp, v); }
/* 851f1a: call 0x6cccfc */
  esp -= 4; W32(esp, 0x851f1fu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_851f1f: /* 851f1f: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 851f25: mov byte ptr [ecx + 0x3c], 4 */
  W8((uint32_t)(ecx + 0x3cu), 0x4u);
/* 851f29: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 851f2f: mov eax, dword ptr [0xcc9b08] */
  eax = R32((uint32_t)(0xcc9b08u));
/* 851f34: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 851f37: jmp 0x852128 */
  goto L_852128;
L_851f3c: /* 851f3c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 851f3f: mov esi, dword ptr [edi + 0x20] */
  esi = R32((uint32_t)(edi + 0x20u));
/* 851f42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f44: je 0x851f5b */
  if (zf) goto L_851f5b;
L_851f46: /* 851f46: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 851f4b: mov ecx, esi */
  ecx = esi;
/* 851f4d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x851f53u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 851f53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f55: je 0x851f5b */
  if (zf) goto L_851f5b;
L_851f57: /* 851f57: mov ebx, esi */
  ebx = esi;
/* 851f59: jmp 0x851f5d */
  goto L_851f5d;
L_851f5b: /* 851f5b: xor ebx, ebx */
  ebx = 0;
L_851f5d: /* 851f5d: mov esi, dword ptr [edi + 0x20] */
  esi = R32((uint32_t)(edi + 0x20u));
/* 851f60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f62: je 0x851f75 */
  if (zf) goto L_851f75;
L_851f64: /* 851f64: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 851f69: mov ecx, esi */
  ecx = esi;
/* 851f6b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x851f71u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 851f71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f73: jne 0x851f77 */
  if (!zf) goto L_851f77;
L_851f75: /* 851f75: xor esi, esi */
  esi = 0;
L_851f77: /* 851f77: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 851f7a: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 851f7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f7f: je 0x851f96 */
  if (zf) goto L_851f96;
L_851f81: /* 851f81: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 851f86: mov ecx, edi */
  ecx = edi;
/* 851f88: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x851f8eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 851f8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f90: je 0x851f96 */
  if (zf) goto L_851f96;
L_851f92: /* 851f92: mov eax, edi */
  eax = edi;
/* 851f94: jmp 0x851f98 */
  goto L_851f98;
L_851f96: /* 851f96: xor eax, eax */
  eax = 0;
L_851f98: /* 851f98: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851f9a: je 0x851fd7 */
  if (zf) goto L_851fd7;
L_851f9c: /* 851f9c: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 851f9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851fa1: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 851fa4: je 0x851fb5 */
  if (zf) goto L_851fb5;
L_851fa6: /* 851fa6: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 851fac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 851faf: mov byte ptr [edx + 0x3c], 6 */
  W8((uint32_t)(edx + 0x3cu), 0x6u);
/* 851fb3: jmp 0x851fbe */
  goto L_851fbe;
L_851fb5: /* 851fb5: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
/* 851fba: mov byte ptr [eax + 0x3c], 4 */
  W8((uint32_t)(eax + 0x3cu), 0x4u);
L_851fbe: /* 851fbe: cmp byte ptr [ebx + 0x58], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x58u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 851fc2: jne 0x8520a1 */
  if (!zf) goto L_8520a1;
L_851fc8: /* 851fc8: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 851fce: mov byte ptr [ecx + 0x3c], 4 */
  W8((uint32_t)(ecx + 0x3cu), 0x4u);
/* 851fd2: jmp 0x8520a1 */
  goto L_8520a1;
L_851fd7: /* 851fd7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 851fd9: je 0x852028 */
  if (zf) goto L_852028;
L_851fdb: /* 851fdb: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 851fde: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851fe0: je 0x851ff4 */
  if (zf) goto L_851ff4;
L_851fe2: /* 851fe2: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 851fe8: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 851feb: mov byte ptr [edx + 0x3c], 6 */
  W8((uint32_t)(edx + 0x3cu), 0x6u);
/* 851fef: jmp 0x8520a1 */
  goto L_8520a1;
L_851ff4: /* 851ff4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 851ff6: je 0x85201c */
  if (zf) goto L_85201c;
L_851ff8: /* 851ff8: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
/* 851ffd: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 852001: mov eax, dword ptr [0xcc9b0c] */
  eax = R32((uint32_t)(0xcc9b0cu));
/* 852006: mov byte ptr [eax + 0x44], 0x7f */
  W8((uint32_t)(eax + 0x44u), 0x7fu);
/* 85200a: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 852010: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 852013: mov byte ptr [ecx + 0x3c], 4 */
  W8((uint32_t)(ecx + 0x3cu), 0x4u);
/* 852017: jmp 0x8520a1 */
  goto L_8520a1;
L_85201c: /* 85201c: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 852022: mov byte ptr [edx + 0x3c], 4 */
  W8((uint32_t)(edx + 0x3cu), 0x4u);
/* 852026: jmp 0x8520a1 */
  goto L_8520a1;
L_852028: /* 852028: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85202a: je 0x852075 */
  if (zf) goto L_852075;
L_85202c: /* 85202c: movzx ecx, byte ptr [eax + 0x3c] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x3cu)));
/* 852030: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 852033: mov esi, dword ptr [eax + 0x38] */
  esi = R32((uint32_t)(eax + 0x38u));
/* 852036: je 0x852044 */
  if (zf) goto L_852044;
L_852038: /* 852038: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 85203e: mov byte ptr [ecx + 0x3c], 4 */
  W8((uint32_t)(ecx + 0x3cu), 0x4u);
/* 852042: jmp 0x852051 */
  goto L_852051;
L_852044: /* 852044: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 85204a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 85204d: mov byte ptr [edx + 0x3c], 6 */
  W8((uint32_t)(edx + 0x3cu), 0x6u);
L_852051: /* 852051: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 852057: mov edi, dword ptr [ecx + 0x40] */
  edi = R32((uint32_t)(ecx + 0x40u));
/* 85205a: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 85205d: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 85205f: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 852062: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 852064: mov dword ptr [ecx + 0x40], edi */
  W32((uint32_t)(ecx + 0x40u), edi);
/* 852067: mov al, byte ptr [eax + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* 85206a: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 852070: mov byte ptr [ecx + 0x44], al */
  W8((uint32_t)(ecx + 0x44u), (eax & 0xffu));
/* 852073: jmp 0x8520a1 */
  goto L_8520a1;
L_852075: /* 852075: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 852078: mov esi, dword ptr [edx + 0x20] */
  esi = R32((uint32_t)(edx + 0x20u));
/* 85207b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85207d: jne 0x8520a1 */
  if (!zf) goto L_8520a1;
L_85207f: /* 85207f: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 852084: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x85208au); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 85208a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85208b: call 0x6cc446 */
  esp -= 4; W32(esp, 0x852090u); SPILL(); f_6cc446(); if (g_unwind) return; RELOAD();
/* 852090: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 852093: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 852096: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852097: call 0x6cca4a */
  esp -= 4; W32(esp, 0x85209cu); SPILL(); f_6cca4a(); if (g_unwind) return; RELOAD();
/* 85209c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85209f: mov esi, eax */
  esi = eax;
L_8520a1: /* 8520a1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8520a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8520a6: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 8520ac: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
/* 8520af: je 0x852128 */
  if (zf) goto L_852128;
L_8520b1: /* 8520b1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8520b3: je 0x852128 */
  if (zf) goto L_852128;
L_8520b5: /* 8520b5: mov eax, dword ptr [0xcc9aec] */
  eax = R32((uint32_t)(0xcc9aecu));
/* 8520ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8520bc: jne 0x8520f2 */
  if (!zf) goto L_8520f2;
L_8520be: /* 8520be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8520c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8520c1: mov ecx, esp */
  ecx = esp;
/* 8520c3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8520c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8520c8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8520ceu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8520ce: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8520d0: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 8520d5: call 0x6cbb22 */
  esp -= 4; W32(esp, 0x8520dau); SPILL(); f_6cbb22(); if (g_unwind) return; RELOAD();
/* 8520da: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8520e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8520e3: push 0xcc9aec */
  { uint32_t v = 0xcc9aecu; esp -= 4; W32(esp, v); }
/* 8520e8: mov dword ptr [0xcc9aec], eax */
  W32((uint32_t)(0xcc9aecu), eax);
/* 8520ed: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8520f2u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8520f2: /* 8520f2: mov edx, dword ptr [0xcc9aec] */
  edx = R32((uint32_t)(0xcc9aecu));
/* 8520f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8520fb: mov dword ptr [edx + 0x3c], esi */
  W32((uint32_t)(edx + 0x3cu), esi);
/* 8520fe: mov eax, dword ptr [0xcc9aec] */
  eax = R32((uint32_t)(0xcc9aecu));
/* 852103: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 852106: mov edx, dword ptr [0xcc9aec] */
  edx = R32((uint32_t)(0xcc9aecu));
/* 85210c: mov byte ptr [edx + 0x38], 0 */
  W8((uint32_t)(edx + 0x38u), 0x0u);
/* 852110: mov eax, dword ptr [0xcc9aec] */
  eax = R32((uint32_t)(0xcc9aecu));
/* 852115: mov byte ptr [eax + 0x39], 0 */
  W8((uint32_t)(eax + 0x39u), 0x0u);
/* 852119: mov ecx, dword ptr [0xcc9b0c] */
  ecx = R32((uint32_t)(0xcc9b0cu));
/* 85211f: mov edx, dword ptr [0xcc9aec] */
  edx = R32((uint32_t)(0xcc9aecu));
/* 852125: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
L_852128: /* 852128: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85212b: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 85212e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852130: mov al, byte ptr [edx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x29u))) & 0xffu);
/* 852133: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852136: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 852139: mov ecx, esp */
  ecx = esp;
/* 85213b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85213d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852140: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 852142: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 852149: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 852150: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 852157: jne 0x852189 */
  if (!zf) goto L_852189;
L_852159: /* 852159: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85215c: mov eax, esp */
  eax = esp;
/* 85215e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 852160: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 852163: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 852166: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852169: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85216c: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x852172u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 852172: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852175: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852179: push 0xcc9b10 */
  { uint32_t v = 0xcc9b10u; esp -= 4; W32(esp, v); }
/* 85217e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852180: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852182: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852184: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x852187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852187: jmp 0x8521b7 */
  goto L_8521b7;
L_852189: /* 852189: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85218c: mov edx, esp */
  edx = esp;
/* 85218e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 852190: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 852193: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 852196: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852199: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85219c: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8521a2u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8521a2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8521a5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8521a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521a9: push 0xcc9b24 */
  { uint32_t v = 0xcc9b24u; esp -= 4; W32(esp, v); }
/* 8521ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8521b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8521b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521b4: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8521b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8521b7: /* 8521b7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8521ba: mov edx, dword ptr [0xcc9b0c] */
  edx = R32((uint32_t)(0xcc9b0cu));
/* 8521c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8521c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8521c9: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8521ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8521cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8521cf: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 8521d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8521d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8521d4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8521d7: call 0x6c8c6a */
  esp -= 4; W32(esp, 0x8521dcu); SPILL(); f_6c8c6a(); if (g_unwind) return; RELOAD();
/* 8521dc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8521df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8521e1: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8521e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8521e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521e7: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8521eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8521ea: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8521ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8521ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8521f3: mov esi, eax */
  esi = eax;
/* 8521f5: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8521f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8521f8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8521fb: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 8521fe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852201: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852205: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852207: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85220b: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x85220eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85220e: /* 85220e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852211: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852213: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x852216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_852216: /* 852216: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85221b: mov ecx, dword ptr [0xce8354] */
  ecx = R32((uint32_t)(0xce8354u));
/* 852221: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 852224: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852229: mov ecx, dword ptr [0xce8348] */
  ecx = R32((uint32_t)(0xce8348u));
/* 85222f: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 852232: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 852235: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 852238: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85223a: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 85223d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852242: mov ecx, dword ptr [0xce834c] */
  ecx = R32((uint32_t)(0xce834cu));
/* 852248: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 85224b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85224e: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 852251: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 852253: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 852256: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85225b: mov ecx, dword ptr [0xce8350] */
  ecx = R32((uint32_t)(0xce8350u));
/* 852261: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 852264: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 852266: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852268: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85226b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85226d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85226e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 852270: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 852273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 852274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85227b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85227c: mov esp, ebp */
  esp = ebp;
/* 85227e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85227f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_852282(void) {
  LOAD_REGS();
L_852282: /* 852282: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 852285: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85228a: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 85228d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85228e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 852291: call 0x99caf8 */
  esp -= 4; W32(esp, 0x852296u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_852296(); return;
}

void f_852296(void) {
  LOAD_REGS();
L_852296: /* 852296: push 0xa16db0 */
  { uint32_t v = 0xa16db0u; esp -= 4; W32(esp, v); }
/* 85229b: push 0xae46a0 */
  { uint32_t v = 0xae46a0u; esp -= 4; W32(esp, v); }
/* 8522a0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8522a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8522a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8522a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8522ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8522ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8522b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8522b2: guest_badaddr(0x8522b2); return;
}

void f_852420(void) {
  LOAD_REGS();
L_852420: /* 852420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 852421: mov ebp, esp */
  ebp = esp;
/* 852423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852425: push 0x9d3e9e */
  { uint32_t v = 0x9d3e9eu; esp -= 4; W32(esp, v); }
/* 85242a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 852430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 852438: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85243b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852442: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 852445: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 85244b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85244c: xor ebx, ebx */
  ebx = 0;
/* 85244e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 852451: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 852454: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 852457: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 852459: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 85245b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85245e: cmp dword ptr [edx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 852461: jle 0x85272b */
  if ((zf || sf != of)) goto L_85272b;
L_852467: /* 852467: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85246a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85246c: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x85246eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85246e: test byte ptr [0xcc9b5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9b5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 852475: jne 0x8524a2 */
  if (!zf) goto L_8524a2;
L_852477: /* 852477: or dword ptr [0xcc9b5c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b5cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9b5cu), r);
  }
/* 85247e: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 852480: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 852483: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 852486: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 852489: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 85248d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852491: mov ecx, 0xcc9b44 */
  ecx = 0xcc9b44u;
/* 852496: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 85249a: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x85249fu); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 85249f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_8524a2: /* 8524a2: cmp dword ptr [0xcc9b40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8524a8: jne 0x85252e */
  if (!zf) goto L_85252e;
L_8524ae: /* 8524ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8524af: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8524b2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8524b8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8524b8: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 8524bd: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 8524c2: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8524c8u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8524c8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8524ca: jne 0x8524e4 */
  if (!zf) goto L_8524e4;
L_8524cc: /* 8524cc: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8524d1: push 0xae4718 */
  { uint32_t v = 0xae4718u; esp -= 4; W32(esp, v); }
/* 8524d6: push 0xae475c */
  { uint32_t v = 0xae475cu; esp -= 4; W32(esp, v); }
/* 8524db: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8524e1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8524e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8524e4: /* 8524e4: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8524eau); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8524ea: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8524f0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8524f2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8524f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8524f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8524f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8524f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8524f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8524fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8524fb: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 852500: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x852506u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 852506: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 85250c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85250f: push 0xcc9b40 */
  { uint32_t v = 0xcc9b40u; esp -= 4; W32(esp, v); }
/* 852514: mov dword ptr [0xcc9b40], eax */
  W32((uint32_t)(0xcc9b40u), eax);
/* 852519: call 0x6c1203 */
  esp -= 4; W32(esp, 0x85251eu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 85251e: mov ecx, dword ptr [0xcc9b40] */
  ecx = R32((uint32_t)(0xcc9b40u));
/* 852524: push 0xcc9b44 */
  { uint32_t v = 0xcc9b44u; esp -= 4; W32(esp, v); }
/* 852529: call 0x6cccfc */
  esp -= 4; W32(esp, 0x85252eu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_85252e: /* 85252e: cmp dword ptr [0xcc9b3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852534: jne 0x8525de */
  if (!zf) goto L_8525de;
L_85253a: /* 85253a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85253b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 85253e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x852544u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 852544: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 852549: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 85254e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x852554u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 852554: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852556: jne 0x852570 */
  if (!zf) goto L_852570;
L_852558: /* 852558: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 85255d: push 0xae4780 */
  { uint32_t v = 0xae4780u; esp -= 4; W32(esp, v); }
/* 852562: push 0xae47c4 */
  { uint32_t v = 0xae47c4u; esp -= 4; W32(esp, v); }
/* 852567: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85256du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85256d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_852570: /* 852570: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x852576u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 852576: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 85257c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85257e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852581: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852582: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852584: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852585: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852587: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 85258c: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x852592u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 852592: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 852598: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85259b: push 0xcc9b3c */
  { uint32_t v = 0xcc9b3cu; esp -= 4; W32(esp, v); }
/* 8525a0: mov dword ptr [0xcc9b3c], eax */
  W32((uint32_t)(0xcc9b3cu), eax);
/* 8525a5: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8525aau); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8525aa: mov edx, dword ptr [0xcc9b3c] */
  edx = R32((uint32_t)(0xcc9b3cu));
/* 8525b0: mov eax, dword ptr [0xcc9b40] */
  eax = R32((uint32_t)(0xcc9b40u));
/* 8525b5: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 8525b8: mov ecx, dword ptr [0xcc9b3c] */
  ecx = R32((uint32_t)(0xcc9b3cu));
/* 8525be: mov byte ptr [ecx + 0x3c], bl */
  W8((uint32_t)(ecx + 0x3cu), (ebx & 0xffu));
/* 8525c1: mov eax, dword ptr [0xcc9b3c] */
  eax = R32((uint32_t)(0xcc9b3cu));
/* 8525c6: or dword ptr [eax + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 8525ca: mov eax, dword ptr [0xcc9b3c] */
  eax = R32((uint32_t)(0xcc9b3cu));
/* 8525cf: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8525d2: mov esi, 8 */
  esi = 0x8u;
/* 8525d7: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8525d9: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 8525dc: jmp 0x8525e3 */
  goto L_8525e3;
L_8525de: /* 8525de: mov esi, 8 */
  esi = 0x8u;
L_8525e3: /* 8525e3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8525e6: mov ecx, esp */
  ecx = esp;
/* 8525e8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8525eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8525ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8525ef: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8525f6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8525f9: mov edx, esp */
  edx = esp;
/* 8525fb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8525fd: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 852604: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 852607: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85260a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 852611: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852614: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 852617: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x85261du); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 85261d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852620: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852622: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852624: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852625: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852627: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x85262au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85262a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85262d: mov edx, dword ptr [0xcc9b3c] */
  edx = R32((uint32_t)(0xcc9b3cu));
/* 852633: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852635: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852636: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852638: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852639: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x85263cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85263c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85263f: mov eax, dword ptr [ecx + 0x1d0] */
  eax = R32((uint32_t)(ecx + 0x1d0u));
/* 852645: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852647: je 0x852664 */
  if (zf) goto L_852664;
L_852649: /* 852649: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85264c: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 85264f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852652: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852655: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 852657: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852659: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85265b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85265c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85265d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 85265f: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x852662u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852662: jmp 0x8526cc */
  goto L_8526cc;
L_852664: /* 852664: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 852667: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 85266a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85266c: je 0x85267d */
  if (zf) goto L_85267d;
L_85266e: /* 85266e: cmp dword ptr [eax + 0x540], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852674: jne 0x85267d */
  if (!zf) goto L_85267d;
L_852676: /* 852676: mov edx, 1 */
  edx = 0x1u;
/* 85267b: jmp 0x85267f */
  goto L_85267f;
L_85267d: /* 85267d: xor edx, edx */
  edx = 0;
L_85267f: /* 85267f: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 852682: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852684: je 0x852695 */
  if (zf) goto L_852695;
L_852686: /* 852686: cmp dword ptr [eax + 0x540], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85268c: jne 0x852695 */
  if (!zf) goto L_852695;
L_85268e: /* 85268e: mov eax, 1 */
  eax = 0x1u;
/* 852693: jmp 0x852697 */
  goto L_852697;
L_852695: /* 852695: xor eax, eax */
  eax = 0;
L_852697: /* 852697: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85269a: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 85269d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8526a0: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8526a2: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 8526a4: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 8526a6: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8526a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8526aa: mov esi, edi */
  esi = edi;
/* 8526ac: not esi */
  esi = ~esi;
/* 8526ae: not edx */
  edx = ~edx;
/* 8526b0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 8526b2: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8526b4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8526b6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8526b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8526ba: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8526bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8526bf: not eax */
  eax = ~eax;
/* 8526c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8526c2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8526c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8526c5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 8526c7: call dword ptr [ebx + 0x40] */
  { uint32_t t = R32((uint32_t)(ebx + 0x40u)); esp -= 4; W32(esp, 0x8526cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8526ca: xor ebx, ebx */
  ebx = 0;
L_8526cc: /* 8526cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8526cf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8526d2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8526d4: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 8526d7: add edx, dword ptr [eax + 0xd8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xd8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8526dd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8526e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8526e2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8526e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8526e6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8526e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8526eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8526ec: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8526efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8526ef: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8526f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8526f3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8526f6: call 0x6cbfdc */
  esp -= 4; W32(esp, 0x8526fbu); SPILL(); f_6cbfdc(); if (g_unwind) return; RELOAD();
/* 8526fb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8526fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852701: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 852704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852705: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x852708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852708: movzx esi, word ptr [ebp - 0x32] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffceu)));
/* 85270c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85270f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852712: movzx esi, word ptr [ebp - 0x34] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffccu)));
/* 852716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852717: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85271a: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 85271d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85271e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85271f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852720: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x852723u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852723: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852726: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852728: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x85272bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85272b: /* 85272b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852730: mov ecx, dword ptr [0xce8378] */
  ecx = R32((uint32_t)(0xce8378u));
/* 852736: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 852739: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85273c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85273f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 852741: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 852744: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852749: mov ecx, dword ptr [0xce837c] */
  ecx = R32((uint32_t)(0xce837cu));
/* 85274f: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 852752: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 852755: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 852758: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85275a: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 85275d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 852762: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 852768: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85276b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85276d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85276f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 852772: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 852774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 852775: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 852777: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85277a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85277b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 852782: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 852783: mov esp, ebp */
  esp = ebp;
/* 852785: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 852786: ret 8 */
  esp += 12; SPILL(); return;
}

void f_852789(void) {
  LOAD_REGS();
L_852789: /* 852789: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85278c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 852791: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 852794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852795: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 852798: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85279du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85279d(); return;
}

void f_85279d(void) {
  LOAD_REGS();
L_85279d: /* 85279d: push 0xa16df0 */
  { uint32_t v = 0xa16df0u; esp -= 4; W32(esp, v); }
/* 8527a2: push 0xae46a8 */
  { uint32_t v = 0xae46a8u; esp -= 4; W32(esp, v); }
/* 8527a7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8527adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8527ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8527b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8527b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8527b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8527b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8527b9: guest_badaddr(0x8527b9); return;
}

void f_8528b0(void) {
  LOAD_REGS();
L_8528b0: /* 8528b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8528b1: mov ebp, esp */
  ebp = esp;
/* 8528b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8528b5: push 0x9d3ebe */
  { uint32_t v = 0x9d3ebeu; esp -= 4; W32(esp, v); }
/* 8528ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8528c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8528c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8528c8: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8528ce: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8528d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8528d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8528d5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8528d8: mov ecx, dword ptr [0xce8340] */
  ecx = R32((uint32_t)(0xce8340u));
/* 8528de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8528df: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8528e2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8528e9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8528ec: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8528ee: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 8528f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8528f3: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8528f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8528f8: jle 0x85309c */
  if ((zf || sf != of)) goto L_85309c;
L_8528fe: /* 8528fe: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 852901: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 852903: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 852906: mov eax, dword ptr [edx + 0xd8] */
  eax = R32((uint32_t)(edx + 0xd8u));
/* 85290c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85290f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 852911: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852913: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 852916: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x852918u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852918: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85291b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 85291e: mov edx, dword ptr [ecx + 0x15c] */
  edx = R32((uint32_t)(ecx + 0x15cu));
/* 852924: xor ebx, ebx */
  ebx = 0;
/* 852926: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852928: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85292b: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 85292e: xor esi, esi */
  esi = 0;
/* 852930: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852932: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 852935: je 0x8529a2 */
  if (zf) goto L_8529a2;
L_852937: /* 852937: mov eax, dword ptr [edx + 0x540] */
  eax = R32((uint32_t)(edx + 0x540u));
/* 85293d: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852940: je 0x852960 */
  if (zf) goto L_852960;
L_852942: /* 852942: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852945: je 0x852960 */
  if (zf) goto L_852960;
L_852947: /* 852947: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85294a: je 0x852960 */
  if (zf) goto L_852960;
L_85294c: /* 85294c: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85294f: je 0x852960 */
  if (zf) goto L_852960;
L_852951: /* 852951: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852954: jne 0x8529a2 */
  if (!zf) goto L_8529a2;
L_852956: /* 852956: mov eax, dword ptr [edx + 0x538] */
  eax = R32((uint32_t)(edx + 0x538u));
/* 85295c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85295e: je 0x8529a2 */
  if (zf) goto L_8529a2;
L_852960: /* 852960: test dword ptr [edi + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852967: jne 0x8529a2 */
  if (!zf) goto L_8529a2;
L_852969: /* 852969: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 85296c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85296f: je 0x8529a2 */
  if (zf) goto L_8529a2;
L_852971: /* 852971: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852974: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 852976: cmp eax, dword ptr [edx + 0xe8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85297c: jge 0x8529a2 */
  if ((sf == of)) goto L_8529a2;
L_85297e: /* 85297e: mov esi, dword ptr [edx + 0xe4] */
  esi = R32((uint32_t)(edx + 0xe4u));
/* 852984: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 852987: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 85298a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85298c: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 85298f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852991: je 0x8529a0 */
  if (zf) goto L_8529a0;
L_852993: /* 852993: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* 852996: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 852999: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85299b: lea esi, [eax + 0x14] */
  esi = (uint32_t)(eax + 0x14u);
/* 85299e: je 0x8529a2 */
  if (zf) goto L_8529a2;
L_8529a0: /* 8529a0: mov esi, eax */
  esi = eax;
L_8529a2: /* 8529a2: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8529a7u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8529a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8529a9: je 0x852a0b */
  if (zf) goto L_852a0b;
L_8529ab: /* 8529ab: mov eax, dword ptr [0xcc9b88] */
  eax = R32((uint32_t)(0xcc9b88u));
/* 8529b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8529b2: jne 0x8529f1 */
  if (!zf) goto L_8529f1;
L_8529b4: /* 8529b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8529b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8529b7: mov ecx, esp */
  ecx = esp;
/* 8529b9: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 8529bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8529be: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8529c4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8529c4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8529c6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8529cb: call 0x6cc630 */
  esp -= 4; W32(esp, 0x8529d0u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 8529d0: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8529d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8529d9: push 0xcc9b88 */
  { uint32_t v = 0xcc9b88u; esp -= 4; W32(esp, v); }
/* 8529de: mov dword ptr [0xcc9b88], eax */
  W32((uint32_t)(0xcc9b88u), eax);
/* 8529e3: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8529e8u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8529e8: mov eax, dword ptr [0xcc9b88] */
  eax = R32((uint32_t)(0xcc9b88u));
/* 8529ed: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8529f1: /* 8529f1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8529f4: mov edx, dword ptr [0xcc9b88] */
  edx = R32((uint32_t)(0xcc9b88u));
/* 8529fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8529fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8529fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852a03: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x852a06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852a06: jmp 0x852b47 */
  goto L_852b47;
L_852a0b: /* 852a0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 852a0e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 852a11: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 852a14: mov eax, dword ptr [edx + 0x540] */
  eax = R32((uint32_t)(edx + 0x540u));
/* 852a1a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852a1d: je 0x852aa7 */
  if (zf) goto L_852aa7;
L_852a23: /* 852a23: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852a26: je 0x852aa7 */
  if (zf) goto L_852aa7;
L_852a28: /* 852a28: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852a2b: je 0x852aa7 */
  if (zf) goto L_852aa7;
L_852a2d: /* 852a2d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852a30: mov ecx, esp */
  ecx = esp;
/* 852a32: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 852a35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852a3a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 852a41: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852a44: mov eax, esp */
  eax = esp;
/* 852a46: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 852a48: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 852a4f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 852a52: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 852a55: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 852a5c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 852a5f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 852a62: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x852a68u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 852a68: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 852a6b: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 852a6e: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 852a71: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852a74: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852a76: xor ebx, ebx */
  ebx = 0;
/* 852a78: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852a7f: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 852a82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 852a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852a84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852a86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a8a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x852a8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852a8d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852a90: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 852a93: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852a95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852a9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852a9c: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x852a9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852a9f: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 852aa2: jmp 0x852b47 */
  goto L_852b47;
L_852aa7: /* 852aa7: mov eax, dword ptr [0xcc9b84] */
  eax = R32((uint32_t)(0xcc9b84u));
/* 852aac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852aae: jne 0x852ae4 */
  if (!zf) goto L_852ae4;
L_852ab0: /* 852ab0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852ab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852ab3: mov ecx, esp */
  ecx = esp;
/* 852ab5: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 852ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852aba: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x852ac0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 852ac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852ac2: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 852ac7: call 0x6cc630 */
  esp -= 4; W32(esp, 0x852accu); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 852acc: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 852ad2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 852ad5: push 0xcc9b84 */
  { uint32_t v = 0xcc9b84u; esp -= 4; W32(esp, v); }
/* 852ada: mov dword ptr [0xcc9b84], eax */
  W32((uint32_t)(0xcc9b84u), eax);
/* 852adf: call 0x6c1203 */
  esp -= 4; W32(esp, 0x852ae4u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_852ae4: /* 852ae4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852ae7: mov ecx, esp */
  ecx = esp;
/* 852ae9: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 852aec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852aee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 852af1: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 852af8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852afb: mov eax, esp */
  eax = esp;
/* 852afd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 852aff: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 852b06: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 852b09: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 852b0c: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 852b13: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 852b16: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 852b19: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x852b1fu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 852b1f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852b24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852b2e: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x852b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852b31: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b34: mov eax, dword ptr [0xcc9b84] */
  eax = R32((uint32_t)(0xcc9b84u));
/* 852b39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852b3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852b42: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x852b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852b45: xor ebx, ebx */
  ebx = 0;
L_852b47: /* 852b47: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 852b4c: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 852b4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852b50: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 852b53: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b57: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x852b5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852b5a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852b5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852b5e: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 852b61: call 0x6cbfdc */
  esp -= 4; W32(esp, 0x852b66u); SPILL(); f_6cbfdc(); if (g_unwind) return; RELOAD();
/* 852b66: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852b6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852b6d: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 852b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852b71: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x852b74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852b74: mov esi, eax */
  esi = eax;
/* 852b76: test dword ptr [edi + 0x24], 0x4000100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x24u))); uint32_t b = (uint32_t)(0x4000100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852b7d: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 852b80: je 0x852b8c */
  if (zf) goto L_852b8c;
L_852b82: /* 852b82: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b85: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852b87: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 852b89: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x852b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_852b8c: /* 852b8c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852b8e: je 0x852c3c */
  if (zf) goto L_852c3c;
L_852b94: /* 852b94: movzx edx, word ptr [ebp - 0x4e] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb2u)));
/* 852b98: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852b9b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 852b9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852b9e: movzx edx, word ptr [ebp - 0x50] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb0u)));
/* 852ba2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852ba3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852ba6: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 852ba9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852baa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 852bab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852bad: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x852bb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852bb0: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852bb3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_852bb6: /* 852bb6: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 852bb9: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 852bbf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852bc1: jne 0x853094 */
  if (!zf) goto L_853094;
L_852bc7: /* 852bc7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 852bca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852bcc: je 0x852f0c */
  if (zf) goto L_852f0c;
L_852bd2: /* 852bd2: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 852bd8: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852bdb: je 0x852c03 */
  if (zf) goto L_852c03;
L_852bdd: /* 852bdd: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852be0: je 0x852c03 */
  if (zf) goto L_852c03;
L_852be2: /* 852be2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852be5: je 0x852c03 */
  if (zf) goto L_852c03;
L_852be7: /* 852be7: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852bea: je 0x852c03 */
  if (zf) goto L_852c03;
L_852bec: /* 852bec: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852bef: jne 0x852f0c */
  if (!zf) goto L_852f0c;
L_852bf5: /* 852bf5: mov eax, dword ptr [ecx + 0x538] */
  eax = R32((uint32_t)(ecx + 0x538u));
/* 852bfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852bfd: je 0x852f0c */
  if (zf) goto L_852f0c;
L_852c03: /* 852c03: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 852c06: test dword ptr [ecx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852c0d: jne 0x852f0c */
  if (!zf) goto L_852f0c;
L_852c13: /* 852c13: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 852c16: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852c18: je 0x852f0c */
  if (zf) goto L_852f0c;
L_852c1e: /* 852c1e: mov edi, edi */
  edi = edi;
L_852c20: /* 852c20: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852c22: je 0x852f0c */
  if (zf) goto L_852f0c;
L_852c28: /* 852c28: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 852c2b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 852c2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852c2f: call 0x6ca1ff */
  esp -= 4; W32(esp, 0x852c34u); SPILL(); f_6ca1ff(); if (g_unwind) return; RELOAD();
/* 852c34: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 852c37: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 852c3a: jmp 0x852c20 */
  goto L_852c20;
L_852c3c: /* 852c3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 852c3f: xor ebx, ebx */
  ebx = 0;
/* 852c41: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
L_852c44: /* 852c44: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852c47: cmp ebx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 852c4a: jge 0x852bb6 */
  if ((sf == of)) goto L_852bb6;
L_852c50: /* 852c50: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 852c53: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 852c56: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 852c58: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 852c5b: add esi, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 852c5e: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 852c61: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 852c64: add eax, dword ptr [ecx + 0x98] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x98u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 852c6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 852c6d: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 852c70: mov ecx, dword ptr [ecx + 0x540] */
  ecx = R32((uint32_t)(ecx + 0x540u));
/* 852c76: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852c79: je 0x852c8e */
  if (zf) goto L_852c8e;
L_852c7b: /* 852c7b: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852c7e: je 0x852c89 */
  if (zf) goto L_852c89;
L_852c80: /* 852c80: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852c83: jne 0x852e89 */
  if (!zf) goto L_852e89;
L_852c89: /* 852c89: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852c8c: jne 0x852cfd */
  if (!zf) goto L_852cfd;
L_852c8e: /* 852c8e: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 852c91: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 852c94: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852c96: je 0x852ca0 */
  if (zf) goto L_852ca0;
L_852c98: /* 852c98: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x852c9eu); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 852c9e: jmp 0x852ca2 */
  goto L_852ca2;
L_852ca0: /* 852ca0: xor eax, eax */
  eax = 0;
L_852ca2: /* 852ca2: mov ecx, eax */
  ecx = eax;
/* 852ca4: imul ecx, ecx, 0x43 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x43u);
  ecx = (uint32_t)r;
  }
/* 852ca7: mov edx, eax */
  edx = eax;
/* 852ca9: imul eax, eax, -0x39 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xffffffc7u);
  eax = (uint32_t)r;
  }
/* 852cac: imul edx, edx, 0x5b */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x5bu);
  edx = (uint32_t)r;
  }
/* 852caf: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 852cb5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 852cb8: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 852cbe: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 852cc3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852cc6: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 852cc9: push 0x43800000 */
  { uint32_t v = 0x43800000u; esp -= 4; W32(esp, v); }
/* 852cce: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 852cd1: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 852cd4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852cd7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 852cda: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 852ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ce1: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 852ce4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852ce7: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 852cea: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x852cf0u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 852cf0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 852cf2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 852cf5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 852cf8: jmp 0x852e50 */
  goto L_852e50;
L_852cfd: /* 852cfd: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852d00: jne 0x852e32 */
  if (!zf) goto L_852e32;
L_852d06: /* 852d06: mov ecx, dword ptr [edx + 0x1c0] */
  ecx = R32((uint32_t)(edx + 0x1c0u));
/* 852d0c: cmp dword ptr [ecx + 0x118], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x118u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 852d13: je 0x852e32 */
  if (zf) goto L_852e32;
L_852d19: /* 852d19: fld dword ptr [edx + 0x19c] */
  { double v = F32((uint32_t)(edx + 0x19cu)); FPUSH(v); }
/* 852d1f: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 852d22: fld dword ptr [edx + 0x198] */
  { double v = F32((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 852d28: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 852d2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 852d2d: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 852d30: fmul dword ptr [edx + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x194u)));
/* 852d36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 852d38: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 852d3b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 852d41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 852d43: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 852d46: jne 0x852d4f */
  if (!zf) goto L_852d4f;
L_852d48: /* 852d48: mov eax, 1 */
  eax = 0x1u;
/* 852d4d: jmp 0x852d51 */
  goto L_852d51;
L_852d4f: /* 852d4f: xor eax, eax */
  eax = 0;
L_852d51: /* 852d51: movzx eax, byte ptr [eax + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi + 0x54u)));
/* 852d56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852d58: jne 0x852d90 */
  if (!zf) goto L_852d90;
L_852d5a: /* 852d5a: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 852d60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 852d61: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 852d64: mov byte ptr [ebp - 0x1c], 0xff */
  W8((uint32_t)(ebp + 0xffffffe4u), 0xffu);
/* 852d68: mov byte ptr [ebp - 0x1b], 0xff */
  W8((uint32_t)(ebp + 0xffffffe5u), 0xffu);
/* 852d6c: mov byte ptr [ebp - 0x1a], 0xff */
  W8((uint32_t)(ebp + 0xffffffe6u), 0xffu);
/* 852d70: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 852d74: call 0x6c91c4 */
  esp -= 4; W32(esp, 0x852d79u); SPILL(); f_6c91c4(); if (g_unwind) return; RELOAD();
/* 852d79: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 852d7f: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 852d82: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 852d85: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 852d88: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 852d8b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 852d8e: jmp 0x852df2 */
  goto L_852df2;
L_852d90: /* 852d90: mov ecx, eax */
  ecx = eax;
/* 852d92: imul ecx, ecx, 0x43 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x43u);
  ecx = (uint32_t)r;
  }
/* 852d95: mov edx, eax */
  edx = eax;
/* 852d97: imul eax, eax, -0x39 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xffffffc7u);
  eax = (uint32_t)r;
  }
/* 852d9a: imul edx, edx, 0x5b */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x5bu);
  edx = (uint32_t)r;
  }
/* 852d9d: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 852da3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 852da6: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 852dac: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 852db1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852db4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 852db7: push 0x43800000 */
  { uint32_t v = 0x43800000u; esp -= 4; W32(esp, v); }
/* 852dbc: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 852dbf: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 852dc2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852dc5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 852dc8: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 852dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852dcf: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 852dd2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852dd5: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 852dd8: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x852ddeu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 852dde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 852de0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 852de3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 852de6: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 852de9: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 852dec: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 852def: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_852df2: /* 852df2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 852df5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 852df8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 852dfb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 852dfe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 852e01: fmul dword ptr [0xa16ab0] */
  ST0 = ST0 * (F32((uint32_t)(0xa16ab0u)));
/* 852e07: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 852e0d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 852e10: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 852e12: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 852e15: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 852e18: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 852e1b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 852e1d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 852e20: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 852e23: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 852e26: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 852e28: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 852e2b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 852e2e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 852e30: jmp 0x852e50 */
  goto L_852e50;
L_852e32: /* 852e32: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 852e39: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 852e3c: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 852e43: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 852e46: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 852e4d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_852e50: /* 852e50: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 852e56: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 852e5c: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 852e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852e63: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 852e66: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 852e6c: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 852e76: call 0x6c576d */
  esp -= 4; W32(esp, 0x852e7bu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 852e7b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852e7e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 852e80: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852e82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852e83: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x852e86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852e86: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_852e89: /* 852e89: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 852e8c: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 852e92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852e94: je 0x852eb7 */
  if (zf) goto L_852eb7;
L_852e96: /* 852e96: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 852e99: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 852e9f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 852ea1: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 852ea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ea8: mov dword ptr [ebp - 0xa8], 0x9f716c */
  W32((uint32_t)(ebp + 0xffffff58u), 0x9f716cu);
/* 852eb2: call 0x6c76fd */
  esp -= 4; W32(esp, 0x852eb7u); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_852eb7: /* 852eb7: movzx eax, word ptr [ebp - 0x4e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb2u)));
/* 852ebb: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 852ebe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 852ec1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 852ec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ec4: movzx eax, word ptr [ebp - 0x50] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb0u)));
/* 852ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ec9: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 852ecd: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 852ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ed1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 852ed4: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 852ed6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 852ed7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852ed9: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x852edcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 852edc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 852edf: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 852ee2: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 852ee8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852eea: je 0x852ef6 */
  if (zf) goto L_852ef6;
L_852eec: /* 852eec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852eee: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x852ef3u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
/* 852ef3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_852ef6: /* 852ef6: movzx eax, byte ptr [esi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 852efa: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 852efd: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 852f00: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 852f03: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 852f06: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 852f07: jmp 0x852c44 */
  goto L_852c44;
L_852f0c: /* 852f0c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 852f0f: test dword ptr [ecx + 0x24], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852f16: je 0x853094 */
  if (zf) goto L_853094;
L_852f1c: /* 852f1c: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 852f1f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 852f22: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852f2c: je 0x853094 */
  if (zf) goto L_853094;
L_852f32: /* 852f32: test byte ptr [0xcc9b80], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9b80u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 852f39: jne 0x852f68 */
  if (!zf) goto L_852f68;
L_852f3b: /* 852f3b: or dword ptr [0xcc9b80], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b80u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9b80u), r);
  }
/* 852f42: mov byte ptr [ebp - 0x1c], 0x3c */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x3cu);
/* 852f46: mov byte ptr [ebp - 0x1b], 5 */
  W8((uint32_t)(ebp + 0xffffffe5u), 0x5u);
/* 852f4a: mov byte ptr [ebp - 0x1a], 0xa */
  W8((uint32_t)(ebp + 0xffffffe6u), 0xau);
/* 852f4e: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 852f52: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 852f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852f56: mov ecx, 0xcc9b68 */
  ecx = 0xcc9b68u;
/* 852f5b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 852f5f: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x852f64u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 852f64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_852f68: /* 852f68: mov eax, dword ptr [0xcc9b64] */
  eax = R32((uint32_t)(0xcc9b64u));
/* 852f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852f6f: jne 0x852fb5 */
  if (!zf) goto L_852fb5;
L_852f71: /* 852f71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852f73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852f74: mov ecx, esp */
  ecx = esp;
/* 852f76: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 852f79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852f7b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x852f81u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 852f81: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852f83: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 852f88: call 0x6c7612 */
  esp -= 4; W32(esp, 0x852f8du); SPILL(); f_6c7612(); if (g_unwind) return; RELOAD();
/* 852f8d: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 852f93: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 852f96: push 0xcc9b64 */
  { uint32_t v = 0xcc9b64u; esp -= 4; W32(esp, v); }
/* 852f9b: mov dword ptr [0xcc9b64], eax */
  W32((uint32_t)(0xcc9b64u), eax);
/* 852fa0: call 0x6c1203 */
  esp -= 4; W32(esp, 0x852fa5u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 852fa5: mov ecx, dword ptr [0xcc9b64] */
  ecx = R32((uint32_t)(0xcc9b64u));
/* 852fab: push 0xcc9b68 */
  { uint32_t v = 0xcc9b68u; esp -= 4; W32(esp, v); }
/* 852fb0: call 0x6cccfc */
  esp -= 4; W32(esp, 0x852fb5u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_852fb5: /* 852fb5: mov eax, dword ptr [0xcc9b60] */
  eax = R32((uint32_t)(0xcc9b60u));
/* 852fba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 852fbc: jne 0x853013 */
  if (!zf) goto L_853013;
L_852fbe: /* 852fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 852fc1: mov ecx, esp */
  ecx = esp;
/* 852fc3: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 852fc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 852fc8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x852fceu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 852fce: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 852fd0: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 852fd5: call 0x6c9e99 */
  esp -= 4; W32(esp, 0x852fdau); SPILL(); f_6c9e99(); if (g_unwind) return; RELOAD();
/* 852fda: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 852fe0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 852fe3: push 0xcc9b60 */
  { uint32_t v = 0xcc9b60u; esp -= 4; W32(esp, v); }
/* 852fe8: mov dword ptr [0xcc9b60], eax */
  W32((uint32_t)(0xcc9b60u), eax);
/* 852fed: call 0x6c1203 */
  esp -= 4; W32(esp, 0x852ff2u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 852ff2: mov eax, dword ptr [0xcc9b64] */
  eax = R32((uint32_t)(0xcc9b64u));
/* 852ff7: mov edx, dword ptr [0xcc9b60] */
  edx = R32((uint32_t)(0xcc9b60u));
/* 852ffd: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 853000: mov ecx, dword ptr [0xcc9b60] */
  ecx = R32((uint32_t)(0xcc9b60u));
/* 853006: mov byte ptr [ecx + 0x3c], 6 */
  W8((uint32_t)(ecx + 0x3cu), 0x6u);
/* 85300a: mov eax, dword ptr [0xcc9b60] */
  eax = R32((uint32_t)(0xcc9b60u));
/* 85300f: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_853013: /* 853013: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 853016: mov ecx, esp */
  ecx = esp;
/* 853018: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 85301b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85301d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 853020: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 853027: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85302a: mov edx, esp */
  edx = esp;
/* 85302c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85302e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 853035: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 853038: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85303b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 853042: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 853045: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 853048: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x85304eu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 85304e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 853051: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 853053: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85305b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85305d: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x853060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 853060: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 853063: mov edx, dword ptr [0xcc9b60] */
  edx = R32((uint32_t)(0xcc9b60u));
/* 853069: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85306b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85306d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85306f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853071: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853072: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x853075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 853075: movzx edx, word ptr [ebp - 0x4e] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb2u)));
/* 853079: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85307c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85307e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85307f: movzx edx, word ptr [ebp - 0x50] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb0u)));
/* 853083: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853084: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 853087: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 85308a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85308b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85308e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85308f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853091: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x853094u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_853094: /* 853094: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 853097: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 853099: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x85309cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85309c: /* 85309c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8530a1: mov ecx, dword ptr [0xce8340] */
  ecx = R32((uint32_t)(0xce8340u));
/* 8530a7: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8530aa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8530ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8530ae: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8530b1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8530b3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8530b5: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8530ba: mov ecx, dword ptr [0xce8344] */
  ecx = R32((uint32_t)(0xce8344u));
/* 8530c0: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8530c3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8530c8: mov ecx, dword ptr [0xce8348] */
  ecx = R32((uint32_t)(0xce8348u));
/* 8530ce: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 8530d1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8530d4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8530d7: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8530d9: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 8530dc: mov ecx, dword ptr [0xce834c] */
  ecx = R32((uint32_t)(0xce834cu));
/* 8530e2: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8530e7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8530ea: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 8530ed: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 8530f0: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8530f2: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 8530f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8530f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8530f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8530fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 853101: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 853102: mov esp, ebp */
  esp = ebp;
/* 853104: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 853105: ret 8 */
  esp += 12; SPILL(); return;
}

void f_853108(void) {
  LOAD_REGS();
L_853108: /* 853108: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 85310e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 853113: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 853116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853117: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 85311a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85311fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85311f(); return;
}

void f_85311f(void) {
  LOAD_REGS();
L_85311f: /* 85311f: push 0xa16e34 */
  { uint32_t v = 0xa16e34u; esp -= 4; W32(esp, v); }
/* 853124: push 0xae4698 */
  { uint32_t v = 0xae4698u; esp -= 4; W32(esp, v); }
/* 853129: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85312fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85312f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 853132: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853134: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853136: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85313bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85313b: guest_badaddr(0x85313b); return;
}

void f_853370(void) {
  LOAD_REGS();
L_853370: /* 853370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 853371: mov ebp, esp */
  ebp = esp;
/* 853373: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 853375: push 0x9d3ee6 */
  { uint32_t v = 0x9d3ee6u; esp -= 4; W32(esp, v); }
/* 85337a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 853380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 853381: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 853388: sub esp, 0x19c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x19cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85338e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 853391: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 853393: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 853396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 853397: mov ebx, dword ptr [eax + 0x58] */
  ebx = R32((uint32_t)(eax + 0x58u));
/* 85339a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85339b: add edx, dword ptr [eax + 0xd8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xd8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8533a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8533a2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8533a5: mov esi, edi */
  esi = edi;
/* 8533a7: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8533aa: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8533ac: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 8533af: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8533b2: add esi, dword ptr [eax + 0x98] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x98u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8533b8: cmp dword ptr [ebx + 0x64], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x64u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8533bc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8533bf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8533c2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8533c9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8533cc: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8533cf: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 8533d2: je 0x8533f3 */
  if (zf) goto L_8533f3;
L_8533d4: /* 8533d4: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8533d7: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 8533da: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 8533dd: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8533e0: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 8533e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8533e4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8533e7: movzx eax, byte ptr [ebx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8533eb: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8533ee: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8533f0: mov dword ptr [ecx + 0xc], esi */
  W32((uint32_t)(ecx + 0xcu), esi);
L_8533f3: /* 8533f3: test dword ptr [edx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8533fa: jne 0x8535a9 */
  if (!zf) goto L_8535a9;
L_853400: /* 853400: cmp dword ptr [edx + 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x28u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853404: je 0x8535a9 */
  if (zf) goto L_8535a9;
L_85340a: /* 85340a: xor eax, eax */
  eax = 0;
/* 85340c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85340f: nop  */
L_853410: /* 853410: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853413: jge 0x8535a9 */
  if ((sf == of)) goto L_8535a9;
L_853419: /* 853419: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85341c: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 85341f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 853422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853424: je 0x85359a */
  if (zf) goto L_85359a;
L_85342a: /* 85342a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85342c: mov al, byte ptr [edx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x29u))) & 0xffu);
/* 85342f: xor edi, edi */
  edi = 0;
/* 853431: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 853433: jne 0x8534af */
  if (!zf) goto L_8534af;
L_853435: /* 853435: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 853438: fchs  */
  ST0 = -ST0;
/* 85343a: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 85343d: fchs  */
  ST0 = -ST0;
/* 85343f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 853442: fchs  */
  ST0 = -ST0;
/* 853444: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 853446: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 853448: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 85344b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85344d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85344f: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 853452: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 853454: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 85345a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85345c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85345f: je 0x8534f3 */
  if (zf) goto L_8534f3;
L_853465: /* 853465: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 853468: fchs  */
  ST0 = -ST0;
/* 85346a: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 85346d: fchs  */
  ST0 = -ST0;
/* 85346f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 853472: fchs  */
  ST0 = -ST0;
/* 853474: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 853476: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 853478: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 85347b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85347d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85347f: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 853482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 853484: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 85348a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85348c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85348f: jp 0x85359a */
  if (pf) goto L_85359a;
L_853495: /* 853495: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 853498: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85349b: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85349e: jne 0x8534f3 */
  if (!zf) goto L_8534f3;
L_8534a0: /* 8534a0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8534a3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8534a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8534a7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8534aa: jmp 0x853410 */
  goto L_853410;
L_8534af: /* 8534af: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8534b2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8534b5: fsub dword ptr [ebx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x34u)));
/* 8534b8: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8534bb: fsub dword ptr [ebx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x30u)));
/* 8534be: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8534c1: fsub dword ptr [ebx + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x2cu)));
/* 8534c4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8534c7: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8534ca: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8534cd: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8534d0: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 8534d3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8534d6: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8534dcu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8534dc: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8534df: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8534e2: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8534e5: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8534e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8534ea: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8534ed: jnp 0x85359a */
  if (!pf) goto L_85359a;
L_8534f3: /* 8534f3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8534f6: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 8534f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_853500: /* 853500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853502: je 0x85350d */
  if (zf) goto L_85350d;
L_853504: /* 853504: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 853506: cmp dword ptr [ecx + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853509: jne 0x853534 */
  if (!zf) goto L_853534;
L_85350b: /* 85350b: mov edi, ecx */
  edi = ecx;
L_85350d: /* 85350d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85350f: jne 0x853563 */
  if (!zf) goto L_853563;
L_853511: /* 853511: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853513: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 853515: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85351a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853520u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853522: je 0x853539 */
  if (zf) goto L_853539;
L_853524: /* 853524: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 853527: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 853528: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853529: mov ecx, eax */
  ecx = eax;
/* 85352b: call 0x6c68ac */
  esp -= 4; W32(esp, 0x853530u); SPILL(); f_6c68ac(); if (g_unwind) return; RELOAD();
/* 853530: mov edi, eax */
  edi = eax;
/* 853532: jmp 0x85353b */
  goto L_85353b;
L_853534: /* 853534: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 853537: jmp 0x853500 */
  goto L_853500;
L_853539: /* 853539: xor edi, edi */
  edi = 0;
L_85353b: /* 85353b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85353d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85353f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853544: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85354au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85354a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85354c: je 0x85355b */
  if (zf) goto L_85355b;
L_85354e: /* 85354e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 853551: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 853554: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 853556: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853559: jmp 0x85355d */
  goto L_85355d;
L_85355b: /* 85355b: xor eax, eax */
  eax = 0;
L_85355d: /* 85355d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 853560: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
L_853563: /* 853563: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 853566: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 853568: mov esi, dword ptr [edx + 0x58] */
  esi = R32((uint32_t)(edx + 0x58u));
/* 85356b: mov eax, ecx */
  eax = ecx;
/* 85356d: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 853570: mov edx, dword ptr [eax + esi + 0x64] */
  edx = R32((uint32_t)(eax + esi + 0x64u));
/* 853574: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 853576: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853579: je 0x85359a */
  if (zf) goto L_85359a;
L_85357b: /* 85357b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 85357e: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 853581: mov dword ptr [esi + edx*4], ecx */
  W32((uint32_t)(esi + edx*4), ecx);
/* 853584: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 853587: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 85358a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85358b: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 85358e: movzx eax, byte ptr [eax + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x56u)));
/* 853592: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 853595: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 853597: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
L_85359a: /* 85359a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85359d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8535a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8535a1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8535a4: jmp 0x853410 */
  goto L_853410;
L_8535a9: /* 8535a9: xor edi, edi */
  edi = 0;
/* 8535ab: jmp 0x8535b0 */
  goto L_8535b0;
L_8535b0: /* 8535b0: cmp edi, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8535b3: jge 0x853649 */
  if ((sf == of)) goto L_853649;
L_8535b9: /* 8535b9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8535bc: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 8535bf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8535c2: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8535c5: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 8535c8: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8535cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8535cd: add ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8535d0: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x8535d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8535d6: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 8535dc: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 8535e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8535e4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8535e7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8535ea: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8535efu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8535ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8535f1: jne 0x85363d */
  if (!zf) goto L_85363d;
L_8535f3: /* 8535f3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8535f5: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 8535f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8535fa: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 8535fd: je 0x853632 */
  if (zf) goto L_853632;
L_8535ff: /* 8535ff: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 853602: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 853606: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x85360cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 85360c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 85360f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 853613: call 0x6cb555 */
  esp -= 4; W32(esp, 0x853618u); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 853618: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 85361b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85361f: call 0x6cae43 */
  esp -= 4; W32(esp, 0x853624u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 853624: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 85362a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 85362c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85362e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85362f: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x853632u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_853632: /* 853632: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 853634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 853635: mov ecx, ebx */
  ecx = ebx;
/* 853637: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x85363cu); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 85363c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_85363d: /* 85363d: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 853640: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853643: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 853644: jmp 0x8535b0 */
  goto L_8535b0;
L_853649: /* 853649: xor eax, eax */
  eax = 0;
L_85364b: /* 85364b: cmp eax, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85364e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 853651: jge 0x853837 */
  if ((sf == of)) goto L_853837;
L_853657: /* 853657: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 85365a: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 85365d: test dword ptr [edx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853664: je 0x853675 */
  if (zf) goto L_853675;
L_853666: /* 853666: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 853668: test byte ptr [ecx + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85366f: je 0x853831 */
  if (zf) goto L_853831;
L_853675: /* 853675: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 85367b: xor edi, edi */
  edi = 0;
/* 85367d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_853680: /* 853680: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853682: je 0x8536c2 */
  if (zf) goto L_8536c2;
L_853684: /* 853684: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 853686: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 853688: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 85368b: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85368e: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_853690: /* 853690: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 853694: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853697: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_853699: /* 853699: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85369d: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536a0: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536a2: /* 8536a2: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8536a5: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536a8: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536aa: /* 8536aa: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8536ad: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536b0: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536b2: /* 8536b2: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8536b9: jge 0x8536bd */
  if ((sf == of)) goto L_8536bd;
L_8536bb: /* 8536bb: mov edi, eax */
  edi = eax;
L_8536bd: /* 8536bd: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8536c0: jmp 0x853680 */
  goto L_853680;
L_8536c2: /* 8536c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8536c4: jne 0x853768 */
  if (!zf) goto L_853768;
L_8536ca: /* 8536ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8536cc: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8536ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8536d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8536d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8536d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8536db: je 0x853737 */
  if (zf) goto L_853737;
L_8536dd: /* 8536dd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8536df: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8536e3: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8536e7: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8536ea: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 8536ed: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 8536f0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8536f3: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8536f6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8536f9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 8536fc: xor ecx, ecx */
  ecx = 0;
/* 8536fe: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853700: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 853707: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85370d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 853714: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 853717: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 85371a: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 85371d: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 853720: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 853723: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 85372a: je 0x853733 */
  if (zf) goto L_853733;
L_85372c: /* 85372c: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_853733: /* 853733: mov edi, eax */
  edi = eax;
/* 853735: jmp 0x853739 */
  goto L_853739;
L_853737: /* 853737: xor edi, edi */
  edi = 0;
L_853739: /* 853739: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85373b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85373d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853742: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853748u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85374a: je 0x85375e */
  if (zf) goto L_85375e;
L_85374c: /* 85374c: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 853752: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 853754: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853757: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 85375c: jmp 0x853768 */
  goto L_853768;
L_85375e: /* 85375e: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_853768: /* 853768: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85376a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 85376c: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853771: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853777u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853779: je 0x8537a4 */
  if (zf) goto L_8537a4;
L_85377b: /* 85377b: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 853781: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 853784: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 853787: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85378a: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 85378d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853790: mov dword ptr [eax], 0xa16b50 */
  W32((uint32_t)(eax), 0xa16b50u);
/* 853796: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 853799: lea edx, [esi + esi*2 - 6] */
  edx = (uint32_t)(esi + esi*2 + 0xfffffffau);
/* 85379d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8537a0: mov esi, eax */
  esi = eax;
/* 8537a2: jmp 0x8537a6 */
  goto L_8537a6;
L_8537a4: /* 8537a4: xor esi, esi */
  esi = 0;
L_8537a6: /* 8537a6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8537a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8537ab: je 0x8537b7 */
  if (zf) goto L_8537b7;
L_8537ad: /* 8537ad: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8537b0: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8537b2: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8537b5: jne 0x8537f7 */
  if (!zf) goto L_8537f7;
L_8537b7: /* 8537b7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8537b9: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8537be: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8537c3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8537c9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8537c9: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8537d3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8537d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8537d8: je 0x8537ec */
  if (zf) goto L_8537ec;
L_8537da: /* 8537da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8537dc: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8537df: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8537e1: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8537e4: mov dword ptr [ecx + 0x84], eax */
  W32((uint32_t)(ecx + 0x84u), eax);
/* 8537ea: jmp 0x8537f4 */
  goto L_8537f4;
L_8537ec: /* 8537ec: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8537f2: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_8537f4: /* 8537f4: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_8537f7: /* 8537f7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8537fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8537fc: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8537ff: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 853801: mov dword ptr [eax + edx*4 + 4], esi */
  W32((uint32_t)(eax + edx*4 + 0x4u), esi);
/* 853805: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 853808: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 85380b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85380e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85380f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 853812: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 853815: imul eax, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  eax = (uint32_t)r;
  }
/* 853819: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85381b: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 85381e: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 853821: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 853824: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 853827: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 853829: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85382b: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 85382e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_853831: /* 853831: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853832: jmp 0x85364b */
  goto L_85364b;
L_853837: /* 853837: xor eax, eax */
  eax = 0;
L_853839: /* 853839: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85383c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85383f: jge 0x853cdd */
  if ((sf == of)) goto L_853cdd;
L_853845: /* 853845: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 853848: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 85384b: test dword ptr [edx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853852: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 853855: je 0x853864 */
  if (zf) goto L_853864;
L_853857: /* 853857: test byte ptr [eax + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85385e: je 0x853ca1 */
  if (zf) goto L_853ca1;
L_853864: /* 853864: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 85386a: mov dword ptr [ebp + 8], 0x10 */
  W32((uint32_t)(ebp + 0x8u), 0x10u);
/* 853871: mov ebx, 0xc */
  ebx = 0xcu;
/* 853876: lea esi, [ebp - 0x178] */
  esi = (uint32_t)(ebp + 0xfffffe88u);
/* 85387c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_853880: /* 853880: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 853883: js 0x85388d */
  if (sf) goto L_85388d;
L_853885: /* 853885: mov ecx, esi */
  ecx = esi;
/* 853887: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x853889u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 853889: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85388b: jmp 0x853880 */
  goto L_853880;
L_85388d: /* 85388d: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 853893: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x853899u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 853899: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 85389f: mov dword ptr [ebp + 8], 3 */
  W32((uint32_t)(ebp + 0x8u), 0x3u);
/* 8538a6: mov ebx, 0xc */
  ebx = 0xcu;
/* 8538ab: lea esi, [ebp - 0x8c] */
  esi = (uint32_t)(ebp + 0xffffff74u);
L_8538b1: /* 8538b1: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8538b4: js 0x8538be */
  if (sf) goto L_8538be;
L_8538b6: /* 8538b6: mov ecx, esi */
  ecx = esi;
/* 8538b8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8538bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8538ba: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8538bc: jmp 0x8538b1 */
  goto L_8538b1;
L_8538be: /* 8538be: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 8538c4: call 0x6c5aec */
  esp -= 4; W32(esp, 0x8538c9u); SPILL(); f_6c5aec(); if (g_unwind) return; RELOAD();
/* 8538c9: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8538cc: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8538cf: xor eax, eax */
  eax = 0;
L_8538d1: /* 8538d1: movzx edx, byte ptr [esi + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 8538d5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8538d7: jge 0x85390f */
  if ((sf == of)) goto L_85390f;
L_8538d9: /* 8538d9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8538db: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8538de: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8538e1: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 8538e7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8538e9: mov edx, dword ptr [ebx + edx*8] */
  edx = R32((uint32_t)(ebx + edx*8));
/* 8538ec: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8538ef: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8538f2: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8538f4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8538f7: lea ecx, [ebp + ecx*4 - 0x178] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffe88u);
/* 8538fe: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 853900: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 853903: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 853906: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 853909: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85390c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85390d: jmp 0x8538d1 */
  goto L_8538d1;
L_85390f: /* 85390f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 853912: mov eax, esi */
  eax = esi;
/* 853914: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 853916: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 853919: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85391c: mov dword ptr [ebp - 0x19c], ecx */
  W32((uint32_t)(ebp + 0xfffffe64u), ecx);
/* 853922: movzx ecx, byte ptr [esi + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 853926: mov dword ptr [ebp - 0x198], edx */
  W32((uint32_t)(ebp + 0xfffffe68u), edx);
/* 85392c: mov dword ptr [ebp - 0x194], eax */
  W32((uint32_t)(ebp + 0xfffffe6cu), eax);
/* 853932: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 853938: xor esi, esi */
  esi = 0;
/* 85393a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_853940: /* 853940: cmp esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853943: jge 0x8539a5 */
  if ((sf == of)) goto L_8539a5;
L_853945: /* 853945: mov edx, esi */
  edx = esi;
/* 853947: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 85394a: lea eax, [edx + edi + 0xbc] */
  eax = (uint32_t)(edx + edi + 0xbcu);
/* 853951: mov ecx, eax */
  ecx = eax;
/* 853953: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 853955: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 853958: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85395b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85395e: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 853961: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 853964: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 853967: mov eax, edx */
  eax = edx;
/* 853969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85396a: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 85396d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85396e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 853971: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 853974: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85397au); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85397a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85397c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85397d: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 853980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853981: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 853987: call 0x6cb096 */
  esp -= 4; W32(esp, 0x85398cu); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 85398c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85398e: jne 0x8539a2 */
  if (!zf) goto L_8539a2;
L_853990: /* 853990: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853993: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 853999: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85399c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85399d: jmp 0x853839 */
  goto L_853839;
L_8539a2: /* 8539a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8539a3: jmp 0x853940 */
  goto L_853940;
L_8539a5: /* 8539a5: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8539ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8539ad: jle 0x853ca1 */
  if ((zf || sf != of)) goto L_853ca1;
L_8539b3: /* 8539b3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8539b6: mov cl, byte ptr [eax + 0x20] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x20u))) & 0xffu);
/* 8539b9: xor edi, edi */
  edi = 0;
/* 8539bb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8539bd: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8539c0: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8539c3: je 0x853a21 */
  if (zf) goto L_853a21;
L_8539c5: /* 8539c5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8539c8: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 8539cb: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_8539ce: /* 8539ce: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_8539d1: /* 8539d1: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 8539d7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8539da: xor esi, esi */
  esi = 0;
/* 8539dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8539e0: /* 8539e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8539e2: je 0x853ada */
  if (zf) goto L_853ada;
L_8539e8: /* 8539e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8539ea: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 8539ed: cmp ebx, dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8539f0: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_8539f2: /* 8539f2: movzx ebx, byte ptr [edi + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x21u)));
/* 8539f6: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8539f9: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_8539fb: /* 8539fb: movzx ebx, byte ptr [edi + 0x20] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x20u)));
/* 8539ff: cmp dword ptr [eax + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a02: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a04: /* 853a04: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 853a07: cmp dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a0a: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a0c: /* 853a0c: cmp dword ptr [eax + 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a0f: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a11: /* 853a11: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853a18: jge 0x853a1c */
  if ((sf == of)) goto L_853a1c;
L_853a1a: /* 853a1a: mov esi, eax */
  esi = eax;
L_853a1c: /* 853a1c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 853a1f: jmp 0x8539e0 */
  goto L_8539e0;
L_853a21: /* 853a21: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853a24: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a27: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a29: je 0x853a3f */
  if (zf) goto L_853a3f;
L_853a2b: /* 853a2b: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 853a30: mov ecx, esi */
  ecx = esi;
/* 853a32: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a38u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a3a: mov dword ptr [ebp + 0x1c], esi */
  W32((uint32_t)(ebp + 0x1cu), esi);
/* 853a3d: jne 0x853a42 */
  if (!zf) goto L_853a42;
L_853a3f: /* 853a3f: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
L_853a42: /* 853a42: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a45: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a47: je 0x853a5e */
  if (zf) goto L_853a5e;
L_853a49: /* 853a49: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 853a4e: mov ecx, esi */
  ecx = esi;
/* 853a50: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a56u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a56: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a58: je 0x853a5e */
  if (zf) goto L_853a5e;
L_853a5a: /* 853a5a: mov edi, esi */
  edi = esi;
/* 853a5c: jmp 0x853a60 */
  goto L_853a60;
L_853a5e: /* 853a5e: xor edi, edi */
  edi = 0;
L_853a60: /* 853a60: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a63: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a65: je 0x853a78 */
  if (zf) goto L_853a78;
L_853a67: /* 853a67: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 853a6c: mov ecx, esi */
  ecx = esi;
/* 853a6e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a74u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a76: jne 0x853a7a */
  if (!zf) goto L_853a7a;
L_853a78: /* 853a78: xor esi, esi */
  esi = 0;
L_853a7a: /* 853a7a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a7c: je 0x853a8f */
  if (zf) goto L_853a8f;
L_853a7e: /* 853a7e: test byte ptr [edi + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 853a82: je 0x853a8f */
  if (zf) goto L_853a8f;
L_853a84: /* 853a84: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 853a87: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 853a8a: jmp 0x8539ce */
  goto L_8539ce;
L_853a8f: /* 853a8f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 853a92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a94: je 0x853ab1 */
  if (zf) goto L_853ab1;
L_853a96: /* 853a96: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 853a99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a9b: je 0x853aa3 */
  if (zf) goto L_853aa3;
L_853a9d: /* 853a9d: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 853aa0: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_853aa3: /* 853aa3: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 853aa6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 853aa9: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853aac: jmp 0x8539d1 */
  goto L_8539d1;
L_853ab1: /* 853ab1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853ab3: je 0x8539ce */
  if (zf) goto L_8539ce;
L_853ab9: /* 853ab9: cmp byte ptr [esi + 0x3c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 853abd: jne 0x8539ce */
  if (!zf) goto L_8539ce;
L_853ac3: /* 853ac3: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 853ac6: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 853ac9: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 853acc: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 853acf: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 853ad2: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853ad5: jmp 0x8539d1 */
  goto L_8539d1;
L_853ada: /* 853ada: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853adc: jne 0x853b6d */
  if (!zf) goto L_853b6d;
L_853ae2: /* 853ae2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853ae4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 853ae6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853aeb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853af1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853af1: xor ebx, ebx */
  ebx = 0;
/* 853af3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853af5: je 0x853b3e */
  if (zf) goto L_853b3e;
L_853af7: /* 853af7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 853afa: movzx ecx, byte ptr [esi + 0x21] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x21u)));
/* 853afe: movzx edx, byte ptr [esi + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x20u)));
/* 853b02: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* 853b05: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 853b08: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853b0a: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 853b0d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 853b10: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 853b13: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 853b15: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 853b18: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 853b1b: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 853b1e: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 853b21: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 853b24: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 853b27: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 853b2a: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 853b31: je 0x853b3a */
  if (zf) goto L_853b3a;
L_853b33: /* 853b33: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_853b3a: /* 853b3a: mov esi, eax */
  esi = eax;
/* 853b3c: jmp 0x853b40 */
  goto L_853b40;
L_853b3e: /* 853b3e: xor esi, esi */
  esi = 0;
L_853b40: /* 853b40: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b42: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b44: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853b49: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853b4fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853b4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853b51: je 0x853b65 */
  if (zf) goto L_853b65;
L_853b53: /* 853b53: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 853b59: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 853b5b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853b5e: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 853b63: jmp 0x853b6f */
  goto L_853b6f;
L_853b65: /* 853b65: mov dword ptr [0xcd8ad8], ebx */
  W32((uint32_t)(0xcd8ad8u), ebx);
/* 853b6b: jmp 0x853b6f */
  goto L_853b6f;
L_853b6d: /* 853b6d: xor ebx, ebx */
  ebx = 0;
L_853b6f: /* 853b6f: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 853b75: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 853b78: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b7a: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 853b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853b7e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853b83: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853b89u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853b89: mov edx, eax */
  edx = eax;
/* 853b8b: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853b8e: xor eax, eax */
  eax = 0;
L_853b90: /* 853b90: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 853b96: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853b98: jge 0x853bc1 */
  if ((sf == of)) goto L_853bc1;
L_853b9a: /* 853b9a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 853b9c: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 853b9f: lea ecx, [ebp + ecx*4 - 0x184] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffe7cu);
/* 853ba6: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 853ba8: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 853bab: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 853bae: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 853bb0: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 853bb3: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 853bb6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 853bb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853bba: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 853bbd: xor ebx, ebx */
  ebx = 0;
/* 853bbf: jmp 0x853b90 */
  goto L_853b90;
L_853bc1: /* 853bc1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853bc3: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 853bc5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853bca: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853bd0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853bd0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853bd2: je 0x853c25 */
  if (zf) goto L_853c25;
L_853bd4: /* 853bd4: mov ebx, dword ptr [ebp - 0x194] */
  ebx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 853bda: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 853be0: mov edx, dword ptr [ebp - 0x19c] */
  edx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 853be6: mov edi, dword ptr [ebp - 0x198] */
  edi = R32((uint32_t)(ebp + 0xfffffe68u));
/* 853bec: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 853bef: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 853bf2: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 853bf5: lea ebx, [eax + 0x18] */
  ebx = (uint32_t)(eax + 0x18u);
/* 853bf8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 853bfa: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 853bfd: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 853c00: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 853c03: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 853c06: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 853c09: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 853c0c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 853c0f: lea ecx, [ecx + ecx*2 - 6] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffau);
/* 853c13: mov dword ptr [eax], 0xa16b38 */
  W32((uint32_t)(eax), 0xa16b38u);
/* 853c19: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 853c1c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853c1f: mov edi, eax */
  edi = eax;
/* 853c21: xor ebx, ebx */
  ebx = 0;
/* 853c23: jmp 0x853c27 */
  goto L_853c27;
L_853c25: /* 853c25: xor edi, edi */
  edi = 0;
L_853c27: /* 853c27: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 853c2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c2c: je 0x853c38 */
  if (zf) goto L_853c38;
L_853c2e: /* 853c2e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 853c31: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 853c33: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c36: jne 0x853c70 */
  if (!zf) goto L_853c70;
L_853c38: /* 853c38: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853c3a: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 853c3f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853c44: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853c4au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853c4a: mov dword ptr [eax + 0x84], ebx */
  W32((uint32_t)(eax + 0x84u), ebx);
/* 853c50: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 853c53: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c55: je 0x853c69 */
  if (zf) goto L_853c69;
L_853c57: /* 853c57: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 853c59: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 853c5c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 853c5e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 853c61: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 853c67: jmp 0x853c6d */
  goto L_853c6d;
L_853c69: /* 853c69: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 853c6b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_853c6d: /* 853c6d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_853c70: /* 853c70: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 853c73: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 853c75: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 853c78: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 853c7a: mov dword ptr [eax + ecx*4 + 4], edi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), edi);
/* 853c7e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 853c81: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 853c84: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 853c87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853c88: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 853c8b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 853c8e: imul edx, dword ptr [esi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 853c92: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 853c94: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 853c97: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 853c9a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 853c9c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 853c9e: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
L_853ca1: /* 853ca1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 853ca4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853ca7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853ca8: jmp 0x853839 */
  goto L_853839;
L_853cdd: /* 853cdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 853ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 853ce1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 853ce2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 853ce9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 853cea: mov esp, ebp */
  esp = ebp;
/* 853cec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 853ced: ret 0x18 */
  esp += 28; SPILL(); return;
}
