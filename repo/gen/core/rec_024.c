#include "recomp.h"
#include "rec_mod.h"

void f_563630(void) {
  LOAD_REGS();
L_563630: /* 563630: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563638: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56363d: jne 0x563657 */
  if (!zf) goto L_563657;
L_56363f: /* 56363f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563640: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563645: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56364a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56364c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563656: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563657: /* 563657: cmp dword ptr [0x5f1f1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56365d: je 0x563674 */
  if (zf) goto L_563674;
L_56365f: /* 56365f: mov eax, dword ptr [0x5a6554] */
  eax = R32((uint32_t)(0x5a6554u));
/* 563664: mov dword ptr [0x5f5d90], 0x63 */
  W32((uint32_t)(0x5f5d90u), 0x63u);
/* 56366e: mov dword ptr [0x5f1f1c], eax */
  W32((uint32_t)(0x5f1f1cu), eax);
/* 563673: ret  */
  esp += 4; SPILL(); return;
L_563674: /* 563674: mov ecx, dword ptr [0x5a6554] */
  ecx = R32((uint32_t)(0x5a6554u));
/* 56367a: mov dword ptr [0x5f1f1c], ecx */
  W32((uint32_t)(0x5f1f1cu), ecx);
/* 563680: ret  */
  esp += 4; SPILL(); return;
}

void f_5636b0(void) {
  LOAD_REGS();
L_5636b0: /* 5636b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5636b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5636b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5636bd: jne 0x5636d7 */
  if (!zf) goto L_5636d7;
L_5636bf: /* 5636bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5636c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5636c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5636ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5636cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5636d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5636d7: /* 5636d7: cmp dword ptr [0x5f1f20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5636dd: je 0x5636f4 */
  if (zf) goto L_5636f4;
L_5636df: /* 5636df: mov eax, dword ptr [0x5a6558] */
  eax = R32((uint32_t)(0x5a6558u));
/* 5636e4: mov dword ptr [0x5f5d90], 0x64 */
  W32((uint32_t)(0x5f5d90u), 0x64u);
/* 5636ee: mov dword ptr [0x5f1f20], eax */
  W32((uint32_t)(0x5f1f20u), eax);
/* 5636f3: ret  */
  esp += 4; SPILL(); return;
L_5636f4: /* 5636f4: mov ecx, dword ptr [0x5a6558] */
  ecx = R32((uint32_t)(0x5a6558u));
/* 5636fa: mov dword ptr [0x5f1f20], ecx */
  W32((uint32_t)(0x5f1f20u), ecx);
/* 563700: ret  */
  esp += 4; SPILL(); return;
}

void f_563730(void) {
  LOAD_REGS();
L_563730: /* 563730: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563736: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563738: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56373d: jne 0x563757 */
  if (!zf) goto L_563757;
L_56373f: /* 56373f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563740: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563745: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56374a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56374c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563756: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563757: /* 563757: cmp dword ptr [0x5f1f24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56375d: je 0x563774 */
  if (zf) goto L_563774;
L_56375f: /* 56375f: mov eax, dword ptr [0x5a655c] */
  eax = R32((uint32_t)(0x5a655cu));
/* 563764: mov dword ptr [0x5f5d90], 0x65 */
  W32((uint32_t)(0x5f5d90u), 0x65u);
/* 56376e: mov dword ptr [0x5f1f24], eax */
  W32((uint32_t)(0x5f1f24u), eax);
/* 563773: ret  */
  esp += 4; SPILL(); return;
L_563774: /* 563774: mov ecx, dword ptr [0x5a655c] */
  ecx = R32((uint32_t)(0x5a655cu));
/* 56377a: mov dword ptr [0x5f1f24], ecx */
  W32((uint32_t)(0x5f1f24u), ecx);
/* 563780: ret  */
  esp += 4; SPILL(); return;
}

void f_5637b0(void) {
  LOAD_REGS();
L_5637b0: /* 5637b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5637b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5637b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5637bd: jne 0x5637d7 */
  if (!zf) goto L_5637d7;
L_5637bf: /* 5637bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5637c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5637c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5637ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5637cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5637d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5637d7: /* 5637d7: cmp dword ptr [0x5f1f28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f28u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5637dd: je 0x5637f4 */
  if (zf) goto L_5637f4;
L_5637df: /* 5637df: mov eax, dword ptr [0x5a6560] */
  eax = R32((uint32_t)(0x5a6560u));
/* 5637e4: mov dword ptr [0x5f5d90], 0x66 */
  W32((uint32_t)(0x5f5d90u), 0x66u);
/* 5637ee: mov dword ptr [0x5f1f28], eax */
  W32((uint32_t)(0x5f1f28u), eax);
/* 5637f3: ret  */
  esp += 4; SPILL(); return;
L_5637f4: /* 5637f4: mov ecx, dword ptr [0x5a6560] */
  ecx = R32((uint32_t)(0x5a6560u));
/* 5637fa: mov dword ptr [0x5f1f28], ecx */
  W32((uint32_t)(0x5f1f28u), ecx);
/* 563800: ret  */
  esp += 4; SPILL(); return;
}

void f_563830(void) {
  LOAD_REGS();
L_563830: /* 563830: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563836: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563838: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56383d: jne 0x563857 */
  if (!zf) goto L_563857;
L_56383f: /* 56383f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563840: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563845: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56384a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56384c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563856: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563857: /* 563857: cmp dword ptr [0x5f1f2c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f2cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56385d: je 0x563874 */
  if (zf) goto L_563874;
L_56385f: /* 56385f: mov eax, dword ptr [0x5a6564] */
  eax = R32((uint32_t)(0x5a6564u));
/* 563864: mov dword ptr [0x5f5d90], 0x67 */
  W32((uint32_t)(0x5f5d90u), 0x67u);
/* 56386e: mov dword ptr [0x5f1f2c], eax */
  W32((uint32_t)(0x5f1f2cu), eax);
/* 563873: ret  */
  esp += 4; SPILL(); return;
L_563874: /* 563874: mov ecx, dword ptr [0x5a6564] */
  ecx = R32((uint32_t)(0x5a6564u));
/* 56387a: mov dword ptr [0x5f1f2c], ecx */
  W32((uint32_t)(0x5f1f2cu), ecx);
/* 563880: ret  */
  esp += 4; SPILL(); return;
}

void f_5638b0(void) {
  LOAD_REGS();
L_5638b0: /* 5638b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5638b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5638b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5638bd: jne 0x5638d7 */
  if (!zf) goto L_5638d7;
L_5638bf: /* 5638bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5638c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5638c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5638ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5638cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5638d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5638d7: /* 5638d7: cmp dword ptr [0x5f1f30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f30u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5638dd: je 0x5638f4 */
  if (zf) goto L_5638f4;
L_5638df: /* 5638df: mov eax, dword ptr [0x5a6568] */
  eax = R32((uint32_t)(0x5a6568u));
/* 5638e4: mov dword ptr [0x5f5d90], 0x68 */
  W32((uint32_t)(0x5f5d90u), 0x68u);
/* 5638ee: mov dword ptr [0x5f1f30], eax */
  W32((uint32_t)(0x5f1f30u), eax);
/* 5638f3: ret  */
  esp += 4; SPILL(); return;
L_5638f4: /* 5638f4: mov ecx, dword ptr [0x5a6568] */
  ecx = R32((uint32_t)(0x5a6568u));
/* 5638fa: mov dword ptr [0x5f1f30], ecx */
  W32((uint32_t)(0x5f1f30u), ecx);
/* 563900: ret  */
  esp += 4; SPILL(); return;
}

void f_563930(void) {
  LOAD_REGS();
L_563930: /* 563930: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563936: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563938: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56393d: jne 0x563957 */
  if (!zf) goto L_563957;
L_56393f: /* 56393f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563940: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563945: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56394a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56394c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563956: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563957: /* 563957: cmp dword ptr [0x5f1f34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f34u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56395d: je 0x563974 */
  if (zf) goto L_563974;
L_56395f: /* 56395f: mov eax, dword ptr [0x5a656c] */
  eax = R32((uint32_t)(0x5a656cu));
/* 563964: mov dword ptr [0x5f5d90], 0x69 */
  W32((uint32_t)(0x5f5d90u), 0x69u);
/* 56396e: mov dword ptr [0x5f1f34], eax */
  W32((uint32_t)(0x5f1f34u), eax);
/* 563973: ret  */
  esp += 4; SPILL(); return;
L_563974: /* 563974: mov ecx, dword ptr [0x5a656c] */
  ecx = R32((uint32_t)(0x5a656cu));
/* 56397a: mov dword ptr [0x5f1f34], ecx */
  W32((uint32_t)(0x5f1f34u), ecx);
/* 563980: ret  */
  esp += 4; SPILL(); return;
}

void f_5639b0(void) {
  LOAD_REGS();
L_5639b0: /* 5639b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5639b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5639b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5639bd: jne 0x5639d7 */
  if (!zf) goto L_5639d7;
L_5639bf: /* 5639bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5639c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5639c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5639ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5639cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5639d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5639d7: /* 5639d7: cmp dword ptr [0x5f1f38], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f38u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5639dd: je 0x5639f4 */
  if (zf) goto L_5639f4;
L_5639df: /* 5639df: mov eax, dword ptr [0x5a6570] */
  eax = R32((uint32_t)(0x5a6570u));
/* 5639e4: mov dword ptr [0x5f5d90], 0x6a */
  W32((uint32_t)(0x5f5d90u), 0x6au);
/* 5639ee: mov dword ptr [0x5f1f38], eax */
  W32((uint32_t)(0x5f1f38u), eax);
/* 5639f3: ret  */
  esp += 4; SPILL(); return;
L_5639f4: /* 5639f4: mov ecx, dword ptr [0x5a6570] */
  ecx = R32((uint32_t)(0x5a6570u));
/* 5639fa: mov dword ptr [0x5f1f38], ecx */
  W32((uint32_t)(0x5f1f38u), ecx);
/* 563a00: ret  */
  esp += 4; SPILL(); return;
}

void f_563a30(void) {
  LOAD_REGS();
L_563a30: /* 563a30: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563a36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563a38: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563a3d: jne 0x563a57 */
  if (!zf) goto L_563a57;
L_563a3f: /* 563a3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563a40: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563a45: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563a4a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563a4c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563a56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563a57: /* 563a57: cmp dword ptr [0x5f1f3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563a5d: je 0x563a74 */
  if (zf) goto L_563a74;
L_563a5f: /* 563a5f: mov eax, dword ptr [0x5a6574] */
  eax = R32((uint32_t)(0x5a6574u));
/* 563a64: mov dword ptr [0x5f5d90], 0x6b */
  W32((uint32_t)(0x5f5d90u), 0x6bu);
/* 563a6e: mov dword ptr [0x5f1f3c], eax */
  W32((uint32_t)(0x5f1f3cu), eax);
/* 563a73: ret  */
  esp += 4; SPILL(); return;
L_563a74: /* 563a74: mov ecx, dword ptr [0x5a6574] */
  ecx = R32((uint32_t)(0x5a6574u));
/* 563a7a: mov dword ptr [0x5f1f3c], ecx */
  W32((uint32_t)(0x5f1f3cu), ecx);
/* 563a80: ret  */
  esp += 4; SPILL(); return;
}

void f_563ab0(void) {
  LOAD_REGS();
L_563ab0: /* 563ab0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563ab6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563ab8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563abd: jne 0x563ad7 */
  if (!zf) goto L_563ad7;
L_563abf: /* 563abf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563ac0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563ac5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563aca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563acc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563ad6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563ad7: /* 563ad7: cmp dword ptr [0x5f1f40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563add: je 0x563af4 */
  if (zf) goto L_563af4;
L_563adf: /* 563adf: mov eax, dword ptr [0x5a6578] */
  eax = R32((uint32_t)(0x5a6578u));
/* 563ae4: mov dword ptr [0x5f5d90], 0x6c */
  W32((uint32_t)(0x5f5d90u), 0x6cu);
/* 563aee: mov dword ptr [0x5f1f40], eax */
  W32((uint32_t)(0x5f1f40u), eax);
/* 563af3: ret  */
  esp += 4; SPILL(); return;
L_563af4: /* 563af4: mov ecx, dword ptr [0x5a6578] */
  ecx = R32((uint32_t)(0x5a6578u));
/* 563afa: mov dword ptr [0x5f1f40], ecx */
  W32((uint32_t)(0x5f1f40u), ecx);
/* 563b00: ret  */
  esp += 4; SPILL(); return;
}

