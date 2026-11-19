#include "recomp.h"
#include "rec_mod.h"

void f_4837d3(void) {
  LOAD_REGS();
L_4837d3: /* 4837d3: mov eax, 0x48d6d2 */
  eax = 0x48d6d2u;
/* 4837d8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4837ddu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4837dd: sub esp, 0x168 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x168u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4837e3: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4837e8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4837eb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4837ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4837ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4837f0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4837f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4837f4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4837f7: xor ebx, ebx */
  ebx = 0;
/* 4837f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4837fa: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 4837fd: call 0x464a5a */
  esp -= 4; W32(esp, 0x483802u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 483802: cmp byte ptr [ebp + 0x14], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483805: je 0x483812 */
  if (zf) goto L_483812;
L_483807: /* 483807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483808: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48380b: call 0x47d6fe */
  esp -= 4; W32(esp, 0x483810u); SPILL(); f_47d6fe(); if (g_unwind) return; RELOAD();
/* 483810: jmp 0x48381f */
  goto L_48381f;
L_483812: /* 483812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483813: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48381a: call 0x479b27 */
  esp -= 4; W32(esp, 0x48381fu); SPILL(); f_479b27(); if (g_unwind) return; RELOAD();
L_48381f: /* 48381f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483820: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 483823: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 483826: call 0x461389 */
  esp -= 4; W32(esp, 0x48382bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48382b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 48382e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 483831: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483832: call 0x464a5a */
  esp -= 4; W32(esp, 0x483837u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 483837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483838: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48383f: call 0x4659be */
  esp -= 4; W32(esp, 0x483844u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 483844: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483845: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 483848: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 48384b: call 0x461389 */
  esp -= 4; W32(esp, 0x483850u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 483850: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 483854: and byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffebu), r);
  }
/* 483858: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 48385a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48385b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48385c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 48385f: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 483862: call 0x4624dd */
  esp -= 4; W32(esp, 0x483867u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 483867: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483868: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48386e: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 483875: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 483878: call 0x4624dd */
  esp -= 4; W32(esp, 0x48387du); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 48387d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483880: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 483882: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 483885: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 483886: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48388a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x48388du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48388d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 483890: xor esi, esi */
  esi = 0;
/* 483892: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 483895: jmp 0x48389a */
  goto L_48389a;
L_483897: /* 483897: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_48389a: /* 48389a: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48389d: jae 0x483e2e */
  if (!cf) goto L_483e2e;
L_4838a3: /* 4838a3: mov al, byte ptr [ebp + esi - 0x4c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffb4u))) & 0xffu);
/* 4838a7: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4838a9: je 0x483dee */
  if (zf) goto L_483dee;
L_4838af: /* 4838af: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4838b1: je 0x483d15 */
  if (zf) goto L_483d15;
L_4838b7: /* 4838b7: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4838b9: je 0x483ba1 */
  if (zf) goto L_483ba1;
L_4838bf: /* 4838bf: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4838c1: jne 0x483e20 */
  if (!zf) goto L_483e20;
L_4838c7: /* 4838c7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4838ca: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4838cc: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4838d0: mov ecx, esi */
  ecx = esi;
/* 4838d2: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x4838d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4838d5: mov ebx, eax */
  ebx = eax;
/* 4838d7: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 4838dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4838de: mov ecx, esi */
  ecx = esi;
/* 4838e0: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 4838e3: call 0x471e93 */
  esp -= 4; W32(esp, 0x4838e8u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 4838e8: cmp dword ptr [ebp - 0xa4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff5cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4838ef: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 4838f5: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 4838f9: jae 0x483901 */
  if (!cf) goto L_483901;
L_4838fb: /* 4838fb: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
L_483901: /* 483901: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483904: jle 0x4839e0 */
  if ((zf || sf != of)) goto L_4839e0;
L_48390a: /* 48390a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48390d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 48390f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x483912u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483912: xor esi, esi */
  esi = 0;
/* 483914: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 483915: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483918: mov dword ptr [ebp - 0x28], 0xf */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xfu);
/* 48391f: mov ebx, eax */
  ebx = eax;
/* 483921: call 0x461ed0 */
  esp -= 4; W32(esp, 0x483926u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 483926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 483927: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483929: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 48392c: call 0x4661b6 */
  esp -= 4; W32(esp, 0x483931u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 483931: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483934: mov ecx, edi */
  ecx = edi;
/* 483936: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 48393a: call 0x46e77f */
  esp -= 4; W32(esp, 0x48393fu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48393f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483941: jne 0x483a59 */
  if (!zf) goto L_483a59;
L_483947: /* 483947: mov ecx, edi */
  ecx = edi;
/* 483949: call 0x472198 */
  esp -= 4; W32(esp, 0x48394eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 48394e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 483951: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 483953: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483954: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 483956: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x483959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483959: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48395b: je 0x4839f3 */
  if (zf) goto L_4839f3;
L_483961: /* 483961: mov ecx, edi */
  ecx = edi;
/* 483963: call 0x472198 */
  esp -= 4; W32(esp, 0x483968u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483968: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48396e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48396f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483971: call 0x473236 */
  esp -= 4; W32(esp, 0x483976u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 483976: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48397a: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 48397d: jae 0x483982 */
  if (!cf) goto L_483982;
L_48397f: /* 48397f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_483982: /* 483982: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483986: je 0x483a23 */
  if (zf) goto L_483a23;
L_48398c: /* 48398c: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483990: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483993: jae 0x483998 */
  if (!cf) goto L_483998;
L_483995: /* 483995: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_483998: /* 483998: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 48399a: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 48399c: jmp 0x483a23 */
  goto L_483a23;
L_4839a1: /* 4839a1: mov ecx, edi */
  ecx = edi;
/* 4839a3: call 0x472198 */
  esp -= 4; W32(esp, 0x4839a8u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4839a8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4839ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4839ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4839ae: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4839b0: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x4839b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4839b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4839b5: je 0x483ada */
  if (zf) goto L_483ada;
L_4839bb: /* 4839bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4839bd: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 4839c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4839c4: mov ecx, edi */
  ecx = edi;
/* 4839c6: call 0x4721ac */
  esp -= 4; W32(esp, 0x4839cbu); SPILL(); f_4721ac(); if (g_unwind) return; RELOAD();
/* 4839cb: mov ecx, eax */
  ecx = eax;
/* 4839cd: call 0x472198 */
  esp -= 4; W32(esp, 0x4839d2u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4839d2: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4839d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4839d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4839db: call 0x473236 */
  esp -= 4; W32(esp, 0x4839e0u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
L_4839e0: /* 4839e0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4839e3: mov ecx, edi */
  ecx = edi;
/* 4839e5: call 0x46e77f */
  esp -= 4; W32(esp, 0x4839eau); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 4839ea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4839ec: je 0x4839a1 */
  if (zf) goto L_4839a1;
L_4839ee: /* 4839ee: jmp 0x483ada */
  goto L_483ada;
L_4839f3: /* 4839f3: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4839f7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 4839fa: jae 0x4839ff */
  if (!cf) goto L_4839ff;
L_4839fc: /* 4839fc: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_4839ff: /* 4839ff: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483a03: je 0x483a3c */
  if (zf) goto L_483a3c;
L_483a05: /* 483a05: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 483a08: je 0x483a3c */
  if (zf) goto L_483a3c;
L_483a0a: /* 483a0a: mov ecx, edi */
  ecx = edi;
/* 483a0c: call 0x472198 */
  esp -= 4; W32(esp, 0x483a11u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483a11: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483a14: jne 0x483a3c */
  if (!zf) goto L_483a3c;
L_483a16: /* 483a16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483a18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483a1a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483a1d: call 0x466156 */
  esp -= 4; W32(esp, 0x483a22u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 483a22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_483a23: /* 483a23: mov ecx, edi */
  ecx = edi;
/* 483a25: call 0x46c756 */
  esp -= 4; W32(esp, 0x483a2au); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483a2a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483a2d: mov ecx, edi */
  ecx = edi;
/* 483a2f: call 0x46e77f */
  esp -= 4; W32(esp, 0x483a34u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483a34: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483a36: je 0x483947 */
  if (zf) goto L_483947;
L_483a3c: /* 483a3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 483a3e: je 0x483a59 */
  if (zf) goto L_483a59;
L_483a40: /* 483a40: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483a44: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483a47: jae 0x483a4c */
  if (!cf) goto L_483a4c;
L_483a49: /* 483a49: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_483a4c: /* 483a4c: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483a50: jle 0x483a55 */
  if ((zf || sf != of)) goto L_483a55;
L_483a52: /* 483a52: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483a53: jmp 0x483a59 */
  goto L_483a59;
L_483a55: /* 483a55: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_483a59: /* 483a59: cmp dword ptr [ebp - 0xa4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff5cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483a60: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 483a66: jae 0x483a6e */
  if (!cf) goto L_483a6e;
L_483a68: /* 483a68: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
L_483a6e: /* 483a6e: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483a72: jne 0x483ab7 */
  if (!zf) goto L_483ab7;
L_483a74: /* 483a74: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 483a76: jbe 0x483ac6 */
  if ((cf | zf)) goto L_483ac6;
L_483a78: /* 483a78: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 483a7a: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483a7c: je 0x483ac6 */
  if (zf) goto L_483ac6;
L_483a7e: /* 483a7e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 483a7f: je 0x483a92 */
  if (zf) goto L_483a92;
L_483a81: /* 483a81: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483a85: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483a88: jae 0x483a8d */
  if (!cf) goto L_483a8d;
L_483a8a: /* 483a8a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_483a8d: /* 483a8d: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483a90: jne 0x483ab3 */
  if (!zf) goto L_483ab3;
L_483a92: /* 483a92: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 483a94: jne 0x483aa7 */
  if (!zf) goto L_483aa7;
L_483a96: /* 483a96: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483a9a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483a9d: jae 0x483aa2 */
  if (!cf) goto L_483aa2;
L_483a9f: /* 483a9f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_483aa2: /* 483aa2: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483aa5: jl 0x483ab3 */
  if ((sf != of)) goto L_483ab3;
L_483aa7: /* 483aa7: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 483aaa: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483aad: jle 0x483a74 */
  if ((zf || sf != of)) goto L_483a74;
L_483aaf: /* 483aaf: mov edx, eax */
  edx = eax;
/* 483ab1: jmp 0x483a74 */
  goto L_483a74;
L_483ab3: /* 483ab3: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_483ab7: /* 483ab7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483ab9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483abc: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483ac1u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483ac1: jmp 0x483b8b */
  goto L_483b8b;
L_483ac6: /* 483ac6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483ac8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483acb: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 483acf: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483ad4u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483ad4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 483ad7: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
L_483ada: /* 483ada: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483add: mov ecx, edi */
  ecx = edi;
/* 483adf: call 0x46e77f */
  esp -= 4; W32(esp, 0x483ae4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483ae4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483ae6: jne 0x483b5c */
  if (!zf) goto L_483b5c;
L_483ae8: /* 483ae8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 483aea: mov ecx, esi */
  ecx = esi;
/* 483aec: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x483aefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483aef: mov ecx, edi */
  ecx = edi;
/* 483af1: mov esi, eax */
  esi = eax;
/* 483af3: call 0x472198 */
  esp -= 4; W32(esp, 0x483af8u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483af8: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483afb: jne 0x483b5c */
  if (!zf) goto L_483b5c;
L_483afd: /* 483afd: mov ecx, edi */
  ecx = edi;
/* 483aff: call 0x46c756 */
  esp -= 4; W32(esp, 0x483b04u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483b04: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483b07: mov ecx, edi */
  ecx = edi;
/* 483b09: call 0x46e77f */
  esp -= 4; W32(esp, 0x483b0eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483b0e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483b10: jne 0x483b5c */
  if (!zf) goto L_483b5c;
L_483b12: /* 483b12: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_483b15: /* 483b15: mov ecx, edi */
  ecx = edi;
/* 483b17: call 0x472198 */
  esp -= 4; W32(esp, 0x483b1cu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483b1c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 483b1e: mov ecx, esi */
  ecx = esi;
/* 483b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483b21: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 483b23: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x483b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483b26: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483b28: je 0x483b5c */
  if (zf) goto L_483b5c;
L_483b2a: /* 483b2a: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 483b2d: jge 0x483b47 */
  if ((sf == of)) goto L_483b47;
L_483b2f: /* 483b2f: mov ecx, edi */
  ecx = edi;
/* 483b31: call 0x472198 */
  esp -= 4; W32(esp, 0x483b36u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483b36: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483b3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483b3d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483b3f: call 0x473236 */
  esp -= 4; W32(esp, 0x483b44u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 483b44: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_483b47: /* 483b47: mov ecx, edi */
  ecx = edi;
/* 483b49: call 0x46c756 */
  esp -= 4; W32(esp, 0x483b4eu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483b4e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483b51: mov ecx, edi */
  ecx = edi;
/* 483b53: call 0x46e77f */
  esp -= 4; W32(esp, 0x483b58u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483b58: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483b5a: je 0x483b15 */
  if (zf) goto L_483b15;
L_483b5c: /* 483b5c: cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff90u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483b60: jne 0x483b68 */
  if (!zf) goto L_483b68;
L_483b62: /* 483b62: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 483b66: jmp 0x483b8b */
  goto L_483b8b;
L_483b68: /* 483b68: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 483b6b: jge 0x483b8b */
  if ((sf == of)) goto L_483b8b;
L_483b6d: /* 483b6d: sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 483b70: mov esi, ebx */
  esi = ebx;
L_483b72: /* 483b72: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 483b74: call 0x461d6f */
  esp -= 4; W32(esp, 0x483b79u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 483b79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483b7a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483b81: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483b83: call 0x473236 */
  esp -= 4; W32(esp, 0x483b88u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 483b88: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 483b89: jne 0x483b72 */
  if (!zf) goto L_483b72;
L_483b8b: /* 483b8b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483b8d: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 483b93: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483b97: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483b9cu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483b9c: jmp 0x483e20 */
  goto L_483e20;
L_483ba1: /* 483ba1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483ba4: mov ecx, edi */
  ecx = edi;
/* 483ba6: call 0x46e77f */
  esp -= 4; W32(esp, 0x483babu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483bab: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483bad: jne 0x483e20 */
  if (!zf) goto L_483e20;
L_483bb3: /* 483bb3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483bb6: lea eax, [ebp - 0x120] */
  eax = (uint32_t)(ebp + 0xfffffee0u);
/* 483bbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483bbd: call 0x471ec1 */
  esp -= 4; W32(esp, 0x483bc2u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 483bc2: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483bc6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 483bca: jbe 0x483c0c */
  if ((cf | zf)) goto L_483c0c;
L_483bcc: /* 483bcc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483bcf: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 483bd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483bd6: call 0x471ec1 */
  esp -= 4; W32(esp, 0x483bdbu); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 483bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483bdd: mov ecx, eax */
  ecx = eax;
/* 483bdf: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 483be3: call 0x461123 */
  esp -= 4; W32(esp, 0x483be8u); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 483be8: mov ecx, edi */
  ecx = edi;
/* 483bea: mov esi, eax */
  esi = eax;
/* 483bec: call 0x472198 */
  esp -= 4; W32(esp, 0x483bf1u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483bf1: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483bf4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483bf6: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 483bfc: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 483bff: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483c04u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483c04: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483c06: je 0x483c0c */
  if (zf) goto L_483c0c;
L_483c08: /* 483c08: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 483c0a: jmp 0x483c0e */
  goto L_483c0e;
L_483c0c: /* 483c0c: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_483c0e: /* 483c0e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483c10: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 483c16: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483c1a: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483c1fu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483c1f: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483c21: je 0x483c60 */
  if (zf) goto L_483c60;
L_483c23: /* 483c23: mov ecx, edi */
  ecx = edi;
/* 483c25: call 0x46c756 */
  esp -= 4; W32(esp, 0x483c2au); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483c2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483c2d: lea eax, [ebp - 0xe8] */
  eax = (uint32_t)(ebp + 0xffffff18u);
/* 483c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483c34: call 0x471ec1 */
  esp -= 4; W32(esp, 0x483c39u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 483c39: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483c3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483c3e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483c41: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 483c45: call 0x47a171 */
  esp -= 4; W32(esp, 0x483c4au); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 483c4a: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
L_483c50: /* 483c50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483c52: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483c56: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483c5bu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483c5b: jmp 0x483e20 */
  goto L_483e20;
L_483c60: /* 483c60: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483c63: lea eax, [ebp - 0x13c] */
  eax = (uint32_t)(ebp + 0xfffffec4u);
/* 483c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483c6a: call 0x471ed8 */
  esp -= 4; W32(esp, 0x483c6fu); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 483c6f: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483c73: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 483c77: jbe 0x483cb9 */
  if ((cf | zf)) goto L_483cb9;
L_483c79: /* 483c79: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483c7c: lea eax, [ebp - 0x104] */
  eax = (uint32_t)(ebp + 0xfffffefcu);
/* 483c82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483c83: call 0x471ed8 */
  esp -= 4; W32(esp, 0x483c88u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 483c88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483c8a: mov ecx, eax */
  ecx = eax;
/* 483c8c: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 483c90: call 0x461123 */
  esp -= 4; W32(esp, 0x483c95u); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 483c95: mov ecx, edi */
  ecx = edi;
/* 483c97: mov esi, eax */
  esi = eax;
/* 483c99: call 0x472198 */
  esp -= 4; W32(esp, 0x483c9eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483c9e: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483ca1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483ca3: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 483ca9: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 483cac: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483cb1u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483cb1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483cb3: je 0x483cb9 */
  if (zf) goto L_483cb9;
L_483cb5: /* 483cb5: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 483cb7: jmp 0x483cbb */
  goto L_483cbb;
L_483cb9: /* 483cb9: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_483cbb: /* 483cbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483cbd: lea ecx, [ebp - 0x13c] */
  ecx = (uint32_t)(ebp + 0xfffffec4u);
/* 483cc3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483cc7: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483cccu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483ccc: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483cce: je 0x483e20 */
  if (zf) goto L_483e20;
L_483cd4: /* 483cd4: mov ecx, edi */
  ecx = edi;
/* 483cd6: call 0x46c756 */
  esp -= 4; W32(esp, 0x483cdbu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483cdb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483cde: lea eax, [ebp - 0x174] */
  eax = (uint32_t)(ebp + 0xfffffe8cu);
/* 483ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483ce5: call 0x471ed8 */
  esp -= 4; W32(esp, 0x483ceau); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 483cea: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483cef: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483cf2: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 483cf6: call 0x47a171 */
  esp -= 4; W32(esp, 0x483cfbu); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 483cfb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483cfd: lea ecx, [ebp - 0x174] */
  ecx = (uint32_t)(ebp + 0xfffffe8cu);
/* 483d03: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483d07: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483d0cu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483d0c: mov byte ptr [ebp - 0x15], 1 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x1u);
/* 483d10: jmp 0x483e20 */
  goto L_483e20;
L_483d15: /* 483d15: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483d18: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 483d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483d1f: call 0x471eaa */
  esp -= 4; W32(esp, 0x483d24u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 483d24: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 483d27: test byte ptr [eax + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483d2b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 483d2f: jne 0x483d79 */
  if (!zf) goto L_483d79;
L_483d31: /* 483d31: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483d34: jne 0x483d79 */
  if (!zf) goto L_483d79;
L_483d36: /* 483d36: cmp dword ptr [ebp - 0x54], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483d3a: ja 0x483d79 */
  if ((!cf && !zf)) goto L_483d79;
L_483d3c: /* 483d3c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483d3f: mov ecx, edi */
  ecx = edi;
/* 483d41: call 0x46e77f */
  esp -= 4; W32(esp, 0x483d46u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483d46: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483d48: jne 0x483d6b */
  if (!zf) goto L_483d6b;
L_483d4a: /* 483d4a: cmp dword ptr [ebp - 0x88], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483d51: mov esi, dword ptr [ebp - 0x9c] */
  esi = R32((uint32_t)(ebp + 0xffffff64u));
/* 483d57: jae 0x483d5f */
  if (!cf) goto L_483d5f;
L_483d59: /* 483d59: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
L_483d5f: /* 483d5f: mov ecx, edi */
  ecx = edi;
/* 483d61: call 0x472198 */
  esp -= 4; W32(esp, 0x483d66u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483d66: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483d69: je 0x483d79 */
  if (zf) goto L_483d79;
L_483d6b: /* 483d6b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483d6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483d6e: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 483d74: call 0x47349c */
  esp -= 4; W32(esp, 0x483d79u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
L_483d79: /* 483d79: cmp dword ptr [ebp - 0x88], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483d80: mov esi, dword ptr [ebp - 0x9c] */
  esi = R32((uint32_t)(ebp + 0xffffff64u));
/* 483d86: jae 0x483dbb */
  if (!cf) goto L_483dbb;
L_483d88: /* 483d88: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 483d8e: jmp 0x483dbb */
  goto L_483dbb;
L_483d90: /* 483d90: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 483d96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483d97: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 483d9d: call 0x46adc2 */
  esp -= 4; W32(esp, 0x483da2u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 483da2: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483da4: je 0x483dc9 */
  if (zf) goto L_483dc9;
L_483da6: /* 483da6: mov ecx, edi */
  ecx = edi;
/* 483da8: call 0x472198 */
  esp -= 4; W32(esp, 0x483dadu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483dad: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483db0: jne 0x483dc9 */
  if (!zf) goto L_483dc9;
L_483db2: /* 483db2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483db3: mov ecx, edi */
  ecx = edi;
/* 483db5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483db6: call 0x46c756 */
  esp -= 4; W32(esp, 0x483dbbu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_483dbb: /* 483dbb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483dbe: mov ecx, edi */
  ecx = edi;
/* 483dc0: call 0x46e77f */
  esp -= 4; W32(esp, 0x483dc5u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483dc5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483dc7: je 0x483d90 */
  if (zf) goto L_483d90;
L_483dc9: /* 483dc9: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 483dcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483dd0: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 483dd6: call 0x46adc2 */
  esp -= 4; W32(esp, 0x483ddbu); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 483ddb: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483ddd: je 0x483de3 */
  if (zf) goto L_483de3;
L_483ddf: /* 483ddf: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_483de3: /* 483de3: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 483de9: jmp 0x483c50 */
  goto L_483c50;
L_483dee: /* 483dee: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483df1: je 0x483e20 */
  if (zf) goto L_483e20;
L_483df3: /* 483df3: jmp 0x483e12 */
  goto L_483e12;
L_483df5: /* 483df5: mov ecx, edi */
  ecx = edi;
/* 483df7: call 0x472198 */
  esp -= 4; W32(esp, 0x483dfcu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483dfc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 483dff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 483e01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483e02: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 483e04: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x483e07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483e07: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483e09: je 0x483e20 */
  if (zf) goto L_483e20;
L_483e0b: /* 483e0b: mov ecx, edi */
  ecx = edi;
/* 483e0d: call 0x46c756 */
  esp -= 4; W32(esp, 0x483e12u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_483e12: /* 483e12: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483e15: mov ecx, edi */
  ecx = edi;
/* 483e17: call 0x46e77f */
  esp -= 4; W32(esp, 0x483e1cu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483e1c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483e1e: je 0x483df5 */
  if (zf) goto L_483df5;
L_483e20: /* 483e20: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 483e23: xor ebx, ebx */
  ebx = 0;
/* 483e25: cmp byte ptr [ebp + 0x17], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483e28: je 0x483897 */
  if (zf) goto L_483897;
L_483e2e: /* 483e2e: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483e32: jne 0x483e8b */
  if (!zf) goto L_483e8b;
L_483e34: /* 483e34: cmp dword ptr [ebp - 0x54], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483e38: jbe 0x483e9b */
  if ((cf | zf)) goto L_483e9b;
L_483e3a: /* 483e3a: cmp dword ptr [ebp - 0x50], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483e3e: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 483e41: jae 0x483e6d */
  if (!cf) goto L_483e6d;
L_483e43: /* 483e43: lea esi, [ebp - 0x64] */
  esi = (uint32_t)(ebp + 0xffffff9cu);
/* 483e46: jmp 0x483e6d */
  goto L_483e6d;
L_483e48: /* 483e48: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 483e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483e4c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483e4f: call 0x46adc2 */
  esp -= 4; W32(esp, 0x483e54u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 483e54: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483e55: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483e56: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483e58: je 0x483e7b */
  if (zf) goto L_483e7b;
L_483e5a: /* 483e5a: mov ecx, edi */
  ecx = edi;
/* 483e5c: call 0x472198 */
  esp -= 4; W32(esp, 0x483e61u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483e61: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483e64: jne 0x483e7b */
  if (!zf) goto L_483e7b;
L_483e66: /* 483e66: mov ecx, edi */
  ecx = edi;
/* 483e68: call 0x46c756 */
  esp -= 4; W32(esp, 0x483e6du); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_483e6d: /* 483e6d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483e70: mov ecx, edi */
  ecx = edi;
/* 483e72: call 0x46e77f */
  esp -= 4; W32(esp, 0x483e77u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483e77: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483e79: je 0x483e48 */
  if (zf) goto L_483e48;
L_483e7b: /* 483e7b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 483e7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483e7f: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483e82: call 0x46adc2 */
  esp -= 4; W32(esp, 0x483e87u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 483e87: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483e89: je 0x483e9b */
  if (zf) goto L_483e9b;
L_483e8b: /* 483e8b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483e8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483e8e: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483e94: call 0x47349c */
  esp -= 4; W32(esp, 0x483e99u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 483e99: jmp 0x483eb8 */
  goto L_483eb8;
L_483e9b: /* 483e9b: cmp byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483e9f: je 0x483eb8 */
  if (zf) goto L_483eb8;
L_483ea1: /* 483ea1: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 483ea3: call 0x461d6f */
  esp -= 4; W32(esp, 0x483ea8u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 483ea8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483ea9: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483eb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483eb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483eb3: call 0x4733c4 */
  esp -= 4; W32(esp, 0x483eb8u); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
L_483eb8: /* 483eb8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 483ebb: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 483ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483ec2: call 0x47d83c */
  esp -= 4; W32(esp, 0x483ec7u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 483ec7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483ec9: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483ecf: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483ed4u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483ed4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483ed6: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483ed9: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483edeu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483ede: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 483ee1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 483ee4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 483eeb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 483eee: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 483ef1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 483ef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 483ef3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 483ef4: call 0x46190c */
  esp -= 4; W32(esp, 0x483ef9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 483ef9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 483efa: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_483efd(void) {
  LOAD_REGS();
L_483efd: /* 483efd: mov eax, 0x48d72d */
  eax = 0x48d72du;
/* 483f02: call 0x4616c0 */
  esp -= 4; W32(esp, 0x483f07u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 483f07: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 483f0d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 483f12: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 483f15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483f16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 483f17: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 483f1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 483f1b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 483f1e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 483f22: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 483f25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483f26: call 0x464a5a */
  esp -= 4; W32(esp, 0x483f2bu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 483f2b: cmp byte ptr [ebp + 0x14], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483f2f: je 0x483f3d */
  if (zf) goto L_483f3d;
L_483f31: /* 483f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483f32: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 483f36: call 0x47d5ba */
  esp -= 4; W32(esp, 0x483f3bu); SPILL(); f_47d5ba(); if (g_unwind) return; RELOAD();
/* 483f3b: jmp 0x483f47 */
  goto L_483f47;
L_483f3d: /* 483f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483f3e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 483f42: call 0x4799e3 */
  esp -= 4; W32(esp, 0x483f47u); SPILL(); f_4799e3(); if (g_unwind) return; RELOAD();
L_483f47: /* 483f47: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 483f4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483f4c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 483f4f: mov ebx, eax */
  ebx = eax;
/* 483f51: call 0x461389 */
  esp -= 4; W32(esp, 0x483f56u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 483f56: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 483f58: mov ecx, ebx */
  ecx = ebx;
/* 483f5a: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x483f5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483f5d: mov esi, eax */
  esi = eax;
/* 483f5f: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 483f62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483f63: mov ecx, ebx */
  ecx = ebx;
/* 483f65: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 483f68: call 0x471e93 */
  esp -= 4; W32(esp, 0x483f6du); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 483f6d: cmp esi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483f70: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 483f74: jae 0x483fd0 */
  if (!cf) goto L_483fd0;
L_483f76: /* 483f76: cmp dword ptr [ebp - 0x5c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483f7a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 483f7d: jae 0x483f82 */
  if (!cf) goto L_483f82;
L_483f7f: /* 483f7f: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
L_483f82: /* 483f82: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483f85: jle 0x483fd0 */
  if ((zf || sf != of)) goto L_483fd0;
L_483f87: /* 483f87: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 483f89: mov ecx, ebx */
  ecx = ebx;
/* 483f8b: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x483f8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483f8e: cmp dword ptr [ebp - 0x5c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483f92: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 483f95: mov byte ptr [ebp + 0x14], al */
  W8((uint32_t)(ebp + 0x14u), (eax & 0xffu));
/* 483f98: jae 0x483f9d */
  if (!cf) goto L_483f9d;
L_483f9a: /* 483f9a: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
L_483f9d: /* 483f9d: mov esi, dword ptr [ebp + 0x38] */
  esi = R32((uint32_t)(ebp + 0x38u));
/* 483fa0: sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 483fa3: jmp 0x483fca */
  goto L_483fca;
L_483fa5: /* 483fa5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 483fa7: jle 0x483fd0 */
  if ((zf || sf != of)) goto L_483fd0;
L_483fa9: /* 483fa9: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 483fac: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483fae: jae 0x483fd0 */
  if (!cf) goto L_483fd0;
L_483fb0: /* 483fb0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 483fb3: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 483fb5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483fb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 483fb8: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 483fbb: call 0x46640d */
  esp -= 4; W32(esp, 0x483fc0u); SPILL(); f_46640d(); if (g_unwind) return; RELOAD();
/* 483fc0: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 483fc3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483fc6: jle 0x483fca */
  if ((zf || sf != of)) goto L_483fca;
L_483fc8: /* 483fc8: mov edi, eax */
  edi = eax;
L_483fca: /* 483fca: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 483fcc: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483fce: jne 0x483fa5 */
  if (!zf) goto L_483fa5;
L_483fd0: /* 483fd0: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 483fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 483fd3: xor edi, edi */
  edi = 0;
/* 483fd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 483fd6: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 483fd9: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 483fdc: call 0x461ed0 */
  esp -= 4; W32(esp, 0x483fe1u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 483fe1: cmp byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483fe5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 483fe7: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 483fea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 483feb: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483fef: mov ecx, ebx */
  ecx = ebx;
/* 483ff1: je 0x484010 */
  if (zf) goto L_484010;
L_483ff3: /* 483ff3: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x483ff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483ff6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 483ff9: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 483ffc: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 484002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484003: mov ecx, ebx */
  ecx = ebx;
/* 484005: call 0x471ed8 */
  esp -= 4; W32(esp, 0x48400au); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 48400a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 48400e: jmp 0x48402b */
  goto L_48402b;
L_484010: /* 484010: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x484013u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484013: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 484016: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 484019: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 48401f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484020: mov ecx, ebx */
  ecx = ebx;
/* 484022: call 0x471ec1 */
  esp -= 4; W32(esp, 0x484027u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 484027: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
L_48402b: /* 48402b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48402d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48402e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 484031: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484032: call 0x467320 */
  esp -= 4; W32(esp, 0x484037u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 484037: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48403d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48403f: call 0x461ea8 */
  esp -= 4; W32(esp, 0x484044u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 484044: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484045: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 484048: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 48404b: call 0x461ed0 */
  esp -= 4; W32(esp, 0x484050u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 484050: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 484053: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 484056: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484058: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 48405c: je 0x48408d */
  if (zf) goto L_48408d;
L_48405e: /* 48405e: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 484064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484065: mov ecx, ebx */
  ecx = ebx;
/* 484067: call 0x471eaa */
  esp -= 4; W32(esp, 0x48406cu); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 48406c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48406e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48406f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484070: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 484073: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 484077: call 0x467320 */
  esp -= 4; W32(esp, 0x48407cu); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 48407c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48407e: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 484084: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 484088: call 0x461ea8 */
  esp -= 4; W32(esp, 0x48408du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_48408d: /* 48408d: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 484091: xor edx, edx */
  edx = 0;
/* 484093: xor ecx, ecx */
  ecx = 0;
/* 484095: jmp 0x484099 */
  goto L_484099;
L_484097: /* 484097: xor edi, edi */
  edi = 0;
L_484099: /* 484099: mov al, byte ptr [ebp + ecx + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + ecx + 0x20u))) & 0xffu);
/* 48409d: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48409f: je 0x4840da */
  if (zf) goto L_4840da;
L_4840a1: /* 4840a1: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4840a3: je 0x4840d5 */
  if (zf) goto L_4840d5;
L_4840a5: /* 4840a5: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4840a7: je 0x4840d0 */
  if (zf) goto L_4840d0;
L_4840a9: /* 4840a9: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4840ab: jne 0x4840de */
  if (!zf) goto L_4840de;
L_4840ad: /* 4840ad: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4840b0: cmp dword ptr [ebp + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4840b3: ja 0x4840bd */
  if ((!cf && !zf)) goto L_4840bd;
L_4840b5: /* 4840b5: mov eax, esi */
  eax = esi;
/* 4840b7: sub eax, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4840ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4840bb: jmp 0x4840bf */
  goto L_4840bf;
L_4840bd: /* 4840bd: xor eax, eax */
  eax = 0;
L_4840bf: /* 4840bf: xor edi, edi */
  edi = 0;
/* 4840c1: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4840c3: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 4840c5: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4840c7: add esi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4840ca: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4840cc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4840ce: jmp 0x4840de */
  goto L_4840de;
L_4840d0: /* 4840d0: add edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4840d3: jmp 0x4840de */
  goto L_4840de;
L_4840d5: /* 4840d5: add edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4840d8: jmp 0x4840de */
  goto L_4840de;
L_4840da: /* 4840da: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_4840de: /* 4840de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4840df: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4840e2: jb 0x484097 */
  if (cf) goto L_484097;
L_4840e4: /* 4840e4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4840e7: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 4840ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4840ec: jle 0x4840f8 */
  if ((zf || sf != of)) goto L_4840f8;
L_4840ee: /* 4840ee: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4840f0: jbe 0x4840f8 */
  if ((cf | zf)) goto L_4840f8;
L_4840f2: /* 4840f2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4840f4: mov edi, eax */
  edi = eax;
/* 4840f6: jmp 0x4840fa */
  goto L_4840fa;
L_4840f8: /* 4840f8: xor edi, edi */
  edi = 0;
L_4840fa: /* 4840fa: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4840fd: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 484100: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 484105: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484108: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 48410b: je 0x48413d */
  if (zf) goto L_48413d;
L_48410d: /* 48410d: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484112: jne 0x48411a */
  if (!zf) goto L_48411a;
L_484114: /* 484114: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484118: jne 0x48413d */
  if (!zf) goto L_48413d;
L_48411a: /* 48411a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48411b: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48411e: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 484121: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484124: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484128: call 0x472063 */
  esp -= 4; W32(esp, 0x48412du); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 48412d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 48412f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484132: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484135: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484138: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 48413b: xor edi, edi */
  edi = 0;
L_48413d: /* 48413d: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_484141: /* 484141: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 484144: mov al, byte ptr [ebp + eax + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0x20u))) & 0xffu);
/* 484148: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48414a: je 0x4842a8 */
  if (zf) goto L_4842a8;
L_484150: /* 484150: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484152: je 0x48427a */
  if (zf) goto L_48427a;
L_484158: /* 484158: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48415a: je 0x484259 */
  if (zf) goto L_484259;
L_484160: /* 484160: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484162: jne 0x4842d7 */
  if (!zf) goto L_4842d7;
L_484168: /* 484168: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48416b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48416d: jne 0x48418e */
  if (!zf) goto L_48418e;
L_48416f: /* 48416f: cmp dword ptr [ebp + 0x3c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484173: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 484176: jae 0x48417b */
  if (!cf) goto L_48417b;
L_484178: /* 484178: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_48417b: /* 48417b: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 48417e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48417f: mov eax, esp */
  eax = esp;
/* 484181: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484183: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 484189: jmp 0x484294 */
  goto L_484294;
L_48418e: /* 48418e: cmp dword ptr [ebp + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484191: ja 0x4841f1 */
  if ((!cf && !zf)) goto L_4841f1;
L_484193: /* 484193: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 484195: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 484198: call 0x46c6ef */
  esp -= 4; W32(esp, 0x48419du); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 48419d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 48419f: mov ecx, ebx */
  ecx = ebx;
/* 4841a1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4841a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4841a4: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4841a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4841a8: call 0x46c6ef */
  esp -= 4; W32(esp, 0x4841adu); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 4841ad: sub esi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4841b0: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 4841b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4841b7: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4841b9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4841bc: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4841bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4841c0: call 0x472063 */
  esp -= 4; W32(esp, 0x4841c5u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 4841c5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4841c7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4841ca: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 4841cd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4841d0: cmp dword ptr [ebp + 0x3c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4841d4: jae 0x4841d9 */
  if (!cf) goto L_4841d9;
L_4841d6: /* 4841d6: lea edx, [ebp + 0x28] */
  edx = (uint32_t)(ebp + 0x28u);
L_4841d9: /* 4841d9: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 4841dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4841dd: mov ecx, esp */
  ecx = esp;
/* 4841df: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 4841e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4841e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4841e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4841e6: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 4841ec: jmp 0x48429d */
  goto L_48429d;
L_4841f1: /* 4841f1: cmp dword ptr [ebp + 0x3c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4841f5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 4841f8: jae 0x4841fd */
  if (!cf) goto L_4841fd;
L_4841fa: /* 4841fa: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_4841fd: /* 4841fd: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 484200: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484203: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484204: mov eax, esp */
  eax = esp;
/* 484206: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484209: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48420c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 48420e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484211: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 484217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484218: call 0x46f2aa */
  esp -= 4; W32(esp, 0x48421du); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 48421d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 48421f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484222: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484225: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 484228: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 48422a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48422d: mov ecx, ebx */
  ecx = ebx;
/* 48422f: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x484232u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484232: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 484235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484236: call 0x46c6ef */
  esp -= 4; W32(esp, 0x48423bu); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 48423b: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 48423e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48423f: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484242: call 0x465162 */
  esp -= 4; W32(esp, 0x484247u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 484247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 484249: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48424a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48424b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48424d: mov ecx, esp */
  ecx = esp;
/* 48424f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 484251: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 484257: jmp 0x484294 */
  goto L_484294;
L_484259: /* 484259: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48425d: jbe 0x4842d7 */
  if ((cf | zf)) goto L_4842d7;
L_48425f: /* 48425f: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484263: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 484266: jae 0x48426b */
  if (!cf) goto L_48426b;
L_484268: /* 484268: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
L_48426b: /* 48426b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48426d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48426e: mov eax, esp */
  eax = esp;
/* 484270: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484272: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 484278: jmp 0x484294 */
  goto L_484294;
L_48427a: /* 48427a: cmp dword ptr [ebp - 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48427e: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 484281: jae 0x484286 */
  if (!cf) goto L_484286;
L_484283: /* 484283: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
L_484286: /* 484286: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 484289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48428a: mov eax, esp */
  eax = esp;
/* 48428c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 48428e: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
L_484294: /* 484294: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484297: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48429a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
L_48429d: /* 48429d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48429e: call 0x46f2aa */
  esp -= 4; W32(esp, 0x4842a3u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 4842a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4842a6: jmp 0x4842cc */
  goto L_4842cc;
L_4842a8: /* 4842a8: cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4842af: jne 0x4842d7 */
  if (!zf) goto L_4842d7;
L_4842b1: /* 4842b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4842b2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4842b5: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 4842bb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4842be: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4842c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4842c2: call 0x472063 */
  esp -= 4; W32(esp, 0x4842c7u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 4842c7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4842ca: xor edi, edi */
  edi = 0;
L_4842cc: /* 4842cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4842ce: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4842d1: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4842d4: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_4842d7: /* 4842d7: inc dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4842da: cmp dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4842de: jb 0x484141 */
  if (cf) goto L_484141;
L_4842e4: /* 4842e4: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4842e7: xor esi, esi */
  esi = 0;
/* 4842e9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4842ea: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4842ec: jbe 0x484325 */
  if ((cf | zf)) goto L_484325;
L_4842ee: /* 4842ee: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4842f2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 4842f5: jae 0x4842fa */
  if (!cf) goto L_4842fa;
L_4842f7: /* 4842f7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_4842fa: /* 4842fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4842fb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4842fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4842fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4842fe: mov ecx, esp */
  ecx = esp;
/* 484300: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 484303: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484306: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 484308: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48430b: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 484311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484312: call 0x46f2aa */
  esp -= 4; W32(esp, 0x484317u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 484317: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484319: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48431c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48431f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484322: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_484325: /* 484325: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 484328: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 48432c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48432d: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 484330: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484333: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484336: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 484339: call 0x472063 */
  esp -= 4; W32(esp, 0x48433eu); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 48433e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484342: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 484345: call 0x461ea8 */
  esp -= 4; W32(esp, 0x48434au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 48434a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48434b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 48434e: call 0x461ea8 */
  esp -= 4; W32(esp, 0x484353u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 484353: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484354: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 484357: call 0x461ea8 */
  esp -= 4; W32(esp, 0x48435cu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 48435c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48435d: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484360: call 0x461ea8 */
  esp -= 4; W32(esp, 0x484365u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 484365: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 484368: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48436b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 484372: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 484375: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 484378: call 0x46190c */
  esp -= 4; W32(esp, 0x48437du); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48437d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48437e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48437f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484380: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 484381: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_484384(void) {
  LOAD_REGS();
L_484384: /* 484384: mov eax, 0x48d788 */
  eax = 0x48d788u;
/* 484389: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48438eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48438e: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 484394: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 484399: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48439c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48439d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48439e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4843a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4843a2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4843a5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4843a9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4843ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4843ad: call 0x464a5a */
  esp -= 4; W32(esp, 0x4843b2u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4843b2: cmp byte ptr [ebp + 0x14], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4843b6: je 0x4843d6 */
  if (zf) goto L_4843d6;
L_4843b8: /* 4843b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4843b9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4843bd: call 0x47d65c */
  esp -= 4; W32(esp, 0x4843c2u); SPILL(); f_47d65c(); if (g_unwind) return; RELOAD();
/* 4843c2: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4843c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4843c7: mov esi, eax */
  esi = eax;
/* 4843c9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4843cc: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4843cf: call 0x461389 */
  esp -= 4; W32(esp, 0x4843d4u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4843d4: jmp 0x4843f3 */
  goto L_4843f3;
L_4843d6: /* 4843d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4843d7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4843db: call 0x479a85 */
  esp -= 4; W32(esp, 0x4843e0u); SPILL(); f_479a85(); if (g_unwind) return; RELOAD();
/* 4843e0: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4843e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4843e5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4843e8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 4843eb: call 0x461389 */
  esp -= 4; W32(esp, 0x4843f0u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4843f0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_4843f3: /* 4843f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4843f5: mov ecx, esi */
  ecx = esi;
/* 4843f7: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x4843fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4843fa: mov edi, eax */
  edi = eax;
/* 4843fc: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4843ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484400: mov ecx, esi */
  ecx = esi;
/* 484402: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 484405: call 0x471e93 */
  esp -= 4; W32(esp, 0x48440au); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 48440a: cmp edi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48440d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 484411: jae 0x484470 */
  if (!cf) goto L_484470;
L_484413: /* 484413: cmp dword ptr [ebp - 0x64], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484417: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 48441a: jae 0x48441f */
  if (!cf) goto L_48441f;
L_48441c: /* 48441c: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
L_48441f: /* 48441f: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 484422: jle 0x484470 */
  if ((zf || sf != of)) goto L_484470;
L_484424: /* 484424: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 484426: mov ecx, esi */
  ecx = esi;
/* 484428: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x48442bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48442b: cmp dword ptr [ebp - 0x64], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48442f: mov edi, dword ptr [ebp - 0x78] */
  edi = R32((uint32_t)(ebp + 0xffffff88u));
/* 484432: mov ebx, eax */
  ebx = eax;
/* 484434: jae 0x484439 */
  if (!cf) goto L_484439;
L_484436: /* 484436: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
L_484439: /* 484439: mov esi, dword ptr [ebp + 0x38] */
  esi = R32((uint32_t)(ebp + 0x38u));
/* 48443c: sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 48443f: jmp 0x484464 */
  goto L_484464;
L_484441: /* 484441: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 484443: jle 0x48446a */
  if ((zf || sf != of)) goto L_48446a;
L_484445: /* 484445: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 484448: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48444a: jae 0x48446a */
  if (!cf) goto L_48446a;
L_48444c: /* 48444c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48444d: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 48444f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 484451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484452: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484455: call 0x4733c4 */
  esp -= 4; W32(esp, 0x48445au); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
/* 48445a: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 48445d: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 484460: jle 0x484464 */
  if ((zf || sf != of)) goto L_484464;
L_484462: /* 484462: mov edi, eax */
  edi = eax;
L_484464: /* 484464: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 484466: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484468: jne 0x484441 */
  if (!zf) goto L_484441;
L_48446a: /* 48446a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48446d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_484470: /* 484470: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 484472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484473: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 484475: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 484478: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 48447b: call 0x4624dd */
  esp -= 4; W32(esp, 0x484480u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 484480: cmp byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484484: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 484486: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 484489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48448a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48448e: mov ecx, esi */
  ecx = esi;
/* 484490: je 0x4844af */
  if (zf) goto L_4844af;
L_484492: /* 484492: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x484495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484495: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 484498: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 48449b: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 4844a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4844a2: mov ecx, esi */
  ecx = esi;
/* 4844a4: call 0x471ed8 */
  esp -= 4; W32(esp, 0x4844a9u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 4844a9: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 4844ad: jmp 0x4844ca */
  goto L_4844ca;
L_4844af: /* 4844af: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x4844b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4844b2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4844b5: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4844b8: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 4844be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4844bf: mov ecx, esi */
  ecx = esi;
/* 4844c1: call 0x471ec1 */
  esp -= 4; W32(esp, 0x4844c6u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 4844c6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
L_4844ca: /* 4844ca: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4844cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4844ce: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 4844d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4844d2: call 0x47a171 */
  esp -= 4; W32(esp, 0x4844d7u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 4844d7: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 4844dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4844df: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4844e4u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4844e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4844e6: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 4844e9: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 4844ec: call 0x4624dd */
  esp -= 4; W32(esp, 0x4844f1u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4844f1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4844f4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 4844f7: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4844f9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 4844fc: je 0x48452d */
  if (zf) goto L_48452d;
L_4844fe: /* 4844fe: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 484504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484505: mov ecx, esi */
  ecx = esi;
/* 484507: call 0x471eaa */
  esp -= 4; W32(esp, 0x48450cu); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 48450c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48450e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 484510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484511: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 484514: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 484518: call 0x47a171 */
  esp -= 4; W32(esp, 0x48451du); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 48451d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48451f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 484525: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 484528: call 0x4624b0 */
  esp -= 4; W32(esp, 0x48452du); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_48452d: /* 48452d: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 484531: xor edx, edx */
  edx = 0;
/* 484533: xor ecx, ecx */
  ecx = 0;
L_484535: /* 484535: mov al, byte ptr [ebp + ecx - 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffffdcu))) & 0xffu);
/* 484539: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48453b: je 0x484573 */
  if (zf) goto L_484573;
L_48453d: /* 48453d: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48453f: je 0x48456e */
  if (zf) goto L_48456e;
L_484541: /* 484541: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484543: je 0x484569 */
  if (zf) goto L_484569;
L_484545: /* 484545: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484547: jne 0x484577 */
  if (!zf) goto L_484577;
L_484549: /* 484549: cmp dword ptr [ebp + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48454c: ja 0x484556 */
  if ((!cf && !zf)) goto L_484556;
L_48454e: /* 48454e: mov eax, edi */
  eax = edi;
/* 484550: sub eax, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484553: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 484554: jmp 0x484558 */
  goto L_484558;
L_484556: /* 484556: xor eax, eax */
  eax = 0;
L_484558: /* 484558: xor ebx, ebx */
  ebx = 0;
/* 48455a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48455c: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 48455e: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 484560: add ebx, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 484563: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 484565: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 484567: jmp 0x484577 */
  goto L_484577;
L_484569: /* 484569: add edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 48456c: jmp 0x484577 */
  goto L_484577;
L_48456e: /* 48456e: add edx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 484571: jmp 0x484577 */
  goto L_484577;
L_484573: /* 484573: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_484577: /* 484577: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 484578: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48457b: jb 0x484535 */
  if (cf) goto L_484535;
L_48457d: /* 48457d: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 484580: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 484583: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 484585: jle 0x484592 */
  if ((zf || sf != of)) goto L_484592;
L_484587: /* 484587: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484589: jbe 0x484592 */
  if ((cf | zf)) goto L_484592;
L_48458b: /* 48458b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48458d: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 484590: jmp 0x484596 */
  goto L_484596;
L_484592: /* 484592: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
L_484596: /* 484596: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 484599: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48459e: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4845a1: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 4845a4: je 0x4845dd */
  if (zf) goto L_4845dd;
L_4845a6: /* 4845a6: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4845ab: jne 0x4845b3 */
  if (!zf) goto L_4845b3;
L_4845ad: /* 4845ad: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4845b1: jne 0x4845dd */
  if (!zf) goto L_4845dd;
L_4845b3: /* 4845b3: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4845b6: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 4845bc: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4845bf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4845c2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4845c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4845c6: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x4845cbu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 4845cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4845cd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4845d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4845d3: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 4845d7: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4845da: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_4845dd: /* 4845dd: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_4845e1: /* 4845e1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4845e4: mov al, byte ptr [ebp + eax - 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xffffffdcu))) & 0xffu);
/* 4845e8: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4845ea: je 0x484768 */
  if (zf) goto L_484768;
L_4845f0: /* 4845f0: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4845f2: je 0x48473a */
  if (zf) goto L_48473a;
L_4845f8: /* 4845f8: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4845fa: je 0x484719 */
  if (zf) goto L_484719;
L_484600: /* 484600: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484602: jne 0x48479b */
  if (!zf) goto L_48479b;
L_484608: /* 484608: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48460a: jne 0x48462b */
  if (!zf) goto L_48462b;
L_48460c: /* 48460c: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484610: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 484613: jae 0x484618 */
  if (!cf) goto L_484618;
L_484615: /* 484615: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_484618: /* 484618: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 48461b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48461c: mov eax, esp */
  eax = esp;
/* 48461e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484620: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 484626: jmp 0x484754 */
  goto L_484754;
L_48462b: /* 48462b: cmp dword ptr [ebp + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48462e: ja 0x4846ae */
  if ((!cf && !zf)) goto L_4846ae;
L_484630: /* 484630: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 484632: call 0x461d6f */
  esp -= 4; W32(esp, 0x484637u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 484637: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484638: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 48463b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48463c: call 0x46b41f */
  esp -= 4; W32(esp, 0x484641u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 484641: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 484643: mov ecx, esi */
  ecx = esi;
/* 484645: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x484648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484648: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 48464b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48464c: call 0x46b41f */
  esp -= 4; W32(esp, 0x484651u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 484651: sub edi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 484654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484655: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 484657: call 0x461d6f */
  esp -= 4; W32(esp, 0x48465cu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 48465c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48465d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48465e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484661: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 484667: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48466a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48466b: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484670u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484670: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 484672: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484675: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 484678: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48467b: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48467f: jae 0x484684 */
  if (!cf) goto L_484684;
L_484681: /* 484681: lea edx, [ebp + 0x28] */
  edx = (uint32_t)(ebp + 0x28u);
L_484684: /* 484684: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 484687: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484688: mov ecx, esp */
  ecx = esp;
/* 48468a: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 48468d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48468e: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 484694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484696: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 484698: call 0x46f314 */
  esp -= 4; W32(esp, 0x48469du); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 48469d: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4846a0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4846a3: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 4846a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4846a9: jmp 0x484790 */
  goto L_484790;
L_4846ae: /* 4846ae: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4846b2: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 4846b5: jae 0x4846ba */
  if (!cf) goto L_4846ba;
L_4846b7: /* 4846b7: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_4846ba: /* 4846ba: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 4846bd: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4846bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4846c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4846c1: mov eax, esp */
  eax = esp;
/* 4846c3: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 4846c6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4846c9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4846cb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4846ce: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 4846d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4846d5: call 0x46f314 */
  esp -= 4; W32(esp, 0x4846dau); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 4846da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4846dc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4846df: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4846e2: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 4846e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4846e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4846ea: mov ecx, esi */
  ecx = esi;
/* 4846ec: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4846efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4846ef: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4846f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4846f3: call 0x46b41f */
  esp -= 4; W32(esp, 0x4846f8u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 4846f8: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 4846fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4846fc: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 4846ff: call 0x46adc2 */
  esp -= 4; W32(esp, 0x484704u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 484704: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 484706: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 484709: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48470a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48470c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48470d: mov ecx, esp */
  ecx = esp;
/* 48470f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 484711: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 484717: jmp 0x484754 */
  goto L_484754;
L_484719: /* 484719: cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48471d: jbe 0x48479b */
  if ((cf | zf)) goto L_48479b;
L_48471f: /* 48471f: cmp dword ptr [ebp - 0x2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484723: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 484726: jae 0x48472b */
  if (!cf) goto L_48472b;
L_484728: /* 484728: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
L_48472b: /* 48472b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48472d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48472e: mov eax, esp */
  eax = esp;
/* 484730: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484732: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 484738: jmp 0x484754 */
  goto L_484754;
L_48473a: /* 48473a: cmp dword ptr [ebp - 0x48], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48473e: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 484741: jae 0x484746 */
  if (!cf) goto L_484746;
L_484743: /* 484743: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
L_484746: /* 484746: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 484749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48474a: mov eax, esp */
  eax = esp;
/* 48474c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 48474e: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
L_484754: /* 484754: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484757: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48475a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48475d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48475e: call 0x46f314 */
  esp -= 4; W32(esp, 0x484763u); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 484763: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484766: jmp 0x484790 */
  goto L_484790;
L_484768: /* 484768: cmp dword ptr [ebp - 0x28], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48476f: jne 0x48479b */
  if (!zf) goto L_48479b;
L_484771: /* 484771: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 484774: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 48477a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48477d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484780: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484784: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484789u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484789: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48478c: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
L_484790: /* 484790: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484792: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484795: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484798: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_48479b: /* 48479b: inc dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 48479e: cmp dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4847a2: jb 0x4845e1 */
  if (cf) goto L_4845e1;
L_4847a8: /* 4847a8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4847ab: xor esi, esi */
  esi = 0;
/* 4847ad: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4847ae: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4847b0: jbe 0x4847eb */
  if ((cf | zf)) goto L_4847eb;
L_4847b2: /* 4847b2: cmp dword ptr [ebp - 0x2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4847b6: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 4847b9: jae 0x4847be */
  if (!cf) goto L_4847be;
L_4847bb: /* 4847bb: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_4847be: /* 4847be: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4847c1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4847c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4847c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4847c4: mov ecx, esp */
  ecx = esp;
/* 4847c6: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 4847c9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4847cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4847ce: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4847d1: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 4847d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4847d8: call 0x46f314 */
  esp -= 4; W32(esp, 0x4847ddu); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 4847dd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4847df: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4847e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4847e5: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4847e8: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_4847eb: /* 4847eb: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4847ee: and dword ptr [ebx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x14u), r);
  }
/* 4847f2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4847f5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4847f8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4847fb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4847fe: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484803u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484803: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484807: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 48480a: call 0x4624b0 */
  esp -= 4; W32(esp, 0x48480fu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 48480f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484810: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 484813: call 0x4624b0 */
  esp -= 4; W32(esp, 0x484818u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 484818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484819: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 48481c: call 0x461ea8 */
  esp -= 4; W32(esp, 0x484821u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 484821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484822: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484825: call 0x4624b0 */
  esp -= 4; W32(esp, 0x48482au); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 48482a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48482d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 484830: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 484837: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48483a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48483d: call 0x46190c */
  esp -= 4; W32(esp, 0x484842u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 484842: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484843: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484845: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 484846: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_484849(void) {
  LOAD_REGS();
L_484849: /* 484849: mov eax, 0x48d788 */
  eax = 0x48d788u;
/* 48484e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x484853u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 484853: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 484859: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48485e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 484861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484862: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484863: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 484866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484867: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 48486a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48486e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 484871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484872: call 0x464a5a */
  esp -= 4; W32(esp, 0x484877u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 484877: cmp byte ptr [ebp + 0x14], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48487b: je 0x48489b */
  if (zf) goto L_48489b;
L_48487d: /* 48487d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48487e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 484882: call 0x47d6fe */
  esp -= 4; W32(esp, 0x484887u); SPILL(); f_47d6fe(); if (g_unwind) return; RELOAD();
/* 484887: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48488b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48488c: mov esi, eax */
  esi = eax;
/* 48488e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 484891: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 484894: call 0x461389 */
  esp -= 4; W32(esp, 0x484899u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 484899: jmp 0x4848b8 */
  goto L_4848b8;
L_48489b: /* 48489b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48489c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4848a0: call 0x479b27 */
  esp -= 4; W32(esp, 0x4848a5u); SPILL(); f_479b27(); if (g_unwind) return; RELOAD();
/* 4848a5: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4848a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4848aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4848ad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 4848b0: call 0x461389 */
  esp -= 4; W32(esp, 0x4848b5u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4848b5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_4848b8: /* 4848b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4848ba: mov ecx, esi */
  ecx = esi;
/* 4848bc: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x4848bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4848bf: mov edi, eax */
  edi = eax;
/* 4848c1: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4848c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4848c5: mov ecx, esi */
  ecx = esi;
/* 4848c7: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4848ca: call 0x471e93 */
  esp -= 4; W32(esp, 0x4848cfu); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 4848cf: cmp edi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4848d2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 4848d6: jae 0x484935 */
  if (!cf) goto L_484935;
L_4848d8: /* 4848d8: cmp dword ptr [ebp - 0x64], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4848dc: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 4848df: jae 0x4848e4 */
  if (!cf) goto L_4848e4;
L_4848e1: /* 4848e1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
L_4848e4: /* 4848e4: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4848e7: jle 0x484935 */
  if ((zf || sf != of)) goto L_484935;
L_4848e9: /* 4848e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4848eb: mov ecx, esi */
  ecx = esi;
/* 4848ed: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x4848f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4848f0: cmp dword ptr [ebp - 0x64], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4848f4: mov edi, dword ptr [ebp - 0x78] */
  edi = R32((uint32_t)(ebp + 0xffffff88u));
/* 4848f7: mov ebx, eax */
  ebx = eax;
/* 4848f9: jae 0x4848fe */
  if (!cf) goto L_4848fe;
L_4848fb: /* 4848fb: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
L_4848fe: /* 4848fe: mov esi, dword ptr [ebp + 0x38] */
  esi = R32((uint32_t)(ebp + 0x38u));
/* 484901: sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 484904: jmp 0x484929 */
  goto L_484929;
L_484906: /* 484906: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 484908: jle 0x48492f */
  if ((zf || sf != of)) goto L_48492f;
L_48490a: /* 48490a: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 48490d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48490f: jae 0x48492f */
  if (!cf) goto L_48492f;
L_484911: /* 484911: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484912: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 484914: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 484916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484917: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 48491a: call 0x4733c4 */
  esp -= 4; W32(esp, 0x48491fu); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
/* 48491f: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 484922: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 484925: jle 0x484929 */
  if ((zf || sf != of)) goto L_484929;
L_484927: /* 484927: mov edi, eax */
  edi = eax;
L_484929: /* 484929: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 48492b: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48492d: jne 0x484906 */
  if (!zf) goto L_484906;
L_48492f: /* 48492f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 484932: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_484935: /* 484935: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 484937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48493a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 48493d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 484940: call 0x4624dd */
  esp -= 4; W32(esp, 0x484945u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 484945: cmp byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484949: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48494b: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 48494e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48494f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 484953: mov ecx, esi */
  ecx = esi;
/* 484955: je 0x484974 */
  if (zf) goto L_484974;
L_484957: /* 484957: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x48495au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48495a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 48495d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 484960: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 484966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484967: mov ecx, esi */
  ecx = esi;
/* 484969: call 0x471ed8 */
  esp -= 4; W32(esp, 0x48496eu); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 48496e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 484972: jmp 0x48498f */
  goto L_48498f;
L_484974: /* 484974: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x484977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484977: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 48497a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 48497d: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 484983: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484984: mov ecx, esi */
  ecx = esi;
/* 484986: call 0x471ec1 */
  esp -= 4; W32(esp, 0x48498bu); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 48498b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
L_48498f: /* 48498f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 484991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 484993: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 484996: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484997: call 0x47a171 */
  esp -= 4; W32(esp, 0x48499cu); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 48499c: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 4849a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4849a4: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4849a9u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4849a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4849ab: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 4849ae: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 4849b1: call 0x4624dd */
  esp -= 4; W32(esp, 0x4849b6u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4849b6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4849b9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 4849bc: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4849be: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 4849c1: je 0x4849f2 */
  if (zf) goto L_4849f2;
L_4849c3: /* 4849c3: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 4849c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4849ca: mov ecx, esi */
  ecx = esi;
/* 4849cc: call 0x471eaa */
  esp -= 4; W32(esp, 0x4849d1u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 4849d1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4849d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4849d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4849d6: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 4849d9: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 4849dd: call 0x47a171 */
  esp -= 4; W32(esp, 0x4849e2u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 4849e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4849e4: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 4849ea: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 4849ed: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4849f2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_4849f2: /* 4849f2: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 4849f6: xor edx, edx */
  edx = 0;
/* 4849f8: xor ecx, ecx */
  ecx = 0;
L_4849fa: /* 4849fa: mov al, byte ptr [ebp + ecx - 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffffdcu))) & 0xffu);
/* 4849fe: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484a00: je 0x484a38 */
  if (zf) goto L_484a38;
L_484a02: /* 484a02: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484a04: je 0x484a33 */
  if (zf) goto L_484a33;
L_484a06: /* 484a06: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484a08: je 0x484a2e */
  if (zf) goto L_484a2e;
L_484a0a: /* 484a0a: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484a0c: jne 0x484a3c */
  if (!zf) goto L_484a3c;
L_484a0e: /* 484a0e: cmp dword ptr [ebp + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484a11: ja 0x484a1b */
  if ((!cf && !zf)) goto L_484a1b;
L_484a13: /* 484a13: mov eax, edi */
  eax = edi;
/* 484a15: sub eax, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484a18: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 484a19: jmp 0x484a1d */
  goto L_484a1d;
L_484a1b: /* 484a1b: xor eax, eax */
  eax = 0;
L_484a1d: /* 484a1d: xor ebx, ebx */
  ebx = 0;
/* 484a1f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484a21: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 484a23: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 484a25: add ebx, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 484a28: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 484a2a: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 484a2c: jmp 0x484a3c */
  goto L_484a3c;
L_484a2e: /* 484a2e: add edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 484a31: jmp 0x484a3c */
  goto L_484a3c;
L_484a33: /* 484a33: add edx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 484a36: jmp 0x484a3c */
  goto L_484a3c;
L_484a38: /* 484a38: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_484a3c: /* 484a3c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 484a3d: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484a40: jb 0x4849fa */
  if (cf) goto L_4849fa;
L_484a42: /* 484a42: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 484a45: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 484a48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 484a4a: jle 0x484a57 */
  if ((zf || sf != of)) goto L_484a57;
L_484a4c: /* 484a4c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484a4e: jbe 0x484a57 */
  if ((cf | zf)) goto L_484a57;
L_484a50: /* 484a50: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484a52: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 484a55: jmp 0x484a5b */
  goto L_484a5b;
L_484a57: /* 484a57: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
L_484a5b: /* 484a5b: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 484a5e: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 484a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484a66: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 484a69: je 0x484aa2 */
  if (zf) goto L_484aa2;
L_484a6b: /* 484a6b: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484a70: jne 0x484a78 */
  if (!zf) goto L_484a78;
L_484a72: /* 484a72: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484a76: jne 0x484aa2 */
  if (!zf) goto L_484aa2;
L_484a78: /* 484a78: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 484a7b: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 484a81: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 484a84: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484a87: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484a8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484a8b: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484a90u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484a90: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484a92: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484a95: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484a98: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 484a9c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484a9f: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_484aa2: /* 484aa2: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_484aa6: /* 484aa6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 484aa9: mov al, byte ptr [ebp + eax - 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xffffffdcu))) & 0xffu);
/* 484aad: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484aaf: je 0x484c2d */
  if (zf) goto L_484c2d;
L_484ab5: /* 484ab5: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484ab7: je 0x484bff */
  if (zf) goto L_484bff;
L_484abd: /* 484abd: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484abf: je 0x484bde */
  if (zf) goto L_484bde;
L_484ac5: /* 484ac5: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 484ac7: jne 0x484c60 */
  if (!zf) goto L_484c60;
L_484acd: /* 484acd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 484acf: jne 0x484af0 */
  if (!zf) goto L_484af0;
L_484ad1: /* 484ad1: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484ad5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 484ad8: jae 0x484add */
  if (!cf) goto L_484add;
L_484ada: /* 484ada: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_484add: /* 484add: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 484ae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484ae1: mov eax, esp */
  eax = esp;
/* 484ae3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484ae5: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 484aeb: jmp 0x484c19 */
  goto L_484c19;
L_484af0: /* 484af0: cmp dword ptr [ebp + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484af3: ja 0x484b73 */
  if ((!cf && !zf)) goto L_484b73;
L_484af5: /* 484af5: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 484af7: call 0x461d6f */
  esp -= 4; W32(esp, 0x484afcu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 484afc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484afd: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 484b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b01: call 0x46b41f */
  esp -= 4; W32(esp, 0x484b06u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 484b06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 484b08: mov ecx, esi */
  ecx = esi;
/* 484b0a: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x484b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484b0d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 484b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b11: call 0x46b41f */
  esp -= 4; W32(esp, 0x484b16u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 484b16: sub edi, dword ptr [ebp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 484b19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484b1a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 484b1c: call 0x461d6f */
  esp -= 4; W32(esp, 0x484b21u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 484b21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b23: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484b26: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 484b2c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484b2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b30: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484b35u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484b35: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 484b37: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484b3a: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 484b3d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484b40: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484b44: jae 0x484b49 */
  if (!cf) goto L_484b49;
L_484b46: /* 484b46: lea edx, [ebp + 0x28] */
  edx = (uint32_t)(ebp + 0x28u);
L_484b49: /* 484b49: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* 484b4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484b4d: mov ecx, esp */
  ecx = esp;
/* 484b4f: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b53: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 484b59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b5b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 484b5d: call 0x46f314 */
  esp -= 4; W32(esp, 0x484b62u); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 484b62: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 484b65: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 484b68: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 484b6b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484b6e: jmp 0x484c55 */
  goto L_484c55;
L_484b73: /* 484b73: cmp dword ptr [ebp + 0x3c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484b77: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 484b7a: jae 0x484b7f */
  if (!cf) goto L_484b7f;
L_484b7c: /* 484b7c: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
L_484b7f: /* 484b7f: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 484b82: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484b86: mov eax, esp */
  eax = esp;
/* 484b88: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484b8b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484b8e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484b90: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484b93: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 484b99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484b9a: call 0x46f314 */
  esp -= 4; W32(esp, 0x484b9fu); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 484b9f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484ba1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484ba4: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484ba7: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 484baa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 484bac: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484baf: mov ecx, esi */
  ecx = esi;
/* 484bb1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x484bb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 484bb4: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 484bb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484bb8: call 0x46b41f */
  esp -= 4; W32(esp, 0x484bbdu); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 484bbd: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 484bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484bc1: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484bc4: call 0x46adc2 */
  esp -= 4; W32(esp, 0x484bc9u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 484bc9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 484bcb: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 484bce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484bcf: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 484bd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484bd2: mov ecx, esp */
  ecx = esp;
/* 484bd4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 484bd6: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 484bdc: jmp 0x484c19 */
  goto L_484c19;
L_484bde: /* 484bde: cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484be2: jbe 0x484c60 */
  if ((cf | zf)) goto L_484c60;
L_484be4: /* 484be4: cmp dword ptr [ebp - 0x2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484be8: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 484beb: jae 0x484bf0 */
  if (!cf) goto L_484bf0;
L_484bed: /* 484bed: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
L_484bf0: /* 484bf0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 484bf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484bf3: mov eax, esp */
  eax = esp;
/* 484bf5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484bf7: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 484bfd: jmp 0x484c19 */
  goto L_484c19;
L_484bff: /* 484bff: cmp dword ptr [ebp - 0x48], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484c03: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 484c06: jae 0x484c0b */
  if (!cf) goto L_484c0b;
L_484c08: /* 484c08: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
L_484c0b: /* 484c0b: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 484c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484c0f: mov eax, esp */
  eax = esp;
/* 484c11: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 484c13: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
L_484c19: /* 484c19: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 484c1c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484c1f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484c23: call 0x46f314 */
  esp -= 4; W32(esp, 0x484c28u); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 484c28: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484c2b: jmp 0x484c55 */
  goto L_484c55;
L_484c2d: /* 484c2d: cmp dword ptr [ebp - 0x28], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484c34: jne 0x484c60 */
  if (!zf) goto L_484c60;
L_484c36: /* 484c36: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 484c39: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 484c3f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 484c42: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484c45: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484c48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484c49: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484c4eu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484c4e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484c51: and dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
L_484c55: /* 484c55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484c57: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484c5a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484c5d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_484c60: /* 484c60: inc dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 484c63: cmp dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484c67: jb 0x484aa6 */
  if (cf) goto L_484aa6;
L_484c6d: /* 484c6d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 484c70: xor esi, esi */
  esi = 0;
/* 484c72: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 484c73: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 484c75: jbe 0x484cb0 */
  if ((cf | zf)) goto L_484cb0;
L_484c77: /* 484c77: cmp dword ptr [ebp - 0x2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 484c7b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 484c7e: jae 0x484c83 */
  if (!cf) goto L_484c83;
L_484c80: /* 484c80: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_484c83: /* 484c83: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 484c86: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 484c87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484c89: mov ecx, esp */
  ecx = esp;
/* 484c8b: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 484c8e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484c91: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 484c93: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484c96: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 484c9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484c9d: call 0x46f314 */
  esp -= 4; W32(esp, 0x484ca2u); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 484ca2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 484ca4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 484ca7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484caa: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 484cad: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_484cb0: /* 484cb0: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 484cb3: and dword ptr [ebx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x14u), r);
  }
/* 484cb7: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 484cba: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 484cbd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484cc0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 484cc3: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x484cc8u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 484cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484ccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484ccc: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 484ccf: call 0x4624b0 */
  esp -= 4; W32(esp, 0x484cd4u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 484cd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484cd5: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 484cd8: call 0x4624b0 */
  esp -= 4; W32(esp, 0x484cddu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 484cdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484cde: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 484ce1: call 0x461ea8 */
  esp -= 4; W32(esp, 0x484ce6u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 484ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484ce7: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 484cea: call 0x4624b0 */
  esp -= 4; W32(esp, 0x484cefu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 484cef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 484cf2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 484cf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 484cfc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 484cff: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 484d02: call 0x46190c */
  esp -= 4; W32(esp, 0x484d07u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 484d07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484d08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484d09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484d0a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 484d0b: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_484d0e(void) {
  LOAD_REGS();
L_484d0e: /* 484d0e: mov eax, 0x48d792 */
  eax = 0x48d792u;
/* 484d13: call 0x4616c0 */
  esp -= 4; W32(esp, 0x484d18u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 484d18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 484d1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484d1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484d1e: mov esi, ecx */
  esi = ecx;
/* 484d20: xor edi, edi */
  edi = 0;
/* 484d22: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 484d25: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 484d28: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 484d2b: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 484d2e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 484d31: call 0x4887f7 */
  esp -= 4; W32(esp, 0x484d36u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 484d36: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 484d39: call 0x4678e7 */
  esp -= 4; W32(esp, 0x484d3eu); SPILL(); f_4678e7(); if (g_unwind) return; RELOAD();
/* 484d3e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 484d41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484d42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484d44: call 0x46e20c */
  esp -= 4; W32(esp, 0x484d49u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 484d49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484d4c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 484d4f: call 0x4887f7 */
  esp -= 4; W32(esp, 0x484d54u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 484d54: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 484d57: call 0x467925 */
  esp -= 4; W32(esp, 0x484d5cu); SPILL(); f_467925(); if (g_unwind) return; RELOAD();
/* 484d5c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 484d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484d60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484d62: call 0x46e20c */
  esp -= 4; W32(esp, 0x484d67u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 484d67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484d6a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 484d6d: call 0x488d07 */
  esp -= 4; W32(esp, 0x484d72u); SPILL(); f_488d07(); if (g_unwind) return; RELOAD();
/* 484d72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 484d75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484d76: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 484d79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484d7a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 484d81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484d82: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 484d83: ret 4 */
  esp += 8; SPILL(); return;
}

void f_484d86(void) {
  LOAD_REGS();
L_484d86: /* 484d86: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 484d89: call 0x46970e */
  esp -= 4; W32(esp, 0x484d8eu); SPILL(); f_46970e(); if (g_unwind) return; RELOAD();
/* 484d8e: xor edi, edi */
  edi = 0;
/* 484d90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484d91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484d92: call 0x48bed8 */
  esp -= 4; W32(esp, 0x484d97u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_484d97(); return;
}

void f_484d97(void) {
  LOAD_REGS();
L_484d97: /* 484d97: mov eax, 0x48d79c */
  eax = 0x48d79cu;
/* 484d9c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x484da1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 484da1: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 484da4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484da5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484da6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484da7: mov esi, ecx */
  esi = ecx;
/* 484da9: xor edi, edi */
  edi = 0;
/* 484dab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 484dae: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 484db1: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 484db4: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 484db7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 484dba: call 0x4887f7 */
  esp -= 4; W32(esp, 0x484dbfu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 484dbf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 484dc2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 484dc5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 484dc8: call 0x4678e7 */
  esp -= 4; W32(esp, 0x484dcdu); SPILL(); f_4678e7(); if (g_unwind) return; RELOAD();
/* 484dcd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 484dd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484dd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484dd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484dd3: call 0x467d22 */
  esp -= 4; W32(esp, 0x484dd8u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 484dd8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484ddb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 484dde: call 0x4887f7 */
  esp -= 4; W32(esp, 0x484de3u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 484de3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 484de6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 484de9: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 484dec: call 0x467925 */
  esp -= 4; W32(esp, 0x484df1u); SPILL(); f_467925(); if (g_unwind) return; RELOAD();
/* 484df1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 484df4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 484df5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484df7: call 0x467d22 */
  esp -= 4; W32(esp, 0x484dfcu); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 484dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 484dff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 484e02: call 0x488d07 */
  esp -= 4; W32(esp, 0x484e07u); SPILL(); f_488d07(); if (g_unwind) return; RELOAD();
/* 484e07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 484e0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484e0b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 484e0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484e0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 484e16: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484e17: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 484e18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_484e1b(void) {
  LOAD_REGS();
L_484e1b: /* 484e1b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 484e1e: call 0x46970e */
  esp -= 4; W32(esp, 0x484e23u); SPILL(); f_46970e(); if (g_unwind) return; RELOAD();
/* 484e23: xor edi, edi */
  edi = 0;
/* 484e25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e27: call 0x48bed8 */
  esp -= 4; W32(esp, 0x484e2cu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_484e2c(); return;
}

void f_484e2c(void) {
  LOAD_REGS();
L_484e2c: /* 484e2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484e2d: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 484e31: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484e34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484e35: mov esi, ecx */
  esi = ecx;
/* 484e37: je 0x484e5d */
  if (zf) goto L_484e5d;
L_484e39: /* 484e39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e3a: push 0x4622d2 */
  { uint32_t v = 0x4622d2u; esp -= 4; W32(esp, v); }
/* 484e3f: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 484e42: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 484e44: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 484e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484e47: call 0x48be30 */
  esp -= 4; W32(esp, 0x484e4cu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 484e4c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484e4f: je 0x484e58 */
  if (zf) goto L_484e58;
L_484e51: /* 484e51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e52: call 0x48bdcd */
  esp -= 4; W32(esp, 0x484e57u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 484e57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484e58: /* 484e58: mov eax, edi */
  eax = edi;
/* 484e5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484e5b: jmp 0x484e72 */
  goto L_484e72;
L_484e5d: /* 484e5d: mov ecx, esi */
  ecx = esi;
/* 484e5f: call 0x4622d2 */
  esp -= 4; W32(esp, 0x484e64u); SPILL(); f_4622d2(); if (g_unwind) return; RELOAD();
/* 484e64: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484e67: je 0x484e70 */
  if (zf) goto L_484e70;
L_484e69: /* 484e69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484e6a: call 0x461c65 */
  esp -= 4; W32(esp, 0x484e6fu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 484e6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484e70: /* 484e70: mov eax, esi */
  eax = esi;
L_484e72: /* 484e72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484e73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484e74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_484e77(void) {
  LOAD_REGS();
L_484e77: /* 484e77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484e78: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 484e7c: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484e7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484e80: mov esi, ecx */
  esi = ecx;
/* 484e82: je 0x484ea8 */
  if (zf) goto L_484ea8;
L_484e84: /* 484e84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e85: push 0x461cd8 */
  { uint32_t v = 0x461cd8u; esp -= 4; W32(esp, v); }
/* 484e8a: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 484e8d: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 484e8f: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 484e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484e92: call 0x48be30 */
  esp -= 4; W32(esp, 0x484e97u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 484e97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484e9a: je 0x484ea3 */
  if (zf) goto L_484ea3;
L_484e9c: /* 484e9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484e9d: call 0x48bdcd */
  esp -= 4; W32(esp, 0x484ea2u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 484ea2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484ea3: /* 484ea3: mov eax, edi */
  eax = edi;
/* 484ea5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484ea6: jmp 0x484ebd */
  goto L_484ebd;
L_484ea8: /* 484ea8: mov ecx, esi */
  ecx = esi;
/* 484eaa: call 0x461cd8 */
  esp -= 4; W32(esp, 0x484eafu); SPILL(); f_461cd8(); if (g_unwind) return; RELOAD();
/* 484eaf: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484eb2: je 0x484ebb */
  if (zf) goto L_484ebb;
L_484eb4: /* 484eb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484eb5: call 0x461c65 */
  esp -= 4; W32(esp, 0x484ebau); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 484eba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484ebb: /* 484ebb: mov eax, esi */
  eax = esi;
L_484ebd: /* 484ebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484ebe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484ebf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_484ec2(void) {
  LOAD_REGS();
L_484ec2: /* 484ec2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 484ec3: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 484ec7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484eca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484ecb: mov esi, ecx */
  esi = ecx;
/* 484ecd: je 0x484ef3 */
  if (zf) goto L_484ef3;
L_484ecf: /* 484ecf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484ed0: push 0x46130d */
  { uint32_t v = 0x46130du; esp -= 4; W32(esp, v); }
/* 484ed5: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 484ed8: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 484eda: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 484edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484edd: call 0x48be30 */
  esp -= 4; W32(esp, 0x484ee2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 484ee2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484ee5: je 0x484eee */
  if (zf) goto L_484eee;
L_484ee7: /* 484ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 484ee8: call 0x48bdcd */
  esp -= 4; W32(esp, 0x484eedu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 484eed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484eee: /* 484eee: mov eax, edi */
  eax = edi;
/* 484ef0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 484ef1: jmp 0x484f08 */
  goto L_484f08;
L_484ef3: /* 484ef3: mov ecx, esi */
  ecx = esi;
/* 484ef5: call 0x46130d */
  esp -= 4; W32(esp, 0x484efau); SPILL(); f_46130d(); if (g_unwind) return; RELOAD();
/* 484efa: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 484efd: je 0x484f06 */
  if (zf) goto L_484f06;
L_484eff: /* 484eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f00: call 0x461c65 */
  esp -= 4; W32(esp, 0x484f05u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 484f05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_484f06: /* 484f06: mov eax, esi */
  eax = esi;
L_484f08: /* 484f08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 484f0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_484f0d(void) {
  LOAD_REGS();
L_484f0d: /* 484f0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f0e: lea esi, [ecx + 0x68] */
  esi = (uint32_t)(ecx + 0x68u);
/* 484f11: mov ecx, esi */
  ecx = esi;
/* 484f13: call 0x482392 */
  esp -= 4; W32(esp, 0x484f18u); SPILL(); f_482392(); if (g_unwind) return; RELOAD();
/* 484f18: mov ecx, esi */
  ecx = esi;
/* 484f1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f1b: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_484f20(void) {
  LOAD_REGS();
L_484f20: /* 484f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f21: lea esi, [ecx + 0x68] */
  esi = (uint32_t)(ecx + 0x68u);
/* 484f24: mov ecx, esi */
  ecx = esi;
/* 484f26: call 0x48244a */
  esp -= 4; W32(esp, 0x484f2bu); SPILL(); f_48244a(); if (g_unwind) return; RELOAD();
/* 484f2b: mov ecx, esi */
  ecx = esi;
/* 484f2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f2e: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_484f33(void) {
  LOAD_REGS();
L_484f33: /* 484f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f34: lea esi, [ecx + 0x68] */
  esi = (uint32_t)(ecx + 0x68u);
/* 484f37: mov ecx, esi */
  ecx = esi;
/* 484f39: call 0x482502 */
  esp -= 4; W32(esp, 0x484f3eu); SPILL(); f_482502(); if (g_unwind) return; RELOAD();
/* 484f3e: mov ecx, esi */
  ecx = esi;
/* 484f40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f41: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_484f46(void) {
  LOAD_REGS();
L_484f46: /* 484f46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f47: lea esi, [ecx + 0x64] */
  esi = (uint32_t)(ecx + 0x64u);
/* 484f4a: mov ecx, esi */
  ecx = esi;
/* 484f4c: call 0x4825b9 */
  esp -= 4; W32(esp, 0x484f51u); SPILL(); f_4825b9(); if (g_unwind) return; RELOAD();
/* 484f51: mov ecx, esi */
  ecx = esi;
/* 484f53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f54: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_484f59(void) {
  LOAD_REGS();
L_484f59: /* 484f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f5a: lea esi, [ecx + 0x64] */
  esi = (uint32_t)(ecx + 0x64u);
/* 484f5d: mov ecx, esi */
  ecx = esi;
/* 484f5f: call 0x482670 */
  esp -= 4; W32(esp, 0x484f64u); SPILL(); f_482670(); if (g_unwind) return; RELOAD();
/* 484f64: mov ecx, esi */
  ecx = esi;
/* 484f66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f67: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_484f6c(void) {
  LOAD_REGS();
L_484f6c: /* 484f6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f6d: lea esi, [ecx + 0x64] */
  esi = (uint32_t)(ecx + 0x64u);
/* 484f70: mov ecx, esi */
  ecx = esi;
/* 484f72: call 0x482727 */
  esp -= 4; W32(esp, 0x484f77u); SPILL(); f_482727(); if (g_unwind) return; RELOAD();
/* 484f77: mov ecx, esi */
  ecx = esi;
/* 484f79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f7a: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_484f7f(void) {
  LOAD_REGS();
L_484f7f: /* 484f7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f80: lea esi, [ecx + 0x6c] */
  esi = (uint32_t)(ecx + 0x6cu);
/* 484f83: mov ecx, esi */
  ecx = esi;
/* 484f85: call 0x4827e4 */
  esp -= 4; W32(esp, 0x484f8au); SPILL(); f_4827e4(); if (g_unwind) return; RELOAD();
/* 484f8a: mov ecx, esi */
  ecx = esi;
/* 484f8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484f8d: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_484f92(void) {
  LOAD_REGS();
L_484f92: /* 484f92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484f93: lea esi, [ecx + 0x6c] */
  esi = (uint32_t)(ecx + 0x6cu);
/* 484f96: mov ecx, esi */
  ecx = esi;
/* 484f98: call 0x48289a */
  esp -= 4; W32(esp, 0x484f9du); SPILL(); f_48289a(); if (g_unwind) return; RELOAD();
/* 484f9d: mov ecx, esi */
  ecx = esi;
/* 484f9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484fa0: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_484fa5(void) {
  LOAD_REGS();
L_484fa5: /* 484fa5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484fa6: lea esi, [ecx + 0x6c] */
  esi = (uint32_t)(ecx + 0x6cu);
/* 484fa9: mov ecx, esi */
  ecx = esi;
/* 484fab: call 0x482950 */
  esp -= 4; W32(esp, 0x484fb0u); SPILL(); f_482950(); if (g_unwind) return; RELOAD();
/* 484fb0: mov ecx, esi */
  ecx = esi;
/* 484fb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 484fb3: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_484fb8(void) {
  LOAD_REGS();
L_484fb8: /* 484fb8: mov eax, 0x48d7ae */
  eax = 0x48d7aeu;
/* 484fbd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x484fc2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 484fc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 484fc3: mov esi, ecx */
  esi = ecx;
/* 484fc5: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 484fc9: jne 0x485010 */
  if (!zf) goto L_485010;
L_484fcb: /* 484fcb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 484fce: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 484fd1: call 0x467c2f */
  esp -= 4; W32(esp, 0x484fd6u); SPILL(); f_467c2f(); if (g_unwind) return; RELOAD();
/* 484fd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 484fd8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484fd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484fda: je 0x485010 */
  if (zf) goto L_485010;
L_484fdc: /* 484fdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 484fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484fdf: mov ecx, esi */
  ecx = esi;
/* 484fe1: call 0x46160f */
  esp -= 4; W32(esp, 0x484fe6u); SPILL(); f_46160f(); if (g_unwind) return; RELOAD();
/* 484fe6: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 484fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484fea: mov ecx, esi */
  ecx = esi;
/* 484fec: call 0x46868f */
  esp -= 4; W32(esp, 0x484ff1u); SPILL(); f_46868f(); if (g_unwind) return; RELOAD();
/* 484ff1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 484ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484ff6: call 0x4679a9 */
  esp -= 4; W32(esp, 0x484ffbu); SPILL(); f_4679a9(); if (g_unwind) return; RELOAD();
/* 484ffb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 484ffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 484ffd: mov ecx, esi */
  ecx = esi;
/* 484fff: call 0x467b23 */
  esp -= 4; W32(esp, 0x485004u); SPILL(); f_467b23(); if (g_unwind) return; RELOAD();
/* 485004: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485007: call 0x461389 */
  esp -= 4; W32(esp, 0x48500cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48500c: mov eax, esi */
  eax = esi;
/* 48500e: jmp 0x485012 */
  goto L_485012;
L_485010: /* 485010: xor eax, eax */
  eax = 0;
L_485012: /* 485012: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485016: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48501d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48501e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485021(void) {
  LOAD_REGS();
L_485021: /* 485021: jmp 0x484fb8 */
  SPILL(); f_484fb8(); return;
}

void f_485023(void) {
  LOAD_REGS();
L_485023: /* 485023: mov eax, 0x48d7ae */
  eax = 0x48d7aeu;
/* 485028: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48502du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48502d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48502e: mov esi, ecx */
  esi = ecx;
/* 485030: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485034: jne 0x48507b */
  if (!zf) goto L_48507b;
L_485036: /* 485036: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485039: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48503c: call 0x467c2f */
  esp -= 4; W32(esp, 0x485041u); SPILL(); f_467c2f(); if (g_unwind) return; RELOAD();
/* 485041: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485043: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485044: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485045: je 0x48507b */
  if (zf) goto L_48507b;
L_485047: /* 485047: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48504a: mov ecx, esi */
  ecx = esi;
/* 48504c: call 0x462051 */
  esp -= 4; W32(esp, 0x485051u); SPILL(); f_462051(); if (g_unwind) return; RELOAD();
/* 485051: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485055: mov ecx, esi */
  ecx = esi;
/* 485057: call 0x46868f */
  esp -= 4; W32(esp, 0x48505cu); SPILL(); f_46868f(); if (g_unwind) return; RELOAD();
/* 48505c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 485060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485061: call 0x46e601 */
  esp -= 4; W32(esp, 0x485066u); SPILL(); f_46e601(); if (g_unwind) return; RELOAD();
/* 485066: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485067: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485068: mov ecx, esi */
  ecx = esi;
/* 48506a: call 0x482240 */
  esp -= 4; W32(esp, 0x48506fu); SPILL(); f_482240(); if (g_unwind) return; RELOAD();
/* 48506f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485072: call 0x461389 */
  esp -= 4; W32(esp, 0x485077u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 485077: mov eax, esi */
  eax = esi;
/* 485079: jmp 0x48507d */
  goto L_48507d;
L_48507b: /* 48507b: xor eax, eax */
  eax = 0;
L_48507d: /* 48507d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485080: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485081: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485088: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485089: ret 8 */
  esp += 12; SPILL(); return;
}

void f_48508c(void) {
  LOAD_REGS();
L_48508c: /* 48508c: jmp 0x485023 */
  SPILL(); f_485023(); return;
}

void f_48508e(void) {
  LOAD_REGS();
L_48508e: /* 48508e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48508f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485093: mov esi, ecx */
  esi = ecx;
/* 485095: call 0x46e601 */
  esp -= 4; W32(esp, 0x48509au); SPILL(); f_46e601(); if (g_unwind) return; RELOAD();
/* 48509a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48509b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48509c: mov ecx, esi */
  ecx = esi;
/* 48509e: call 0x482240 */
  esp -= 4; W32(esp, 0x4850a3u); SPILL(); f_482240(); if (g_unwind) return; RELOAD();
/* 4850a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4850a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4850a7(void) {
  LOAD_REGS();
L_4850a7: /* 4850a7: mov eax, 0x48d7ae */
  eax = 0x48d7aeu;
/* 4850ac: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4850b1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4850b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4850b2: mov esi, ecx */
  esi = ecx;
/* 4850b4: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4850b8: jne 0x4850ff */
  if (!zf) goto L_4850ff;
L_4850ba: /* 4850ba: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4850bd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4850c0: call 0x467c2f */
  esp -= 4; W32(esp, 0x4850c5u); SPILL(); f_467c2f(); if (g_unwind) return; RELOAD();
/* 4850c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4850c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4850c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4850c9: je 0x4850ff */
  if (zf) goto L_4850ff;
L_4850cb: /* 4850cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4850cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4850ce: mov ecx, esi */
  ecx = esi;
/* 4850d0: call 0x461fce */
  esp -= 4; W32(esp, 0x4850d5u); SPILL(); f_461fce(); if (g_unwind) return; RELOAD();
/* 4850d5: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4850d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4850d9: mov ecx, esi */
  ecx = esi;
/* 4850db: call 0x46868f */
  esp -= 4; W32(esp, 0x4850e0u); SPILL(); f_46868f(); if (g_unwind) return; RELOAD();
/* 4850e0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4850e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4850e5: call 0x46e6a3 */
  esp -= 4; W32(esp, 0x4850eau); SPILL(); f_46e6a3(); if (g_unwind) return; RELOAD();
/* 4850ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4850eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4850ec: mov ecx, esi */
  ecx = esi;
/* 4850ee: call 0x4822b0 */
  esp -= 4; W32(esp, 0x4850f3u); SPILL(); f_4822b0(); if (g_unwind) return; RELOAD();
/* 4850f3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4850f6: call 0x461389 */
  esp -= 4; W32(esp, 0x4850fbu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4850fb: mov eax, esi */
  eax = esi;
/* 4850fd: jmp 0x485101 */
  goto L_485101;
L_4850ff: /* 4850ff: xor eax, eax */
  eax = 0;
L_485101: /* 485101: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485104: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485105: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48510c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48510d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485110(void) {
  LOAD_REGS();
L_485110: /* 485110: jmp 0x4850a7 */
  SPILL(); f_4850a7(); return;
}

void f_485112(void) {
  LOAD_REGS();
L_485112: /* 485112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485113: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485117: mov esi, ecx */
  esi = ecx;
/* 485119: call 0x46e6a3 */
  esp -= 4; W32(esp, 0x48511eu); SPILL(); f_46e6a3(); if (g_unwind) return; RELOAD();
/* 48511e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48511f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485120: mov ecx, esi */
  ecx = esi;
/* 485122: call 0x4822b0 */
  esp -= 4; W32(esp, 0x485127u); SPILL(); f_4822b0(); if (g_unwind) return; RELOAD();
/* 485127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485128: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48512b(void) {
  LOAD_REGS();
L_48512b: /* 48512b: mov eax, 0x48d7e4 */
  eax = 0x48d7e4u;
/* 485130: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485135u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485136: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485139: xor ebx, ebx */
  ebx = 0;
/* 48513b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48513c: xor edi, edi */
  edi = 0;
/* 48513e: mov esi, ecx */
  esi = ecx;
/* 485140: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 485141: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485144: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 485147: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48514a: je 0x485164 */
  if (zf) goto L_485164;
L_48514c: /* 48514c: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 48514f: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 485155: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 485158: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 48515e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 485161: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_485164: /* 485164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485165: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485166: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 485169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48516a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48516b: mov ecx, esi */
  ecx = esi;
/* 48516d: call 0x4627bb */
  esp -= 4; W32(esp, 0x485172u); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 485172: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485174: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 485177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485178: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 48517b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48517e: mov dword ptr [esi + eax], 0x4c8850 */
  W32((uint32_t)(esi + eax), 0x4c8850u);
/* 485185: call 0x4615e2 */
  esp -= 4; W32(esp, 0x48518au); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 48518a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48518d: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48518f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485190: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485193: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 485196: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48519a: call 0x484fb8 */
  esp -= 4; W32(esp, 0x48519fu); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 48519f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4851a1: jne 0x4851b7 */
  if (!zf) goto L_4851b7;
L_4851a3: /* 4851a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4851a5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4851a8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4851aa: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4851ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4851ae: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4851b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4851b2: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4851b7u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4851b7: /* 4851b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4851ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4851bb: mov eax, esi */
  eax = esi;
/* 4851bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4851be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4851bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4851c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4851c7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4851ca(void) {
  LOAD_REGS();
L_4851ca: /* 4851ca: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4851ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4851cf: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4851d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4851d3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4851d7: mov esi, ecx */
  esi = ecx;
/* 4851d9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 4851dc: call 0x484fb8 */
  esp -= 4; W32(esp, 0x4851e1u); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 4851e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4851e3: jne 0x4851fa */
  if (!zf) goto L_4851fa;
L_4851e5: /* 4851e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4851e7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4851ea: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4851ec: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4851ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4851f1: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4851f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4851f5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4851fau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4851fa: /* 4851fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4851fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4851fe(void) {
  LOAD_REGS();
L_4851fe: /* 4851fe: jmp 0x4851ca */
  SPILL(); f_4851ca(); return;
}

void f_485200(void) {
  LOAD_REGS();
L_485200: /* 485200: mov eax, 0x48d81a */
  eax = 0x48d81au;
/* 485205: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48520au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48520a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48520b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48520c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48520d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48520e: xor ebx, ebx */
  ebx = 0;
/* 485210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485211: xor edi, edi */
  edi = 0;
/* 485213: mov esi, ecx */
  esi = ecx;
/* 485215: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 485216: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485219: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48521c: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48521f: je 0x485239 */
  if (zf) goto L_485239;
L_485221: /* 485221: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 485224: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 48522a: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 48522d: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 485233: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 485236: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_485239: /* 485239: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48523a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48523b: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 48523e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48523f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485240: mov ecx, esi */
  ecx = esi;
/* 485242: call 0x462b0d */
  esp -= 4; W32(esp, 0x485247u); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 485247: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485249: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48524c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48524d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 485250: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485253: mov dword ptr [esi + eax], 0x4c88ac */
  W32((uint32_t)(esi + eax), 0x4c88acu);
/* 48525a: call 0x462024 */
  esp -= 4; W32(esp, 0x48525fu); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 48525f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485262: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485265: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485268: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 48526b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48526f: call 0x485023 */
  esp -= 4; W32(esp, 0x485274u); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 485274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485276: jne 0x48528c */
  if (!zf) goto L_48528c;
L_485278: /* 485278: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48527a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48527d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48527f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485283: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485287: call 0x464bb2 */
  esp -= 4; W32(esp, 0x48528cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_48528c: /* 48528c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48528f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485290: mov eax, esi */
  eax = esi;
/* 485292: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485293: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485294: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48529b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48529c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_48529f(void) {
  LOAD_REGS();
L_48529f: /* 48529f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4852a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4852a4: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4852a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4852a8: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4852ac: mov esi, ecx */
  esi = ecx;
/* 4852ae: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 4852b1: call 0x485023 */
  esp -= 4; W32(esp, 0x4852b6u); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 4852b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4852b8: jne 0x4852cf */
  if (!zf) goto L_4852cf;
L_4852ba: /* 4852ba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4852bc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4852bf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4852c1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4852c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4852c6: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4852c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4852ca: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4852cfu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4852cf: /* 4852cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4852d0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4852d3(void) {
  LOAD_REGS();
L_4852d3: /* 4852d3: jmp 0x48529f */
  SPILL(); f_48529f(); return;
}

void f_4852d5(void) {
  LOAD_REGS();
L_4852d5: /* 4852d5: mov eax, 0x48d850 */
  eax = 0x48d850u;
/* 4852da: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4852dfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4852df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4852e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4852e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4852e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4852e3: xor ebx, ebx */
  ebx = 0;
/* 4852e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4852e6: xor edi, edi */
  edi = 0;
/* 4852e8: mov esi, ecx */
  esi = ecx;
/* 4852ea: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4852eb: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4852ee: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4852f1: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4852f4: je 0x48530e */
  if (zf) goto L_48530e;
L_4852f6: /* 4852f6: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 4852f9: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 4852ff: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 485302: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 485308: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48530b: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_48530e: /* 48530e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48530f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485310: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 485313: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485315: mov ecx, esi */
  ecx = esi;
/* 485317: call 0x462974 */
  esp -= 4; W32(esp, 0x48531cu); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 48531c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48531e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 485321: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485322: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 485325: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485328: mov dword ptr [esi + eax], 0x4c8908 */
  W32((uint32_t)(esi + eax), 0x4c8908u);
/* 48532f: call 0x461fa1 */
  esp -= 4; W32(esp, 0x485334u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 485334: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485337: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48533a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48533d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 485340: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 485344: call 0x4850a7 */
  esp -= 4; W32(esp, 0x485349u); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 485349: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48534b: jne 0x485361 */
  if (!zf) goto L_485361;
L_48534d: /* 48534d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48534f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 485352: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 485354: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485357: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485358: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48535b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48535c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x485361u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_485361: /* 485361: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485365: mov eax, esi */
  eax = esi;
/* 485367: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485368: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485369: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485370: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485371: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_485374(void) {
  LOAD_REGS();
L_485374: /* 485374: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 485378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485379: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48537c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48537d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485381: mov esi, ecx */
  esi = ecx;
/* 485383: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 485386: call 0x4850a7 */
  esp -= 4; W32(esp, 0x48538bu); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 48538b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48538d: jne 0x4853a4 */
  if (!zf) goto L_4853a4;
L_48538f: /* 48538f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485391: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 485394: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 485396: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48539b: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48539e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48539f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4853a4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4853a4: /* 4853a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4853a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4853a8(void) {
  LOAD_REGS();
L_4853a8: /* 4853a8: jmp 0x485374 */
  SPILL(); f_485374(); return;
}

void f_4853aa(void) {
  LOAD_REGS();
L_4853aa: /* 4853aa: mov eax, 0x48d886 */
  eax = 0x48d886u;
/* 4853af: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4853b4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4853b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4853b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4853b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4853b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4853b8: xor edi, edi */
  edi = 0;
/* 4853ba: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4853bd: mov esi, ecx */
  esi = ecx;
/* 4853bf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4853c2: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4853c5: je 0x4853e3 */
  if (zf) goto L_4853e3;
L_4853c7: /* 4853c7: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 4853ca: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 4853d0: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 4853d3: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 4853d9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4853dc: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_4853e3: /* 4853e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4853e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4853e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4853e6: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4853e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4853ea: mov ecx, esi */
  ecx = esi;
/* 4853ec: call 0x46236d */
  esp -= 4; W32(esp, 0x4853f1u); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 4853f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4853f3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4853f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4853f7: mov ecx, ebx */
  ecx = ebx;
/* 4853f9: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 485400: mov dword ptr [esi + eax], 0x4c8964 */
  W32((uint32_t)(esi + eax), 0x4c8964u);
/* 485407: call 0x4615e2 */
  esp -= 4; W32(esp, 0x48540cu); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 48540c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48540f: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485413: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485416: mov ecx, ebx */
  ecx = ebx;
/* 485418: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48541c: call 0x484fb8 */
  esp -= 4; W32(esp, 0x485421u); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 485421: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485423: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485424: jne 0x48543a */
  if (!zf) goto L_48543a;
L_485426: /* 485426: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485428: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48542b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48542d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485430: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485431: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485435: call 0x464bb2 */
  esp -= 4; W32(esp, 0x48543au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_48543a: /* 48543a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48543d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48543e: mov eax, esi */
  eax = esi;
/* 485440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485441: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485448: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485449: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_48544c(void) {
  LOAD_REGS();
L_48544c: /* 48544c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 485450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485451: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485455: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485459: mov esi, ecx */
  esi = ecx;
/* 48545b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 48545e: call 0x484fb8 */
  esp -= 4; W32(esp, 0x485463u); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 485463: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485465: jne 0x48547c */
  if (!zf) goto L_48547c;
L_485467: /* 485467: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485469: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48546c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48546e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 485473: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485477: call 0x464bb2 */
  esp -= 4; W32(esp, 0x48547cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_48547c: /* 48547c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48547d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485480(void) {
  LOAD_REGS();
L_485480: /* 485480: jmp 0x48544c */
  SPILL(); f_48544c(); return;
}

void f_485482(void) {
  LOAD_REGS();
L_485482: /* 485482: mov eax, 0x48d8bc */
  eax = 0x48d8bcu;
/* 485487: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48548cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48548c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48548d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48548e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48548f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485490: xor edi, edi */
  edi = 0;
/* 485492: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485495: mov esi, ecx */
  esi = ecx;
/* 485497: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48549a: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48549d: je 0x4854bb */
  if (zf) goto L_4854bb;
L_48549f: /* 48549f: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 4854a2: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 4854a8: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 4854ab: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 4854b1: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4854b4: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_4854bb: /* 4854bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4854bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4854bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4854be: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4854c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4854c2: mov ecx, esi */
  ecx = esi;
/* 4854c4: call 0x462a4e */
  esp -= 4; W32(esp, 0x4854c9u); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 4854c9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4854cb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4854ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4854cf: mov ecx, ebx */
  ecx = ebx;
/* 4854d1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4854d8: mov dword ptr [esi + eax], 0x4c89c0 */
  W32((uint32_t)(esi + eax), 0x4c89c0u);
/* 4854df: call 0x462024 */
  esp -= 4; W32(esp, 0x4854e4u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 4854e4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4854e7: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4854ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4854eb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4854ee: mov ecx, ebx */
  ecx = ebx;
/* 4854f0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4854f4: call 0x485023 */
  esp -= 4; W32(esp, 0x4854f9u); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 4854f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4854fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4854fc: jne 0x485512 */
  if (!zf) goto L_485512;
L_4854fe: /* 4854fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485500: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 485503: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 485505: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485508: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485509: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48550c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48550d: call 0x464bb2 */
  esp -= 4; W32(esp, 0x485512u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_485512: /* 485512: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485515: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485516: mov eax, esi */
  eax = esi;
/* 485518: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485519: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485520: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485521: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_485524(void) {
  LOAD_REGS();
L_485524: /* 485524: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 485528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485529: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48552c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48552d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485531: mov esi, ecx */
  esi = ecx;
/* 485533: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 485536: call 0x485023 */
  esp -= 4; W32(esp, 0x48553bu); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 48553b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48553d: jne 0x485554 */
  if (!zf) goto L_485554;
L_48553f: /* 48553f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485541: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 485544: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 485546: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485549: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48554b: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48554e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48554f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x485554u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_485554: /* 485554: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485555: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485558(void) {
  LOAD_REGS();
L_485558: /* 485558: jmp 0x485524 */
  SPILL(); f_485524(); return;
}

void f_48555a(void) {
  LOAD_REGS();
L_48555a: /* 48555a: mov eax, 0x48d8f2 */
  eax = 0x48d8f2u;
/* 48555f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485564u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485564: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485566: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485568: xor edi, edi */
  edi = 0;
/* 48556a: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48556d: mov esi, ecx */
  esi = ecx;
/* 48556f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 485572: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 485575: je 0x485593 */
  if (zf) goto L_485593;
L_485577: /* 485577: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 48557a: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 485580: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 485583: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 485589: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48558c: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_485593: /* 485593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485594: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485595: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485596: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 485599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48559a: mov ecx, esi */
  ecx = esi;
/* 48559c: call 0x461ae0 */
  esp -= 4; W32(esp, 0x4855a1u); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 4855a1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4855a3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4855a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4855a7: mov ecx, ebx */
  ecx = ebx;
/* 4855a9: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4855b0: mov dword ptr [esi + eax], 0x4c8a1c */
  W32((uint32_t)(esi + eax), 0x4c8a1cu);
/* 4855b7: call 0x461fa1 */
  esp -= 4; W32(esp, 0x4855bcu); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 4855bc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4855bf: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4855c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4855c3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4855c6: mov ecx, ebx */
  ecx = ebx;
/* 4855c8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4855cc: call 0x4850a7 */
  esp -= 4; W32(esp, 0x4855d1u); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 4855d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4855d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4855d4: jne 0x4855ea */
  if (!zf) goto L_4855ea;
L_4855d6: /* 4855d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4855d8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4855db: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4855dd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4855e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4855e1: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4855e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4855e5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4855eau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4855ea: /* 4855ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4855ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4855ee: mov eax, esi */
  eax = esi;
/* 4855f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4855f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4855f8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4855f9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4855fc(void) {
  LOAD_REGS();
L_4855fc: /* 4855fc: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 485600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485601: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485605: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485609: mov esi, ecx */
  esi = ecx;
/* 48560b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 48560e: call 0x4850a7 */
  esp -= 4; W32(esp, 0x485613u); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 485613: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485615: jne 0x48562c */
  if (!zf) goto L_48562c;
L_485617: /* 485617: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485619: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48561c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48561e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485621: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 485623: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485627: call 0x464bb2 */
  esp -= 4; W32(esp, 0x48562cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_48562c: /* 48562c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48562d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485630(void) {
  LOAD_REGS();
L_485630: /* 485630: jmp 0x4855fc */
  SPILL(); f_4855fc(); return;
}

void f_485632(void) {
  LOAD_REGS();
L_485632: /* 485632: mov eax, 0x48d928 */
  eax = 0x48d928u;
/* 485637: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48563cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48563c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48563d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48563e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48563f: xor ebx, ebx */
  ebx = 0;
/* 485641: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485645: mov esi, ecx */
  esi = ecx;
/* 485647: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48564a: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 48564d: je 0x485672 */
  if (zf) goto L_485672;
L_48564f: /* 48564f: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 485652: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 485658: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 48565f: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 485662: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 485668: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48566b: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_485672: /* 485672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485673: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485674: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 485677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485678: mov ecx, esi */
  ecx = esi;
/* 48567a: call 0x46b701 */
  esp -= 4; W32(esp, 0x48567fu); SPILL(); f_46b701(); if (g_unwind) return; RELOAD();
/* 48567f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485681: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 485684: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485685: mov ecx, edi */
  ecx = edi;
/* 485687: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48568e: mov dword ptr [esi + eax], 0x4c8a78 */
  W32((uint32_t)(esi + eax), 0x4c8a78u);
/* 485695: call 0x4615e2 */
  esp -= 4; W32(esp, 0x48569au); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 48569a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48569d: mov ecx, edi */
  ecx = edi;
/* 48569f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4856a2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4856a6: call 0x484fb8 */
  esp -= 4; W32(esp, 0x4856abu); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 4856ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4856ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4856ae: jne 0x4856c4 */
  if (!zf) goto L_4856c4;
L_4856b0: /* 4856b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4856b2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4856b5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4856b7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4856ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4856bb: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4856be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4856bf: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4856c4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4856c4: /* 4856c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4856c7: mov eax, esi */
  eax = esi;
/* 4856c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4856ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4856cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4856d2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4856d3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4856d6(void) {
  LOAD_REGS();
L_4856d6: /* 4856d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4856d7: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4856db: mov esi, ecx */
  esi = ecx;
/* 4856dd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4856e1: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4856e4: call 0x484fb8 */
  esp -= 4; W32(esp, 0x4856e9u); SPILL(); f_484fb8(); if (g_unwind) return; RELOAD();
/* 4856e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4856eb: jne 0x485702 */
  if (!zf) goto L_485702;
L_4856ed: /* 4856ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4856ef: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4856f2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4856f4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4856f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4856f9: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4856fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4856fd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x485702u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_485702: /* 485702: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485703: ret 8 */
  esp += 12; SPILL(); return;
}

void f_485706(void) {
  LOAD_REGS();
L_485706: /* 485706: jmp 0x4856d6 */
  SPILL(); f_4856d6(); return;
}

void f_485708(void) {
  LOAD_REGS();
L_485708: /* 485708: mov eax, 0x48d95e */
  eax = 0x48d95eu;
/* 48570d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485712u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485715: xor ebx, ebx */
  ebx = 0;
/* 485717: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48571a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48571b: mov esi, ecx */
  esi = ecx;
/* 48571d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 485720: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 485723: je 0x485748 */
  if (zf) goto L_485748;
L_485725: /* 485725: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 485728: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 48572e: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 485735: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 485738: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 48573e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485741: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_485748: /* 485748: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485749: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48574a: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 48574d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48574e: mov ecx, esi */
  ecx = esi;
/* 485750: call 0x46911e */
  esp -= 4; W32(esp, 0x485755u); SPILL(); f_46911e(); if (g_unwind) return; RELOAD();
/* 485755: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485757: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48575a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48575b: mov ecx, edi */
  ecx = edi;
/* 48575d: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 485764: mov dword ptr [esi + eax], 0x4c8ae8 */
  W32((uint32_t)(esi + eax), 0x4c8ae8u);
/* 48576b: call 0x462024 */
  esp -= 4; W32(esp, 0x485770u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 485770: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485773: mov ecx, edi */
  ecx = edi;
/* 485775: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485778: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48577c: call 0x485023 */
  esp -= 4; W32(esp, 0x485781u); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 485781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485783: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485784: jne 0x48579a */
  if (!zf) goto L_48579a;
L_485786: /* 485786: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 485788: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48578b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48578d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485791: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 485794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485795: call 0x464bb2 */
  esp -= 4; W32(esp, 0x48579au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_48579a: /* 48579a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48579d: mov eax, esi */
  eax = esi;
/* 48579f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4857a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4857a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4857a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4857a9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4857ac(void) {
  LOAD_REGS();
L_4857ac: /* 4857ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4857ad: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4857b1: mov esi, ecx */
  esi = ecx;
/* 4857b3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4857b7: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4857ba: call 0x485023 */
  esp -= 4; W32(esp, 0x4857bfu); SPILL(); f_485023(); if (g_unwind) return; RELOAD();
/* 4857bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4857c1: jne 0x4857d8 */
  if (!zf) goto L_4857d8;
L_4857c3: /* 4857c3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4857c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4857c8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4857ca: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4857cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4857cf: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4857d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4857d3: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4857d8u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4857d8: /* 4857d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4857d9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4857dc(void) {
  LOAD_REGS();
L_4857dc: /* 4857dc: jmp 0x4857ac */
  SPILL(); f_4857ac(); return;
}

void f_4857de(void) {
  LOAD_REGS();
L_4857de: /* 4857de: mov eax, 0x48d994 */
  eax = 0x48d994u;
/* 4857e3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4857e8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4857e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4857e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4857ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4857eb: xor ebx, ebx */
  ebx = 0;
/* 4857ed: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4857f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4857f1: mov esi, ecx */
  esi = ecx;
/* 4857f3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4857f6: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 4857f9: je 0x48581e */
  if (zf) goto L_48581e;
L_4857fb: /* 4857fb: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 4857fe: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 485804: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 48580b: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 48580e: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 485814: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485817: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_48581e: /* 48581e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48581f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485820: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 485823: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485824: mov ecx, esi */
  ecx = esi;
/* 485826: call 0x4691d1 */
  esp -= 4; W32(esp, 0x48582bu); SPILL(); f_4691d1(); if (g_unwind) return; RELOAD();
/* 48582b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48582d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 485830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485831: mov ecx, edi */
  ecx = edi;
/* 485833: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48583a: mov dword ptr [esi + eax], 0x4c8b58 */
  W32((uint32_t)(esi + eax), 0x4c8b58u);
/* 485841: call 0x461fa1 */
  esp -= 4; W32(esp, 0x485846u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 485846: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485849: mov ecx, edi */
  ecx = edi;
/* 48584b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48584e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 485852: call 0x4850a7 */
  esp -= 4; W32(esp, 0x485857u); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 485857: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485859: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48585a: jne 0x485870 */
  if (!zf) goto L_485870;
L_48585c: /* 48585c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48585e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 485861: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 485863: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 485866: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485867: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48586a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48586b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x485870u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_485870: /* 485870: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485873: mov eax, esi */
  eax = esi;
/* 485875: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485876: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485877: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48587e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48587f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_485882(void) {
  LOAD_REGS();
L_485882: /* 485882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485883: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485887: mov esi, ecx */
  esi = ecx;
/* 485889: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48588d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 485890: call 0x4850a7 */
  esp -= 4; W32(esp, 0x485895u); SPILL(); f_4850a7(); if (g_unwind) return; RELOAD();
/* 485895: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485897: jne 0x4858ae */
  if (!zf) goto L_4858ae;
L_485899: /* 485899: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48589b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48589e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4858a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4858a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4858a5: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4858a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4858a9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4858aeu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4858ae: /* 4858ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4858af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4858b2(void) {
  LOAD_REGS();
L_4858b2: /* 4858b2: jmp 0x485882 */
  SPILL(); f_485882(); return;
}

void f_4858b4(void) {
  LOAD_REGS();
L_4858b4: /* 4858b4: mov eax, 0x48d9ae */
  eax = 0x48d9aeu;
/* 4858b9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4858beu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4858be: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4858c1: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4858c6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4858c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4858ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4858cb: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4858ce: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4858d1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4858d4: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 4858d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4858d8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4858db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4858dc: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4858df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4858e0: call 0x48298f */
  esp -= 4; W32(esp, 0x4858e5u); SPILL(); f_48298f(); if (g_unwind) return; RELOAD();
/* 4858e5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 4858e8: xor ebx, ebx */
  ebx = 0;
/* 4858ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4858eb: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4858ee: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4858f1: call 0x46e745 */
  esp -= 4; W32(esp, 0x4858f6u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 4858f6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4858f8: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 4858fb: je 0x485900 */
  if (zf) goto L_485900;
L_4858fd: /* 4858fd: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485900: /* 485900: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485903: jne 0x48590d */
  if (!zf) goto L_48590d;
L_485905: /* 485905: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485908: jmp 0x4859a9 */
  goto L_4859a9;
L_48590d: /* 48590d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48590e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485911: mov dword ptr [ebp - 0x14], 0xf */
  W32((uint32_t)(ebp + 0xffffffecu), 0xfu);
/* 485918: call 0x461ed0 */
  esp -= 4; W32(esp, 0x48591du); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 48591d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 485920: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485923: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 485927: jae 0x485933 */
  if (!cf) goto L_485933;
L_485929: /* 485929: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48592a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48592b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48592e: call 0x461e63 */
  esp -= 4; W32(esp, 0x485933u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
L_485933: /* 485933: xor esi, esi */
  esi = 0;
/* 485935: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 485938: jbe 0x48595b */
  if ((cf | zf)) goto L_48595b;
L_48593a: /* 48593a: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48593e: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 485941: jae 0x485946 */
  if (!cf) goto L_485946;
L_485943: /* 485943: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
L_485946: /* 485946: movsx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + esi)));
/* 48594a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48594b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48594d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485950: call 0x466156 */
  esp -= 4; W32(esp, 0x485955u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 485955: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 485956: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485959: jb 0x48593a */
  if (cf) goto L_48593a;
L_48595b: /* 48595b: cmp dword ptr [ebp - 0x14], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48595f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485960: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 485963: jae 0x485968 */
  if (!cf) goto L_485968;
L_485965: /* 485965: lea edi, [ebp - 0x28] */
  edi = (uint32_t)(ebp + 0xffffffd8u);
L_485968: /* 485968: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 48596e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x485970u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 485970: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 485972: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485973: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 485976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485977: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485978: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x48597du); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 48597d: fstp qword ptr [ebp + 0x14] */
  WF64((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 485980: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 485983: cmp dword ptr [ebp + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485987: je 0x485999 */
  if (zf) goto L_485999;
L_485989: /* 485989: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48598bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48598b: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48598d: jne 0x485999 */
  if (!zf) goto L_485999;
L_48598f: /* 48598f: fld qword ptr [ebp + 0x14] */
  { double v = F64((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 485992: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 485995: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 485997: jmp 0x48599f */
  goto L_48599f;
L_485999: /* 485999: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 48599c: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_48599f: /* 48599f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4859a1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4859a4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4859a9u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_4859a9: /* 4859a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4859ac: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4859af: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4859b1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4859b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4859b6: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 4859b9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4859bc: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4859c1u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4859c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4859c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4859cb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4859ce: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4859d1: mov eax, esi */
  eax = esi;
/* 4859d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4859d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4859d5: call 0x46190c */
  esp -= 4; W32(esp, 0x4859dau); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4859da: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4859db: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_4859de(void) {
  LOAD_REGS();
L_4859de: /* 4859de: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 4859e3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4859e8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4859e8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4859eb: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4859f0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4859f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4859f4: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4859f7: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4859fa: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4859fd: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a01: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a05: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a09: call 0x48298f */
  esp -= 4; W32(esp, 0x485a0eu); SPILL(); f_48298f(); if (g_unwind) return; RELOAD();
/* 485a0e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485a11: xor esi, esi */
  esi = 0;
/* 485a13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a14: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485a17: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 485a1a: call 0x46e745 */
  esp -= 4; W32(esp, 0x485a1fu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 485a1f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485a21: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485a24: je 0x485a29 */
  if (zf) goto L_485a29;
L_485a26: /* 485a26: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485a29: /* 485a29: cmp dword ptr [ebp - 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485a2c: jne 0x485a33 */
  if (!zf) goto L_485a33;
L_485a2e: /* 485a2e: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485a31: jmp 0x485a42 */
  goto L_485a42;
L_485a33: /* 485a33: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 485a36: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 485a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485a39: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485a3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a3d: call 0x467320 */
  esp -= 4; W32(esp, 0x485a42u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
L_485a42: /* 485a42: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485a45: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 485a48: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 485a4a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 485a4d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485a4f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485a52: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 485a55: call 0x461ea8 */
  esp -= 4; W32(esp, 0x485a5au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 485a5a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485a5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485a64: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485a67: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485a6a: mov eax, esi */
  eax = esi;
/* 485a6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485a6d: call 0x46190c */
  esp -= 4; W32(esp, 0x485a72u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485a72: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485a73: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_485a76(void) {
  LOAD_REGS();
L_485a76: /* 485a76: mov eax, 0x48d9ec */
  eax = 0x48d9ecu;
/* 485a7b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485a80u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485a80: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485a83: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485a88: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485a8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485a8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485a8d: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485a90: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485a93: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485a96: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a9a: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485a9e: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 485aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485aa2: call 0x4830a9 */
  esp -= 4; W32(esp, 0x485aa7u); SPILL(); f_4830a9(); if (g_unwind) return; RELOAD();
/* 485aa7: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485aaa: xor ebx, ebx */
  ebx = 0;
/* 485aac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485aad: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485ab0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485ab3: call 0x46e77f */
  esp -= 4; W32(esp, 0x485ab8u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 485ab8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485aba: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485abd: je 0x485ac2 */
  if (zf) goto L_485ac2;
L_485abf: /* 485abf: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485ac2: /* 485ac2: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485ac5: jne 0x485acf */
  if (!zf) goto L_485acf;
L_485ac7: /* 485ac7: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485aca: jmp 0x485b73 */
  goto L_485b73;
L_485acf: /* 485acf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485ad0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485ad3: mov dword ptr [ebp - 0x14], 0xf */
  W32((uint32_t)(ebp + 0xffffffecu), 0xfu);
/* 485ada: call 0x461ed0 */
  esp -= 4; W32(esp, 0x485adfu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 485adf: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 485ae2: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485ae5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 485ae9: jae 0x485af5 */
  if (!cf) goto L_485af5;
L_485aeb: /* 485aeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485aec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485aed: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485af0: call 0x461e63 */
  esp -= 4; W32(esp, 0x485af5u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
L_485af5: /* 485af5: xor esi, esi */
  esi = 0;
/* 485af7: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 485afa: jbe 0x485b25 */
  if ((cf | zf)) goto L_485b25;
L_485afc: /* 485afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485afd: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 485b00: call 0x461123 */
  esp -= 4; W32(esp, 0x485b05u); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 485b05: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 485b08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485b09: call 0x488a88 */
  esp -= 4; W32(esp, 0x485b0eu); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 485b0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485b0f: mov byte ptr [ebp + 0x20], al */
  W8((uint32_t)(ebp + 0x20u), (eax & 0xffu));
/* 485b12: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485b15: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485b18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485b1a: call 0x466156 */
  esp -= 4; W32(esp, 0x485b1fu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 485b1f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 485b20: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485b23: jb 0x485afc */
  if (cf) goto L_485afc;
L_485b25: /* 485b25: cmp dword ptr [ebp - 0x14], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485b29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485b2a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 485b2d: jae 0x485b32 */
  if (!cf) goto L_485b32;
L_485b2f: /* 485b2f: lea edi, [ebp - 0x28] */
  edi = (uint32_t)(ebp + 0xffffffd8u);
L_485b32: /* 485b32: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 485b38: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x485b3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 485b3a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 485b3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485b3d: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 485b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485b41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485b42: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x485b47u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 485b47: fstp qword ptr [ebp + 0x14] */
  WF64((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 485b4a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 485b4d: cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485b50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485b51: je 0x485b63 */
  if (zf) goto L_485b63;
L_485b53: /* 485b53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x485b55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 485b55: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485b57: jne 0x485b63 */
  if (!zf) goto L_485b63;
L_485b59: /* 485b59: fld qword ptr [ebp + 0x14] */
  { double v = F64((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 485b5c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 485b5f: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 485b61: jmp 0x485b69 */
  goto L_485b69;
L_485b63: /* 485b63: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485b66: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485b69: /* 485b69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485b6b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485b6e: call 0x461ea8 */
  esp -= 4; W32(esp, 0x485b73u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_485b73: /* 485b73: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485b76: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 485b79: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 485b7b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 485b7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485b80: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 485b83: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 485b86: call 0x4624b0 */
  esp -= 4; W32(esp, 0x485b8bu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 485b8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485b8e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485b95: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485b98: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485b9b: mov eax, esi */
  eax = esi;
/* 485b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485b9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485b9f: call 0x46190c */
  esp -= 4; W32(esp, 0x485ba4u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485ba4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485ba5: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_485ba8(void) {
  LOAD_REGS();
L_485ba8: /* 485ba8: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 485bad: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485bb2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485bb2: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485bb5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485bba: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485bbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485bbe: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485bc1: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485bc4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485bc7: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485bca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485bcb: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485bce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485bcf: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485bd3: call 0x4830a9 */
  esp -= 4; W32(esp, 0x485bd8u); SPILL(); f_4830a9(); if (g_unwind) return; RELOAD();
/* 485bd8: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485bdb: xor esi, esi */
  esi = 0;
/* 485bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485bde: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485be1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 485be4: call 0x46e77f */
  esp -= 4; W32(esp, 0x485be9u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 485be9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485beb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485bee: je 0x485bf3 */
  if (zf) goto L_485bf3;
L_485bf0: /* 485bf0: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485bf3: /* 485bf3: cmp dword ptr [ebp - 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485bf6: jne 0x485bfd */
  if (!zf) goto L_485bfd;
L_485bf8: /* 485bf8: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485bfb: jmp 0x485c0c */
  goto L_485c0c;
L_485bfd: /* 485bfd: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 485c00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 485c02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485c03: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485c07: call 0x47a171 */
  esp -= 4; W32(esp, 0x485c0cu); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
L_485c0c: /* 485c0c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485c0f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 485c12: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 485c14: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 485c17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485c19: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485c1c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 485c1f: call 0x4624b0 */
  esp -= 4; W32(esp, 0x485c24u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 485c24: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485c27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485c2e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485c31: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485c34: mov eax, esi */
  eax = esi;
/* 485c36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485c37: call 0x46190c */
  esp -= 4; W32(esp, 0x485c3cu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485c3c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485c3d: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_485c40(void) {
  LOAD_REGS();
L_485c40: /* 485c40: mov eax, 0x48d9ec */
  eax = 0x48d9ecu;
/* 485c45: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485c4au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485c4a: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485c4d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485c52: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485c55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485c56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485c57: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485c5a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485c5d: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485c60: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485c63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485c64: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485c68: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 485c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485c6c: call 0x4837d3 */
  esp -= 4; W32(esp, 0x485c71u); SPILL(); f_4837d3(); if (g_unwind) return; RELOAD();
/* 485c71: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485c74: xor ebx, ebx */
  ebx = 0;
/* 485c76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485c77: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485c7a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485c7d: call 0x46e77f */
  esp -= 4; W32(esp, 0x485c82u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 485c82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485c84: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485c87: je 0x485c8c */
  if (zf) goto L_485c8c;
L_485c89: /* 485c89: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485c8c: /* 485c8c: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485c8f: jne 0x485c99 */
  if (!zf) goto L_485c99;
L_485c91: /* 485c91: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485c94: jmp 0x485d3d */
  goto L_485d3d;
L_485c99: /* 485c99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485c9a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485c9d: mov dword ptr [ebp - 0x14], 0xf */
  W32((uint32_t)(ebp + 0xffffffecu), 0xfu);
/* 485ca4: call 0x461ed0 */
  esp -= 4; W32(esp, 0x485ca9u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 485ca9: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 485cac: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485caf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 485cb3: jae 0x485cbf */
  if (!cf) goto L_485cbf;
L_485cb5: /* 485cb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485cb7: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485cba: call 0x461e63 */
  esp -= 4; W32(esp, 0x485cbfu); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
L_485cbf: /* 485cbf: xor esi, esi */
  esi = 0;
/* 485cc1: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 485cc4: jbe 0x485cef */
  if ((cf | zf)) goto L_485cef;
L_485cc6: /* 485cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485cc7: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 485cca: call 0x461123 */
  esp -= 4; W32(esp, 0x485ccfu); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 485ccf: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 485cd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485cd3: call 0x488a88 */
  esp -= 4; W32(esp, 0x485cd8u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 485cd8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485cd9: mov byte ptr [ebp + 0x20], al */
  W8((uint32_t)(ebp + 0x20u), (eax & 0xffu));
/* 485cdc: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485cdf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485ce2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485ce4: call 0x466156 */
  esp -= 4; W32(esp, 0x485ce9u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 485ce9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 485cea: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485ced: jb 0x485cc6 */
  if (cf) goto L_485cc6;
L_485cef: /* 485cef: cmp dword ptr [ebp - 0x14], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485cf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485cf4: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 485cf7: jae 0x485cfc */
  if (!cf) goto L_485cfc;
L_485cf9: /* 485cf9: lea edi, [ebp - 0x28] */
  edi = (uint32_t)(ebp + 0xffffffd8u);
L_485cfc: /* 485cfc: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 485d02: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x485d04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 485d04: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 485d06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485d07: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 485d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485d0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485d0c: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x485d11u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 485d11: fstp qword ptr [ebp + 0x14] */
  WF64((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 485d14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 485d17: cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485d1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485d1b: je 0x485d2d */
  if (zf) goto L_485d2d;
L_485d1d: /* 485d1d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x485d1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 485d1f: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485d21: jne 0x485d2d */
  if (!zf) goto L_485d2d;
L_485d23: /* 485d23: fld qword ptr [ebp + 0x14] */
  { double v = F64((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 485d26: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 485d29: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 485d2b: jmp 0x485d33 */
  goto L_485d33;
L_485d2d: /* 485d2d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485d30: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485d33: /* 485d33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485d35: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485d38: call 0x461ea8 */
  esp -= 4; W32(esp, 0x485d3du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_485d3d: /* 485d3d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485d40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 485d43: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 485d45: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 485d48: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485d4a: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 485d4d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 485d50: call 0x4624b0 */
  esp -= 4; W32(esp, 0x485d55u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 485d55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485d5f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485d62: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485d65: mov eax, esi */
  eax = esi;
/* 485d67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485d68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 485d69: call 0x46190c */
  esp -= 4; W32(esp, 0x485d6eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485d6e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485d6f: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_485d72(void) {
  LOAD_REGS();
L_485d72: /* 485d72: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 485d77: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485d7cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485d7c: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485d7f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485d84: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485d87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485d88: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485d8b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485d8e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485d91: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485d95: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 485d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485d99: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485d9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485d9d: call 0x4837d3 */
  esp -= 4; W32(esp, 0x485da2u); SPILL(); f_4837d3(); if (g_unwind) return; RELOAD();
/* 485da2: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 485da5: xor esi, esi */
  esi = 0;
/* 485da7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485da8: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 485dab: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 485dae: call 0x46e77f */
  esp -= 4; W32(esp, 0x485db3u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 485db3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485db5: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 485db8: je 0x485dbd */
  if (zf) goto L_485dbd;
L_485dba: /* 485dba: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_485dbd: /* 485dbd: cmp dword ptr [ebp - 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 485dc0: jne 0x485dc7 */
  if (!zf) goto L_485dc7;
L_485dc2: /* 485dc2: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 485dc5: jmp 0x485dd6 */
  goto L_485dd6;
L_485dc7: /* 485dc7: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 485dca: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 485dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485dcd: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 485dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485dd1: call 0x47a171 */
  esp -= 4; W32(esp, 0x485dd6u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
L_485dd6: /* 485dd6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 485dd9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 485ddc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 485dde: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 485de1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485de3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 485de6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 485de9: call 0x4624b0 */
  esp -= 4; W32(esp, 0x485deeu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 485dee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485df1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485df8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485dfb: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485dfe: mov eax, esi */
  eax = esi;
/* 485e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485e01: call 0x46190c */
  esp -= 4; W32(esp, 0x485e06u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485e06: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485e07: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_485e0a(void) {
  LOAD_REGS();
L_485e0a: /* 485e0a: mov eax, 0x48d9fe */
  eax = 0x48d9feu;
/* 485e0f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485e14u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485e14: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485e17: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 485e1a: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485e1f: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485e22: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 485e28: and byte ptr [ebp - 0x18], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 485e2c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485e30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 485e32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485e33: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 485e36: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 485e39: jp 0x485e47 */
  if (pf) goto L_485e47;
L_485e3b: /* 485e3b: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 485e3e: mov byte ptr [ebp - 0x18], 1 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 485e42: fchs  */
  ST0 = -ST0;
/* 485e44: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_485e47: /* 485e47: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 485e4b: jmp 0x485e66 */
  goto L_485e66;
L_485e4d: /* 485e4d: cmp dword ptr [ebp - 0x14], 0x1388 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1388u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485e54: jae 0x485e76 */
  if (!cf) goto L_485e76;
L_485e56: /* 485e56: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 485e59: add dword ptr [ebp - 0x14], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 485e5d: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 485e63: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_485e66: /* 485e66: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 485e6c: fcomp qword ptr [ebp + 0x20] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x20u)));
  FPOP();
/* 485e6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 485e71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 485e74: jnp 0x485e4d */
  if (!pf) goto L_485e4d;
L_485e76: /* 485e76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 485e78: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 485e7b: mov dword ptr [ebp - 0x20], 0xf */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xfu);
/* 485e82: call 0x461ed0 */
  esp -= 4; W32(esp, 0x485e87u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 485e87: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 485e8a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 485e8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485e8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 485e90: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 485e93: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 485e96: push 0x4c8f04 */
  { uint32_t v = 0x4c8f04u; esp -= 4; W32(esp, v); }
/* 485e9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485e9c: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x485ea2u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 485ea2: mov edi, eax */
  edi = eax;
/* 485ea4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 485ea7: xor esi, esi */
  esi = 0;
/* 485ea9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 485eab: jle 0x485ec3 */
  if ((zf || sf != of)) goto L_485ec3;
L_485ead: /* 485ead: xor eax, eax */
  eax = 0;
/* 485eaf: mov al, byte ptr [ebp + esi - 0x60] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffa0u))) & 0xffu);
/* 485eb3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 485eb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485eb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485eb9: call 0x466156 */
  esp -= 4; W32(esp, 0x485ebeu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 485ebe: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 485ebf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 485ec1: jl 0x485ead */
  if ((sf != of)) goto L_485ead;
L_485ec3: /* 485ec3: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 485ec5: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 485ec8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 485ecb: call 0x466156 */
  esp -= 4; W32(esp, 0x485ed0u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 485ed0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485ed3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 485ed6: mov ecx, esp */
  ecx = esp;
/* 485ed8: mov dword ptr [ebp + 0x24], esp */
  W32((uint32_t)(ebp + 0x24u), esp);
/* 485edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485edc: call 0x4675a8 */
  esp -= 4; W32(esp, 0x485ee1u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 485ee1: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 485ee4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 485ee7: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485eea: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 485eed: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 485ef0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 485ef3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485ef6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485ef9: call 0x483efd */
  esp -= 4; W32(esp, 0x485efeu); SPILL(); f_483efd(); if (g_unwind) return; RELOAD();
/* 485efe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 485f00: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 485f03: call 0x461ea8 */
  esp -= 4; W32(esp, 0x485f08u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 485f08: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485f0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 485f0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 485f15: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 485f18: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 485f1b: call 0x46190c */
  esp -= 4; W32(esp, 0x485f20u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 485f20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 485f21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 485f22: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 485f23: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_485f26(void) {
  LOAD_REGS();
L_485f26: /* 485f26: mov eax, 0x48da18 */
  eax = 0x48da18u;
/* 485f2b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x485f30u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 485f30: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485f33: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 485f38: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 485f3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485f3d: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 485f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 485f41: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 485f44: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 485f47: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 485f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485f4b: call 0x464a5a */
  esp -= 4; W32(esp, 0x485f50u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 485f50: xor esi, esi */
  esi = 0;
/* 485f52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485f53: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 485f56: call 0x46587a */
  esp -= 4; W32(esp, 0x485f5bu); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 485f5b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 485f5f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 485f60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 485f63: mov edi, eax */
  edi = eax;
/* 485f65: call 0x461389 */
  esp -= 4; W32(esp, 0x485f6au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 485f6a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 485f6d: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 485f71: jb 0x485f78 */
  if (cf) goto L_485f78;
L_485f73: /* 485f73: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 485f76: jmp 0x485f7b */
  goto L_485f7b;
L_485f78: /* 485f78: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_485f7b: /* 485f7b: and byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x20u), r);
  }
/* 485f7f: xor ebx, ebx */
  ebx = 0;
/* 485f81: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 485f82: cmp byte ptr [eax], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 485f85: jne 0x485f8b */
  if (!zf) goto L_485f8b;
L_485f87: /* 485f87: mov byte ptr [ebp + 0x20], bl */
  W8((uint32_t)(ebp + 0x20u), (ebx & 0xffu));
/* 485f8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_485f8b: /* 485f8b: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 485f8e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 485f91: jmp 0x485f98 */
  goto L_485f98;
L_485f93: /* 485f93: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 485f94: movzx edx, byte ptr [esi + eax] */
  edx = (uint32_t)(R8((uint32_t)(esi + eax)));
L_485f98: /* 485f98: movsx edx, byte ptr [ecx + edx*2] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edx*2)));
/* 485f9c: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 485f9f: test bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 485fa1: jne 0x485f93 */
  if (!zf) goto L_485f93;
L_485fa3: /* 485fa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 485fa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485fa5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 485fa8: call 0x46760d */
  esp -= 4; W32(esp, 0x485fadu); SPILL(); f_46760d(); if (g_unwind) return; RELOAD();
/* 485fad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 485faf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 485fb2: jne 0x485fbf */
  if (!zf) goto L_485fbf;
L_485fb4: /* 485fb4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 485fb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485fb7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 485fba: call 0x466156 */
  esp -= 4; W32(esp, 0x485fbfu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
L_485fbf: /* 485fbf: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 485fc2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 485fc5: mov ecx, esp */
  ecx = esp;
/* 485fc7: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 485fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 485fcb: call 0x4675a8 */
  esp -= 4; W32(esp, 0x485fd0u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 485fd0: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 485fd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 485fd6: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 485fd9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 485fdc: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 485fdf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 485fe2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 485fe5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 485fe8: call 0x483efd */
  esp -= 4; W32(esp, 0x485fedu); SPILL(); f_483efd(); if (g_unwind) return; RELOAD();
/* 485fed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 485fee: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 485ff1: call 0x461ea8 */
  esp -= 4; W32(esp, 0x485ff6u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 485ff6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 485ff9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 485ffc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486003: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 486006: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 486009: call 0x46190c */
  esp -= 4; W32(esp, 0x48600eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48600e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48600f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486010: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486011: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486012: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_486015(void) {
  LOAD_REGS();
L_486015: /* 486015: mov eax, 0x48da2a */
  eax = 0x48da2au;
/* 48601a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48601fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48601f: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486022: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486025: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48602a: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48602d: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 486033: and byte ptr [ebp - 0x18], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 486037: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 48603a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48603b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48603d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48603e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 486041: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 486044: jp 0x486052 */
  if (pf) goto L_486052;
L_486046: /* 486046: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486049: mov byte ptr [ebp - 0x18], 1 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 48604d: fchs  */
  ST0 = -ST0;
/* 48604f: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_486052: /* 486052: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 486056: jmp 0x486071 */
  goto L_486071;
L_486058: /* 486058: cmp dword ptr [ebp - 0x14], 0x1388 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1388u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48605f: jae 0x486081 */
  if (!cf) goto L_486081;
L_486061: /* 486061: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486064: add dword ptr [ebp - 0x14], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 486068: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 48606e: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_486071: /* 486071: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 486077: fcomp qword ptr [ebp + 0x20] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x20u)));
  FPOP();
/* 48607a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48607c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48607f: jnp 0x486058 */
  if (!pf) goto L_486058;
L_486081: /* 486081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486083: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 486086: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
/* 48608d: call 0x4624dd */
  esp -= 4; W32(esp, 0x486092u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 486092: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486095: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48609a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48609b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48609e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 4860a1: push 0x4c8f04 */
  { uint32_t v = 0x4c8f04u; esp -= 4; W32(esp, v); }
/* 4860a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4860a7: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x4860adu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 4860ad: mov edi, eax */
  edi = eax;
/* 4860af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4860b2: xor esi, esi */
  esi = 0;
/* 4860b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4860b6: jle 0x4860d4 */
  if ((zf || sf != of)) goto L_4860d4;
L_4860b8: /* 4860b8: movsx eax, byte ptr [ebp + esi - 0x60] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + esi + 0xffffffa0u)));
/* 4860bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4860be: call 0x461d6f */
  esp -= 4; W32(esp, 0x4860c3u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 4860c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4860c4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4860c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4860c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4860ca: call 0x473236 */
  esp -= 4; W32(esp, 0x4860cfu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 4860cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4860d0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4860d2: jl 0x4860b8 */
  if ((sf != of)) goto L_4860b8;
L_4860d4: /* 4860d4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4860d6: call 0x461d6f */
  esp -= 4; W32(esp, 0x4860dbu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 4860db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4860dc: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4860df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4860e0: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4860e3: call 0x473236 */
  esp -= 4; W32(esp, 0x4860e8u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 4860e8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4860eb: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4860ee: mov ecx, esp */
  ecx = esp;
/* 4860f0: mov dword ptr [ebp + 0x24], esp */
  W32((uint32_t)(ebp + 0x24u), esp);
/* 4860f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4860f4: call 0x47d83c */
  esp -= 4; W32(esp, 0x4860f9u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4860f9: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4860fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4860ff: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 486102: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 486105: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486108: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48610b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48610e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486111: call 0x484384 */
  esp -= 4; W32(esp, 0x486116u); SPILL(); f_484384(); if (g_unwind) return; RELOAD();
/* 486116: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 486118: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48611b: call 0x4624b0 */
  esp -= 4; W32(esp, 0x486120u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 486120: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486123: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486126: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48612d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 486130: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 486133: call 0x46190c */
  esp -= 4; W32(esp, 0x486138u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 486138: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486139: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48613a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48613b: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_48613e(void) {
  LOAD_REGS();
L_48613e: /* 48613e: mov eax, 0x48da44 */
  eax = 0x48da44u;
/* 486143: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486148u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486148: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48614b: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 486150: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 486153: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486154: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486155: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 486158: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486159: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 48615c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 48615f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 486162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486163: call 0x464a5a */
  esp -= 4; W32(esp, 0x486168u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 486168: xor ebx, ebx */
  ebx = 0;
/* 48616a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48616b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48616e: call 0x46591c */
  esp -= 4; W32(esp, 0x486173u); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 486173: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486177: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486178: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 48617b: mov edi, eax */
  edi = eax;
/* 48617d: call 0x461389 */
  esp -= 4; W32(esp, 0x486182u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 486182: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 486185: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 486189: jb 0x486190 */
  if (cf) goto L_486190;
L_48618b: /* 48618b: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 48618e: jmp 0x486193 */
  goto L_486193;
L_486190: /* 486190: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_486193: /* 486193: and byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x20u), r);
  }
/* 486197: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 486199: call 0x461d6f */
  esp -= 4; W32(esp, 0x48619eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 48619e: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4861a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4861a2: jne 0x4861aa */
  if (!zf) goto L_4861aa;
L_4861a4: /* 4861a4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4861a5: mov byte ptr [ebp + 0x20], 1 */
  W8((uint32_t)(ebp + 0x20u), 0x1u);
/* 4861a9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4861aa: /* 4861aa: xor eax, eax */
  eax = 0;
/* 4861ac: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4861af: jmp 0x4861b8 */
  goto L_4861b8;
L_4861b1: /* 4861b1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4861b2: xor eax, eax */
  eax = 0;
/* 4861b4: mov ax, word ptr [esi + ebx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + ebx*2))) & 0xffffu);
L_4861b8: /* 4861b8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4861ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4861bb: mov ecx, edi */
  ecx = edi;
/* 4861bd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4861bf: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x4861c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4861c2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4861c4: jne 0x4861b1 */
  if (!zf) goto L_4861b1;
L_4861c6: /* 4861c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4861c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4861c8: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4861cb: call 0x47d85b */
  esp -= 4; W32(esp, 0x4861d0u); SPILL(); f_47d85b(); if (g_unwind) return; RELOAD();
/* 4861d0: xor esi, esi */
  esi = 0;
/* 4861d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4861d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4861d5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4861d8: jne 0x4861ec */
  if (!zf) goto L_4861ec;
L_4861da: /* 4861da: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4861dc: call 0x461d6f */
  esp -= 4; W32(esp, 0x4861e1u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 4861e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4861e2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4861e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4861e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4861e7: call 0x473236 */
  esp -= 4; W32(esp, 0x4861ecu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
L_4861ec: /* 4861ec: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4861ef: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 4861f2: mov ecx, esp */
  ecx = esp;
/* 4861f4: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 4861f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4861f8: call 0x47d83c */
  esp -= 4; W32(esp, 0x4861fdu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4861fd: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 486200: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 486203: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 486206: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 486209: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48620c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48620f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 486212: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486215: call 0x484384 */
  esp -= 4; W32(esp, 0x48621au); SPILL(); f_484384(); if (g_unwind) return; RELOAD();
/* 48621a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48621b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48621e: call 0x4624b0 */
  esp -= 4; W32(esp, 0x486223u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 486223: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486226: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486230: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 486233: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 486236: call 0x46190c */
  esp -= 4; W32(esp, 0x48623bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48623b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48623c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48623d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48623e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48623f: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_486242(void) {
  LOAD_REGS();
L_486242: /* 486242: mov eax, 0x48da2a */
  eax = 0x48da2au;
/* 486247: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48624cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48624c: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48624f: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486252: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 486257: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48625a: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 486260: and byte ptr [ebp - 0x18], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 486264: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 486267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486268: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48626a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48626b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 48626e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 486271: jp 0x48627f */
  if (pf) goto L_48627f;
L_486273: /* 486273: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486276: mov byte ptr [ebp - 0x18], 1 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 48627a: fchs  */
  ST0 = -ST0;
/* 48627c: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_48627f: /* 48627f: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 486283: jmp 0x48629e */
  goto L_48629e;
L_486285: /* 486285: cmp dword ptr [ebp - 0x14], 0x1388 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1388u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48628c: jae 0x4862ae */
  if (!cf) goto L_4862ae;
L_48628e: /* 48628e: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 486291: add dword ptr [ebp - 0x14], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 486295: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 48629b: fstp qword ptr [ebp + 0x20] */
  WF64((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_48629e: /* 48629e: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 4862a4: fcomp qword ptr [ebp + 0x20] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x20u)));
  FPOP();
/* 4862a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4862a9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4862ac: jnp 0x486285 */
  if (!pf) goto L_486285;
L_4862ae: /* 4862ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4862b0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4862b3: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
/* 4862ba: call 0x4624dd */
  esp -= 4; W32(esp, 0x4862bfu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4862bf: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 4862c2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4862c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4862c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4862c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4862cb: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 4862ce: push 0x4c8f04 */
  { uint32_t v = 0x4c8f04u; esp -= 4; W32(esp, v); }
/* 4862d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4862d4: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x4862dau); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 4862da: mov edi, eax */
  edi = eax;
/* 4862dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4862df: xor esi, esi */
  esi = 0;
/* 4862e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4862e3: jle 0x486301 */
  if ((zf || sf != of)) goto L_486301;
L_4862e5: /* 4862e5: movsx eax, byte ptr [ebp + esi - 0x60] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + esi + 0xffffffa0u)));
/* 4862ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4862eb: call 0x461d6f */
  esp -= 4; W32(esp, 0x4862f0u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 4862f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4862f1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4862f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4862f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4862f7: call 0x473236 */
  esp -= 4; W32(esp, 0x4862fcu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 4862fc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4862fd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4862ff: jl 0x4862e5 */
  if ((sf != of)) goto L_4862e5;
L_486301: /* 486301: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 486303: call 0x461d6f */
  esp -= 4; W32(esp, 0x486308u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 486308: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486309: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48630c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48630d: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 486310: call 0x473236 */
  esp -= 4; W32(esp, 0x486315u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 486315: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486318: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 48631b: mov ecx, esp */
  ecx = esp;
/* 48631d: mov dword ptr [ebp + 0x24], esp */
  W32((uint32_t)(ebp + 0x24u), esp);
/* 486320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486321: call 0x47d83c */
  esp -= 4; W32(esp, 0x486326u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 486326: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 486329: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 48632c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48632f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 486332: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486335: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 486338: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48633b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48633e: call 0x484849 */
  esp -= 4; W32(esp, 0x486343u); SPILL(); f_484849(); if (g_unwind) return; RELOAD();
/* 486343: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 486345: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 486348: call 0x4624b0 */
  esp -= 4; W32(esp, 0x48634du); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 48634d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486350: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486353: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48635a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48635d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 486360: call 0x46190c */
  esp -= 4; W32(esp, 0x486365u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 486365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486366: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486367: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486368: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_48636b(void) {
  LOAD_REGS();
L_48636b: /* 48636b: mov eax, 0x48da44 */
  eax = 0x48da44u;
/* 486370: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486375u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486375: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486378: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48637d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 486380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486382: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 486385: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486386: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 486389: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 48638c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 48638f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486390: call 0x464a5a */
  esp -= 4; W32(esp, 0x486395u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 486395: xor ebx, ebx */
  ebx = 0;
/* 486397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486398: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48639b: call 0x4659be */
  esp -= 4; W32(esp, 0x4863a0u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 4863a0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4863a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4863a5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 4863a8: mov edi, eax */
  edi = eax;
/* 4863aa: call 0x461389 */
  esp -= 4; W32(esp, 0x4863afu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4863af: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 4863b2: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4863b6: jb 0x4863bd */
  if (cf) goto L_4863bd;
L_4863b8: /* 4863b8: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 4863bb: jmp 0x4863c0 */
  goto L_4863c0;
L_4863bd: /* 4863bd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4863c0: /* 4863c0: and byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x20u), r);
  }
/* 4863c4: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 4863c6: call 0x461d6f */
  esp -= 4; W32(esp, 0x4863cbu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 4863cb: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4863ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4863cf: jne 0x4863d7 */
  if (!zf) goto L_4863d7;
L_4863d1: /* 4863d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4863d2: mov byte ptr [ebp + 0x20], 1 */
  W8((uint32_t)(ebp + 0x20u), 0x1u);
/* 4863d6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4863d7: /* 4863d7: xor eax, eax */
  eax = 0;
/* 4863d9: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4863dc: jmp 0x4863e5 */
  goto L_4863e5;
L_4863de: /* 4863de: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4863df: xor eax, eax */
  eax = 0;
/* 4863e1: mov ax, word ptr [esi + ebx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + ebx*2))) & 0xffffu);
L_4863e5: /* 4863e5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4863e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4863e8: mov ecx, edi */
  ecx = edi;
/* 4863ea: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4863ec: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x4863efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4863ef: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4863f1: jne 0x4863de */
  if (!zf) goto L_4863de;
L_4863f3: /* 4863f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4863f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4863f5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4863f8: call 0x47d85b */
  esp -= 4; W32(esp, 0x4863fdu); SPILL(); f_47d85b(); if (g_unwind) return; RELOAD();
/* 4863fd: xor esi, esi */
  esi = 0;
/* 4863ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 486400: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486402: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 486405: jne 0x486419 */
  if (!zf) goto L_486419;
L_486407: /* 486407: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 486409: call 0x461d6f */
  esp -= 4; W32(esp, 0x48640eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 48640e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48640f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 486412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486413: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486414: call 0x473236 */
  esp -= 4; W32(esp, 0x486419u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
L_486419: /* 486419: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48641c: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 48641f: mov ecx, esp */
  ecx = esp;
/* 486421: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 486424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486425: call 0x47d83c */
  esp -= 4; W32(esp, 0x48642au); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48642a: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 48642d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 486430: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 486433: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 486436: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486439: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48643c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48643f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486442: call 0x484849 */
  esp -= 4; W32(esp, 0x486447u); SPILL(); f_484849(); if (g_unwind) return; RELOAD();
/* 486447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486448: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 48644b: call 0x4624b0 */
  esp -= 4; W32(esp, 0x486450u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 486450: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486453: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486456: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48645d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 486460: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 486463: call 0x46190c */
  esp -= 4; W32(esp, 0x486468u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 486468: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486469: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48646a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48646b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48646c: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_48646f(void) {
  LOAD_REGS();
L_48646f: /* 48646f: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 486474: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486479u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486479: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48647c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48647f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486480: mov esi, ecx */
  esi = ecx;
/* 486482: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 486485: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 486488: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48648c: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 486491: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 486497: mov dword ptr [esi], 0x4c7ef8 */
  W32((uint32_t)(esi), 0x4c7ef8u);
/* 48649d: call 0x488f1b */
  esp -= 4; W32(esp, 0x4864a2u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 4864a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4864a3: mov ecx, esi */
  ecx = esi;
/* 4864a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4864a9: call 0x484d0e */
  esp -= 4; W32(esp, 0x4864aeu); SPILL(); f_484d0e(); if (g_unwind) return; RELOAD();
/* 4864ae: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4864b2: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4864b8: call 0x488e1d */
  esp -= 4; W32(esp, 0x4864bdu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 4864bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4864c0: mov eax, esi */
  eax = esi;
/* 4864c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4864c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4864ca: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4864cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4864ce(void) {
  LOAD_REGS();
L_4864ce: /* 4864ce: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 4864d3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4864d8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4864d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4864d9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4864dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4864dd: mov esi, ecx */
  esi = ecx;
/* 4864df: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4864e2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4864e5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4864e8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4864ec: mov dword ptr [esi], 0x4c7ef8 */
  W32((uint32_t)(esi), 0x4c7ef8u);
/* 4864f2: call 0x484d0e */
  esp -= 4; W32(esp, 0x4864f7u); SPILL(); f_484d0e(); if (g_unwind) return; RELOAD();
/* 4864f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4864fa: mov eax, esi */
  eax = esi;
/* 4864fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4864fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486504: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486505: ret 8 */
  esp += 12; SPILL(); return;
}

void f_486508(void) {
  LOAD_REGS();
L_486508: /* 486508: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 48650d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486512u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486512: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486513: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 486516: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486518: je 0x486541 */
  if (zf) goto L_486541;
L_48651a: /* 48651a: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48651d: jne 0x486541 */
  if (!zf) goto L_486541;
L_48651f: /* 48651f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 486521: call 0x4620da */
  esp -= 4; W32(esp, 0x486526u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486526: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486527: mov ecx, eax */
  ecx = eax;
/* 486529: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 48652c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486530: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486532: je 0x48653d */
  if (zf) goto L_48653d;
L_486534: /* 486534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486536: call 0x48646f */
  esp -= 4; W32(esp, 0x48653bu); SPILL(); f_48646f(); if (g_unwind) return; RELOAD();
/* 48653b: jmp 0x48653f */
  goto L_48653f;
L_48653d: /* 48653d: xor eax, eax */
  eax = 0;
L_48653f: /* 48653f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_486541: /* 486541: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486544: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 486546: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 486547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486548: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48654f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486550: ret  */
  esp += 4; SPILL(); return;
}

void f_486551(void) {
  LOAD_REGS();
L_486551: /* 486551: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 486556: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48655bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48655b: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48655e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486562: mov esi, ecx */
  esi = ecx;
/* 486564: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 486567: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 48656a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48656e: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 486573: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 486579: mov dword ptr [esi], 0x4c7f64 */
  W32((uint32_t)(esi), 0x4c7f64u);
/* 48657f: call 0x488f1b */
  esp -= 4; W32(esp, 0x486584u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 486584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486585: mov ecx, esi */
  ecx = esi;
/* 486587: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48658b: call 0x484d97 */
  esp -= 4; W32(esp, 0x486590u); SPILL(); f_484d97(); if (g_unwind) return; RELOAD();
/* 486590: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486594: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48659a: call 0x488e1d */
  esp -= 4; W32(esp, 0x48659fu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 48659f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4865a2: mov eax, esi */
  eax = esi;
/* 4865a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4865a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4865ac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4865ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4865b0(void) {
  LOAD_REGS();
L_4865b0: /* 4865b0: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 4865b5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4865bau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4865ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4865bb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4865be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4865bf: mov esi, ecx */
  esi = ecx;
/* 4865c1: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4865c4: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4865c7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4865ca: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4865ce: mov dword ptr [esi], 0x4c7f64 */
  W32((uint32_t)(esi), 0x4c7f64u);
/* 4865d4: call 0x484d97 */
  esp -= 4; W32(esp, 0x4865d9u); SPILL(); f_484d97(); if (g_unwind) return; RELOAD();
/* 4865d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4865dc: mov eax, esi */
  eax = esi;
/* 4865de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4865df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4865e6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4865e7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4865ea(void) {
  LOAD_REGS();
L_4865ea: /* 4865ea: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 4865ef: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4865f4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4865f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4865f5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4865f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4865fa: je 0x486623 */
  if (zf) goto L_486623;
L_4865fc: /* 4865fc: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4865ff: jne 0x486623 */
  if (!zf) goto L_486623;
L_486601: /* 486601: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 486603: call 0x4620da */
  esp -= 4; W32(esp, 0x486608u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486608: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486609: mov ecx, eax */
  ecx = eax;
/* 48660b: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 48660e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486614: je 0x48661f */
  if (zf) goto L_48661f;
L_486616: /* 486616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486618: call 0x486551 */
  esp -= 4; W32(esp, 0x48661du); SPILL(); f_486551(); if (g_unwind) return; RELOAD();
/* 48661d: jmp 0x486621 */
  goto L_486621;
L_48661f: /* 48661f: xor eax, eax */
  eax = 0;
L_486621: /* 486621: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_486623: /* 486623: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486626: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 486628: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 486629: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48662a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486631: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486632: ret  */
  esp += 4; SPILL(); return;
}

void f_486633(void) {
  LOAD_REGS();
L_486633: /* 486633: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 486638: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48663du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48663d: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486640: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 486643: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486644: mov esi, ecx */
  esi = ecx;
/* 486646: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 486649: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 48664c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486650: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 486655: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48665b: mov dword ptr [esi], 0x4c7fd0 */
  W32((uint32_t)(esi), 0x4c7fd0u);
/* 486661: call 0x488f1b */
  esp -= 4; W32(esp, 0x486666u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 486666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486667: mov ecx, esi */
  ecx = esi;
/* 486669: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48666d: call 0x484d97 */
  esp -= 4; W32(esp, 0x486672u); SPILL(); f_484d97(); if (g_unwind) return; RELOAD();
/* 486672: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486676: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48667c: call 0x488e1d */
  esp -= 4; W32(esp, 0x486681u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 486681: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486684: mov eax, esi */
  eax = esi;
/* 486686: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486687: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48668e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48668f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486692(void) {
  LOAD_REGS();
L_486692: /* 486692: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 486697: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48669cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48669c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48669d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4866a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4866a1: mov esi, ecx */
  esi = ecx;
/* 4866a3: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4866a6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4866a9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4866ac: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4866b0: mov dword ptr [esi], 0x4c7fd0 */
  W32((uint32_t)(esi), 0x4c7fd0u);
/* 4866b6: call 0x484d97 */
  esp -= 4; W32(esp, 0x4866bbu); SPILL(); f_484d97(); if (g_unwind) return; RELOAD();
/* 4866bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4866be: mov eax, esi */
  eax = esi;
/* 4866c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4866c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4866c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4866c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4866cc(void) {
  LOAD_REGS();
L_4866cc: /* 4866cc: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 4866d1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4866d6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4866d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4866d7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4866da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4866dc: je 0x486705 */
  if (zf) goto L_486705;
L_4866de: /* 4866de: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4866e1: jne 0x486705 */
  if (!zf) goto L_486705;
L_4866e3: /* 4866e3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4866e5: call 0x4620da */
  esp -= 4; W32(esp, 0x4866eau); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4866ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4866eb: mov ecx, eax */
  ecx = eax;
/* 4866ed: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4866f0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4866f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4866f6: je 0x486701 */
  if (zf) goto L_486701;
L_4866f8: /* 4866f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4866fa: call 0x486633 */
  esp -= 4; W32(esp, 0x4866ffu); SPILL(); f_486633(); if (g_unwind) return; RELOAD();
/* 4866ff: jmp 0x486703 */
  goto L_486703;
L_486701: /* 486701: xor eax, eax */
  eax = 0;
L_486703: /* 486703: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_486705: /* 486705: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486708: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 48670a: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 48670b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48670c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486713: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486714: ret  */
  esp += 4; SPILL(); return;
}

void f_486715(void) {
  LOAD_REGS();
L_486715: /* 486715: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486716: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 48671a: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48671d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48671e: je 0x486745 */
  if (zf) goto L_486745;
L_486720: /* 486720: push 0x484f0d */
  { uint32_t v = 0x484f0du; esp -= 4; W32(esp, v); }
/* 486725: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 486728: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 48672a: add ecx, -0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48672d: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 486732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486733: call 0x48be30 */
  esp -= 4; W32(esp, 0x486738u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 486738: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48673b: je 0x48675b */
  if (zf) goto L_48675b;
L_48673d: /* 48673d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48673e: call 0x48bdcd */
  esp -= 4; W32(esp, 0x486743u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 486743: jmp 0x48675a */
  goto L_48675a;
L_486745: /* 486745: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 486748: mov ecx, esi */
  ecx = esi;
/* 48674a: call 0x484f0d */
  esp -= 4; W32(esp, 0x48674fu); SPILL(); f_484f0d(); if (g_unwind) return; RELOAD();
/* 48674f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486752: je 0x48675b */
  if (zf) goto L_48675b;
L_486754: /* 486754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486755: call 0x461c65 */
  esp -= 4; W32(esp, 0x48675au); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_48675a: /* 48675a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48675b: /* 48675b: mov eax, esi */
  eax = esi;
/* 48675d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48675e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48675f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486762(void) {
  LOAD_REGS();
L_486762: /* 486762: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486763: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 486767: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48676a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48676b: je 0x486792 */
  if (zf) goto L_486792;
L_48676d: /* 48676d: push 0x484f20 */
  { uint32_t v = 0x484f20u; esp -= 4; W32(esp, v); }
/* 486772: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 486775: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 486777: add ecx, -0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48677a: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 48677f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486780: call 0x48be30 */
  esp -= 4; W32(esp, 0x486785u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 486785: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486788: je 0x4867a8 */
  if (zf) goto L_4867a8;
L_48678a: /* 48678a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48678b: call 0x48bdcd */
  esp -= 4; W32(esp, 0x486790u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 486790: jmp 0x4867a7 */
  goto L_4867a7;
L_486792: /* 486792: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 486795: mov ecx, esi */
  ecx = esi;
/* 486797: call 0x484f20 */
  esp -= 4; W32(esp, 0x48679cu); SPILL(); f_484f20(); if (g_unwind) return; RELOAD();
/* 48679c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48679f: je 0x4867a8 */
  if (zf) goto L_4867a8;
L_4867a1: /* 4867a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4867a2: call 0x461c65 */
  esp -= 4; W32(esp, 0x4867a7u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_4867a7: /* 4867a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4867a8: /* 4867a8: mov eax, esi */
  eax = esi;
/* 4867aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4867ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4867ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4867af(void) {
  LOAD_REGS();
L_4867af: /* 4867af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4867b0: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4867b4: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4867b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4867b8: je 0x4867df */
  if (zf) goto L_4867df;
L_4867ba: /* 4867ba: push 0x484f33 */
  { uint32_t v = 0x484f33u; esp -= 4; W32(esp, v); }
/* 4867bf: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 4867c2: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4867c4: add ecx, -0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4867c7: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 4867cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4867cd: call 0x48be30 */
  esp -= 4; W32(esp, 0x4867d2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4867d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4867d5: je 0x4867f5 */
  if (zf) goto L_4867f5;
L_4867d7: /* 4867d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4867d8: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4867ddu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4867dd: jmp 0x4867f4 */
  goto L_4867f4;
L_4867df: /* 4867df: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 4867e2: mov ecx, esi */
  ecx = esi;
/* 4867e4: call 0x484f33 */
  esp -= 4; W32(esp, 0x4867e9u); SPILL(); f_484f33(); if (g_unwind) return; RELOAD();
/* 4867e9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4867ec: je 0x4867f5 */
  if (zf) goto L_4867f5;
L_4867ee: /* 4867ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4867ef: call 0x461c65 */
  esp -= 4; W32(esp, 0x4867f4u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_4867f4: /* 4867f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4867f5: /* 4867f5: mov eax, esi */
  eax = esi;
/* 4867f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4867f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4867f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4867fc(void) {
  LOAD_REGS();
L_4867fc: /* 4867fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4867fd: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 486801: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486804: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486805: je 0x48682c */
  if (zf) goto L_48682c;
L_486807: /* 486807: push 0x484f46 */
  { uint32_t v = 0x484f46u; esp -= 4; W32(esp, v); }
/* 48680c: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 48680f: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 486811: add ecx, -0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 486814: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* 486819: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48681a: call 0x48be30 */
  esp -= 4; W32(esp, 0x48681fu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 48681f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486822: je 0x486842 */
  if (zf) goto L_486842;
L_486824: /* 486824: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486825: call 0x48bdcd */
  esp -= 4; W32(esp, 0x48682au); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 48682a: jmp 0x486841 */
  goto L_486841;
L_48682c: /* 48682c: lea esi, [ecx - 0x64] */
  esi = (uint32_t)(ecx + 0xffffff9cu);
/* 48682f: mov ecx, esi */
  ecx = esi;
/* 486831: call 0x484f46 */
  esp -= 4; W32(esp, 0x486836u); SPILL(); f_484f46(); if (g_unwind) return; RELOAD();
/* 486836: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486839: je 0x486842 */
  if (zf) goto L_486842;
L_48683b: /* 48683b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48683c: call 0x461c65 */
  esp -= 4; W32(esp, 0x486841u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_486841: /* 486841: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486842: /* 486842: mov eax, esi */
  eax = esi;
/* 486844: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486845: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486846: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486849(void) {
  LOAD_REGS();
L_486849: /* 486849: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48684a: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 48684e: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486852: je 0x486879 */
  if (zf) goto L_486879;
L_486854: /* 486854: push 0x484f59 */
  { uint32_t v = 0x484f59u; esp -= 4; W32(esp, v); }
/* 486859: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 48685c: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 48685e: add ecx, -0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 486861: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* 486866: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486867: call 0x48be30 */
  esp -= 4; W32(esp, 0x48686cu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 48686c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48686f: je 0x48688f */
  if (zf) goto L_48688f;
L_486871: /* 486871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486872: call 0x48bdcd */
  esp -= 4; W32(esp, 0x486877u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 486877: jmp 0x48688e */
  goto L_48688e;
L_486879: /* 486879: lea esi, [ecx - 0x64] */
  esi = (uint32_t)(ecx + 0xffffff9cu);
/* 48687c: mov ecx, esi */
  ecx = esi;
/* 48687e: call 0x484f59 */
  esp -= 4; W32(esp, 0x486883u); SPILL(); f_484f59(); if (g_unwind) return; RELOAD();
/* 486883: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486886: je 0x48688f */
  if (zf) goto L_48688f;
L_486888: /* 486888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486889: call 0x461c65 */
  esp -= 4; W32(esp, 0x48688eu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_48688e: /* 48688e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48688f: /* 48688f: mov eax, esi */
  eax = esi;
/* 486891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486892: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486893: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486896(void) {
  LOAD_REGS();
L_486896: /* 486896: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486897: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 48689b: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48689e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48689f: je 0x4868c6 */
  if (zf) goto L_4868c6;
L_4868a1: /* 4868a1: push 0x484f6c */
  { uint32_t v = 0x484f6cu; esp -= 4; W32(esp, v); }
/* 4868a6: lea esi, [ecx - 0x68] */
  esi = (uint32_t)(ecx + 0xffffff98u);
/* 4868a9: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4868ab: add ecx, -0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4868ae: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* 4868b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4868b4: call 0x48be30 */
  esp -= 4; W32(esp, 0x4868b9u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4868b9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4868bc: je 0x4868dc */
  if (zf) goto L_4868dc;
L_4868be: /* 4868be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4868bf: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4868c4u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4868c4: jmp 0x4868db */
  goto L_4868db;
L_4868c6: /* 4868c6: lea esi, [ecx - 0x64] */
  esi = (uint32_t)(ecx + 0xffffff9cu);
/* 4868c9: mov ecx, esi */
  ecx = esi;
/* 4868cb: call 0x484f6c */
  esp -= 4; W32(esp, 0x4868d0u); SPILL(); f_484f6c(); if (g_unwind) return; RELOAD();
/* 4868d0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4868d3: je 0x4868dc */
  if (zf) goto L_4868dc;
L_4868d5: /* 4868d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4868d6: call 0x461c65 */
  esp -= 4; W32(esp, 0x4868dbu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_4868db: /* 4868db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4868dc: /* 4868dc: mov eax, esi */
  eax = esi;
/* 4868de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4868df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4868e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4868e3(void) {
  LOAD_REGS();
L_4868e3: /* 4868e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4868e4: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4868e8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4868eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4868ec: je 0x486913 */
  if (zf) goto L_486913;
L_4868ee: /* 4868ee: push 0x484f7f */
  { uint32_t v = 0x484f7fu; esp -= 4; W32(esp, v); }
/* 4868f3: lea esi, [ecx - 0x70] */
  esi = (uint32_t)(ecx + 0xffffff90u);
/* 4868f6: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4868f8: add ecx, -0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4868fb: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 486900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486901: call 0x48be30 */
  esp -= 4; W32(esp, 0x486906u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 486906: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486909: je 0x486929 */
  if (zf) goto L_486929;
L_48690b: /* 48690b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48690c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x486911u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 486911: jmp 0x486928 */
  goto L_486928;
L_486913: /* 486913: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 486916: mov ecx, esi */
  ecx = esi;
/* 486918: call 0x484f7f */
  esp -= 4; W32(esp, 0x48691du); SPILL(); f_484f7f(); if (g_unwind) return; RELOAD();
/* 48691d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486920: je 0x486929 */
  if (zf) goto L_486929;
L_486922: /* 486922: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486923: call 0x461c65 */
  esp -= 4; W32(esp, 0x486928u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_486928: /* 486928: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486929: /* 486929: mov eax, esi */
  eax = esi;
/* 48692b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48692c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48692d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486930(void) {
  LOAD_REGS();
L_486930: /* 486930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486931: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 486935: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486939: je 0x486960 */
  if (zf) goto L_486960;
L_48693b: /* 48693b: push 0x484f92 */
  { uint32_t v = 0x484f92u; esp -= 4; W32(esp, v); }
/* 486940: lea esi, [ecx - 0x70] */
  esi = (uint32_t)(ecx + 0xffffff90u);
/* 486943: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 486945: add ecx, -0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 486948: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 48694d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48694e: call 0x48be30 */
  esp -= 4; W32(esp, 0x486953u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 486953: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486956: je 0x486976 */
  if (zf) goto L_486976;
L_486958: /* 486958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486959: call 0x48bdcd */
  esp -= 4; W32(esp, 0x48695eu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 48695e: jmp 0x486975 */
  goto L_486975;
L_486960: /* 486960: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 486963: mov ecx, esi */
  ecx = esi;
/* 486965: call 0x484f92 */
  esp -= 4; W32(esp, 0x48696au); SPILL(); f_484f92(); if (g_unwind) return; RELOAD();
/* 48696a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48696d: je 0x486976 */
  if (zf) goto L_486976;
L_48696f: /* 48696f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486970: call 0x461c65 */
  esp -= 4; W32(esp, 0x486975u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_486975: /* 486975: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486976: /* 486976: mov eax, esi */
  eax = esi;
/* 486978: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486979: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48697a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48697d(void) {
  LOAD_REGS();
L_48697d: /* 48697d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48697e: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 486982: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486985: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486986: je 0x4869ad */
  if (zf) goto L_4869ad;
L_486988: /* 486988: push 0x484fa5 */
  { uint32_t v = 0x484fa5u; esp -= 4; W32(esp, v); }
/* 48698d: lea esi, [ecx - 0x70] */
  esi = (uint32_t)(ecx + 0xffffff90u);
/* 486990: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 486992: add ecx, -0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 486995: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 48699a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48699b: call 0x48be30 */
  esp -= 4; W32(esp, 0x4869a0u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4869a0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4869a3: je 0x4869c3 */
  if (zf) goto L_4869c3;
L_4869a5: /* 4869a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4869a6: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4869abu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4869ab: jmp 0x4869c2 */
  goto L_4869c2;
L_4869ad: /* 4869ad: lea esi, [ecx - 0x6c] */
  esi = (uint32_t)(ecx + 0xffffff94u);
/* 4869b0: mov ecx, esi */
  ecx = esi;
/* 4869b2: call 0x484fa5 */
  esp -= 4; W32(esp, 0x4869b7u); SPILL(); f_484fa5(); if (g_unwind) return; RELOAD();
/* 4869b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4869ba: je 0x4869c3 */
  if (zf) goto L_4869c3;
L_4869bc: /* 4869bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4869bd: call 0x461c65 */
  esp -= 4; W32(esp, 0x4869c2u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_4869c2: /* 4869c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4869c3: /* 4869c3: mov eax, esi */
  eax = esi;
/* 4869c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4869c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4869c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4869ca(void) {
  LOAD_REGS();
L_4869ca: /* 4869ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4869cc: call 0x48646f */
  esp -= 4; W32(esp, 0x4869d1u); SPILL(); f_48646f(); if (g_unwind) return; RELOAD();
/* 4869d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4869d2(void) {
  LOAD_REGS();
L_4869d2: /* 4869d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4869d4: call 0x486551 */
  esp -= 4; W32(esp, 0x4869d9u); SPILL(); f_486551(); if (g_unwind) return; RELOAD();
/* 4869d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4869da(void) {
  LOAD_REGS();
L_4869da: /* 4869da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4869dc: call 0x486633 */
  esp -= 4; W32(esp, 0x4869e1u); SPILL(); f_486633(); if (g_unwind) return; RELOAD();
/* 4869e1: ret  */
  esp += 4; SPILL(); return;
}

void f_4869e2(void) {
  LOAD_REGS();
L_4869e2: /* 4869e2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4869e6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4869ea: not ecx */
  ecx = ~ecx;
/* 4869ec: and dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4869ef: ret  */
  esp += 4; SPILL(); return;
}

void f_4869f0(void) {
  LOAD_REGS();
L_4869f0: /* 4869f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4869f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4869f8: mov edx, eax */
  edx = eax;
/* 4869fa: not edx */
  edx = ~edx;
/* 4869fc: and edx, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4869ff: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 486a04: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 486a06: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 486a09: ret  */
  esp += 4; SPILL(); return;
}

void f_486a0a(void) {
  LOAD_REGS();
L_486a0a: /* 486a0a: cmp dword ptr [esp + 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486a0f: jne 0x486a18 */
  if (!zf) goto L_486a18;
L_486a11: /* 486a11: mov ecx, 0x400 */
  ecx = 0x400u;
/* 486a16: jmp 0x486a36 */
  goto L_486a36;
L_486a18: /* 486a18: cmp dword ptr [esp + 8], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486a1d: jne 0x486a26 */
  if (!zf) goto L_486a26;
L_486a1f: /* 486a1f: mov ecx, 0x200 */
  ecx = 0x200u;
/* 486a24: jmp 0x486a36 */
  goto L_486a36;
L_486a26: /* 486a26: cmp dword ptr [esp + 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486a2b: jne 0x486a34 */
  if (!zf) goto L_486a34;
L_486a2d: /* 486a2d: mov ecx, 0x800 */
  ecx = 0x800u;
/* 486a32: jmp 0x486a36 */
  goto L_486a36;
L_486a34: /* 486a34: xor ecx, ecx */
  ecx = 0;
L_486a36: /* 486a36: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486a3a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 486a3d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 486a3f: and edx, 0xe00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 486a45: xor dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 486a48: ret  */
  esp += 4; SPILL(); return;
}

void f_486a49(void) {
  LOAD_REGS();
L_486a49: /* 486a49: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 486a4d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 486a51: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 486a54: ret  */
  esp += 4; SPILL(); return;
}

void f_486a55(void) {
  LOAD_REGS();
L_486a55: /* 486a55: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 486a59: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 486a5d: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 486a60: ret  */
  esp += 4; SPILL(); return;
}

void f_486a61(void) {
  LOAD_REGS();
L_486a61: /* 486a61: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486a65: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486a69: mov dword ptr [eax], 0x4869e2 */
  W32((uint32_t)(eax), 0x4869e2u);
/* 486a6f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 486a72: ret  */
  esp += 4; SPILL(); return;
}

void f_486a73(void) {
  LOAD_REGS();
L_486a73: /* 486a73: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486a77: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486a7b: mov dword ptr [eax], 0x4869f0 */
  W32((uint32_t)(eax), 0x4869f0u);
/* 486a81: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 486a84: ret  */
  esp += 4; SPILL(); return;
}

void f_486a85(void) {
  LOAD_REGS();
L_486a85: /* 486a85: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486a89: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486a8d: mov dword ptr [eax], 0x486a0a */
  W32((uint32_t)(eax), 0x486a0au);
/* 486a93: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 486a96: ret  */
  esp += 4; SPILL(); return;
}

void f_486a97(void) {
  LOAD_REGS();
L_486a97: /* 486a97: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486a9b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486a9f: mov dword ptr [eax], 0x486a49 */
  W32((uint32_t)(eax), 0x486a49u);
/* 486aa5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 486aa8: ret  */
  esp += 4; SPILL(); return;
}

void f_486aa9(void) {
  LOAD_REGS();
L_486aa9: /* 486aa9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 486aad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486ab1: mov dword ptr [eax], 0x486a55 */
  W32((uint32_t)(eax), 0x486a55u);
/* 486ab7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 486aba: ret  */
  esp += 4; SPILL(); return;
}

void f_486abb(void) {
  LOAD_REGS();
L_486abb: /* 486abb: cmp dword ptr [0x4d0580], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0580u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 486ac2: mov eax, ecx */
  eax = ecx;
/* 486ac4: jl 0x486acd */
  if ((sf != of)) goto L_486acd;
L_486ac6: /* 486ac6: inc dword ptr [0x4d0580] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0580u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d0580u), r);
  }
/* 486acc: ret  */
  esp += 4; SPILL(); return;
L_486acd: /* 486acd: mov dword ptr [0x4d0580], 1 */
  W32((uint32_t)(0x4d0580u), 0x1u);
/* 486ad7: ret  */
  esp += 4; SPILL(); return;
}

void f_486ad8(void) {
  LOAD_REGS();
L_486ad8: /* 486ad8: dec dword ptr [0x4d0580] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0580u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(0x4d0580u), r);
  }
/* 486ade: jne 0x486b0c */
  if (!zf) goto L_486b0c;
L_486ae0: /* 486ae0: mov ecx, dword ptr [0x4d08e0] */
  ecx = R32((uint32_t)(0x4d08e0u));
/* 486ae6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486ae8: je 0x486aef */
  if (zf) goto L_486aef;
L_486aea: /* 486aea: call 0x461419 */
  esp -= 4; W32(esp, 0x486aefu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_486aef: /* 486aef: mov ecx, dword ptr [0x4d08e4] */
  ecx = R32((uint32_t)(0x4d08e4u));
/* 486af5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486af7: je 0x486afe */
  if (zf) goto L_486afe;
L_486af9: /* 486af9: call 0x461419 */
  esp -= 4; W32(esp, 0x486afeu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_486afe: /* 486afe: mov ecx, dword ptr [0x4d08dc] */
  ecx = R32((uint32_t)(0x4d08dcu));
/* 486b04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486b06: jne 0x461419 */
  if (!zf) { SPILL(); f_461419(); return; }
L_486b0c: /* 486b0c: ret  */
  esp += 4; SPILL(); return;
}

void f_486b0d(void) {
  LOAD_REGS();
L_486b0d: /* 486b0d: mov eax, 0x48da87 */
  eax = 0x48da87u;
/* 486b12: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486b17u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486b18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486b19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486b1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486b1b: mov esi, ecx */
  esi = ecx;
/* 486b1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486b1f: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 486b22: call 0x4612ba */
  esp -= 4; W32(esp, 0x486b27u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 486b27: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 486b2a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486b2e: cmp dword ptr [esi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 486b31: ja 0x486b75 */
  if ((!cf && !zf)) goto L_486b75;
L_486b33: /* 486b33: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 486b36: cmp edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 486b39: jae 0x486b3e */
  if (!cf) goto L_486b3e;
L_486b3b: /* 486b3b: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 486b3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_486b3e: /* 486b3e: mov eax, edi */
  eax = edi;
/* 486b40: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 486b43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486b44: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 486b47: call dword ptr [0x48e1ac] */
  esp -= 4; W32(esp, 0x486b4du); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* 486b4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486b4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486b50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486b51: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 486b54: jne 0x486b5b */
  if (!zf) goto L_486b5b;
L_486b56: /* 486b56: call 0x4875f2 */
  esp -= 4; W32(esp, 0x486b5bu); SPILL(); f_4875f2(); if (g_unwind) return; RELOAD();
L_486b5b: /* 486b5b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 486b5e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 486b61: jmp 0x486b70 */
  goto L_486b70;
L_486b63: /* 486b63: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 486b66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 486b69: and dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + eax*4), r);
  }
/* 486b6d: inc dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_486b70: /* 486b70: cmp dword ptr [esi + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 486b73: jb 0x486b63 */
  if (cf) goto L_486b63;
L_486b75: /* 486b75: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 486b78: call 0x461292 */
  esp -= 4; W32(esp, 0x486b7du); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 486b7d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 486b80: mov edi, ebx */
  edi = ebx;
/* 486b82: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 486b85: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 486b88: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486b8a: je 0x486b9d */
  if (zf) goto L_486b9d;
L_486b8c: /* 486b8c: call 0x46139d */
  esp -= 4; W32(esp, 0x486b91u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 486b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486b93: je 0x486b9d */
  if (zf) goto L_486b9d;
L_486b95: /* 486b95: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 486b97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 486b99: mov ecx, eax */
  ecx = eax;
/* 486b9b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x486b9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_486b9d: /* 486b9d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 486ba0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 486ba3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486ba7: mov dword ptr [edi + eax], ecx */
  W32((uint32_t)(edi + eax), ecx);
/* 486baa: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 486bad: call 0x4613d8 */
  esp -= 4; W32(esp, 0x486bb2u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 486bb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486bb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486bb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486bb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486bbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486bc0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_486bc3(void) {
  LOAD_REGS();
L_486bc3: /* 486bc3: mov eax, 0x48dab4 */
  eax = 0x48dab4u;
/* 486bc8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486bcdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486bcd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486bd0: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 486bd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486bd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486bd6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 486bd9: call 0x461279 */
  esp -= 4; W32(esp, 0x486bdeu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
/* 486bde: xor ebx, ebx */
  ebx = 0;
/* 486be0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 486be1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486be3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 486be6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 486be9: call 0x4612ba */
  esp -= 4; W32(esp, 0x486beeu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 486bee: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 486bf2: call 0x488d66 */
  esp -= 4; W32(esp, 0x486bf7u); SPILL(); f_488d66(); if (g_unwind) return; RELOAD();
/* 486bf7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 486bfa: cmp eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486bfc: je 0x486c78 */
  if (zf) goto L_486c78;
L_486bfe: /* 486bfe: mov ecx, eax */
  ecx = eax;
/* 486c00: call 0x46139d */
  esp -= 4; W32(esp, 0x486c05u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 486c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486c07: je 0x486c10 */
  if (zf) goto L_486c10;
L_486c09: /* 486c09: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 486c0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486c0c: mov ecx, eax */
  ecx = eax;
/* 486c0e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x486c10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_486c10: /* 486c10: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 486c12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486c13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486c14: call 0x462646 */
  esp -= 4; W32(esp, 0x486c19u); SPILL(); f_462646(); if (g_unwind) return; RELOAD();
/* 486c19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486c1a: mov ecx, esi */
  ecx = esi;
/* 486c1c: call 0x461292 */
  esp -= 4; W32(esp, 0x486c21u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 486c21: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 486c24: and edi, 0x3f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 486c27: cmp edi, 0x3f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486c2a: jne 0x486c47 */
  if (!zf) goto L_486c47;
L_486c2c: /* 486c2c: cmp dword ptr [esi + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 486c30: jb 0x486c37 */
  if (cf) goto L_486c37;
L_486c32: /* 486c32: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 486c35: jmp 0x486c3a */
  goto L_486c3a;
L_486c37: /* 486c37: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_486c3a: /* 486c3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486c3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486c3d: call dword ptr [0x48e0d8] */
  esp -= 4; W32(esp, 0x486c43u); SPILL(); f_405e8c(); if (g_unwind) return; /* MSVCR70!setlocale */ RELOAD();
/* 486c43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486c44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486c45: jmp 0x486c77 */
  goto L_486c77;
L_486c47: /* 486c47: xor ebx, ebx */
  ebx = 0;
L_486c49: /* 486c49: xor eax, eax */
  eax = 0;
  cf = 0;
/* 486c4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  eax = r;
  }
/* 486c4c: mov ecx, ebx */
  ecx = ebx;
/* 486c4e: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 486c50: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 486c52: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486c54: je 0x486c6e */
  if (zf) goto L_486c6e;
L_486c56: /* 486c56: cmp dword ptr [esi + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 486c5a: jb 0x486c61 */
  if (cf) goto L_486c61;
L_486c5c: /* 486c5c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 486c5f: jmp 0x486c64 */
  goto L_486c64;
L_486c61: /* 486c61: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
L_486c64: /* 486c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486c65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486c66: call dword ptr [0x48e0d8] */
  esp -= 4; W32(esp, 0x486c6cu); SPILL(); f_405e8c(); if (g_unwind) return; /* MSVCR70!setlocale */ RELOAD();
/* 486c6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486c6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486c6e: /* 486c6e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 486c6f: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 486c72: jle 0x486c49 */
  if ((zf || sf != of)) goto L_486c49;
L_486c74: /* 486c74: xor ebx, ebx */
  ebx = 0;
/* 486c76: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_486c77: /* 486c77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_486c78: /* 486c78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 486c7b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 486c7e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 486c80: call 0x461292 */
  esp -= 4; W32(esp, 0x486c85u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 486c85: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 486c88: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 486c8b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 486c8f: call 0x4613d8 */
  esp -= 4; W32(esp, 0x486c94u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 486c94: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 486c97: call 0x461389 */
  esp -= 4; W32(esp, 0x486c9cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 486c9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486c9f: mov eax, esi */
  eax = esi;
/* 486ca1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486ca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486ca3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486caa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486cab: ret  */
  esp += 4; SPILL(); return;
}

void f_486cac(void) {
  LOAD_REGS();
L_486cac: /* 486cac: mov eax, 0x48db9f */
  eax = 0x48db9fu;
/* 486cb1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486cb6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486cb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486cb8: mov esi, ecx */
  esi = ecx;
/* 486cba: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 486cbd: call dword ptr [0x48e0e0] */
  esp -= 4; W32(esp, 0x486cc3u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* 486cc3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486cc6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486cca: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 486ccd: mov dword ptr [esi], 0x4c8f10 */
  W32((uint32_t)(esi), 0x4c8f10u);
/* 486cd3: call 0x4675a8 */
  esp -= 4; W32(esp, 0x486cd8u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 486cd8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486cdb: mov eax, esi */
  eax = esi;
/* 486cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486cde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486ce5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486ce6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486ce9(void) {
  LOAD_REGS();
L_486ce9: /* 486ce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486cea: mov esi, ecx */
  esi = ecx;
/* 486cec: call 0x486d05 */
  esp -= 4; W32(esp, 0x486cf1u); SPILL(); f_486d05(); if (g_unwind) return; RELOAD();
/* 486cf1: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 486cf6: je 0x486cff */
  if (zf) goto L_486cff;
L_486cf8: /* 486cf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486cf9: call 0x461c65 */
  esp -= 4; W32(esp, 0x486cfeu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 486cfe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486cff: /* 486cff: mov eax, esi */
  eax = esi;
/* 486d01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486d02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_486d05(void) {
  LOAD_REGS();
L_486d05: /* 486d05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486d06: mov esi, ecx */
  esi = ecx;
/* 486d08: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 486d0a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 486d0d: mov dword ptr [esi], 0x4c8f10 */
  W32((uint32_t)(esi), 0x4c8f10u);
/* 486d13: call 0x461ea8 */
  esp -= 4; W32(esp, 0x486d18u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 486d18: mov ecx, esi */
  ecx = esi;
/* 486d1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486d1b: jmp dword ptr [0x48e0dc] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_486d21(void) {
  LOAD_REGS();
L_486d21: /* 486d21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 486d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486d23: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 486d27: cmp byte ptr [esi], 0x2a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 486d2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486d2b: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 486d2f: jne 0x486d37 */
  if (!zf) goto L_486d37;
L_486d31: /* 486d31: cmp byte ptr [esi + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 486d35: je 0x486d83 */
  if (zf) goto L_486d83;
L_486d37: /* 486d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486d38: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 486d3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 486d3d: xor ebp, ebp */
  ebp = 0;
/* 486d3f: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486d41: jne 0x486d46 */
  if (!zf) goto L_486d46;
L_486d43: /* 486d43: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 486d44: jmp 0x486d4c */
  goto L_486d4c;
L_486d46: /* 486d46: cmp ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486d49: jne 0x486d55 */
  if (!zf) goto L_486d55;
L_486d4b: /* 486d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_486d4c: /* 486d4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 486d4d: call dword ptr [0x48e0d8] */
  esp -= 4; W32(esp, 0x486d53u); SPILL(); f_405e8c(); if (g_unwind) return; /* MSVCR70!setlocale */ RELOAD();
/* 486d53: jmp 0x486d79 */
  goto L_486d79;
L_486d55: /* 486d55: mov edi, dword ptr [0x48e0d8] */
  edi = R32((uint32_t)(0x48e0d8u));
L_486d5b: /* 486d5b: xor eax, eax */
  eax = 0;
  cf = 0;
/* 486d5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  eax = r;
  }
/* 486d5e: mov ecx, ebp */
  ecx = ebp;
/* 486d60: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 486d62: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 486d64: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486d66: je 0x486d6e */
  if (zf) goto L_486d6e;
L_486d68: /* 486d68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486d69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 486d6a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x486d6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 486d6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486d6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_486d6e: /* 486d6e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 486d6f: cmp ebp, 5 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 486d72: jle 0x486d5b */
  if ((zf || sf != of)) goto L_486d5b;
L_486d74: /* 486d74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486d75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486d77: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x486d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_486d79: /* 486d79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486d7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486d7b: mov esi, eax */
  esi = eax;
/* 486d7d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486d7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 486d80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486d81: jne 0x486d91 */
  if (!zf) goto L_486d91;
L_486d83: /* 486d83: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 486d87: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 486d8c: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 486d8f: jmp 0x486dab */
  goto L_486dab;
L_486d91: /* 486d91: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 486d95: add edi, 0x58 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 486d98: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 486d9d: mov ecx, edi */
  ecx = edi;
/* 486d9f: call 0x465c09 */
  esp -= 4; W32(esp, 0x486da4u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 486da4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 486da6: je 0x486db0 */
  if (zf) goto L_486db0;
L_486da8: /* 486da8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486da9: mov ecx, edi */
  ecx = edi;
L_486dab: /* 486dab: call 0x46174a */
  esp -= 4; W32(esp, 0x486db0u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
L_486db0: /* 486db0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 486db4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486db5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486db6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486db7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_486dba(void) {
  LOAD_REGS();
L_486dba: /* 486dba: mov eax, 0x48dad0 */
  eax = 0x48dad0u;
/* 486dbf: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486dc4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486dc4: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486dc7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 486dca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486dcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486dcc: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 486dcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486dd0: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 486dd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 486dd5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 486dd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486dd9: je 0x486e27 */
  if (zf) goto L_486e27;
L_486ddb: /* 486ddb: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486dde: jne 0x486e0b */
  if (!zf) goto L_486e0b;
L_486de0: /* 486de0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 486de2: call 0x4620da */
  esp -= 4; W32(esp, 0x486de7u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486de7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486de9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486dea: je 0x486dfb */
  if (zf) goto L_486dfb;
L_486dec: /* 486dec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486ded: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486df0: mov ecx, eax */
  ecx = eax;
/* 486df2: call 0x464ec3 */
  esp -= 4; W32(esp, 0x486df7u); SPILL(); f_464ec3(); if (g_unwind) return; RELOAD();
/* 486df7: mov edi, eax */
  edi = eax;
/* 486df9: jmp 0x486dfd */
  goto L_486dfd;
L_486dfb: /* 486dfb: xor edi, edi */
  edi = 0;
L_486dfd: /* 486dfd: mov ecx, 0x4d0924 */
  ecx = 0x4d0924u;
/* 486e02: call 0x464006 */
  esp -= 4; W32(esp, 0x486e07u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486e08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486e09: jmp 0x486e20 */
  goto L_486e20;
L_486e0b: /* 486e0b: mov ecx, 0x4d0924 */
  ecx = 0x4d0924u;
/* 486e10: call 0x464006 */
  esp -= 4; W32(esp, 0x486e15u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486e16: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486e19: call 0x46587a */
  esp -= 4; W32(esp, 0x486e1eu); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 486e1e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_486e20: /* 486e20: mov ecx, esi */
  ecx = esi;
/* 486e22: call 0x486b0d */
  esp -= 4; W32(esp, 0x486e27u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_486e27: /* 486e27: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 486e2a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 486e2d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 486e30: je 0x486e7c */
  if (zf) goto L_486e7c;
L_486e32: /* 486e32: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486e35: jne 0x486e60 */
  if (!zf) goto L_486e60;
L_486e37: /* 486e37: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 486e39: call 0x4620da */
  esp -= 4; W32(esp, 0x486e3eu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486e3e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486e40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486e41: je 0x486e50 */
  if (zf) goto L_486e50;
L_486e43: /* 486e43: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 486e46: mov dword ptr [eax], 0x4c7314 */
  W32((uint32_t)(eax), 0x4c7314u);
/* 486e4c: mov edi, eax */
  edi = eax;
/* 486e4e: jmp 0x486e52 */
  goto L_486e52;
L_486e50: /* 486e50: xor edi, edi */
  edi = 0;
L_486e52: /* 486e52: mov ecx, 0x4d0884 */
  ecx = 0x4d0884u;
/* 486e57: call 0x464006 */
  esp -= 4; W32(esp, 0x486e5cu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486e5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486e5e: jmp 0x486e75 */
  goto L_486e75;
L_486e60: /* 486e60: mov ecx, 0x4d0884 */
  ecx = 0x4d0884u;
/* 486e65: call 0x464006 */
  esp -= 4; W32(esp, 0x486e6au); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486e6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486e6b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486e6e: call 0x46e41b */
  esp -= 4; W32(esp, 0x486e73u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 486e73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_486e75: /* 486e75: mov ecx, esi */
  ecx = esi;
/* 486e77: call 0x486b0d */
  esp -= 4; W32(esp, 0x486e7cu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_486e7c: /* 486e7c: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486e7f: je 0x486f2e */
  if (zf) goto L_486f2e;
L_486e85: /* 486e85: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486e88: jne 0x486eb3 */
  if (!zf) goto L_486eb3;
L_486e8a: /* 486e8a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 486e8c: call 0x4620da */
  esp -= 4; W32(esp, 0x486e91u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486e91: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486e93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486e94: je 0x486ea3 */
  if (zf) goto L_486ea3;
L_486e96: /* 486e96: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 486e99: mov dword ptr [eax], 0x4c7488 */
  W32((uint32_t)(eax), 0x4c7488u);
/* 486e9f: mov edi, eax */
  edi = eax;
/* 486ea1: jmp 0x486ea5 */
  goto L_486ea5;
L_486ea3: /* 486ea3: xor edi, edi */
  edi = 0;
L_486ea5: /* 486ea5: mov ecx, 0x4d08d0 */
  ecx = 0x4d08d0u;
/* 486eaa: call 0x464006 */
  esp -= 4; W32(esp, 0x486eafu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486eb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486eb1: jmp 0x486ec8 */
  goto L_486ec8;
L_486eb3: /* 486eb3: mov ecx, 0x4d08d0 */
  ecx = 0x4d08d0u;
/* 486eb8: call 0x464006 */
  esp -= 4; W32(esp, 0x486ebdu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486ebe: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486ec1: call 0x46e235 */
  esp -= 4; W32(esp, 0x486ec6u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 486ec6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486ec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_486ec8: /* 486ec8: mov ecx, esi */
  ecx = esi;
/* 486eca: call 0x486b0d */
  esp -= 4; W32(esp, 0x486ecfu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 486ecf: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486ed2: je 0x486f2e */
  if (zf) goto L_486f2e;
L_486ed4: /* 486ed4: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486ed7: jne 0x486f12 */
  if (!zf) goto L_486f12;
L_486ed9: /* 486ed9: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 486edb: call 0x4620da */
  esp -= 4; W32(esp, 0x486ee0u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486ee0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486ee1: mov ecx, eax */
  ecx = eax;
/* 486ee3: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 486ee6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486ee8: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 486eef: je 0x486efe */
  if (zf) goto L_486efe;
L_486ef1: /* 486ef1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486ef2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486ef5: call 0x473b3f */
  esp -= 4; W32(esp, 0x486efau); SPILL(); f_473b3f(); if (g_unwind) return; RELOAD();
/* 486efa: mov edi, eax */
  edi = eax;
/* 486efc: jmp 0x486f00 */
  goto L_486f00;
L_486efe: /* 486efe: xor edi, edi */
  edi = 0;
L_486f00: /* 486f00: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 486f04: mov ecx, 0x4d08c0 */
  ecx = 0x4d08c0u;
/* 486f09: call 0x464006 */
  esp -= 4; W32(esp, 0x486f0eu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486f0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486f0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486f10: jmp 0x486f27 */
  goto L_486f27;
L_486f12: /* 486f12: mov ecx, 0x4d08c0 */
  ecx = 0x4d08c0u;
/* 486f17: call 0x464006 */
  esp -= 4; W32(esp, 0x486f1cu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486f1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486f1d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486f20: call 0x4797fd */
  esp -= 4; W32(esp, 0x486f25u); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 486f25: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486f26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_486f27: /* 486f27: mov ecx, esi */
  ecx = esi;
/* 486f29: call 0x486b0d */
  esp -= 4; W32(esp, 0x486f2eu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_486f2e: /* 486f2e: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486f31: je 0x486f7f */
  if (zf) goto L_486f7f;
L_486f33: /* 486f33: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486f36: jne 0x486f63 */
  if (!zf) goto L_486f63;
L_486f38: /* 486f38: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 486f3a: call 0x4620da */
  esp -= 4; W32(esp, 0x486f3fu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 486f3f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 486f41: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486f42: je 0x486f53 */
  if (zf) goto L_486f53;
L_486f44: /* 486f44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486f45: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 486f48: mov ecx, eax */
  ecx = eax;
/* 486f4a: call 0x46b07a */
  esp -= 4; W32(esp, 0x486f4fu); SPILL(); f_46b07a(); if (g_unwind) return; RELOAD();
/* 486f4f: mov edi, eax */
  edi = eax;
/* 486f51: jmp 0x486f55 */
  goto L_486f55;
L_486f53: /* 486f53: xor edi, edi */
  edi = 0;
L_486f55: /* 486f55: mov ecx, 0x4d0674 */
  ecx = 0x4d0674u;
/* 486f5a: call 0x464006 */
  esp -= 4; W32(esp, 0x486f5fu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486f5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486f61: jmp 0x486f78 */
  goto L_486f78;
L_486f63: /* 486f63: mov ecx, 0x4d0674 */
  ecx = 0x4d0674u;
/* 486f68: call 0x464006 */
  esp -= 4; W32(esp, 0x486f6du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 486f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486f6e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486f71: call 0x4679a9 */
  esp -= 4; W32(esp, 0x486f76u); SPILL(); f_4679a9(); if (g_unwind) return; RELOAD();
/* 486f76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 486f77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_486f78: /* 486f78: mov ecx, esi */
  ecx = esi;
/* 486f7a: call 0x486b0d */
  esp -= 4; W32(esp, 0x486f7fu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_486f7f: /* 486f7f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486f82: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 486f85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486f86: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 486f89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486f8a: call 0x48b5a7 */
  esp -= 4; W32(esp, 0x486f8fu); SPILL(); f_48b5a7(); if (g_unwind) return; RELOAD();
/* 486f8f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486f92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486f93: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 486f96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486f97: call 0x489bf3 */
  esp -= 4; W32(esp, 0x486f9cu); SPILL(); f_489bf3(); if (g_unwind) return; RELOAD();
/* 486f9c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 486f9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486fa0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 486fa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486fa4: call 0x48a083 */
  esp -= 4; W32(esp, 0x486fa9u); SPILL(); f_48a083(); if (g_unwind) return; RELOAD();
/* 486fa9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 486fac: or dword ptr [esi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x10u), r);
  }
/* 486faf: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 486fb2: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 486fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486fb6: mov ecx, edi */
  ecx = edi;
/* 486fb8: call 0x4678cc */
  esp -= 4; W32(esp, 0x486fbdu); SPILL(); f_4678cc(); if (g_unwind) return; RELOAD();
/* 486fbd: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 486fbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 486fc1: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 486fc4: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 486fcb: call 0x467320 */
  esp -= 4; W32(esp, 0x486fd0u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 486fd0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 486fd2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 486fd5: call 0x461ea8 */
  esp -= 4; W32(esp, 0x486fdau); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 486fda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 486fdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 486fde: mov eax, esi */
  eax = esi;
/* 486fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 486fe1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 486fe2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 486fe9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 486fea: ret  */
  esp += 4; SPILL(); return;
}

void f_486feb(void) {
  LOAD_REGS();
L_486feb: /* 486feb: mov eax, 0x48db00 */
  eax = 0x48db00u;
/* 486ff0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x486ff5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 486ff5: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 486ff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 486ff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 486ffa: mov esi, ecx */
  esi = ecx;
/* 486ffc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 486ffd: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 487000: mov dword ptr [esi + 4], 1 */
  W32((uint32_t)(esi + 0x4u), 0x1u);
/* 487007: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 48700a: xor ebx, ebx */
  ebx = 0;
/* 48700c: mov dword ptr [esi], 0x4c8bc8 */
  W32((uint32_t)(esi), 0x4c8bc8u);
/* 487012: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 487015: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 487018: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 48701b: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 48701e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 487021: mov al, byte ptr [edi + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x14u))) & 0xffu);
/* 487024: mov byte ptr [esi + 0x14], al */
  W8((uint32_t)(esi + 0x14u), (eax & 0xffu));
/* 487027: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 48702a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48702b: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 48702e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 487031: call 0x4675a8 */
  esp -= 4; W32(esp, 0x487036u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 487036: cmp edi, dword ptr [0x4d0e38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x4d0e38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48703c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 487040: jne 0x487074 */
  if (!zf) goto L_487074;
L_487042: /* 487042: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 487047: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48704d: call 0x488f1b */
  esp -= 4; W32(esp, 0x487052u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 487052: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487053: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487054: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 487056: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487057: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48705b: call 0x486dba */
  esp -= 4; W32(esp, 0x487060u); SPILL(); f_486dba(); if (g_unwind) return; RELOAD();
/* 487060: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 487063: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 487069: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48706d: call 0x488e1d */
  esp -= 4; W32(esp, 0x487072u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 487072: jmp 0x4870ca */
  goto L_4870ca;
L_487074: /* 487074: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487075: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 487078: call 0x4612ba */
  esp -= 4; W32(esp, 0x48707du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48707d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 487080: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 487082: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 487086: jbe 0x4870be */
  if ((cf | zf)) goto L_4870be;
L_487088: /* 487088: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 48708b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48708c: call dword ptr [0x48e0e4] */
  esp -= 4; W32(esp, 0x487092u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 487092: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487094: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487095: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 487098: jne 0x48709f */
  if (!zf) goto L_48709f;
L_48709a: /* 48709a: call 0x4875f2 */
  esp -= 4; W32(esp, 0x48709fu); SPILL(); f_4875f2(); if (g_unwind) return; RELOAD();
L_48709f: /* 48709f: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 4870a2: jmp 0x4870ba */
  goto L_4870ba;
L_4870a4: /* 4870a4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 4870a7: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 4870a8: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 4870ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4870ad: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4870b0: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 4870b3: je 0x4870ba */
  if (zf) goto L_4870ba;
L_4870b5: /* 4870b5: call 0x461292 */
  esp -= 4; W32(esp, 0x4870bau); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
L_4870ba: /* 4870ba: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4870bc: ja 0x4870a4 */
  if ((!cf && !zf)) goto L_4870a4;
L_4870be: /* 4870be: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4870c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4870c5: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4870cau); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
L_4870ca: /* 4870ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4870cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4870ce: mov eax, esi */
  eax = esi;
/* 4870d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4870d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4870d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4870d9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4870da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4870dd(void) {
  LOAD_REGS();
L_4870dd: /* 4870dd: mov eax, 0x48db3e */
  eax = 0x48db3eu;
/* 4870e2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4870e7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4870e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4870e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4870e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4870ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4870eb: mov esi, ecx */
  esi = ecx;
/* 4870ed: xor edi, edi */
  edi = 0;
/* 4870ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4870f0: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4870f3: call 0x4612ba */
  esp -= 4; W32(esp, 0x4870f8u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4870f8: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 4870fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4870fc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4870ff: call 0x461ea8 */
  esp -= 4; W32(esp, 0x487104u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 487104: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 487107: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487108: call 0x461ea8 */
  esp -= 4; W32(esp, 0x48710du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 48710d: lea ebx, [esi + 0x3c] */
  ebx = (uint32_t)(esi + 0x3cu);
/* 487110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487111: mov ecx, ebx */
  ecx = ebx;
/* 487113: call 0x461ea8 */
  esp -= 4; W32(esp, 0x487118u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 487118: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 48711b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48711c: call 0x461ea8 */
  esp -= 4; W32(esp, 0x487121u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 487121: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487123: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 487127: call dword ptr [0x48e0d8] */
  esp -= 4; W32(esp, 0x48712du); SPILL(); f_405e8c(); if (g_unwind) return; /* MSVCR70!setlocale */ RELOAD();
/* 48712d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48712e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48712f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487130: mov ecx, ebx */
  ecx = ebx;
/* 487132: call 0x46174a */
  esp -= 4; W32(esp, 0x487137u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 487137: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48713a: mov ecx, esi */
  ecx = esi;
/* 48713c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48713f: call 0x486d21 */
  esp -= 4; W32(esp, 0x487144u); SPILL(); f_486d21(); if (g_unwind) return; RELOAD();
/* 487144: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487147: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487148: mov eax, esi */
  eax = esi;
/* 48714a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48714b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48714c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487153: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487154: ret 8 */
  esp += 12; SPILL(); return;
}

void f_487157(void) {
  LOAD_REGS();
L_487157: /* 487157: mov eax, 0x48db5d */
  eax = 0x48db5du;
/* 48715c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487161u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487161: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 487167: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48716c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48716f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487171: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487172: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 487175: mov esi, ecx */
  esi = ecx;
/* 487177: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 487179: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 48717c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 48717f: call 0x4620da */
  esp -= 4; W32(esp, 0x487184u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 487184: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487185: mov ecx, eax */
  ecx = eax;
/* 487187: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 48718a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48718e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487190: je 0x48719e */
  if (zf) goto L_48719e;
L_487192: /* 487192: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487195: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 487197: call 0x486feb */
  esp -= 4; W32(esp, 0x48719cu); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 48719c: jmp 0x4871a0 */
  goto L_4871a0;
L_48719e: /* 48719e: xor eax, eax */
  eax = 0;
L_4871a0: /* 4871a0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4871a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4871a5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4871a7: cmp dword ptr [eax + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4871ab: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4871b2: jb 0x4871b9 */
  if (cf) goto L_4871b9;
L_4871b4: /* 4871b4: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 4871b7: jmp 0x4871bc */
  goto L_4871bc;
L_4871b9: /* 4871b9: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
L_4871bc: /* 4871bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4871bd: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 4871c0: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 4871c6: call 0x4870dd */
  esp -= 4; W32(esp, 0x4871cbu); SPILL(); f_4870dd(); if (g_unwind) return; RELOAD();
/* 4871cb: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4871ce: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4871d0: cmp dword ptr [eax + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4871d4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4871d8: jb 0x4871df */
  if (cf) goto L_4871df;
L_4871da: /* 4871da: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 4871dd: jmp 0x4871e2 */
  goto L_4871e2;
L_4871df: /* 4871df: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
L_4871e2: /* 4871e2: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 4871e5: and eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4871e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4871e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4871ea: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 4871f0: call 0x486d21 */
  esp -= 4; W32(esp, 0x4871f5u); SPILL(); f_486d21(); if (g_unwind) return; RELOAD();
/* 4871f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4871f6: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4871f8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4871fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4871fc: call 0x486dba */
  esp -= 4; W32(esp, 0x487201u); SPILL(); f_486dba(); if (g_unwind) return; RELOAD();
/* 487201: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 487204: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 48720a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48720e: call 0x488e1d */
  esp -= 4; W32(esp, 0x487213u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 487213: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487216: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48721d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 487220: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 487223: mov eax, esi */
  eax = esi;
/* 487225: call 0x46190c */
  esp -= 4; W32(esp, 0x48722au); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48722a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48722b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48722c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48722d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48722e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_487231(void) {
  LOAD_REGS();
L_487231: /* 487231: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 487234: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 487236: call 0x46139d */
  esp -= 4; W32(esp, 0x48723bu); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 48723b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48723d: je 0x487247 */
  if (zf) goto L_487247;
L_48723f: /* 48723f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 487241: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 487243: mov ecx, eax */
  ecx = eax;
/* 487245: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x487247u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_487247: /* 487247: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487249: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48724b: call 0x48bed8 */
  esp -= 4; W32(esp, 0x487250u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_487250(); return;
}

void f_487250(void) {
  LOAD_REGS();
L_487250: /* 487250: mov eax, 0x48db8c */
  eax = 0x48db8cu;
/* 487255: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48725au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48725a: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 487260: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 487265: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 487268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487269: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48726a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48726b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 48726e: mov edi, ecx */
  edi = ecx;
/* 487270: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 487272: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 487275: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 487278: call 0x4620da */
  esp -= 4; W32(esp, 0x48727du); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48727d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48727e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 487281: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487287: je 0x487294 */
  if (zf) goto L_487294;
L_487289: /* 487289: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48728b: mov ecx, eax */
  ecx = eax;
/* 48728d: call 0x4616df */
  esp -= 4; W32(esp, 0x487292u); SPILL(); f_4616df(); if (g_unwind) return; RELOAD();
/* 487292: jmp 0x487296 */
  goto L_487296;
L_487294: /* 487294: xor eax, eax */
  eax = 0;
L_487296: /* 487296: xor esi, esi */
  esi = 0;
/* 487298: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 487299: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 48729b: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 48729e: call 0x461689 */
  esp -= 4; W32(esp, 0x4872a3u); SPILL(); f_461689(); if (g_unwind) return; RELOAD();
/* 4872a3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4872a6: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 4872ac: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4872af: call 0x4870dd */
  esp -= 4; W32(esp, 0x4872b4u); SPILL(); f_4870dd(); if (g_unwind) return; RELOAD();
/* 4872b4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4872b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4872b8: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 4872be: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4872c2: call 0x4678cc */
  esp -= 4; W32(esp, 0x4872c7u); SPILL(); f_4678cc(); if (g_unwind) return; RELOAD();
/* 4872c7: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 4872cc: mov ecx, eax */
  ecx = eax;
/* 4872ce: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 4872d2: call 0x465c09 */
  esp -= 4; W32(esp, 0x4872d7u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 4872d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4872d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4872da: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4872dd: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4872e0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4872e4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4872e9u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4872e9: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4872eb: je 0x487315 */
  if (zf) goto L_487315;
L_4872ed: /* 4872ed: push 0x4c8f18 */
  { uint32_t v = 0x4c8f18u; esp -= 4; W32(esp, v); }
/* 4872f2: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4872f5: call 0x46172f */
  esp -= 4; W32(esp, 0x4872fau); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 4872fa: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4872fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4872fe: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 487301: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 487305: call 0x486cac */
  esp -= 4; W32(esp, 0x48730au); SPILL(); f_486cac(); if (g_unwind) return; RELOAD();
/* 48730a: push 0x4ce014 */
  { uint32_t v = 0x4ce014u; esp -= 4; W32(esp, v); }
/* 48730f: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 487312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487313: jmp 0x487372 */
  goto L_487372;
L_487315: /* 487315: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487317: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 487319: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 48731f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 487322: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487323: call 0x486dba */
  esp -= 4; W32(esp, 0x487328u); SPILL(); f_486dba(); if (g_unwind) return; RELOAD();
/* 487328: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48732b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 487331: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 487335: call 0x488e1d */
  esp -= 4; W32(esp, 0x48733au); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 48733a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48733d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487344: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 487347: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48734a: mov eax, edi */
  eax = edi;
/* 48734c: call 0x46190c */
  esp -= 4; W32(esp, 0x487351u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 487351: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487353: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 487354: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487355: ret 8 */
  esp += 12; SPILL(); return;
L_487372: /* 487372: call 0x48bed8 */
  esp -= 4; W32(esp, 0x487377u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_487377(); return;
}

void f_487358(void) {
  LOAD_REGS();
L_487358: /* 487358: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 48735b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 48735d: call 0x46139d */
  esp -= 4; W32(esp, 0x487362u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 487362: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487364: je 0x48736e */
  if (zf) goto L_48736e;
L_487366: /* 487366: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 487368: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48736a: mov ecx, eax */
  ecx = eax;
/* 48736c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x48736eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_48736e: /* 48736e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487370: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487372: call 0x48bed8 */
  esp -= 4; W32(esp, 0x487377u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_487377(); return;
}

void f_487377(void) {
  LOAD_REGS();
L_487377: /* 487377: mov eax, 0x48db9f */
  eax = 0x48db9fu;
/* 48737c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487381u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487384: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 487387: mov esi, ecx */
  esi = ecx;
/* 487389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48738a: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 48738d: call dword ptr [0x48e174] */
  esp -= 4; W32(esp, 0x487393u); SPILL(); f_41a9dc(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */ RELOAD();
/* 487393: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487397: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 48739a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48739b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 48739e: mov dword ptr [esi], 0x4c8f10 */
  W32((uint32_t)(esi), 0x4c8f10u);
/* 4873a4: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4873a9u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4873a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4873ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4873ad: mov eax, esi */
  eax = esi;
/* 4873af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4873b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4873b7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4873b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4873bb(void) {
  LOAD_REGS();
L_4873bb: /* 4873bb: mov eax, 0x48dbd6 */
  eax = 0x48dbd6u;
/* 4873c0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4873c5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4873c5: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4873cb: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4873d0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4873d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4873d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4873d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4873d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4873d9: mov esi, ecx */
  esi = ecx;
/* 4873db: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 4873dd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4873e0: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4873e3: call 0x4620da */
  esp -= 4; W32(esp, 0x4873e8u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4873e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4873e9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4873ec: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4873f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4873f2: je 0x487402 */
  if (zf) goto L_487402;
L_4873f4: /* 4873f4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4873f7: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 4873f9: mov ecx, eax */
  ecx = eax;
/* 4873fb: call 0x486feb */
  esp -= 4; W32(esp, 0x487400u); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 487400: jmp 0x487404 */
  goto L_487404;
L_487402: /* 487402: xor eax, eax */
  eax = 0;
L_487404: /* 487404: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 487406: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487409: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 48740b: xor edi, edi */
  edi = 0;
/* 48740d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48740e: cmp dword ptr [eax + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487412: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 487415: jb 0x48741c */
  if (cf) goto L_48741c;
L_487417: /* 487417: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 48741a: jmp 0x48741f */
  goto L_48741f;
L_48741c: /* 48741c: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
L_48741f: /* 48741f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487420: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 487423: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 487429: call 0x4870dd */
  esp -= 4; W32(esp, 0x48742eu); SPILL(); f_4870dd(); if (g_unwind) return; RELOAD();
/* 48742e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 487431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487432: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 487438: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48743c: call 0x4678cc */
  esp -= 4; W32(esp, 0x487441u); SPILL(); f_4678cc(); if (g_unwind) return; RELOAD();
/* 487441: mov esi, 0x48e1bc */
  esi = 0x48e1bcu;
/* 487446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487447: mov ecx, eax */
  ecx = eax;
/* 487449: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 48744d: call 0x465c09 */
  esp -= 4; W32(esp, 0x487452u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 487452: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487454: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487455: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 487458: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 48745b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48745f: call 0x461ea8 */
  esp -= 4; W32(esp, 0x487464u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 487464: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 487467: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 48746d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 487470: call 0x486d21 */
  esp -= 4; W32(esp, 0x487475u); SPILL(); f_486d21(); if (g_unwind) return; RELOAD();
/* 487475: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487477: je 0x4874d8 */
  if (zf) goto L_4874d8;
L_487479: /* 487479: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 48747c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48747d: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 487483: call 0x4678cc */
  esp -= 4; W32(esp, 0x487488u); SPILL(); f_4678cc(); if (g_unwind) return; RELOAD();
/* 487488: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487489: mov ecx, eax */
  ecx = eax;
/* 48748b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48748f: call 0x465c09 */
  esp -= 4; W32(esp, 0x487494u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 487494: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487497: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 48749a: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 48749d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4874a1: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4874a6u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4874a6: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4874a8: je 0x4874d8 */
  if (zf) goto L_4874d8;
L_4874aa: /* 4874aa: push 0x4c8f18 */
  { uint32_t v = 0x4c8f18u; esp -= 4; W32(esp, v); }
/* 4874af: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 4874b2: call 0x46172f */
  esp -= 4; W32(esp, 0x4874b7u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 4874b7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4874ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4874bb: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 4874c1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 4874c5: call 0x486cac */
  esp -= 4; W32(esp, 0x4874cau); SPILL(); f_486cac(); if (g_unwind) return; RELOAD();
/* 4874ca: push 0x4ce014 */
  { uint32_t v = 0x4ce014u; esp -= 4; W32(esp, v); }
/* 4874cf: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 4874d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4874d6: jmp 0x487538 */
  goto L_487538;
L_4874d8: /* 4874d8: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4874db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4874dd: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4874df: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 4874e5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4874e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4874e9: call 0x486dba */
  esp -= 4; W32(esp, 0x4874eeu); SPILL(); f_486dba(); if (g_unwind) return; RELOAD();
/* 4874ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4874f1: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 4874f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4874fb: call 0x488e1d */
  esp -= 4; W32(esp, 0x487500u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 487500: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487503: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48750a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48750d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 487510: mov eax, esi */
  eax = esi;
/* 487512: call 0x46190c */
  esp -= 4; W32(esp, 0x487517u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 487517: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487518: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487519: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48751a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48751b: ret 0xc */
  esp += 16; SPILL(); return;
L_487538: /* 487538: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48753du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_48753d(); return;
}

void f_48751e(void) {
  LOAD_REGS();
L_48751e: /* 48751e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 487521: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 487523: call 0x46139d */
  esp -= 4; W32(esp, 0x487528u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 487528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48752a: je 0x487534 */
  if (zf) goto L_487534;
L_48752c: /* 48752c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 48752e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 487530: mov ecx, eax */
  ecx = eax;
/* 487532: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x487534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_487534: /* 487534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487536: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487538: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48753du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_48753d(); return;
}

void f_48753d(void) {
  LOAD_REGS();
L_48753d: /* 48753d: mov eax, 0x48dbea */
  eax = 0x48dbeau;
/* 487542: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487547u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487547: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487549: mov esi, ecx */
  esi = ecx;
/* 48754b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 48754d: cmp dword ptr [ecx + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 487551: jbe 0x48757e */
  if ((cf | zf)) goto L_48757e;
L_487553: /* 487553: call 0x46139d */
  esp -= 4; W32(esp, 0x487558u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 487558: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 48755a: call 0x4620da */
  esp -= 4; W32(esp, 0x48755fu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48755f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487560: mov ecx, eax */
  ecx = eax;
/* 487562: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 487565: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487569: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48756b: je 0x487576 */
  if (zf) goto L_487576;
L_48756d: /* 48756d: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 48756f: call 0x486feb */
  esp -= 4; W32(esp, 0x487574u); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 487574: jmp 0x487578 */
  goto L_487578;
L_487576: /* 487576: xor eax, eax */
  eax = 0;
L_487578: /* 487578: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48757c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_48757e: /* 48757e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 487581: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 487583: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 487586: call 0x486b0d */
  esp -= 4; W32(esp, 0x48758bu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48758b: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48758f: je 0x4875a0 */
  if (zf) goto L_4875a0;
L_487591: /* 487591: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 487593: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 487598: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48759b: call 0x46174a */
  esp -= 4; W32(esp, 0x4875a0u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
L_4875a0: /* 4875a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4875a3: mov eax, esi */
  eax = esi;
/* 4875a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4875a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4875ad: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4875ae: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4875b1(void) {
  LOAD_REGS();
L_4875b1: /* 4875b1: mov dword ptr [ecx], 0x4c8f2c */
  W32((uint32_t)(ecx), 0x4c8f2cu);
/* 4875b7: jmp dword ptr [0x48e0dc] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_4875bd(void) {
  LOAD_REGS();
L_4875bd: /* 4875bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4875be: mov esi, ecx */
  esi = ecx;
/* 4875c0: call 0x4875b1 */
  esp -= 4; W32(esp, 0x4875c5u); SPILL(); f_4875b1(); if (g_unwind) return; RELOAD();
/* 4875c5: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4875ca: je 0x4875d3 */
  if (zf) goto L_4875d3;
L_4875cc: /* 4875cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4875cd: call 0x461c65 */
  esp -= 4; W32(esp, 0x4875d2u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4875d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4875d3: /* 4875d3: mov eax, esi */
  eax = esi;
/* 4875d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4875d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4875d9(void) {
  LOAD_REGS();
L_4875d9: /* 4875d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4875da: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4875de: mov esi, ecx */
  esi = ecx;
/* 4875e0: call dword ptr [0x48e174] */
  esp -= 4; W32(esp, 0x4875e6u); SPILL(); f_41a9dc(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */ RELOAD();
/* 4875e6: mov dword ptr [esi], 0x4c8f2c */
  W32((uint32_t)(esi), 0x4c8f2cu);
/* 4875ec: mov eax, esi */
  eax = esi;
/* 4875ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4875ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4875f2(void) {
  LOAD_REGS();
L_4875f2: /* 4875f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4875f3: mov ebp, esp */
  ebp = esp;
/* 4875f5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4875f8: test byte ptr [0x4d10f8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4d10f8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4875ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487600: mov esi, 0x4c8f2c */
  esi = 0x4c8f2cu;
/* 487605: jne 0x487635 */
  if (!zf) goto L_487635;
L_487607: /* 487607: or dword ptr [0x4d10f8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d10f8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x4d10f8u), r);
  }
/* 48760e: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 487611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487612: mov ecx, 0x4d10ec */
  ecx = 0x4d10ecu;
/* 487617: mov dword ptr [ebp - 4], 0x4c8f34 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4c8f34u);
/* 48761e: call dword ptr [0x48e0ec] */
  esp -= 4; W32(esp, 0x487624u); SPILL(); f_41a99f(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABQBD@Z */ RELOAD();
/* 487624: push 0x48de3c */
  { uint32_t v = 0x48de3cu; esp -= 4; W32(esp, v); }
/* 487629: mov dword ptr [0x4d10ec], esi */
  W32((uint32_t)(0x4d10ecu), esi);
/* 48762f: call 0x461586 */
  esp -= 4; W32(esp, 0x487634u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 487634: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487635: /* 487635: push 0x4d10ec */
  { uint32_t v = 0x4d10ecu; esp -= 4; W32(esp, v); }
/* 48763a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48763d: call dword ptr [0x48e174] */
  esp -= 4; W32(esp, 0x487643u); SPILL(); f_41a9dc(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */ RELOAD();
/* 487643: push 0x4ce17c */
  { uint32_t v = 0x4ce17cu; esp -= 4; W32(esp, v); }
/* 487648: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 48764b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48764c: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 48764f: call 0x48bed8 */
  esp -= 4; W32(esp, 0x487654u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
/* 487654: call dword ptr [0x4d10fc] */
  { uint32_t t = R32((uint32_t)(0x4d10fcu)); esp -= 4; W32(esp, 0x48765au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48765a: xor eax, eax */
  eax = 0;
/* 48765c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48765d: ret  */
  esp += 4; SPILL(); return;
}

void f_48765e(void) {
  LOAD_REGS();
L_48765e: /* 48765e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48765f: mov ebp, esp */
  ebp = esp;
/* 487661: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487662: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487663: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 487665: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 487668: call 0x4612ba */
  esp -= 4; W32(esp, 0x48766du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48766d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487670: mov esi, dword ptr [0x4d10fc] */
  esi = R32((uint32_t)(0x4d10fcu));
/* 487676: mov dword ptr [0x4d10fc], eax */
  W32((uint32_t)(0x4d10fcu), eax);
/* 48767b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 48767d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 48767f: and eax, 0x487654 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x487654u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 487684: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487685: call 0x48bf20 */
  esp -= 4; W32(esp, 0x48768au); SPILL(); f_48bf20(); if (g_unwind) return; RELOAD();
/* 48768a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48768b: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 48768e: call 0x4613d8 */
  esp -= 4; W32(esp, 0x487693u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 487693: mov eax, esi */
  eax = esi;
/* 487695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487696: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487697: ret  */
  esp += 4; SPILL(); return;
}

void f_487698(void) {
  LOAD_REGS();
L_487698: /* 487698: mov eax, 0x48dbfd */
  eax = 0x48dbfdu;
/* 48769d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4876a2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4876a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4876a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4876a4: mov esi, ecx */
  esi = ecx;
/* 4876a6: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4876a9: call dword ptr [0x48e0e0] */
  esp -= 4; W32(esp, 0x4876afu); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* 4876af: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4876b2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4876b6: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4876b9: mov dword ptr [esi], 0x4c8f48 */
  W32((uint32_t)(esi), 0x4c8f48u);
/* 4876bf: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4876c4u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4876c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4876c7: mov eax, esi */
  eax = esi;
/* 4876c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4876ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4876d1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4876d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4876d5(void) {
  LOAD_REGS();
L_4876d5: /* 4876d5: cmp dword ptr [ecx + 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4876d9: jb 0x4876df */
  if (cf) goto L_4876df;
L_4876db: /* 4876db: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4876de: ret  */
  esp += 4; SPILL(); return;
L_4876df: /* 4876df: lea eax, [ecx + 0x10] */
  eax = (uint32_t)(ecx + 0x10u);
/* 4876e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4876e3(void) {
  LOAD_REGS();
L_4876e3: /* 4876e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4876e4: mov esi, ecx */
  esi = ecx;
/* 4876e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4876e8: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4876eb: mov dword ptr [esi], 0x4c8f48 */
  W32((uint32_t)(esi), 0x4c8f48u);
/* 4876f1: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4876f6u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4876f6: mov ecx, esi */
  ecx = esi;
/* 4876f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4876f9: jmp dword ptr [0x48e0dc] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_4876ff(void) {
  LOAD_REGS();
L_4876ff: /* 4876ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487700: mov esi, ecx */
  esi = ecx;
/* 487702: call 0x4876e3 */
  esp -= 4; W32(esp, 0x487707u); SPILL(); f_4876e3(); if (g_unwind) return; RELOAD();
/* 487707: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48770c: je 0x487715 */
  if (zf) goto L_487715;
L_48770e: /* 48770e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48770f: call 0x461c65 */
  esp -= 4; W32(esp, 0x487714u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 487714: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487715: /* 487715: mov eax, esi */
  eax = esi;
/* 487717: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487718: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48771b(void) {
  LOAD_REGS();
L_48771b: /* 48771b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48771c: mov esi, ecx */
  esi = ecx;
/* 48771e: call 0x487737 */
  esp -= 4; W32(esp, 0x487723u); SPILL(); f_487737(); if (g_unwind) return; RELOAD();
/* 487723: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487728: je 0x487731 */
  if (zf) goto L_487731;
L_48772a: /* 48772a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48772b: call 0x461c65 */
  esp -= 4; W32(esp, 0x487730u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 487730: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487731: /* 487731: mov eax, esi */
  eax = esi;
/* 487733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487734: ret 4 */
  esp += 8; SPILL(); return;
}

void f_487737(void) {
  LOAD_REGS();
L_487737: /* 487737: mov dword ptr [ecx], 0x4c8f54 */
  W32((uint32_t)(ecx), 0x4c8f54u);
/* 48773d: jmp 0x4876e3 */
  SPILL(); f_4876e3(); return;
}

void f_48773f(void) {
  LOAD_REGS();
L_48773f: /* 48773f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487740: mov esi, ecx */
  esi = ecx;
/* 487742: call 0x48775b */
  esp -= 4; W32(esp, 0x487747u); SPILL(); f_48775b(); if (g_unwind) return; RELOAD();
/* 487747: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48774c: je 0x487755 */
  if (zf) goto L_487755;
L_48774e: /* 48774e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48774f: call 0x461c65 */
  esp -= 4; W32(esp, 0x487754u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 487754: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487755: /* 487755: mov eax, esi */
  eax = esi;
/* 487757: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487758: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48775b(void) {
  LOAD_REGS();
L_48775b: /* 48775b: mov dword ptr [ecx], 0x4c8f60 */
  W32((uint32_t)(ecx), 0x4c8f60u);
/* 487761: jmp 0x4876e3 */
  SPILL(); f_4876e3(); return;
}

void f_487763(void) {
  LOAD_REGS();
L_487763: /* 487763: mov eax, 0x48dc0f */
  eax = 0x48dc0fu;
/* 487768: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48776du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48776d: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 487770: push 0x4c8f68 */
  { uint32_t v = 0x4c8f68u; esp -= 4; W32(esp, v); }
/* 487775: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 487778: call 0x46172f */
  esp -= 4; W32(esp, 0x48777du); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 48777d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487781: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 487784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487785: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 487788: call 0x487698 */
  esp -= 4; W32(esp, 0x48778du); SPILL(); f_487698(); if (g_unwind) return; RELOAD();
/* 48778d: push 0x4ce1d4 */
  { uint32_t v = 0x4ce1d4u; esp -= 4; W32(esp, v); }
/* 487792: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 487795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487796: mov dword ptr [ebp - 0x50], 0x4c8f60 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x4c8f60u);
/* 48779d: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4877a2u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_4877a2(); return;
}

void f_4877a2(void) {
  LOAD_REGS();
L_4877a2: /* 4877a2: mov eax, 0x48dbfd */
  eax = 0x48dbfdu;
/* 4877a7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4877acu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4877ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4877ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4877ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4877af: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4877b2: mov esi, ecx */
  esi = ecx;
/* 4877b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4877b5: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4877b8: call dword ptr [0x48e174] */
  esp -= 4; W32(esp, 0x4877beu); SPILL(); f_41a9dc(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */ RELOAD();
/* 4877be: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4877c2: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4877c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4877c6: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4877c9: mov dword ptr [esi], 0x4c8f48 */
  W32((uint32_t)(esi), 0x4c8f48u);
/* 4877cf: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4877d4u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4877d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4877d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4877d8: mov eax, esi */
  eax = esi;
/* 4877da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4877db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4877e2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4877e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4877e6(void) {
  LOAD_REGS();
L_4877e6: /* 4877e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4877e7: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4877eb: mov esi, ecx */
  esi = ecx;
/* 4877ed: call 0x4877a2 */
  esp -= 4; W32(esp, 0x4877f2u); SPILL(); f_4877a2(); if (g_unwind) return; RELOAD();
/* 4877f2: mov dword ptr [esi], 0x4c8f60 */
  W32((uint32_t)(esi), 0x4c8f60u);
/* 4877f8: mov eax, esi */
  eax = esi;
/* 4877fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4877fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4877fe(void) {
  LOAD_REGS();
L_4877fe: /* 4877fe: mov eax, 0x48dc0f */
  eax = 0x48dc0fu;
/* 487803: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487808u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487808: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48780b: push 0x4c8f80 */
  { uint32_t v = 0x4c8f80u; esp -= 4; W32(esp, v); }
/* 487810: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 487813: call 0x46172f */
  esp -= 4; W32(esp, 0x487818u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 487818: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48781c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 48781f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487820: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 487823: call 0x487698 */
  esp -= 4; W32(esp, 0x487828u); SPILL(); f_487698(); if (g_unwind) return; RELOAD();
/* 487828: push 0x4ce234 */
  { uint32_t v = 0x4ce234u; esp -= 4; W32(esp, v); }
/* 48782d: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 487830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487831: mov dword ptr [ebp - 0x50], 0x4c8f54 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x4c8f54u);
/* 487838: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48783du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
/* 48783d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48783e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 487842: mov esi, ecx */
  esi = ecx;
/* 487844: call 0x4877a2 */
  esp -= 4; W32(esp, 0x487849u); SPILL(); f_4877a2(); if (g_unwind) return; RELOAD();
/* 487849: mov dword ptr [esi], 0x4c8f54 */
  W32((uint32_t)(esi), 0x4c8f54u);
/* 48784f: mov eax, esi */
  eax = esi;
/* 487851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487852: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48783d(void) {
  LOAD_REGS();
L_48783d: /* 48783d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48783e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 487842: mov esi, ecx */
  esi = ecx;
/* 487844: call 0x4877a2 */
  esp -= 4; W32(esp, 0x487849u); SPILL(); f_4877a2(); if (g_unwind) return; RELOAD();
/* 487849: mov dword ptr [esi], 0x4c8f54 */
  W32((uint32_t)(esi), 0x4c8f54u);
/* 48784f: mov eax, esi */
  eax = esi;
/* 487851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487852: ret 4 */
  esp += 8; SPILL(); return;
}

void f_487855(void) {
  LOAD_REGS();
L_487855: /* 487855: cmp byte ptr [esp + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48785a: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 48785d: je 0x487883 */
  if (zf) goto L_487883;
L_48785f: /* 48785f: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487861: jne 0x48789c */
  if (!zf) goto L_48789c;
L_487863: /* 487863: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 487866: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 487869: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
/* 48786c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 48786e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48786f: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 487872: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487874: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* 487877: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 48787a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 48787c: sub eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48787e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48787f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 487881: jmp 0x48789c */
  goto L_48789c;
L_487883: /* 487883: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487885: je 0x48789c */
  if (zf) goto L_48789c;
L_487887: /* 487887: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48788a: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
/* 48788d: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 487890: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 487892: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 487895: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 487898: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48789a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_48789c: /* 48789c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48789f(void) {
  LOAD_REGS();
L_48789f: /* 48789f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4878a0: mov ebp, esp */
  ebp = esp;
/* 4878a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4878a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4878a4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4878a7: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4878aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4878ab: mov esi, ecx */
  esi = ecx;
/* 4878ad: jne 0x4878b6 */
  if (!zf) goto L_4878b6;
L_4878af: /* 4878af: xor eax, eax */
  eax = 0;
/* 4878b1: jmp 0x487a39 */
  goto L_487a39;
L_4878b6: /* 4878b6: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4878b9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4878bb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4878bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4878be: je 0x4878e3 */
  if (zf) goto L_4878e3;
L_4878c0: /* 4878c0: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4878c3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4878c5: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 4878c8: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4878ca: jae 0x4878e3 */
  if (!cf) goto L_4878e3;
L_4878cc: /* 4878cc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4878cd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4878cf: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 4878d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4878d4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 4878d7: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4878d9: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 4878db: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 4878de: jmp 0x487a38 */
  goto L_487a38;
L_4878e3: /* 4878e3: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 4878e6: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4878e8: je 0x487a35 */
  if (zf) goto L_487a35;
L_4878ee: /* 4878ee: test al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4878f0: jne 0x487a35 */
  if (!zf) goto L_487a35;
L_4878f6: /* 4878f6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4878f9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4878fc: jne 0x487902 */
  if (!zf) goto L_487902;
L_4878fe: /* 4878fe: xor ebx, ebx */
  ebx = 0;
/* 487900: jmp 0x48790e */
  goto L_48790e;
L_487902: /* 487902: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 487905: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 487908: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 48790a: sub ebx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 48790c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_48790e: /* 48790e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 487911: mov eax, ebx */
  eax = ebx;
/* 487913: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 487914: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487916: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 487918: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48791a: jge 0x48791e */
  if ((sf == of)) goto L_48791e;
L_48791c: /* 48791c: mov eax, ecx */
  eax = ecx;
L_48791e: /* 48791e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487920: mov dword ptr [esi + 0x3c], 0x20 */
  W32((uint32_t)(esi + 0x3cu), 0x20u);
/* 487927: jle 0x487a35 */
  if ((zf || sf != of)) goto L_487a35;
L_48792d: /* 48792d: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
/* 487932: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 487934: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487936: jge 0x487941 */
  if ((sf == of)) goto L_487941;
L_487938: /* 487938: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 487939: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48793b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 48793d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48793f: jg 0x48792d */
  if ((!zf && sf == of)) goto L_48792d;
L_487941: /* 487941: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487943: jle 0x487a35 */
  if ((zf || sf != of)) goto L_487a35;
L_487949: /* 487949: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 48794c: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 48794f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487951: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 487954: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487955: je 0x48795b */
  if (zf) goto L_48795b;
L_487957: /* 487957: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x487959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 487959: jmp 0x487960 */
  goto L_487960;
L_48795b: /* 48795b: call 0x4620da */
  esp -= 4; W32(esp, 0x487960u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
L_487960: /* 487960: mov edi, eax */
  edi = eax;
/* 487962: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487964: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487965: je 0x487a35 */
  if (zf) goto L_487a35;
L_48796b: /* 48796b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48796d: jle 0x48797e */
  if ((zf || sf != of)) goto L_48797e;
L_48796f: /* 48796f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 487972: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487973: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 487975: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487976: call 0x4617bb */
  esp -= 4; W32(esp, 0x48797bu); SPILL(); hle_memcpy(); RELOAD();
/* 48797b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_48797e: /* 48797e: test byte ptr [esi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487982: je 0x48799f */
  if (zf) goto L_48799f;
L_487984: /* 487984: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 487987: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487989: je 0x487994 */
  if (zf) goto L_487994;
L_48798b: /* 48798b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 48798e: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 487990: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x487992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 487992: jmp 0x48799e */
  goto L_48799e;
L_487994: /* 487994: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 487997: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 487999: call 0x48bdcd */
  esp -= 4; W32(esp, 0x48799eu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
L_48799e: /* 48799e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48799f: /* 48799f: or dword ptr [esi + 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 4879a3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4879a5: jne 0x4879cd */
  if (!zf) goto L_4879cd;
L_4879a7: /* 4879a7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4879aa: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4879ad: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 4879b0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4879b2: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4879b5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4879b7: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4879ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4879bc: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4879bf: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4879c1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4879c4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4879c6: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 4879c9: and dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4879cb: jmp 0x487a1c */
  goto L_487a1c;
L_4879cd: /* 4879cd: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4879d0: mov ecx, edi */
  ecx = edi;
/* 4879d2: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4879d4: mov ebx, edi */
  ebx = edi;
/* 4879d6: add dword ptr [esi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x44u), r);
  }
/* 4879d9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4879db: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4879de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4879e0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 4879e3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4879e5: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4879e7: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4879e9: add dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 4879eb: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 4879ee: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4879f0: mov ecx, edi */
  ecx = edi;
/* 4879f2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4879f4: add ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4879f7: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4879fa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4879fc: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4879ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 487a01: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 487a04: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487a06: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 487a09: sub eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487a0b: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 487a0d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 487a10: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487a12: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 487a14: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 487a16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 487a19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 487a1a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_487a1c: /* 487a1c: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 487a1f: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 487a21: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 487a24: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 487a26: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 487a29: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 487a2b: mov cl, byte ptr [ebp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 487a2e: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 487a30: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 487a33: jmp 0x487a38 */
  goto L_487a38;
L_487a35: /* 487a35: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_487a38: /* 487a38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_487a39: /* 487a39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487a3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 487a3b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487a3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_487a3f(void) {
  LOAD_REGS();
L_487a3f: /* 487a3f: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487a42: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487a44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487a46: je 0x487a82 */
  if (zf) goto L_487a82;
L_487a48: /* 487a48: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 487a4b: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 487a4d: jbe 0x487a82 */
  if ((cf | zf)) goto L_487a82;
L_487a4f: /* 487a4f: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 487a53: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487a56: je 0x487a63 */
  if (zf) goto L_487a63;
L_487a58: /* 487a58: cmp dl, byte ptr [eax - 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 487a5b: je 0x487a63 */
  if (zf) goto L_487a63;
L_487a5d: /* 487a5d: test byte ptr [ecx + 0x48], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x48u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487a61: jne 0x487a82 */
  if (!zf) goto L_487a82;
L_487a63: /* 487a63: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 487a66: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 487a68: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487a6b: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 487a6d: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487a70: jne 0x487a76 */
  if (!zf) goto L_487a76;
L_487a72: /* 487a72: xor eax, eax */
  eax = 0;
/* 487a74: jmp 0x487a85 */
  goto L_487a85;
L_487a76: /* 487a76: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487a79: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487a7b: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 487a7d: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 487a80: jmp 0x487a85 */
  goto L_487a85;
L_487a82: /* 487a82: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_487a85: /* 487a85: ret 4 */
  esp += 8; SPILL(); return;
}

void f_487a88(void) {
  LOAD_REGS();
L_487a88: /* 487a88: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 487a8b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 487a8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487a8f: jne 0x487a95 */
  if (!zf) goto L_487a95;
L_487a91: /* 487a91: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 487a94: ret  */
  esp += 4; SPILL(); return;
L_487a95: /* 487a95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487a97: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 487a9a: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 487a9c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 487a9e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487aa0: jae 0x487aa7 */
  if (!cf) goto L_487aa7;
L_487aa2: /* 487aa2: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 487aa5: jmp 0x487ad4 */
  goto L_487ad4;
L_487aa7: /* 487aa7: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 487aaa: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 487aac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487aae: je 0x487ad1 */
  if (zf) goto L_487ad1;
L_487ab0: /* 487ab0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 487ab2: ja 0x487ab9 */
  if ((!cf && !zf)) goto L_487ab9;
L_487ab4: /* 487ab4: cmp dword ptr [ecx + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 487ab7: jbe 0x487ad1 */
  if ((cf | zf)) goto L_487ad1;
L_487ab9: /* 487ab9: cmp dword ptr [ecx + 0x44], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487abc: jae 0x487ac1 */
  if (!cf) goto L_487ac1;
L_487abe: /* 487abe: mov dword ptr [ecx + 0x44], esi */
  W32((uint32_t)(ecx + 0x44u), esi);
L_487ac1: /* 487ac1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 487ac3: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 487ac6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487ac8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 487aca: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487acd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487acf: jmp 0x487aa2 */
  goto L_487aa2;
L_487ad1: /* 487ad1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_487ad4: /* 487ad4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487ad5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487ad6: ret  */
  esp += 4; SPILL(); return;
}

void f_487ad7(void) {
  LOAD_REGS();
L_487ad7: /* 487ad7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 487ad8: mov ebp, esp */
  ebp = esp;
/* 487ada: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 487add: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 487adf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487ae1: je 0x487aeb */
  if (zf) goto L_487aeb;
L_487ae3: /* 487ae3: cmp dword ptr [ecx + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487ae6: jae 0x487aeb */
  if (!cf) goto L_487aeb;
L_487ae8: /* 487ae8: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
L_487aeb: /* 487aeb: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487aef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487af1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487af2: je 0x487b91 */
  if (zf) goto L_487b91;
L_487af8: /* 487af8: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487afb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 487afd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487aff: je 0x487b91 */
  if (zf) goto L_487b91;
L_487b05: /* 487b05: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487b09: mov edx, dword ptr [0x48e2bc] */
  edx = R32((uint32_t)(0x48e2bcu));
/* 487b0f: jne 0x487b20 */
  if (!zf) goto L_487b20;
L_487b11: /* 487b11: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
L_487b14: /* 487b14: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487b17: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487b19: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 487b1c: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 487b1e: jmp 0x487b3f */
  goto L_487b3f;
L_487b20: /* 487b20: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487b24: jne 0x487b30 */
  if (!zf) goto L_487b30;
L_487b26: /* 487b26: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487b2a: jne 0x487b3d */
  if (!zf) goto L_487b3d;
L_487b2c: /* 487b2c: mov ebx, edi */
  ebx = edi;
/* 487b2e: jmp 0x487b14 */
  goto L_487b14;
L_487b30: /* 487b30: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487b34: jne 0x487b3d */
  if (!zf) goto L_487b3d;
L_487b36: /* 487b36: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 487b39: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487b3b: jne 0x487b3f */
  if (!zf) goto L_487b3f;
L_487b3d: /* 487b3d: mov esi, edx */
  esi = edx;
L_487b3f: /* 487b3f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487b41: jl 0x487b8d */
  if ((sf != of)) goto L_487b8d;
L_487b43: /* 487b43: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487b46: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487b48: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
/* 487b4b: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487b4d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487b4f: jg 0x487b8d */
  if ((!zf && sf == of)) goto L_487b8d;
L_487b51: /* 487b51: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 487b54: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487b56: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487b58: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 487b5a: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 487b5d: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 487b5f: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487b63: je 0x487bfd */
  if (zf) goto L_487bfd;
L_487b69: /* 487b69: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 487b6c: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 487b6e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487b70: je 0x487bfd */
  if (zf) goto L_487bfd;
L_487b76: /* 487b76: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487b79: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 487b7b: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 487b7e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487b80: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487b82: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 487b84: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 487b87: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487b89: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 487b8b: jmp 0x487bfd */
  goto L_487bfd;
L_487b8d: /* 487b8d: mov esi, edx */
  esi = edx;
/* 487b8f: jmp 0x487bfd */
  goto L_487bfd;
L_487b91: /* 487b91: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487b95: je 0x487bf7 */
  if (zf) goto L_487bf7;
L_487b97: /* 487b97: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 487b99: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487b9b: je 0x487bf7 */
  if (zf) goto L_487bf7;
L_487b9d: /* 487b9d: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487ba1: mov edi, dword ptr [0x48e2bc] */
  edi = R32((uint32_t)(0x48e2bcu));
/* 487ba7: jne 0x487bb8 */
  if (!zf) goto L_487bb8;
L_487ba9: /* 487ba9: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
L_487bac: /* 487bac: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487baf: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487bb1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 487bb4: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 487bb6: jmp 0x487bd1 */
  goto L_487bd1;
L_487bb8: /* 487bb8: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487bbc: jne 0x487bc2 */
  if (!zf) goto L_487bc2;
L_487bbe: /* 487bbe: mov ebx, edx */
  ebx = edx;
/* 487bc0: jmp 0x487bac */
  goto L_487bac;
L_487bc2: /* 487bc2: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487bc6: jne 0x487bcf */
  if (!zf) goto L_487bcf;
L_487bc8: /* 487bc8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 487bcb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487bcd: jne 0x487bd1 */
  if (!zf) goto L_487bd1;
L_487bcf: /* 487bcf: mov esi, edi */
  esi = edi;
L_487bd1: /* 487bd1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487bd3: jl 0x487bf3 */
  if ((sf != of)) goto L_487bf3;
L_487bd5: /* 487bd5: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487bd8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487bda: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
/* 487bdd: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487bdf: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487be1: jg 0x487bf3 */
  if ((!zf && sf == of)) goto L_487bf3;
L_487be3: /* 487be3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487be5: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 487be8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487bea: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 487bec: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 487bef: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 487bf1: jmp 0x487bfd */
  goto L_487bfd;
L_487bf3: /* 487bf3: mov esi, edi */
  esi = edi;
/* 487bf5: jmp 0x487bfd */
  goto L_487bfd;
L_487bf7: /* 487bf7: mov esi, dword ptr [0x48e2bc] */
  esi = R32((uint32_t)(0x48e2bcu));
L_487bfd: /* 487bfd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 487c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487c01: call 0x469803 */
  esp -= 4; W32(esp, 0x487c06u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 487c06: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487c09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487c0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487c0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 487c0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 487c0d: ret 0x10 */
  esp += 20; SPILL(); return;
}
