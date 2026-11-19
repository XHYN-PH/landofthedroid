#include "recomp.h"
#include "rec_mod.h"

void f_881590(void) {
  LOAD_REGS();
L_881590: /* 881590: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881594: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881595: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881596: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 88159a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88159d: xor ebp, ebp */
  ebp = 0;
/* 88159f: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 8815a3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8815a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8815a7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8815aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8815ab: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 8815af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8815b0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8815b5: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8815b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8815bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8815bd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8815c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8815c0: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 8815c6: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8815ca: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8815cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8815cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8815d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8815d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8815d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8815d9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8815dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8815de: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8815e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8815e4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8815e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8815e7: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 8815ed: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8815ef: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8815f1: je 0x881600 */
  if (zf) goto L_881600;
L_8815f3: /* 8815f3: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 8815f8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8815fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8815fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8815fd: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x881600u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881600: /* 881600: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881606: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 881608: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88160a: mov ebx, eax */
  ebx = eax;
/* 88160c: jne 0x881612 */
  if (!zf) goto L_881612;
L_88160e: /* 88160e: lea ebx, [esp + 0x14] */
  ebx = (uint32_t)(esp + 0x14u);
L_881612: /* 881612: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881613: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 881617: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88161du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88161d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881620: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881623: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881626: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881627: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88162a: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 88162e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88162f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881635: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881638u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881638: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88163b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88163c: mov eax, edx */
  eax = edx;
/* 88163e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881641: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881644: jne 0x88165b */
  if (!zf) goto L_88165b;
L_881646: /* 881646: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881649: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88164a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88164b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88164e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 881654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881655: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x88165bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88165b: /* 88165b: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88165f: jne 0x881669 */
  if (!zf) goto L_881669;
L_881661: /* 881661: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_881669: /* 881669: mov ecx, esi */
  ecx = esi;
/* 88166b: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x881671u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 881671: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 881675: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881678: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 88167c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881680: /* 881680: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 881684: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 88168a: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 881690: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881693: jge 0x881763 */
  if ((sf == of)) goto L_881763;
L_881699: /* 881699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8816a0: /* 8816a0: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8816a3: jne 0x88170b */
  if (!zf) goto L_88170b;
L_8816a5: /* 8816a5: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8816a8: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 8816ab: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8816ac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8816ae: je 0x8816f7 */
  if (zf) goto L_8816f7;
L_8816b0: /* 8816b0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8816b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8816b5: mov ecx, edi */
  ecx = edi;
/* 8816b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8816bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8816bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8816bf: je 0x8816f7 */
  if (zf) goto L_8816f7;
L_8816c1: /* 8816c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8816c3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8816c7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8816cdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8816cd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8816d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8816d2: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8816d6: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8816dcu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8816dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8816de: jne 0x8816f5 */
  if (!zf) goto L_8816f5;
L_8816e0: /* 8816e0: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 8816e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8816e5: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 8816eb: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8816f1u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8816f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8816f3: je 0x8816f7 */
  if (zf) goto L_8816f7;
L_8816f5: /* 8816f5: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
L_8816f7: /* 8816f7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8816fb: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 881701: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881704: jl 0x8816a0 */
  if ((sf != of)) goto L_8816a0;
L_881706: /* 881706: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881709: je 0x881763 */
  if (zf) goto L_881763;
L_88170b: /* 88170b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88170e: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881710: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881712: je 0x88173c */
  if (zf) goto L_88173c;
L_881714: /* 881714: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881716: je 0x88173c */
  if (zf) goto L_88173c;
L_881718: /* 881718: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88171b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88171e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881721: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881722: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881725: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 881729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88172a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88172f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881730: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881733: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881736: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881738: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88173a: jne 0x881714 */
  if (!zf) goto L_881714;
L_88173c: /* 88173c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88173f: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881741: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 881742: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881745: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 881748: jne 0x881751 */
  if (!zf) goto L_881751;
L_88174a: /* 88174a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88174e: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_881751: /* 881751: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881753: jne 0x881680 */
  if (!zf) goto L_881680;
L_881759: /* 881759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88175a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88175b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88175c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88175d: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881760: ret 8 */
  esp += 12; SPILL(); return;
L_881763: /* 881763: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 881766: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 881769: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 88176d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88176e: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 881772: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881777: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881778: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88177b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881800(void) {
  LOAD_REGS();
L_881800: /* 881800: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881803: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881804: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881805: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881806: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 88180a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88180d: xor ebp, ebp */
  ebp = 0;
/* 88180f: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 881813: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881816: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 881818: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88181b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 88181f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881820: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881825: mov edi, ecx */
  edi = ecx;
/* 881827: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88182a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88182b: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 88182f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881832u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881832: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881838: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 88183c: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 88183e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881841: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881844: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881847: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881848: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88184b: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88184f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881850: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881855: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881856: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881859u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881859: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 88185f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 881861: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881863: je 0x881872 */
  if (zf) goto L_881872;
L_881865: /* 881865: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 88186a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 88186c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88186e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88186f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x881872u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881872: /* 881872: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881878: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88187a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88187c: mov ebx, eax */
  ebx = eax;
/* 88187e: jne 0x881884 */
  if (!zf) goto L_881884;
L_881880: /* 881880: lea ebx, [esp + 0x14] */
  ebx = (uint32_t)(esp + 0x14u);
L_881884: /* 881884: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881885: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 881889: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88188fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88188f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881892: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881895: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881898: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881899: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88189c: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8818a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8818a1: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8818a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8818a7: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8818aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8818aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8818ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8818ae: mov eax, edx */
  eax = edx;
/* 8818b0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8818b3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8818b6: jne 0x8818cd */
  if (!zf) goto L_8818cd;
L_8818b8: /* 8818b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8818bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8818bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8818bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8818c0: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8818c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8818c7: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8818cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8818cd: /* 8818cd: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8818d1: jne 0x8818db */
  if (!zf) goto L_8818db;
L_8818d3: /* 8818d3: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_8818db: /* 8818db: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 8818e1: mov ebp, dword ptr [eax + 0x104] */
  ebp = R32((uint32_t)(eax + 0x104u));
/* 8818e7: mov ecx, esi */
  ecx = esi;
/* 8818e9: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x8818efu); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 8818ef: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8818f2: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8818f6: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 8818fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_881900: /* 881900: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 881906: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 88190c: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88190f: jge 0x8819da */
  if ((sf == of)) goto L_8819da;
L_881915: /* 881915: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881918: jne 0x881980 */
  if (!zf) goto L_881980;
L_88191a: /* 88191a: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 88191d: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 881920: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881921: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881923: je 0x88196c */
  if (zf) goto L_88196c;
L_881925: /* 881925: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 881929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88192a: mov ecx, edi */
  ecx = edi;
/* 88192c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881932u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881932: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881934: je 0x88196c */
  if (zf) goto L_88196c;
L_881936: /* 881936: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881938: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 88193c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x881942u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 881942: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 881946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881947: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 88194b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x881951u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 881951: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881953: jne 0x88196a */
  if (!zf) goto L_88196a;
L_881955: /* 881955: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 881959: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88195a: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 881960: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x881966u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 881966: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881968: je 0x88196c */
  if (zf) goto L_88196c;
L_88196a: /* 88196a: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
L_88196c: /* 88196c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 881970: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 881976: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881979: jl 0x881915 */
  if ((sf != of)) goto L_881915;
L_88197b: /* 88197b: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88197e: je 0x8819da */
  if (zf) goto L_8819da;
L_881980: /* 881980: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881983: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881985: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881987: je 0x8819b8 */
  if (zf) goto L_8819b8;
L_881989: /* 881989: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881990: /* 881990: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881992: je 0x8819b8 */
  if (zf) goto L_8819b8;
L_881994: /* 881994: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881997: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88199a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88199d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88199e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8819a1: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 8819a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8819a6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8819ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8819ac: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8819afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8819af: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8819b2: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8819b4: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8819b6: jne 0x881990 */
  if (!zf) goto L_881990;
L_8819b8: /* 8819b8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8819bb: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8819bd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8819be: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8819c1: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 8819c4: jne 0x8819cd */
  if (!zf) goto L_8819cd;
L_8819c6: /* 8819c6: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8819ca: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_8819cd: /* 8819cd: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8819cf: je 0x8819eb */
  if (zf) goto L_8819eb;
L_8819d1: /* 8819d1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8819d5: jmp 0x881900 */
  goto L_881900;
L_8819da: /* 8819da: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8819dd: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 8819e0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8819e4: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 8819e8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_8819eb: /* 8819eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8819ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8819ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8819ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8819ef: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8819f2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881a80(void) {
  LOAD_REGS();
L_881a80: /* 881a80: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881a83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881a84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881a85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881a86: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 881a8a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881a8d: xor ebp, ebp */
  ebp = 0;
/* 881a8f: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 881a93: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881a96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881a97: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881a9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 881a9b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 881a9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881aa0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881aa5: mov ebx, ecx */
  ebx = ecx;
/* 881aa7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881aaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881aab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881aaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881aae: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881ab4: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 881ab8: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 881aba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881abd: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881ac0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881ac3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881ac4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881ac7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 881acb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881acc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881ad2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881ad5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881ad5: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 881adb: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 881add: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881adf: je 0x881aee */
  if (zf) goto L_881aee;
L_881ae1: /* 881ae1: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 881ae6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 881ae8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 881aea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881aeb: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x881aeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881aee: /* 881aee: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881af4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 881af6: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881af8: je 0x881b00 */
  if (zf) goto L_881b00;
L_881afa: /* 881afa: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 881afe: jmp 0x881b08 */
  goto L_881b08;
L_881b00: /* 881b00: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 881b04: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_881b08: /* 881b08: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881b0b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 881b0c: mov eax, edx */
  eax = edx;
/* 881b0e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881b11: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881b14: jne 0x881b2a */
  if (!zf) goto L_881b2a;
L_881b16: /* 881b16: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881b19: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881b1a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881b1b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881b1e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881b24: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x881b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881b2a: /* 881b2a: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881b2e: jne 0x881b38 */
  if (!zf) goto L_881b38;
L_881b30: /* 881b30: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_881b38: /* 881b38: mov ecx, esi */
  ecx = esi;
/* 881b3a: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x881b40u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 881b40: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881b43: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 881b47: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 881b4b: jmp 0x881b50 */
  goto L_881b50;
L_881b50: /* 881b50: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881b54: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881b5a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881b60: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881b63: jge 0x881c16 */
  if ((sf == of)) goto L_881c16;
L_881b69: /* 881b69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881b70: /* 881b70: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881b74: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881b77: jne 0x881bbe */
  if (!zf) goto L_881bbe;
L_881b79: /* 881b79: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 881b7c: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 881b7f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881b80: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881b82: je 0x881baa */
  if (zf) goto L_881baa;
L_881b84: /* 881b84: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 881b88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881b89: mov ecx, edi */
  ecx = edi;
/* 881b8b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881b91u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881b93: je 0x881baa */
  if (zf) goto L_881baa;
L_881b95: /* 881b95: mov eax, edi */
  eax = edi;
L_881b97: /* 881b97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881b99: je 0x881ba4 */
  if (zf) goto L_881ba4;
L_881b9b: /* 881b9b: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 881b9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881ba0: jne 0x881b97 */
  if (!zf) goto L_881b97;
L_881ba2: /* 881ba2: jmp 0x881baa */
  goto L_881baa;
L_881ba4: /* 881ba4: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881ba8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_881baa: /* 881baa: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881bb0: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881bb3: jl 0x881b70 */
  if ((sf != of)) goto L_881b70;
L_881bb5: /* 881bb5: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881bb9: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881bbc: je 0x881c16 */
  if (zf) goto L_881c16;
L_881bbe: /* 881bbe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881bc1: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 881bc3: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bc5: je 0x881bef */
  if (zf) goto L_881bef;
L_881bc7: /* 881bc7: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bc9: je 0x881bef */
  if (zf) goto L_881bef;
L_881bcb: /* 881bcb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881bce: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881bd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881bd2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 881bd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881bd7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881bda: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881bdd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881be2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881be3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881be6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881be6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881be9: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881beb: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bed: jne 0x881bc7 */
  if (!zf) goto L_881bc7;
L_881bef: /* 881bef: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881bf2: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881bf4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 881bf5: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bf8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 881bfb: jne 0x881c04 */
  if (!zf) goto L_881c04;
L_881bfd: /* 881bfd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 881c01: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_881c04: /* 881c04: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881c06: jne 0x881b50 */
  if (!zf) goto L_881b50;
L_881c0c: /* 881c0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881c0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881c0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881c10: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881c13: ret 8 */
  esp += 12; SPILL(); return;
L_881c16: /* 881c16: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 881c19: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 881c1c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 881c20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881c21: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 881c25: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881c28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881c29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881c2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881c2b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881c2e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881b4d(void) {
  LOAD_REGS();
L_881b4d: /* 881b4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_881b50: /* 881b50: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881b54: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881b5a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881b60: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881b63: jge 0x881c16 */
  if ((sf == of)) goto L_881c16;
L_881b69: /* 881b69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881b70: /* 881b70: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881b74: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881b77: jne 0x881bbe */
  if (!zf) goto L_881bbe;
L_881b79: /* 881b79: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 881b7c: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 881b7f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881b80: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881b82: je 0x881baa */
  if (zf) goto L_881baa;
L_881b84: /* 881b84: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 881b88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881b89: mov ecx, edi */
  ecx = edi;
/* 881b8b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881b91u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881b93: je 0x881baa */
  if (zf) goto L_881baa;
L_881b95: /* 881b95: mov eax, edi */
  eax = edi;
L_881b97: /* 881b97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881b99: je 0x881ba4 */
  if (zf) goto L_881ba4;
L_881b9b: /* 881b9b: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 881b9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881ba0: jne 0x881b97 */
  if (!zf) goto L_881b97;
L_881ba2: /* 881ba2: jmp 0x881baa */
  goto L_881baa;
L_881ba4: /* 881ba4: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881ba8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_881baa: /* 881baa: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881bb0: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881bb3: jl 0x881b70 */
  if ((sf != of)) goto L_881b70;
L_881bb5: /* 881bb5: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881bb9: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881bbc: je 0x881c16 */
  if (zf) goto L_881c16;
L_881bbe: /* 881bbe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881bc1: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 881bc3: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bc5: je 0x881bef */
  if (zf) goto L_881bef;
L_881bc7: /* 881bc7: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bc9: je 0x881bef */
  if (zf) goto L_881bef;
L_881bcb: /* 881bcb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881bce: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881bd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881bd2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 881bd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881bd7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881bda: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881bdd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881be2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881be3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881be6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881be6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881be9: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881beb: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bed: jne 0x881bc7 */
  if (!zf) goto L_881bc7;
L_881bef: /* 881bef: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881bf2: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881bf4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 881bf5: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881bf8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 881bfb: jne 0x881c04 */
  if (!zf) goto L_881c04;
L_881bfd: /* 881bfd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 881c01: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_881c04: /* 881c04: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881c06: jne 0x881b50 */
  if (!zf) goto L_881b50;
L_881c0c: /* 881c0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881c0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881c0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881c10: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881c13: ret 8 */
  esp += 12; SPILL(); return;
L_881c16: /* 881c16: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 881c19: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 881c1c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 881c20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881c21: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 881c25: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881c28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881c29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881c2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881c2b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881c2e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881cb0(void) {
  LOAD_REGS();
L_881cb0: /* 881cb0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881cb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881cb4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881cb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881cb6: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 881cba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881cbd: xor ebp, ebp */
  ebp = 0;
/* 881cbf: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 881cc3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881cc6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881cc7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881cca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 881ccb: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 881ccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881cd0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881cd5: mov ebx, ecx */
  ebx = ecx;
/* 881cd7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881cda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881cdb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881cdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881cde: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881ce4: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 881ce8: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 881cea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881ced: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881cf0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881cf3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881cf4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881cf7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 881cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881cfc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881d01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881d02: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881d05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881d05: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 881d0b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 881d0d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881d0f: je 0x881d1e */
  if (zf) goto L_881d1e;
L_881d11: /* 881d11: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 881d16: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 881d18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 881d1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881d1b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x881d1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881d1e: /* 881d1e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881d24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 881d26: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881d28: je 0x881d30 */
  if (zf) goto L_881d30;
L_881d2a: /* 881d2a: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 881d2e: jmp 0x881d38 */
  goto L_881d38;
L_881d30: /* 881d30: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 881d34: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_881d38: /* 881d38: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881d3b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 881d3c: mov eax, edx */
  eax = edx;
/* 881d3e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881d41: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881d44: jne 0x881d5a */
  if (!zf) goto L_881d5a;
L_881d46: /* 881d46: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881d49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881d4a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881d4b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881d4e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881d53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881d54: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x881d5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881d5a: /* 881d5a: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881d5e: jne 0x881d68 */
  if (!zf) goto L_881d68;
L_881d60: /* 881d60: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_881d68: /* 881d68: mov ecx, esi */
  ecx = esi;
/* 881d6a: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x881d70u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 881d70: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881d73: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 881d77: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 881d7b: jmp 0x881d80 */
  goto L_881d80;
L_881d80: /* 881d80: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881d84: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881d8a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881d90: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881d93: jge 0x881e3f */
  if ((sf == of)) goto L_881e3f;
L_881d99: /* 881d99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881da0: /* 881da0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881da4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881da7: jne 0x881de4 */
  if (!zf) goto L_881de4;
L_881da9: /* 881da9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 881dac: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 881daf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881db0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881db2: je 0x881dd0 */
  if (zf) goto L_881dd0;
L_881db4: /* 881db4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 881db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881db9: mov ecx, edi */
  ecx = edi;
/* 881dbb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881dc1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881dc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881dc3: je 0x881dd0 */
  if (zf) goto L_881dd0;
L_881dc5: /* 881dc5: cmp dword ptr [edi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881dc8: jne 0x881dd0 */
  if (!zf) goto L_881dd0;
L_881dca: /* 881dca: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881dce: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_881dd0: /* 881dd0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881dd6: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881dd9: jl 0x881da0 */
  if ((sf != of)) goto L_881da0;
L_881ddb: /* 881ddb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881ddf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881de2: je 0x881e3f */
  if (zf) goto L_881e3f;
L_881de4: /* 881de4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881de7: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 881de9: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881deb: je 0x881e18 */
  if (zf) goto L_881e18;
L_881ded: /* 881ded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_881df0: /* 881df0: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881df2: je 0x881e18 */
  if (zf) goto L_881e18;
L_881df4: /* 881df4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881df7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881dfa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881dfb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 881dff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881e00: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881e03: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881e06: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881e0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881e0c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881e0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881e0f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881e12: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881e14: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e16: jne 0x881df0 */
  if (!zf) goto L_881df0;
L_881e18: /* 881e18: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881e1b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881e1d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 881e1e: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e21: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 881e24: jne 0x881e2d */
  if (!zf) goto L_881e2d;
L_881e26: /* 881e26: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 881e2a: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_881e2d: /* 881e2d: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e2f: jne 0x881d80 */
  if (!zf) goto L_881d80;
L_881e35: /* 881e35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881e36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881e37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881e38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881e39: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881e3c: ret 8 */
  esp += 12; SPILL(); return;
L_881e3f: /* 881e3f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 881e42: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 881e45: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 881e49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881e4a: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 881e4e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881e51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881e52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881e53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881e54: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881e57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881d7d(void) {
  LOAD_REGS();
L_881d7d: /* 881d7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_881d80: /* 881d80: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881d84: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881d8a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881d90: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881d93: jge 0x881e3f */
  if ((sf == of)) goto L_881e3f;
L_881d99: /* 881d99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_881da0: /* 881da0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881da4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881da7: jne 0x881de4 */
  if (!zf) goto L_881de4;
L_881da9: /* 881da9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 881dac: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 881daf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881db0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881db2: je 0x881dd0 */
  if (zf) goto L_881dd0;
L_881db4: /* 881db4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 881db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881db9: mov ecx, edi */
  ecx = edi;
/* 881dbb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881dc1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881dc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881dc3: je 0x881dd0 */
  if (zf) goto L_881dd0;
L_881dc5: /* 881dc5: cmp dword ptr [edi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881dc8: jne 0x881dd0 */
  if (!zf) goto L_881dd0;
L_881dca: /* 881dca: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881dce: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_881dd0: /* 881dd0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 881dd6: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881dd9: jl 0x881da0 */
  if ((sf != of)) goto L_881da0;
L_881ddb: /* 881ddb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881ddf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881de2: je 0x881e3f */
  if (zf) goto L_881e3f;
L_881de4: /* 881de4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881de7: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 881de9: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881deb: je 0x881e18 */
  if (zf) goto L_881e18;
L_881ded: /* 881ded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_881df0: /* 881df0: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881df2: je 0x881e18 */
  if (zf) goto L_881e18;
L_881df4: /* 881df4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881df7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881dfa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881dfb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 881dff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881e00: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881e03: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881e06: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881e0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881e0c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881e0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881e0f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881e12: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881e14: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e16: jne 0x881df0 */
  if (!zf) goto L_881df0;
L_881e18: /* 881e18: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881e1b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 881e1d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 881e1e: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e21: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 881e24: jne 0x881e2d */
  if (!zf) goto L_881e2d;
L_881e26: /* 881e26: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 881e2a: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_881e2d: /* 881e2d: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881e2f: jne 0x881d80 */
  if (!zf) goto L_881d80;
L_881e35: /* 881e35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881e36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881e37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881e38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881e39: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881e3c: ret 8 */
  esp += 12; SPILL(); return;
L_881e3f: /* 881e3f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 881e42: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 881e45: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 881e49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881e4a: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 881e4e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881e51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881e52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 881e53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881e54: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881e57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881ed0(void) {
  LOAD_REGS();
L_881ed0: /* 881ed0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881ed3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881ed4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881ed5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881ed6: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 881eda: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881edd: xor ebp, ebp */
  ebp = 0;
/* 881edf: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 881ee3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881ee6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881ee7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881eea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 881eeb: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 881eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881ef0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881ef5: mov ebx, ecx */
  ebx = ecx;
/* 881ef7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881efb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881efeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881efe: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881f04: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 881f08: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 881f0a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881f0d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881f10: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881f13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881f14: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881f17: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 881f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881f1c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881f21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881f22: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881f25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881f25: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 881f2b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 881f2d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881f2f: je 0x881f3e */
  if (zf) goto L_881f3e;
L_881f31: /* 881f31: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 881f36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 881f38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 881f3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881f3b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x881f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881f3e: /* 881f3e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 881f44: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 881f46: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881f48: je 0x881f50 */
  if (zf) goto L_881f50;
L_881f4a: /* 881f4a: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 881f4e: jmp 0x881f58 */
  goto L_881f58;
L_881f50: /* 881f50: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 881f54: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_881f58: /* 881f58: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881f5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 881f5c: mov eax, edx */
  eax = edx;
/* 881f5e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 881f61: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881f64: jne 0x881f7a */
  if (!zf) goto L_881f7a;
L_881f66: /* 881f66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881f69: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881f6a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 881f6b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881f6e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881f74: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x881f7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_881f7a: /* 881f7a: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881f7e: jne 0x881f88 */
  if (!zf) goto L_881f88;
L_881f80: /* 881f80: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_881f88: /* 881f88: mov ecx, esi */
  ecx = esi;
/* 881f8a: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x881f90u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 881f90: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 881f93: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 881f97: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 881f9b: jmp 0x881fa0 */
  goto L_881fa0;
L_881fa0: /* 881fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881fa4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881faa: cmp ebp, dword ptr [ebx + 0x114] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881fb0: jge 0x88204f */
  if ((sf == of)) goto L_88204f;
L_881fb6: /* 881fb6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 881fba: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881fbd: jne 0x881ff7 */
  if (!zf) goto L_881ff7;
L_881fbf: /* 881fbf: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 881fc5: mov edi, dword ptr [ecx + ebp*4] */
  edi = R32((uint32_t)(ecx + ebp*4));
/* 881fc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881fca: je 0x881fe3 */
  if (zf) goto L_881fe3;
L_881fcc: /* 881fcc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 881fd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881fd1: mov ecx, edi */
  ecx = edi;
/* 881fd3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881fd9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881fd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881fdb: je 0x881fe3 */
  if (zf) goto L_881fe3;
L_881fdd: /* 881fdd: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 881fe1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_881fe3: /* 881fe3: mov eax, dword ptr [ebx + 0x114] */
  eax = R32((uint32_t)(ebx + 0x114u));
/* 881fe9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881fea: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881fec: jl 0x881fb6 */
  if ((sf != of)) goto L_881fb6;
L_881fee: /* 881fee: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881ff2: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881ff5: je 0x88204f */
  if (zf) goto L_88204f;
L_881ff7: /* 881ff7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881ffa: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 881ffc: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881ffe: je 0x882028 */
  if (zf) goto L_882028;
L_882000: /* 882000: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882002: je 0x882028 */
  if (zf) goto L_882028;
L_882004: /* 882004: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882007: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88200a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88200d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88200e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882011: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 882015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882016: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88201b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88201c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88201fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88201f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882022: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882024: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882026: jne 0x882000 */
  if (!zf) goto L_882000;
L_882028: /* 882028: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88202b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 88202d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 88202e: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882031: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 882034: jne 0x88203d */
  if (!zf) goto L_88203d;
L_882036: /* 882036: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88203a: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_88203d: /* 88203d: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88203f: jne 0x881fa0 */
  if (!zf) goto L_881fa0;
L_882045: /* 882045: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882047: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882048: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882049: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88204c: ret 8 */
  esp += 12; SPILL(); return;
L_88204f: /* 88204f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882052: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882055: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 882059: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88205a: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 88205e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882062: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882063: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882064: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882067: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881f9d(void) {
  LOAD_REGS();
L_881f9d: /* 881f9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_881fa0: /* 881fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 881fa4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 881faa: cmp ebp, dword ptr [ebx + 0x114] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881fb0: jge 0x88204f */
  if ((sf == of)) goto L_88204f;
L_881fb6: /* 881fb6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 881fba: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881fbd: jne 0x881ff7 */
  if (!zf) goto L_881ff7;
L_881fbf: /* 881fbf: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 881fc5: mov edi, dword ptr [ecx + ebp*4] */
  edi = R32((uint32_t)(ecx + ebp*4));
/* 881fc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881fca: je 0x881fe3 */
  if (zf) goto L_881fe3;
L_881fcc: /* 881fcc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 881fd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881fd1: mov ecx, edi */
  ecx = edi;
/* 881fd3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x881fd9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 881fd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881fdb: je 0x881fe3 */
  if (zf) goto L_881fe3;
L_881fdd: /* 881fdd: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 881fe1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_881fe3: /* 881fe3: mov eax, dword ptr [ebx + 0x114] */
  eax = R32((uint32_t)(ebx + 0x114u));
/* 881fe9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 881fea: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 881fec: jl 0x881fb6 */
  if ((sf != of)) goto L_881fb6;
L_881fee: /* 881fee: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 881ff2: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 881ff5: je 0x88204f */
  if (zf) goto L_88204f;
L_881ff7: /* 881ff7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881ffa: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 881ffc: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881ffe: je 0x882028 */
  if (zf) goto L_882028;
L_882000: /* 882000: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882002: je 0x882028 */
  if (zf) goto L_882028;
L_882004: /* 882004: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882007: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88200a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88200d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88200e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882011: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 882015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882016: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88201b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88201c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88201fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88201f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882022: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882024: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882026: jne 0x882000 */
  if (!zf) goto L_882000;
L_882028: /* 882028: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88202b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 88202d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 88202e: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882031: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 882034: jne 0x88203d */
  if (!zf) goto L_88203d;
L_882036: /* 882036: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88203a: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_88203d: /* 88203d: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88203f: jne 0x881fa0 */
  if (!zf) goto L_881fa0;
L_882045: /* 882045: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882047: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882048: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882049: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88204c: ret 8 */
  esp += 12; SPILL(); return;
L_88204f: /* 88204f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882052: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882055: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 882059: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88205a: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 88205e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882062: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882063: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882064: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882067: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8820e0(void) {
  LOAD_REGS();
L_8820e0: /* 8820e0: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8820e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8820e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8820e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8820e6: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 8820ed: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8820f0: xor ebx, ebx */
  ebx = 0;
/* 8820f2: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 8820f6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8820f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8820fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8820fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8820fe: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 882102: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882103: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882108: mov edi, ecx */
  edi = ecx;
/* 88210a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88210d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88210e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882111u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882111: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882117: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 88211b: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 88211d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882120: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882123: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882126: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882127: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88212a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 88212e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88212f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882135: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882138: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 88213e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 882140: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882142: je 0x882151 */
  if (zf) goto L_882151;
L_882144: /* 882144: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 882149: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 88214b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88214d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88214e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x882151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882151: /* 882151: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882157: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 882159: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88215b: je 0x882163 */
  if (zf) goto L_882163;
L_88215d: /* 88215d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 882161: jmp 0x88216b */
  goto L_88216b;
L_882163: /* 882163: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 882167: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_88216b: /* 88216b: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 88216d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882170: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882173: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882176: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882177: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88217a: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 88217e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88217f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882185: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882188u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882188: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 88218e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 882190: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882192: je 0x8821a1 */
  if (zf) goto L_8821a1;
L_882194: /* 882194: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 882199: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 88219b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88219d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88219e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x8821a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8821a1: /* 8821a1: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 8821a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8821a9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8821ab: je 0x8821b3 */
  if (zf) goto L_8821b3;
L_8821ad: /* 8821ad: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8821b1: jmp 0x8821bb */
  goto L_8821bb;
L_8821b3: /* 8821b3: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 8821b7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_8821bb: /* 8821bb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8821bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8821c0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8821c3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8821c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8821c7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8821ca: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8821ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8821cf: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8821d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8821d5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8821d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8821d8: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 8821de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8821e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8821e2: je 0x8821f1 */
  if (zf) goto L_8821f1;
L_8821e4: /* 8821e4: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 8821e9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8821eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8821ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8821ee: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x8821f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8821f1: /* 8821f1: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 8821f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8821f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8821fb: je 0x882203 */
  if (zf) goto L_882203;
L_8821fd: /* 8821fd: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 882201: jmp 0x88220b */
  goto L_88220b;
L_882203: /* 882203: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 882207: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_88220b: /* 88220b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88220e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882211: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882214: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882215: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882218: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 88221c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88221d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882222: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882223: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882226: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 88222c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88222e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 882231: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 882234: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 882238: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88223b: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 88223f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882242: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 882246: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882249: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88224a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88224d: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 882251: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882252: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882258: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88225bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88225b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88225e: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 882266: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 88226e: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 882276: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882279: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88227a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 88227e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88227f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882282: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882285: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88228a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88228b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88228eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88228e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 882291: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 882292: mov eax, edx */
  eax = edx;
/* 882294: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882297: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88229a: jne 0x8822b1 */
  if (!zf) goto L_8822b1;
L_88229c: /* 88229c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88229f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8822a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8822a1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8822a4: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8822aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8822ab: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8822b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8822b1: /* 8822b1: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8822b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8822b7: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 8822bb: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8822c1u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8822c1: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8822c5: jne 0x8822cf */
  if (!zf) goto L_8822cf;
L_8822c7: /* 8822c7: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_8822cf: /* 8822cf: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 8822d5: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8822db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8822dc: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 8822e0: push 0x9f */
  { uint32_t v = 0x9fu; esp -= 4; W32(esp, v); }
/* 8822e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8822e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8822e9: mov eax, esp */
  eax = esp;
/* 8822eb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8822ed: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 8822f1: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8822f4: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 8822f8: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8822fb: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 8822ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882301: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882304: mov eax, esp */
  eax = esp;
/* 882306: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 882308: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 88230c: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 88230f: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 882313: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 882316: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 88231a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88231d: mov eax, esp */
  eax = esp;
/* 88231f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 882321: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 882325: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 882328: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 88232c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 88232f: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 882334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882335: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x88233bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88233b: mov ecx, esi */
  ecx = esi;
/* 88233d: mov edi, eax */
  edi = eax;
/* 88233f: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x882345u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 882345: mov ebp, dword ptr [esi + 0xc] */
  ebp = R32((uint32_t)(esi + 0xcu));
/* 882348: mov ebx, eax */
  ebx = eax;
/* 88234a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_882350: /* 882350: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882352: je 0x882405 */
  if (zf) goto L_882405;
L_882358: /* 882358: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 88235b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88235d: je 0x8823a5 */
  if (zf) goto L_8823a5;
L_88235f: /* 88235f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 882363: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 882364: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x88236au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 88236a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88236c: je 0x8823a5 */
  if (zf) goto L_8823a5;
L_88236e: /* 88236e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 882371: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 882375: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 882377: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 88237b: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 88237e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 882380: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 882382: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 882385: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 882388: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 88238b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88238f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 882392: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 882395: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 882397: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 882399: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88239c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 88239f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8823a2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_8823a5: /* 8823a5: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8823a8: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8823aa: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8823ac: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8823ae: je 0x8823d8 */
  if (zf) goto L_8823d8;
L_8823b0: /* 8823b0: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8823b2: je 0x8823d8 */
  if (zf) goto L_8823d8;
L_8823b4: /* 8823b4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8823b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8823ba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8823bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8823be: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8823c1: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 8823c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8823c6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8823cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8823cc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8823cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8823cf: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8823d2: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8823d4: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8823d6: jne 0x8823b0 */
  if (!zf) goto L_8823b0;
L_8823d8: /* 8823d8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8823db: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8823dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8823de: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8823e1: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 8823e4: jne 0x8823e9 */
  if (!zf) goto L_8823e9;
L_8823e6: /* 8823e6: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
L_8823e9: /* 8823e9: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8823eb: jne 0x882350 */
  if (!zf) goto L_882350;
L_8823f1: /* 8823f1: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8823f5: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8823fbu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8823fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8823fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8823fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8823fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8823ff: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882402: ret 8 */
  esp += 12; SPILL(); return;
L_882405: /* 882405: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 882408: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 88240b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88240f: lea edx, [ecx + ebx + 1] */
  edx = (uint32_t)(ecx + ebx + 0x1u);
/* 882413: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882416: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 88241a: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 882420: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x882426u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 882426: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882427: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882428: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882429: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88242a: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88242d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_882510(void) {
  LOAD_REGS();
L_882510: /* 882510: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882513: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882514: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 882515: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882516: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 88251a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88251d: xor ebx, ebx */
  ebx = 0;
/* 88251f: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 882523: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882526: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882527: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88252a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88252b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 88252f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882530: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882535: mov ebp, ecx */
  ebp = ecx;
/* 882537: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88253a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88253b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88253eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88253e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882544: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 882548: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 88254a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88254d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882550: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882553: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882554: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882557: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88255b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88255c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882562: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882565u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882565: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 88256b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 88256d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88256f: je 0x88257e */
  if (zf) goto L_88257e;
L_882571: /* 882571: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 882576: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 882578: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88257a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88257b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x88257eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88257e: /* 88257e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882584: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 882586: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882588: je 0x882590 */
  if (zf) goto L_882590;
L_88258a: /* 88258a: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 88258e: jmp 0x882598 */
  goto L_882598;
L_882590: /* 882590: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 882594: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
L_882598: /* 882598: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88259b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88259e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8825a6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8825a9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8825aa: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8825ad: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8825b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8825b2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8825b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8825b8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8825bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8825bb: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 8825c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8825c3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8825c6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8825c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8825cd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8825d0: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8825d4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8825d7: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8825db: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8825de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8825df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8825e2: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 8825e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8825e7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8825ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8825ed: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8825f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8825f0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8825f3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8825f4: mov eax, edx */
  eax = edx;
/* 8825f6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8825f9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8825fc: jne 0x882613 */
  if (!zf) goto L_882613;
L_8825fe: /* 8825fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882601: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882602: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882603: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882606: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88260c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88260d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x882613u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882613: /* 882613: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882617: jne 0x882621 */
  if (!zf) goto L_882621;
L_882619: /* 882619: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_882621: /* 882621: mov ecx, esi */
  ecx = esi;
/* 882623: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x882629u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 882629: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 88262d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882630: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 882634: jmp 0x882640 */
  goto L_882640;
L_882640: /* 882640: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 882644: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 88264a: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 882650: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 882653: jge 0x882752 */
  if ((sf == of)) goto L_882752;
L_882659: /* 882659: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_882660: /* 882660: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 882664: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882667: jne 0x8826fa */
  if (!zf) goto L_8826fa;
L_88266d: /* 88266d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 882670: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 882673: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 882674: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882676: je 0x8826e2 */
  if (zf) goto L_8826e2;
L_882678: /* 882678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88267c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88267d: mov ecx, edi */
  ecx = edi;
/* 88267f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x882685u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 882685: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882687: je 0x8826e2 */
  if (zf) goto L_8826e2;
L_882689: /* 882689: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 88268f: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 882693: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 882697: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 88269b: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8826a1: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8826a5: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8826a9: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8826af: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 8826b3: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8826b7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8826bb: fadd dword ptr [edi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2d4u)));
/* 8826c1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8826c5: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8826cbu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8826cb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8826cf: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8826d3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8826d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8826d7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8826da: jne 0x8826e2 */
  if (!zf) goto L_8826e2;
L_8826dc: /* 8826dc: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 8826e0: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_8826e2: /* 8826e2: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 8826e8: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8826eb: jl 0x882660 */
  if ((sf != of)) goto L_882660;
L_8826f1: /* 8826f1: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 8826f5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8826f8: je 0x882752 */
  if (zf) goto L_882752;
L_8826fa: /* 8826fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8826fd: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8826ff: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882701: je 0x88272b */
  if (zf) goto L_88272b;
L_882703: /* 882703: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882705: je 0x88272b */
  if (zf) goto L_88272b;
L_882707: /* 882707: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88270a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88270d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882711: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882714: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 882718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882719: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88271e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88271f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882722: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882725: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882727: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882729: jne 0x882703 */
  if (!zf) goto L_882703;
L_88272b: /* 88272b: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 88272e: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 882730: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 882731: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882734: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 882737: jne 0x882740 */
  if (!zf) goto L_882740;
L_882739: /* 882739: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88273d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_882740: /* 882740: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882742: jne 0x882640 */
  if (!zf) goto L_882640;
L_882748: /* 882748: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88274a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88274b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88274c: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88274f: ret 8 */
  esp += 12; SPILL(); return;
L_882752: /* 882752: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882755: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882758: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 88275c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88275d: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 882761: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882767: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88276a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_882636(void) {
  LOAD_REGS();
L_882636: /* 882636: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 88263d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_882640: /* 882640: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 882644: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 88264a: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 882650: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 882653: jge 0x882752 */
  if ((sf == of)) goto L_882752;
L_882659: /* 882659: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_882660: /* 882660: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 882664: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882667: jne 0x8826fa */
  if (!zf) goto L_8826fa;
L_88266d: /* 88266d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 882670: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 882673: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 882674: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882676: je 0x8826e2 */
  if (zf) goto L_8826e2;
L_882678: /* 882678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88267c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88267d: mov ecx, edi */
  ecx = edi;
/* 88267f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x882685u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 882685: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882687: je 0x8826e2 */
  if (zf) goto L_8826e2;
L_882689: /* 882689: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 88268f: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 882693: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 882697: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 88269b: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8826a1: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8826a5: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8826a9: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8826af: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 8826b3: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8826b7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8826bb: fadd dword ptr [edi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2d4u)));
/* 8826c1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8826c5: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8826cbu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8826cb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8826cf: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8826d3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8826d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8826d7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8826da: jne 0x8826e2 */
  if (!zf) goto L_8826e2;
L_8826dc: /* 8826dc: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 8826e0: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_8826e2: /* 8826e2: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 8826e8: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8826eb: jl 0x882660 */
  if ((sf != of)) goto L_882660;
L_8826f1: /* 8826f1: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 8826f5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8826f8: je 0x882752 */
  if (zf) goto L_882752;
L_8826fa: /* 8826fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8826fd: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8826ff: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882701: je 0x88272b */
  if (zf) goto L_88272b;
L_882703: /* 882703: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882705: je 0x88272b */
  if (zf) goto L_88272b;
L_882707: /* 882707: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88270a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88270d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882711: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882714: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 882718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882719: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88271e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88271f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882722: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882725: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882727: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882729: jne 0x882703 */
  if (!zf) goto L_882703;
L_88272b: /* 88272b: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 88272e: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 882730: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 882731: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882734: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 882737: jne 0x882740 */
  if (!zf) goto L_882740;
L_882739: /* 882739: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88273d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_882740: /* 882740: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882742: jne 0x882640 */
  if (!zf) goto L_882640;
L_882748: /* 882748: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88274a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88274b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88274c: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88274f: ret 8 */
  esp += 12; SPILL(); return;
L_882752: /* 882752: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882755: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882758: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 88275c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88275d: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 882761: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882767: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88276a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_882810(void) {
  LOAD_REGS();
L_882810: /* 882810: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882816: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882817: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 882818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882819: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 882820: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882823: xor ebx, ebx */
  ebx = 0;
/* 882825: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 882829: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88282c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88282d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 882831: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 882835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882836: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88283b: mov ebp, ecx */
  ebp = ecx;
/* 88283d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882841: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882844u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882844: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 88284a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 88284e: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 882850: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882853: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882856: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882859: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88285a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88285d: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 882861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882862: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882867: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882868: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88286bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88286b: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 882871: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 882873: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882875: je 0x882884 */
  if (zf) goto L_882884;
L_882877: /* 882877: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 88287c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 88287e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882881: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x882884u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882884: /* 882884: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 88288a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88288c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88288e: je 0x882896 */
  if (zf) goto L_882896;
L_882890: /* 882890: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 882894: jmp 0x88289e */
  goto L_88289e;
L_882896: /* 882896: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 88289a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_88289e: /* 88289e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8828a1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8828a4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8828ac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8828af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8828b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8828b3: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8828b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8828b8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8828bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8828be: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8828c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8828c1: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 8828c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8828c9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8828cc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8828cf: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8828d3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8828d6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 8828da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8828dd: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8828e1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8828e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8828e5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8828e8: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8828ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8828ed: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8828f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8828f3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8828f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8828f6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8828f9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8828fa: mov eax, edx */
  eax = edx;
/* 8828fc: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8828ff: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882902: jne 0x882919 */
  if (!zf) goto L_882919;
L_882904: /* 882904: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882907: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882909: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88290c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 882912: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882913: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x882919u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882919: /* 882919: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88291d: jne 0x882927 */
  if (!zf) goto L_882927;
L_88291f: /* 88291f: mov dword ptr [esp + 0x18], 0xb5bf68 */
  W32((uint32_t)(esp + 0x18u), 0xb5bf68u);
L_882927: /* 882927: mov ecx, esi */
  ecx = esi;
/* 882929: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 88292d: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 882931: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 882939: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 882941: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 882949: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 882951: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 882959: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 882961: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
/* 882965: mov dword ptr [esp + 0x78], 0x3f800000 */
  W32((uint32_t)(esp + 0x78u), 0x3f800000u);
/* 88296d: mov dword ptr [esp + 0x7c], 0xffffffff */
  W32((uint32_t)(esp + 0x7cu), 0xffffffffu);
/* 882975: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 88297c: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x882982u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 882982: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 882986: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882989: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 88298d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_882990: /* 882990: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 882994: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 88299a: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 8829a0: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8829a3: jge 0x882b35 */
  if ((sf == of)) goto L_882b35;
L_8829a9: /* 8829a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8829b0: /* 8829b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8829b4: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8829b7: jne 0x882ad3 */
  if (!zf) goto L_882ad3;
L_8829bd: /* 8829bd: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8829c0: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 8829c3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8829c4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8829c6: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8829ca: je 0x882abb */
  if (zf) goto L_882abb;
L_8829d0: /* 8829d0: mov al, byte ptr [edi + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x80u))) & 0xffu);
/* 8829d6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8829d8: js 0x882abb */
  if (sf) goto L_882abb;
L_8829de: /* 8829de: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8829e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8829e3: mov ecx, edi */
  ecx = edi;
/* 8829e5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8829ebu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8829eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8829ed: je 0x882abb */
  if (zf) goto L_882abb;
L_8829f3: /* 8829f3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8829f7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8829fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8829ff: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 882a02: jnp 0x882a4f */
  if (!pf) goto L_882a4f;
L_882a04: /* 882a04: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 882a0a: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 882a0e: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 882a12: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 882a16: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 882a1c: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 882a20: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 882a24: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 882a2a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 882a2e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 882a32: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 882a36: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 882a3a: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 882a3e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x882a44u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 882a44: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 882a48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 882a4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 882a4d: jp 0x882abb */
  if (pf) goto L_882abb;
L_882a4f: /* 882a4f: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 882a55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882a57: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882a5a: mov eax, esp */
  eax = esp;
/* 882a5c: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 882a64: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 882a68: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 882a6a: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 882a72: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 882a76: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 882a79: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 882a81: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 882a85: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 882a88: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 882a8d: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 882a91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882a92: lea eax, [edi + 0x170] */
  eax = (uint32_t)(edi + 0x170u);
/* 882a98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882a99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 882a9a: lea eax, [esp + 0x70] */
  eax = (uint32_t)(esp + 0x70u);
/* 882a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882a9f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x882aa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882aa5: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 882aa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882aab: je 0x882ab1 */
  if (zf) goto L_882ab1;
L_882aad: /* 882aad: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882aaf: jne 0x882ab7 */
  if (!zf) goto L_882ab7;
L_882ab1: /* 882ab1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 882ab5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_882ab7: /* 882ab7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_882abb: /* 882abb: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 882ac1: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 882ac4: jl 0x8829b0 */
  if ((sf != of)) goto L_8829b0;
L_882aca: /* 882aca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 882ace: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ad1: je 0x882b35 */
  if (zf) goto L_882b35;
L_882ad3: /* 882ad3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882ad6: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 882ad8: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882ada: je 0x882b0b */
  if (zf) goto L_882b0b;
L_882adc: /* 882adc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_882ae0: /* 882ae0: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882ae2: je 0x882b0b */
  if (zf) goto L_882b0b;
L_882ae4: /* 882ae4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882ae7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882aea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882aeb: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 882af2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 882af3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882af6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882af9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882afe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882aff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882b02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882b02: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882b05: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882b07: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882b09: jne 0x882ae0 */
  if (!zf) goto L_882ae0;
L_882b0b: /* 882b0b: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 882b0e: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 882b10: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 882b11: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882b14: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 882b17: jne 0x882b20 */
  if (!zf) goto L_882b20;
L_882b19: /* 882b19: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 882b1d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_882b20: /* 882b20: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882b22: jne 0x882990 */
  if (!zf) goto L_882990;
L_882b28: /* 882b28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882b29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882b2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882b2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882b2c: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882b32: ret 8 */
  esp += 12; SPILL(); return;
L_882b35: /* 882b35: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882b38: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882b3b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 882b3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882b40: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 882b44: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882b48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882b49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882b4a: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882b50: ret 8 */
  esp += 12; SPILL(); return;
}