void f_563b30(void) {
  LOAD_REGS();
L_563b30: /* 563b30: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563b36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563b38: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563b3d: jne 0x563b57 */
  if (!zf) goto L_563b57;
L_563b3f: /* 563b3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563b40: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563b45: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563b4a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563b4c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563b56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563b57: /* 563b57: cmp dword ptr [0x5f1f44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563b5d: je 0x563b74 */
  if (zf) goto L_563b74;
L_563b5f: /* 563b5f: mov eax, dword ptr [0x5a657c] */
  eax = R32((uint32_t)(0x5a657cu));
/* 563b64: mov dword ptr [0x5f5d90], 0x6d */
  W32((uint32_t)(0x5f5d90u), 0x6du);
/* 563b6e: mov dword ptr [0x5f1f44], eax */
  W32((uint32_t)(0x5f1f44u), eax);
/* 563b73: ret  */
  esp += 4; SPILL(); return;
L_563b74: /* 563b74: mov ecx, dword ptr [0x5a657c] */
  ecx = R32((uint32_t)(0x5a657cu));
/* 563b7a: mov dword ptr [0x5f1f44], ecx */
  W32((uint32_t)(0x5f1f44u), ecx);
/* 563b80: ret  */
  esp += 4; SPILL(); return;
}

void f_563bb0(void) {
  LOAD_REGS();
L_563bb0: /* 563bb0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563bb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563bb8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563bbd: jne 0x563bd7 */
  if (!zf) goto L_563bd7;
L_563bbf: /* 563bbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563bc0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563bc5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563bca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563bcc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563bd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563bd7: /* 563bd7: cmp dword ptr [0x5f1f48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f48u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563bdd: je 0x563bf4 */
  if (zf) goto L_563bf4;
L_563bdf: /* 563bdf: mov eax, dword ptr [0x5a6580] */
  eax = R32((uint32_t)(0x5a6580u));
/* 563be4: mov dword ptr [0x5f5d90], 0x6e */
  W32((uint32_t)(0x5f5d90u), 0x6eu);
/* 563bee: mov dword ptr [0x5f1f48], eax */
  W32((uint32_t)(0x5f1f48u), eax);
/* 563bf3: ret  */
  esp += 4; SPILL(); return;
L_563bf4: /* 563bf4: mov ecx, dword ptr [0x5a6580] */
  ecx = R32((uint32_t)(0x5a6580u));
/* 563bfa: mov dword ptr [0x5f1f48], ecx */
  W32((uint32_t)(0x5f1f48u), ecx);
/* 563c00: ret  */
  esp += 4; SPILL(); return;
}

void f_563c30(void) {
  LOAD_REGS();
L_563c30: /* 563c30: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563c36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563c38: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563c3d: jne 0x563c57 */
  if (!zf) goto L_563c57;
L_563c3f: /* 563c3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563c40: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563c45: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563c4a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563c4c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563c56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563c57: /* 563c57: cmp dword ptr [0x5f1f4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563c5d: je 0x563c74 */
  if (zf) goto L_563c74;
L_563c5f: /* 563c5f: mov eax, dword ptr [0x5a6584] */
  eax = R32((uint32_t)(0x5a6584u));
/* 563c64: mov dword ptr [0x5f5d90], 0x6f */
  W32((uint32_t)(0x5f5d90u), 0x6fu);
/* 563c6e: mov dword ptr [0x5f1f4c], eax */
  W32((uint32_t)(0x5f1f4cu), eax);
/* 563c73: ret  */
  esp += 4; SPILL(); return;
L_563c74: /* 563c74: mov ecx, dword ptr [0x5a6584] */
  ecx = R32((uint32_t)(0x5a6584u));
/* 563c7a: mov dword ptr [0x5f1f4c], ecx */
  W32((uint32_t)(0x5f1f4cu), ecx);
/* 563c80: ret  */
  esp += 4; SPILL(); return;
}

void f_563cb0(void) {
  LOAD_REGS();
L_563cb0: /* 563cb0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563cb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563cb8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563cbd: jne 0x563cd7 */
  if (!zf) goto L_563cd7;
L_563cbf: /* 563cbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563cc0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563cc5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563cca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563ccc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563cd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563cd7: /* 563cd7: cmp dword ptr [0x5f1dd4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1dd4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563cdd: je 0x563cf4 */
  if (zf) goto L_563cf4;
L_563cdf: /* 563cdf: mov eax, dword ptr [0x5a65c0] */
  eax = R32((uint32_t)(0x5a65c0u));
/* 563ce4: mov dword ptr [0x5f5d90], 0x11 */
  W32((uint32_t)(0x5f5d90u), 0x11u);
/* 563cee: mov dword ptr [0x5f1dd4], eax */
  W32((uint32_t)(0x5f1dd4u), eax);
/* 563cf3: ret  */
  esp += 4; SPILL(); return;
L_563cf4: /* 563cf4: mov ecx, dword ptr [0x5a65c0] */
  ecx = R32((uint32_t)(0x5a65c0u));
/* 563cfa: mov dword ptr [0x5f1dd4], ecx */
  W32((uint32_t)(0x5f1dd4u), ecx);
/* 563d00: ret  */
  esp += 4; SPILL(); return;
}

void f_563d30(void) {
  LOAD_REGS();
L_563d30: /* 563d30: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563d36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563d38: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563d3d: jne 0x563d57 */
  if (!zf) goto L_563d57;
L_563d3f: /* 563d3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563d40: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563d45: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563d4a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563d4c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563d56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563d57: /* 563d57: cmp dword ptr [0x5f2198], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f2198u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563d5d: je 0x563d74 */
  if (zf) goto L_563d74;
L_563d5f: /* 563d5f: mov eax, dword ptr [0x5a65c4] */
  eax = R32((uint32_t)(0x5a65c4u));
/* 563d64: mov dword ptr [0x5f5d90], 0x102 */
  W32((uint32_t)(0x5f5d90u), 0x102u);
/* 563d6e: mov dword ptr [0x5f2198], eax */
  W32((uint32_t)(0x5f2198u), eax);
/* 563d73: ret  */
  esp += 4; SPILL(); return;
L_563d74: /* 563d74: mov ecx, dword ptr [0x5a65c4] */
  ecx = R32((uint32_t)(0x5a65c4u));
/* 563d7a: mov dword ptr [0x5f2198], ecx */
  W32((uint32_t)(0x5f2198u), ecx);
/* 563d80: ret  */
  esp += 4; SPILL(); return;
}

void f_563db0(void) {
  LOAD_REGS();
L_563db0: /* 563db0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563db6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563db8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563dbd: jne 0x563dd7 */
  if (!zf) goto L_563dd7;
L_563dbf: /* 563dbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563dc0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563dc5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563dca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563dcc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563dd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563dd7: /* 563dd7: cmp dword ptr [0x5f1f54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f54u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563ddd: je 0x563df4 */
  if (zf) goto L_563df4;
L_563ddf: /* 563ddf: mov eax, dword ptr [0x5a6658] */
  eax = R32((uint32_t)(0x5a6658u));
/* 563de4: mov dword ptr [0x5f5d90], 0x71 */
  W32((uint32_t)(0x5f5d90u), 0x71u);
/* 563dee: mov dword ptr [0x5f1f54], eax */
  W32((uint32_t)(0x5f1f54u), eax);
/* 563df3: ret  */
  esp += 4; SPILL(); return;
L_563df4: /* 563df4: mov ecx, dword ptr [0x5a6658] */
  ecx = R32((uint32_t)(0x5a6658u));
/* 563dfa: mov dword ptr [0x5f1f54], ecx */
  W32((uint32_t)(0x5f1f54u), ecx);
/* 563e00: ret  */
  esp += 4; SPILL(); return;
}

void f_563e30(void) {
  LOAD_REGS();
L_563e30: /* 563e30: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563e36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563e38: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563e3d: jne 0x563e57 */
  if (!zf) goto L_563e57;
L_563e3f: /* 563e3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563e40: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563e45: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563e4a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563e4c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563e56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563e57: /* 563e57: cmp dword ptr [0x5f1f64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f64u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563e5d: je 0x563e74 */
  if (zf) goto L_563e74;
L_563e5f: /* 563e5f: mov eax, dword ptr [0x5a66ac] */
  eax = R32((uint32_t)(0x5a66acu));
/* 563e64: mov dword ptr [0x5f5d90], 0x75 */
  W32((uint32_t)(0x5f5d90u), 0x75u);
/* 563e6e: mov dword ptr [0x5f1f64], eax */
  W32((uint32_t)(0x5f1f64u), eax);
/* 563e73: ret  */
  esp += 4; SPILL(); return;
L_563e74: /* 563e74: mov ecx, dword ptr [0x5a66ac] */
  ecx = R32((uint32_t)(0x5a66acu));
/* 563e7a: mov dword ptr [0x5f1f64], ecx */
  W32((uint32_t)(0x5f1f64u), ecx);
/* 563e80: ret  */
  esp += 4; SPILL(); return;
}

void f_563eb0(void) {
  LOAD_REGS();
L_563eb0: /* 563eb0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563eb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563eb8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563ebd: jne 0x563ed7 */
  if (!zf) goto L_563ed7;
L_563ebf: /* 563ebf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563ec0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563ec5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563eca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563ecc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563ed6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563ed7: /* 563ed7: cmp dword ptr [0x5f1f68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1f68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563edd: je 0x563ef4 */
  if (zf) goto L_563ef4;
L_563edf: /* 563edf: mov eax, dword ptr [0x5a66fc] */
  eax = R32((uint32_t)(0x5a66fcu));
/* 563ee4: mov dword ptr [0x5f5d90], 0x76 */
  W32((uint32_t)(0x5f5d90u), 0x76u);
/* 563eee: mov dword ptr [0x5f1f68], eax */
  W32((uint32_t)(0x5f1f68u), eax);
/* 563ef3: ret  */
  esp += 4; SPILL(); return;
L_563ef4: /* 563ef4: mov ecx, dword ptr [0x5a66fc] */
  ecx = R32((uint32_t)(0x5a66fcu));
/* 563efa: mov dword ptr [0x5f1f68], ecx */
  W32((uint32_t)(0x5f1f68u), ecx);
/* 563f00: ret  */
  esp += 4; SPILL(); return;
}

void f_563f30(void) {
  LOAD_REGS();
L_563f30: /* 563f30: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 563f35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563f37: jne 0x563f56 */
  if (!zf) goto L_563f56;
L_563f39: /* 563f39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563f3a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563f3f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563f44: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563f49: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563f4b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563f55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563f56: /* 563f56: ret  */
  esp += 4; SPILL(); return;
}

void f_563f70(void) {
  LOAD_REGS();
L_563f70: /* 563f70: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 563f75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563f77: jne 0x563f96 */
  if (!zf) goto L_563f96;
L_563f79: /* 563f79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563f7a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563f7f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563f84: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563f89: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563f8b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563f95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563f96: /* 563f96: ret  */
  esp += 4; SPILL(); return;
}

void f_563fb0(void) {
  LOAD_REGS();
L_563fb0: /* 563fb0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 563fb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 563fb8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 563fbd: jne 0x563fd7 */
  if (!zf) goto L_563fd7;
L_563fbf: /* 563fbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 563fc0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 563fc5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 563fca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 563fcc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 563fd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_563fd7: /* 563fd7: cmp dword ptr [0x5f25f0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f25f0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 563fdd: je 0x563ff4 */
  if (zf) goto L_563ff4;
L_563fdf: /* 563fdf: mov eax, dword ptr [0x5a6710] */
  eax = R32((uint32_t)(0x5a6710u));
/* 563fe4: mov dword ptr [0x5f5d90], 0x218 */
  W32((uint32_t)(0x5f5d90u), 0x218u);
/* 563fee: mov dword ptr [0x5f25f0], eax */
  W32((uint32_t)(0x5f25f0u), eax);
/* 563ff3: ret  */
  esp += 4; SPILL(); return;
L_563ff4: /* 563ff4: mov ecx, dword ptr [0x5a6710] */
  ecx = R32((uint32_t)(0x5a6710u));
/* 563ffa: mov dword ptr [0x5f25f0], ecx */
  W32((uint32_t)(0x5f25f0u), ecx);
/* 564000: ret  */
  esp += 4; SPILL(); return;
}

void f_564030(void) {
  LOAD_REGS();
L_564030: /* 564030: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 564035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564037: jne 0x564056 */
  if (!zf) goto L_564056;
L_564039: /* 564039: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 56403a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 56403f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 564044: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 564049: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56404b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564055: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564056: /* 564056: ret  */
  esp += 4; SPILL(); return;
}

void f_564070(void) {
  LOAD_REGS();
L_564070: /* 564070: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 564076: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564078: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56407d: jne 0x564097 */
  if (!zf) goto L_564097;
L_56407f: /* 56407f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564080: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 564085: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56408a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56408c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564096: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564097: /* 564097: cmp dword ptr [0x5f260c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f260cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56409d: je 0x5640b4 */
  if (zf) goto L_5640b4;
L_56409f: /* 56409f: mov eax, dword ptr [0x5a6728] */
  eax = R32((uint32_t)(0x5a6728u));
/* 5640a4: mov dword ptr [0x5f5d90], 0x21f */
  W32((uint32_t)(0x5f5d90u), 0x21fu);
/* 5640ae: mov dword ptr [0x5f260c], eax */
  W32((uint32_t)(0x5f260cu), eax);
/* 5640b3: ret  */
  esp += 4; SPILL(); return;
L_5640b4: /* 5640b4: mov ecx, dword ptr [0x5a6728] */
  ecx = R32((uint32_t)(0x5a6728u));
/* 5640ba: mov dword ptr [0x5f260c], ecx */
  W32((uint32_t)(0x5f260cu), ecx);
/* 5640c0: ret  */
  esp += 4; SPILL(); return;
}

void f_5640f0(void) {
  LOAD_REGS();
L_5640f0: /* 5640f0: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 5640f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5640f7: jne 0x564116 */
  if (!zf) goto L_564116;
L_5640f9: /* 5640f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5640fa: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5640ff: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 564104: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 564109: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56410b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564116: /* 564116: ret  */
  esp += 4; SPILL(); return;
}

void f_564130(void) {
  LOAD_REGS();
L_564130: /* 564130: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 564135: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564137: jne 0x564156 */
  if (!zf) goto L_564156;
L_564139: /* 564139: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 56413a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 56413f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 564144: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 564149: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56414b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564155: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564156: /* 564156: ret  */
  esp += 4; SPILL(); return;
}

void f_564170(void) {
  LOAD_REGS();
L_564170: /* 564170: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 564175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564177: jne 0x564196 */
  if (!zf) goto L_564196;
L_564179: /* 564179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 56417a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 56417f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 564184: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 564189: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56418b: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564195: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564196: /* 564196: ret  */
  esp += 4; SPILL(); return;
}

void f_5641b0(void) {
  LOAD_REGS();
L_5641b0: /* 5641b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5641b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5641b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5641bd: jne 0x5641d7 */
  if (!zf) goto L_5641d7;
L_5641bf: /* 5641bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5641c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5641c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5641ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5641cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5641d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5641d7: /* 5641d7: cmp dword ptr [0x5f21f4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f21f4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5641dd: je 0x5641f4 */
  if (zf) goto L_5641f4;
L_5641df: /* 5641df: mov eax, dword ptr [0x5a6740] */
  eax = R32((uint32_t)(0x5a6740u));
/* 5641e4: mov dword ptr [0x5f5d90], 0x119 */
  W32((uint32_t)(0x5f5d90u), 0x119u);
/* 5641ee: mov dword ptr [0x5f21f4], eax */
  W32((uint32_t)(0x5f21f4u), eax);
/* 5641f3: ret  */
  esp += 4; SPILL(); return;
L_5641f4: /* 5641f4: mov ecx, dword ptr [0x5a6740] */
  ecx = R32((uint32_t)(0x5a6740u));
/* 5641fa: mov dword ptr [0x5f21f4], ecx */
  W32((uint32_t)(0x5f21f4u), ecx);
/* 564200: ret  */
  esp += 4; SPILL(); return;
}

void f_564230(void) {
  LOAD_REGS();
L_564230: /* 564230: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 564236: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564238: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56423d: jne 0x564257 */
  if (!zf) goto L_564257;
L_56423f: /* 56423f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564240: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 564245: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56424a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56424c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564256: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564257: /* 564257: cmp dword ptr [0x5f2200], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f2200u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56425d: je 0x564274 */
  if (zf) goto L_564274;
L_56425f: /* 56425f: mov eax, dword ptr [0x5a6744] */
  eax = R32((uint32_t)(0x5a6744u));
/* 564264: mov dword ptr [0x5f5d90], 0x11c */
  W32((uint32_t)(0x5f5d90u), 0x11cu);
/* 56426e: mov dword ptr [0x5f2200], eax */
  W32((uint32_t)(0x5f2200u), eax);
/* 564273: ret  */
  esp += 4; SPILL(); return;
L_564274: /* 564274: mov ecx, dword ptr [0x5a6744] */
  ecx = R32((uint32_t)(0x5a6744u));
/* 56427a: mov dword ptr [0x5f2200], ecx */
  W32((uint32_t)(0x5f2200u), ecx);
/* 564280: ret  */
  esp += 4; SPILL(); return;
}

void f_5642b0(void) {
  LOAD_REGS();
L_5642b0: /* 5642b0: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 5642b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5642b8: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5642bd: jne 0x5642d7 */
  if (!zf) goto L_5642d7;
L_5642bf: /* 5642bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5642c0: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 5642c5: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5642ca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5642cc: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5642d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5642d7: /* 5642d7: cmp dword ptr [0x5f224c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f224cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5642dd: je 0x5642f4 */
  if (zf) goto L_5642f4;
L_5642df: /* 5642df: mov eax, dword ptr [0x5a6748] */
  eax = R32((uint32_t)(0x5a6748u));
/* 5642e4: mov dword ptr [0x5f5d90], 0x12f */
  W32((uint32_t)(0x5f5d90u), 0x12fu);
/* 5642ee: mov dword ptr [0x5f224c], eax */
  W32((uint32_t)(0x5f224cu), eax);
/* 5642f3: ret  */
  esp += 4; SPILL(); return;
L_5642f4: /* 5642f4: mov ecx, dword ptr [0x5a6748] */
  ecx = R32((uint32_t)(0x5a6748u));
/* 5642fa: mov dword ptr [0x5f224c], ecx */
  W32((uint32_t)(0x5f224cu), ecx);
/* 564300: ret  */
  esp += 4; SPILL(); return;
}

void f_564330(void) {
  LOAD_REGS();
L_564330: /* 564330: mov ecx, dword ptr [0x5f6cb4] */
  ecx = R32((uint32_t)(0x5f6cb4u));
/* 564336: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 564338: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 56433d: jne 0x564357 */
  if (!zf) goto L_564357;
L_56433f: /* 56433f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564340: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 564345: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 56434a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 56434c: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 564356: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_564357: /* 564357: cmp dword ptr [0x5f1e4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f1e4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 56435d: je 0x564374 */
  if (zf) goto L_564374;
L_56435f: /* 56435f: mov eax, dword ptr [0x5a674c] */
  eax = R32((uint32_t)(0x5a674cu));
/* 564364: mov dword ptr [0x5f5d90], 0x2f */
  W32((uint32_t)(0x5f5d90u), 0x2fu);
/* 56436e: mov dword ptr [0x5f1e4c], eax */
  W32((uint32_t)(0x5f1e4cu), eax);
/* 564373: ret  */
  esp += 4; SPILL(); return;
L_564374: /* 564374: mov ecx, dword ptr [0x5a674c] */
  ecx = R32((uint32_t)(0x5a674cu));
/* 56437a: mov dword ptr [0x5f1e4c], ecx */
  W32((uint32_t)(0x5f1e4cu), ecx);
/* 564380: ret  */
  esp += 4; SPILL(); return;
}