void f_882c40(void) {
  LOAD_REGS();
L_882c40: /* 882c40: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882c46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882c47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 882c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882c49: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 882c50: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882c53: xor ebx, ebx */
  ebx = 0;
/* 882c55: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 882c59: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882c5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882c5d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882c60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 882c61: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 882c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882c66: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882c6b: mov ebp, ecx */
  ebp = ecx;
/* 882c6d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882c71: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882c74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882c74: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882c7a: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 882c7e: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 882c80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882c83: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882c86: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882c89: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882c8a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882c8d: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 882c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882c92: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882c97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882c98: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882c9b: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 882ca1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 882ca3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ca5: je 0x882cb4 */
  if (zf) goto L_882cb4;
L_882ca7: /* 882ca7: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 882cac: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 882cae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882cb1: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x882cb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882cb4: /* 882cb4: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 882cba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 882cbc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882cbe: je 0x882cc6 */
  if (zf) goto L_882cc6;
L_882cc0: /* 882cc0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 882cc4: jmp 0x882cce */
  goto L_882cce;
L_882cc6: /* 882cc6: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 882cca: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_882cce: /* 882cce: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882cd1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882cd4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 882cdc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882cdf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882ce0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882ce3: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 882ce7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882ce8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882ced: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882cee: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882cf1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882cf1: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 882cf7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882cf9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 882cfc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 882cff: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 882d03: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882d06: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 882d0a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882d0d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 882d11: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882d14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882d15: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882d18: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 882d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882d1d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882d23: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882d26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882d26: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882d29: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 882d2d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882d30: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882d31: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 882d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 882d36: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882d39: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882d3c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882d41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882d42: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882d45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882d45: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 882d48: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 882d49: mov eax, edx */
  eax = edx;
/* 882d4b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 882d4e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882d51: jne 0x882d68 */
  if (!zf) goto L_882d68;
L_882d53: /* 882d53: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882d56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882d57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882d58: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882d5b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 882d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882d62: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x882d68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_882d68: /* 882d68: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882d6c: jne 0x882d76 */
  if (!zf) goto L_882d76;
L_882d6e: /* 882d6e: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_882d76: /* 882d76: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 882d7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882d7c: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 882d80: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x882d86u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 882d86: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 882d8a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 882d8e: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 882d94: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 882d9a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882d9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 882d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882d9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882da1: mov eax, esp */
  eax = esp;
/* 882da3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 882da5: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 882da9: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 882dac: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 882db0: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 882db3: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 882db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882db9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x882dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882dbc: mov ecx, esi */
  ecx = esi;
/* 882dbe: mov edi, eax */
  edi = eax;
/* 882dc0: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x882dc6u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 882dc6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882dc9: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 882dcd: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
L_882dd1: /* 882dd1: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882dd3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 882dd7: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 882dd9: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 882ddd: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 882de1: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 882de9: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 882df1: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 882df9: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 882e01: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 882e09: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 882e11: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 882e15: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* 882e1d: mov dword ptr [esp + 0x6c], 0xffffffff */
  W32((uint32_t)(esp + 0x6cu), 0xffffffffu);
/* 882e25: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 882e29: je 0x882f3a */
  if (zf) goto L_882f3a;
L_882e2f: /* 882e2f: nop  */
L_882e30: /* 882e30: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 882e33: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882e35: je 0x882ec4 */
  if (zf) goto L_882ec4;
L_882e3b: /* 882e3b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 882e3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882e40: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x882e46u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 882e46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 882e48: je 0x882ec4 */
  if (zf) goto L_882ec4;
L_882e4a: /* 882e4a: cmp dword ptr [esp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882e4e: je 0x882e5d */
  if (zf) goto L_882e5d;
L_882e50: /* 882e50: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 882e53: mov al, byte ptr [ecx + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x80u))) & 0xffu);
/* 882e59: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 882e5b: js 0x882ec4 */
  if (sf) goto L_882ec4;
L_882e5d: /* 882e5d: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 882e63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 882e65: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 882e68: mov eax, esp */
  eax = esp;
/* 882e6a: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 882e72: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 882e76: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 882e78: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 882e80: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 882e84: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 882e87: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 882e8f: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 882e93: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 882e96: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 882e9b: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 882e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882ea0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 882ea3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 882ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882ea9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 882eaa: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 882eae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882eaf: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x882eb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882eb5: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 882eb9: xor ebx, ebx */
  ebx = 0;
/* 882ebb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ebd: je 0x882ed0 */
  if (zf) goto L_882ed0;
L_882ebf: /* 882ebf: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ec2: je 0x882ed0 */
  if (zf) goto L_882ed0;
L_882ec4: /* 882ec4: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 882ec6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ec8: jne 0x882e30 */
  if (!zf) goto L_882e30;
L_882ece: /* 882ece: jmp 0x882edb */
  goto L_882edb;
L_882ed0: /* 882ed0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 882ed3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 882ed7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 882ed9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_882edb: /* 882edb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 882edf: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 882ee1: je 0x882f3a */
  if (zf) goto L_882f3a;
L_882ee3: /* 882ee3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882ee6: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882ee8: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882eea: je 0x882f1b */
  if (zf) goto L_882f1b;
L_882eec: /* 882eec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_882ef0: /* 882ef0: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882ef2: je 0x882f1b */
  if (zf) goto L_882f1b;
L_882ef4: /* 882ef4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 882ef7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 882efa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 882efd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 882efe: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 882f01: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 882f08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 882f09: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 882f0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 882f0f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x882f12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 882f12: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882f15: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882f17: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882f19: jne 0x882ef0 */
  if (!zf) goto L_882ef0;
L_882f1b: /* 882f1b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 882f1e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 882f20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 882f21: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882f24: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 882f27: jne 0x882f30 */
  if (!zf) goto L_882f30;
L_882f29: /* 882f29: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 882f2d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_882f30: /* 882f30: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 882f32: jne 0x882dd1 */
  if (!zf) goto L_882dd1;
L_882f38: /* 882f38: jmp 0x882f4b */
  goto L_882f4b;
L_882f3a: /* 882f3a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 882f3d: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 882f40: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 882f44: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 882f48: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_882f4b: /* 882f4b: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 882f4f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x882f55u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 882f55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 882f56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 882f57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 882f58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 882f59: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 882f5f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883040(void) {
  LOAD_REGS();
L_883040: /* 883040: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883043: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883045: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 883049: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88304c: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 883054: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883057: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883058: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 883059: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88305c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 883060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883061: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883066: mov edi, ecx */
  edi = ecx;
/* 883068: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88306b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88306c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88306fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88306f: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 883075: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 88307d: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 883083: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883086: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883089: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88308c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88308d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883090: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 883094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883095: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88309a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88309b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88309eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88309e: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 8830a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8830a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8830a8: je 0x8830b7 */
  if (zf) goto L_8830b7;
L_8830aa: /* 8830aa: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 8830af: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8830b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8830b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8830b4: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x8830b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8830b7: /* 8830b7: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 8830bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8830bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8830c1: mov ebx, eax */
  ebx = eax;
/* 8830c3: jne 0x8830c9 */
  if (!zf) goto L_8830c9;
L_8830c5: /* 8830c5: lea ebx, [esp + 0x58] */
  ebx = (uint32_t)(esp + 0x58u);
L_8830c9: /* 8830c9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8830cc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8830cf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8830d7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8830da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8830db: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8830de: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 8830e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8830e3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8830e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8830e9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8830ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8830ec: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 8830f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8830f4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8830f7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8830fa: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8830fe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883101: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 883105: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883108: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 88310c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88310f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883110: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883113: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 883117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883118: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88311d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88311e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883121u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883121: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883124: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883125: mov eax, edx */
  eax = edx;
/* 883127: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88312a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88312d: jne 0x883145 */
  if (!zf) goto L_883145;
L_88312f: /* 88312f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883132: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883133: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883135: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883138: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88313e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88313f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883145: /* 883145: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 883149: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88314b: jne 0x883155 */
  if (!zf) goto L_883155;
L_88314d: /* 88314d: mov dword ptr [esp + 0xc], 0xb5bf68 */
  W32((uint32_t)(esp + 0xcu), 0xb5bf68u);
L_883155: /* 883155: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 88315a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88315b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 88315f: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x883165u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 883165: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 883169: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 88316f: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 883173: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 883179: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88317b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88317d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88317e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883181: mov eax, esp */
  eax = esp;
/* 883183: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 883185: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 883189: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 88318c: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 883190: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 883193: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 883198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883199: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x88319cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88319c: mov ecx, esi */
  ecx = esi;
/* 88319e: mov edi, eax */
  edi = eax;
/* 8831a0: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x8831a6u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 8831a6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8831a9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8831ad: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_8831b1: /* 8831b1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8831b3: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 8831b9: je 0x88324b */
  if (zf) goto L_88324b;
L_8831bf: /* 8831bf: nop  */
L_8831c0: /* 8831c0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8831c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8831c5: je 0x8831d6 */
  if (zf) goto L_8831d6;
L_8831c7: /* 8831c7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8831cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8831cc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8831d2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8831d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8831d4: jne 0x8831de */
  if (!zf) goto L_8831de;
L_8831d6: /* 8831d6: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8831d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8831da: jne 0x8831c0 */
  if (!zf) goto L_8831c0;
L_8831dc: /* 8831dc: jmp 0x8831e5 */
  goto L_8831e5;
L_8831de: /* 8831de: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8831e1: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8831e3: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_8831e5: /* 8831e5: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8831e8: je 0x88324b */
  if (zf) goto L_88324b;
L_8831ea: /* 8831ea: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8831ed: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8831ef: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8831f1: je 0x88321b */
  if (zf) goto L_88321b;
L_8831f3: /* 8831f3: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8831f5: je 0x88321b */
  if (zf) goto L_88321b;
L_8831f7: /* 8831f7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8831fa: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8831fd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883200: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883201: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883204: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 883208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883209: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88320e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88320f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883212u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883212: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 883215: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883217: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883219: jne 0x8831f3 */
  if (!zf) goto L_8831f3;
L_88321b: /* 88321b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88321e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883220: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 883221: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883224: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 883227: jne 0x883230 */
  if (!zf) goto L_883230;
L_883229: /* 883229: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88322d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_883230: /* 883230: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883232: jne 0x8831b1 */
  if (!zf) goto L_8831b1;
L_883238: /* 883238: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 88323c: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x883242u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 883242: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 883243: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883244: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 883245: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883248: ret 8 */
  esp += 12; SPILL(); return;
L_88324b: /* 88324b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 88324e: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 883251: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 883255: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 883259: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 88325d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883260: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x883266u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 883266: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 883267: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883268: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 883269: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88326c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883300(void) {
  LOAD_REGS();
L_883300: /* 883300: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883303: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883304: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 883305: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883306: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 88330a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88330d: xor ebp, ebp */
  ebp = 0;
/* 88330f: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 883313: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883316: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883317: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88331a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88331b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 88331f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883320: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883325: mov ebx, ecx */
  ebx = ecx;
/* 883327: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88332a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88332b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88332eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88332e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 883334: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 883338: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 88333a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88333d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883340: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883343: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883344: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883347: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88334b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88334c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883352: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883355: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 88335b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 88335d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88335f: je 0x88336e */
  if (zf) goto L_88336e;
L_883361: /* 883361: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 883366: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 883368: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88336a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88336b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x88336eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88336e: /* 88336e: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 883374: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 883376: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883378: je 0x883380 */
  if (zf) goto L_883380;
L_88337a: /* 88337a: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 88337e: jmp 0x883388 */
  goto L_883388;
L_883380: /* 883380: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 883384: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_883388: /* 883388: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88338b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88338c: mov eax, edx */
  eax = edx;
/* 88338e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883391: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883394: jne 0x8833aa */
  if (!zf) goto L_8833aa;
L_883396: /* 883396: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883399: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88339a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88339b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88339e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8833a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8833a4: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x8833aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8833aa: /* 8833aa: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8833ae: jne 0x8833b8 */
  if (!zf) goto L_8833b8;
L_8833b0: /* 8833b0: mov dword ptr [esp + 0x10], 0xb5bf68 */
  W32((uint32_t)(esp + 0x10u), 0xb5bf68u);
L_8833b8: /* 8833b8: mov ecx, esi */
  ecx = esi;
/* 8833ba: call dword ptr [0xcfab68] */
  esp -= 4; W32(esp, 0x8833c0u); SPILL(); f_4e2e1e(); if (g_unwind) return; /* Core!?ReadWord@FFrame@@QAEHXZ */ RELOAD();
/* 8833c0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8833c3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8833c7: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8833cb: jmp 0x8833d0 */
  goto L_8833d0;
L_8833d0: /* 8833d0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8833d4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 8833da: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8833e0: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8833e3: jge 0x8834a2 */
  if ((sf == of)) goto L_8834a2;
L_8833e9: /* 8833e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8833f0: /* 8833f0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8833f4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8833f7: jne 0x88344a */
  if (!zf) goto L_88344a;
L_8833f9: /* 8833f9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8833fc: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 8833ff: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 883400: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 883402: je 0x883436 */
  if (zf) goto L_883436;
L_883404: /* 883404: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 883408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883409: mov ecx, edi */
  ecx = edi;
/* 88340b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x883411u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 883411: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 883413: je 0x883436 */
  if (zf) goto L_883436;
L_883415: /* 883415: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 88341b: cmp eax, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883421: je 0x883430 */
  if (zf) goto L_883430;
L_883423: /* 883423: xor ecx, ecx */
  ecx = 0;
/* 883425: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883427: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 88342a: mov eax, ecx */
  eax = ecx;
/* 88342c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88342e: je 0x883436 */
  if (zf) goto L_883436;
L_883430: /* 883430: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 883434: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_883436: /* 883436: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 88343c: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88343f: jl 0x8833f0 */
  if ((sf != of)) goto L_8833f0;
L_883441: /* 883441: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 883445: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883448: je 0x8834a2 */
  if (zf) goto L_8834a2;
L_88344a: /* 88344a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88344d: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 88344f: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883451: je 0x88347b */
  if (zf) goto L_88347b;
L_883453: /* 883453: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883455: je 0x88347b */
  if (zf) goto L_88347b;
L_883457: /* 883457: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88345a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88345d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883460: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883461: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883464: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 883468: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883469: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88346e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88346f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883472: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 883475: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883477: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883479: jne 0x883453 */
  if (!zf) goto L_883453;
L_88347b: /* 88347b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88347e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883480: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 883481: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883484: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 883487: jne 0x883490 */
  if (!zf) goto L_883490;
L_883489: /* 883489: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88348d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_883490: /* 883490: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883492: jne 0x8833d0 */
  if (!zf) goto L_8833d0;
L_883498: /* 883498: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 883499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88349a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88349b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88349c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88349f: ret 8 */
  esp += 12; SPILL(); return;
L_8834a2: /* 8834a2: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8834a5: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 8834a8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8834ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8834ad: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 8834b1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8834b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8834b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8834b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8834b7: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8834ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8833cd(void) {
  LOAD_REGS();
L_8833cd: /* 8833cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8833d0: /* 8833d0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8833d4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 8833da: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8833e0: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8833e3: jge 0x8834a2 */
  if ((sf == of)) goto L_8834a2;
L_8833e9: /* 8833e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8833f0: /* 8833f0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8833f4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8833f7: jne 0x88344a */
  if (!zf) goto L_88344a;
L_8833f9: /* 8833f9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8833fc: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 8833ff: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 883400: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 883402: je 0x883436 */
  if (zf) goto L_883436;
L_883404: /* 883404: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 883408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883409: mov ecx, edi */
  ecx = edi;
/* 88340b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x883411u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 883411: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 883413: je 0x883436 */
  if (zf) goto L_883436;
L_883415: /* 883415: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 88341b: cmp eax, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883421: je 0x883430 */
  if (zf) goto L_883430;
L_883423: /* 883423: xor ecx, ecx */
  ecx = 0;
/* 883425: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883427: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 88342a: mov eax, ecx */
  eax = ecx;
/* 88342c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88342e: je 0x883436 */
  if (zf) goto L_883436;
L_883430: /* 883430: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 883434: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_883436: /* 883436: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 88343c: cmp ebp, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88343f: jl 0x8833f0 */
  if ((sf != of)) goto L_8833f0;
L_883441: /* 883441: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 883445: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883448: je 0x8834a2 */
  if (zf) goto L_8834a2;
L_88344a: /* 88344a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88344d: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 88344f: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883451: je 0x88347b */
  if (zf) goto L_88347b;
L_883453: /* 883453: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883455: je 0x88347b */
  if (zf) goto L_88347b;
L_883457: /* 883457: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88345a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88345d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883460: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883461: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883464: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 883468: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883469: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88346e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88346f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883472: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 883475: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883477: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883479: jne 0x883453 */
  if (!zf) goto L_883453;
L_88347b: /* 88347b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 88347e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 883480: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 883481: cmp dl, 0x31 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883484: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 883487: jne 0x883490 */
  if (!zf) goto L_883490;
L_883489: /* 883489: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88348d: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_883490: /* 883490: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883492: jne 0x8833d0 */
  if (!zf) goto L_8833d0;
L_883498: /* 883498: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 883499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88349a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88349b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88349c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88349f: ret 8 */
  esp += 12; SPILL(); return;
L_8834a2: /* 8834a2: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8834a5: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 8834a8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8834ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8834ad: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
/* 8834b1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8834b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8834b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8834b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8834b7: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8834ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883530(void) {
  LOAD_REGS();
L_883530: /* 883530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 883531: mov ebp, esp */
  ebp = esp;
/* 883533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 883535: push 0x9d50b0 */
  { uint32_t v = 0x9d50b0u; esp -= 4; W32(esp, v); }
/* 88353a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 883540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 883548: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88354b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88354e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88354f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 883551: xor edi, edi */
  edi = 0;
/* 883553: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 883556: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 883559: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88355a: mov esi, ecx */
  esi = ecx;
/* 88355c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88355f: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883562: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 883565: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 883568: jne 0x88357e */
  if (!zf) goto L_88357e;
L_88356a: /* 88356a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88356d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88356e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88356f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 883572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883573: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883578: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x88357eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88357e: /* 88357e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 883584: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 883587: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883589: je 0x88359f */
  if (zf) goto L_88359f;
L_88358b: /* 88358b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88358d: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 883590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883591: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x883594u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883594: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 883598: mov ebx, 1 */
  ebx = 0x1u;
/* 88359d: jmp 0x8835b5 */
  goto L_8835b5;
L_88359f: /* 88359f: push 0xce0a10 */
  { uint32_t v = 0xce0a10u; esp -= 4; W32(esp, v); }
/* 8835a4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8835a7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8835adu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8835ad: mov ebx, 2 */
  ebx = 0x2u;
/* 8835b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_8835b5: /* 8835b5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8835b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8835b9: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8835bc: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8835c2u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8835c2: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8835c5: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8835cc: je 0x8835dd */
  if (zf) goto L_8835dd;
L_8835ce: /* 8835ce: and ebx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8835d1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8835d4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8835d7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8835ddu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8835dd: /* 8835dd: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8835e0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8835e3: je 0x8835ee */
  if (zf) goto L_8835ee;
L_8835e5: /* 8835e5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8835e8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8835eeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8835ee: /* 8835ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8835f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8835f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8835f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8835fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8835fb: mov esp, ebp */
  esp = ebp;
/* 8835fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8835fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883601(void) {
  LOAD_REGS();
L_883601: /* 883601: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 883604: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 883609: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 88360c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88360d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 883610: call 0x99caf8 */
  esp -= 4; W32(esp, 0x883615u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_883615(); return;
}

void f_883615(void) {
  LOAD_REGS();
L_883615: /* 883615: mov ebx, dword ptr [0xcfa1ec] */
  ebx = R32((uint32_t)(0xcfa1ecu));
/* 88361b: push 0xa19378 */
  { uint32_t v = 0xa19378u; esp -= 4; W32(esp, v); }
/* 883620: push 0xae6c58 */
  { uint32_t v = 0xae6c58u; esp -= 4; W32(esp, v); }
/* 883625: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883627u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883627: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88362a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 88362d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883630: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 883633: mov edi, dword ptr [0xcfa3a8] */
  edi = R32((uint32_t)(0xcfa3a8u));
/* 883639: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88363c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 88363e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88363f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883641: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x883643u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883643: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883647: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883649: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88364bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88364b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88364c: push 0xae6c60 */
  { uint32_t v = 0xae6c60u; esp -= 4; W32(esp, v); }
/* 883651: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883653: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88365a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88365fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88365f: guest_badaddr(0x88365f); return;
}

void f_8836b0(void) {
  LOAD_REGS();
L_8836b0: /* 8836b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8836b1: mov ebp, esp */
  ebp = esp;
/* 8836b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8836b5: push 0x9d5121 */
  { uint32_t v = 0x9d5121u; esp -= 4; W32(esp, v); }
/* 8836ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8836c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8836c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8836c8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8836cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8836cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8836cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8836ce: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8836d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8836d4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8836db: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8836e1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8836e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8836e4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8836e7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8836ea: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8836ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8836ee: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8836f1: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8836f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8836f5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8836fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8836fb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8836ff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883702u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883702: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 883705: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x88370bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 88370b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88370e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883711: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883714: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883715: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883718: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 88371b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88371c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883722: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 883726: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883729u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883729: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 88372c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x883732u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 883732: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883735: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883738: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88373b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88373c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88373f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 883742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883743: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883749: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 88374d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883750: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883753: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883754: mov eax, edx */
  eax = edx;
/* 883756: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883759: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88375c: jne 0x883774 */
  if (!zf) goto L_883774;
L_88375e: /* 88375e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883761: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883762: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883764: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883767: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88376d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88376e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883774: /* 883774: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883777: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x88377du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 88377d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 883780: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 883784: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x88378au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 88378a: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 88378d: mov bl, 5 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5u) & 0xffu);
/* 88378f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883790: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 883793: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 883796: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x88379cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 88379c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88379e: push 0xae6c84 */
  { uint32_t v = 0xae6c84u; esp -= 4; W32(esp, v); }
/* 8837a3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8837a6: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x8837acu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 8837ac: mov esi, eax */
  esi = eax;
/* 8837ae: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8837b1: je 0x88382b */
  if (zf) goto L_88382b;
L_8837b3: /* 8837b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8837b4: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8837b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8837b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8837bb: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x8837c1u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 8837c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8837c2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8837c5: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8837c9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8837cfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8837cf: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8837d2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8837d5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8837dbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8837db: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8837de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8837df: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8837e2: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8837e8u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8837e8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8837eb: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8837f1u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8837f1: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8837f3: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8837f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8837f7: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8837fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8837fb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8837fe: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x883804u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 883804: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883805: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883808: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 88380c: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x883812u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 883812: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 883815: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 883818: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x88381eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 88381e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883821: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883822: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 883825: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x88382bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_88382b: /* 88382b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88382d: push 0xae6c8c */
  { uint32_t v = 0xae6c8cu; esp -= 4; W32(esp, v); }
/* 883832: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 883835: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x88383bu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 88383b: mov esi, eax */
  esi = eax;
/* 88383d: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 883840: je 0x8838ad */
  if (zf) goto L_8838ad;
L_883842: /* 883842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883843: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 883846: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 883847: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 88384a: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x883850u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 883850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883851: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883854: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 883858: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x88385eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 88385e: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 883861: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 883864: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x88386au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 88386a: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 88386d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88386e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883871: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x883877u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 883877: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 88387a: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x883880u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 883880: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 883882: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 883885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883886: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 883889: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88388a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 88388d: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x883893u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 883893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883894: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883897: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 88389b: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8838a1u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8838a1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8838a4: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8838a7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838adu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8838ad: /* 8838ad: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8838b0: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8838b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8838b4: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8838bau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8838ba: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8838bd: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8838c1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838c7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8838c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8838ca: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8838ce: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838d4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8838d4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8838d7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8838db: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838e1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8838e1: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8838e4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8838e8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838eeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8838ee: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8838f1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8838f5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8838fbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8838fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8838fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8838ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883900: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 883907: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 883908: mov esp, ebp */
  esp = ebp;
/* 88390a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88390b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88390e(void) {
  LOAD_REGS();
L_88390e: /* 88390e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 883911: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 883916: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 883919: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88391a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 88391d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x883922u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_883922(); return;
}

void f_883922(void) {
  LOAD_REGS();
L_883922: /* 883922: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 883928: push 0xa193c0 */
  { uint32_t v = 0xa193c0u; esp -= 4; W32(esp, v); }
/* 88392d: push 0xae6c94 */
  { uint32_t v = 0xae6c94u; esp -= 4; W32(esp, v); }
/* 883932: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x883934u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883934: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 883937: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 88393a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88393d: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 883940: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 883946: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883949: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 88394b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88394c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88394e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883950: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883953: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883954: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883956: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883959: push 0xae6c9c */
  { uint32_t v = 0xae6c9cu; esp -= 4; W32(esp, v); }
/* 88395e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x883960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883960: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883967: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88396cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88396c: guest_badaddr(0x88396c); return;
}

void f_883a20(void) {
  LOAD_REGS();
L_883a20: /* 883a20: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883a23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883a24: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 883a28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883a2b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883a2e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883a31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883a32: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883a35: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 883a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883a3a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883a3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883a40: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883a43: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883a46: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 883a4e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883a51: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883a52: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 883a56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883a57: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883a5a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883a5d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883a62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883a63: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883a66: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883a69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883a6a: mov eax, edx */
  eax = edx;
/* 883a6c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883a6f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883a72: jne 0x883a8a */
  if (!zf) goto L_883a8a;
L_883a74: /* 883a74: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883a77: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883a7a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883a7d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 883a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883a84: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883a8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883a8a: /* 883a8a: movzx eax, byte ptr [esp + 0x12] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x12u)));
/* 883a8f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 883a93: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883a97: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883a9b: call 0x99c958 */
  esp -= 4; W32(esp, 0x883aa0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883aa0: movzx ecx, byte ptr [esp + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x11u)));
/* 883aa5: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 883aa9: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 883aad: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883ab1: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883ab5: call 0x99c958 */
  esp -= 4; W32(esp, 0x883abau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883aba: movzx edx, byte ptr [esp + 0x10] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x10u)));