void f_5643b0(void) {
  LOAD_REGS();
L_5643b0: /* 5643b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5643b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5643b2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5643b7: push 0x4e2a86 */
  { uint32_t v = 0x4e2a86u; esp -= 4; W32(esp, v); }
/* 5643bc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5643c1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5643c6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5643cb: push 0x5a6c0a */
  { uint32_t v = 0x5a6c0au; esp -= 4; W32(esp, v); }
/* 5643d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5643d3: mov edi, esp */
  edi = esp;
/* 5643d5: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5643da: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5643df: xor eax, eax */
  eax = 0;
/* 5643e1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5643e3: xor ecx, ecx */
  ecx = 0;
/* 5643e5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5643e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5643ea: xor edx, edx */
  edx = 0;
/* 5643ec: xor esi, esi */
  esi = 0;
/* 5643ee: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 5643f0: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5643f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5643f4: mov ecx, 0x5f7190 */
  ecx = 0x5f7190u;
/* 5643f9: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5643fc: call 0x4e353f */
  esp -= 4; W32(esp, 0x564401u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564401: push 0x566cb0 */
  { uint32_t v = 0x566cb0u; esp -= 4; W32(esp, v); }
/* 564406: call 0x555049 */
  esp -= 4; W32(esp, 0x56440bu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56440b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 56440e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 56440f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564410: ret  */
  esp += 4; SPILL(); return;
}

void f_564440(void) {
  LOAD_REGS();
L_564440: /* 564440: mov dword ptr [0x5f76bc], 0x5f7190 */
  W32((uint32_t)(0x5f76bcu), 0x5f7190u);
/* 56444a: ret  */
  esp += 4; SPILL(); return;
}

void f_564460(void) {
  LOAD_REGS();
L_564460: /* 564460: push 0x566cd0 */
  { uint32_t v = 0x566cd0u; esp -= 4; W32(esp, v); }
/* 564465: call 0x555049 */
  esp -= 4; W32(esp, 0x56446au); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56446a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 56446b: ret  */
  esp += 4; SPILL(); return;
}

void f_564480(void) {
  LOAD_REGS();
L_564480: /* 564480: mov ecx, 0x69a758 */
  ecx = 0x69a758u;
/* 564485: call 0x4e1a14 */
  esp -= 4; W32(esp, 0x56448au); SPILL(); f_4e1a14(); if (g_unwind) return; RELOAD();
/* 56448a: push 0x566cf0 */
  { uint32_t v = 0x566cf0u; esp -= 4; W32(esp, v); }
/* 56448f: call 0x555049 */
  esp -= 4; W32(esp, 0x564494u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564494: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564495: ret  */
  esp += 4; SPILL(); return;
}

void f_5644b0(void) {
  LOAD_REGS();
L_5644b0: /* 5644b0: mov ecx, 0x69a74c */
  ecx = 0x69a74cu;
/* 5644b5: call 0x4e1eb0 */
  esp -= 4; W32(esp, 0x5644bau); SPILL(); f_4e1eb0(); if (g_unwind) return; RELOAD();
/* 5644ba: push 0x566d10 */
  { uint32_t v = 0x566d10u; esp -= 4; W32(esp, v); }
/* 5644bf: call 0x555049 */
  esp -= 4; W32(esp, 0x5644c4u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5644c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5644c5: ret  */
  esp += 4; SPILL(); return;
}

void f_5644e0(void) {
  LOAD_REGS();
L_5644e0: /* 5644e0: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 5644e5: call 0x4e2fef */
  esp -= 4; W32(esp, 0x5644eau); SPILL(); f_4e2fef(); if (g_unwind) return; RELOAD();
/* 5644ea: push 0x566d30 */
  { uint32_t v = 0x566d30u; esp -= 4; W32(esp, v); }
/* 5644ef: call 0x555049 */
  esp -= 4; W32(esp, 0x5644f4u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5644f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5644f5: ret  */
  esp += 4; SPILL(); return;
}

void f_564510(void) {
  LOAD_REGS();
L_564510: /* 564510: mov ecx, 0x6a0f04 */
  ecx = 0x6a0f04u;
/* 564515: call 0x4e2fef */
  esp -= 4; W32(esp, 0x56451au); SPILL(); f_4e2fef(); if (g_unwind) return; RELOAD();
/* 56451a: push 0x566d50 */
  { uint32_t v = 0x566d50u; esp -= 4; W32(esp, v); }
/* 56451f: call 0x555049 */
  esp -= 4; W32(esp, 0x564524u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564524: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564525: ret  */
  esp += 4; SPILL(); return;
}

void f_564540(void) {
  LOAD_REGS();
L_564540: /* 564540: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 564545: call 0x4e1eb0 */
  esp -= 4; W32(esp, 0x56454au); SPILL(); f_4e1eb0(); if (g_unwind) return; RELOAD();
/* 56454a: push 0x566d70 */
  { uint32_t v = 0x566d70u; esp -= 4; W32(esp, v); }
/* 56454f: call 0x555049 */
  esp -= 4; W32(esp, 0x564554u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564554: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564555: ret  */
  esp += 4; SPILL(); return;
}

void f_564570(void) {
  LOAD_REGS();
L_564570: /* 564570: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 564575: call 0x4e2fef */
  esp -= 4; W32(esp, 0x56457au); SPILL(); f_4e2fef(); if (g_unwind) return; RELOAD();
/* 56457a: push 0x566d90 */
  { uint32_t v = 0x566d90u; esp -= 4; W32(esp, v); }
/* 56457f: call 0x555049 */
  esp -= 4; W32(esp, 0x564584u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564585: ret  */
  esp += 4; SPILL(); return;
}

void f_5645a0(void) {
  LOAD_REGS();
L_5645a0: /* 5645a0: mov ecx, 0x6a2920 */
  ecx = 0x6a2920u;
/* 5645a5: call 0x4e2fef */
  esp -= 4; W32(esp, 0x5645aau); SPILL(); f_4e2fef(); if (g_unwind) return; RELOAD();
/* 5645aa: push 0x566db0 */
  { uint32_t v = 0x566db0u; esp -= 4; W32(esp, v); }
/* 5645af: call 0x555049 */
  esp -= 4; W32(esp, 0x5645b4u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5645b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5645b5: ret  */
  esp += 4; SPILL(); return;
}

void f_5645d0(void) {
  LOAD_REGS();
L_5645d0: /* 5645d0: mov ecx, 0x6a2914 */
  ecx = 0x6a2914u;
/* 5645d5: call 0x4e2fef */
  esp -= 4; W32(esp, 0x5645dau); SPILL(); f_4e2fef(); if (g_unwind) return; RELOAD();
/* 5645da: push 0x566dd0 */
  { uint32_t v = 0x566dd0u; esp -= 4; W32(esp, v); }
/* 5645df: call 0x555049 */
  esp -= 4; W32(esp, 0x5645e4u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5645e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5645e5: ret  */
  esp += 4; SPILL(); return;
}

void f_564600(void) {
  LOAD_REGS();
L_564600: /* 564600: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 564605: call 0x4e11a9 */
  esp -= 4; W32(esp, 0x56460au); SPILL(); f_4e11a9(); if (g_unwind) return; RELOAD();
/* 56460a: push 0x566f30 */
  { uint32_t v = 0x566f30u; esp -= 4; W32(esp, v); }
/* 56460f: call 0x555049 */
  esp -= 4; W32(esp, 0x564614u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564614: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564615: ret  */
  esp += 4; SPILL(); return;
}

void f_564630(void) {
  LOAD_REGS();
L_564630: /* 564630: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 564635: call 0x4e3521 */
  esp -= 4; W32(esp, 0x56463au); SPILL(); f_4e3521(); if (g_unwind) return; RELOAD();
/* 56463a: push 0x566f50 */
  { uint32_t v = 0x566f50u; esp -= 4; W32(esp, v); }
/* 56463f: call 0x555049 */
  esp -= 4; W32(esp, 0x564644u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564644: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 564645: ret  */
  esp += 4; SPILL(); return;
}

void f_564660(void) {
  LOAD_REGS();
L_564660: /* 564660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564662: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564667: push 0x4e1550 */
  { uint32_t v = 0x4e1550u; esp -= 4; W32(esp, v); }
/* 56466c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564671: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564676: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56467b: push 0x5aa816 */
  { uint32_t v = 0x5aa816u; esp -= 4; W32(esp, v); }
/* 564680: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564683: mov edi, esp */
  edi = esp;
/* 564685: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56468a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56468f: xor eax, eax */
  eax = 0;
/* 564691: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564693: xor ecx, ecx */
  ecx = 0;
/* 564695: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564698: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 56469a: xor edx, edx */
  edx = 0;
/* 56469c: xor esi, esi */
  esi = 0;
/* 56469e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 5646a0: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5646a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5646a4: mov ecx, 0x6a0f20 */
  ecx = 0x6a0f20u;
/* 5646a9: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5646ac: call 0x4e353f */
  esp -= 4; W32(esp, 0x5646b1u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5646b1: push 0x566f70 */
  { uint32_t v = 0x566f70u; esp -= 4; W32(esp, v); }
/* 5646b6: call 0x555049 */
  esp -= 4; W32(esp, 0x5646bbu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5646bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5646be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5646bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5646c0: ret  */
  esp += 4; SPILL(); return;
}

void f_5646f0(void) {
  LOAD_REGS();
L_5646f0: /* 5646f0: mov dword ptr [0x69ff5c], 0x6a0f20 */
  W32((uint32_t)(0x69ff5cu), 0x6a0f20u);
/* 5646fa: ret  */
  esp += 4; SPILL(); return;
}

void f_564710(void) {
  LOAD_REGS();
L_564710: /* 564710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564712: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564717: push 0x4e440d */
  { uint32_t v = 0x4e440du; esp -= 4; W32(esp, v); }
/* 56471c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564721: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564726: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56472b: push 0x5ac6ae */
  { uint32_t v = 0x5ac6aeu; esp -= 4; W32(esp, v); }
/* 564730: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564733: mov edi, esp */
  edi = esp;
/* 564735: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56473a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56473f: xor eax, eax */
  eax = 0;
/* 564741: xor esi, esi */
  esi = 0;
/* 564743: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564745: xor ecx, ecx */
  ecx = 0;
/* 564747: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 56474a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 56474b: xor edx, edx */
  edx = 0;
/* 56474d: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 56474f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564752: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564753: mov ecx, 0x6a1eb8 */
  ecx = 0x6a1eb8u;
/* 564758: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56475b: call 0x4e353f */
  esp -= 4; W32(esp, 0x564760u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564760: push 0x566df0 */
  { uint32_t v = 0x566df0u; esp -= 4; W32(esp, v); }
/* 564765: call 0x555049 */
  esp -= 4; W32(esp, 0x56476au); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56476a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 56476d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 56476e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 56476f: ret  */
  esp += 4; SPILL(); return;
}

void f_564790(void) {
  LOAD_REGS();
L_564790: /* 564790: mov dword ptr [0x6a1eb4], 0x6a1eb8 */
  W32((uint32_t)(0x6a1eb4u), 0x6a1eb8u);
/* 56479a: ret  */
  esp += 4; SPILL(); return;
}

void f_5647b0(void) {
  LOAD_REGS();
L_5647b0: /* 5647b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5647b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5647b2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5647b7: push 0x4e3e81 */
  { uint32_t v = 0x4e3e81u; esp -= 4; W32(esp, v); }
/* 5647bc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5647c1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5647c6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5647cb: push 0x5ac6da */
  { uint32_t v = 0x5ac6dau; esp -= 4; W32(esp, v); }
/* 5647d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5647d3: mov edi, esp */
  edi = esp;
/* 5647d5: push 0x5f0848 */
  { uint32_t v = 0x5f0848u; esp -= 4; W32(esp, v); }
/* 5647da: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 5647df: xor eax, eax */
  eax = 0;
/* 5647e1: xor esi, esi */
  esi = 0;
/* 5647e3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5647e5: xor ecx, ecx */
  ecx = 0;
/* 5647e7: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5647ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5647eb: xor edx, edx */
  edx = 0;
/* 5647ed: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 5647ef: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5647f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5647f3: mov ecx, 0x6a23e8 */
  ecx = 0x6a23e8u;
/* 5647f8: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5647fb: call 0x4e353f */
  esp -= 4; W32(esp, 0x564800u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564800: push 0x566e10 */
  { uint32_t v = 0x566e10u; esp -= 4; W32(esp, v); }
/* 564805: call 0x555049 */
  esp -= 4; W32(esp, 0x56480au); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56480a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 56480d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 56480e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 56480f: ret  */
  esp += 4; SPILL(); return;
}

void f_564830(void) {
  LOAD_REGS();
L_564830: /* 564830: mov dword ptr [0x6a197c], 0x6a23e8 */
  W32((uint32_t)(0x6a197cu), 0x6a23e8u);
/* 56483a: ret  */
  esp += 4; SPILL(); return;
}

void f_564850(void) {
  LOAD_REGS();
L_564850: /* 564850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564851: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564852: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564857: push 0x4e3d5a */
  { uint32_t v = 0x4e3d5au; esp -= 4; W32(esp, v); }
/* 56485c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564861: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564866: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56486b: push 0x5ac716 */
  { uint32_t v = 0x5ac716u; esp -= 4; W32(esp, v); }
/* 564870: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564873: mov edi, esp */
  edi = esp;
/* 564875: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56487a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56487f: xor eax, eax */
  eax = 0;
/* 564881: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564883: xor ecx, ecx */
  ecx = 0;
/* 564885: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564888: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 56488a: xor edx, edx */
  edx = 0;
/* 56488c: xor esi, esi */
  esi = 0;
/* 56488e: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 564893: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564897: mov ecx, 0x6a1450 */
  ecx = 0x6a1450u;
/* 56489c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56489f: call 0x4e353f */
  esp -= 4; W32(esp, 0x5648a4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5648a4: push 0x566e30 */
  { uint32_t v = 0x566e30u; esp -= 4; W32(esp, v); }
/* 5648a9: call 0x555049 */
  esp -= 4; W32(esp, 0x5648aeu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5648ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5648b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5648b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5648b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5648e0(void) {
  LOAD_REGS();
L_5648e0: /* 5648e0: mov dword ptr [0x69f4e0], 0x6a1450 */
  W32((uint32_t)(0x69f4e0u), 0x6a1450u);
/* 5648ea: ret  */
  esp += 4; SPILL(); return;
}

void f_564900(void) {
  LOAD_REGS();
L_564900: /* 564900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564902: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564907: push 0x4e254a */
  { uint32_t v = 0x4e254au; esp -= 4; W32(esp, v); }
/* 56490c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564911: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564916: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56491b: push 0x5ac726 */
  { uint32_t v = 0x5ac726u; esp -= 4; W32(esp, v); }
/* 564920: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564923: mov edi, esp */
  edi = esp;
/* 564925: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56492a: push 0x6a1450 */
  { uint32_t v = 0x6a1450u; esp -= 4; W32(esp, v); }
/* 56492f: xor eax, eax */
  eax = 0;
/* 564931: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564933: xor ecx, ecx */
  ecx = 0;
/* 564935: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564938: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 56493a: xor edx, edx */
  edx = 0;
/* 56493c: xor esi, esi */
  esi = 0;
/* 56493e: push 0x50c */
  { uint32_t v = 0x50cu; esp -= 4; W32(esp, v); }
/* 564943: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564947: mov ecx, 0x69fa30 */
  ecx = 0x69fa30u;
/* 56494c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56494f: call 0x4e353f */
  esp -= 4; W32(esp, 0x564954u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564954: push 0x566e50 */
  { uint32_t v = 0x566e50u; esp -= 4; W32(esp, v); }
/* 564959: call 0x555049 */
  esp -= 4; W32(esp, 0x56495eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56495e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564961: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564962: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564963: ret  */
  esp += 4; SPILL(); return;
}

void f_564990(void) {
  LOAD_REGS();
L_564990: /* 564990: mov dword ptr [0x6a1eb0], 0x69fa30 */
  W32((uint32_t)(0x6a1eb0u), 0x69fa30u);
/* 56499a: ret  */
  esp += 4; SPILL(); return;
}

void f_5649b0(void) {
  LOAD_REGS();
L_5649b0: /* 5649b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5649b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5649b2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5649b7: push 0x4e19b5 */
  { uint32_t v = 0x4e19b5u; esp -= 4; W32(esp, v); }
/* 5649bc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5649c1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5649c6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5649cb: push 0x5ac73e */
  { uint32_t v = 0x5ac73eu; esp -= 4; W32(esp, v); }
/* 5649d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5649d3: mov edi, esp */
  edi = esp;
/* 5649d5: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5649da: push 0x6a1450 */
  { uint32_t v = 0x6a1450u; esp -= 4; W32(esp, v); }
/* 5649df: xor eax, eax */
  eax = 0;
/* 5649e1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5649e3: xor ecx, ecx */
  ecx = 0;
/* 5649e5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5649e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5649ea: xor edx, edx */
  edx = 0;
/* 5649ec: xor esi, esi */
  esi = 0;
/* 5649ee: push 0x110 */
  { uint32_t v = 0x110u; esp -= 4; W32(esp, v); }
/* 5649f3: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5649f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5649f7: mov ecx, 0x6a1980 */
  ecx = 0x6a1980u;
/* 5649fc: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5649ff: call 0x4e353f */
  esp -= 4; W32(esp, 0x564a04u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564a04: push 0x566e70 */
  { uint32_t v = 0x566e70u; esp -= 4; W32(esp, v); }
/* 564a09: call 0x555049 */
  esp -= 4; W32(esp, 0x564a0eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564a0e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564a11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564a13: ret  */
  esp += 4; SPILL(); return;
}

void f_564a40(void) {
  LOAD_REGS();
L_564a40: /* 564a40: mov dword ptr [0x6a04a4], 0x6a1980 */
  W32((uint32_t)(0x6a04a4u), 0x6a1980u);
/* 564a4a: ret  */
  esp += 4; SPILL(); return;
}

void f_564a60(void) {
  LOAD_REGS();
L_564a60: /* 564a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564a61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564a62: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564a67: push 0x4e1550 */
  { uint32_t v = 0x4e1550u; esp -= 4; W32(esp, v); }
/* 564a6c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564a71: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564a76: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564a7b: push 0x5ac756 */
  { uint32_t v = 0x5ac756u; esp -= 4; W32(esp, v); }
/* 564a80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564a83: mov edi, esp */
  edi = esp;
/* 564a85: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564a8a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564a8f: xor eax, eax */
  eax = 0;
/* 564a91: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564a93: xor ecx, ecx */
  ecx = 0;
/* 564a95: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564a98: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 564a9a: xor edx, edx */
  edx = 0;
/* 564a9c: xor esi, esi */
  esi = 0;
/* 564a9e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 564aa0: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564aa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564aa4: mov ecx, 0x6a04a8 */
  ecx = 0x6a04a8u;
/* 564aa9: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564aac: call 0x4e353f */
  esp -= 4; W32(esp, 0x564ab1u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564ab1: push 0x566e90 */
  { uint32_t v = 0x566e90u; esp -= 4; W32(esp, v); }
/* 564ab6: call 0x555049 */
  esp -= 4; W32(esp, 0x564abbu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564abb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564abe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564abf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_564af0(void) {
  LOAD_REGS();
L_564af0: /* 564af0: mov dword ptr [0x69fa14], 0x6a04a8 */
  W32((uint32_t)(0x69fa14u), 0x6a04a8u);
/* 564afa: ret  */
  esp += 4; SPILL(); return;
}

void f_564b10(void) {
  LOAD_REGS();
L_564b10: /* 564b10: push 0x5ac774 */
  { uint32_t v = 0x5ac774u; esp -= 4; W32(esp, v); }
/* 564b15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 564b17: call 0x4e298c */
  esp -= 4; W32(esp, 0x564b1cu); SPILL(); f_4e298c(); if (g_unwind) return; RELOAD();
/* 564b1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564b1f: mov byte ptr [0x6a049c], al */
  W8((uint32_t)(0x6a049cu), (eax & 0xffu));
/* 564b24: ret  */
  esp += 4; SPILL(); return;
}

void f_564b40(void) {
  LOAD_REGS();
L_564b40: /* 564b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564b41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564b42: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564b47: push 0x4e2e41 */
  { uint32_t v = 0x4e2e41u; esp -= 4; W32(esp, v); }
/* 564b4c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564b51: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564b56: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564b5b: push 0x5ac77a */
  { uint32_t v = 0x5ac77au; esp -= 4; W32(esp, v); }
/* 564b60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564b63: mov edi, esp */
  edi = esp;
/* 564b65: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564b6a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564b6f: xor eax, eax */
  eax = 0;
/* 564b71: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564b73: xor ecx, ecx */
  ecx = 0;
/* 564b75: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564b78: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 564b7a: xor edx, edx */
  edx = 0;
/* 564b7c: xor esi, esi */
  esi = 0;
/* 564b7e: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 564b83: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564b86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564b87: mov ecx, 0x6a09d8 */
  ecx = 0x6a09d8u;
/* 564b8c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564b8f: call 0x4e353f */
  esp -= 4; W32(esp, 0x564b94u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564b94: push 0x566eb0 */
  { uint32_t v = 0x566eb0u; esp -= 4; W32(esp, v); }
/* 564b99: call 0x555049 */
  esp -= 4; W32(esp, 0x564b9eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564b9e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564ba1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564ba2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564ba3: ret  */
  esp += 4; SPILL(); return;
}

void f_564bd0(void) {
  LOAD_REGS();
L_564bd0: /* 564bd0: mov dword ptr [0x6a1eac], 0x6a09d8 */
  W32((uint32_t)(0x6a1eacu), 0x6a09d8u);
/* 564bda: ret  */
  esp += 4; SPILL(); return;
}

void f_564bf0(void) {
  LOAD_REGS();
L_564bf0: /* 564bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564bf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564bf2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564bf7: push 0x4e1df7 */
  { uint32_t v = 0x4e1df7u; esp -= 4; W32(esp, v); }
/* 564bfc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564c01: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564c06: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564c0b: push 0x5ac86a */
  { uint32_t v = 0x5ac86au; esp -= 4; W32(esp, v); }
/* 564c10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564c13: mov edi, esp */
  edi = esp;
/* 564c15: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564c1a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564c1f: xor eax, eax */
  eax = 0;
/* 564c21: xor esi, esi */
  esi = 0;
/* 564c23: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564c25: xor ecx, ecx */
  ecx = 0;
/* 564c27: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564c2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564c2b: xor edx, edx */
  edx = 0;
/* 564c2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 564c2f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564c32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564c33: mov ecx, 0x69ff70 */
  ecx = 0x69ff70u;
/* 564c38: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564c3b: call 0x4e353f */
  esp -= 4; W32(esp, 0x564c40u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564c40: push 0x566ed0 */
  { uint32_t v = 0x566ed0u; esp -= 4; W32(esp, v); }
/* 564c45: call 0x555049 */
  esp -= 4; W32(esp, 0x564c4au); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564c4a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564c4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564c4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564c4f: ret  */
  esp += 4; SPILL(); return;
}

void f_564c70(void) {
  LOAD_REGS();
L_564c70: /* 564c70: mov dword ptr [0x6a144c], 0x69ff70 */
  W32((uint32_t)(0x6a144cu), 0x69ff70u);
/* 564c7a: ret  */
  esp += 4; SPILL(); return;
}

void f_564c90(void) {
  LOAD_REGS();
L_564c90: /* 564c90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564c91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564c92: push 0x4e4061 */
  { uint32_t v = 0x4e4061u; esp -= 4; W32(esp, v); }
/* 564c97: push 0x4e29f0 */
  { uint32_t v = 0x4e29f0u; esp -= 4; W32(esp, v); }
/* 564c9c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564ca1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564ca6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564cab: push 0x5ac8ae */
  { uint32_t v = 0x5ac8aeu; esp -= 4; W32(esp, v); }
/* 564cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564cb3: mov edi, esp */
  edi = esp;
/* 564cb5: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564cba: push 0x5ee348 */
  { uint32_t v = 0x5ee348u; esp -= 4; W32(esp, v); }
/* 564cbf: xor eax, eax */
  eax = 0;
/* 564cc1: xor esi, esi */
  esi = 0;
/* 564cc3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564cc5: xor ecx, ecx */
  ecx = 0;
/* 564cc7: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564cca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564ccb: xor edx, edx */
  edx = 0;
/* 564ccd: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 564ccf: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564cd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564cd3: mov ecx, 0x6a2930 */
  ecx = 0x6a2930u;
/* 564cd8: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564cdb: call 0x4e353f */
  esp -= 4; W32(esp, 0x564ce0u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564ce0: push 0x566ef0 */
  { uint32_t v = 0x566ef0u; esp -= 4; W32(esp, v); }
/* 564ce5: call 0x555049 */
  esp -= 4; W32(esp, 0x564ceau); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564cea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564cef: ret  */
  esp += 4; SPILL(); return;
}

void f_564d10(void) {
  LOAD_REGS();
L_564d10: /* 564d10: mov dword ptr [0x6a0f10], 0x6a2930 */
  W32((uint32_t)(0x6a0f10u), 0x6a2930u);
/* 564d1a: ret  */
  esp += 4; SPILL(); return;
}

void f_564d30(void) {
  LOAD_REGS();
L_564d30: /* 564d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564d32: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564d37: push 0x4e1550 */
  { uint32_t v = 0x4e1550u; esp -= 4; W32(esp, v); }
/* 564d3c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564d41: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564d46: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564d4b: push 0x5ac956 */
  { uint32_t v = 0x5ac956u; esp -= 4; W32(esp, v); }
/* 564d50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564d53: mov edi, esp */
  edi = esp;
/* 564d55: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564d5a: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 564d5f: xor eax, eax */
  eax = 0;
/* 564d61: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564d63: xor ecx, ecx */
  ecx = 0;
/* 564d65: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564d68: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 564d6a: xor edx, edx */
  edx = 0;
/* 564d6c: xor esi, esi */
  esi = 0;
/* 564d6e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 564d70: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564d73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564d74: mov ecx, 0x69f4e8 */
  ecx = 0x69f4e8u;
/* 564d79: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564d7c: call 0x4e353f */
  esp -= 4; W32(esp, 0x564d81u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564d81: push 0x566f10 */
  { uint32_t v = 0x566f10u; esp -= 4; W32(esp, v); }
/* 564d86: call 0x555049 */
  esp -= 4; W32(esp, 0x564d8bu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564d8b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564d8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564d8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564d90: ret  */
  esp += 4; SPILL(); return;
}

void f_564dc0(void) {
  LOAD_REGS();
L_564dc0: /* 564dc0: mov dword ptr [0x6a04a0], 0x69f4e8 */
  W32((uint32_t)(0x6a04a0u), 0x69f4e8u);
/* 564dca: ret  */
  esp += 4; SPILL(); return;
}

void f_564de0(void) {
  LOAD_REGS();
L_564de0: /* 564de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564de1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564de2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564de7: push 0x4e1550 */
  { uint32_t v = 0x4e1550u; esp -= 4; W32(esp, v); }
/* 564dec: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564df1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564df6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564dfb: push 0x5ad4f6 */
  { uint32_t v = 0x5ad4f6u; esp -= 4; W32(esp, v); }
/* 564e00: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564e03: mov edi, esp */
  edi = esp;
/* 564e05: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 564e0a: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 564e0f: xor eax, eax */
  eax = 0;
/* 564e11: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564e13: xor ecx, ecx */
  ecx = 0;
/* 564e15: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564e18: push 0x8001 */
  { uint32_t v = 0x8001u; esp -= 4; W32(esp, v); }
/* 564e1d: xor edx, edx */
  edx = 0;
/* 564e1f: xor esi, esi */
  esi = 0;
/* 564e21: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 564e23: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564e26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564e27: mov ecx, 0x6a7ad8 */
  ecx = 0x6a7ad8u;
/* 564e2c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564e2f: call 0x4e353f */
  esp -= 4; W32(esp, 0x564e34u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564e34: push 0x566f90 */
  { uint32_t v = 0x566f90u; esp -= 4; W32(esp, v); }
/* 564e39: call 0x555049 */
  esp -= 4; W32(esp, 0x564e3eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564e3e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564e42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564e43: ret  */
  esp += 4; SPILL(); return;
}

void f_564e70(void) {
  LOAD_REGS();
L_564e70: /* 564e70: mov dword ptr [0x6a7074], 0x6a7ad8 */
  W32((uint32_t)(0x6a7074u), 0x6a7ad8u);
/* 564e7a: ret  */
  esp += 4; SPILL(); return;
}

void f_564e90(void) {
  LOAD_REGS();
L_564e90: /* 564e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564e91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564e92: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564e97: push 0x4e2b0d */
  { uint32_t v = 0x4e2b0du; esp -= 4; W32(esp, v); }
/* 564e9c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564ea1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564ea6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564eab: push 0x5ad59e */
  { uint32_t v = 0x5ad59eu; esp -= 4; W32(esp, v); }
/* 564eb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564eb3: mov edi, esp */
  edi = esp;
/* 564eb5: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 564eba: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 564ebf: xor eax, eax */
  eax = 0;
/* 564ec1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564ec3: xor ecx, ecx */
  ecx = 0;
/* 564ec5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564ec8: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 564ecd: xor edx, edx */
  edx = 0;
/* 564ecf: xor esi, esi */
  esi = 0;
/* 564ed1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 564ed3: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564ed7: mov ecx, 0x6a6b40 */
  ecx = 0x6a6b40u;
/* 564edc: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564edf: call 0x4e353f */
  esp -= 4; W32(esp, 0x564ee4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564ee4: push 0x566fb0 */
  { uint32_t v = 0x566fb0u; esp -= 4; W32(esp, v); }
/* 564ee9: call 0x555049 */
  esp -= 4; W32(esp, 0x564eeeu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564eee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564ef1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564ef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564ef3: ret  */
  esp += 4; SPILL(); return;
}

void f_564f20(void) {
  LOAD_REGS();
L_564f20: /* 564f20: mov dword ptr [0x6a7ad4], 0x6a6b40 */
  W32((uint32_t)(0x6a7ad4u), 0x6a6b40u);
/* 564f2a: ret  */
  esp += 4; SPILL(); return;
}

void f_564f40(void) {
  LOAD_REGS();
L_564f40: /* 564f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564f41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564f42: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564f47: push 0x4e1424 */
  { uint32_t v = 0x4e1424u; esp -= 4; W32(esp, v); }
/* 564f4c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 564f51: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 564f56: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 564f5b: push 0x5ad61a */
  { uint32_t v = 0x5ad61au; esp -= 4; W32(esp, v); }
/* 564f60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 564f63: mov edi, esp */
  edi = esp;
/* 564f65: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 564f6a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 564f6f: xor eax, eax */
  eax = 0;
/* 564f71: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 564f73: xor ecx, ecx */
  ecx = 0;
/* 564f75: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 564f78: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 564f7d: xor edx, edx */
  edx = 0;
/* 564f7f: xor esi, esi */
  esi = 0;
/* 564f81: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 564f83: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 564f86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564f87: mov ecx, 0x6a5bb0 */
  ecx = 0x6a5bb0u;
/* 564f8c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 564f8f: call 0x4e353f */
  esp -= 4; W32(esp, 0x564f94u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 564f94: push 0x566fd0 */
  { uint32_t v = 0x566fd0u; esp -= 4; W32(esp, v); }
/* 564f99: call 0x555049 */
  esp -= 4; W32(esp, 0x564f9eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 564f9e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 564fa1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 564fa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 564fa3: ret  */
  esp += 4; SPILL(); return;
}

void f_564fd0(void) {
  LOAD_REGS();
L_564fd0: /* 564fd0: mov dword ptr [0x6a8004], 0x6a5bb0 */
  W32((uint32_t)(0x6a8004u), 0x6a5bb0u);
/* 564fda: ret  */
  esp += 4; SPILL(); return;
}

void f_564ff0(void) {
  LOAD_REGS();
L_564ff0: /* 564ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 564ff1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 564ff2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 564ff7: push 0x4e4011 */
  { uint32_t v = 0x4e4011u; esp -= 4; W32(esp, v); }
/* 564ffc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565001: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565006: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56500b: push 0x5ad742 */
  { uint32_t v = 0x5ad742u; esp -= 4; W32(esp, v); }
/* 565010: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565013: mov edi, esp */
  edi = esp;
/* 565015: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56501a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56501f: xor eax, eax */
  eax = 0;
/* 565021: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565023: xor ecx, ecx */
  ecx = 0;
/* 565025: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565028: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56502d: xor edx, edx */
  edx = 0;
/* 56502f: xor esi, esi */
  esi = 0;
/* 565031: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 565033: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565037: mov ecx, 0x6a8548 */
  ecx = 0x6a8548u;
/* 56503c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56503f: call 0x4e353f */
  esp -= 4; W32(esp, 0x565044u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565044: push 0x566ff0 */
  { uint32_t v = 0x566ff0u; esp -= 4; W32(esp, v); }
/* 565049: call 0x555049 */
  esp -= 4; W32(esp, 0x56504eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56504e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565051: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565053: ret  */
  esp += 4; SPILL(); return;
}

void f_565080(void) {
  LOAD_REGS();
L_565080: /* 565080: mov dword ptr [0x6a46ec], 0x6a8548 */
  W32((uint32_t)(0x6a46ecu), 0x6a8548u);
/* 56508a: ret  */
  esp += 4; SPILL(); return;
}

void f_5650a0(void) {
  LOAD_REGS();
L_5650a0: /* 5650a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5650a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5650a2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5650a7: push 0x4e2c1b */
  { uint32_t v = 0x4e2c1bu; esp -= 4; W32(esp, v); }
/* 5650ac: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5650b1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5650b6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5650bb: push 0x5ad81e */
  { uint32_t v = 0x5ad81eu; esp -= 4; W32(esp, v); }
/* 5650c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5650c3: mov edi, esp */
  edi = esp;
/* 5650c5: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 5650ca: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 5650cf: xor eax, eax */
  eax = 0;
/* 5650d1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5650d3: xor ecx, ecx */
  ecx = 0;
/* 5650d5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5650d8: push 0x28000 */
  { uint32_t v = 0x28000u; esp -= 4; W32(esp, v); }
/* 5650dd: xor edx, edx */
  edx = 0;
/* 5650df: xor esi, esi */
  esi = 0;
/* 5650e1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 5650e3: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5650e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5650e7: mov ecx, 0x6a5150 */
  ecx = 0x6a5150u;
/* 5650ec: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5650ef: call 0x4e353f */
  esp -= 4; W32(esp, 0x5650f4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5650f4: push 0x567010 */
  { uint32_t v = 0x567010u; esp -= 4; W32(esp, v); }
/* 5650f9: call 0x555049 */
  esp -= 4; W32(esp, 0x5650feu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5650fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565101: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565102: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565103: ret  */
  esp += 4; SPILL(); return;
}

void f_565130(void) {
  LOAD_REGS();
L_565130: /* 565130: mov dword ptr [0x6a46e8], 0x6a5150 */
  W32((uint32_t)(0x6a46e8u), 0x6a5150u);
/* 56513a: ret  */
  esp += 4; SPILL(); return;
}

void f_565150(void) {
  LOAD_REGS();
L_565150: /* 565150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565152: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565157: push 0x4e3e72 */
  { uint32_t v = 0x4e3e72u; esp -= 4; W32(esp, v); }
/* 56515c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565161: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565166: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56516b: push 0x5ad89e */
  { uint32_t v = 0x5ad89eu; esp -= 4; W32(esp, v); }
/* 565170: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565173: mov edi, esp */
  edi = esp;
/* 565175: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56517a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56517f: xor eax, eax */
  eax = 0;
/* 565181: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565183: xor ecx, ecx */
  ecx = 0;
/* 565185: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565188: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56518d: xor edx, edx */
  edx = 0;
/* 56518f: xor esi, esi */
  esi = 0;
/* 565191: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 565193: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565197: mov ecx, 0x6a46f0 */
  ecx = 0x6a46f0u;
/* 56519c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56519f: call 0x4e353f */
  esp -= 4; W32(esp, 0x5651a4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5651a4: push 0x567030 */
  { uint32_t v = 0x567030u; esp -= 4; W32(esp, v); }
/* 5651a9: call 0x555049 */
  esp -= 4; W32(esp, 0x5651aeu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5651ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5651b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5651b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5651b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5651e0(void) {
  LOAD_REGS();
L_5651e0: /* 5651e0: mov dword ptr [0x6a7070], 0x6a46f0 */
  W32((uint32_t)(0x6a7070u), 0x6a46f0u);
/* 5651ea: ret  */
  esp += 4; SPILL(); return;
}

void f_565200(void) {
  LOAD_REGS();
L_565200: /* 565200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565202: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565207: push 0x4e4377 */
  { uint32_t v = 0x4e4377u; esp -= 4; W32(esp, v); }
/* 56520c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565211: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565216: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56521b: push 0x5ada7a */
  { uint32_t v = 0x5ada7au; esp -= 4; W32(esp, v); }
/* 565220: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565223: mov edi, esp */
  edi = esp;
/* 565225: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56522a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56522f: xor eax, eax */
  eax = 0;
/* 565231: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565233: xor ecx, ecx */
  ecx = 0;
/* 565235: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565238: push 0x18000 */
  { uint32_t v = 0x18000u; esp -= 4; W32(esp, v); }
/* 56523d: xor edx, edx */
  edx = 0;
/* 56523f: xor esi, esi */
  esi = 0;
/* 565241: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 565243: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565247: mov ecx, 0x6a75a8 */
  ecx = 0x6a75a8u;
/* 56524c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56524f: call 0x4e353f */
  esp -= 4; W32(esp, 0x565254u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565254: push 0x567050 */
  { uint32_t v = 0x567050u; esp -= 4; W32(esp, v); }
/* 565259: call 0x555049 */
  esp -= 4; W32(esp, 0x56525eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56525e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565262: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565263: ret  */
  esp += 4; SPILL(); return;
}

void f_565290(void) {
  LOAD_REGS();
L_565290: /* 565290: mov dword ptr [0x6a8544], 0x6a75a8 */
  W32((uint32_t)(0x6a8544u), 0x6a75a8u);
/* 56529a: ret  */
  esp += 4; SPILL(); return;
}

void f_5652b0(void) {
  LOAD_REGS();
L_5652b0: /* 5652b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5652b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5652b2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5652b7: push 0x4e422d */
  { uint32_t v = 0x4e422du; esp -= 4; W32(esp, v); }
/* 5652bc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5652c1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5652c6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5652cb: push 0x5adace */
  { uint32_t v = 0x5adaceu; esp -= 4; W32(esp, v); }
/* 5652d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5652d3: mov edi, esp */
  edi = esp;
/* 5652d5: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 5652da: push 0x6a75a8 */
  { uint32_t v = 0x6a75a8u; esp -= 4; W32(esp, v); }
/* 5652df: xor eax, eax */
  eax = 0;
/* 5652e1: xor esi, esi */
  esi = 0;
/* 5652e3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5652e5: xor ecx, ecx */
  ecx = 0;
/* 5652e7: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5652ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5652eb: xor edx, edx */
  edx = 0;
/* 5652ed: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 5652ef: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5652f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5652f3: mov ecx, 0x6a4c20 */
  ecx = 0x6a4c20u;
/* 5652f8: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5652fb: call 0x4e353f */
  esp -= 4; W32(esp, 0x565300u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565300: push 0x567070 */
  { uint32_t v = 0x567070u; esp -= 4; W32(esp, v); }
/* 565305: call 0x555049 */
  esp -= 4; W32(esp, 0x56530au); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56530a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 56530d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 56530e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 56530f: ret  */
  esp += 4; SPILL(); return;
}

void f_565330(void) {
  LOAD_REGS();
L_565330: /* 565330: mov dword ptr [0x6a8534], 0x6a4c20 */
  W32((uint32_t)(0x6a8534u), 0x6a4c20u);
/* 56533a: ret  */
  esp += 4; SPILL(); return;
}

void f_565350(void) {
  LOAD_REGS();
L_565350: /* 565350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565352: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565357: push 0x4e2392 */
  { uint32_t v = 0x4e2392u; esp -= 4; W32(esp, v); }
/* 56535c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565361: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565366: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56536b: push 0x5adb56 */
  { uint32_t v = 0x5adb56u; esp -= 4; W32(esp, v); }
/* 565370: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565373: mov edi, esp */
  edi = esp;
/* 565375: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56537a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56537f: xor eax, eax */
  eax = 0;
/* 565381: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565383: xor ecx, ecx */
  ecx = 0;
/* 565385: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565388: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56538d: xor edx, edx */
  edx = 0;
/* 56538f: xor esi, esi */
  esi = 0;
/* 565391: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 565393: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565397: mov ecx, 0x6a8a78 */
  ecx = 0x6a8a78u;
/* 56539c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56539f: call 0x4e353f */
  esp -= 4; W32(esp, 0x5653a4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5653a4: push 0x567090 */
  { uint32_t v = 0x567090u; esp -= 4; W32(esp, v); }
/* 5653a9: call 0x555049 */
  esp -= 4; W32(esp, 0x5653aeu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5653ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5653b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5653b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5653b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5653e0(void) {
  LOAD_REGS();
L_5653e0: /* 5653e0: mov dword ptr [0x6a6b3c], 0x6a8a78 */
  W32((uint32_t)(0x6a6b3cu), 0x6a8a78u);
/* 5653ea: ret  */
  esp += 4; SPILL(); return;
}

void f_565400(void) {
  LOAD_REGS();
L_565400: /* 565400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565401: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565402: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565407: push 0x4e1983 */
  { uint32_t v = 0x4e1983u; esp -= 4; W32(esp, v); }
/* 56540c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565411: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565416: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56541b: push 0x5adbf2 */
  { uint32_t v = 0x5adbf2u; esp -= 4; W32(esp, v); }
/* 565420: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565423: mov edi, esp */
  edi = esp;
/* 565425: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56542a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56542f: xor eax, eax */
  eax = 0;
/* 565431: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565433: xor ecx, ecx */
  ecx = 0;
/* 565435: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565438: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56543d: xor edx, edx */
  edx = 0;
/* 56543f: xor esi, esi */
  esi = 0;
/* 565441: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 565443: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565447: mov ecx, 0x6a6610 */
  ecx = 0x6a6610u;
/* 56544c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56544f: call 0x4e353f */
  esp -= 4; W32(esp, 0x565454u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565454: push 0x5670b0 */
  { uint32_t v = 0x5670b0u; esp -= 4; W32(esp, v); }
/* 565459: call 0x555049 */
  esp -= 4; W32(esp, 0x56545eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56545e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565461: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565462: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565463: ret  */
  esp += 4; SPILL(); return;
}

void f_565490(void) {
  LOAD_REGS();
L_565490: /* 565490: mov dword ptr [0x6a8538], 0x6a6610 */
  W32((uint32_t)(0x6a8538u), 0x6a6610u);
/* 56549a: ret  */
  esp += 4; SPILL(); return;
}

void f_5654b0(void) {
  LOAD_REGS();
L_5654b0: /* 5654b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5654b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5654b2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5654b7: push 0x4e3a6c */
  { uint32_t v = 0x4e3a6cu; esp -= 4; W32(esp, v); }
/* 5654bc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5654c1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5654c6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5654cb: push 0x5adcea */
  { uint32_t v = 0x5adceau; esp -= 4; W32(esp, v); }
/* 5654d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5654d3: mov edi, esp */
  edi = esp;
/* 5654d5: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 5654da: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 5654df: xor eax, eax */
  eax = 0;
/* 5654e1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5654e3: xor ecx, ecx */
  ecx = 0;
/* 5654e5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5654e8: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 5654ed: xor edx, edx */
  edx = 0;
/* 5654ef: xor esi, esi */
  esi = 0;
/* 5654f1: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 5654f3: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5654f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5654f7: mov ecx, 0x6a8008 */
  ecx = 0x6a8008u;
/* 5654fc: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5654ff: call 0x4e353f */
  esp -= 4; W32(esp, 0x565504u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565504: push 0x5670d0 */
  { uint32_t v = 0x5670d0u; esp -= 4; W32(esp, v); }
/* 565509: call 0x555049 */
  esp -= 4; W32(esp, 0x56550eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56550e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565511: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565512: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565513: ret  */
  esp += 4; SPILL(); return;
}

void f_565540(void) {
  LOAD_REGS();
L_565540: /* 565540: mov dword ptr [0x6a853c], 0x6a8008 */
  W32((uint32_t)(0x6a853cu), 0x6a8008u);
/* 56554a: ret  */
  esp += 4; SPILL(); return;
}

void f_565560(void) {
  LOAD_REGS();
L_565560: /* 565560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565562: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565567: push 0x4e3e54 */
  { uint32_t v = 0x4e3e54u; esp -= 4; W32(esp, v); }
/* 56556c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565571: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565576: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56557b: push 0x5addfa */
  { uint32_t v = 0x5addfau; esp -= 4; W32(esp, v); }
/* 565580: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565583: mov edi, esp */
  edi = esp;
/* 565585: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56558a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56558f: xor eax, eax */
  eax = 0;
/* 565591: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565593: xor ecx, ecx */
  ecx = 0;
/* 565595: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565598: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56559d: xor edx, edx */
  edx = 0;
/* 56559f: xor esi, esi */
  esi = 0;
/* 5655a1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 5655a3: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5655a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5655a7: mov ecx, 0x6a60e0 */
  ecx = 0x6a60e0u;
/* 5655ac: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5655af: call 0x4e353f */
  esp -= 4; W32(esp, 0x5655b4u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5655b4: push 0x5670f0 */
  { uint32_t v = 0x5670f0u; esp -= 4; W32(esp, v); }
/* 5655b9: call 0x555049 */
  esp -= 4; W32(esp, 0x5655beu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5655be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5655c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5655c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5655c3: ret  */
  esp += 4; SPILL(); return;
}

void f_5655f0(void) {
  LOAD_REGS();
L_5655f0: /* 5655f0: mov dword ptr [0x6a8540], 0x6a60e0 */
  W32((uint32_t)(0x6a8540u), 0x6a60e0u);
/* 5655fa: ret  */
  esp += 4; SPILL(); return;
}

void f_565610(void) {
  LOAD_REGS();
L_565610: /* 565610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565612: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 565617: push 0x4e2865 */
  { uint32_t v = 0x4e2865u; esp -= 4; W32(esp, v); }
/* 56561c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565621: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565626: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56562b: push 0x5ade92 */
  { uint32_t v = 0x5ade92u; esp -= 4; W32(esp, v); }
/* 565630: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565633: mov edi, esp */
  edi = esp;
/* 565635: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 56563a: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 56563f: xor eax, eax */
  eax = 0;
/* 565641: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 565643: xor ecx, ecx */
  ecx = 0;
/* 565645: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 565648: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 56564d: xor edx, edx */
  edx = 0;
/* 56564f: xor esi, esi */
  esi = 0;
/* 565651: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 565653: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565657: mov ecx, 0x6a7078 */
  ecx = 0x6a7078u;
/* 56565c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56565f: call 0x4e353f */
  esp -= 4; W32(esp, 0x565664u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565664: push 0x567110 */
  { uint32_t v = 0x567110u; esp -= 4; W32(esp, v); }
/* 565669: call 0x555049 */
  esp -= 4; W32(esp, 0x56566eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56566e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565673: ret  */
  esp += 4; SPILL(); return;
}

void f_5656a0(void) {
  LOAD_REGS();
L_5656a0: /* 5656a0: mov dword ptr [0x6a706c], 0x6a7078 */
  W32((uint32_t)(0x6a706cu), 0x6a7078u);
/* 5656aa: ret  */
  esp += 4; SPILL(); return;
}

void f_5656c0(void) {
  LOAD_REGS();
L_5656c0: /* 5656c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5656c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5656c2: push 0x4e3f3f */
  { uint32_t v = 0x4e3f3fu; esp -= 4; W32(esp, v); }
/* 5656c7: push 0x4e39a4 */
  { uint32_t v = 0x4e39a4u; esp -= 4; W32(esp, v); }
/* 5656cc: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 5656d1: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 5656d6: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 5656db: push 0x5ae2a2 */
  { uint32_t v = 0x5ae2a2u; esp -= 4; W32(esp, v); }
/* 5656e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5656e3: mov edi, esp */
  edi = esp;
/* 5656e5: push 0x5ef8b8 */
  { uint32_t v = 0x5ef8b8u; esp -= 4; W32(esp, v); }
/* 5656ea: push 0x6a7ad8 */
  { uint32_t v = 0x6a7ad8u; esp -= 4; W32(esp, v); }
/* 5656ef: xor eax, eax */
  eax = 0;
/* 5656f1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5656f3: xor ecx, ecx */
  ecx = 0;
/* 5656f5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5656f8: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 5656fd: xor edx, edx */
  edx = 0;
/* 5656ff: xor esi, esi */
  esi = 0;
/* 565701: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 565703: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 565706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565707: mov ecx, 0x6a5680 */
  ecx = 0x6a5680u;
/* 56570c: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 56570f: call 0x4e353f */
  esp -= 4; W32(esp, 0x565714u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 565714: push 0x567130 */
  { uint32_t v = 0x567130u; esp -= 4; W32(esp, v); }
/* 565719: call 0x555049 */
  esp -= 4; W32(esp, 0x56571eu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 56571e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 565721: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 565722: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 565723: ret  */
  esp += 4; SPILL(); return;
}

void f_565750(void) {
  LOAD_REGS();
L_565750: /* 565750: mov dword ptr [0x6a60dc], 0x6a5680 */
  W32((uint32_t)(0x6a60dcu), 0x6a5680u);
/* 56575a: ret  */
  esp += 4; SPILL(); return;
}

void f_565770(void) {
  LOAD_REGS();
L_565770: /* 565770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 565771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 565772: push 0x4e1622 */
  { uint32_t v = 0x4e1622u; esp -= 4; W32(esp, v); }
/* 565777: push 0x4e39e5 */
  { uint32_t v = 0x4e39e5u; esp -= 4; W32(esp, v); }
/* 56577c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 565781: push 0x5a375c */
  { uint32_t v = 0x5a375cu; esp -= 4; W32(esp, v); }
/* 565786: push 0x5a2f6c */
  { uint32_t v = 0x5a2f6cu; esp -= 4; W32(esp, v); }
/* 56578b: push 0x5aeaea */
  { uint32_t v = 0x5aeaeau; esp -= 4; W32(esp, v); }
/* 565790: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 565793: mov edi, esp */
  edi = esp;
/* 565795: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 56579a: push 0x6a04a8 */
  { uint32_t v = 0x6a04a8u; esp -= 4; W32(esp, v); }
/* 56579f: xor eax, eax */
  eax = 0;
/* 5657a1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5657a3: xor ecx, ecx */
  ecx = 0;
/* 5657a5: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5657a8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5657aa: xor edx, edx */
  edx = 0;
/* 5657ac: xor esi, esi */
  esi = 0;
/* 5657ae: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 5657b0: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 5657b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5657b4: mov ecx, 0x6a9e70 */
  ecx = 0x6a9e70u;
/* 5657b9: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 5657bc: call 0x4e353f */
  esp -= 4; W32(esp, 0x5657c1u); SPILL(); f_4e353f(); if (g_unwind) return; RELOAD();
/* 5657c1: push 0x567150 */
  { uint32_t v = 0x567150u; esp -= 4; W32(esp, v); }
/* 5657c6: call 0x555049 */
  esp -= 4; W32(esp, 0x5657cbu); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 5657cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5657ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5657cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5657d0: ret  */
  esp += 4; SPILL(); return;
}

void f_565800(void) {
  LOAD_REGS();
L_565800: /* 565800: mov dword ptr [0x6aa39c], 0x6a9e70 */
  W32((uint32_t)(0x6aa39cu), 0x6a9e70u);
/* 56580a: ret  */
  esp += 4; SPILL(); return;
}

void f_566b00(void) {
  LOAD_REGS();
L_566b00: /* 566b00: mov ecx, 0x5e3238 */
  ecx = 0x5e3238u;
/* 566b05: jmp 0x4e1e74 */
  SPILL(); f_4e1e74(); return;
}

void f_566b20(void) {
  LOAD_REGS();
L_566b20: /* 566b20: mov ecx, 0x5b3198 */
  ecx = 0x5b3198u;
/* 566b25: jmp 0x4e1479 */
  SPILL(); f_4e1479(); return;
}

void f_566b40(void) {
  LOAD_REGS();
L_566b40: /* 566b40: mov dword ptr [0x5a3d08], 0x56afc4 */
  W32((uint32_t)(0x5a3d08u), 0x56afc4u);
/* 566b4a: mov dword ptr [0x5ed6a0], 0 */
  W32((uint32_t)(0x5ed6a0u), 0x0u);
/* 566b54: jmp dword ptr [0x6ac808] */
  SPILL(); call_ind(R32(0x6ac808u)); return; /* ole32!CoUninitialize */
}

void f_566b70(void) {
  LOAD_REGS();
L_566b70: /* 566b70: mov ecx, 0x5ed6a0 */
  ecx = 0x5ed6a0u;
/* 566b75: jmp 0x4e4386 */
  SPILL(); f_4e4386(); return;
}

void f_566b90(void) {
  LOAD_REGS();
L_566b90: /* 566b90: mov ecx, 0x5ed6b0 */
  ecx = 0x5ed6b0u;
/* 566b95: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566bb0(void) {
  LOAD_REGS();
L_566bb0: /* 566bb0: mov ecx, 0x5edbe0 */
  ecx = 0x5edbe0u;
/* 566bb5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566bd0(void) {
  LOAD_REGS();
L_566bd0: /* 566bd0: mov ecx, 0x5ee348 */
  ecx = 0x5ee348u;
/* 566bd5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566bf0(void) {
  LOAD_REGS();
L_566bf0: /* 566bf0: mov ecx, 0x5ef8b8 */
  ecx = 0x5ef8b8u;
/* 566bf5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566c10(void) {
  LOAD_REGS();
L_566c10: /* 566c10: mov ecx, 0x5f0848 */
  ecx = 0x5f0848u;
/* 566c15: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566c30(void) {
  LOAD_REGS();
L_566c30: /* 566c30: mov ecx, 0x5ef388 */
  ecx = 0x5ef388u;
/* 566c35: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566c50(void) {
  LOAD_REGS();
L_566c50: /* 566c50: mov ecx, 0x5f0d80 */
  ecx = 0x5f0d80u;
/* 566c55: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566c70(void) {
  LOAD_REGS();
L_566c70: /* 566c70: mov ecx, 0x5f0318 */
  ecx = 0x5f0318u;
/* 566c75: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566c90(void) {
  LOAD_REGS();
L_566c90: /* 566c90: mov ecx, 0x5efde8 */
  ecx = 0x5efde8u;
/* 566c95: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566cb0(void) {
  LOAD_REGS();
L_566cb0: /* 566cb0: mov ecx, 0x5f7190 */
  ecx = 0x5f7190u;
/* 566cb5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566cd0(void) {
  LOAD_REGS();
L_566cd0: /* 566cd0: ret  */
  esp += 4; SPILL(); return;
}

void f_566cf0(void) {
  LOAD_REGS();
L_566cf0: /* 566cf0: mov ecx, 0x69a758 */
  ecx = 0x69a758u;
/* 566cf5: jmp 0x4e397c */
  SPILL(); f_4e397c(); return;
}

void f_566d10(void) {
  LOAD_REGS();
L_566d10: /* 566d10: mov ecx, 0x69a74c */
  ecx = 0x69a74cu;
/* 566d15: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_566d30(void) {
  LOAD_REGS();
L_566d30: /* 566d30: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 566d35: jmp 0x4e326a */
  SPILL(); f_4e326a(); return;
}

void f_566d50(void) {
  LOAD_REGS();
L_566d50: /* 566d50: mov ecx, 0x6a0f04 */
  ecx = 0x6a0f04u;
/* 566d55: jmp 0x4e326a */
  SPILL(); f_4e326a(); return;
}

void f_566d70(void) {
  LOAD_REGS();
L_566d70: /* 566d70: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 566d75: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_566d90(void) {
  LOAD_REGS();
L_566d90: /* 566d90: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 566d95: jmp 0x4e326a */
  SPILL(); f_4e326a(); return;
}

void f_566db0(void) {
  LOAD_REGS();
L_566db0: /* 566db0: mov ecx, 0x6a2920 */
  ecx = 0x6a2920u;
/* 566db5: jmp 0x4e326a */
  SPILL(); f_4e326a(); return;
}

void f_566dd0(void) {
  LOAD_REGS();
L_566dd0: /* 566dd0: mov ecx, 0x6a2914 */
  ecx = 0x6a2914u;
/* 566dd5: jmp 0x4e326a */
  SPILL(); f_4e326a(); return;
}

void f_566df0(void) {
  LOAD_REGS();
L_566df0: /* 566df0: mov ecx, 0x6a1eb8 */
  ecx = 0x6a1eb8u;
/* 566df5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566e10(void) {
  LOAD_REGS();
L_566e10: /* 566e10: mov ecx, 0x6a23e8 */
  ecx = 0x6a23e8u;
/* 566e15: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566e30(void) {
  LOAD_REGS();
L_566e30: /* 566e30: mov ecx, 0x6a1450 */
  ecx = 0x6a1450u;
/* 566e35: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566e50(void) {
  LOAD_REGS();
L_566e50: /* 566e50: mov ecx, 0x69fa30 */
  ecx = 0x69fa30u;
/* 566e55: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566e70(void) {
  LOAD_REGS();
L_566e70: /* 566e70: mov ecx, 0x6a1980 */
  ecx = 0x6a1980u;
/* 566e75: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566e90(void) {
  LOAD_REGS();
L_566e90: /* 566e90: mov ecx, 0x6a04a8 */
  ecx = 0x6a04a8u;
/* 566e95: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566eb0(void) {
  LOAD_REGS();
L_566eb0: /* 566eb0: mov ecx, 0x6a09d8 */
  ecx = 0x6a09d8u;
/* 566eb5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566ed0(void) {
  LOAD_REGS();
L_566ed0: /* 566ed0: mov ecx, 0x69ff70 */
  ecx = 0x69ff70u;
/* 566ed5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566ef0(void) {
  LOAD_REGS();
L_566ef0: /* 566ef0: mov ecx, 0x6a2930 */
  ecx = 0x6a2930u;
/* 566ef5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566f10(void) {
  LOAD_REGS();
L_566f10: /* 566f10: mov ecx, 0x69f4e8 */
  ecx = 0x69f4e8u;
/* 566f15: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566f30(void) {
  LOAD_REGS();
L_566f30: /* 566f30: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 566f35: jmp 0x4e2a13 */
  SPILL(); f_4e2a13(); return;
}

void f_566f50(void) {
  LOAD_REGS();
L_566f50: /* 566f50: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 566f55: jmp 0x4e209f */
  SPILL(); f_4e209f(); return;
}

void f_566f70(void) {
  LOAD_REGS();
L_566f70: /* 566f70: mov ecx, 0x6a0f20 */
  ecx = 0x6a0f20u;
/* 566f75: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566f90(void) {
  LOAD_REGS();
L_566f90: /* 566f90: mov ecx, 0x6a7ad8 */
  ecx = 0x6a7ad8u;
/* 566f95: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566fb0(void) {
  LOAD_REGS();
L_566fb0: /* 566fb0: mov ecx, 0x6a6b40 */
  ecx = 0x6a6b40u;
/* 566fb5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566fd0(void) {
  LOAD_REGS();
L_566fd0: /* 566fd0: mov ecx, 0x6a5bb0 */
  ecx = 0x6a5bb0u;
/* 566fd5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_566ff0(void) {
  LOAD_REGS();
L_566ff0: /* 566ff0: mov ecx, 0x6a8548 */
  ecx = 0x6a8548u;
/* 566ff5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567010(void) {
  LOAD_REGS();
L_567010: /* 567010: mov ecx, 0x6a5150 */
  ecx = 0x6a5150u;
/* 567015: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567030(void) {
  LOAD_REGS();
L_567030: /* 567030: mov ecx, 0x6a46f0 */
  ecx = 0x6a46f0u;
/* 567035: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567050(void) {
  LOAD_REGS();
L_567050: /* 567050: mov ecx, 0x6a75a8 */
  ecx = 0x6a75a8u;
/* 567055: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567070(void) {
  LOAD_REGS();
L_567070: /* 567070: mov ecx, 0x6a4c20 */
  ecx = 0x6a4c20u;
/* 567075: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567090(void) {
  LOAD_REGS();
L_567090: /* 567090: mov ecx, 0x6a8a78 */
  ecx = 0x6a8a78u;
/* 567095: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_5670b0(void) {
  LOAD_REGS();
L_5670b0: /* 5670b0: mov ecx, 0x6a6610 */
  ecx = 0x6a6610u;
/* 5670b5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_5670d0(void) {
  LOAD_REGS();
L_5670d0: /* 5670d0: mov ecx, 0x6a8008 */
  ecx = 0x6a8008u;
/* 5670d5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_5670f0(void) {
  LOAD_REGS();
L_5670f0: /* 5670f0: mov ecx, 0x6a60e0 */
  ecx = 0x6a60e0u;
/* 5670f5: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567110(void) {
  LOAD_REGS();
L_567110: /* 567110: mov ecx, 0x6a7078 */
  ecx = 0x6a7078u;
/* 567115: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567130(void) {
  LOAD_REGS();
L_567130: /* 567130: mov ecx, 0x6a5680 */
  ecx = 0x6a5680u;
/* 567135: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}

void f_567150(void) {
  LOAD_REGS();
L_567150: /* 567150: mov ecx, 0x6a9e70 */
  ecx = 0x6a9e70u;
/* 567155: jmp 0x4e2a1d */
  SPILL(); f_4e2a1d(); return;
}