/* 883abf: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 883ac3: mov byte ptr [esp + 0x11], al */
  W8((uint32_t)(esp + 0x11u), (eax & 0xffu));
/* 883ac7: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883acb: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883acf: call 0x99c958 */
  esp -= 4; W32(esp, 0x883ad4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883ad4: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* 883ad8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 883adc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 883ae0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 883ae2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883ae3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883ae6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883b30(void) {
  LOAD_REGS();
L_883b30: /* 883b30: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883b33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883b34: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 883b38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883b3b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883b3e: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 883b46: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883b49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883b4a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883b4d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 883b51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883b52: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883b57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883b58: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883b5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883b5e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883b61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883b62: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 883b66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883b67: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883b6a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883b6d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883b73: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883b76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883b76: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883b79: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883b7a: mov eax, edx */
  eax = edx;
/* 883b7c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883b7f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883b82: jne 0x883b9a */
  if (!zf) goto L_883b9a;
L_883b84: /* 883b84: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883b87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883b8a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883b8d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 883b93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883b94: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883b9a: /* 883b9a: movzx eax, byte ptr [esp + 0x12] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x12u)));
/* 883b9f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 883ba3: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883ba7: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883bab: call 0x99c958 */
  esp -= 4; W32(esp, 0x883bb0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883bb0: movzx ecx, byte ptr [esp + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x11u)));
/* 883bb5: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 883bb9: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 883bbd: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883bc1: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883bc5: call 0x99c958 */
  esp -= 4; W32(esp, 0x883bcau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883bca: movzx edx, byte ptr [esp + 0x10] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x10u)));
/* 883bcf: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 883bd3: mov byte ptr [esp + 0x11], al */
  W8((uint32_t)(esp + 0x11u), (eax & 0xffu));
/* 883bd7: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 883bdb: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 883bdf: call 0x99c958 */
  esp -= 4; W32(esp, 0x883be4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 883be4: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* 883be8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 883bec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 883bf0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 883bf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883bf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883bf6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883c40(void) {
  LOAD_REGS();
L_883c40: /* 883c40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883c42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 883c46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883c49: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883c4c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883c4f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883c50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883c53: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 883c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883c58: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883c5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883c5e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883c61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883c61: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883c64: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883c67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883c68: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 883c6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883c6d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883c70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883c73: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883c78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883c79: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883c7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883c7c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883c7f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883c80: mov eax, edx */
  eax = edx;
/* 883c82: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883c85: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883c88: jne 0x883ca0 */
  if (!zf) goto L_883ca0;
L_883c8a: /* 883c8a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883c8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883c8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883c90: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883c93: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 883c99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883c9a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883ca0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883ca0: /* 883ca0: mov cl, byte ptr [esp + 0xe] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xeu))) & 0xffu);
/* 883ca4: mov al, byte ptr [esp + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6u))) & 0xffu);
/* 883ca8: mov dl, byte ptr [esp + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xdu))) & 0xffu);
/* 883cac: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883cae: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 883cb2: mov byte ptr [esp + 0xe], cl */
  W8((uint32_t)(esp + 0xeu), (ecx & 0xffu));
/* 883cb6: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 883cba: add dl, ah */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883cbc: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883cbe: mov byte ptr [esp + 0xc], cl */
  W8((uint32_t)(esp + 0xcu), (ecx & 0xffu));
/* 883cc2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 883cc6: mov byte ptr [esp + 0xd], dl */
  W8((uint32_t)(esp + 0xdu), (edx & 0xffu));
/* 883cca: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 883cce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 883cd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883cd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 883cd2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883d10(void) {
  LOAD_REGS();
L_883d10: /* 883d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883d12: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 883d16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883d19: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883d1c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883d1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883d20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883d23: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 883d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883d28: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883d2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883d2e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883d31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883d31: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883d34: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883d37: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883d38: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 883d3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883d3d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883d40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883d43: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883d49: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x883d4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883d4c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 883d4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883d50: mov eax, edx */
  eax = edx;
/* 883d52: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 883d55: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883d58: jne 0x883d70 */
  if (!zf) goto L_883d70;
L_883d5a: /* 883d5a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883d5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883d5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883d60: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883d63: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 883d69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883d6a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x883d70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883d70: /* 883d70: mov cl, byte ptr [esp + 0xe] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xeu))) & 0xffu);
/* 883d74: mov al, byte ptr [esp + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6u))) & 0xffu);
/* 883d78: mov dl, byte ptr [esp + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xdu))) & 0xffu);
/* 883d7c: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883d7e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 883d82: mov byte ptr [esp + 0xe], cl */
  W8((uint32_t)(esp + 0xeu), (ecx & 0xffu));
/* 883d86: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 883d8a: sub dl, ah */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883d8c: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 883d8e: mov byte ptr [esp + 0xc], cl */
  W8((uint32_t)(esp + 0xcu), (ecx & 0xffu));
/* 883d92: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 883d96: mov byte ptr [esp + 0xd], dl */
  W8((uint32_t)(esp + 0xdu), (edx & 0xffu));
/* 883d9a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 883d9e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 883da0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883da1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 883da2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883de0(void) {
  LOAD_REGS();
L_883de0: /* 883de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 883de1: mov ebp, esp */
  ebp = esp;
/* 883de3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 883de5: push 0x9d5159 */
  { uint32_t v = 0x9d5159u; esp -= 4; W32(esp, v); }
/* 883dea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 883df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883df1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 883df8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883dfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 883e01: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 883e04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883e05: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883e07: mov ebx, ecx */
  ebx = ecx;
/* 883e09: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 883e0c: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883e0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 883e10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 883e13: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 883e1a: jne 0x883e31 */
  if (!zf) goto L_883e31;
L_883e1c: /* 883e1c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 883e1f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 883e20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883e22: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 883e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883e26: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883e2b: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x883e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883e31: /* 883e31: cmp byte ptr [ebx + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 883e35: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 883e39: jne 0x883e61 */
  if (!zf) goto L_883e61;
L_883e3b: /* 883e3b: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 883e41: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 883e43: je 0x883e61 */
  if (zf) goto L_883e61;
L_883e45: /* 883e45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 883e47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883e48: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x883e4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883e4e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 883e50: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 883e56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883e57: mov ecx, eax */
  ecx = eax;
/* 883e59: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x883e5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883e5f: jmp 0x883e72 */
  goto L_883e72;
L_883e61: /* 883e61: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 883e63: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 883e69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883e6a: mov ecx, ebx */
  ecx = ebx;
/* 883e6c: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x883e72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_883e72: /* 883e72: mov esi, eax */
  esi = eax;
/* 883e74: lea edi, [ebp - 0x68] */
  edi = (uint32_t)(ebp + 0xffffff98u);
/* 883e77: mov ecx, 0x10 */
  ecx = 0x10u;
/* 883e7c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 883e7e: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 883e84: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x883e8au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 883e8a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 883e8c: mov ecx, ebx */
  ecx = ebx;
/* 883e8e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x883e94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883e94: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 883e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883e97: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 883e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883e9b: mov ecx, eax */
  ecx = eax;
/* 883e9d: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x883ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883ea0: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 883ea3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 883ea4: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 883ea7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 883ea8: mov ecx, eax */
  ecx = eax;
/* 883eaa: call dword ptr [0xcfab18] */
  esp -= 4; W32(esp, 0x883eb0u); SPILL(); f_4e10ff(); if (g_unwind) return; /* Core!?TransformBy@FSphere@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 883eb0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 883eb2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 883eb5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 883eb7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 883eba: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 883ebd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 883ec0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 883ec3: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 883ec6: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 883ec9: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 883ecc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 883ed0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x883ed6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 883ed6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 883ed9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 883eda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 883edb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 883ee2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 883ee3: mov esp, ebp */
  esp = ebp;
/* 883ee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 883ee6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_883ee9(void) {
  LOAD_REGS();
L_883ee9: /* 883ee9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 883eec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 883ef1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 883ef4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 883ef5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 883ef8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x883efdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_883efd(); return;
}

void f_883efd(void) {
  LOAD_REGS();
L_883efd: /* 883efd: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 883f03: push 0xa19410 */
  { uint32_t v = 0xa19410u; esp -= 4; W32(esp, v); }
/* 883f08: push 0xae6cc0 */
  { uint32_t v = 0xae6cc0u; esp -= 4; W32(esp, v); }
/* 883f0d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x883f0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883f0f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 883f12: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 883f15: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883f18: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 883f1b: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 883f21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883f24: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 883f26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883f27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883f29: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883f2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883f2b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883f2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883f2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883f31: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x883f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883f33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883f34: push 0xae6cc8 */
  { uint32_t v = 0xae6cc8u; esp -= 4; W32(esp, v); }
/* 883f39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x883f3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 883f3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 883f3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 883f42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x883f47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_883f47: guest_badaddr(0x883f47); return;
}

void f_883fb0(void) {
  LOAD_REGS();
L_883fb0: /* 883fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 883fb1: mov ebp, esp */
  ebp = esp;
/* 883fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 883fb5: push 0x9d5182 */
  { uint32_t v = 0x9d5182u; esp -= 4; W32(esp, v); }
/* 883fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 883fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 883fc8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 883fcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 883fcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883fcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 883fce: mov edi, ecx */
  edi = ecx;
/* 883fd0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 883fd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 883fd6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 883fdd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x883fe3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 883fe3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 883fe6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 883fe9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 883fec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 883fef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 883ff0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 883ff3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 883ff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 883ff7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 883ffc: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 883ffe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 883fff: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 884002: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884005: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 884008: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x88400eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 88400e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884011: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884014: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884017: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884018: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88401b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 88401e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88401f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884025: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 884029: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88402cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88402c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88402f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 884030: mov eax, edx */
  eax = edx;
/* 884032: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 884035: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 884038: jne 0x884050 */
  if (!zf) goto L_884050;
L_88403a: /* 88403a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88403d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88403e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 884040: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884043: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 884049: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88404a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x884050u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884050: /* 884050: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 884056: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884058: je 0x88408b */
  if (zf) goto L_88408b;
L_88405a: /* 88405a: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 88405f: mov ecx, esi */
  ecx = esi;
/* 884061: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x884067u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 884067: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884069: je 0x88408b */
  if (zf) goto L_88408b;
L_88406b: /* 88406b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 88406e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88406f: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 884075: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x88407bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 88407b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 88407e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88407f: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 884085: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x88408bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_88408b: /* 88408b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 88408e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 884091: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x884097u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 884097: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 88409a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88409e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8840a4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8840a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8840a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8840a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8840a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8840b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8840b1: mov esp, ebp */
  esp = ebp;
/* 8840b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8840b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8840b7(void) {
  LOAD_REGS();
L_8840b7: /* 8840b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8840ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8840bf: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8840c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8840c3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8840c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8840cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8840cb(); return;
}

void f_8840cb(void) {
  LOAD_REGS();
L_8840cb: /* 8840cb: push 0xa19468 */
  { uint32_t v = 0xa19468u; esp -= 4; W32(esp, v); }
/* 8840d0: push 0xae6d14 */
  { uint32_t v = 0xae6d14u; esp -= 4; W32(esp, v); }
/* 8840d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8840dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8840db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8840de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8840e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8840e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8840e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8840e7: guest_badaddr(0x8840e7); return;
}

void f_884140(void) {
  LOAD_REGS();
L_884140: /* 884140: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 884143: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 884149: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88414b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 88414e: ret  */
  esp += 4; SPILL(); return;
}

void f_884160(void) {
  LOAD_REGS();
L_884160: /* 884160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 884161: mov ebp, esp */
  ebp = esp;
/* 884163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 884165: push 0x9d51a0 */
  { uint32_t v = 0x9d51a0u; esp -= 4; W32(esp, v); }
/* 88416a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 884170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 884178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88417b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88417e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 884181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 884182: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 884183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884184: mov esi, ecx */
  esi = ecx;
/* 884186: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 884189: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88418c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88418d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 884190: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 884197: jne 0x8841ae */
  if (!zf) goto L_8841ae;
L_884199: /* 884199: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88419c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88419d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88419f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8841a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8841a3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8841a8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x8841aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8841ae: /* 8841ae: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8841b1: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 8841b7: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8841bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8841bf: je 0x8841ed */
  if (zf) goto L_8841ed;
L_8841c1: /* 8841c1: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 8841c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8841c6: je 0x8841ed */
  if (zf) goto L_8841ed;
L_8841c8: /* 8841c8: push 0xb81b88 */
  { uint32_t v = 0xb81b88u; esp -= 4; W32(esp, v); }
/* 8841cd: mov ecx, esi */
  ecx = esi;
/* 8841cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8841d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8841d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8841d7: je 0x8841ed */
  if (zf) goto L_8841ed;
L_8841d9: /* 8841d9: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 8841df: cmp eax, dword ptr [esi + 0x10c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8841e5: jne 0x8841ed */
  if (!zf) goto L_8841ed;
L_8841e7: /* 8841e7: mov dword ptr [edi], 1 */
  W32((uint32_t)(edi), 0x1u);
L_8841ed: /* 8841ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8841f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8841f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8841f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8841f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8841fa: mov esp, ebp */
  esp = ebp;
/* 8841fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8841fd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_884200(void) {
  LOAD_REGS();
L_884200: /* 884200: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 884203: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 884208: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 88420b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88420c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88420f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x884214u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_884214(); return;
}

void f_884214(void) {
  LOAD_REGS();
L_884214: /* 884214: push 0xa194dc */
  { uint32_t v = 0xa194dcu; esp -= 4; W32(esp, v); }
/* 884219: push 0xae68d0 */
  { uint32_t v = 0xae68d0u; esp -= 4; W32(esp, v); }
/* 88421e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x884224u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 884224: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 884229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88422b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x884230u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_884230: guest_badaddr(0x884230); return;
}

void f_884280(void) {
  LOAD_REGS();
L_884280: /* 884280: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884282: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 884286: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884289: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 884291: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884294: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884295: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884296: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884299: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 88429d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88429e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8842a3: mov edi, ecx */
  edi = ecx;
/* 8842a5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8842a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8842a9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8842acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8842ac: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8842af: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8842b0: mov eax, edx */
  eax = edx;
/* 8842b2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8842b5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8842b8: jne 0x8842d0 */
  if (!zf) goto L_8842d0;
L_8842ba: /* 8842ba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8842bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8842be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8842c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8842c3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8842c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8842ca: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8842d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8842d0: /* 8842d0: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 8842d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8842d8: je 0x88431e */
  if (zf) goto L_88431e;
L_8842da: /* 8842da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8842dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8842dd: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x8842e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8842e3: mov esi, dword ptr [edi + 0xec] */
  esi = R32((uint32_t)(edi + 0xecu));
/* 8842e9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8842eb: je 0x884310 */
  if (zf) goto L_884310;
L_8842ed: /* 8842ed: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 8842f2: mov ecx, esi */
  ecx = esi;
/* 8842f4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8842fau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8842fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8842fc: je 0x884310 */
  if (zf) goto L_884310;
L_8842fe: /* 8842fe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 884302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884303: mov ecx, esi */
  ecx = esi;
/* 884305: call 0x6c2f9a */
  esp -= 4; W32(esp, 0x88430au); SPILL(); f_6c2f9a(); if (g_unwind) return; RELOAD();
/* 88430a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88430b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88430c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88430d: ret 8 */
  esp += 12; SPILL(); return;
L_884310: /* 884310: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 884316: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884318: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x88431eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88431e: /* 88431e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88431f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884320: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 884321: ret 8 */
  esp += 12; SPILL(); return;
}

void f_884360(void) {
  LOAD_REGS();
L_884360: /* 884360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 884361: mov ebp, esp */
  ebp = esp;
/* 884363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 884365: push 0x9d51b0 */
  { uint32_t v = 0x9d51b0u; esp -= 4; W32(esp, v); }
/* 88436a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 884370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 884378: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88437b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88437c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88437d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88437e: mov edi, ecx */
  edi = ecx;
/* 884380: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884382: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 884385: mov esi, edx */
  esi = edx;
/* 884387: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88438e: je 0x88444c */
  if (zf) goto L_88444c;
L_884394: /* 884394: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884396: je 0x88444c */
  if (zf) goto L_88444c;
L_88439c: /* 88439c: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8843a1: mov ecx, esi */
  ecx = esi;
/* 8843a3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8843a9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8843a9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8843ab: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8843ad: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8843af: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8843b4: mov ecx, edi */
  ecx = edi;
/* 8843b6: mov esi, eax */
  esi = eax;
/* 8843b8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8843beu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8843be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8843c0: jne 0x8843c4 */
  if (!zf) goto L_8843c4;
L_8843c2: /* 8843c2: xor edi, edi */
  edi = 0;
L_8843c4: /* 8843c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8843c6: je 0x88444c */
  if (zf) goto L_88444c;
L_8843cc: /* 8843cc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8843ce: je 0x88444c */
  if (zf) goto L_88444c;
L_8843d0: /* 8843d0: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* 8843d6: cmp dword ptr [edi + 0x1e0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1e0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8843dc: jne 0x88444c */
  if (!zf) goto L_88444c;
L_8843de: /* 8843de: xor ecx, ecx */
  ecx = 0;
/* 8843e0: xor eax, eax */
  eax = 0;
L_8843e2: /* 8843e2: cmp ecx, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8843e8: jge 0x884436 */
  if ((sf == of)) goto L_884436;
L_8843ea: /* 8843ea: mov ebx, dword ptr [esi + 0x1dc] */
  ebx = R32((uint32_t)(esi + 0x1dcu));
/* 8843f0: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* 8843f6: mov ebx, dword ptr [ebx + eax + 0x34] */
  ebx = R32((uint32_t)(ebx + eax + 0x34u));
/* 8843fa: cmp ebx, dword ptr [edx + eax + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8843fe: jne 0x88444c */
  if (!zf) goto L_88444c;
L_884400: /* 884400: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 884401: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 884404: jmp 0x8843e2 */
  goto L_8843e2;
L_884436: /* 884436: mov eax, 1 */
  eax = 0x1u;
/* 88443b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88443e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 884445: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884446: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884447: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 884448: mov esp, ebp */
  esp = ebp;
/* 88444a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88444b: ret  */
  esp += 4; SPILL(); return;
L_88444c: /* 88444c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88444f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884451: xor eax, eax */
  eax = 0;
/* 884453: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88445a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88445b: mov esp, ebp */
  esp = ebp;
/* 88445d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88445e: ret  */
  esp += 4; SPILL(); return;
}

void f_884406(void) {
  LOAD_REGS();
L_884406: /* 884406: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 884409: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88440e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 884411: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884412: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 884415: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88441au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88441a(); return;
}

void f_88441a(void) {
  LOAD_REGS();
L_88441a: /* 88441a: push 0xa19518 */
  { uint32_t v = 0xa19518u; esp -= 4; W32(esp, v); }
/* 88441f: push 0xae6a2c */
  { uint32_t v = 0xae6a2cu; esp -= 4; W32(esp, v); }
/* 884424: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88442au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88442a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88442d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88442f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 884431: call 0x99caf8 */
  esp -= 4; W32(esp, 0x884436u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 884436: mov eax, 1 */
  eax = 0x1u;
/* 88443b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88443e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 884445: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884446: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884447: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 884448: mov esp, ebp */
  esp = ebp;
/* 88444a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88444b: ret  */
  esp += 4; SPILL(); return;
}

void f_8844a0(void) {
  LOAD_REGS();
L_8844a0: /* 8844a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8844a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8844a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8844a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8844a9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 8844b1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8844b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8844b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8844b6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8844b9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8844bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8844be: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8844c3: mov edi, ecx */
  edi = ecx;
/* 8844c5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8844c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8844c9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8844ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8844cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8844cf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8844d7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8844da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8844db: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8844df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8844e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8844e3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8844e6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8844eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8844ec: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8844efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8844ef: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8844f2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8844f3: mov eax, edx */
  eax = edx;
/* 8844f5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8844f8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8844fb: jne 0x884513 */
  if (!zf) goto L_884513;
L_8844fd: /* 8844fd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884500: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884501: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 884503: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884506: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88450c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88450d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x884513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884513: /* 884513: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 884517: cmp dword ptr [edi + 0xd0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xd0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88451d: je 0x8845da */
  if (zf) goto L_8845da;
L_884523: /* 884523: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884525: je 0x88459a */
  if (zf) goto L_88459a;
L_884527: /* 884527: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 88452c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x884532u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 884532: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884534: je 0x884596 */
  if (zf) goto L_884596;
L_884536: /* 884536: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 88453c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88453e: je 0x884596 */
  if (zf) goto L_884596;
L_884540: /* 884540: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 884542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884543: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x884549u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884549: cmp byte ptr [edi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88454d: jne 0x884570 */
  if (!zf) goto L_884570;
L_88454f: /* 88454f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884551: je 0x884570 */
  if (zf) goto L_884570;
L_884553: /* 884553: mov ecx, dword ptr [eax + 0x2f4] */
  ecx = R32((uint32_t)(eax + 0x2f4u));
/* 884559: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88455b: je 0x884570 */
  if (zf) goto L_884570;
L_88455d: /* 88455d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 884561: mov edx, dword ptr [edi + 0xd0] */
  edx = R32((uint32_t)(edi + 0xd0u));
/* 884567: call 0x884360 */
  esp -= 4; W32(esp, 0x88456cu); SPILL(); f_884360(); if (g_unwind) return; RELOAD();
/* 88456c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88456e: je 0x8845da */
  if (zf) goto L_8845da;
L_884570: /* 884570: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 884574: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884576: je 0x884596 */
  if (zf) goto L_884596;
L_884578: /* 884578: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 88457e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884580: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884581: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x884587u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884587: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88458b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88458d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88458e: mov ecx, eax */
  ecx = eax;
/* 884590: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x884596u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884596: /* 884596: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
L_88459a: /* 88459a: mov esi, dword ptr [edi + 0x80] */
  esi = R32((uint32_t)(edi + 0x80u));
/* 8845a0: mov dword ptr [edi + 0xd0], ecx */
  W32((uint32_t)(edi + 0xd0u), ecx);
/* 8845a6: or esi, 0x80000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8845ac: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 8845b1: mov ecx, edi */
  ecx = edi;
/* 8845b3: mov dword ptr [edi + 0x80], esi */
  W32((uint32_t)(edi + 0x80u), esi);
/* 8845b9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8845bfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8845bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8845c1: je 0x8845da */
  if (zf) goto L_8845da;
L_8845c3: /* 8845c3: mov eax, dword ptr [edi + 0x480] */
  eax = R32((uint32_t)(edi + 0x480u));
/* 8845c9: cmp eax, 0x3f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8845ce: je 0x8845da */
  if (zf) goto L_8845da;
L_8845d0: /* 8845d0: mov edx, eax */
  edx = eax;
/* 8845d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8845d3: mov ecx, edi */
  ecx = edi;
/* 8845d5: call 0x6c27b1 */
  esp -= 4; W32(esp, 0x8845dau); SPILL(); f_6c27b1(); if (g_unwind) return; RELOAD();
L_8845da: /* 8845da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8845db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8845dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8845dd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_884630(void) {
  LOAD_REGS();
L_884630: /* 884630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884631: mov esi, ecx */
  esi = ecx;
/* 884633: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 884639: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88463b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88463c: je 0x8846e7 */
  if (zf) goto L_8846e7;
L_884642: /* 884642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884643: mov ecx, esp */
  ecx = esp;
/* 884645: push 0x15e */
  { uint32_t v = 0x15eu; esp -= 4; W32(esp, v); }
/* 88464a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x884650u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 884650: mov ecx, esi */
  ecx = esi;
/* 884652: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x884658u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 884658: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88465a: je 0x8846e7 */
  if (zf) goto L_8846e7;
L_884660: /* 884660: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 884664: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 884668: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 88466e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88466f: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 884675: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 884677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88467b: mov edx, esp */
  edx = esp;
/* 88467d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 88467f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 884682: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 884685: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 884688: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88468b: mov ecx, esi */
  ecx = esi;
/* 88468d: call 0x6cc4e6 */
  esp -= 4; W32(esp, 0x884692u); SPILL(); f_6cc4e6(); if (g_unwind) return; RELOAD();
/* 884692: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884694: je 0x8846e7 */
  if (zf) goto L_8846e7;
L_884696: /* 884696: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 88469a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88469e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88469f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8846a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8846a6: mov eax, esp */
  eax = esp;
/* 8846a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8846aa: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8846ae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8846b1: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 8846b7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8846ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8846bd: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8846c3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8846c5: mov eax, esp */
  eax = esp;
/* 8846c7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8846c9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8846cc: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8846cf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8846d2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8846d6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8846d9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8846dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8846de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8846df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8846e0: mov ecx, esi */
  ecx = esi;
/* 8846e2: call 0x6c9b60 */
  esp -= 4; W32(esp, 0x8846e7u); SPILL(); f_6c9b60(); if (g_unwind) return; RELOAD();
L_8846e7: /* 8846e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8846e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8846e9: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_884720(void) {
  LOAD_REGS();
L_884720: /* 884720: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884723: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 884724: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 884725: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884726: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 88472a: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 884730: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 884732: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 884735: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884736: mov edi, ecx */
  edi = ecx;
/* 884738: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88473b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 88473f: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 884744: mov ecx, esi */
  ecx = esi;
/* 884746: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x88474cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 88474c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88474e: je 0x88476b */
  if (zf) goto L_88476b;
L_884750: /* 884750: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 884756: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884758: je 0x88476b */
  if (zf) goto L_88476b;
L_88475a: /* 88475a: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88475f: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 884761: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 884764: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 884767: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_88476b: /* 88476b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88476d: mov ecx, edi */
  ecx = edi;
/* 88476f: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x884775u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884775: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 884779: mov edx, dword ptr [edi + 0x548] */
  edx = R32((uint32_t)(edi + 0x548u));
/* 88477f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884781: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 884787: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 884789: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88478c: mov eax, esp */
  eax = esp;
/* 88478e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 884790: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 884793: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 884796: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 884799: mov ecx, edi */
  ecx = edi;
/* 88479b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 88479e: call 0x6cc4e6 */
  esp -= 4; W32(esp, 0x8847a3u); SPILL(); f_6cc4e6(); if (g_unwind) return; RELOAD();
/* 8847a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8847a5: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8847a9: jne 0x8847af */
  if (!zf) goto L_8847af;
L_8847ab: /* 8847ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8847ad: jne 0x884810 */
  if (!zf) goto L_884810;
L_8847af: /* 8847af: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8847b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8847b4: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8847ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8847bd: mov eax, esp */
  eax = esp;
/* 8847bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8847c2: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8847c6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8847ca: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 8847ce: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8847d0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8847d4: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 8847d8: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8847dc: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8847e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8847e5: mov edx, esp */
  edx = esp;
/* 8847e7: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8847eb: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8847ef: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8847f2: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8847f6: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8847fa: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8847fc: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 8847ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884800: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 884803: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 884807: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884809: mov ecx, edi */
  ecx = edi;
/* 88480b: call 0x6c4750 */
  esp -= 4; W32(esp, 0x884810u); SPILL(); f_6c4750(); if (g_unwind) return; RELOAD();
L_884810: /* 884810: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884812: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 884813: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 884814: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884817: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_884860(void) {
  LOAD_REGS();
L_884860: /* 884860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 884862: push 0x9d51c9 */
  { uint32_t v = 0x9d51c9u; esp -= 4; W32(esp, v); }
/* 884867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88486d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88486e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 884875: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884879: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88487a: mov edi, ecx */
  edi = ecx;
/* 88487c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 884880: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x884886u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 884886: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 88488a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88488d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884890: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884893: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884894: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884897: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 88489b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88489c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8848a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8848a2: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8848aa: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8848adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8848ad: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8848b0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8848b3: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 8848bb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8848be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8848bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8848c2: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8848c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8848c7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8848cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8848cd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8848d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8848d0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8848d3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8848d4: mov eax, edx */
  eax = edx;
/* 8848d6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8848d9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8848dc: jne 0x8848f4 */
  if (!zf) goto L_8848f4;
L_8848de: /* 8848de: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8848e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8848e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8848e4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8848e7: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8848ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8848ee: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8848f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8848f4: /* 8848f4: push 0xae6afc */
  { uint32_t v = 0xae6afcu; esp -= 4; W32(esp, v); }
/* 8848f9: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x8848ffu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 8848ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884900: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x884906u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 884906: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884909: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88490b: je 0x884919 */
  if (zf) goto L_884919;
L_88490d: /* 88490d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 884911: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 884917: jmp 0x88497c */
  goto L_88497c;
L_884919: /* 884919: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 88491f: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 884922: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 884925: xor esi, esi */
  esi = 0;
/* 884927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884929: je 0x884976 */
  if (zf) goto L_884976;
L_88492b: /* 88492b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88492f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884930: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884933: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 884937: mov ecx, esp */
  ecx = esp;
/* 884939: mov dword ptr [esp + 0x38], esp */
  W32((uint32_t)(esp + 0x38u), esp);
/* 88493d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88493e: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x884944u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 884944: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 88494a: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 88494d: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 884950: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884952: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x884958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884958: mov edi, dword ptr [edi + 0xb4] */
  edi = R32((uint32_t)(edi + 0xb4u));
/* 88495e: mov esi, eax */
  esi = eax;
/* 884960: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 884963: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 884965: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 884969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88496a: lea ecx, [eax + 0x48c] */
  ecx = (uint32_t)(eax + 0x48cu);
/* 884970: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x884976u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
L_884976: /* 884976: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 88497a: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_88497c: /* 88497c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 884980: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 884988: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x88498eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 88498e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 884992: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884993: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88499a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88499b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88499e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_884a10(void) {
  LOAD_REGS();
L_884a10: /* 884a10: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884a13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 884a14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 884a15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884a16: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 884a1a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884a1d: xor ebx, ebx */
  ebx = 0;
/* 884a1f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 884a23: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884a26: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884a27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884a28: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884a2b: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 884a2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884a30: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884a35: mov edi, ecx */
  edi = ecx;
/* 884a37: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884a3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884a3b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884a3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884a3e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884a41: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 884a46: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884a49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884a4a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 884a4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884a4f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884a52: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884a55: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884a5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884a5b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884a5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884a5e: mov ecx, dword ptr [edi + 0x2cc] */
  ecx = R32((uint32_t)(edi + 0x2ccu));
/* 884a64: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884a67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 884a6b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884a6e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884a71: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884a72: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884a75: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 884a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884a7a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884a7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884a80: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884a83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884a83: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884a86: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 884a8a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884a8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884a8e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 884a92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884a93: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884a96: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884a99: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884a9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884a9f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884aa2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884aa2: mov ecx, dword ptr [edi + 0x2d0] */
  ecx = R32((uint32_t)(edi + 0x2d0u));
/* 884aa8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884aab: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 884aaf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884ab2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884ab5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884ab6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884ab9: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 884abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884abe: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884ac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884ac4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884ac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884ac7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884aca: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 884ad2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884ad5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884ad6: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 884ada: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884adb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884ade: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884ae1: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884ae6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884ae7: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884aeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884aea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884aed: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 884af1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884af4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884af5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884af8: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 884afc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884b01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884b02: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884b05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884b06: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884b09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884b09: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 884b0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 884b0d: mov eax, edx */
  eax = edx;
/* 884b0f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 884b12: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 884b15: jne 0x884b2c */
  if (!zf) goto L_884b2c;
L_884b17: /* 884b17: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884b1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884b1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 884b1c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884b1f: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 884b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884b26: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x884b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884b2c: /* 884b2c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 884b30: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b32: je 0x884d8e */
  if (zf) goto L_884d8e;
L_884b38: /* 884b38: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 884b3e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b40: je 0x884b59 */
  if (zf) goto L_884b59;
L_884b42: /* 884b42: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b44: je 0x884b4b */
  if (zf) goto L_884b4b;
L_884b46: /* 884b46: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b49: jne 0x884b59 */
  if (!zf) goto L_884b59;
L_884b4b: /* 884b4b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 884b4f: fmul dword ptr [eax + 0x4d4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4d4u)));
/* 884b55: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_884b59: /* 884b59: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 884b5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b61: je 0x884bbb */
  if (zf) goto L_884bbb;
L_884b63: /* 884b63: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 884b69: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b6b: je 0x884bbb */
  if (zf) goto L_884bbb;
L_884b6d: /* 884b6d: cmp dword ptr [eax + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884b70: jne 0x884bbb */
  if (!zf) goto L_884bbb;
L_884b72: /* 884b72: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 884b76: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 884b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 884b7e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 884b81: jnp 0x884b89 */
  if (!pf) goto L_884b89;
L_884b83: /* 884b83: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 884b87: jmp 0x884b91 */
  goto L_884b91;
L_884b89: /* 884b89: mov edx, dword ptr [0xcfab64] */
  edx = R32((uint32_t)(0xcfab64u));
/* 884b8f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
L_884b91: /* 884b91: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 884b95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884b96: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 884b9a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 884b9e: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 884ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884ba3: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 884ba7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884ba8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 884bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884bad: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 884bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884bb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884bb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884bb4: mov ecx, edi */
  ecx = edi;
/* 884bb6: call 0x6ca231 */
  esp -= 4; W32(esp, 0x884bbbu); SPILL(); f_6ca231(); if (g_unwind) return; RELOAD();
L_884bbb: /* 884bbb: mov ecx, edi */
  ecx = edi;
/* 884bbd: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x884bc3u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 884bc3: movzx ecx, byte ptr [esp + 0x1c] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x1cu)));
/* 884bc8: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 884bcb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 884bcf: lea ecx, [eax + edx*2] */
  ecx = (uint32_t)(eax + edx*2);
/* 884bd2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 884bd6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 884bda: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 884bde: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 884be4: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 884be8: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 884bee: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 884bf0: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 884bf4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 884bf8: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 884bfc: jne 0x884cab */
  if (!zf) goto L_884cab;
L_884c02: /* 884c02: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 884c08: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 884c0b: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 884c0e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884c10: je 0x884d8e */
  if (zf) goto L_884d8e;
L_884c16: /* 884c16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 884c19: xor ebp, ebp */
  ebp = 0;
/* 884c1b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 884c1d: jle 0x884d8e */
  if ((zf || sf != of)) goto L_884d8e;
L_884c23: /* 884c23: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 884c26: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 884c29: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 884c2c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884c2e: je 0x884c99 */
  if (zf) goto L_884c99;
L_884c30: /* 884c30: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 884c36: cmp edx, dword ptr [edi + 0xb4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884c3c: jne 0x884c99 */
  if (!zf) goto L_884c99;
L_884c3e: /* 884c3e: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 884c42: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 884c48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 884c4a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 884c4d: jnp 0x884c55 */
  if (!pf) goto L_884c55;
L_884c4f: /* 884c4f: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 884c53: jmp 0x884c5d */
  goto L_884c5d;
L_884c55: /* 884c55: mov edx, dword ptr [0xcfab64] */
  edx = R32((uint32_t)(0xcfab64u));
/* 884c5b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
L_884c5d: /* 884c5d: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 884c61: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 884c65: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 884c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884c6a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 884c6e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884c71: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884c74: mov eax, esp */
  eax = esp;
/* 884c76: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 884c78: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 884c7c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 884c7f: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 884c83: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 884c86: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 884c8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884c8b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 884c8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884c91: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x884c97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884c97: xor ebx, ebx */
  ebx = 0;
L_884c99: /* 884c99: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 884c9c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 884c9d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 884c9f: jl 0x884c23 */
  if ((sf != of)) goto L_884c23;
L_884ca1: /* 884ca1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884ca2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884ca3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 884ca4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 884ca5: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884ca8: ret 8 */
  esp += 12; SPILL(); return;
L_884cab: /* 884cab: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 884cad: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 884cb1: je 0x884cf8 */
  if (zf) goto L_884cf8;
L_884cb3: /* 884cb3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 884cb5: mov ecx, edi */
  ecx = edi;
/* 884cb7: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x884cbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884cbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884cbf: je 0x884cc4 */
  if (zf) goto L_884cc4;
L_884cc1: /* 884cc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884cc2: jmp 0x884cdb */
  goto L_884cdb;
L_884cc4: /* 884cc4: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 884cc7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884cc9: je 0x884cf8 */
  if (zf) goto L_884cf8;
L_884ccb: /* 884ccb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 884ccd: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x884cd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884cd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884cd5: je 0x884cf8 */
  if (zf) goto L_884cf8;
L_884cd7: /* 884cd7: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 884cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_884cdb: /* 884cdb: call 0x6cacdb */
  esp -= 4; W32(esp, 0x884ce0u); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 884ce0: mov esi, eax */
  esi = eax;
/* 884ce2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884ce5: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884ce7: je 0x884cf8 */
  if (zf) goto L_884cf8;
L_884ce9: /* 884ce9: mov ecx, esi */
  ecx = esi;
/* 884ceb: call 0x6c1195 */
  esp -= 4; W32(esp, 0x884cf0u); SPILL(); f_6c1195(); if (g_unwind) return; RELOAD();
/* 884cf0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884cf2: jne 0x884cf8 */
  if (!zf) goto L_884cf8;
L_884cf4: /* 884cf4: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
L_884cf8: /* 884cf8: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 884cfe: mov esi, dword ptr [edx + 0x514] */
  esi = R32((uint32_t)(edx + 0x514u));
/* 884d04: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884d06: je 0x884d8e */
  if (zf) goto L_884d8e;
L_884d0c: /* 884d0c: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 884d10: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_884d14: /* 884d14: test byte ptr [esi + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 884d1b: je 0x884d84 */
  if (zf) goto L_884d84;
L_884d1d: /* 884d1d: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 884d23: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884d27: jne 0x884d2d */
  if (!zf) goto L_884d2d;
L_884d29: /* 884d29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884d2b: jne 0x884d84 */
  if (!zf) goto L_884d84;
L_884d2d: /* 884d2d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 884d31: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 884d37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 884d39: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 884d3c: jnp 0x884d48 */
  if (!pf) goto L_884d48;
L_884d3e: /* 884d3e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 884d42: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 884d46: jmp 0x884d54 */
  goto L_884d54;
L_884d48: /* 884d48: mov ecx, dword ptr [0xcfab64] */
  ecx = R32((uint32_t)(0xcfab64u));
/* 884d4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884d50: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_884d54: /* 884d54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 884d58: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 884d5c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 884d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884d5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884d60: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 884d64: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884d67: mov ecx, esp */
  ecx = esp;
/* 884d69: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 884d6b: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 884d6f: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 884d72: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 884d75: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 884d79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884d7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 884d7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884d7c: mov ecx, esi */
  ecx = esi;
/* 884d7e: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x884d84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884d84: /* 884d84: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 884d8a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 884d8c: jne 0x884d14 */
  if (!zf) goto L_884d14;
L_884d8e: /* 884d8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 884d8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 884d90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 884d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 884d92: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 884d95: ret 8 */
  esp += 12; SPILL(); return;
}

void f_884e90(void) {
  LOAD_REGS();
L_884e90: /* 884e90: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 884e95: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 884e98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 884e99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 884e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884e9b: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 884ea2: xor ebx, ebx */
  ebx = 0;
/* 884ea4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 884ea6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884ea9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884eac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 884ead: mov edi, ecx */
  edi = ecx;
/* 884eaf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884eb0: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 884eb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884eb5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884eb8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884ebb: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884ec1: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884ec4: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 884eca: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 884ecc: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884ece: je 0x884edd */
  if (zf) goto L_884edd;
L_884ed0: /* 884ed0: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 884ed5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 884ed7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884eda: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x884eddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884edd: /* 884edd: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 884ee3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 884ee5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884ee7: je 0x884eef */
  if (zf) goto L_884eef;
L_884ee9: /* 884ee9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 884eed: jmp 0x884ef7 */
  goto L_884ef7;
L_884eef: /* 884eef: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 884ef3: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_884ef7: /* 884ef7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 884ef9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884efc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884eff: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884f02: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884f03: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884f06: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 884f0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884f0b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884f11: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884f14: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 884f1a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 884f1c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884f1e: je 0x884f2d */
  if (zf) goto L_884f2d;
L_884f20: /* 884f20: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 884f25: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 884f27: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884f2a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x884f2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_884f2d: /* 884f2d: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 884f33: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 884f35: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 884f37: jne 0x884f3d */
  if (!zf) goto L_884f3d;
L_884f39: /* 884f39: lea ebp, [esp + 0x44] */
  ebp = (uint32_t)(esp + 0x44u);
L_884f3d: /* 884f3d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884f40: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884f43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884f46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884f47: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884f4a: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 884f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884f4f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884f54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884f55: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884f58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884f58: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 884f5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 884f60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 884f63: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 884f66: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 884f6a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884f6d: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 884f71: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884f74: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 884f78: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884f7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884f7c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884f7f: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 884f83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884f84: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884f89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884f8a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884f8d: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 884f93: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884f96: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 884f98: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 884f9b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 884f9f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884fa2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884fa5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884fa6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884fa9: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 884fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 884fae: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884fb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884fb4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884fb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884fb7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884fba: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 884fc2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 884fca: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 884fd2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884fd5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 884fd6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 884fda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 884fdb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884fde: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 884fe1: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 884fe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 884fe7: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x884feau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 884fea: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 884ff0: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 884ff4: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 884ff6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 884ff9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 884ffc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 884fff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885000: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885003: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 885007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885008: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88500d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88500e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885011: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 885017: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 885019: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88501b: je 0x88502a */
  if (zf) goto L_88502a;
L_88501d: /* 88501d: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 885022: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 885024: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 885026: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885027: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x88502au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88502a: /* 88502a: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 885030: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 885032: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885034: je 0x88503c */
  if (zf) goto L_88503c;
L_885036: /* 885036: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 88503a: jmp 0x885044 */
  goto L_885044;
L_88503c: /* 88503c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 885040: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_885044: /* 885044: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 885047: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 885048: mov eax, edx */
  eax = edx;
/* 88504a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88504d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 885050: jne 0x885066 */
  if (!zf) goto L_885066;
L_885052: /* 885052: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885055: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885056: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885057: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88505a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88505f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885060: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x885066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_885066: /* 885066: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 88506a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88506e: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 885070: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 885072: and esi, 0x39 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 885075: add esi, 0x86 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x86u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88507b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88507d: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 885081: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 885085: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 88508d: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 885095: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 88509d: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 8850a5: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 8850ad: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 8850b5: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
/* 8850b9: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 8850c4: mov dword ptr [esp + 0x84], 0xffffffff */
  W32((uint32_t)(esp + 0x84u), 0xffffffffu);
/* 8850cf: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* 8850d6: je 0x8850de */
  if (zf) goto L_8850de;
L_8850d8: /* 8850d8: or esi, 0x1000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8850de: /* 8850de: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 8850e3: mov ecx, edi */
  ecx = edi;
/* 8850e5: mov ebx, edi */
  ebx = edi;
/* 8850e7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8850edu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8850ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8850ef: je 0x8850fd */
  if (zf) goto L_8850fd;
L_8850f1: /* 8850f1: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 8850f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8850f9: je 0x8850fd */
  if (zf) goto L_8850fd;
L_8850fb: /* 8850fb: mov ebx, eax */
  ebx = eax;
L_8850fd: /* 8850fd: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 885103: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 885107: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 885109: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88510c: mov eax, esp */
  eax = esp;
/* 88510e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 885110: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 885114: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 885117: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 88511b: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 88511e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88511f: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 885123: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885124: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 885128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885129: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88512a: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 88512e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88512f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x885135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885135: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 885139: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 885140: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 885144: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 885146: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 88514a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88514c: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 885150: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 885153: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 885157: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88515a: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 88515e: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 885161: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 885165: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 885168: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88516c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88516e: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 885172: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 885175: je 0x885180 */
  if (zf) goto L_885180;
L_885177: /* 885177: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 88517e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_885180: /* 885180: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885181: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885182: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885183: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885184: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885187: ret 8 */
  esp += 12; SPILL(); return;
}

void f_885250(void) {
  LOAD_REGS();
L_885250: /* 885250: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 885256: mov ecx, dword ptr [0xce84ec] */
  ecx = R32((uint32_t)(0xce84ecu));
/* 88525c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88525e: push 0x9d51eb */
  { uint32_t v = 0x9d51ebu; esp -= 4; W32(esp, v); }
/* 885263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885264: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 885269: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 885270: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 885273: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885279: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88527a: mov ebx, dword ptr [esp + 0xa0] */
  ebx = R32((uint32_t)(esp + 0xa0u));
/* 885281: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 885282: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 885285: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 88528b: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 885292: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885293: mov ebp, dword ptr [esp + 0xb0] */
  ebp = R32((uint32_t)(esp + 0xb0u));
/* 88529a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88529b: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 88529d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8852a3u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8852a3: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 8852a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8852aa: call dword ptr [esi + 0x88] */
  { uint32_t t = R32((uint32_t)(esi + 0x88u)); esp -= 4; W32(esp, 0x8852b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8852b0: mov esi, eax */
  esi = eax;
/* 8852b2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8852b4: je 0x88556a */
  if (zf) goto L_88556a;
L_8852ba: /* 8852ba: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 8852c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8852c2: mov ecx, esi */
  ecx = esi;
/* 8852c4: call dword ptr [0xcfab80] */
  esp -= 4; W32(esp, 0x8852cau); SPILL(); f_4e3ffd(); if (g_unwind) return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */ RELOAD();
/* 8852ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8852cc: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 8852d0: je 0x88556a */
  if (zf) goto L_88556a;
L_8852d6: /* 8852d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8852d7: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* 8852de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8852df: lea ecx, [ebx + 0x3ed8] */
  ecx = (uint32_t)(ebx + 0x3ed8u);
/* 8852e5: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x8852eau); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 8852ea: mov edi, eax */
  edi = eax;
/* 8852ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8852ee: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8852f2: jne 0x88532f */
  if (!zf) goto L_88532f;
L_8852f4: /* 8852f4: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* 8852fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8852fd: je 0x885569 */
  if (zf) goto L_885569;
L_885303: /* 885303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 885305: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885307: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 885309: mov ecx, ebx */
  ecx = ebx;
/* 88530b: call 0x6c74cd */
  esp -= 4; W32(esp, 0x885310u); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 885310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885312: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 885316: je 0x885569 */
  if (zf) goto L_885569;
L_88531c: /* 88531c: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 885323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885324: mov ecx, eax */
  ecx = eax;
/* 885326: call 0x6c24eb */
  esp -= 4; W32(esp, 0x88532bu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
/* 88532b: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_88532f: /* 88532f: cmp dword ptr [edi + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885333: jne 0x88534b */
  if (!zf) goto L_88534b;
L_885335: /* 885335: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* 88533c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88533e: je 0x885569 */
  if (zf) goto L_885569;
L_885344: /* 885344: mov ecx, edi */
  ecx = edi;
/* 885346: call 0x6c8927 */
  esp -= 4; W32(esp, 0x88534bu); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
L_88534b: /* 88534b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88534d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88534e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 885352: call 0x6c6780 */
  esp -= 4; W32(esp, 0x885357u); SPILL(); f_6c6780(); if (g_unwind) return; RELOAD();
/* 885357: mov ecx, esi */
  ecx = esi;
/* 885359: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 885364: call dword ptr [0xcfab7c] */
  esp -= 4; W32(esp, 0x88536au); SPILL(); f_4e3382(); if (g_unwind) return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */ RELOAD();
/* 88536a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 88536e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88536f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 885372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885373: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 885377: call dword ptr [0xcfab78] */
  esp -= 4; W32(esp, 0x88537du); SPILL(); f_4e33dc(); if (g_unwind) return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */ RELOAD();
/* 88537d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88537f: je 0x885424 */
  if (zf) goto L_885424;
L_885385: /* 885385: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 88538c: movzx edx, word ptr [ecx + 0x8a] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x8au)));
/* 885393: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 885397: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88539b: mov edi, dword ptr [esp + 0xb4] */
  edi = R32((uint32_t)(esp + 0xb4u));
/* 8853a2: xor eax, eax */
  eax = 0;
/* 8853a4: mov ebx, ecx */
  ebx = ecx;
/* 8853a6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8853a9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8853ac: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8853ae: mov ecx, ebx */
  ecx = ebx;
/* 8853b0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8853b2: mov eax, dword ptr [esp + 0xb0] */
  eax = R32((uint32_t)(esp + 0xb0u));
/* 8853b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8853ba: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8853be: call 0x6c52d6 */
  esp -= 4; W32(esp, 0x8853c3u); SPILL(); f_6c52d6(); if (g_unwind) return; RELOAD();
/* 8853c3: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8853c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8853c9: je 0x88541d */
  if (zf) goto L_88541d;
L_8853cb: /* 8853cb: jmp 0x8853d0 */
  goto L_8853d0;
L_8853d0: /* 8853d0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 8853d3: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8853d9: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8853df: jne 0x88541d */
  if (!zf) goto L_88541d;
L_8853e1: /* 8853e1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8853e4: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8853e7: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8853ee: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 8853f1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8853f3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8853f6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8853f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8853f8: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8853fb: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 885401: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885402: call dword ptr [edx + edi*4] */
  { uint32_t t = R32((uint32_t)(edx + edi*4)); esp -= 4; W32(esp, 0x885405u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885405: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 885408: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88540c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 885410: call 0x6c39bd */
  esp -= 4; W32(esp, 0x885415u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 885415: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 885419: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88541b: jne 0x8853d0 */
  if (!zf) goto L_8853d0;
L_88541d: /* 88541d: mov ebx, dword ptr [esp + 0xac] */
  ebx = R32((uint32_t)(esp + 0xacu));
L_885424: /* 885424: mov eax, dword ptr [esp + 0xb0] */
  eax = R32((uint32_t)(esp + 0xb0u));
/* 88542b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88542d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 885431: je 0x88543c */
  if (zf) goto L_88543c;
L_885433: /* 885433: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 885436: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 88543a: jmp 0x885444 */
  goto L_885444;
L_88543c: /* 88543c: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_885444: /* 885444: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 885448: call 0x6c39bd */
  esp -= 4; W32(esp, 0x88544du); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 88544d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 885451: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885453: je 0x8854ff */
  if (zf) goto L_8854ff;
L_885459: /* 885459: mov ebp, dword ptr [0xcfab74] */
  ebp = R32((uint32_t)(0xcfab74u));
/* 88545f: nop  */
L_885460: /* 885460: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 885463: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 885469: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88546f: jne 0x8854ff */
  if (!zf) goto L_8854ff;
L_885475: /* 885475: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 88547b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88547d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88547e: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x885481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885481: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885484: je 0x8854e3 */
  if (zf) goto L_8854e3;
L_885486: /* 885486: mov ecx, edi */
  ecx = edi;
/* 885488: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x88548eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 88548e: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885498: jne 0x8854c0 */
  if (!zf) goto L_8854c0;
L_88549a: /* 88549a: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8854a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8854a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8854a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8854a6: mov ecx, edi */
  ecx = edi;
/* 8854a8: call dword ptr [0xcfab70] */
  esp -= 4; W32(esp, 0x8854aeu); SPILL(); f_4e1c9e(); if (g_unwind) return; /* Core!?Matches@UProperty@@QBEHPBX0H@Z */ RELOAD();
/* 8854ae: mov esi, eax */
  esi = eax;
/* 8854b0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 8854b2: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 8854b4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8854b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8854b6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8854ba: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8854bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8854bc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8854be: je 0x8854e3 */
  if (zf) goto L_8854e3;
L_8854c0: /* 8854c0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8854c3: mov esi, dword ptr [esp + 0xb4] */
  esi = R32((uint32_t)(esp + 0xb4u));
/* 8854ca: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 8854d0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8854d2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8854d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8854d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8854d6: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8854da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8854db: mov ecx, edi */
  ecx = edi;
/* 8854dd: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8854e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8854e3: /* 8854e3: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8854e6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8854ea: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8854ee: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8854f3u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8854f3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8854f7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8854f9: jne 0x885460 */
  if (!zf) goto L_885460;
L_8854ff: /* 8854ff: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 885506: mov al, byte ptr [edx + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x80u))) & 0xffu);
/* 88550c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 88550e: jns 0x885518 */
  if (!sf) goto L_885518;
L_885510: /* 885510: mov byte ptr [esp + 0x96], 1 */
  W8((uint32_t)(esp + 0x96u), 0x1u);
L_885518: /* 885518: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88551c: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x885522u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 885522: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885524: jne 0x885538 */
  if (!zf) goto L_885538;
L_885526: /* 885526: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88552a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88552c: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 885530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885531: call 0x6c76cb */
  esp -= 4; W32(esp, 0x885536u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 885536: jmp 0x885554 */
  goto L_885554;
L_885538: /* 885538: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 88553e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 885540: push 0xae6be4 */
  { uint32_t v = 0xae6be4u; esp -= 4; W32(esp, v); }
/* 885545: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 88554a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88554b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x885551u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 885551: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_885554: /* 885554: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 885558: mov dword ptr [esp + 0xa0], 0xffffffff */
  W32((uint32_t)(esp + 0xa0u), 0xffffffffu);
/* 885563: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x885569u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
L_885569: /* 885569: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_88556a: /* 88556a: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 885571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885572: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885573: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885574: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88557b: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885581: ret  */
  esp += 4; SPILL(); return;
}

void f_8853cd(void) {
  LOAD_REGS();
L_8853cd: /* 8853cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8853d0: /* 8853d0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 8853d3: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8853d9: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8853df: jne 0x88541d */
  if (!zf) goto L_88541d;
L_8853e1: /* 8853e1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8853e4: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8853e7: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8853ee: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 8853f1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8853f3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8853f6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8853f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8853f8: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8853fb: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 885401: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885402: call dword ptr [edx + edi*4] */
  { uint32_t t = R32((uint32_t)(edx + edi*4)); esp -= 4; W32(esp, 0x885405u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885405: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 885408: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88540c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 885410: call 0x6c39bd */
  esp -= 4; W32(esp, 0x885415u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 885415: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 885419: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88541b: jne 0x8853d0 */
  if (!zf) goto L_8853d0;
L_88541d: /* 88541d: mov ebx, dword ptr [esp + 0xac] */
  ebx = R32((uint32_t)(esp + 0xacu));
/* 885424: mov eax, dword ptr [esp + 0xb0] */
  eax = R32((uint32_t)(esp + 0xb0u));
/* 88542b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88542d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 885431: je 0x88543c */
  if (zf) goto L_88543c;
L_885433: /* 885433: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 885436: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 88543a: jmp 0x885444 */
  goto L_885444;
L_88543c: /* 88543c: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_885444: /* 885444: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 885448: call 0x6c39bd */
  esp -= 4; W32(esp, 0x88544du); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 88544d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 885451: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885453: je 0x8854ff */
  if (zf) goto L_8854ff;
L_885459: /* 885459: mov ebp, dword ptr [0xcfab74] */
  ebp = R32((uint32_t)(0xcfab74u));
/* 88545f: nop  */
L_885460: /* 885460: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 885463: and edx, 0x480 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 885469: cmp edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88546f: jne 0x8854ff */
  if (!zf) goto L_8854ff;
L_885475: /* 885475: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 88547b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88547d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88547e: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x885481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885481: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885484: je 0x8854e3 */
  if (zf) goto L_8854e3;
L_885486: /* 885486: mov ecx, edi */
  ecx = edi;
/* 885488: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x88548eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 88548e: test dword ptr [eax + 0x498], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885498: jne 0x8854c0 */
  if (!zf) goto L_8854c0;
L_88549a: /* 88549a: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8854a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8854a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8854a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8854a6: mov ecx, edi */
  ecx = edi;
/* 8854a8: call dword ptr [0xcfab70] */
  esp -= 4; W32(esp, 0x8854aeu); SPILL(); f_4e1c9e(); if (g_unwind) return; /* Core!?Matches@UProperty@@QBEHPBX0H@Z */ RELOAD();
/* 8854ae: mov esi, eax */
  esi = eax;
/* 8854b0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 8854b2: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 8854b4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8854b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8854b6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8854ba: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8854bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8854bc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8854be: je 0x8854e3 */
  if (zf) goto L_8854e3;
L_8854c0: /* 8854c0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 8854c3: mov esi, dword ptr [esp + 0xb4] */
  esi = R32((uint32_t)(esp + 0xb4u));
/* 8854ca: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 8854d0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8854d2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8854d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8854d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8854d6: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8854da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8854db: mov ecx, edi */
  ecx = edi;
/* 8854dd: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8854e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8854e3: /* 8854e3: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8854e6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8854ea: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8854ee: call 0x6c39bd */
  esp -= 4; W32(esp, 0x8854f3u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 8854f3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8854f7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8854f9: jne 0x885460 */
  if (!zf) goto L_885460;
L_8854ff: /* 8854ff: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 885506: mov al, byte ptr [edx + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x80u))) & 0xffu);
/* 88550c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 88550e: jns 0x885518 */
  if (!sf) goto L_885518;
L_885510: /* 885510: mov byte ptr [esp + 0x96], 1 */
  W8((uint32_t)(esp + 0x96u), 0x1u);
L_885518: /* 885518: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88551c: call dword ptr [0xcfab6c] */
  esp -= 4; W32(esp, 0x885522u); SPILL(); f_4e44a3(); if (g_unwind) return; /* Core!?IsError@FArchive@@QAEHXZ */ RELOAD();
/* 885522: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885524: jne 0x885538 */
  if (!zf) goto L_885538;
L_885526: /* 885526: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88552a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88552c: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 885530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885531: call 0x6c76cb */
  esp -= 4; W32(esp, 0x885536u); SPILL(); f_6c76cb(); if (g_unwind) return; RELOAD();
/* 885536: jmp 0x885554 */
  goto L_885554;
L_885538: /* 885538: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 88553e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 885540: push 0xae6be4 */
  { uint32_t v = 0xae6be4u; esp -= 4; W32(esp, v); }
/* 885545: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 88554a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88554b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x885551u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 885551: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_885554: /* 885554: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 885558: mov dword ptr [esp + 0xa0], 0xffffffff */
  W32((uint32_t)(esp + 0xa0u), 0xffffffffu);
/* 885563: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x885569u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 885569: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88556a: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 885571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885572: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885573: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885574: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88557b: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885581: ret  */
  esp += 4; SPILL(); return;
}

void f_885660(void) {
  LOAD_REGS();
L_885660: /* 885660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885661: mov ebp, esp */
  ebp = esp;
/* 885663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 885665: push 0x9d5200 */
  { uint32_t v = 0x9d5200u; esp -= 4; W32(esp, v); }
/* 88566a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 885670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 885678: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88567b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88567c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88567d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88567e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 885681: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 885687: and eax, 0x2040 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2040u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88568c: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88568f: mov esi, ecx */
  esi = ecx;
/* 885691: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 885694: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 885697: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88569e: jne 0x885809 */
  if (!zf) goto L_885809;
L_8856a4: /* 8856a4: test dword ptr [esi + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8856ae: jne 0x885809 */
  if (!zf) goto L_885809;
L_8856b4: /* 8856b4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8856ba: mov dl, byte ptr [ecx + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 8856c0: xor ebx, ebx */
  ebx = 0;
/* 8856c2: cmp dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8856c5: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8856c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8856ca: je 0x8856e0 */
  if (zf) goto L_8856e0;
L_8856cc: /* 8856cc: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8856d3: je 0x885809 */
  if (zf) goto L_885809;
L_8856d9: /* 8856d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8856e0: /* 8856e0: mov ecx, edi */
  ecx = edi;
/* 8856e2: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8856e8u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8856e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8856ea: je 0x8856fb */
  if (zf) goto L_8856fb;
L_8856ec: /* 8856ec: mov ecx, edi */
  ecx = edi;
/* 8856ee: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x8856f4u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 8856f4: mov edi, eax */
  edi = eax;
/* 8856f6: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8856f9: jmp 0x8856e0 */
  goto L_8856e0;
L_8856fb: /* 8856fb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8856fd: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 885704: je 0x88571e */
  if (zf) goto L_88571e;
L_885706: /* 885706: mov dl, byte ptr [esi + 0x91] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 88570c: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 885712: mov byte ptr [esi + 0x90], dl */
  W8((uint32_t)(esi + 0x90u), (edx & 0xffu));
/* 885718: mov byte ptr [esi + 0x91], al */
  W8((uint32_t)(esi + 0x91u), (eax & 0xffu));
L_88571e: /* 88571e: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 885724: mov eax, ebx */
  eax = ebx;
/* 885726: shl eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 885729: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 88572b: and eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 885730: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 885732: or eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 885737: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 88573d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88573f: mov ecx, edi */
  ecx = edi;
/* 885741: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x885744u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885744: movzx ecx, word ptr [edi + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x86u)));
/* 88574b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88574d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88574e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88574f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885750: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 885753: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x885759u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 885759: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 88575c: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 88575f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 885760: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 885763: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 885766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885767: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885768: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88576d: mov ecx, esi */
  ecx = esi;
/* 88576f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885772: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 885778: and ecx, 0xff9fffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff9fffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 88577e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885780: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 885786: je 0x8857a0 */
  if (zf) goto L_8857a0;
L_885788: /* 885788: mov cl, byte ptr [esi + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 88578e: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 885794: mov byte ptr [esi + 0x90], cl */
  W8((uint32_t)(esi + 0x90u), (ecx & 0xffu));
/* 88579a: mov byte ptr [esi + 0x91], al */
  W8((uint32_t)(esi + 0x91u), (eax & 0xffu));
L_8857a0: /* 8857a0: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8857a6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8857a9: and ecx, 0xfeffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfeffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8857af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8857b1: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8857b7: je 0x885809 */
  if (zf) goto L_885809;
L_8857b9: /* 8857b9: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8857bf: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 8857c5: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 8857c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8857ca: je 0x885809 */
  if (zf) goto L_885809;
L_8857cc: /* 8857cc: mov eax, edx */
  eax = edx;
/* 8857ce: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8857d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8857d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8857d5: je 0x885809 */
  if (zf) goto L_885809;
L_8857d7: /* 8857d7: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8857da: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8857dc: je 0x8857e6 */
  if (zf) goto L_8857e6;
L_8857de: /* 8857de: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8857e1: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 8857e4: jmp 0x8857ed */
  goto L_8857ed;
L_8857e6: /* 8857e6: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
L_8857ed: /* 8857ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8857f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8857f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8857f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8857f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8857f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8857f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8857f7: call 0x885250 */
  esp -= 4; W32(esp, 0x8857fcu); SPILL(); f_885250(); if (g_unwind) return; RELOAD();
/* 8857fc: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8857ff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885801: je 0x885809 */
  if (zf) goto L_885809;
L_885803: /* 885803: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 885806: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
L_885809: /* 885809: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88580c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88580d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88580e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885816: mov esp, ebp */
  esp = ebp;
/* 885818: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885819: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88581c(void) {
  LOAD_REGS();
L_88581c: /* 88581c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88581f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 885824: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 885827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885828: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 88582b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x885830u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_885830(); return;
}

void f_885830(void) {
  LOAD_REGS();
L_885830: /* 885830: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 885836: push 0xa19540 */
  { uint32_t v = 0xa19540u; esp -= 4; W32(esp, v); }
/* 88583b: push 0xae6c40 */
  { uint32_t v = 0xae6c40u; esp -= 4; W32(esp, v); }
/* 885840: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x885842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885842: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 885845: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88584a: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x885850u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 885850: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 885853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885854: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88585au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88585a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88585b: push 0xae6c48 */
  { uint32_t v = 0xae6c48u; esp -= 4; W32(esp, v); }
/* 885860: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x885862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885862: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885867: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885869: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88586eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88586e: guest_badaddr(0x88586e); return;
}

void f_885900(void) {
  LOAD_REGS();
L_885900: /* 885900: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 885906: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 885908: push 0x9d5218 */
  { uint32_t v = 0x9d5218u; esp -= 4; W32(esp, v); }
/* 88590d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88590e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 885915: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885919: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 88591d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 885920: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 885923: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885924: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885925: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885928: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88592c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88592d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 885932: mov edi, ecx */
  edi = ecx;
/* 885934: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885938: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88593bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88593b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88593e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 885941: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885944: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885945: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885948: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 88594c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88594d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 885952: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885953: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885956u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885956: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 885959: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88595c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88595f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885960: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885963: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 885967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885968: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88596d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88596e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885971u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885971: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 885974: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 885975: mov eax, edx */
  eax = edx;
/* 885977: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88597a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88597d: jne 0x885995 */
  if (!zf) goto L_885995;
L_88597f: /* 88597f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885982: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885985: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885988: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88598e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88598f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x885995u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_885995: /* 885995: mov edi, dword ptr [edi + 0x35c] */
  edi = R32((uint32_t)(edi + 0x35cu));
/* 88599b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88599d: je 0x885a29 */
  if (zf) goto L_885a29;
L_8859a3: /* 8859a3: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 8859a9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8859ab: je 0x885a29 */
  if (zf) goto L_885a29;
L_8859ad: /* 8859ad: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8859b2: mov ecx, esi */
  ecx = esi;
/* 8859b4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8859bau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8859ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8859bc: je 0x885a29 */
  if (zf) goto L_885a29;
L_8859be: /* 8859be: mov eax, dword ptr [esi + 0x148] */
  eax = R32((uint32_t)(esi + 0x148u));
/* 8859c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8859c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8859c7: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 8859cb: call 0x6c460b */
  esp -= 4; W32(esp, 0x8859d0u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8859d0: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8859d4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8859d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8859d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8859dd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8859e0: mov edx, esp */
  edx = esp;
/* 8859e2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8859e4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8859e8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8859eb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8859ee: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8859f2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8859f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8859f9: mov ecx, esp */
  ecx = esp;
/* 8859fb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8859fd: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 885a01: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 885a04: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 885a07: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 885a0b: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 885a13: call 0x6cc74d */
  esp -= 4; W32(esp, 0x885a18u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 885a18: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 885a1c: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* 885a24: call 0x6cadcb */
  esp -= 4; W32(esp, 0x885a29u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_885a29: /* 885a29: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 885a2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885a2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885a35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885a36: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885a39: ret 8 */
  esp += 12; SPILL(); return;
}

void f_885a90(void) {
  LOAD_REGS();
L_885a90: /* 885a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885a91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 885a95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885a96: mov esi, ecx */
  esi = ecx;
/* 885a98: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 885a9b: xor eax, eax */
  eax = 0;
/* 885a9d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 885a9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885aa0: jle 0x885ab2 */
  if ((zf || sf != of)) goto L_885ab2;
L_885aa2: /* 885aa2: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 885aa4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_885aa6: /* 885aa6: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885aa8: je 0x885ac5 */
  if (zf) goto L_885ac5;
L_885aaa: /* 885aaa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885aab: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 885aae: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885ab0: jl 0x885aa6 */
  if ((sf != of)) goto L_885aa6;
L_885ab2: /* 885ab2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 885ab4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885ab6: mov ecx, esi */
  ecx = esi;
/* 885ab8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x885abeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 885abe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 885ac0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 885ac2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_885ac5: /* 885ac5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885ac6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885ac7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885ac8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_885ae0(void) {
  LOAD_REGS();
L_885ae0: /* 885ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885ae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885ae3: mov edi, ecx */
  edi = ecx;
/* 885ae5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 885ae8: xor esi, esi */
  esi = 0;
/* 885aea: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 885aec: jle 0x885b10 */
  if ((zf || sf != of)) goto L_885b10;
L_885aee: /* 885aee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885aef: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_885af3: /* 885af3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 885af5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 885af8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885afa: jne 0x885b07 */
  if (!zf) goto L_885b07;
L_885afc: /* 885afc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885afe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885aff: mov ecx, edi */
  ecx = edi;
/* 885b01: call 0x6cb320 */
  esp -= 4; W32(esp, 0x885b06u); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 885b06: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_885b07: /* 885b07: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 885b0a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 885b0b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885b0d: jl 0x885af3 */
  if ((sf != of)) goto L_885af3;
L_885b0f: /* 885b0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_885b10: /* 885b10: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 885b13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885b14: mov eax, ebp */
  eax = ebp;
/* 885b16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885b17: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 885b19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885b1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_885b30(void) {
  LOAD_REGS();
L_885b30: /* 885b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885b31: mov esi, ecx */
  esi = ecx;
/* 885b33: mov dword ptr [esi], 0xb7d828 */
  W32((uint32_t)(esi), 0xb7d828u);
/* 885b39: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 885b40: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x885b45u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 885b45: mov eax, esi */
  eax = esi;
/* 885b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885b48: ret  */
  esp += 4; SPILL(); return;
}

void f_885b60(void) {
  LOAD_REGS();
L_885b60: /* 885b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885b61: mov ebp, esp */
  ebp = esp;
/* 885b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 885b65: push 0x9d5230 */
  { uint32_t v = 0x9d5230u; esp -= 4; W32(esp, v); }
/* 885b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 885b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 885b78: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885b7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 885b7f: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 885b85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885b87: mov edi, ecx */
  edi = ecx;
/* 885b89: xor ecx, ecx */
  ecx = 0;
/* 885b8b: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 885b8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 885b91: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 885b94: jne 0x885da2 */
  if (!zf) goto L_885da2;
L_885b9a: /* 885b9a: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 885ba0: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 885ba3: jne 0x885da2 */
  if (!zf) goto L_885da2;
L_885ba9: /* 885ba9: cmp byte ptr [edi + 0x91], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x91u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 885bb0: ja 0x885bc1 */
  if ((!cf && !zf)) goto L_885bc1;
L_885bb2: /* 885bb2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 885bb5: jne 0x885bc1 */
  if (!zf) goto L_885bc1;
L_885bb7: /* 885bb7: mov esi, 1 */
  esi = 0x1u;
/* 885bbc: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 885bbf: jmp 0x885bc6 */
  goto L_885bc6;
L_885bc1: /* 885bc1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 885bc4: mov esi, ecx */
  esi = ecx;
L_885bc6: /* 885bc6: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 885bcc: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 885bd2: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885bd4: je 0x885c02 */
  if (zf) goto L_885c02;
L_885bd6: /* 885bd6: mov eax, edx */
  eax = edx;
/* 885bd8: cmp dword ptr [eax + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885bdb: je 0x885bf2 */
  if (zf) goto L_885bf2;
L_885bdd: /* 885bdd: mov eax, esi */
  eax = esi;
/* 885bdf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 885be2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885be9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885bea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885beb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885bec: mov esp, ebp */
  esp = ebp;
/* 885bee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885bef: ret 0xc */
  esp += 16; SPILL(); return;
L_885bf2: /* 885bf2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 885bf5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 885bf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885bf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 885bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885bfb: mov ecx, edi */
  ecx = edi;
/* 885bfd: call 0x6c3355 */
  esp -= 4; W32(esp, 0x885c02u); SPILL(); f_6c3355(); if (g_unwind) return; RELOAD();
L_885c02: /* 885c02: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 885c08: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 885c0e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 885c10: je 0x885da2 */
  if (zf) goto L_885da2;
L_885c16: /* 885c16: test byte ptr [ebx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 885c1d: je 0x885bdd */
  if (zf) goto L_885bdd;
L_885c1f: /* 885c1f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 885c21: mov ecx, edi */
  ecx = edi;
/* 885c23: call dword ptr [edx + 0x18c] */
  { uint32_t t = R32((uint32_t)(edx + 0x18cu)); esp -= 4; W32(esp, 0x885c29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885c29: mov cl, byte ptr [edi + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x91u))) & 0xffu);
/* 885c2f: xor esi, esi */
  esi = 0;
/* 885c31: cmp cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 885c34: jne 0x885c65 */
  if (!zf) goto L_885c65;
L_885c36: /* 885c36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885c38: je 0x885c4f */
  if (zf) goto L_885c4f;
L_885c3a: /* 885c3a: mov eax, dword ptr [eax + 0x4c0] */
  eax = R32((uint32_t)(eax + 0x4c0u));
/* 885c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885c41: call 0x6c8ff3 */
  esp -= 4; W32(esp, 0x885c46u); SPILL(); f_6c8ff3(); if (g_unwind) return; RELOAD();
/* 885c46: mov esi, eax */
  esi = eax;
/* 885c48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885c4b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885c4d: jne 0x885c65 */
  if (!zf) goto L_885c65;
L_885c4f: /* 885c4f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 885c52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 885c55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885c5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885c5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885c5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885c5f: mov esp, ebp */
  esp = ebp;
/* 885c61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885c62: ret 0xc */
  esp += 16; SPILL(); return;
L_885c65: /* 885c65: mov ecx, ebx */
  ecx = ebx;
/* 885c67: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x885c6du); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 885c6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885c6f: mov ecx, ebx */
  ecx = ebx;
/* 885c71: je 0x885c80 */
  if (zf) goto L_885c80;
L_885c73: /* 885c73: call dword ptr [0xcfab88] */
  esp -= 4; W32(esp, 0x885c79u); SPILL(); f_4e1dc5(); if (g_unwind) return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */ RELOAD();
/* 885c79: mov ebx, eax */
  ebx = eax;
/* 885c7b: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 885c7e: jmp 0x885c65 */
  goto L_885c65;
L_885c80: /* 885c80: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 885c87: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 885c89: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x885c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885c8c: movzx ecx, word ptr [ebx + 0x86] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x86u)));
/* 885c93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885c97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885c98: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 885c9b: call dword ptr [0xcfab84] */
  esp -= 4; W32(esp, 0x885ca1u); SPILL(); f_4e33e6(); if (g_unwind) return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */ RELOAD();
/* 885ca1: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 885ca4: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 885ca7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 885ca8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 885cab: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 885cae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885caf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885cb0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 885cb5: mov ecx, edi */
  ecx = edi;
/* 885cb7: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885cbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885cba: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 885cbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885cbf: je 0x885c4f */
  if (zf) goto L_885c4f;
L_885cc1: /* 885cc1: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 885cc7: mov al, byte ptr [ecx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 885ccd: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 885ccf: je 0x885d51 */
  if (zf) goto L_885d51;
L_885cd5: /* 885cd5: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 885cd7: je 0x885d51 */
  if (zf) goto L_885d51;
L_885cd9: /* 885cd9: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 885cdf: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 885ce2: mov esi, dword ptr [edx + 0x38] */
  esi = R32((uint32_t)(edx + 0x38u));
/* 885ce5: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_885cec: /* 885cec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885cee: jne 0x885d08 */
  if (!zf) goto L_885d08;
L_885cf0: /* 885cf0: push 0xa08 */
  { uint32_t v = 0xa08u; esp -= 4; W32(esp, v); }
/* 885cf5: push 0xae6c10 */
  { uint32_t v = 0xae6c10u; esp -= 4; W32(esp, v); }
/* 885cfa: push 0xae6c20 */
  { uint32_t v = 0xae6c20u; esp -= 4; W32(esp, v); }
/* 885cff: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x885d05u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 885d05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_885d08: /* 885d08: mov al, byte ptr [ebx + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x80u))) & 0xffu);
/* 885d0e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 885d10: js 0x885d22 */
  if (sf) goto L_885d22;
L_885d12: /* 885d12: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 885d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885d16: mov ecx, esi */
  ecx = esi;
/* 885d18: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x885d1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885d1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885d20: je 0x885d39 */
  if (zf) goto L_885d39;
L_885d22: /* 885d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 885d25: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 885d28: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 885d2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 885d2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 885d2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885d2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885d2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885d30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885d31: call 0x885250 */
  esp -= 4; W32(esp, 0x885d36u); SPILL(); f_885250(); if (g_unwind) return; RELOAD();
/* 885d36: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_885d39: /* 885d39: mov eax, 1 */
  eax = 0x1u;
/* 885d3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 885d41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885d48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885d49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885d4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885d4b: mov esp, ebp */
  esp = ebp;
/* 885d4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885d4e: ret 0xc */
  esp += 16; SPILL(); return;
L_885d51: /* 885d51: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 885d58: jmp 0x885cec */
  goto L_885cec;
L_885da2: /* 885da2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 885da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885da7: xor eax, eax */
  eax = 0;
/* 885da9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885db0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885db1: mov esp, ebp */
  esp = ebp;
/* 885db3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885db4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_885d5a(void) {
  LOAD_REGS();
L_885d5a: /* 885d5a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 885d5d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 885d62: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 885d65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 885d66: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 885d69: call 0x99caf8 */
  esp -= 4; W32(esp, 0x885d6eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_885d6e(); return;
}

void f_885d6e(void) {
  LOAD_REGS();
L_885d6e: /* 885d6e: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 885d74: push 0xa1958c */
  { uint32_t v = 0xa1958cu; esp -= 4; W32(esp, v); }
/* 885d79: push 0xae6c2c */
  { uint32_t v = 0xae6c2cu; esp -= 4; W32(esp, v); }
/* 885d7e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x885d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885d80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 885d83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885d86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885d88: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x885d8eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 885d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885d8f: push 0xae6c34 */
  { uint32_t v = 0xae6c34u; esp -= 4; W32(esp, v); }
/* 885d94: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x885d96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885d96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 885d99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885d9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 885d9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x885da2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 885da2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 885da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885da7: xor eax, eax */
  eax = 0;
/* 885da9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 885db0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885db1: mov esp, ebp */
  esp = ebp;
/* 885db3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 885db4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_885e60(void) {
  LOAD_REGS();
L_885e60: /* 885e60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885e61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885e62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885e63: mov edi, ecx */
  edi = ecx;
/* 885e65: mov eax, dword ptr [edi + 0x264] */
  eax = R32((uint32_t)(edi + 0x264u));
/* 885e6b: xor esi, esi */
  esi = 0;
/* 885e6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 885e6f: jle 0x885eb6 */
  if ((zf || sf != of)) goto L_885eb6;
L_885e71: /* 885e71: lea ebx, [edi + 0x260] */
  ebx = (uint32_t)(edi + 0x260u);
/* 885e77: jmp 0x885e80 */
  goto L_885e80;
L_885e80: /* 885e80: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 885e86: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 885e88: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 885e8e: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 885e91: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885e94: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 885e97: call 0x6ca46b */
  esp -= 4; W32(esp, 0x885e9cu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 885e9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885e9e: jne 0x885eab */
  if (!zf) goto L_885eab;
L_885ea0: /* 885ea0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885ea3: mov ecx, ebx */
  ecx = ebx;
/* 885ea5: call 0x6cb320 */
  esp -= 4; W32(esp, 0x885eaau); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 885eaa: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_885eab: /* 885eab: mov eax, dword ptr [edi + 0x264] */
  eax = R32((uint32_t)(edi + 0x264u));
/* 885eb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 885eb2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885eb4: jl 0x885e80 */
  if ((sf != of)) goto L_885e80;
L_885eb6: /* 885eb6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 885eba: mov esi, dword ptr [edx + 0x434] */
  esi = R32((uint32_t)(edx + 0x434u));
/* 885ec0: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 885ec3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 885ec4: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 885eca: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 885ecd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 885ed0: xor eax, eax */
  eax = 0;
/* 885ed2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 885ed4: jle 0x885ee4 */
  if ((zf || sf != of)) goto L_885ee4;
L_885ed6: /* 885ed6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
L_885ed8: /* 885ed8: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885eda: je 0x885ef5 */
  if (zf) goto L_885ef5;
L_885edc: /* 885edc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885edd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 885ee0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885ee2: jl 0x885ed8 */
  if ((sf != of)) goto L_885ed8;
L_885ee4: /* 885ee4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 885ee6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885ee8: mov ecx, edi */
  ecx = edi;
/* 885eea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x885ef0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 885ef0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 885ef2: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_885ef5: /* 885ef5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885ef6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885ef7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885ef8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_885e79(void) {
  LOAD_REGS();
L_885e79: /* 885e79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_885e80: /* 885e80: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 885e86: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 885e88: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 885e8e: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 885e91: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885e94: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 885e97: call 0x6ca46b */
  esp -= 4; W32(esp, 0x885e9cu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 885e9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 885e9e: jne 0x885eab */
  if (!zf) goto L_885eab;
L_885ea0: /* 885ea0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885ea3: mov ecx, ebx */
  ecx = ebx;
/* 885ea5: call 0x6cb320 */
  esp -= 4; W32(esp, 0x885eaau); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 885eaa: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_885eab: /* 885eab: mov eax, dword ptr [edi + 0x264] */
  eax = R32((uint32_t)(edi + 0x264u));
/* 885eb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 885eb2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885eb4: jl 0x885e80 */
  if ((sf != of)) goto L_885e80;
L_885eb6: /* 885eb6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 885eba: mov esi, dword ptr [edx + 0x434] */
  esi = R32((uint32_t)(edx + 0x434u));
/* 885ec0: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 885ec3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 885ec4: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 885eca: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 885ecd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 885ed0: xor eax, eax */
  eax = 0;
/* 885ed2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 885ed4: jle 0x885ee4 */
  if ((zf || sf != of)) goto L_885ee4;
L_885ed6: /* 885ed6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
L_885ed8: /* 885ed8: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 885eda: je 0x885ef5 */
  if (zf) goto L_885ef5;
L_885edc: /* 885edc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885edd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 885ee0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 885ee2: jl 0x885ed8 */
  if ((sf != of)) goto L_885ed8;
L_885ee4: /* 885ee4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 885ee6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 885ee8: mov ecx, edi */
  ecx = edi;
/* 885eea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x885ef0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 885ef0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 885ef2: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_885ef5: /* 885ef5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885ef6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885ef7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885ef8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_885f30(void) {
  LOAD_REGS();
L_885f30: /* 885f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885f31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885f32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885f33: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 885f37: mov esi, dword ptr [edi + 0x434] */
  esi = R32((uint32_t)(edi + 0x434u));
/* 885f3d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 885f40: add edi, 0x434 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x434u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 885f46: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 885f47: mov ebx, ecx */
  ebx = ecx;
/* 885f49: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 885f4c: jne 0x885f62 */
  if (!zf) goto L_885f62;
L_885f4e: /* 885f4e: mov ecx, esi */
  ecx = esi;
/* 885f50: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x885f55u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 885f55: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 885f5a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 885f5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 885f5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885f5f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x885f62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_885f62: /* 885f62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885f63: lea ecx, [ebx + 0x260] */
  ecx = (uint32_t)(ebx + 0x260u);
/* 885f69: call 0x6c45b1 */
  esp -= 4; W32(esp, 0x885f6eu); SPILL(); f_6c45b1(); if (g_unwind) return; RELOAD();
/* 885f6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 885f6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 885f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 885f71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_885fa0(void) {
  LOAD_REGS();
L_885fa0: /* 885fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 885fa1: mov ebp, esp */
  ebp = esp;
/* 885fa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 885fa5: push 0x9d5240 */
  { uint32_t v = 0x9d5240u; esp -= 4; W32(esp, v); }
/* 885faa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 885fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885fb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 885fb8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 885fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 885fbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885fbd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 885fc0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 885fc3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 885fc6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885fc9: xor ebx, ebx */
  ebx = 0;
/* 885fcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885fcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 885fcd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885fd0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 885fd3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 885fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885fd7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 885fdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885fdd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 885fe0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885fe3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885fe3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 885fe6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 885fe9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 885fec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 885fed: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 885ff0: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 885ff3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 885ff4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 885ff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 885ffa: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x885ffdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 885ffd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886000: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886003: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 886006: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88600a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88600d: lea eax, [ebp - 0x12] */
  eax = (uint32_t)(ebp + 0xffffffeeu);
/* 886010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886011: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886017: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88601au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88601a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88601d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886020: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 886023: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886026: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886027: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88602a: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 88602d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88602e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886034: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886037u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886037: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88603a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88603d: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 886040: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886043: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886044: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886047: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 88604a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88604b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886051: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886054: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886057: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 886058: mov eax, edx */
  eax = edx;
/* 88605a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88605d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 886060: jne 0x886077 */
  if (!zf) goto L_886077;
L_886062: /* 886062: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886065: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886066: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886067: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88606a: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 886070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886071: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x886077u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886077: /* 886077: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 88607a: mov cl, byte ptr [ebp - 0x11] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 88607d: mov dl, byte ptr [ebp - 0x12] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu))) & 0xffu);
/* 886080: mov byte ptr [ebp - 0x17], cl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ecx & 0xffu));
/* 886083: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 886086: mov byte ptr [ebp - 0x16], dl */
  W8((uint32_t)(ebp + 0xffffffeau), (edx & 0xffu));
/* 886089: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 88608c: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 886090: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 886093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886094: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 886097: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88609a: mov ecx, esp */
  ecx = esp;
/* 88609c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88609e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8860a1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8860a4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8860a7: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8860aa: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8860ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8860b0: mov eax, esp */
  eax = esp;
/* 8860b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8860b4: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8860b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8860ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8860bd: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 8860c3: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x8860c8u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 8860c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8860cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8860cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8860cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8860d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8860d5: mov esp, ebp */
  esp = ebp;
/* 8860d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8860d8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8860db(void) {
  LOAD_REGS();
L_8860db: /* 8860db: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8860de: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8860e3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8860e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8860e7: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8860ea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8860efu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8860ef(); return;
}

void f_8860ef(void) {
  LOAD_REGS();
L_8860ef: /* 8860ef: push 0xa195d4 */
  { uint32_t v = 0xa195d4u; esp -= 4; W32(esp, v); }
/* 8860f4: push 0xae6cec */
  { uint32_t v = 0xae6cecu; esp -= 4; W32(esp, v); }
/* 8860f9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8860ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8860ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886102: xor ebx, ebx */
  ebx = 0;
/* 886104: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886105: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886106: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88610bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88610b: guest_badaddr(0x88610b); return;
}

void f_886170(void) {
  LOAD_REGS();
L_886170: /* 886170: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886174: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 886178: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88617b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88617e: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 886186: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886189: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88618a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88618d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 886191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886192: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886198: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88619bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88619b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88619e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88619f: mov eax, edx */
  eax = edx;
/* 8861a1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8861a4: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8861a7: jne 0x8861bf */
  if (!zf) goto L_8861bf;
L_8861a9: /* 8861a9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8861ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8861ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8861af: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8861b2: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8861b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8861b9: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8861bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8861bf: /* 8861bf: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8861c3: xor esi, esi */
  esi = 0;
/* 8861c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8861c7: je 0x886235 */
  if (zf) goto L_886235;
L_8861c9: /* 8861c9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 8861cd: mov dword ptr [esp + 8], 0xb7d828 */
  W32((uint32_t)(esp + 0x8u), 0xb7d828u);
/* 8861d5: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 8861dd: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x8861e2u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 8861e2: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8861e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8861ec: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8861ef: jge 0x886213 */
  if ((sf == of)) goto L_886213;
L_8861f1: /* 8861f1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8861f3: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8861f6: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8861f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8861fb: je 0x886213 */
  if (zf) goto L_886213;
L_8861fd: /* 8861fd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 886200: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 886202: je 0x886213 */
  if (zf) goto L_886213;
L_886204: /* 886204: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 886207: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 886209: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88620b: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x886211u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886211: mov esi, eax */
  esi = eax;
L_886213: /* 886213: mov eax, dword ptr [0xb08f88] */
  eax = R32((uint32_t)(0xb08f88u));
/* 886218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88621a: call 0x6c1136 */
  esp -= 4; W32(esp, 0x88621fu); SPILL(); f_6c1136(); if (g_unwind) return; RELOAD();
/* 88621f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 886223: mov edx, dword ptr [0xced694] */
  edx = R32((uint32_t)(0xced694u));
/* 886229: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88622c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88622e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88622f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886232: ret 8 */
  esp += 12; SPILL(); return;
L_886235: /* 886235: call 0x6c27de */
  esp -= 4; W32(esp, 0x88623au); SPILL(); f_6c27de(); if (g_unwind) return; RELOAD();
/* 88623a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 88623e: mov ecx, dword ptr [0xced694] */
  ecx = R32((uint32_t)(0xced694u));
/* 886244: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 886246: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886247: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88624a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_886290(void) {
  LOAD_REGS();
L_886290: /* 886290: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 886293: ret  */
  esp += 4; SPILL(); return;
}

void f_8862b0(void) {
  LOAD_REGS();
L_8862b0: /* 8862b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8862b1: mov esi, ecx */
  esi = ecx;
/* 8862b3: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x8862b9u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 8862b9: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8862bc: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 8862bf: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8862c2: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8862c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8862c6: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 8862c9: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 8862cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8862cd: ret  */
  esp += 4; SPILL(); return;
}

void f_8862e0(void) {
  LOAD_REGS();
L_8862e0: /* 8862e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8862e1: mov ebp, esp */
  ebp = esp;
/* 8862e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8862e5: push 0x9d5250 */
  { uint32_t v = 0x9d5250u; esp -= 4; W32(esp, v); }
/* 8862ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8862f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8862f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8862f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8862fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8862fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8862fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 886300: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886303: xor ebx, ebx */
  ebx = 0;
/* 886305: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 886308: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88630b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88630c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88630d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886310: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 886313: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 886316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886317: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88631c: mov edi, ecx */
  edi = ecx;
/* 88631e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886322: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 886325: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886328: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88632b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88632e: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 886331: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886334: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886335: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886338: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 88633b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88633c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886342: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886345: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886348: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 886349: mov eax, edx */
  eax = edx;
/* 88634b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88634e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 886351: jne 0x886368 */
  if (!zf) goto L_886368;
L_886353: /* 886353: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886356: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886357: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886358: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88635b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 886361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886362: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x886368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886368: /* 886368: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 88636b: mov esi, dword ptr [0xcfa2b0] */
  esi = R32((uint32_t)(0xcfa2b0u));
/* 886371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886372: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 886375: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 886378: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88637au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88637a: mov byte ptr [edi + 0x3b], al */
  W8((uint32_t)(edi + 0x3bu), (eax & 0xffu));
/* 88637d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 886380: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886384: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 886387: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 88638a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88638cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88638c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88638f: mov byte ptr [edi + 0x3c], al */
  W8((uint32_t)(edi + 0x3cu), (eax & 0xffu));
/* 886392: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 886395: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886398: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886399: mov dword ptr [edi + 0x5c], eax */
  W32((uint32_t)(edi + 0x5cu), eax);
/* 88639c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88639d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88639e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8863a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8863a6: mov esp, ebp */
  esp = ebp;
/* 8863a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8863a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8863ac(void) {
  LOAD_REGS();
L_8863ac: /* 8863ac: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8863af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8863b4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8863b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8863b8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8863bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8863c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8863c0(); return;
}

void f_8863c0(void) {
  LOAD_REGS();
L_8863c0: /* 8863c0: push 0xa19614 */
  { uint32_t v = 0xa19614u; esp -= 4; W32(esp, v); }
/* 8863c5: push 0xae6ee4 */
  { uint32_t v = 0xae6ee4u; esp -= 4; W32(esp, v); }
/* 8863ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8863d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8863d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8863d3: xor ebx, ebx */
  ebx = 0;
/* 8863d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8863d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8863d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8863dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8863dc: guest_badaddr(0x8863dc); return;
}

void f_886420(void) {
  LOAD_REGS();
L_886420: /* 886420: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 886424: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 886428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88642a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88642e: mov esi, ecx */
  esi = ecx;
/* 886430: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886433: mov ecx, esp */
  ecx = esp;
/* 886435: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 886437: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 88643b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 88643e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 886441: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 886445: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 886449: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88644c: mov eax, esp */
  eax = esp;
/* 88644e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 886450: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 886454: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 886457: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 88645b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88645e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 886462: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 886466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886468: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886469: mov ecx, esi */
  ecx = esi;
/* 88646b: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x886470u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 886470: mov dword ptr [esi], 0xa1965c */
  W32((uint32_t)(esi), 0xa1965cu);
/* 886476: mov eax, esi */
  eax = esi;
/* 886478: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886479: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_8864a0(void) {
  LOAD_REGS();
L_8864a0: /* 8864a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8864a3: mov eax, dword ptr [eax + 0x14c] */
  eax = R32((uint32_t)(eax + 0x14cu));
/* 8864a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8864ab: jne 0x8864af */
  if (!zf) goto L_8864af;
L_8864ad: /* 8864ad: mov eax, ecx */
  eax = ecx;
L_8864af: /* 8864af: ret  */
  esp += 4; SPILL(); return;
}

void f_8864c0(void) {
  LOAD_REGS();
L_8864c0: /* 8864c0: jmp 0x6c82c9 */
  SPILL(); f_6c82c9(); return;
}

void f_8864e0(void) {
  LOAD_REGS();
L_8864e0: /* 8864e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8864e1: mov esi, ecx */
  esi = ecx;
/* 8864e3: call 0x6cc216 */
  esp -= 4; W32(esp, 0x8864e8u); SPILL(); f_6cc216(); if (g_unwind) return; RELOAD();
/* 8864e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8864ed: je 0x8864fc */
  if (zf) goto L_8864fc;
L_8864ef: /* 8864ef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8864f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8864f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8864f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8864f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8864fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8864fc: /* 8864fc: mov eax, esi */
  eax = esi;
/* 8864fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8864ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_886520(void) {
  LOAD_REGS();
L_886520: /* 886520: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 886524: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886525: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 886526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886528: mov esi, ecx */
  esi = ecx;
/* 88652a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 88652d: mov dword ptr [esi], 0xa196a0 */
  W32((uint32_t)(esi), 0xa196a0u);
/* 886533: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 886539: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 88653c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 88653f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886541: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 886546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886547: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886548: call 0x99c910 */
  esp -= 4; W32(esp, 0x88654du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 88654d: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 886552: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 886555: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 886558: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 88655b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 886561: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 886564: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 886567: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 886568: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 88656b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88656e: mov eax, esi */
  eax = esi;
/* 886570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886571: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 886572: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 886573: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8865a0(void) {
  LOAD_REGS();
L_8865a0: /* 8865a0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8865a3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8865a6: ret  */
  esp += 4; SPILL(); return;
}

void f_8865c0(void) {
  LOAD_REGS();
L_8865c0: /* 8865c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8865c3: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 8865c6: ret  */
  esp += 4; SPILL(); return;
}

void f_8865e0(void) {
  LOAD_REGS();
L_8865e0: /* 8865e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8865e3: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8865e6: ret  */
  esp += 4; SPILL(); return;
}

void f_886600(void) {
  LOAD_REGS();
L_886600: /* 886600: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 886603: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 886606: ret  */
  esp += 4; SPILL(); return;
}

void f_886620(void) {
  LOAD_REGS();
L_886620: /* 886620: xor eax, eax */
  eax = 0;
/* 886622: ret  */
  esp += 4; SPILL(); return;
}

void f_886640(void) {
  LOAD_REGS();
L_886640: /* 886640: mov eax, 1 */
  eax = 0x1u;
/* 886645: ret  */
  esp += 4; SPILL(); return;
}

void f_886660(void) {
  LOAD_REGS();
L_886660: /* 886660: mov eax, 5 */
  eax = 0x5u;
/* 886665: ret  */
  esp += 4; SPILL(); return;
}

void f_886680(void) {
  LOAD_REGS();
L_886680: /* 886680: xor eax, eax */
  eax = 0;
/* 886682: ret  */
  esp += 4; SPILL(); return;
}

void f_8866a0(void) {
  LOAD_REGS();
L_8866a0: /* 8866a0: xor eax, eax */
  eax = 0;
/* 8866a2: ret  */
  esp += 4; SPILL(); return;
}

void f_8866c0(void) {
  LOAD_REGS();
L_8866c0: /* 8866c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8866c1: mov ebp, esp */
  ebp = esp;
/* 8866c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8866c5: push 0x9d5260 */
  { uint32_t v = 0x9d5260u; esp -= 4; W32(esp, v); }
/* 8866ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8866d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8866d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8866d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8866db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8866dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8866dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8866de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8866e1: mov esi, ecx */
  esi = ecx;
/* 8866e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8866ea: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8866f0u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8866f0: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 8866f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8866f5: je 0x886705 */
  if (zf) goto L_886705;
L_8866f7: /* 8866f7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8866fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8866ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 886701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886702: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x886705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886705: /* 886705: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 886708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 886709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88670a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 886711: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 886712: mov esp, ebp */
  esp = ebp;
/* 886714: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 886715: ret  */
  esp += 4; SPILL(); return;
}

void f_886716(void) {
  LOAD_REGS();
L_886716: /* 886716: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 886719: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88671e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 886721: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886722: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 886725: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88672au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88672a(); return;
}

void f_88672a(void) {
  LOAD_REGS();
L_88672a: /* 88672a: push 0xa196e8 */
  { uint32_t v = 0xa196e8u; esp -= 4; W32(esp, v); }
/* 88672f: push 0xae6edc */
  { uint32_t v = 0xae6edcu; esp -= 4; W32(esp, v); }
/* 886734: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88673au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88673a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88673d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88673f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886741: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886746u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_886746: guest_badaddr(0x886746); return;
}

void f_886780(void) {
  LOAD_REGS();
L_886780: /* 886780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 886781: mov ebp, esp */
  ebp = esp;
/* 886783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 886785: push 0x9d5284 */
  { uint32_t v = 0x9d5284u; esp -= 4; W32(esp, v); }
/* 88678a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 886790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 886798: sub esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88679e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88679f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8867a0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8867a3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8867a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8867a7: xor edi, edi */
  edi = 0;
/* 8867a9: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8867ac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8867af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8867b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8867b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8867b6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8867b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8867ba: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8867bf: mov ebx, ecx */
  ebx = ecx;
/* 8867c1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8867c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8867c5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8867c8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8867cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8867cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8867ce: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8867d1: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8867d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8867d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8867d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8867db: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8867de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8867df: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8867e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8867e5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8867e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8867e8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8867eb: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8867f1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8867f1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8867f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8867f7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8867fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8867fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8867fe: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 886801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886802: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886808: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 88680c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88680fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88680f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886812: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886815: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 886818: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88681b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88681c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88681f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 886822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886823: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886828: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886829: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88682cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88682c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88682f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886832: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886835: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886836: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886839: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 88683c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88683d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886843: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886846: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886849: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88684a: mov eax, edx */
  eax = edx;
/* 88684c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88684f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 886852: jne 0x886869 */
  if (!zf) goto L_886869;
L_886854: /* 886854: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886857: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886859: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88685c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 886862: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886863: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x886869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886869: /* 886869: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88686c: jne 0x8868b3 */
  if (!zf) goto L_8868b3;
L_88686e: /* 88686e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 886871: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x886877u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 886877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886878: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 88687d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88687f: push 0xae6ef0 */
  { uint32_t v = 0xae6ef0u; esp -= 4; W32(esp, v); }
/* 886884: push 0x301 */
  { uint32_t v = 0x301u; esp -= 4; W32(esp, v); }
/* 886889: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88688a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x886890u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 886890: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_886893: /* 886893: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 886896: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88689a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8868a0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8868a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8868a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8868a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8868a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8868ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8868ad: mov esp, ebp */
  esp = ebp;
/* 8868af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8868b0: ret 8 */
  esp += 12; SPILL(); return;
L_8868b3: /* 8868b3: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 8868b6: mov eax, dword ptr [edx + 0x148] */
  eax = R32((uint32_t)(edx + 0x148u));
/* 8868bc: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 8868bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8868c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8868c1: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8868c7: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x8868ccu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 8868cc: mov esi, eax */
  esi = eax;
/* 8868ce: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8868d1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8868d5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8868dbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8868db: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8868de: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8868e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8868e2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8868e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8868e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8868e7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8868ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8868eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8868ec: mov ecx, esi */
  ecx = esi;
/* 8868ee: call 0x6c42c8 */
  esp -= 4; W32(esp, 0x8868f3u); SPILL(); f_6c42c8(); if (g_unwind) return; RELOAD();
/* 8868f3: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 8868f9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8868fd: call 0x6caac4 */
  esp -= 4; W32(esp, 0x886902u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 886902: jmp 0x886893 */
  goto L_886893;
}

void f_886904(void) {
  LOAD_REGS();
L_886904: /* 886904: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 886907: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88690c: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 88690f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886910: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 886913: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886918u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_886918(); return;
}

void f_886918(void) {
  LOAD_REGS();
L_886918: /* 886918: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 88691e: push 0xa19728 */
  { uint32_t v = 0xa19728u; esp -= 4; W32(esp, v); }
/* 886923: push 0xae6f50 */
  { uint32_t v = 0xae6f50u; esp -= 4; W32(esp, v); }
/* 886928: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88692au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88692a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88692d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 886930: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886933: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 886936: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 88693c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88693f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 886941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886942: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886944: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x886946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886946: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88694a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88694c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88694eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88694e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88694f: push 0xae6f58 */
  { uint32_t v = 0xae6f58u; esp -= 4; W32(esp, v); }
/* 886954: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x886956u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886956: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886959: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88695b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88695d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886962u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_886962: guest_badaddr(0x886962); return;
}

void f_8869f0(void) {
  LOAD_REGS();
L_8869f0: /* 8869f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8869f1: mov ebp, esp */
  ebp = esp;
/* 8869f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8869f5: push 0x9d52b4 */
  { uint32_t v = 0x9d52b4u; esp -= 4; W32(esp, v); }
/* 8869fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 886a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 886a08: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886a0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886a0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886a10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886a11: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 886a14: xor ebx, ebx */
  ebx = 0;
/* 886a16: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 886a19: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 886a1c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 886a1f: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x886a25u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 886a25: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 886a28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886a2b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886a2e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886a31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886a32: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886a35: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 886a38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886a39: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886a3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886a3f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 886a43: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886a46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886a49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886a4c: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 886a4f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886a52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886a53: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886a56: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 886a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886a5a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886a60: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886a63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886a63: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 886a69: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 886a6c: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 886a6e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886a71: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886a74: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886a77: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886a78: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886a7b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 886a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886a7f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886a85: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886a88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886a88: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 886a8e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 886a90: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 886a92: je 0x886aa1 */
  if (zf) goto L_886aa1;
L_886a94: /* 886a94: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 886a99: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 886a9b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 886a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886a9e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x886aa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886aa1: /* 886aa1: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 886aa7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 886aa9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 886aab: je 0x886ab2 */
  if (zf) goto L_886ab2;
L_886aad: /* 886aad: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 886ab0: jmp 0x886ab8 */
  goto L_886ab8;
L_886ab2: /* 886ab2: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 886ab5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_886ab8: /* 886ab8: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 886abb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 886abd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886ac0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886ac3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886ac6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886ac7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886aca: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 886acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886ace: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886ad3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886ad4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886ad7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886ad7: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 886add: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 886adf: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 886ae1: je 0x886af0 */
  if (zf) goto L_886af0;
L_886ae3: /* 886ae3: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 886ae8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 886aea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 886aec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886aed: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x886af0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886af0: /* 886af0: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 886af6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 886af8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 886afa: mov edi, eax */
  edi = eax;
/* 886afc: jne 0x886b01 */
  if (!zf) goto L_886b01;
L_886afe: /* 886afe: lea edi, [ebp - 0x1c] */
  edi = (uint32_t)(ebp + 0xffffffe4u);
L_886b01: /* 886b01: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886b04: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 886b05: mov eax, edx */
  eax = edx;
/* 886b07: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 886b0a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 886b0d: jne 0x886b24 */
  if (!zf) goto L_886b24;
L_886b0f: /* 886b0f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886b12: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886b13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886b14: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886b17: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 886b1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886b1e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x886b24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886b24: /* 886b24: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 886b27: jne 0x886b6d */
  if (!zf) goto L_886b6d;
L_886b29: /* 886b29: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 886b2c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x886b32u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 886b32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886b33: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 886b38: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 886b3a: push 0xae6f80 */
  { uint32_t v = 0xae6f80u; esp -= 4; W32(esp, v); }
/* 886b3f: push 0x301 */
  { uint32_t v = 0x301u; esp -= 4; W32(esp, v); }
/* 886b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886b45: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x886b4bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 886b4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_886b4e: /* 886b4e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 886b51: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 886b54: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x886b5au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 886b5a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 886b5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 886b5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 886b66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 886b67: mov esp, ebp */
  esp = ebp;
/* 886b69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 886b6a: ret 8 */
  esp += 12; SPILL(); return;
L_886b6d: /* 886b6d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 886b70: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 886b73: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 886b79: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 886b7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886b7e: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 886b84: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x886b89u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 886b89: mov esi, eax */
  esi = eax;
/* 886b8b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 886b8e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 886b92: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 886b95: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 886b98: mov byte ptr [ebp + 0xa], bl */
  W8((uint32_t)(ebp + 0xau), (ebx & 0xffu));
/* 886b9b: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 886b9e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x886ba4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 886ba4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 886ba7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 886baa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886bad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886baf: mov ecx, esi */
  ecx = esi;
/* 886bb1: call 0x6c42c8 */
  esp -= 4; W32(esp, 0x886bb6u); SPILL(); f_6c42c8(); if (g_unwind) return; RELOAD();
/* 886bb6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 886bb9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 886bbb: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 886bc1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 886bc5: call 0x6caac4 */
  esp -= 4; W32(esp, 0x886bcau); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 886bca: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 886bcd: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 886bd0: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 886bd3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 886bd5: jmp 0x886b4e */
  goto L_886b4e;
}
