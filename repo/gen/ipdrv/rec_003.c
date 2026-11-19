#include "recomp.h"
#include "rec_mod.h"

void f_ee3939(void) {
  LOAD_REGS();
L_ee3939: /* ee3939: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* ee393f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee3944: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* ee3947: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* ee394a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee394b: jmp 0xee4059 */
  goto L_ee4059;
L_ee4059: /* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee3950(void) {
  LOAD_REGS();
L_ee3950: /* ee3950: push 0xef66e4 */
  { uint32_t v = 0xef66e4u; esp -= 4; W32(esp, v); }
/* ee3955: jmp 0xee4047 */
  goto L_ee4047;
L_ee4047: /* ee4047: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee404c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4052u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee3c3a(void) {
  LOAD_REGS();
L_ee3c3a: /* ee3c3a: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* ee3c40: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee3c45: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* ee3c48: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* ee3c4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee3c4c: jmp 0xee4059 */
  goto L_ee4059;
L_ee4059: /* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee3c51(void) {
  LOAD_REGS();
L_ee3c51: /* ee3c51: push 0xef66b0 */
  { uint32_t v = 0xef66b0u; esp -= 4; W32(esp, v); }
/* ee3c56: jmp 0xee4047 */
  goto L_ee4047;
L_ee4047: /* ee4047: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee404c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4052u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee3d53(void) {
  LOAD_REGS();
L_ee3d53: /* ee3d53: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* ee3d59: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee3d5e: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* ee3d61: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* ee3d64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee3d65: jmp 0xee4059 */
  goto L_ee4059;
L_ee4059: /* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee3d6a(void) {
  LOAD_REGS();
L_ee3d6a: /* ee3d6a: push 0xef6670 */
  { uint32_t v = 0xef6670u; esp -= 4; W32(esp, v); }
/* ee3d6f: jmp 0xee4047 */
  goto L_ee4047;
L_ee4047: /* ee4047: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee404c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4052u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee4010(void) {
  LOAD_REGS();
L_ee4010: /* ee4010: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* ee4016: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee401b: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* ee401e: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* ee4021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4022: jmp 0xee4059 */
  goto L_ee4059;
L_ee4059: /* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee4024(void) {
  LOAD_REGS();
L_ee4024: /* ee4024: push 0xef6648 */
  { uint32_t v = 0xef6648u; esp -= 4; W32(esp, v); }
/* ee4029: jmp 0xee4047 */
  goto L_ee4047;
L_ee4047: /* ee4047: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee404c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4052u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee402b(void) {
  LOAD_REGS();
L_ee402b: /* ee402b: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* ee4031: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee4036: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* ee4039: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee403a: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* ee403d: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4042u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee4042(); return;
}

void f_ee4042(void) {
  LOAD_REGS();
L_ee4042: /* ee4042: push 0xef65e8 */
  { uint32_t v = 0xef65e8u; esp -= 4; W32(esp, v); }
/* ee4047: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee404c: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4052u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4059: call 0xeec520 */
  esp -= 4; W32(esp, 0xee405eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee405e: mov ecx, dword ptr [ebp - 0xc] */
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

void f_ee4310(void) {
  LOAD_REGS();
L_ee4310: /* ee4310: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee4313: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4314: mov esi, ecx */
  esi = ecx;
/* ee4316: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee4319: mov ecx, dword ptr [eax + 0x40c] */
  ecx = R32((uint32_t)(eax + 0x40cu));
/* ee431f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4320: mov edi, dword ptr [esi + 0x60] */
  edi = R32((uint32_t)(esi + 0x60u));
/* ee4323: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee4326: xor edx, edx */
  edx = 0;
/* ee4328: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ee432b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee432d: mov edi, dword ptr [0xf0dbf4] */
  edi = R32((uint32_t)(0xf0dbf4u));
/* ee4333: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ee4336: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ee433a: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ee433e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee433f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ee4343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4344: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ee4348: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* ee434b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee434c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee434eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee434e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4352: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee4354u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4354: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee4357: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee4359: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee435c: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee435fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee435f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4361: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4364: ret  */
  esp += 4; SPILL(); return;
}

void f_ee4390(void) {
  LOAD_REGS();
L_ee4390: /* ee4390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4391: mov ebp, esp */
  ebp = esp;
/* ee4393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4395: push 0xeef009 */
  { uint32_t v = 0xeef009u; esp -= 4; W32(esp, v); }
/* ee439a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee43a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee43a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee43a8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee43ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee43ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ee43af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee43b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee43b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee43b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee43b5: mov edi, ecx */
  edi = ecx;
/* ee43b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee43be: call 0xed1555 */
  esp -= 4; W32(esp, 0xee43c3u); SPILL(); f_ed1555(); if (g_unwind) return; RELOAD();
/* ee43c3: mov esi, eax */
  esi = eax;
/* ee43c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee43c7: je 0xee4469 */
  if (zf) goto L_ee4469;
L_ee43cd: /* ee43cd: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee43d2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee43d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee43d5: push 0xf048b0 */
  { uint32_t v = 0xf048b0u; esp -= 4; W32(esp, v); }
/* ee43da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee43db: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee43e1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee43e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee43e4: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee43e9: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* ee43ef: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee43f5u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee43f5: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* ee43f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee43fa: je 0xee444b */
  if (zf) goto L_ee444b;
L_ee43fc: /* ee43fc: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ee43ff: mov ecx, dword ptr [0xf0dd80] */
  ecx = R32((uint32_t)(0xf0dd80u));
L_ee4405: /* ee4405: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4407: je 0xee4412 */
  if (zf) goto L_ee4412;
L_ee4409: /* ee4409: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee440b: je 0xee441d */
  if (zf) goto L_ee441d;
L_ee440d: /* ee440d: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ee4410: jmp 0xee4405 */
  goto L_ee4405;
L_ee4412: /* ee4412: xor eax, eax */
  eax = 0;
/* ee4414: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4416: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee4419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee441b: je 0xee444b */
  if (zf) goto L_ee444b;
L_ee441d: /* ee441d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee441f: je 0xee444b */
  if (zf) goto L_ee444b;
L_ee4421: /* ee4421: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee4424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee4425: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4428: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee442eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee442e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ee4431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4432: mov ecx, esi */
  ecx = esi;
/* ee4434: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee4438: call dword ptr [0xf0dd84] */
  esp -= 4; W32(esp, 0xee443eu); SPILL(); f_6caa06(); if (g_unwind) return; /* Engine!?eventClientValidate@APlayerController@@QAEXABVFString@@@Z */ RELOAD();
/* ee443e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4441: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee4445: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee444bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee444b: /* ee444b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee444d: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* ee4450: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ee4452: mov ecx, esi */
  ecx = esi;
/* ee4454: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xee445au); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ee445a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee445c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* ee445f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4460: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* ee4463: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee4469u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_ee4469: /* ee4469: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee446c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee446d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee446e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4475: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee4476: mov esp, ebp */
  esp = ebp;
/* ee4478: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee4479: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee447c(void) {
  LOAD_REGS();
L_ee447c: /* ee447c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee447f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee4484: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee4487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4488: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee448b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4490u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee4490(); return;
}

void f_ee4490(void) {
  LOAD_REGS();
L_ee4490: /* ee4490: push 0xef6718 */
  { uint32_t v = 0xef6718u; esp -= 4; W32(esp, v); }
/* ee4495: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee449a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee44a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee44a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee44a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee44a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee44a7: call 0xeec520 */
  esp -= 4; W32(esp, 0xee44acu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee44ac: guest_badaddr(0xee44ac); return;
}

void f_ee4500(void) {
  LOAD_REGS();
L_ee4500: /* ee4500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4501: mov ebp, esp */
  ebp = esp;
/* ee4503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4505: push 0xeef029 */
  { uint32_t v = 0xeef029u; esp -= 4; W32(esp, v); }
/* ee450a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee4510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee4518: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee451b: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* ee451e: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* ee4524: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4527: mov edi, dword ptr [ecx + 0x3c] */
  edi = R32((uint32_t)(ecx + 0x3cu));
/* ee452a: xor esi, esi */
  esi = 0;
/* ee452c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee452e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee4531: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* ee4534: je 0xee45d4 */
  if (zf) goto L_ee45d4;
L_ee453a: /* ee453a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ee4540: /* ee4540: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4543: jge 0xee45d4 */
  if ((sf == of)) goto L_ee45d4;
L_ee4549: /* ee4549: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* ee454c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* ee454f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee4551: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4554: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee4555: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xee4558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4558: mov ecx, eax */
  ecx = eax;
/* ee455a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee455e: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee4564u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee4564: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee4567: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4569: call dword ptr [0xf0d94c] */
  esp -= 4; W32(esp, 0xee456fu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* ee456f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4572: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4574: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4577: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee457a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee457e: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4584u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4584: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee4586: je 0xee45a1 */
  if (zf) goto L_ee45a1;
L_ee4588: /* ee4588: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* ee458b: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ee458e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee4591: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4598: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4599: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee459a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee459b: mov esp, ebp */
  esp = ebp;
/* ee459d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee459e: ret 4 */
  esp += 8; SPILL(); return;
L_ee45a1: /* ee45a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee45a2: jmp 0xee4540 */
  goto L_ee4540;
L_ee45d4: /* ee45d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee45d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee45d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee45d9: xor eax, eax */
  eax = 0;
/* ee45db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee45e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee45e3: mov esp, ebp */
  esp = ebp;
/* ee45e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee45e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee45a4(void) {
  LOAD_REGS();
L_ee45a4: /* ee45a4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee45a7: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee45ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee45af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee45b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee45b3: call 0xeec520 */
  esp -= 4; W32(esp, 0xee45b8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee45b8(); return;
}

void f_ee45b8(void) {
  LOAD_REGS();
L_ee45b8: /* ee45b8: push 0xef6780 */
  { uint32_t v = 0xef6780u; esp -= 4; W32(esp, v); }
/* ee45bd: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee45c2: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee45c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee45c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee45cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee45cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee45cf: call 0xeec520 */
  esp -= 4; W32(esp, 0xee45d4u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee45d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee45d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee45d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee45d9: xor eax, eax */
  eax = 0;
/* ee45db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee45e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee45e3: mov esp, ebp */
  esp = ebp;
/* ee45e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee45e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee4630(void) {
  LOAD_REGS();
L_ee4630: /* ee4630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4631: mov ebp, esp */
  ebp = esp;
/* ee4633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4635: push 0xeef076 */
  { uint32_t v = 0xeef076u; esp -= 4; W32(esp, v); }
/* ee463a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee4640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee4648: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee464b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee464c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ee464f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4650: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4651: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee4654: mov esi, ecx */
  esi = ecx;
/* ee4656: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4657: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee465a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee4661: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee4667u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee4667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4668: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* ee466b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee466f: call 0xed190b */
  esp -= 4; W32(esp, 0xee4674u); SPILL(); f_ed190b(); if (g_unwind) return; RELOAD();
/* ee4674: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee4677: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee467b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4681u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4682: mov ecx, esi */
  ecx = esi;
/* ee4684: call 0xed1555 */
  esp -= 4; W32(esp, 0xee4689u); SPILL(); f_ed1555(); if (g_unwind) return; RELOAD();
/* ee4689: mov edi, eax */
  edi = eax;
/* ee468b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee468d: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee4692: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee4694: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4695: je 0xee476c */
  if (zf) goto L_ee476c;
L_ee469b: /* ee469b: push 0xf04a20 */
  { uint32_t v = 0xf04a20u; esp -= 4; W32(esp, v); }
/* ee46a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee46a1: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee46a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee46aa: push 0xf049a0 */
  { uint32_t v = 0xf049a0u; esp -= 4; W32(esp, v); }
/* ee46af: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee46b2: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee46b8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee46b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee46b9: mov ecx, esp */
  ecx = esp;
/* ee46bb: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* ee46be: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* ee46c4: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* ee46c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee46c8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee46cc: call dword ptr [0xf0dd74] */
  esp -= 4; W32(esp, 0xee46d2u); SPILL(); f_6ca91b(); if (g_unwind) return; /* Engine!?eventClientMessage@APlayerController@@QAEXABVFString@@VFName@@@Z */ RELOAD();
/* ee46d2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee46d5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee46d9: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee46dfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee46df: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee46e4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee46e7: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee46edu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee46ed: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee46f2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee46f5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee46f9: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee46ffu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee46ff: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* ee4701: push 0xf04960 */
  { uint32_t v = 0xf04960u; esp -= 4; W32(esp, v); }
/* ee4706: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee4709: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee470c: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee4712u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee4712: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* ee4715: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee4716: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4719: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee471a: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* ee471d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee471f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4720: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee4724: call dword ptr [0xf0dd7c] */
  esp -= 4; W32(esp, 0xee472au); SPILL(); f_6cb8a2(); if (g_unwind) return; /* Engine!?eventClientOpenMenu@APlayerController@@QAEXABVFString@@K00@Z */ RELOAD();
/* ee472a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee472d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee4730: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4736u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4736: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee4739: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee473d: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4743u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4743: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee4746: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee474a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4750u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4750: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ee4752: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee4754: mov ecx, edi */
  ecx = edi;
/* ee4756: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee4759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4759: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee475c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4763: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4765: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee4766: mov esp, ebp */
  esp = ebp;
/* ee4768: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee4769: ret 4 */
  esp += 8; SPILL(); return;
L_ee476c: /* ee476c: push 0xf04914 */
  { uint32_t v = 0xf04914u; esp -= 4; W32(esp, v); }
/* ee4771: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4772: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee4778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee4778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee477b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee477c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee477f: mov byte ptr [ebp + 0xb], 3 */
  W8((uint32_t)(ebp + 0xbu), 0x3u);
/* ee4783: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee4789u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee4789: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* ee478c: lea edx, [ebp + 0xb] */
  edx = (uint32_t)(ebp + 0xbu);
/* ee478f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee4790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4791: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ee4795: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee479bu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee479b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee479e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee47a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee47a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee47a3: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xee47a9u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ee47a9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee47ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee47ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee47b1: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee47b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee47b4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee47b7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee47bb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee47c1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee47c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee47c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee47c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee47c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee47cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee47ce: mov esp, ebp */
  esp = ebp;
/* ee47d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee47d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee47d4(void) {
  LOAD_REGS();
L_ee47d4: /* ee47d4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee47d7: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee47dc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee47df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee47e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee47e3: call 0xeec520 */
  esp -= 4; W32(esp, 0xee47e8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee47e8(); return;
}

void f_ee47e8(void) {
  LOAD_REGS();
L_ee47e8: /* ee47e8: push 0xef67d8 */
  { uint32_t v = 0xef67d8u; esp -= 4; W32(esp, v); }
/* ee47ed: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee47f2: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee47f8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee47f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee47fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee47fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee47ff: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4804u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee4804: guest_badaddr(0xee4804); return;
}

void f_ee4890(void) {
  LOAD_REGS();
L_ee4890: /* ee4890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4891: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4892: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4893: mov edi, ecx */
  edi = ecx;
/* ee4895: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee4898: xor esi, esi */
  esi = 0;
/* ee489a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee489c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* ee48a0: jle 0xee48de */
  if ((zf || sf != of)) goto L_ee48de;
L_ee48a2: /* ee48a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee48a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee48a4: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* ee48a8: xor ebx, ebx */
  ebx = 0;
/* ee48aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ee48b0: /* ee48b0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ee48b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee48b3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee48b5: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xee48bbu); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* ee48bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee48bd: je 0xee48cd */
  if (zf) goto L_ee48cd;
L_ee48bf: /* ee48bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee48c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee48c2: mov ecx, edi */
  ecx = edi;
/* ee48c4: call 0xed1636 */
  esp -= 4; W32(esp, 0xee48c9u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee48c9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* ee48ca: sub ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_ee48cd: /* ee48cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ee48d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee48d1: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ee48d4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee48d6: jl 0xee48b0 */
  if ((sf != of)) goto L_ee48b0;
L_ee48d8: /* ee48d8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ee48dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee48dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ee48de: /* ee48de: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* ee48e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee48e2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ee48e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee48e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ee48e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee4910(void) {
  LOAD_REGS();
L_ee4910: /* ee4910: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4911: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ee4915: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4917: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4919: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* ee491f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4920: mov ebp, ecx */
  ebp = ecx;
/* ee4922: jge 0xee4938 */
  if ((sf == of)) goto L_ee4938;
L_ee4924: /* ee4924: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ee4929: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee492e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ee4933: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee4935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4935: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee4938: /* ee4938: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee493b: jle 0xee4951 */
  if ((zf || sf != of)) goto L_ee4951;
L_ee493d: /* ee493d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ee4942: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee4947: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ee494c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee494eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee494e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee4951: /* ee4951: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ee4955: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ee4958: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee495b: jle 0xee4971 */
  if ((zf || sf != of)) goto L_ee4971;
L_ee495d: /* ee495d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ee4962: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ee4967: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ee496c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee496eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee496e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee4971: /* ee4971: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4973: jge 0xee4990 */
  if ((sf == of)) goto L_ee4990;
L_ee4975: /* ee4975: mov esi, ebx */
  esi = ebx;
/* ee4977: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* ee497a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ee497c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ee4980: /* ee4980: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ee4983: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee4985: call 0xed10c3 */
  esp -= 4; W32(esp, 0xee498au); SPILL(); f_ed10c3(); if (g_unwind) return; RELOAD();
/* ee498a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee498d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ee498e: jne 0xee4980 */
  if (!zf) goto L_ee4980;
L_ee4990: /* ee4990: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ee4994: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee4996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4997: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4998: mov ecx, ebp */
  ecx = ebp;
/* ee499a: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xee49a0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ee49a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee49a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee49a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee49a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee49a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee49e0(void) {
  LOAD_REGS();
L_ee49e0: /* ee49e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee49e2: push 0xeef099 */
  { uint32_t v = 0xeef099u; esp -= 4; W32(esp, v); }
/* ee49e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee49ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee49ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee49f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee49f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee49f7: mov esi, ecx */
  esi = ecx;
/* ee49f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee49fd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee4a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4a01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4a03: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ee4a0b: call 0xed187a */
  esp -= 4; W32(esp, 0xee4a10u); SPILL(); f_ed187a(); if (g_unwind) return; RELOAD();
/* ee4a10: mov ecx, esi */
  ecx = esi;
/* ee4a12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee4a1a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xee4a20u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ee4a20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee4a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4a25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4a2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4a2f: ret  */
  esp += 4; SPILL(); return;
}

void f_ee4a50(void) {
  LOAD_REGS();
L_ee4a50: /* ee4a50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4a51: mov ebp, esp */
  ebp = esp;
/* ee4a53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4a55: push 0xeef0b9 */
  { uint32_t v = 0xeef0b9u; esp -= 4; W32(esp, v); }
/* ee4a5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee4a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4a61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee4a68: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee4a6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4a6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4a6d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee4a70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4a71: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ee4a74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee4a77: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee4a79: xor ebx, ebx */
  ebx = 0;
/* ee4a7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4a7c: mov ecx, esi */
  ecx = esi;
/* ee4a7e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee4a81: call dword ptr [0xf0db30] */
  esp -= 4; W32(esp, 0xee4a87u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* ee4a87: cmp dword ptr [edi + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4a8a: je 0xee4b24 */
  if (zf) goto L_ee4b24;
L_ee4a90: /* ee4a90: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee4a93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4a94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4a95: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee4a9bu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee4a9b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4a9e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4aa2: mov ecx, esi */
  ecx = esi;
/* ee4aa4: call 0xed12f3 */
  esp -= 4; W32(esp, 0xee4aa9u); SPILL(); f_ed12f3(); if (g_unwind) return; RELOAD();
/* ee4aa9: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee4aac: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
L_ee4ab2: /* ee4ab2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee4ab5: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4ab8: jge 0xee4b81 */
  if ((sf == of)) goto L_ee4b81;
L_ee4abe: /* ee4abe: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee4ac0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee4ac2: mov ecx, esi */
  ecx = esi;
/* ee4ac4: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee4acau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee4aca: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* ee4acd: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ee4acf: mov esi, eax */
  esi = eax;
/* ee4ad1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* ee4ad4: je 0xee4af1 */
  if (zf) goto L_ee4af1;
L_ee4ad6: /* ee4ad6: mov ecx, esi */
  ecx = esi;
/* ee4ad8: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee4adeu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee4ade: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee4ae1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee4ae5: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee4aebu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee4aeb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee4aef: jmp 0xee4af3 */
  goto L_ee4af3;
L_ee4af1: /* ee4af1: xor esi, esi */
  esi = 0;
L_ee4af3: /* ee4af3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee4af6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4af7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4af8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee4afau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4afa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4afd: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee4b00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b02: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee4b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4b04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b07: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee4b0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b0c: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee4b12u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee4b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee4b15: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee4b18: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ee4b1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee4b1f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee4b22: jmp 0xee4ab2 */
  goto L_ee4ab2;
L_ee4b24: /* ee4b24: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* ee4b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4b29: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xee4b2fu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ee4b2f: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
/* ee4b35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b38: xor edi, edi */
  edi = 0;
/* ee4b3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ee4b40: /* ee4b40: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee4b43: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4b45: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* ee4b48: jge 0xee4b7e */
  if ((sf == of)) goto L_ee4b7e;
L_ee4b4a: /* ee4b4a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee4b4d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ee4b4f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee4b52: mov esi, edi */
  esi = edi;
/* ee4b54: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* ee4b57: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee4b59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b5b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee4b5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4b5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b60: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ee4b63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b65: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee4b67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4b67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b6a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee4b6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4b6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4b6f: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee4b75u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee4b75: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ee4b78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4b7b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee4b7c: jmp 0xee4b40 */
  goto L_ee4b40;
L_ee4b7e: /* ee4b7e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_ee4b81: /* ee4b81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee4b84: mov eax, edi */
  eax = edi;
/* ee4b86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4b87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4b88: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4b8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee4b90: mov esp, ebp */
  esp = ebp;
/* ee4b92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee4b93: ret  */
  esp += 4; SPILL(); return;
}

void f_ee4b94(void) {
  LOAD_REGS();
L_ee4b94: /* ee4b94: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee4b97: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee4b9c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee4b9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4ba0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ee4ba3: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4ba8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee4ba8(); return;
}

void f_ee4ba8(void) {
  LOAD_REGS();
L_ee4ba8: /* ee4ba8: push 0xef683c */
  { uint32_t v = 0xef683cu; esp -= 4; W32(esp, v); }
/* ee4bad: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee4bb2: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4bb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4bb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4bbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4bbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4bbf: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4bc4u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee4bc4: guest_badaddr(0xee4bc4); return;
}

void f_ee4c30(void) {
  LOAD_REGS();
L_ee4c30: /* ee4c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4c31: mov esi, ecx */
  esi = ecx;
/* ee4c33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee4c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4c37: xor edi, edi */
  edi = 0;
/* ee4c39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4c3b: jle 0xee4c55 */
  if ((zf || sf != of)) goto L_ee4c55;
L_ee4c3d: /* ee4c3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4c3e: xor ebx, ebx */
  ebx = 0;
L_ee4c40: /* ee4c40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee4c42: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee4c44: call 0xed10c3 */
  esp -= 4; W32(esp, 0xee4c49u); SPILL(); f_ed10c3(); if (g_unwind) return; RELOAD();
/* ee4c49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee4c4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee4c4d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ee4c50: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4c52: jl 0xee4c40 */
  if ((sf != of)) goto L_ee4c40;
L_ee4c54: /* ee4c54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ee4c55: /* ee4c55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ee4c59: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ee4c5b: mov ecx, esi */
  ecx = esi;
/* ee4c5d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ee4c64: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ee4c67: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xee4c6du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ee4c6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4c6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4c6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee4ca0(void) {
  LOAD_REGS();
L_ee4ca0: /* ee4ca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4ca1: mov esi, ecx */
  esi = ecx;
/* ee4ca3: call 0xed10a0 */
  esp -= 4; W32(esp, 0xee4ca8u); SPILL(); f_ed10a0(); if (g_unwind) return; RELOAD();
/* ee4ca8: mov ecx, esi */
  ecx = esi;
/* ee4caa: call 0xed1019 */
  esp -= 4; W32(esp, 0xee4cafu); SPILL(); f_ed1019(); if (g_unwind) return; RELOAD();
/* ee4caf: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* ee4cb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4cb4: je 0xee4d1f */
  if (zf) goto L_ee4d1f;
L_ee4cb6: /* ee4cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4cb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4cb8: xor edi, edi */
  edi = 0;
/* ee4cba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4cbc: jle 0xee4cde */
  if ((zf || sf != of)) goto L_ee4cde;
L_ee4cbe: /* ee4cbe: xor ebx, ebx */
  ebx = 0;
L_ee4cc0: /* ee4cc0: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* ee4cc3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee4cc5: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee4ccbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee4ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4ccc: mov ecx, esi */
  ecx = esi;
/* ee4cce: call 0xed1078 */
  esp -= 4; W32(esp, 0xee4cd3u); SPILL(); f_ed1078(); if (g_unwind) return; RELOAD();
/* ee4cd3: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* ee4cd6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee4cd7: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ee4cda: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4cdc: jl 0xee4cc0 */
  if ((sf != of)) goto L_ee4cc0;
L_ee4cde: /* ee4cde: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* ee4ce1: add esi, 0x78 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee4ce4: xor edi, edi */
  edi = 0;
/* ee4ce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4ce8: jle 0xee4d05 */
  if ((zf || sf != of)) goto L_ee4d05;
L_ee4cea: /* ee4cea: xor ebx, ebx */
  ebx = 0;
/* ee4cec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ee4cf0: /* ee4cf0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee4cf2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee4cf4: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4cfau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4cfa: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ee4cfd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ee4cfe: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ee4d01: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4d03: jl 0xee4cf0 */
  if ((sf != of)) goto L_ee4cf0;
L_ee4d05: /* ee4d05: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ee4d07: mov ecx, esi */
  ecx = esi;
/* ee4d09: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ee4d10: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* ee4d17: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xee4d1du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ee4d1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4d1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ee4d1f: /* ee4d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4d20: ret  */
  esp += 4; SPILL(); return;
}

void f_ee4d60(void) {
  LOAD_REGS();
L_ee4d60: /* ee4d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4d61: mov ebp, esp */
  ebp = esp;
/* ee4d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4d65: push 0xeef0d0 */
  { uint32_t v = 0xeef0d0u; esp -= 4; W32(esp, v); }
/* ee4d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee4d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee4d78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee4d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4d7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4d7d: mov esi, ecx */
  esi = ecx;
/* ee4d7f: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee4d82: mov byte ptr [ebp - 0x11], 4 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x4u);
/* ee4d86: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* ee4d8d: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* ee4d93: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* ee4d96: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4d98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4d99: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee4d9c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee4da3: je 0xee4dd5 */
  if (zf) goto L_ee4dd5;
L_ee4da5: /* ee4da5: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* ee4da8: mov edx, dword ptr [0xf0dd88] */
  edx = R32((uint32_t)(0xf0dd88u));
/* ee4dae: mov edi, edi */
  edi = edi;
L_ee4db0: /* ee4db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4db2: je 0xee4dbd */
  if (zf) goto L_ee4dbd;
L_ee4db4: /* ee4db4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4db6: je 0xee4dc8 */
  if (zf) goto L_ee4dc8;
L_ee4db8: /* ee4db8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ee4dbb: jmp 0xee4db0 */
  goto L_ee4db0;
L_ee4dbd: /* ee4dbd: xor eax, eax */
  eax = 0;
/* ee4dbf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4dc1: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee4dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4dc6: je 0xee4dd5 */
  if (zf) goto L_ee4dd5;
L_ee4dc8: /* ee4dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee4dca: je 0xee4dd5 */
  if (zf) goto L_ee4dd5;
L_ee4dcc: /* ee4dcc: call dword ptr [0xf0e020] */
  esp -= 4; W32(esp, 0xee4dd2u); SPILL(); f_6c3945(); if (g_unwind) return; /* Engine!?PackageRevisionLevel@UGameEngine@@QAEHXZ */ RELOAD();
/* ee4dd2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_ee4dd5: /* ee4dd5: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* ee4dd8: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* ee4ddb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee4ddc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4ddd: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee4de3u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee4de3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4de6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee4de9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4deb: call dword ptr [0xf0dbf4] */
  esp -= 4; W32(esp, 0xee4df1u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* ee4df1: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ee4df4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee4df6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4df9: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee4dfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4dfc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee4dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee4e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee4e01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee4e08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee4e09: mov esp, ebp */
  esp = ebp;
/* ee4e0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee4e0c: ret  */
  esp += 4; SPILL(); return;
}

void f_ee4e0d(void) {
  LOAD_REGS();
L_ee4e0d: /* ee4e0d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee4e10: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee4e15: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* ee4e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4e19: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee4e1c: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4e21u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee4e21(); return;
}

void f_ee4e21(void) {
  LOAD_REGS();
L_ee4e21: /* ee4e21: push 0xef6858 */
  { uint32_t v = 0xef6858u; esp -= 4; W32(esp, v); }
/* ee4e26: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee4e2b: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee4e31u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee4e31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee4e34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4e36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee4e38: call 0xeec520 */
  esp -= 4; W32(esp, 0xee4e3du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee4e3d: guest_badaddr(0xee4e3d); return;
}

void f_ee4e80(void) {
  LOAD_REGS();
L_ee4e80: /* ee4e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee4e81: mov ebp, esp */
  ebp = esp;
/* ee4e83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee4e85: push 0xeef0f1 */
  { uint32_t v = 0xeef0f1u; esp -= 4; W32(esp, v); }
/* ee4e8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee4e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4e91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee4e98: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee4e9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee4e9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee4e9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4e9e: xor edi, edi */
  edi = 0;
/* ee4ea0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee4ea3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee4ea6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee4ea9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee4eab: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ee4eae: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ee4eb1: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ee4eb4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee4eb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4eb9: jge 0xee4ec1 */
  if ((sf == of)) goto L_ee4ec1;
L_ee4ebb: /* ee4ebb: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee4ec1: /* ee4ec1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee4ec4: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ee4eca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4ecc: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ee4ecf: jge 0xee4ed7 */
  if ((sf == of)) goto L_ee4ed7;
L_ee4ed1: /* ee4ed1: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee4ed7: /* ee4ed7: mov edx, dword ptr [0xf0daf8] */
  edx = R32((uint32_t)(0xf0daf8u));
/* ee4edd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ee4edf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4ee2: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* ee4ee4: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ee4eea: fsub qword ptr [eax + 0x84] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x84u)));
/* ee4ef0: fcomp qword ptr [0xef6910] */
  fpu_com(ST0, F64((uint32_t)(0xef6910u)));
  FPOP();
/* ee4ef6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ee4ef8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee4efb: jne 0xee504b */
  if (!zf) goto L_ee504b;
L_ee4f01: /* ee4f01: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee4f03: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee4f06: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* ee4f09: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ee4f0c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee4f0f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4f11: jge 0xee4f19 */
  if ((sf == of)) goto L_ee4f19;
L_ee4f13: /* ee4f13: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee4f19: /* ee4f19: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee4f1c: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ee4f22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee4f24: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ee4f27: jge 0xee4f2f */
  if ((sf == of)) goto L_ee4f2f;
L_ee4f29: /* ee4f29: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee4f2f: /* ee4f2f: mov eax, dword ptr [0xf0daf8] */
  eax = R32((uint32_t)(0xf0daf8u));
/* ee4f34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ee4f36: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4f39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4f3a: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* ee4f3c: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ee4f42: fstp qword ptr [ecx + 0x84] */
  WF64((uint32_t)(ecx + 0x84u), ST0); FPOP();
/* ee4f48: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4f4b: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* ee4f4e: mov eax, dword ptr [0xf07d28] */
  eax = R32((uint32_t)(0xf07d28u));
/* ee4f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4f54: mov ecx, esi */
  ecx = esi;
/* ee4f56: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee4f5cu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee4f5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee4f5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4f5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee4f61: mov ecx, esi */
  ecx = esi;
/* ee4f63: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee4f66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4f66: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4f69: cmp dword ptr [ecx + 0x64], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x64u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4f6d: jne 0xee504b */
  if (!zf) goto L_ee504b;
L_ee4f73: /* ee4f73: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* ee4f76: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4f79: je 0xee4f84 */
  if (zf) goto L_ee4f84;
L_ee4f7b: /* ee4f7b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4f7e: jne 0xee504b */
  if (!zf) goto L_ee504b;
L_ee4f84: /* ee4f84: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* ee4f87: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* ee4f8a: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* ee4f8d: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* ee4f90: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* ee4f96: mov ebx, dword ptr [edx + 0x3c] */
  ebx = R32((uint32_t)(edx + 0x3cu));
/* ee4f99: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4f9b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee4f9f: je 0xee4ffb */
  if (zf) goto L_ee4ffb;
L_ee4fa1: /* ee4fa1: xor esi, esi */
  esi = 0;
L_ee4fa3: /* ee4fa3: cmp esi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee4fa6: jge 0xee4ffb */
  if ((sf == of)) goto L_ee4ffb;
L_ee4fa8: /* ee4fa8: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* ee4fab: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* ee4fae: cmp dword ptr [edx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee4fb1: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* ee4fb4: je 0xee4ff8 */
  if (zf) goto L_ee4ff8;
L_ee4fb6: /* ee4fb6: mov eax, edx */
  eax = edx;
/* ee4fb8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ee4fba: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee4fbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee4fbe: mov ecx, eax */
  ecx = eax;
/* ee4fc0: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xee4fc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee4fc3: mov edi, eax */
  edi = eax;
/* ee4fc5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee4fc7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ee4fc9: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee4fcc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee4fd0: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xee4fd6u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ee4fd6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* ee4fd9: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* ee4fdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee4fdd: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ee4fe0: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee4fe6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee4fe6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee4fe9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee4fed: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee4ff3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee4ff3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee4ff6: xor edi, edi */
  edi = 0;
L_ee4ff8: /* ee4ff8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee4ff9: jmp 0xee4fa3 */
  goto L_ee4fa3;
L_ee4ffb: /* ee4ffb: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* ee4ffe: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* ee5002: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* ee5005: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5007: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee500du); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee500d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5010: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee5013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5015: call 0xed18ac */
  esp -= 4; W32(esp, 0xee501au); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ee501a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee501d: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* ee5020: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5023: add ecx, 0x39c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee5029: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee502a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee502b: call dword ptr [0xf0dfb0] */
  esp -= 4; W32(esp, 0xee5031u); SPILL(); f_6c509c(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAUFServerResponseLine@@@Z */ RELOAD();
/* ee5031: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5034: mov ecx, dword ptr [edx + 0x4c] */
  ecx = R32((uint32_t)(edx + 0x4cu));
/* ee5037: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee5039: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee503c: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xee503fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee503f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee5042: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5046: call 0xed1569 */
  esp -= 4; W32(esp, 0xee504bu); SPILL(); f_ed1569(); if (g_unwind) return; RELOAD();
L_ee504b: /* ee504b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee504e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee504f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5050: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5057: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5058: mov esp, ebp */
  esp = ebp;
/* ee505a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee505b: ret  */
  esp += 4; SPILL(); return;
}

void f_ee505c(void) {
  LOAD_REGS();
L_ee505c: /* ee505c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee505f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5064: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* ee5067: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5068: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* ee506b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5070u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5070(); return;
}

void f_ee5070(void) {
  LOAD_REGS();
L_ee5070: /* ee5070: push 0xef68b0 */
  { uint32_t v = 0xef68b0u; esp -= 4; W32(esp, v); }
/* ee5075: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee507a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee5080u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee5080: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5083: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5085: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5087: call 0xeec520 */
  esp -= 4; W32(esp, 0xee508cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee508c: guest_badaddr(0xee508c); return;
}

void f_ee5120(void) {
  LOAD_REGS();
L_ee5120: /* ee5120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5121: mov ebp, esp */
  ebp = esp;
/* ee5123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5125: push 0xeef110 */
  { uint32_t v = 0xeef110u; esp -= 4; W32(esp, v); }
/* ee512a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee513b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee513e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee513f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5141: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5145: mov esi, ecx */
  esi = ecx;
/* ee5147: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee514e: call 0xed1375 */
  esp -= 4; W32(esp, 0xee5153u); SPILL(); f_ed1375(); if (g_unwind) return; RELOAD();
/* ee5153: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* ee5156: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5158: mov ebx, eax */
  ebx = eax;
/* ee515a: je 0xee5161 */
  if (zf) goto L_ee5161;
L_ee515c: /* ee515c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee515e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee5161u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee5161: /* ee5161: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* ee5164: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5166: je 0xee516d */
  if (zf) goto L_ee516d;
L_ee5168: /* ee5168: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee516a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xee516du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee516d: /* ee516d: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* ee5173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5175: je 0xee51ae */
  if (zf) goto L_ee51ae;
L_ee5177: /* ee5177: mov ecx, dword ptr [0xf07d54] */
  ecx = R32((uint32_t)(0xf07d54u));
/* ee517d: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* ee5180: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* ee5186: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5188: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5189: mov ecx, edi */
  ecx = edi;
/* ee518b: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ee518e: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee5194u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee5194: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ee5196: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5198: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* ee519b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee519c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee519d: mov ecx, edi */
  ecx = edi;
/* ee519f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee51a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee51a2: mov dword ptr [esi + 0x8c], 0 */
  W32((uint32_t)(esi + 0x8cu), 0x0u);
/* ee51ac: jmp 0xee51c3 */
  goto L_ee51c3;
L_ee51ae: /* ee51ae: mov ecx, esi */
  ecx = esi;
/* ee51b0: call 0xed1073 */
  esp -= 4; W32(esp, 0xee51b5u); SPILL(); f_ed1073(); if (g_unwind) return; RELOAD();
/* ee51b5: mov ecx, esi */
  ecx = esi;
/* ee51b7: call 0xed1019 */
  esp -= 4; W32(esp, 0xee51bcu); SPILL(); f_ed1019(); if (g_unwind) return; RELOAD();
/* ee51bc: mov ecx, esi */
  ecx = esi;
/* ee51be: call 0xed160e */
  esp -= 4; W32(esp, 0xee51c3u); SPILL(); f_ed160e(); if (g_unwind) return; RELOAD();
L_ee51c3: /* ee51c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee51c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee51c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee51c8: mov eax, ebx */
  eax = ebx;
/* ee51ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee51d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee51d2: mov esp, ebp */
  esp = ebp;
/* ee51d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee51d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee51d8(void) {
  LOAD_REGS();
L_ee51d8: /* ee51d8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee51db: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee51e0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee51e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee51e4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee51e7: call 0xeec520 */
  esp -= 4; W32(esp, 0xee51ecu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee51ec(); return;
}

void f_ee51ec(void) {
  LOAD_REGS();
L_ee51ec: /* ee51ec: push 0xef691c */
  { uint32_t v = 0xef691cu; esp -= 4; W32(esp, v); }
/* ee51f1: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee51f6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee51fcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee51fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee51ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5201: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5203: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5208u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee5208: guest_badaddr(0xee5208); return;
}

void f_ee5250(void) {
  LOAD_REGS();
L_ee5250: /* ee5250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5251: mov ebp, esp */
  ebp = esp;
/* ee5253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5255: push 0xeef120 */
  { uint32_t v = 0xeef120u; esp -= 4; W32(esp, v); }
/* ee525a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee526b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee526c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee526d: mov esi, ecx */
  esi = ecx;
/* ee526f: cmp dword ptr [esi + 0x64], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5274: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5277: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee527e: jne 0xee531c */
  if (!zf) goto L_ee531c;
L_ee5284: /* ee5284: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* ee5287: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee528a: je 0xee5295 */
  if (zf) goto L_ee5295;
L_ee528c: /* ee528c: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee528f: jne 0xee531c */
  if (!zf) goto L_ee531c;
L_ee5295: /* ee5295: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* ee5298: test byte ptr [eax + 0x40c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x40cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee529f: je 0xee531c */
  if (zf) goto L_ee531c;
L_ee52a1: /* ee52a1: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* ee52a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee52a9: je 0xee531c */
  if (zf) goto L_ee531c;
L_ee52ab: /* ee52ab: call 0xed19ab */
  esp -= 4; W32(esp, 0xee52b0u); SPILL(); f_ed19ab(); if (g_unwind) return; RELOAD();
/* ee52b0: fsub qword ptr [esi + 0x98] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x98u)));
/* ee52b6: fild dword ptr [esi + 0x94] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* ee52bc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* ee52be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ee52c0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ee52c3: jp 0xee531c */
  if (pf) goto L_ee531c;
L_ee52c5: /* ee52c5: call 0xed19ab */
  esp -= 4; W32(esp, 0xee52cau); SPILL(); f_ed19ab(); if (g_unwind) return; RELOAD();
/* ee52ca: fstp qword ptr [esi + 0x98] */
  WF64((uint32_t)(esi + 0x98u), ST0); FPOP();
/* ee52d0: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* ee52d6: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* ee52d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee52db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee52dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee52de: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ee52e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee52e5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xee52e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee52e8: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* ee52ee: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* ee52f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee52f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee52f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee52f6: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ee52fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee52fd: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xee5300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5300: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* ee5303: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5305: je 0xee531c */
  if (zf) goto L_ee531c;
L_ee5307: /* ee5307: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* ee530d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee530f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5312: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ee5318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5319: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xee531cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee531c: /* ee531c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee531f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5321: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5328: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5329: mov esp, ebp */
  esp = ebp;
/* ee532b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee532c: ret  */
  esp += 4; SPILL(); return;
}

void f_ee532d(void) {
  LOAD_REGS();
L_ee532d: /* ee532d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5330: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5335: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee5338: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5339: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee533c: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5341u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5341(); return;
}

void f_ee5341(void) {
  LOAD_REGS();
L_ee5341: /* ee5341: push 0xef6968 */
  { uint32_t v = 0xef6968u; esp -= 4; W32(esp, v); }
/* ee5346: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee534b: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee5351u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee5351: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5358: call 0xeec520 */
  esp -= 4; W32(esp, 0xee535du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee535d: guest_badaddr(0xee535d); return;
}

void f_ee53b0(void) {
  LOAD_REGS();
L_ee53b0: /* ee53b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee53b1: mov ebp, esp */
  ebp = esp;
/* ee53b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee53b5: push 0xeef154 */
  { uint32_t v = 0xeef154u; esp -= 4; W32(esp, v); }
/* ee53ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee53c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee53c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee53c8: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee53cb: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* ee53ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee53cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee53d0: xor ebx, ebx */
  ebx = 0;
/* ee53d2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee53d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee53d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee53d8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee53db: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee53de: je 0xee5581 */
  if (zf) goto L_ee5581;
L_ee53e4: /* ee53e4: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* ee53e7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* ee53ed: mov esi, dword ptr [ecx + 0x3c] */
  esi = R32((uint32_t)(ecx + 0x3cu));
/* ee53f0: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee53f2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* ee53f5: je 0xee5581 */
  if (zf) goto L_ee5581;
L_ee53fb: /* ee53fb: jmp 0xee5400 */
  goto L_ee5400;
L_ee5400: /* ee5400: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee5403: jge 0xee5581 */
  if ((sf == of)) goto L_ee5581;
L_ee5409: /* ee5409: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ee540c: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* ee540f: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee5414: add ecx, 0xec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee541a: call dword ptr [0xf0dc14] */
  esp -= 4; W32(esp, 0xee5420u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* ee5420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5422: je 0xee554b */
  if (zf) goto L_ee554b;
L_ee5428: /* ee5428: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* ee542b: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ee542e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee5430: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* ee5433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5434: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xee5437u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5437: mov edi, eax */
  edi = eax;
/* ee5439: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee543d: xor esi, esi */
  esi = 0;
/* ee543f: nop  */
L_ee5440: /* ee5440: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5443: cmp esi, dword ptr [eax + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee5446: jge 0xee545f */
  if ((sf == of)) goto L_ee545f;
L_ee5448: /* ee5448: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* ee544b: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* ee544e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee544f: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* ee5452: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xee5458u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* ee5458: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee545a: jne 0xee5462 */
  if (!zf) goto L_ee5462;
L_ee545c: /* ee545c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee545d: jmp 0xee5440 */
  goto L_ee5440;
L_ee545f: /* ee545f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_ee5462: /* ee5462: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ee5465: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5469: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee546fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee546f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5472: je 0xee5548 */
  if (zf) goto L_ee5548;
L_ee5478: /* ee5478: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee547b: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* ee547e: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee5481: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* ee5484: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ee5487: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ee548a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee548b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee548e: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* ee5492: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee5498u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee5498: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee549b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* ee549e: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* ee54a1: add edx, 0xe0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee54a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54a8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee54ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee54af: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee54b5u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee54b5: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* ee54b8: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ee54bb: add ecx, 0xec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee54c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54c2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee54c5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee54c9: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee54cfu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee54cf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee54d2: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* ee54d5: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* ee54d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54da: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee54de: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee54e4u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee54e4: mov edi, dword ptr [0xf0dbf8] */
  edi = R32((uint32_t)(0xf0dbf8u));
/* ee54ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee54ed: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* ee54f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee54f2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee54f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee54f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee54f7: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee54fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee54fc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee54feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee54fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5501: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* ee5504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5506: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5508u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5508: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee550b: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* ee550e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee5510: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5513: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee5516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5516: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee5519: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee551b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee551c: call 0xed1636 */
  esp -= 4; W32(esp, 0xee5521u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee5521: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee5524: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee5528: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee552eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee552e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee5531: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee5535: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee553bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee553b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee553e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5542: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee5548u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee5548: /* ee5548: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_ee554b: /* ee554b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee554c: jmp 0xee5400 */
  goto L_ee5400;
L_ee5581: /* ee5581: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5584: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5585: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5586: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee558d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee558e: mov esp, ebp */
  esp = ebp;
/* ee5590: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5591: ret  */
  esp += 4; SPILL(); return;
}

void f_ee53fd(void) {
  LOAD_REGS();
L_ee53fd: /* ee53fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ee5400: /* ee5400: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee5403: jge 0xee5581 */
  if ((sf == of)) goto L_ee5581;
L_ee5409: /* ee5409: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ee540c: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* ee540f: push 0xf076cc */
  { uint32_t v = 0xf076ccu; esp -= 4; W32(esp, v); }
/* ee5414: add ecx, 0xec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee541a: call dword ptr [0xf0dc14] */
  esp -= 4; W32(esp, 0xee5420u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* ee5420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5422: je 0xee554b */
  if (zf) goto L_ee554b;
L_ee5428: /* ee5428: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* ee542b: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ee542e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee5430: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* ee5433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5434: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xee5437u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5437: mov edi, eax */
  edi = eax;
/* ee5439: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee543d: xor esi, esi */
  esi = 0;
/* ee543f: nop  */
L_ee5440: /* ee5440: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5443: cmp esi, dword ptr [eax + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee5446: jge 0xee545f */
  if ((sf == of)) goto L_ee545f;
L_ee5448: /* ee5448: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* ee544b: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* ee544e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee544f: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* ee5452: call dword ptr [0xf0dc78] */
  esp -= 4; W32(esp, 0xee5458u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* ee5458: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee545a: jne 0xee5462 */
  if (!zf) goto L_ee5462;
L_ee545c: /* ee545c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee545d: jmp 0xee5440 */
  goto L_ee5440;
L_ee545f: /* ee545f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_ee5462: /* ee5462: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ee5465: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5469: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee546fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee546f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5472: je 0xee5548 */
  if (zf) goto L_ee5548;
L_ee5478: /* ee5478: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee547b: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* ee547e: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee5481: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* ee5484: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ee5487: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ee548a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee548b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee548e: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* ee5492: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee5498u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee5498: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee549b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* ee549e: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* ee54a1: add edx, 0xe0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee54a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54a8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee54ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee54af: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee54b5u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee54b5: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* ee54b8: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ee54bb: add ecx, 0xec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee54c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54c2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee54c5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee54c9: call dword ptr [0xf0dae0] */
  esp -= 4; W32(esp, 0xee54cfu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* ee54cf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee54d2: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* ee54d5: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* ee54d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54da: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee54de: call dword ptr [0xf0dbfc] */
  esp -= 4; W32(esp, 0xee54e4u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* ee54e4: mov edi, dword ptr [0xf0dbf8] */
  edi = R32((uint32_t)(0xf0dbf8u));
/* ee54ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee54ed: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* ee54f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee54f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee54f2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee54f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee54f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee54f7: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee54fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee54fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee54fc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee54feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee54fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5501: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* ee5504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5506: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5508u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5508: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee550b: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* ee550e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee5510: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5513: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xee5516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5516: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee5519: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee551b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee551c: call 0xed1636 */
  esp -= 4; W32(esp, 0xee5521u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ee5521: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee5524: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee5528: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee552eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee552e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ee5531: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee5535: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee553bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee553b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee553e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5542: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee5548u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee5548: /* ee5548: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_ee554b: /* ee554b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee554c: jmp 0xee5400 */
  goto L_ee5400;
L_ee5581: /* ee5581: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5584: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5585: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5586: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee558d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee558e: mov esp, ebp */
  esp = ebp;
/* ee5590: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5591: ret  */
  esp += 4; SPILL(); return;
}

void f_ee5551(void) {
  LOAD_REGS();
L_ee5551: /* ee5551: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee5554: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5559: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee555c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee555d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* ee5560: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5565u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5565(); return;
}

void f_ee5565(void) {
  LOAD_REGS();
L_ee5565: /* ee5565: push 0xef69d8 */
  { uint32_t v = 0xef69d8u; esp -= 4; W32(esp, v); }
/* ee556a: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ee556f: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee5575u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee5575: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5578: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee557a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee557c: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5581u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee5581: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5584: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5585: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5586: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee558d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee558e: mov esp, ebp */
  esp = ebp;
/* ee5590: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5591: ret  */
  esp += 4; SPILL(); return;
}

void f_ee5620(void) {
  LOAD_REGS();
L_ee5620: /* ee5620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee5621: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5622: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ee5626: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ee562a: xor eax, eax */
  eax = 0;
/* ee562c: mov ebx, ecx */
  ebx = ecx;
/* ee562e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee5631: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ee5634: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ee5636: mov ecx, ebx */
  ecx = ebx;
/* ee5638: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ee563a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee563b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee563c: ret  */
  esp += 4; SPILL(); return;
}

void f_ee5650(void) {
  LOAD_REGS();
L_ee5650: /* ee5650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5653: mov esi, ecx */
  esi = ecx;
/* ee5655: call dword ptr [0xf0dd54] */
  esp -= 4; W32(esp, 0xee565bu); SPILL(); f_6c9778(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@W4ENoInit@@@Z */ RELOAD();
/* ee565b: mov eax, esi */
  eax = esi;
/* ee565d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee565e: ret  */
  esp += 4; SPILL(); return;
}

void f_ee5670(void) {
  LOAD_REGS();
L_ee5670: /* ee5670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5672: push 0xeef186 */
  { uint32_t v = 0xeef186u; esp -= 4; W32(esp, v); }
/* ee5677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee567d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee567e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5685: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee5688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5689: mov esi, ecx */
  esi = ecx;
/* ee568b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee568f: call 0xed15fa */
  esp -= 4; W32(esp, 0xee5694u); SPILL(); f_ed15fa(); if (g_unwind) return; RELOAD();
/* ee5694: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* ee569a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee569c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ee56a4: mov dword ptr [esi], 0xef4a48 */
  W32((uint32_t)(esi), 0xef4a48u);
/* ee56aa: call dword ptr [0xf0dd54] */
  esp -= 4; W32(esp, 0xee56b0u); SPILL(); f_6c9778(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@W4ENoInit@@@Z */ RELOAD();
/* ee56b0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ee56b4: mov byte ptr [esi + 0x358], 0 */
  W8((uint32_t)(esi + 0x358u), 0x0u);
/* ee56bb: mov eax, esi */
  eax = esi;
/* ee56bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee56be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee56c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee56c8: ret  */
  esp += 4; SPILL(); return;
}

void f_ee56f0(void) {
  LOAD_REGS();
L_ee56f0: /* ee56f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee56f1: mov esi, ecx */
  esi = ecx;
/* ee56f3: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee56f9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee56fc: je 0xee5704 */
  if (zf) goto L_ee5704;
L_ee56fe: /* ee56fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee56ff: call 0xeebbac */
  esp -= 4; W32(esp, 0xee5704u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
L_ee5704: /* ee5704: mov esi, dword ptr [esi + 0x348] */
  esi = R32((uint32_t)(esi + 0x348u));
/* ee570a: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee570d: je 0xee5715 */
  if (zf) goto L_ee5715;
L_ee570f: /* ee570f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5710: call 0xeebbac */
  esp -= 4; W32(esp, 0xee5715u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
L_ee5715: /* ee5715: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5716: ret  */
  esp += 4; SPILL(); return;
}

void f_ee5730(void) {
  LOAD_REGS();
L_ee5730: /* ee5730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5731: mov ebp, esp */
  ebp = esp;
/* ee5733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5735: push 0xeef1a0 */
  { uint32_t v = 0xeef1a0u; esp -= 4; W32(esp, v); }
/* ee573a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5748: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee574b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee574c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee574d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5750: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee5753: xor ebx, ebx */
  ebx = 0;
/* ee5755: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee5758: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee575b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee575c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee575d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee5760: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5763: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee5766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5767: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee576c: mov edi, ecx */
  edi = ecx;
/* ee576e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5772: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee5775: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee5778u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5778: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee577b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee577e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ee5781: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee5784: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5785: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee5788: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee578b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee578c: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee5791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5792: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee5795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5795: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee5798: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5799: mov eax, edx */
  eax = edx;
/* ee579b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee579e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee57a1: jne 0xee57b8 */
  if (!zf) goto L_ee57b8;
L_ee57a3: /* ee57a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee57a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee57a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee57a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee57ab: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee57b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee57b2: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee57b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee57b8: /* ee57b8: cmp dword ptr [0xf0a330], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0a330u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee57be: je 0xee590c */
  if (zf) goto L_ee590c;
L_ee57c4: /* ee57c4: cmp dword ptr [edi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee57cb: jne 0xee58e5 */
  if (!zf) goto L_ee58e5;
L_ee57d1: /* ee57d1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ee57d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee57d5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee57d7: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xee57dcu); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* ee57dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee57de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee57df: mov dword ptr [edi + 0x340], eax */
  W32((uint32_t)(edi + 0x340u), eax);
/* ee57e5: call 0xed128a */
  esp -= 4; W32(esp, 0xee57eau); SPILL(); f_ed128a(); if (g_unwind) return; RELOAD();
/* ee57ea: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ee57f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee57f3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee57f6: je 0xee58ac */
  if (zf) goto L_ee58ac;
L_ee57fc: /* ee57fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee57fd: mov word ptr [ebp - 0x30], 2 */
  W16((uint32_t)(ebp + 0xffffffd0u), 0x2u);
/* ee5803: call 0xed15a5 */
  esp -= 4; W32(esp, 0xee5808u); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* ee5808: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ee580b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee580e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5811: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5812: call 0xeebbca */
  esp -= 4; W32(esp, 0xee5817u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* ee5817: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee581a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* ee581c: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ee581e: and ecx, 0x13 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ee5821: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee5823: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ee5824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5825: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* ee5828: mov word ptr [ebp - 0x2e], ax */
  W16((uint32_t)(ebp + 0xffffffd2u), (eax & 0xffffu));
/* ee582c: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ee5832: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5834: call 0xed13f2 */
  esp -= 4; W32(esp, 0xee5839u); SPILL(); f_ed13f2(); if (g_unwind) return; RELOAD();
/* ee5839: mov ebx, eax */
  ebx = eax;
/* ee583b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee583e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5840: je 0xee5899 */
  if (zf) goto L_ee5899;
L_ee5842: /* ee5842: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* ee5848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5849: call 0xed17ee */
  esp -= 4; W32(esp, 0xee584eu); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* ee584e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5851: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5853: je 0xee5886 */
  if (zf) goto L_ee5886;
L_ee5855: /* ee5855: mov edx, dword ptr [ebp - 0x2e] */
  edx = R32((uint32_t)(ebp + 0xffffffd2u));
/* ee5858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5859: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee585eu); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee585e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5861: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* ee5864: mov dword ptr [edi + 0x344], eax */
  W32((uint32_t)(edi + 0x344u), eax);
/* ee586a: mov byte ptr [edi + 0x358], 1 */
  W8((uint32_t)(edi + 0x358u), 0x1u);
/* ee5871: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee5873: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5876: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee587d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee587e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee587f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5880: mov esp, ebp */
  esp = ebp;
/* ee5882: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5883: ret 8 */
  esp += 12; SPILL(); return;
L_ee5886: /* ee5886: push 0xf04aa8 */
  { uint32_t v = 0xf04aa8u; esp -= 4; W32(esp, v); }
/* ee588b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee588c: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee5892u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee5892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5895: xor ebx, ebx */
  ebx = 0;
/* ee5897: jmp 0xee58bb */
  goto L_ee58bb;
L_ee5899: /* ee5899: push 0xf04af4 */
  { uint32_t v = 0xf04af4u; esp -= 4; W32(esp, v); }
/* ee589e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee589f: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee58a5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee58a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee58a8: xor ebx, ebx */
  ebx = 0;
/* ee58aa: jmp 0xee58bb */
  goto L_ee58bb;
L_ee58ac: /* ee58ac: push 0xf04b20 */
  { uint32_t v = 0xf04b20u; esp -= 4; W32(esp, v); }
/* ee58b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee58b2: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee58b8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee58b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee58bb: /* ee58bb: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* ee58c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee58c2: call 0xeebbac */
  esp -= 4; W32(esp, 0xee58c7u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* ee58c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee58ca: mov dword ptr [edi + 0x340], ebx */
  W32((uint32_t)(edi + 0x340u), ebx);
/* ee58d0: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ee58d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee58d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee58dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee58dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee58de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee58df: mov esp, ebp */
  esp = ebp;
/* ee58e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee58e2: ret 8 */
  esp += 12; SPILL(); return;
L_ee58e5: /* ee58e5: push 0xf04b50 */
  { uint32_t v = 0xf04b50u; esp -= 4; W32(esp, v); }
/* ee58ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee58eb: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee58f1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee58f1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee58f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee58f7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ee58f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee58fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5905: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5906: mov esp, ebp */
  esp = ebp;
/* ee5908: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5909: ret 8 */
  esp += 12; SPILL(); return;
L_ee590c: /* ee590c: push 0xf04b80 */
  { uint32_t v = 0xf04b80u; esp -= 4; W32(esp, v); }
/* ee5911: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5912: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee5918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee5918: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee591b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee591e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5922: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ee5924: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5925: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee592c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee592d: mov esp, ebp */
  esp = ebp;
/* ee592f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5930: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5933(void) {
  LOAD_REGS();
L_ee5933: /* ee5933: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee5936: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee593b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* ee593e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee593f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ee5942: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5947u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5947(); return;
}

void f_ee5947(void) {
  LOAD_REGS();
L_ee5947: /* ee5947: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee594d: push 0xef6a54 */
  { uint32_t v = 0xef6a54u; esp -= 4; W32(esp, v); }
/* ee5952: push 0xf04bb4 */
  { uint32_t v = 0xf04bb4u; esp -= 4; W32(esp, v); }
/* ee5957: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5959: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee595c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee595f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee5962: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* ee5965: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee596b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee596e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ee5970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5973: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5975: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5978: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5979: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee597b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee597du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee597d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee597e: push 0xf04bbc */
  { uint32_t v = 0xf04bbcu; esp -= 4; W32(esp, v); }
/* ee5983: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5985u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5985: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee598a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee598c: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5991u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee5991: guest_badaddr(0xee5991); return;
}

void f_ee5a40(void) {
  LOAD_REGS();
L_ee5a40: /* ee5a40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5a41: mov ebp, esp */
  ebp = esp;
/* ee5a43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5a45: push 0xeef1b0 */
  { uint32_t v = 0xeef1b0u; esp -= 4; W32(esp, v); }
/* ee5a4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5a51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5a58: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee5a5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee5a61: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* ee5a64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee5a65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5a66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5a67: xor edi, edi */
  edi = 0;
/* ee5a69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5a6a: mov esi, ecx */
  esi = ecx;
/* ee5a6c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee5a6f: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5a72: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5a75: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee5a78: jne 0xee5a8e */
  if (!zf) goto L_ee5a8e;
L_ee5a7a: /* ee5a7a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ee5a7d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5a7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5a7f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee5a82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5a83: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee5a88: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xee5a8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee5a8e: /* ee5a8e: mov al, byte ptr [esi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x358u))) & 0xffu);
/* ee5a94: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee5a96: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* ee5a99: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ee5a9c: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5aa2: /* ee5aa2: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5aa4: jne 0xee5b64 */
  if (!zf) goto L_ee5b64;
L_ee5aaa: /* ee5aaa: cmp dword ptr [esi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ab1: je 0xee5b64 */
  if (zf) goto L_ee5b64;
L_ee5ab7: /* ee5ab7: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* ee5abd: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee5ac0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5ac1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5ac2: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* ee5ac8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5ac9: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* ee5acf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5ad0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5ad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5ad2: mov dword ptr [ebp - 0x124], 1 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x1u);
/* ee5adc: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee5ae1u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee5ae1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ae4: je 0xee5b64 */
  if (zf) goto L_ee5b64;
L_ee5ae6: /* ee5ae6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ae8: je 0xee5b64 */
  if (zf) goto L_ee5b64;
L_ee5aea: /* ee5aea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee5aed: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* ee5af3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5af6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5afd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5afe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5aff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5b00: mov esp, ebp */
  esp = ebp;
/* ee5b02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5b03: ret 8 */
  esp += 12; SPILL(); return;
L_ee5b64: /* ee5b64: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee5b6a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b6d: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b6f: /* ee5b6f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee5b72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5b74: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* ee5b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5b7b: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* ee5b81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5b82: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5b83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5b84: mov dword ptr [ebp - 0x124], 1 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x1u);
/* ee5b8e: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee5b93u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee5b93: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b96: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b98: /* ee5b98: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b9a: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b9c: /* ee5b9c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5b9f: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* ee5ba5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5ba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5baf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5bb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5bb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5bb2: mov esp, ebp */
  esp = ebp;
/* ee5bb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5bb5: ret 8 */
  esp += 12; SPILL(); return;
L_ee5bb8: /* ee5bb8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5bbb: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* ee5bbd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5bc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5bc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5bc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5bc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5bca: mov esp, ebp */
  esp = ebp;
/* ee5bcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5bcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5b06(void) {
  LOAD_REGS();
L_ee5b06: /* ee5b06: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee5b09: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5b0e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* ee5b11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5b12: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ee5b15: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5b1au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5b1a(); return;
}

void f_ee5b1a(void) {
  LOAD_REGS();
L_ee5b1a: /* ee5b1a: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee5b20: push 0xef6a8c */
  { uint32_t v = 0xef6a8cu; esp -= 4; W32(esp, v); }
/* ee5b25: push 0xf04be0 */
  { uint32_t v = 0xf04be0u; esp -= 4; W32(esp, v); }
/* ee5b2a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5b2c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5b2f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee5b32: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee5b35: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* ee5b38: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee5b3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5b41: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ee5b43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5b44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5b46: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5b48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5b48: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5b4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5b4e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5b50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5b51: push 0xf04be8 */
  { uint32_t v = 0xf04be8u; esp -= 4; W32(esp, v); }
/* ee5b56: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5b58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5b58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5b5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5b5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5b5f: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5b64u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee5b64: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee5b6a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b6d: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b6f: /* ee5b6f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee5b72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5b74: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* ee5b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5b7b: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* ee5b81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5b82: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5b83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5b84: mov dword ptr [ebp - 0x124], 1 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x1u);
/* ee5b8e: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee5b93u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee5b93: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b96: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b98: /* ee5b98: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5b9a: je 0xee5bb8 */
  if (zf) goto L_ee5bb8;
L_ee5b9c: /* ee5b9c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5b9f: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* ee5ba5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5ba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5baf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5bb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5bb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5bb2: mov esp, ebp */
  esp = ebp;
/* ee5bb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5bb5: ret 8 */
  esp += 12; SPILL(); return;
L_ee5bb8: /* ee5bb8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5bbb: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* ee5bbd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5bc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5bc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5bc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5bc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5bca: mov esp, ebp */
  esp = ebp;
/* ee5bcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5bcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5c40(void) {
  LOAD_REGS();
L_ee5c40: /* ee5c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5c41: mov ebp, esp */
  ebp = esp;
/* ee5c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5c45: push 0xeef1c0 */
  { uint32_t v = 0xeef1c0u; esp -= 4; W32(esp, v); }
/* ee5c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5c58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee5c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee5c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5c5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5c60: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee5c63: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5c64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5c65: mov eax, edx */
  eax = edx;
/* ee5c67: mov edi, ecx */
  edi = ecx;
/* ee5c69: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee5c6c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5c6f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5c72: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5c79: jne 0xee5c90 */
  if (!zf) goto L_ee5c90;
L_ee5c7b: /* ee5c7b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5c7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5c7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5c81: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee5c84: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee5c89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5c8a: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xee5c90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee5c90: /* ee5c90: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee5c95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5c97: je 0xee5dac */
  if (zf) goto L_ee5dac;
L_ee5c9d: /* ee5c9d: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ee5ca3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ca6: je 0xee5dac */
  if (zf) goto L_ee5dac;
L_ee5cac: /* ee5cac: mov cl, byte ptr [edi + 0x358] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* ee5cb2: cmp cl, 7 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5cb5: je 0xee5d1d */
  if (zf) goto L_ee5d1d;
L_ee5cb7: /* ee5cb7: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5cba: je 0xee5cd8 */
  if (zf) goto L_ee5cd8;
L_ee5cbc: /* ee5cbc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5cbf: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* ee5cc5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5cc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5ccf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5cd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5cd1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5cd2: mov esp, ebp */
  esp = ebp;
/* ee5cd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5cd5: ret 8 */
  esp += 12; SPILL(); return;
L_ee5cd8: /* ee5cd8: mov edx, dword ptr [edi + 0x364] */
  edx = R32((uint32_t)(edi + 0x364u));
/* ee5cde: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* ee5ce0: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* ee5ce2: and edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ee5ce5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5ce6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5ce7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5ce8: call 0xeebc12 */
  esp -= 4; W32(esp, 0xee5cedu); SPILL(); f_eebc12(); if (g_unwind) return; RELOAD();
/* ee5ced: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5cf0: jne 0xee5d1d */
  if (!zf) goto L_ee5d1d;
L_ee5cf2: /* ee5cf2: push 0xf04c0c */
  { uint32_t v = 0xf04c0cu; esp -= 4; W32(esp, v); }
/* ee5cf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5cf8: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee5cfeu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee5cfe: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5d01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5d04: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee5d0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5d0d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5d14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5d15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5d16: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5d17: mov esp, ebp */
  esp = ebp;
/* ee5d19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5d1a: ret 8 */
  esp += 12; SPILL(); return;
L_ee5d1d: /* ee5d1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5d1f: lea ecx, [edi + 0x368] */
  ecx = (uint32_t)(edi + 0x368u);
/* ee5d25: mov byte ptr [edi + 0x358], 2 */
  W8((uint32_t)(edi + 0x358u), 0x2u);
/* ee5d2c: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xee5d32u); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* ee5d32: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5d35: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* ee5d3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5d3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5d45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5d46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5d47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5d48: mov esp, ebp */
  esp = ebp;
/* ee5d4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5d4b: ret 8 */
  esp += 12; SPILL(); return;
L_ee5dac: /* ee5dac: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5daf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5db2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5db4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* ee5dba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5dc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5dc2: mov esp, ebp */
  esp = ebp;
/* ee5dc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5dc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5d4e(void) {
  LOAD_REGS();
L_ee5d4e: /* ee5d4e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5d51: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5d56: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee5d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5d5a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee5d5d: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5d62u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5d62(); return;
}

void f_ee5d62(void) {
  LOAD_REGS();
L_ee5d62: /* ee5d62: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee5d68: push 0xef6acc */
  { uint32_t v = 0xef6accu; esp -= 4; W32(esp, v); }
/* ee5d6d: push 0xf04c38 */
  { uint32_t v = 0xf04c38u; esp -= 4; W32(esp, v); }
/* ee5d72: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5d74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5d74: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5d77: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee5d7a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee5d7d: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee5d80: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee5d86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5d89: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee5d8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5d8e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5d90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5d90: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5d93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5d94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5d96: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5d98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5d99: push 0xf04c40 */
  { uint32_t v = 0xf04c40u; esp -= 4; W32(esp, v); }
/* ee5d9e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5da0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5da0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5da3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5da5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5da7: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5dacu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee5dac: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5daf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5db2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5db4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* ee5dba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5dc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5dc2: mov esp, ebp */
  esp = ebp;
/* ee5dc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5dc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5e40(void) {
  LOAD_REGS();
L_ee5e40: /* ee5e40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee5e41: mov ebp, esp */
  ebp = esp;
/* ee5e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee5e45: push 0xeef1d0 */
  { uint32_t v = 0xeef1d0u; esp -= 4; W32(esp, v); }
/* ee5e4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee5e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5e51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee5e58: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee5e5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee5e5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5e5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5e60: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee5e63: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee5e66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5e67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee5e68: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee5e6b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee5e6e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* ee5e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5e72: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee5e77: mov edi, ecx */
  edi = ecx;
/* ee5e79: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5e7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5e7d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee5e84: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee5e87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5e87: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee5e8a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee5e8b: mov eax, edx */
  eax = edx;
/* ee5e8d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee5e90: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee5e93: jne 0xee5eab */
  if (!zf) goto L_ee5eab;
L_ee5e95: /* ee5e95: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5e98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee5e99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5e9b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee5e9e: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee5ea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee5ea5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee5eabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee5eab: /* ee5eab: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee5eb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee5eb2: je 0xee5f5f */
  if (zf) goto L_ee5f5f;
L_ee5eb8: /* ee5eb8: cmp dword ptr [edi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ebf: je 0xee5f5f */
  if (zf) goto L_ee5f5f;
L_ee5ec5: /* ee5ec5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee5ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5ec9: mov word ptr [ebp - 0x30], 2 */
  W16((uint32_t)(ebp + 0xffffffd0u), 0x2u);
/* ee5ecf: call 0xeebbca */
  esp -= 4; W32(esp, 0xee5ed4u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* ee5ed4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee5ed7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee5ed8: mov word ptr [ebp - 0x2e], ax */
  W16((uint32_t)(ebp + 0xffffffd2u), (eax & 0xffffu));
/* ee5edc: call 0xeebc0c */
  esp -= 4; W32(esp, 0xee5ee1u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* ee5ee1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ee5ee3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* ee5ee6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ee5ee9: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ee5eef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5ef1: call 0xeebbee */
  esp -= 4; W32(esp, 0xee5ef6u); SPILL(); f_eebbee(); if (g_unwind) return; RELOAD();
/* ee5ef6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5ef9: jne 0xee5f4a */
  if (!zf) goto L_ee5f4a;
L_ee5efb: /* ee5efb: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee5f00u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee5f00: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee5f05: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee5f08: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee5f0a: jne 0xee5f4a */
  if (!zf) goto L_ee5f4a;
L_ee5f0c: /* ee5f0c: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee5f11u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee5f11: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee5f17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee5f19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5f1a: push 0xf04e88 */
  { uint32_t v = 0xf04e88u; esp -= 4; W32(esp, v); }
/* ee5f1f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee5f24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5f25: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee5f2bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee5f2b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee5f2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5f31: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee5f37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5f3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5f41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5f42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5f43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5f44: mov esp, ebp */
  esp = ebp;
/* ee5f46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5f47: ret 8 */
  esp += 12; SPILL(); return;
L_ee5f4a: /* ee5f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5f4c: lea ecx, [edi + 0x368] */
  ecx = (uint32_t)(edi + 0x368u);
/* ee5f52: mov byte ptr [edi + 0x358], 3 */
  W8((uint32_t)(edi + 0x358u), 0x3u);
/* ee5f59: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xee5f5fu); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
L_ee5f5f: /* ee5f5f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee5f62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee5f63: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* ee5f69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee5f6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee5f6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee5f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee5f75: mov esp, ebp */
  esp = ebp;
/* ee5f77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee5f78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee5f7b(void) {
  LOAD_REGS();
L_ee5f7b: /* ee5f7b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee5f7e: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee5f83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee5f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5f87: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee5f8a: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5f8fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee5f8f(); return;
}

void f_ee5f8f(void) {
  LOAD_REGS();
L_ee5f8f: /* ee5f8f: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee5f95: push 0xef6b00 */
  { uint32_t v = 0xef6b00u; esp -= 4; W32(esp, v); }
/* ee5f9a: push 0xf04ef8 */
  { uint32_t v = 0xf04ef8u; esp -= 4; W32(esp, v); }
/* ee5f9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5fa1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee5fa4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee5fa7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee5faa: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee5fad: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee5fb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5fb6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee5fb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee5fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5fbb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5fbd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee5fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5fc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5fc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee5fc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5fc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee5fc6: push 0xf04f00 */
  { uint32_t v = 0xf04f00u; esp -= 4; W32(esp, v); }
/* ee5fcb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee5fcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee5fcd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee5fd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5fd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee5fd4: call 0xeec520 */
  esp -= 4; W32(esp, 0xee5fd9u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee5fd9: guest_badaddr(0xee5fd9); return;
}

void f_ee6050(void) {
  LOAD_REGS();
L_ee6050: /* ee6050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6051: mov ebp, esp */
  ebp = esp;
/* ee6053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6055: push 0xeef1e0 */
  { uint32_t v = 0xeef1e0u; esp -= 4; W32(esp, v); }
/* ee605a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6068: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee606e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee606f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6070: mov esi, ecx */
  esi = ecx;
/* ee6072: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee6078: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6079: xor edi, edi */
  edi = 0;
/* ee607b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee607e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6081: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee6084: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ee6087: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* ee608a: je 0xee60d0 */
  if (zf) goto L_ee60d0;
L_ee608c: /* ee608c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* ee608f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6091: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* ee6097: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6098: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* ee609e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee609f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee60a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee60a1: mov dword ptr [ebp - 0x124], 1 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x1u);
/* ee60ab: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee60b0u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee60b0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee60b3: jne 0xee60e1 */
  if (!zf) goto L_ee60e1;
L_ee60b5: /* ee60b5: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee60ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee60bc: push 0xf04f28 */
  { uint32_t v = 0xf04f28u; esp -= 4; W32(esp, v); }
/* ee60c1: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee60c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee60c7: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee60cdu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee60cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee60d0: /* ee60d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee60d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee60da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee60db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee60dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee60dd: mov esp, ebp */
  esp = ebp;
/* ee60df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee60e0: ret  */
  esp += 4; SPILL(); return;
L_ee60e1: /* ee60e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee60e3: je 0xee60d0 */
  if (zf) goto L_ee60d0;
L_ee60e5: /* ee60e5: mov byte ptr [esi + 0x358], 4 */
  W8((uint32_t)(esi + 0x358u), 0x4u);
/* ee60ec: mov edx, dword ptr [0xf07d48] */
  edx = R32((uint32_t)(0xf07d48u));
/* ee60f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee60f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee60f4: mov ecx, esi */
  ecx = esi;
/* ee60f6: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee60fcu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee60fc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee60fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee60ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6101: mov ecx, esi */
  ecx = esi;
/* ee6103: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee6106u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6106: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6109: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee610a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee610b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6112: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6113: mov esp, ebp */
  esp = ebp;
/* ee6115: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6116: ret  */
  esp += 4; SPILL(); return;
}

void f_ee6117(void) {
  LOAD_REGS();
L_ee6117: /* ee6117: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee611a: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee611f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee6122: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6123: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee6126: call 0xeec520 */
  esp -= 4; W32(esp, 0xee612bu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee612b(); return;
}

void f_ee612b(void) {
  LOAD_REGS();
L_ee612b: /* ee612b: push 0xef6b30 */
  { uint32_t v = 0xef6b30u; esp -= 4; W32(esp, v); }
/* ee6130: push 0xf04fa0 */
  { uint32_t v = 0xf04fa0u; esp -= 4; W32(esp, v); }
/* ee6135: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee613bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee613b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee613e: xor edi, edi */
  edi = 0;
/* ee6140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6141: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6142: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6147u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee6147: guest_badaddr(0xee6147); return;
}

void f_ee6190(void) {
  LOAD_REGS();
L_ee6190: /* ee6190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6191: mov ebp, esp */
  ebp = esp;
/* ee6193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6195: push 0xeef1f0 */
  { uint32_t v = 0xeef1f0u; esp -= 4; W32(esp, v); }
/* ee619a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee61a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee61a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee61a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee61ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee61ae: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* ee61b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee61b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee61b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee61b4: mov esi, ecx */
  esi = ecx;
/* ee61b6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee61b9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee61bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee61bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee61c0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee61c7: jne 0xee61de */
  if (!zf) goto L_ee61de;
L_ee61c9: /* ee61c9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ee61cc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee61cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee61cf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee61d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee61d3: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee61d8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xee61deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee61de: /* ee61de: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee61e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee61e5: je 0xee627f */
  if (zf) goto L_ee627f;
L_ee61eb: /* ee61eb: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* ee61f1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ee61f4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee61f6: je 0xee627f */
  if (zf) goto L_ee627f;
L_ee61fc: /* ee61fc: cmp byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6203: jne 0xee6278 */
  if (!zf) goto L_ee6278;
L_ee6205: /* ee6205: cmp dword ptr [esi + 0x348], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x348u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee620b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ee620e: lea ecx, [ecx + ecx + 5] */
  ecx = (uint32_t)(ecx + ecx + 0x5u);
/* ee6212: mov byte ptr [esi + 0x358], cl */
  W8((uint32_t)(esi + 0x358u), (ecx & 0xffu));
/* ee6218: jmp 0xee627f */
  goto L_ee627f;
L_ee6278: /* ee6278: mov byte ptr [esi + 0x358], 6 */
  W8((uint32_t)(esi + 0x358u), 0x6u);
L_ee627f: /* ee627f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee6282: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6285: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6286: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6287: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* ee628d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6295: mov esp, ebp */
  esp = ebp;
/* ee6297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6298: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee621a(void) {
  LOAD_REGS();
L_ee621a: /* ee621a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee621d: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee6222: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee6225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6226: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee6229: call 0xeec520 */
  esp -= 4; W32(esp, 0xee622eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee622e(); return;
}

void f_ee622e(void) {
  LOAD_REGS();
L_ee622e: /* ee622e: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee6234: push 0xef6b80 */
  { uint32_t v = 0xef6b80u; esp -= 4; W32(esp, v); }
/* ee6239: push 0xf04fa8 */
  { uint32_t v = 0xf04fa8u; esp -= 4; W32(esp, v); }
/* ee623e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6240u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6240: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6243: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee6246: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee6249: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* ee624c: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee6252: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6255: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ee6257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee625a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee625cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee625c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee625f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6260: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6262: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6265: push 0xf04fb0 */
  { uint32_t v = 0xf04fb0u; esp -= 4; W32(esp, v); }
/* ee626a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee626cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee626c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee626f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6273: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6278u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee6278: mov byte ptr [esi + 0x358], 6 */
  W8((uint32_t)(esi + 0x358u), 0x6u);
/* ee627f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee6282: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6285: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6286: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6287: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* ee628d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6295: mov esp, ebp */
  esp = ebp;
/* ee6297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6298: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee62f0(void) {
  LOAD_REGS();
L_ee62f0: /* ee62f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee62f1: mov ebp, esp */
  ebp = esp;
/* ee62f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee62f5: push 0xeef200 */
  { uint32_t v = 0xeef200u; esp -= 4; W32(esp, v); }
/* ee62fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6301: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6308: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee630b: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee6310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6312: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6313: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6314: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6315: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6318: mov esi, ecx */
  esi = ecx;
/* ee631a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee6321: je 0xee6353 */
  if (zf) goto L_ee6353;
L_ee6323: /* ee6323: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee6329: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee632c: je 0xee6353 */
  if (zf) goto L_ee6353;
L_ee632e: /* ee632e: mov cl, byte ptr [esi + 0x358] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x358u))) & 0xffu);
/* ee6334: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6337: jne 0xee6364 */
  if (!zf) goto L_ee6364;
L_ee6339: /* ee6339: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* ee633f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee6341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6342: call 0xeebc1e */
  esp -= 4; W32(esp, 0xee6347u); SPILL(); f_eebc1e(); if (g_unwind) return; RELOAD();
/* ee6347: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee634a: je 0xee638e */
  if (zf) goto L_ee638e;
L_ee634c: /* ee634c: mov byte ptr [esi + 0x358], 7 */
  W8((uint32_t)(esi + 0x358u), 0x7u);
L_ee6353: /* ee6353: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6356: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee635d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee635e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee635f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6360: mov esp, ebp */
  esp = ebp;
/* ee6362: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6363: ret  */
  esp += 4; SPILL(); return;
L_ee6364: /* ee6364: cmp cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6367: jne 0xee6353 */
  if (!zf) goto L_ee6353;
L_ee6369: /* ee6369: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee636b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee636c: call 0xeebc1e */
  esp -= 4; W32(esp, 0xee6371u); SPILL(); f_eebc1e(); if (g_unwind) return; RELOAD();
/* ee6371: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6374: je 0xee638e */
  if (zf) goto L_ee638e;
L_ee6376: /* ee6376: mov byte ptr [esi + 0x358], 8 */
  W8((uint32_t)(esi + 0x358u), 0x8u);
/* ee637d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6380: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6387: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6388: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6389: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee638a: mov esp, ebp */
  esp = ebp;
/* ee638c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee638d: ret  */
  esp += 4; SPILL(); return;
L_ee638e: /* ee638e: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee6394: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee6396: mov esi, dword ptr [0xf0db04] */
  esi = R32((uint32_t)(0xf0db04u));
/* ee639c: push 0xf04fd8 */
  { uint32_t v = 0xf04fd8u; esp -= 4; W32(esp, v); }
/* ee63a1: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee63a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee63a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee63a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee63a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee63ac: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee63b1u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee63b1: cmp eax, 0x2736 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2736u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee63b6: jne 0xee6353 */
  if (!zf) goto L_ee6353;
L_ee63b8: /* ee63b8: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee63bd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee63bf: push 0xf05038 */
  { uint32_t v = 0xf05038u; esp -= 4; W32(esp, v); }
/* ee63c4: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee63c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee63ca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee63ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee63cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee63cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee63d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee63d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee63d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee63db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee63dc: mov esp, ebp */
  esp = ebp;
/* ee63de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee63df: ret  */
  esp += 4; SPILL(); return;
}

void f_ee63e0(void) {
  LOAD_REGS();
L_ee63e0: /* ee63e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee63e3: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee63e8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee63eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee63ec: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee63ef: call 0xeec520 */
  esp -= 4; W32(esp, 0xee63f4u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee63f4(); return;
}

void f_ee63f4(void) {
  LOAD_REGS();
L_ee63f4: /* ee63f4: push 0xef6bb0 */
  { uint32_t v = 0xef6bb0u; esp -= 4; W32(esp, v); }
/* ee63f9: push 0xf0508c */
  { uint32_t v = 0xf0508cu; esp -= 4; W32(esp, v); }
/* ee63fe: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee6404u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee6404: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee640b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6410u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee6410: guest_badaddr(0xee6410); return;
}

void f_ee6470(void) {
  LOAD_REGS();
L_ee6470: /* ee6470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6471: mov ebp, esp */
  ebp = esp;
/* ee6473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6475: push 0xeef219 */
  { uint32_t v = 0xeef219u; esp -= 4; W32(esp, v); }
/* ee647a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6488: sub esp, 0x41c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x41cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee648e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee648f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6491: mov edi, ecx */
  edi = ecx;
/* ee6493: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee6496: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6499: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee64a0: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee64a6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee64a6: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* ee64ab: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee64ae: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee64b4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee64b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee64ba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee64bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee64be: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee64c1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ee64c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee64c5: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee64ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee64cb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee64cf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee64d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee64d2: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* ee64d8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee64da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee64dc: je 0xee64eb */
  if (zf) goto L_ee64eb;
L_ee64de: /* ee64de: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* ee64e3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ee64e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee64e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee64e8: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xee64ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee64eb: /* ee64eb: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* ee64f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee64f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee64f5: je 0xee64fc */
  if (zf) goto L_ee64fc;
L_ee64f7: /* ee64f7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee64fa: jmp 0xee6502 */
  goto L_ee6502;
L_ee64fc: /* ee64fc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* ee64ff: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_ee6502: /* ee6502: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6505: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee6506: mov eax, edx */
  eax = edx;
/* ee6508: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee650b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee650e: jne 0xee6525 */
  if (!zf) goto L_ee6525;
L_ee6510: /* ee6510: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6513: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6514: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6516: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6519: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee651e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee651f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xee6525u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee6525: /* ee6525: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee652a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee652c: je 0xee6665 */
  if (zf) goto L_ee6665;
L_ee6532: /* ee6532: cmp dword ptr [edi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6539: je 0xee6665 */
  if (zf) goto L_ee6665;
L_ee653f: /* ee653f: mov al, byte ptr [edi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* ee6545: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6547: je 0xee6551 */
  if (zf) goto L_ee6551;
L_ee6549: /* ee6549: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee654b: jne 0xee6665 */
  if (!zf) goto L_ee6665;
L_ee6551: /* ee6551: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* ee6556: lea ecx, [ebp - 0x428] */
  ecx = (uint32_t)(ebp + 0xfffffbd8u);
/* ee655c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee655e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee655f: call dword ptr [0xf0d984] */
  esp -= 4; W32(esp, 0xee6565u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* ee6565: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* ee656b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee656e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6573: push 0x3ff */
  { uint32_t v = 0x3ffu; esp -= 4; W32(esp, v); }
/* ee6578: je 0xee6584 */
  if (zf) goto L_ee6584;
L_ee657a: /* ee657a: lea edx, [ebp - 0x428] */
  edx = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6580: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6582: jmp 0xee6592 */
  goto L_ee6592;
L_ee6584: /* ee6584: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* ee658a: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6591: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_ee6592: /* ee6592: call 0xeebba6 */
  esp -= 4; W32(esp, 0xee6597u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* ee6597: mov ebx, eax */
  ebx = eax;
/* ee6599: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee659c: jne 0xee65f4 */
  if (!zf) goto L_ee65f4;
L_ee659e: /* ee659e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee65a1: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* ee65a7: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee65acu); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee65ac: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee65b1: je 0xee65ce */
  if (zf) goto L_ee65ce;
L_ee65b3: /* ee65b3: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee65b8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee65ba: push 0xf05094 */
  { uint32_t v = 0xf05094u; esp -= 4; W32(esp, v); }
/* ee65bf: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee65c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee65c5: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee65cbu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee65cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee65ce: /* ee65ce: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee65d1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee65d5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee65dbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee65db: lea esp, [ebp - 0x434] */
  esp = (uint32_t)(ebp + 0xfffffbccu);
/* ee65e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee65e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee65eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee65ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee65ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee65ee: mov esp, ebp */
  esp = ebp;
/* ee65f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee65f1: ret 8 */
  esp += 12; SPILL(); return;
L_ee65f4: /* ee65f4: mov edi, dword ptr [0xf0d988] */
  edi = R32((uint32_t)(0xf0d988u));
/* ee65fa: lea edx, [ebp - 0x428] */
  edx = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6600: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6601: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6603u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6603: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee6605: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6608: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee660a: jne 0xee6610 */
  if (!zf) goto L_ee6610;
L_ee660c: /* ee660c: xor esi, esi */
  esi = 0;
/* ee660e: jmp 0xee6633 */
  goto L_ee6633;
L_ee6610: /* ee6610: lea ecx, [ebp - 0x428] */
  ecx = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6616: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6617: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6619: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* ee661d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee6620: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee6623: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6626: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee6629: call 0xeec780 */
  esp -= 4; W32(esp, 0xee662eu); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* ee662e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6631: mov esi, esp */
  esi = esp;
L_ee6633: /* ee6633: lea edx, [ebp - 0x428] */
  edx = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6639: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee663a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee663cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee663c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee663f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6640: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* ee6646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6648: call dword ptr [0xf0d98c] */
  esp -= 4; W32(esp, 0xee664eu); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* ee664e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6651: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6655: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xee665bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ee665b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee665e: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee6660: jmp 0xee65ce */
  goto L_ee65ce;
L_ee6665: /* ee6665: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee6668: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* ee666e: jmp 0xee65ce */
  goto L_ee65ce;
}

void f_ee6673(void) {
  LOAD_REGS();
L_ee6673: /* ee6673: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee6676: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee667b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee667e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee667f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ee6682: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6687u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee6687(); return;
}

void f_ee6687(void) {
  LOAD_REGS();
L_ee6687: /* ee6687: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee668d: push 0xef6bf8 */
  { uint32_t v = 0xef6bf8u; esp -= 4; W32(esp, v); }
/* ee6692: push 0xf050d0 */
  { uint32_t v = 0xf050d0u; esp -= 4; W32(esp, v); }
/* ee6697: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6699: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee669c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee669f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee66a2: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee66a5: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee66ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee66ae: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee66b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee66b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee66b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee66b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee66b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee66b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee66b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee66bb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee66bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee66bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee66be: push 0xf050d8 */
  { uint32_t v = 0xf050d8u; esp -= 4; W32(esp, v); }
/* ee66c3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee66c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee66c5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee66c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee66ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee66cc: call 0xeec520 */
  esp -= 4; W32(esp, 0xee66d1u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee66d1: guest_badaddr(0xee66d1); return;
}

void f_ee6780(void) {
  LOAD_REGS();
L_ee6780: /* ee6780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6781: mov ebp, esp */
  ebp = esp;
/* ee6783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6785: push 0xeef230 */
  { uint32_t v = 0xeef230u; esp -= 4; W32(esp, v); }
/* ee678a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6798: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee679b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee679c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee679d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee679e: mov edi, ecx */
  edi = ecx;
/* ee67a0: mov al, byte ptr [edi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* ee67a6: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee67a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee67ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee67b2: je 0xee67c4 */
  if (zf) goto L_ee67c4;
L_ee67b4: /* ee67b4: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee67b6: je 0xee67c4 */
  if (zf) goto L_ee67c4;
L_ee67b8: /* ee67b8: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee67ba: je 0xee67c4 */
  if (zf) goto L_ee67c4;
L_ee67bc: /* ee67bc: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee67be: jne 0xee685f */
  if (!zf) goto L_ee685f;
L_ee67c4: /* ee67c4: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* ee67ca: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee67cf: jle 0xee67d6 */
  if ((zf || sf != of)) goto L_ee67d6;
L_ee67d1: /* ee67d1: mov eax, 0x200 */
  eax = 0x200u;
L_ee67d6: /* ee67d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee67d8: jle 0xee685f */
  if ((zf || sf != of)) goto L_ee685f;
L_ee67de: /* ee67de: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* ee67e4: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee67e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee67e9: lea esi, [edi + 0x368] */
  esi = (uint32_t)(edi + 0x368u);
/* ee67ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee67f0: je 0xee67f8 */
  if (zf) goto L_ee67f8;
L_ee67f2: /* ee67f2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ee67f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee67f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee67f6: jmp 0xee6802 */
  goto L_ee6802;
L_ee67f8: /* ee67f8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee67fa: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* ee6800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_ee6802: /* ee6802: call 0xeebbe2 */
  esp -= 4; W32(esp, 0xee6807u); SPILL(); f_eebbe2(); if (g_unwind) return; RELOAD();
/* ee6807: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee680a: jne 0xee6822 */
  if (!zf) goto L_ee6822;
L_ee680c: /* ee680c: mov eax, 1 */
  eax = 0x1u;
/* ee6811: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6814: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee681b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee681c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee681d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee681e: mov esp, ebp */
  esp = ebp;
/* ee6820: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6821: ret  */
  esp += 4; SPILL(); return;
L_ee6822: /* ee6822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6825: mov ecx, esi */
  ecx = esi;
/* ee6827: call dword ptr [0xf0df74] */
  esp -= 4; W32(esp, 0xee682du); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* ee682d: jmp 0xee67c4 */
  goto L_ee67c4;
L_ee685f: /* ee685f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6864: xor eax, eax */
  eax = 0;
/* ee6866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee686d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee686e: mov esp, ebp */
  esp = ebp;
/* ee6870: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6871: ret  */
  esp += 4; SPILL(); return;
}

void f_ee682f(void) {
  LOAD_REGS();
L_ee682f: /* ee682f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee6832: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee6837: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee683a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee683b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee683e: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6843u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee6843(); return;
}

void f_ee6843(void) {
  LOAD_REGS();
L_ee6843: /* ee6843: push 0xef6c30 */
  { uint32_t v = 0xef6c30u; esp -= 4; W32(esp, v); }
/* ee6848: push 0xf050fc */
  { uint32_t v = 0xf050fcu; esp -= 4; W32(esp, v); }
/* ee684d: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee6853u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee6853: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6856: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee685a: call 0xeec520 */
  esp -= 4; W32(esp, 0xee685fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* ee685f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6864: xor eax, eax */
  eax = 0;
/* ee6866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee686d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee686e: mov esp, ebp */
  esp = ebp;
/* ee6870: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6871: ret  */
  esp += 4; SPILL(); return;
}

void f_ee68c0(void) {
  LOAD_REGS();
L_ee68c0: /* ee68c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee68c1: mov ebp, esp */
  ebp = esp;
/* ee68c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee68c5: push 0xeef240 */
  { uint32_t v = 0xeef240u; esp -= 4; W32(esp, v); }
/* ee68ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee68d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee68d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee68d8: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee68de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee68df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee68e0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee68e3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee68e6: xor ebx, ebx */
  ebx = 0;
/* ee68e8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee68eb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee68ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee68ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee68f0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee68f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee68f6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee68f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee68fa: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee68ff: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee6902: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6905: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6906: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee6909: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee690cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee690c: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* ee6912: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee6914: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee6917: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee691a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee691d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee691e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6921: lea eax, [ebp - 0x120] */
  eax = (uint32_t)(ebp + 0xfffffee0u);
/* ee6927: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6928: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee692d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee692e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee6931u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6931: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* ee6937: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee6939: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee693b: je 0xee694a */
  if (zf) goto L_ee694a;
L_ee693d: /* ee693d: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* ee6942: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ee6944: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee6946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6947: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xee694au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee694a: /* ee694a: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* ee6950: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee6952: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6954: mov edi, eax */
  edi = eax;
/* ee6956: jne 0xee695e */
  if (!zf) goto L_ee695e;
L_ee6958: /* ee6958: lea edi, [ebp - 0x120] */
  edi = (uint32_t)(ebp + 0xfffffee0u);
L_ee695e: /* ee695e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6961: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee6962: mov eax, edx */
  eax = edx;
/* ee6964: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee6967: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee696a: jne 0xee6981 */
  if (!zf) goto L_ee6981;
L_ee696c: /* ee696c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee696f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6971: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6974: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee697a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee697b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee6981u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee6981: /* ee6981: cmp dword ptr [0xf0a330], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf0a330u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6987: je 0xee69e4 */
  if (zf) goto L_ee69e4;
L_ee6989: /* ee6989: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee698c: cmp dword ptr [esi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6993: je 0xee69e4 */
  if (zf) goto L_ee69e4;
L_ee6995: /* ee6995: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6998: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee699a: add esi, 0x368 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee69a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee69a1: mov ecx, esi */
  ecx = esi;
/* ee69a3: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee69a9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee69a9: xor ecx, ecx */
  ecx = 0;
/* ee69ab: jmp 0xee69b0 */
  goto L_ee69b0;
L_ee69b0: /* ee69b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee69b3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee69b5: jge 0xee69c4 */
  if ((sf == of)) goto L_ee69c4;
L_ee69b7: /* ee69b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee69b9: mov bl, byte ptr [ecx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi))) & 0xffu);
/* ee69bc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee69be: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* ee69c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ee69c2: jmp 0xee69b0 */
  goto L_ee69b0;
L_ee69c4: /* ee69c4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee69c7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee69ca: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ee69cc: call 0xed15d2 */
  esp -= 4; W32(esp, 0xee69d1u); SPILL(); f_ed15d2(); if (g_unwind) return; RELOAD();
/* ee69d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee69d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee69db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee69dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee69dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee69de: mov esp, ebp */
  esp = ebp;
/* ee69e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee69e1: ret 8 */
  esp += 12; SPILL(); return;
L_ee69e4: /* ee69e4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee69e7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee69e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee69ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee69ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee69ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee69f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee69f6: mov esp, ebp */
  esp = ebp;
/* ee69f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee69f9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee69ad(void) {
  LOAD_REGS();
L_ee69ad: /* ee69ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ee69b0: /* ee69b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee69b3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee69b5: jge 0xee69c4 */
  if ((sf == of)) goto L_ee69c4;
L_ee69b7: /* ee69b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee69b9: mov bl, byte ptr [ecx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi))) & 0xffu);
/* ee69bc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee69be: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* ee69c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ee69c2: jmp 0xee69b0 */
  goto L_ee69b0;
L_ee69c4: /* ee69c4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee69c7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee69ca: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ee69cc: call 0xed15d2 */
  esp -= 4; W32(esp, 0xee69d1u); SPILL(); f_ed15d2(); if (g_unwind) return; RELOAD();
/* ee69d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee69d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee69db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee69dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee69dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee69de: mov esp, ebp */
  esp = ebp;
/* ee69e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee69e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee69fc(void) {
  LOAD_REGS();
L_ee69fc: /* ee69fc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee69ff: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee6a04: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee6a07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6a08: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ee6a0b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6a10u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee6a10(); return;
}

void f_ee6a10(void) {
  LOAD_REGS();
L_ee6a10: /* ee6a10: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee6a16: push 0xef6c70 */
  { uint32_t v = 0xef6c70u; esp -= 4; W32(esp, v); }
/* ee6a1b: push 0xf05104 */
  { uint32_t v = 0xf05104u; esp -= 4; W32(esp, v); }
/* ee6a20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6a22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6a22: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6a25: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee6a28: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6a2b: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee6a2e: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee6a34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6a37: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee6a39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6a3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6a3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6a3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6a3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6a42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6a44: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6a47: push 0xf0510c */
  { uint32_t v = 0xf0510cu; esp -= 4; W32(esp, v); }
/* ee6a4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6a4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6a4e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6a51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6a53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6a55: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6a5au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee6a5a: guest_badaddr(0xee6a5a); return;
}

void f_ee6ad0(void) {
  LOAD_REGS();
L_ee6ad0: /* ee6ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6ad1: mov ebp, esp */
  ebp = esp;
/* ee6ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6ad5: push 0xeef259 */
  { uint32_t v = 0xeef259u; esp -= 4; W32(esp, v); }
/* ee6ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6ae8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee6aeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6aec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6aed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6aee: mov edi, ecx */
  edi = ecx;
/* ee6af0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6af3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6af6: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ee6af9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee6b00: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee6b06u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee6b06: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6b09: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee6b0c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee6b0f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6b12: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6b13: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6b16: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* ee6b19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6b1a: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee6b1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6b20: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee6b24: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee6b27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6b27: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6b2a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee6b2b: mov eax, edx */
  eax = edx;
/* ee6b2d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee6b30: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6b33: jne 0xee6b4b */
  if (!zf) goto L_ee6b4b;
L_ee6b35: /* ee6b35: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6b38: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6b39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6b3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6b3e: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee6b44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6b45: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee6b4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee6b4b: /* ee6b4b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee6b4e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee6b54: mov ecx, dword ptr [0xf0a330] */
  ecx = R32((uint32_t)(0xf0a330u));
/* ee6b5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6b5c: je 0xee6c51 */
  if (zf) goto L_ee6c51;
L_ee6b62: /* ee6b62: cmp dword ptr [edi + 0x340], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x340u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6b69: je 0xee6c51 */
  if (zf) goto L_ee6c51;
L_ee6b6f: /* ee6b6f: cmp byte ptr [edi + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6b76: jne 0xee6b86 */
  if (!zf) goto L_ee6b86;
L_ee6b78: /* ee6b78: push 0xf05130 */
  { uint32_t v = 0xf05130u; esp -= 4; W32(esp, v); }
/* ee6b7d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6b80: call dword ptr [0xf0d978] */
  esp -= 4; W32(esp, 0xee6b86u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_ee6b86: /* ee6b86: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6b89: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee6b8fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee6b8f: mov esi, dword ptr [0xf0d97c] */
  esi = R32((uint32_t)(0xf0d97cu));
/* ee6b95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6b96: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee6b98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6b98: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6b9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6b9d: jne 0xee6ba3 */
  if (!zf) goto L_ee6ba3;
L_ee6b9f: /* ee6b9f: xor edi, edi */
  edi = 0;
/* ee6ba1: jmp 0xee6bc8 */
  goto L_ee6bc8;
L_ee6ba3: /* ee6ba3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6ba6: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee6bacu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee6bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6bad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee6bafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6baf: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee6bb2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee6bb5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee6bb8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6bbb: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee6bbe: call 0xeec780 */
  esp -= 4; W32(esp, 0xee6bc3u); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* ee6bc3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6bc6: mov edi, esp */
  edi = esp;
L_ee6bc8: /* ee6bc8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6bcb: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee6bd1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee6bd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6bd2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xee6bd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6bd4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6bd7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6bda: mov esi, eax */
  esi = eax;
/* ee6bdc: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee6be2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee6be2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6be4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6be5: call dword ptr [0xf0d980] */
  esp -= 4; W32(esp, 0xee6bebu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* ee6beb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6bee: mov ebx, eax */
  ebx = eax;
/* ee6bf0: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_ee6bf3: /* ee6bf3: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ee6bf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6bf6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee6bf8: jne 0xee6bf3 */
  if (!zf) goto L_ee6bf3;
L_ee6bfa: /* ee6bfa: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6bfd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ee6bff: mov esi, eax */
  esi = eax;
/* ee6c01: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee6c03: add edi, 0x368 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ee6c09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6c0a: mov ecx, edi */
  ecx = edi;
/* ee6c0c: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee6c12u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee6c12: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ee6c14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6c15: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee6c17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6c19: call 0xed1a64 */
  esp -= 4; W32(esp, 0xee6c1eu); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* ee6c1e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee6c21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6c24: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6c27: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ee6c29: call 0xed15d2 */
  esp -= 4; W32(esp, 0xee6c2eu); SPILL(); f_ed15d2(); if (g_unwind) return; RELOAD();
L_ee6c2e: /* ee6c2e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee6c31: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee6c35: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee6c3bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee6c3b: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* ee6c3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6c41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6c48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6c49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6c4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6c4b: mov esp, ebp */
  esp = ebp;
/* ee6c4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6c4e: ret 8 */
  esp += 12; SPILL(); return;
L_ee6c51: /* ee6c51: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee6c57: jmp 0xee6c2e */
  goto L_ee6c2e;
}

void f_ee6c59(void) {
  LOAD_REGS();
L_ee6c59: /* ee6c59: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee6c5c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee6c61: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee6c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6c65: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ee6c68: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6c6du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee6c6d(); return;
}

void f_ee6c6d(void) {
  LOAD_REGS();
L_ee6c6d: /* ee6c6d: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee6c73: push 0xef6cac */
  { uint32_t v = 0xef6cacu; esp -= 4; W32(esp, v); }
/* ee6c78: push 0xf05138 */
  { uint32_t v = 0xf05138u; esp -= 4; W32(esp, v); }
/* ee6c7d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6c7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6c7f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6c82: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee6c85: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6c88: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee6c8b: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee6c91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6c94: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee6c96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6c97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6c99: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6c9b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6ca1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6ca3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6ca3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6ca4: push 0xf05140 */
  { uint32_t v = 0xf05140u; esp -= 4; W32(esp, v); }
/* ee6ca9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6cabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6cab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6cae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6cb2: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6cb7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee6cb7: guest_badaddr(0xee6cb7); return;
}

void f_ee6d40(void) {
  LOAD_REGS();
L_ee6d40: /* ee6d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6d41: mov ebp, esp */
  ebp = esp;
/* ee6d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6d45: push 0xeef270 */
  { uint32_t v = 0xeef270u; esp -= 4; W32(esp, v); }
/* ee6d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee6d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee6d58: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee6d5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6d5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6d60: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6d63: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee6d66: xor ebx, ebx */
  ebx = 0;
/* ee6d68: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ee6d6b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee6d6e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6d6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee6d70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6d73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee6d76: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee6d79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6d7a: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee6d7f: mov edi, ecx */
  edi = ecx;
/* ee6d81: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6d84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6d85: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee6d88: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee6d8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6d8b: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* ee6d91: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ee6d93: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ee6d96: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* ee6d99: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6d9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6d9d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6da0: lea eax, [ebp - 0x11c] */
  eax = (uint32_t)(ebp + 0xfffffee4u);
/* ee6da6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6da7: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* ee6dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6dad: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xee6db0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6db0: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* ee6db6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee6db8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6dba: je 0xee6dc9 */
  if (zf) goto L_ee6dc9;
L_ee6dbc: /* ee6dbc: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* ee6dc1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ee6dc3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee6dc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6dc6: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xee6dc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee6dc9: /* ee6dc9: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* ee6dcf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee6dd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6dd3: mov ebx, eax */
  ebx = eax;
/* ee6dd5: jne 0xee6ddd */
  if (!zf) goto L_ee6ddd;
L_ee6dd7: /* ee6dd7: lea ebx, [ebp - 0x11c] */
  ebx = (uint32_t)(ebp + 0xfffffee4u);
L_ee6ddd: /* ee6ddd: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6de0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ee6de1: mov eax, edx */
  eax = edx;
/* ee6de3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ee6de6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6de9: jne 0xee6e01 */
  if (!zf) goto L_ee6e01;
L_ee6deb: /* ee6deb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6dee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee6def: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6df1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ee6df4: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* ee6dfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee6dfb: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xee6e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee6e01: /* ee6e01: mov eax, dword ptr [0xf0a330] */
  eax = R32((uint32_t)(0xf0a330u));
/* ee6e06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6e08: je 0xee6eb0 */
  if (zf) goto L_ee6eb0;
L_ee6e0e: /* ee6e0e: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* ee6e14: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e17: je 0xee6eb0 */
  if (zf) goto L_ee6eb0;
L_ee6e1d: /* ee6e1d: mov al, byte ptr [edi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* ee6e23: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e25: je 0xee6e2f */
  if (zf) goto L_ee6e2f;
L_ee6e27: /* ee6e27: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e29: jne 0xee6eb0 */
  if (!zf) goto L_ee6eb0;
L_ee6e2f: /* ee6e2f: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* ee6e35: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6e3a: je 0xee6e44 */
  if (zf) goto L_ee6e44;
L_ee6e3c: /* ee6e3c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6e42: jmp 0xee6e4a */
  goto L_ee6e4a;
L_ee6e44: /* ee6e44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee6e47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6e48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee6e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_ee6e4a: /* ee6e4a: call 0xeebba6 */
  esp -= 4; W32(esp, 0xee6e4fu); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* ee6e4f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e52: jne 0xee6e98 */
  if (!zf) goto L_ee6e98;
L_ee6e54: /* ee6e54: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee6e57: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee6e5d: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee6e62u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee6e62: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6e67: je 0xee6e85 */
  if (zf) goto L_ee6e85;
L_ee6e69: /* ee6e69: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee6e6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee6e71: push 0xf05168 */
  { uint32_t v = 0xf05168u; esp -= 4; W32(esp, v); }
/* ee6e76: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee6e7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6e7c: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee6e82u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee6e82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee6e85: /* ee6e85: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6e88: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6e8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6e91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6e92: mov esp, ebp */
  esp = ebp;
/* ee6e94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6e95: ret 8 */
  esp += 12; SPILL(); return;
L_ee6e98: /* ee6e98: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee6e9b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ee6e9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6ea0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6ea7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6ea8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6ea9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6eaa: mov esp, ebp */
  esp = ebp;
/* ee6eac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6ead: ret 8 */
  esp += 12; SPILL(); return;
L_ee6eb0: /* ee6eb0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee6eb3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee6eb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee6eb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee6eb8: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* ee6ebe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee6ec5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee6ec6: mov esp, ebp */
  esp = ebp;
/* ee6ec8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee6ec9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee6ecc(void) {
  LOAD_REGS();
L_ee6ecc: /* ee6ecc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee6ecf: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee6ed4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee6ed7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee6ed8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ee6edb: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6ee0u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee6ee0(); return;
}

void f_ee6ee0(void) {
  LOAD_REGS();
L_ee6ee0: /* ee6ee0: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* ee6ee6: push 0xef6ce4 */
  { uint32_t v = 0xef6ce4u; esp -= 4; W32(esp, v); }
/* ee6eeb: push 0xf051ac */
  { uint32_t v = 0xf051acu; esp -= 4; W32(esp, v); }
/* ee6ef0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6ef2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6ef2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee6ef5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ee6ef8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ee6efb: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* ee6efe: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* ee6f04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6f07: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ee6f09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee6f0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6f0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6f0e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ee6f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6f12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6f14: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee6f16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee6f17: push 0xf051b4 */
  { uint32_t v = 0xf051b4u; esp -= 4; W32(esp, v); }
/* ee6f1c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee6f1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee6f1e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee6f21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee6f25: call 0xeec520 */
  esp -= 4; W32(esp, 0xee6f2au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee6f2a: guest_badaddr(0xee6f2a); return;
}

void f_ee6fb0(void) {
  LOAD_REGS();
L_ee6fb0: /* ee6fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ee6fb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6fb6: je 0xee6fcf */
  if (zf) goto L_ee6fcf;
L_ee6fb8: /* ee6fb8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* ee6fbb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6fbd: je 0xee6fcf */
  if (zf) goto L_ee6fcf;
L_ee6fbf: /* ee6fbf: nop  */
L_ee6fc0: /* ee6fc0: cmp ecx, 0xf09cf0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf09cf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee6fc6: je 0xee6fd1 */
  if (zf) goto L_ee6fd1;
L_ee6fc8: /* ee6fc8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* ee6fcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee6fcd: jne 0xee6fc0 */
  if (!zf) goto L_ee6fc0;
L_ee6fcf: /* ee6fcf: xor eax, eax */
  eax = 0;
L_ee6fd1: /* ee6fd1: ret  */
  esp += 4; SPILL(); return;
}

void f_ee6ff0(void) {
  LOAD_REGS();
L_ee6ff0: /* ee6ff0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee6ff1: mov ebp, esp */
  ebp = esp;
/* ee6ff3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee6ff5: push 0xeef280 */
  { uint32_t v = 0xeef280u; esp -= 4; W32(esp, v); }
/* ee6ffa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7001: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7008: sub esp, 0x130 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee700e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee700f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7011: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7014: mov esi, ecx */
  esi = ecx;
/* ee7016: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* ee701c: xor edi, edi */
  edi = 0;
/* ee701e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* ee7021: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7022: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7024: lea edx, [ebp - 0x13c] */
  edx = (uint32_t)(ebp + 0xfffffec4u);
/* ee702a: mov dword ptr [ebp - 0x138], eax */
  W32((uint32_t)(ebp + 0xfffffec8u), eax);
/* ee7030: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7031: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee7032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7033: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee7036: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* ee7039: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ee703c: mov dword ptr [ebp - 0x13c], 1 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x1u);
/* ee7046: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee704bu); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee704b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee704e: jne 0xee7082 */
  if (!zf) goto L_ee7082;
L_ee7050: /* ee7050: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee7055u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee7055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7056: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee705b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee705d: push 0xf04c70 */
  { uint32_t v = 0xf04c70u; esp -= 4; W32(esp, v); }
/* ee7062: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee7067: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7068: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee706eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee706e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7071: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee707b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee707c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee707d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee707e: mov esp, ebp */
  esp = ebp;
/* ee7080: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7081: ret  */
  esp += 4; SPILL(); return;
L_ee7082: /* ee7082: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7084: je 0xee71f6 */
  if (zf) goto L_ee71f6;
L_ee708a: /* ee708a: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* ee7090: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee7093: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7094: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* ee7097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7098: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7099: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* ee70a0: call 0xeebbfa */
  esp -= 4; W32(esp, 0xee70a5u); SPILL(); f_eebbfa(); if (g_unwind) return; RELOAD();
/* ee70a5: mov ebx, eax */
  ebx = eax;
/* ee70a7: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee70aa: jne 0xee70df */
  if (!zf) goto L_ee70df;
L_ee70ac: /* ee70ac: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee70b1u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee70b1: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee70b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee70b8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee70ba: push 0xf04cf0 */
  { uint32_t v = 0xf04cf0u; esp -= 4; W32(esp, v); }
/* ee70bf: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee70c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee70c5: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee70cbu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee70cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee70ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee70d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee70d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee70d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee70da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee70db: mov esp, ebp */
  esp = ebp;
/* ee70dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee70de: ret  */
  esp += 4; SPILL(); return;
L_ee70df: /* ee70df: cmp dword ptr [esi + 0x364], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x364u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee70e5: jne 0xee713e */
  if (!zf) goto L_ee713e;
L_ee70e7: /* ee70e7: cmp dword ptr [esi + 0x348], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x348u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee70ee: je 0xee713e */
  if (zf) goto L_ee713e;
L_ee70f0: /* ee70f0: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee70f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee70f8: mov edi, dword ptr [0xf0db04] */
  edi = R32((uint32_t)(0xf0db04u));
/* ee70fe: push 0xf04d70 */
  { uint32_t v = 0xf04d70u; esp -= 4; W32(esp, v); }
/* ee7103: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee7108: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7109: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee710bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee710b: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* ee7111: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee7117: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee7119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee711c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee711d: push 0xf04dc4 */
  { uint32_t v = 0xf04dc4u; esp -= 4; W32(esp, v); }
/* ee7122: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee7127: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7128: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee712au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee712a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee712d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7130: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7137: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7138: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7139: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee713a: mov esp, ebp */
  esp = ebp;
/* ee713c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee713d: ret  */
  esp += 4; SPILL(); return;
L_ee713e: /* ee713e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee713f: call 0xed17ee */
  esp -= 4; W32(esp, 0xee7144u); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* ee7144: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* ee714a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee714d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee714f: je 0xee7269 */
  if (zf) goto L_ee7269;
L_ee7155: /* ee7155: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7157: je 0xee725f */
  if (zf) goto L_ee725f;
L_ee715d: /* ee715d: cmp eax, 0xf09cf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf09cf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7162: je 0xee7169 */
  if (zf) goto L_ee7169;
L_ee7164: /* ee7164: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ee7167: jmp 0xee7155 */
  goto L_ee7155;
L_ee7169: /* ee7169: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* ee716f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7170: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* ee7176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7178: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee717a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee717d: mov eax, esp */
  eax = esp;
/* ee717f: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* ee7185: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ee7187: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ee7189: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* ee718c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* ee718f: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* ee7192: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* ee7195: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7198: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* ee719e: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* ee71a0: mov edx, esp */
  edx = esp;
/* ee71a2: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* ee71a4: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* ee71a7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* ee71aa: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ee71ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee71ae: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* ee71b1: mov eax, esp */
  eax = esp;
/* ee71b3: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* ee71b9: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* ee71bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee71c1: mov dword ptr [ebp - 0x38], esp */
  W32((uint32_t)(ebp + 0xffffffc8u), esp);
/* ee71c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee71c5: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xee71cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee71cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee71cc: call 0xed12e9 */
  esp -= 4; W32(esp, 0xee71d1u); SPILL(); f_ed12e9(); if (g_unwind) return; RELOAD();
/* ee71d1: mov edi, eax */
  edi = eax;
/* ee71d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee71d6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee71d8: jne 0xee7207 */
  if (!zf) goto L_ee7207;
L_ee71da: /* ee71da: push 0xf04dfc */
  { uint32_t v = 0xf04dfcu; esp -= 4; W32(esp, v); }
L_ee71df: /* ee71df: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee71e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee71e7: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee71ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee71ed: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee71f3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee71f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee71f6: /* ee71f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee71f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7200: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7201: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7202: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7203: mov esp, ebp */
  esp = ebp;
/* ee7205: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7206: ret  */
  esp += 4; SPILL(); return;
L_ee7207: /* ee7207: mov byte ptr [edi + 0x358], 4 */
  W8((uint32_t)(edi + 0x358u), 0x4u);
/* ee720e: mov al, byte ptr [esi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x33cu))) & 0xffu);
/* ee7214: mov byte ptr [edi + 0x33c], al */
  W8((uint32_t)(edi + 0x33cu), (eax & 0xffu));
/* ee721a: mov dword ptr [edi + 0x340], ebx */
  W32((uint32_t)(edi + 0x340u), ebx);
/* ee7220: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee7223: lea esi, [edi + 0x35c] */
  esi = (uint32_t)(edi + 0x35cu);
/* ee7229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee722a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee722b: call 0xed1442 */
  esp -= 4; W32(esp, 0xee7230u); SPILL(); f_ed1442(); if (g_unwind) return; RELOAD();
/* ee7230: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee7232: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7236: call 0xeebc0c */
  esp -= 4; W32(esp, 0xee723bu); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* ee723b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ee723d: movzx eax, word ptr [ebp - 0x2e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u)));
/* ee7241: mov ecx, edi */
  ecx = edi;
/* ee7243: mov dword ptr [edi + 0x360], eax */
  W32((uint32_t)(edi + 0x360u), eax);
/* ee7249: call 0xed18c0 */
  esp -= 4; W32(esp, 0xee724eu); SPILL(); f_ed18c0(); if (g_unwind) return; RELOAD();
/* ee724e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7251: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7258: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee725a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee725b: mov esp, ebp */
  esp = ebp;
/* ee725d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee725e: ret  */
  esp += 4; SPILL(); return;
L_ee725f: /* ee725f: push 0xf04e38 */
  { uint32_t v = 0xf04e38u; esp -= 4; W32(esp, v); }
/* ee7264: jmp 0xee71df */
  goto L_ee71df;
L_ee7269: /* ee7269: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee726c: lea edi, [esi + 0x35c] */
  edi = (uint32_t)(esi + 0x35cu);
/* ee7272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7274: mov dword ptr [esi + 0x348], ebx */
  W32((uint32_t)(esi + 0x348u), ebx);
/* ee727a: call 0xed1442 */
  esp -= 4; W32(esp, 0xee727fu); SPILL(); f_ed1442(); if (g_unwind) return; RELOAD();
/* ee727f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ee7281: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7284: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7285: call 0xeebc0c */
  esp -= 4; W32(esp, 0xee728au); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* ee728a: movzx edx, word ptr [ebp - 0x2e] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u)));
/* ee728e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ee7290: mov dword ptr [esi + 0x360], edx */
  W32((uint32_t)(esi + 0x360u), edx);
/* ee7296: mov eax, dword ptr [0xf07d94] */
  eax = R32((uint32_t)(0xf07d94u));
/* ee729b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee729d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee729e: mov ecx, esi */
  ecx = esi;
/* ee72a0: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee72a6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee72a6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee72a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee72aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee72ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee72ad: mov ecx, esi */
  ecx = esi;
/* ee72af: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee72b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee72b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee72b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee72b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee72b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee72be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee72bf: mov esp, ebp */
  esp = ebp;
/* ee72c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee72c2: ret  */
  esp += 4; SPILL(); return;
}

void f_ee72c3(void) {
  LOAD_REGS();
L_ee72c3: /* ee72c3: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* ee72c6: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee72cb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee72ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee72cf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee72d2: call 0xeec520 */
  esp -= 4; W32(esp, 0xee72d7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee72d7(); return;
}

void f_ee72d7(void) {
  LOAD_REGS();
L_ee72d7: /* ee72d7: push 0xef6d20 */
  { uint32_t v = 0xef6d20u; esp -= 4; W32(esp, v); }
/* ee72dc: push 0xf04e74 */
  { uint32_t v = 0xf04e74u; esp -= 4; W32(esp, v); }
/* ee72e1: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee72e7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee72e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee72ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee72ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee72ee: call 0xeec520 */
  esp -= 4; W32(esp, 0xee72f3u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee72f3: guest_badaddr(0xee72f3); return;
}

void f_ee73d0(void) {
  LOAD_REGS();
L_ee73d0: /* ee73d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee73d1: mov ebp, esp */
  ebp = esp;
/* ee73d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee73d5: push 0xeef2a2 */
  { uint32_t v = 0xeef2a2u; esp -= 4; W32(esp, v); }
/* ee73da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee73e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee73e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee73e8: sub esp, 0x51c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x51cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee73ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee73ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee73f0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee73f3: mov al, byte ptr [ecx + 0x354] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x354u))) & 0xffu);
/* ee73f9: xor ebx, ebx */
  ebx = 0;
/* ee73fb: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee73fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee73fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7401: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee7404: jne 0xee7470 */
  if (!zf) goto L_ee7470;
L_ee7406: /* ee7406: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* ee7409: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* ee740c: mov dword ptr [ebp - 0x140], ebx */
  W32((uint32_t)(ebp + 0xfffffec0u), ebx);
/* ee7412: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* ee7418: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee741b: jne 0xee7423 */
  if (!zf) goto L_ee7423;
L_ee741d: /* ee741d: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
L_ee7423: /* ee7423: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* ee7426: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7427: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7428: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7429: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* ee742f: mov dword ptr [ebp - 0x13c], eax */
  W32((uint32_t)(ebp + 0xfffffec4u), eax);
/* ee7435: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7436: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee7437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7438: mov dword ptr [ebp - 0x140], 1 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x1u);
/* ee7442: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee7447u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee7447: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7449: je 0xee7462 */
  if (zf) goto L_ee7462;
L_ee744b: /* ee744b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee744e: je 0xee7462 */
  if (zf) goto L_ee7462;
L_ee7450: /* ee7450: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7453: mov dword ptr [eax + 0x350], 1 */
  W32((uint32_t)(eax + 0x350u), 0x1u);
/* ee745d: jmp 0xee75e9 */
  goto L_ee75e9;
L_ee7462: /* ee7462: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7465: mov dword ptr [ecx + 0x350], ebx */
  W32((uint32_t)(ecx + 0x350u), ebx);
/* ee746b: jmp 0xee75e9 */
  goto L_ee75e9;
L_ee7470: /* ee7470: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee7472: jne 0xee75e9 */
  if (!zf) goto L_ee75e9;
L_ee7478: /* ee7478: movzx eax, byte ptr [ecx + 0x33c] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x33cu)));
/* ee747f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee7481: je 0xee7600 */
  if (zf) goto L_ee7600;
L_ee7487: /* ee7487: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee7488: je 0xee7501 */
  if (zf) goto L_ee7501;
L_ee748a: /* ee748a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee748b: jne 0xee75e9 */
  if (!zf) goto L_ee75e9;
L_ee7491: /* ee7491: lea edx, [ebp - 0x13c] */
  edx = (uint32_t)(ebp + 0xfffffec4u);
/* ee7497: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ee749a: mov ecx, 0xff */
  ecx = 0xffu;
/* ee749f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee74a2: xor eax, eax */
  eax = 0;
/* ee74a4: mov ebx, ecx */
  ebx = ecx;
/* ee74a6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee74a9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ee74ac: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ee74ae: mov ecx, ebx */
  ecx = ebx;
/* ee74b0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ee74b2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee74b5: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* ee74bb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee74be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee74c0: push 0xfe */
  { uint32_t v = 0xfeu; esp -= 4; W32(esp, v); }
/* ee74c5: je 0xee74d0 */
  if (zf) goto L_ee74d0;
L_ee74c7: /* ee74c7: lea ecx, [ebp - 0x13c] */
  ecx = (uint32_t)(ebp + 0xfffffec4u);
/* ee74cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee74ce: jmp 0xee74dd */
  goto L_ee74dd;
L_ee74d0: /* ee74d0: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ee74d6: lea edx, [ebp - 0x13c] */
  edx = (uint32_t)(ebp + 0xfffffec4u);
/* ee74dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_ee74dd: /* ee74dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee74de: call 0xeebba6 */
  esp -= 4; W32(esp, 0xee74e3u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* ee74e3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee74e6: je 0xee75e9 */
  if (zf) goto L_ee75e9;
L_ee74ec: /* ee74ec: lea ecx, [ebp - 0x13c] */
  ecx = (uint32_t)(ebp + 0xfffffec4u);
/* ee74f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee74f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee74f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee74f7: call 0xed112c */
  esp -= 4; W32(esp, 0xee74fcu); SPILL(); f_ed112c(); if (g_unwind) return; RELOAD();
/* ee74fc: jmp 0xee75e9 */
  goto L_ee75e9;
L_ee7501: /* ee7501: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee7507: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ee750a: mov ecx, 0x3e8 */
  ecx = 0x3e8u;
/* ee750f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee7512: xor eax, eax */
  eax = 0;
/* ee7514: mov ebx, ecx */
  ebx = ecx;
/* ee7516: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee7519: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ee751c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ee751e: mov ecx, ebx */
  ecx = ebx;
/* ee7520: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ee7522: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7525: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* ee752b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee752e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7530: push 0x3e7 */
  { uint32_t v = 0x3e7u; esp -= 4; W32(esp, v); }
/* ee7535: je 0xee7540 */
  if (zf) goto L_ee7540;
L_ee7537: /* ee7537: lea ecx, [ebp - 0x528] */
  ecx = (uint32_t)(ebp + 0xfffffad8u);
/* ee753d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee753e: jmp 0xee754d */
  goto L_ee754d;
L_ee7540: /* ee7540: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ee7546: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee754c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_ee754d: /* ee754d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee754e: call 0xeebba6 */
  esp -= 4; W32(esp, 0xee7553u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* ee7553: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7556: je 0xee75e9 */
  if (zf) goto L_ee75e9;
L_ee755c: /* ee755c: mov edi, dword ptr [0xf0d988] */
  edi = R32((uint32_t)(0xf0d988u));
/* ee7562: lea ecx, [ebp - 0x528] */
  ecx = (uint32_t)(ebp + 0xfffffad8u);
/* ee7568: xor ebx, ebx */
  ebx = 0;
/* ee756a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee756b: mov byte ptr [ebp + eax - 0x528], bl */
  W8((uint32_t)(ebp + eax + 0xfffffad8u), (ebx & 0xffu));
/* ee7572: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee7574u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7574: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* ee7577: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee757a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee757c: jne 0xee7582 */
  if (!zf) goto L_ee7582;
L_ee757e: /* ee757e: xor esi, esi */
  esi = 0;
/* ee7580: jmp 0xee75a5 */
  goto L_ee75a5;
L_ee7582: /* ee7582: lea eax, [ebp - 0x528] */
  eax = (uint32_t)(ebp + 0xfffffad8u);
/* ee7588: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7589: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee758bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee758b: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* ee758f: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee7592: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee7595: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7598: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee759b: call 0xeec780 */
  esp -= 4; W32(esp, 0xee75a0u); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* ee75a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee75a3: mov esi, esp */
  esi = esp;
L_ee75a5: /* ee75a5: lea ecx, [ebp - 0x528] */
  ecx = (uint32_t)(ebp + 0xfffffad8u);
/* ee75ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee75ac: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee75aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee75ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee75b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee75b2: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee75b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee75b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee75ba: call dword ptr [0xf0d98c] */
  esp -= 4; W32(esp, 0xee75c0u); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* ee75c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee75c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee75c4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee75c7: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee75cdu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee75cd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee75d0: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* ee75d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee75d4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee75d8: call 0xed1744 */
  esp -= 4; W32(esp, 0xee75ddu); SPILL(); f_ed1744(); if (g_unwind) return; RELOAD();
/* ee75dd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee75e0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
L_ee75e3: /* ee75e3: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee75e9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee75e9: /* ee75e9: lea esp, [ebp - 0x534] */
  esp = (uint32_t)(ebp + 0xfffffaccu);
/* ee75ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee75f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee75f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee75fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee75fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee75fc: mov esp, ebp */
  esp = ebp;
/* ee75fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee75ff: ret  */
  esp += 4; SPILL(); return;
L_ee7600: /* ee7600: lea ecx, [ebp - 0x528] */
  ecx = (uint32_t)(ebp + 0xfffffad8u);
/* ee7606: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee7609: mov ecx, 0x3e8 */
  ecx = 0x3e8u;
/* ee760e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee7611: xor eax, eax */
  eax = 0;
/* ee7613: mov ebx, ecx */
  ebx = ecx;
/* ee7615: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ee7618: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ee761b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ee761d: mov ecx, ebx */
  ecx = ebx;
/* ee761f: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ee7621: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7624: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* ee762a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee762d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee762f: push 0x3e7 */
  { uint32_t v = 0x3e7u; esp -= 4; W32(esp, v); }
/* ee7634: je 0xee7640 */
  if (zf) goto L_ee7640;
L_ee7636: /* ee7636: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee763c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee763d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee763e: jmp 0xee764e */
  goto L_ee764e;
L_ee7640: /* ee7640: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* ee7646: lea eax, [ebp - 0x528] */
  eax = (uint32_t)(ebp + 0xfffffad8u);
/* ee764c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee764d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_ee764e: /* ee764e: call 0xeebba6 */
  esp -= 4; W32(esp, 0xee7653u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* ee7653: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7656: je 0xee75e9 */
  if (zf) goto L_ee75e9;
L_ee7658: /* ee7658: mov edi, dword ptr [0xf0d988] */
  edi = R32((uint32_t)(0xf0d988u));
/* ee765e: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee7664: xor ebx, ebx */
  ebx = 0;
/* ee7666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7667: mov byte ptr [ebp + eax - 0x528], bl */
  W8((uint32_t)(ebp + eax + 0xfffffad8u), (ebx & 0xffu));
/* ee766e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee7670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7670: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee7672: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7675: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7677: jne 0xee767d */
  if (!zf) goto L_ee767d;
L_ee7679: /* ee7679: xor esi, esi */
  esi = 0;
/* ee767b: jmp 0xee76a0 */
  goto L_ee76a0;
L_ee767d: /* ee767d: lea ecx, [ebp - 0x528] */
  ecx = (uint32_t)(ebp + 0xfffffad8u);
/* ee7683: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7684: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee7686u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7686: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* ee768a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee768d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee7690: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7693: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee7696: call 0xeec780 */
  esp -= 4; W32(esp, 0xee769bu); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* ee769b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee769e: mov esi, esp */
  esi = esp;
L_ee76a0: /* ee76a0: lea edx, [ebp - 0x528] */
  edx = (uint32_t)(ebp + 0xfffffad8u);
/* ee76a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee76a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee76a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee76a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee76ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee76ad: lea eax, [ebp - 0x528] */
  eax = (uint32_t)(ebp + 0xfffffad8u);
/* ee76b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee76b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee76b5: call dword ptr [0xf0d98c] */
  esp -= 4; W32(esp, 0xee76bbu); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* ee76bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee76be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee76bf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee76c2: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xee76c8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ee76c8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee76cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee76cc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee76cf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee76d3: call 0xed132f */
  esp -= 4; W32(esp, 0xee76d8u); SPILL(); f_ed132f(); if (g_unwind) return; RELOAD();
/* ee76d8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee76db: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee76de: jmp 0xee75e3 */
  goto L_ee75e3;
}

void f_ee76e3(void) {
  LOAD_REGS();
L_ee76e3: /* ee76e3: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* ee76e6: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee76eb: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* ee76ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee76ef: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* ee76f2: call 0xeec520 */
  esp -= 4; W32(esp, 0xee76f7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee76f7(); return;
}

void f_ee76f7(void) {
  LOAD_REGS();
L_ee76f7: /* ee76f7: push 0xef6d6c */
  { uint32_t v = 0xef6d6cu; esp -= 4; W32(esp, v); }
/* ee76fc: push 0xf04e7c */
  { uint32_t v = 0xf04e7cu; esp -= 4; W32(esp, v); }
/* ee7701: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee7707u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee7707: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee770a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee770c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee770e: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7713u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee7713: guest_badaddr(0xee7713); return;
}

void f_ee7800(void) {
  LOAD_REGS();
L_ee7800: /* ee7800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7801: mov ebp, esp */
  ebp = esp;
/* ee7803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7805: push 0xeef2c0 */
  { uint32_t v = 0xeef2c0u; esp -= 4; W32(esp, v); }
/* ee780a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7818: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee781e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee7821: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7823: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7824: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7827: mov esi, ecx */
  esi = ecx;
/* ee7829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee782c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee782d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee782e: xor ebx, ebx */
  ebx = 0;
/* ee7830: mov ecx, esi */
  ecx = esi;
/* ee7832: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee7835: call 0xed11db */
  esp -= 4; W32(esp, 0xee783au); SPILL(); f_ed11db(); if (g_unwind) return; RELOAD();
/* ee783a: lea edi, [esi + 0x340] */
  edi = (uint32_t)(esi + 0x340u);
/* ee7840: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ee7843: cmp dword ptr [edi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7846: je 0xee789e */
  if (zf) goto L_ee789e;
L_ee7848: /* ee7848: movzx eax, byte ptr [esi + 0x358] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x358u)));
/* ee784f: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee7852: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee7855: ja 0xee789e */
  if ((!cf && !zf)) goto L_ee789e;
L_ee7857: /* ee7857: jmp dword ptr [eax*4 + 0xee79d0] */
  switch (R32((uint32_t)(eax*4 + 0xee79d0u))) {
    case 0xee785eu: goto L_ee785e;
    case 0xee7865u: goto L_ee7865;
    case 0xee7875u: goto L_ee7875;
    case 0xee7885u: goto L_ee7885;
    case 0xee78b8u: goto L_ee78b8;
    case 0xee78beu: goto L_ee78be;
    case 0xee7987u: goto L_ee7987;
    default: guest_badjump(0xee7857, R32((uint32_t)(eax*4 + 0xee79d0u))); return;
  }
L_ee785e: /* ee785e: mov ecx, esi */
  ecx = esi;
/* ee7860: call 0xed1163 */
  esp -= 4; W32(esp, 0xee7865u); SPILL(); f_ed1163(); if (g_unwind) return; RELOAD();
L_ee7865: /* ee7865: mov ecx, esi */
  ecx = esi;
/* ee7867: call 0xed1460 */
  esp -= 4; W32(esp, 0xee786cu); SPILL(); f_ed1460(); if (g_unwind) return; RELOAD();
/* ee786c: mov ecx, esi */
  ecx = esi;
/* ee786e: call 0xed15d2 */
  esp -= 4; W32(esp, 0xee7873u); SPILL(); f_ed15d2(); if (g_unwind) return; RELOAD();
/* ee7873: jmp 0xee789e */
  goto L_ee789e;
L_ee7875: /* ee7875: mov ecx, esi */
  ecx = esi;
/* ee7877: call 0xed181b */
  esp -= 4; W32(esp, 0xee787cu); SPILL(); f_ed181b(); if (g_unwind) return; RELOAD();
/* ee787c: mov ecx, esi */
  ecx = esi;
/* ee787e: call 0xed1460 */
  esp -= 4; W32(esp, 0xee7883u); SPILL(); f_ed1460(); if (g_unwind) return; RELOAD();
/* ee7883: jmp 0xee789e */
  goto L_ee789e;
L_ee7885: /* ee7885: mov ecx, esi */
  ecx = esi;
/* ee7887: call 0xed1460 */
  esp -= 4; W32(esp, 0xee788cu); SPILL(); f_ed1460(); if (g_unwind) return; RELOAD();
/* ee788c: mov ecx, esi */
  ecx = esi;
/* ee788e: call 0xed15d2 */
  esp -= 4; W32(esp, 0xee7893u); SPILL(); f_ed15d2(); if (g_unwind) return; RELOAD();
/* ee7893: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7895: jne 0xee789e */
  if (!zf) goto L_ee789e;
L_ee7897: /* ee7897: mov ecx, esi */
  ecx = esi;
/* ee7899: call 0xed1456 */
  esp -= 4; W32(esp, 0xee789eu); SPILL(); f_ed1456(); if (g_unwind) return; RELOAD();
L_ee789e: /* ee789e: movzx eax, byte ptr [esi + 0x358] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x358u)));
/* ee78a5: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee78a8: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee78ab: ja 0xee7987 */
  if ((!cf && !zf)) goto L_ee7987;
L_ee78b1: /* ee78b1: jmp dword ptr [eax*4 + 0xee79e4] */
  switch (R32((uint32_t)(eax*4 + 0xee79e4u))) {
    case 0xee78b8u: goto L_ee78b8;
    case 0xee78beu: goto L_ee78be;
    case 0xee7987u: goto L_ee7987;
    default: guest_badjump(0xee78b1, R32((uint32_t)(eax*4 + 0xee79e4u))); return;
  }
L_ee78b8: /* ee78b8: lea edi, [esi + 0x348] */
  edi = (uint32_t)(esi + 0x348u);
L_ee78be: /* ee78be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee78c0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee78c3: je 0xee7987 */
  if (zf) goto L_ee7987;
L_ee78c9: /* ee78c9: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* ee78cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee78cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee78ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee78cf: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* ee78d5: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* ee78db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee78dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ee78dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee78de: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* ee78e1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ee78e4: mov dword ptr [ebp - 0x124], 1 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x1u);
/* ee78ee: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xee78f3u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* ee78f3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee78f6: je 0xee7987 */
  if (zf) goto L_ee7987;
L_ee78fc: /* ee78fc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee78fe: je 0xee7987 */
  if (zf) goto L_ee7987;
L_ee7904: /* ee7904: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee7906: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* ee7909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee790a: push 0x4004667f */
  { uint32_t v = 0x4004667fu; esp -= 4; W32(esp, v); }
/* ee790f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7910: call 0xeebc2a */
  esp -= 4; W32(esp, 0xee7915u); SPILL(); f_eebc2a(); if (g_unwind) return; RELOAD();
/* ee7915: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7918: jne 0xee7951 */
  if (!zf) goto L_ee7951;
L_ee791a: /* ee791a: cmp byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee7921: je 0xee7929 */
  if (zf) goto L_ee7929;
L_ee7923: /* ee7923: mov byte ptr [esi + 0x358], bl */
  W8((uint32_t)(esi + 0x358u), (ebx & 0xffu));
L_ee7929: /* ee7929: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ee792b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee792c: call 0xeebbac */
  esp -= 4; W32(esp, 0xee7931u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* ee7931: mov dword ptr [edi], 0xffffffff */
  W32((uint32_t)(edi), 0xffffffffu);
/* ee7937: mov edx, dword ptr [0xf07d70] */
  edx = R32((uint32_t)(0xf07d70u));
/* ee793d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee793e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee793f: mov ecx, esi */
  ecx = esi;
/* ee7941: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xee7947u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ee7947: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ee7949: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee794a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee794b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee794c: mov ecx, esi */
  ecx = esi;
/* ee794e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xee7951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ee7951: /* ee7951: cmp dword ptr [ebp + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7955: jne 0xee7987 */
  if (!zf) goto L_ee7987;
L_ee7957: /* ee7957: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee795cu); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee795c: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7961: je 0xee7987 */
  if (zf) goto L_ee7987;
L_ee7963: /* ee7963: cmp byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ee796a: je 0xee7972 */
  if (zf) goto L_ee7972;
L_ee796c: /* ee796c: mov byte ptr [esi + 0x358], bl */
  W8((uint32_t)(esi + 0x358u), (ebx & 0xffu));
L_ee7972: /* ee7972: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee7974: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7975: call 0xeebbac */
  esp -= 4; W32(esp, 0xee797au); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* ee797a: mov ecx, esi */
  ecx = esi;
/* ee797c: mov dword ptr [edi], 0xffffffff */
  W32((uint32_t)(edi), 0xffffffffu);
/* ee7982: call 0xed142e */
  esp -= 4; W32(esp, 0xee7987u); SPILL(); f_ed142e(); if (g_unwind) return; RELOAD();
L_ee7987: /* ee7987: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee798a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ee798d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee798e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee798f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7996: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7997: mov esp, ebp */
  esp = ebp;
/* ee7999: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee799a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee799d(void) {
  LOAD_REGS();
L_ee799d: /* ee799d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee79a0: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee79a5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee79a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee79a9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee79ac: call 0xeec520 */
  esp -= 4; W32(esp, 0xee79b1u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee79b1(); return;
}

void f_ee79b1(void) {
  LOAD_REGS();
L_ee79b1: /* ee79b1: push 0xef6dac */
  { uint32_t v = 0xef6dacu; esp -= 4; W32(esp, v); }
/* ee79b6: push 0xf04c64 */
  { uint32_t v = 0xf04c64u; esp -= 4; W32(esp, v); }
/* ee79bb: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee79c1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
L_ee79c1: /* ee79c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee79c4: xor ebx, ebx */
  ebx = 0;
/* ee79c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee79c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee79c8: call 0xeec520 */
  esp -= 4; W32(esp, 0xee79cdu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  goto L_ee79cd;
L_ee79c9: /* ee79c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee79ca: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_ee79cb: guest_badaddr(0xee79cb); return;
L_ee79cd: /* ee79cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* ee79d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_ee79d1: /* ee79d1: js 0xee79c1 */
  if (sf) goto L_ee79c1;
L_ee79d3: /* ee79d3: add byte ptr [ebp + 0x78], dh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x78u))); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebp + 0x78u), r);
  }
/* ee79d6: out dx, al */
  guest_unsupported(0xee79d6); /* out dx, al */
/* ee79d7: add byte ptr [ebp + 0x78], ah */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x78u))); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebp + 0x78u), r);
  }
  goto L_ee79da;
L_ee79d9: /* ee79d9: js 0xee79c9 */
  if (sf) goto L_ee79c9;
  goto L_ee79db;
L_ee79da: /* ee79da: out dx, al */
  guest_unsupported(0xee79da); /* out dx, al */
L_ee79db: /* ee79db: add byte ptr [ebp - 0x7aff1188], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8500ee78u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  W8((uint32_t)(ebp + 0x8500ee78u), r);
  }
L_ee79e1: /* ee79e1: js 0xee79d1 */
  if (sf) goto L_ee79d1;
L_ee79e3: /* ee79e3: add byte ptr [eax - 0x78ff1188], bh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8700ee78u))); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  W8((uint32_t)(eax + 0x8700ee78u), r);
  }
L_ee79e9: /* ee79e9: jns 0xee79d9 */
  if (!sf) goto L_ee79d9;
L_ee79eb: /* ee79eb: add byte ptr [esi - 0x47ff1188], bh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb800ee78u))); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  W8((uint32_t)(esi + 0xb800ee78u), r);
  }
/* ee79f1: js 0xee79e1 */
  if (sf) goto L_ee79e1;
L_ee79f3: /* ee79f3: add byte ptr [esi - 0x47ff1188], bh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb800ee78u))); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  W8((uint32_t)(esi + 0xb800ee78u), r);
  }
/* ee79f9: js 0xee79e9 */
  if (sf) goto L_ee79e9;
L_ee79fb: /* ee79fb: add byte ptr [esi - 0x33ff1188], bh */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcc00ee78u))); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(esi + 0xcc00ee78u), r);
  }
L_ee7a01: guest_badaddr(0xee7a01); return;
}

void f_ee7a80(void) {
  LOAD_REGS();
L_ee7a80: /* ee7a80: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee7a82: ret  */
  esp += 4; SPILL(); return;
}

void f_ee7aa0(void) {
  LOAD_REGS();
L_ee7aa0: /* ee7aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7aa1: mov ebp, esp */
  ebp = esp;
/* ee7aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7aa5: push 0xeef2d0 */
  { uint32_t v = 0xeef2d0u; esp -= 4; W32(esp, v); }
/* ee7aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7ab8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7abd: mov esi, ecx */
  esi = ecx;
/* ee7abf: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* ee7ac6: xor eax, eax */
  eax = 0;
/* ee7ac8: mov ax, word ptr [esi + 0x3f32] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x3f32u))) & 0xffffu);
/* ee7acf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7ad0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7ad3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee7ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7adb: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee7ae0u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee7ae0: mov edx, dword ptr [esi + 0x3f34] */
  edx = R32((uint32_t)(esi + 0x3f34u));
/* ee7ae6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee7ae9: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* ee7aec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7aed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7aee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7aef: call 0xed16db */
  esp -= 4; W32(esp, 0xee7af4u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee7af4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7af7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7afa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7afb: mov eax, esi */
  eax = esi;
/* ee7afd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7afe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7b05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7b06: mov esp, ebp */
  esp = ebp;
/* ee7b08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7b09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee7b0c(void) {
  LOAD_REGS();
L_ee7b0c: /* ee7b0c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee7b0f: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee7b14: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee7b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7b18: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ee7b1b: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7b20u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee7b20(); return;
}

void f_ee7b20(void) {
  LOAD_REGS();
L_ee7b20: /* ee7b20: push 0xef6dd0 */
  { uint32_t v = 0xef6dd0u; esp -= 4; W32(esp, v); }
/* ee7b25: push 0xf053d4 */
  { uint32_t v = 0xf053d4u; esp -= 4; W32(esp, v); }
/* ee7b2a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee7b30u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee7b30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7b33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7b35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7b37: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7b3cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee7b3c: guest_badaddr(0xee7b3c); return;
}

void f_ee7b70(void) {
  LOAD_REGS();
L_ee7b70: /* ee7b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7b71: mov ebp, esp */
  ebp = esp;
/* ee7b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7b75: push 0xeef301 */
  { uint32_t v = 0xeef301u; esp -= 4; W32(esp, v); }
/* ee7b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7b88: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7b8d: mov esi, ecx */
  esi = ecx;
/* ee7b8f: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* ee7b96: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* ee7b99: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7b9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7b9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7ba0: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee7ba7: jne 0xee7bb0 */
  if (!zf) goto L_ee7bb0;
L_ee7ba9: /* ee7ba9: mov ebx, 0xf053dc */
  ebx = 0xf053dcu;
/* ee7bae: jmp 0xee7bcb */
  goto L_ee7bcb;
L_ee7bb0: /* ee7bb0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7bb3: jne 0xee7bbc */
  if (!zf) goto L_ee7bbc;
L_ee7bb5: /* ee7bb5: mov ebx, 0xf053ec */
  ebx = 0xf053ecu;
/* ee7bba: jmp 0xee7bcb */
  goto L_ee7bcb;
L_ee7bbc: /* ee7bbc: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee7bbf: mov ebx, 0xf053f8 */
  ebx = 0xf053f8u;
/* ee7bc4: je 0xee7bcb */
  if (zf) goto L_ee7bcb;
L_ee7bc6: /* ee7bc6: mov ebx, 0xf05408 */
  ebx = 0xf05408u;
L_ee7bcb: /* ee7bcb: xor eax, eax */
  eax = 0;
/* ee7bcd: mov ax, word ptr [esi + 0x3f32] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x3f32u))) & 0xffffu);
/* ee7bd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7bd5: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee7bdau); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee7bda: mov edx, dword ptr [esi + 0x3f34] */
  edx = R32((uint32_t)(esi + 0x3f34u));
/* ee7be0: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* ee7be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7be4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7be5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* ee7be8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7be9: call 0xed16db */
  esp -= 4; W32(esp, 0xee7beeu); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee7bee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7bf1: mov ecx, eax */
  ecx = eax;
/* ee7bf3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee7bf7: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee7bfdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee7bfd: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* ee7c00: mov edi, eax */
  edi = eax;
/* ee7c02: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee7c08u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee7c08: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee7c0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7c0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7c0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7c0e: push 0xf05418 */
  { uint32_t v = 0xf05418u; esp -= 4; W32(esp, v); }
/* ee7c13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7c14: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee7c1au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee7c1a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7c1d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee7c20: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* ee7c27: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee7c2b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee7c31u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee7c31: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7c34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7c35: mov eax, esi */
  eax = esi;
/* ee7c37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7c38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7c3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7c40: mov esp, ebp */
  esp = ebp;
/* ee7c42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7c43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee7c46(void) {
  LOAD_REGS();
L_ee7c46: /* ee7c46: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee7c49: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee7c4e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee7c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7c52: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee7c55: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7c5au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee7c5a(); return;
}

void f_ee7c5a(void) {
  LOAD_REGS();
L_ee7c5a: /* ee7c5a: push 0xef6e38 */
  { uint32_t v = 0xef6e38u; esp -= 4; W32(esp, v); }
/* ee7c5f: push 0xf05438 */
  { uint32_t v = 0xf05438u; esp -= 4; W32(esp, v); }
/* ee7c64: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee7c6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee7c6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7c6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7c6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7c71: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7c76u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee7c76: guest_badaddr(0xee7c76); return;
}

void f_ee7cd0(void) {
  LOAD_REGS();
L_ee7cd0: /* ee7cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7cd1: mov ebp, esp */
  ebp = esp;
/* ee7cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7cd5: push 0xeef320 */
  { uint32_t v = 0xeef320u; esp -= 4; W32(esp, v); }
/* ee7cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7ce8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7ceb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7cec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7ced: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ee7cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7cf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7cf4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* ee7cfb: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* ee7d01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7d03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7d04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7d05: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee7d0c: call 0xed16db */
  esp -= 4; W32(esp, 0xee7d11u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee7d11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7d14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7d17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7d18: mov eax, esi */
  eax = esi;
/* ee7d1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7d1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7d22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7d23: mov esp, ebp */
  esp = ebp;
/* ee7d25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7d26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee7d29(void) {
  LOAD_REGS();
L_ee7d29: /* ee7d29: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee7d2c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee7d31: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee7d34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7d35: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee7d38: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7d3du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee7d3d(); return;
}

void f_ee7d3d(void) {
  LOAD_REGS();
L_ee7d3d: /* ee7d3d: push 0xef6e90 */
  { uint32_t v = 0xef6e90u; esp -= 4; W32(esp, v); }
/* ee7d42: push 0xf056bc */
  { uint32_t v = 0xf056bcu; esp -= 4; W32(esp, v); }
/* ee7d47: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee7d4du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee7d4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7d50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7d52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7d54: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7d59u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee7d59: guest_badaddr(0xee7d59); return;
}

void f_ee7d90(void) {
  LOAD_REGS();
L_ee7d90: /* ee7d90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7d91: mov ebp, esp */
  ebp = esp;
/* ee7d93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7d95: push 0xeef330 */
  { uint32_t v = 0xeef330u; esp -= 4; W32(esp, v); }
/* ee7d9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7da1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7da8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7dab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7dad: mov esi, ecx */
  esi = ecx;
/* ee7daf: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* ee7db5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7db7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7db8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7dbb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee7dc2: je 0xee7e15 */
  if (zf) goto L_ee7e15;
L_ee7dc4: /* ee7dc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7dc5: call 0xeebbac */
  esp -= 4; W32(esp, 0xee7dcau); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* ee7dca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7dcc: je 0xee7def */
  if (zf) goto L_ee7def;
L_ee7dce: /* ee7dce: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee7dd3u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee7dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7dd4: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee7dd9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee7ddb: push 0xf056c4 */
  { uint32_t v = 0xf056c4u; esp -= 4; W32(esp, v); }
/* ee7de0: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* ee7de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7de6: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee7decu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee7dec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee7def: /* ee7def: mov dword ptr [esi + 0xbc], 0 */
  W32((uint32_t)(esi + 0xbcu), 0x0u);
/* ee7df9: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee7dff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee7e01: push 0xf05704 */
  { uint32_t v = 0xf05704u; esp -= 4; W32(esp, v); }
/* ee7e06: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* ee7e0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7e0c: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee7e12u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee7e12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee7e15: /* ee7e15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee7e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee7e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee7e1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee7e21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee7e22: mov esp, ebp */
  esp = ebp;
/* ee7e24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee7e25: ret  */
  esp += 4; SPILL(); return;
}

void f_ee7e26(void) {
  LOAD_REGS();
L_ee7e26: /* ee7e26: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee7e29: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee7e2e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee7e31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7e32: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee7e35: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7e3au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee7e3a(); return;
}

void f_ee7e3a(void) {
  LOAD_REGS();
L_ee7e3a: /* ee7e3a: push 0xef6ef0 */
  { uint32_t v = 0xef6ef0u; esp -= 4; W32(esp, v); }
/* ee7e3f: push 0xf05728 */
  { uint32_t v = 0xf05728u; esp -= 4; W32(esp, v); }
/* ee7e44: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee7e4au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee7e4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7e4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7e4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7e51: call 0xeec520 */
  esp -= 4; W32(esp, 0xee7e56u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee7e56: guest_badaddr(0xee7e56); return;
}

void f_ee7ea0(void) {
  LOAD_REGS();
L_ee7ea0: /* ee7ea0: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* ee7ea3: ret  */
  esp += 4; SPILL(); return;
}

void f_ee7ec0(void) {
  LOAD_REGS();
L_ee7ec0: /* ee7ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee7ec1: mov ebp, esp */
  ebp = esp;
/* ee7ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee7ec5: push 0xeef340 */
  { uint32_t v = 0xeef340u; esp -= 4; W32(esp, v); }
/* ee7eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee7ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee7ed8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee7edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee7edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7edd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee7ede: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee7ee1: mov edi, ecx */
  edi = ecx;
/* ee7ee3: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* ee7ee6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee7ee8: push 0xf05958 */
  { uint32_t v = 0xf05958u; esp -= 4; W32(esp, v); }
/* ee7eed: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee7ef0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee7ef7: call dword ptr [0xf0dadc] */
  esp -= 4; W32(esp, 0xee7efdu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* ee7efd: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee7f02: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee7f04: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7f07: mov eax, dword ptr [0xf0dac0] */
  eax = R32((uint32_t)(0xf0dac0u));
/* ee7f0c: mov ebx, dword ptr [0xf0dad0] */
  ebx = R32((uint32_t)(0xf0dad0u));
/* ee7f12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7f17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f19: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee7f1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7f1e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee7f20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7f20: mov esi, eax */
  esi = eax;
/* ee7f22: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7f25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7f27: je 0xee7f48 */
  if (zf) goto L_ee7f48;
L_ee7f29: /* ee7f29: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee7f2e: push 0xf05988 */
  { uint32_t v = 0xf05988u; esp -= 4; W32(esp, v); }
/* ee7f33: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* ee7f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f3a: mov ecx, esi */
  ecx = esi;
/* ee7f3c: call dword ptr [0xf0dabc] */
  esp -= 4; W32(esp, 0xee7f42u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* ee7f42: mov dword ptr [esi], 0xef4070 */
  W32((uint32_t)(esi), 0xef4070u);
L_ee7f48: /* ee7f48: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* ee7f4b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee7f4d: push 0xf05998 */
  { uint32_t v = 0xf05998u; esp -= 4; W32(esp, v); }
/* ee7f52: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee7f55: call dword ptr [0xf0dadc] */
  esp -= 4; W32(esp, 0xee7f5bu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* ee7f5b: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee7f61: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee7f63: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7f66: mov ecx, dword ptr [0xf0dac0] */
  ecx = R32((uint32_t)(0xf0dac0u));
/* ee7f6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7f71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee7f75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7f76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7f78: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee7f7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7f7a: mov esi, eax */
  esi = eax;
/* ee7f7c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7f7f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7f81: je 0xee7fa2 */
  if (zf) goto L_ee7fa2;
L_ee7f83: /* ee7f83: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee7f88: push 0xf059b8 */
  { uint32_t v = 0xf059b8u; esp -= 4; W32(esp, v); }
/* ee7f8d: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* ee7f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7f94: mov ecx, esi */
  ecx = esi;
/* ee7f96: call dword ptr [0xf0dabc] */
  esp -= 4; W32(esp, 0xee7f9cu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* ee7f9c: mov dword ptr [esi], 0xef4070 */
  W32((uint32_t)(esi), 0xef4070u);
L_ee7fa2: /* ee7fa2: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* ee7fa5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee7fa7: push 0xf059c8 */
  { uint32_t v = 0xf059c8u; esp -= 4; W32(esp, v); }
/* ee7fac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee7faf: call dword ptr [0xf0dadc] */
  esp -= 4; W32(esp, 0xee7fb5u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* ee7fb5: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* ee7fbb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee7fbd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee7fc0: mov edx, dword ptr [0xf0dac8] */
  edx = R32((uint32_t)(0xf0dac8u));
/* ee7fc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee7fcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7fcd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee7fcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee7fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee7fd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee7fd2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee7fd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee7fd4: mov esi, eax */
  esi = eax;
/* ee7fd6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee7fd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee7fdb: je 0xee7ffc */
  if (zf) goto L_ee7ffc;
L_ee7fdd: /* ee7fdd: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee7fe2: push 0xf059f4 */
  { uint32_t v = 0xf059f4u; esp -= 4; W32(esp, v); }
/* ee7fe7: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* ee7fec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee7fee: mov ecx, esi */
  ecx = esi;
/* ee7ff0: call dword ptr [0xf0dac4] */
  esp -= 4; W32(esp, 0xee7ff6u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* ee7ff6: mov dword ptr [esi], 0xef4150 */
  W32((uint32_t)(esi), 0xef4150u);
L_ee7ffc: /* ee7ffc: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* ee7fff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8001: push 0xf05a04 */
  { uint32_t v = 0xf05a04u; esp -= 4; W32(esp, v); }
/* ee8006: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* ee8009: call dword ptr [0xf0dadc] */
  esp -= 4; W32(esp, 0xee800fu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* ee800f: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee8014: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee8016: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8019: mov eax, dword ptr [0xf0dac0] */
  eax = R32((uint32_t)(0xf0dac0u));
/* ee801e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8022: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8023: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8025: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee8027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee802a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xee802cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee802c: mov esi, eax */
  esi = eax;
/* ee802e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8031: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8033: je 0xee8054 */
  if (zf) goto L_ee8054;
L_ee8035: /* ee8035: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* ee803a: push 0xf05a30 */
  { uint32_t v = 0xf05a30u; esp -= 4; W32(esp, v); }
/* ee803f: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* ee8044: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8046: mov ecx, esi */
  ecx = esi;
/* ee8048: call dword ptr [0xf0dabc] */
  esp -= 4; W32(esp, 0xee804eu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* ee804e: mov dword ptr [esi], 0xef4070 */
  W32((uint32_t)(esi), 0xef4070u);
L_ee8054: /* ee8054: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8057: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8059: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8060: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8061: mov esp, ebp */
  esp = ebp;
/* ee8063: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8064: ret  */
  esp += 4; SPILL(); return;
}

void f_ee8065(void) {
  LOAD_REGS();
L_ee8065: /* ee8065: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee8068: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee806d: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee8070: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8071: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee8074: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8079u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee8079(); return;
}

void f_ee8079(void) {
  LOAD_REGS();
L_ee8079: /* ee8079: push 0xef6f40 */
  { uint32_t v = 0xef6f40u; esp -= 4; W32(esp, v); }
/* ee807e: push 0xf05a40 */
  { uint32_t v = 0xf05a40u; esp -= 4; W32(esp, v); }
/* ee8083: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee8089u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee8089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee808c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee808e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8090: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8095u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee8095: guest_badaddr(0xee8095); return;
}

void f_ee8120(void) {
  LOAD_REGS();
L_ee8120: /* ee8120: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee8122: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee8126: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* ee8129: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee8140(void) {
  LOAD_REGS();
L_ee8140: /* ee8140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ee8144: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee8146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8147: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee814du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee814d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee8160(void) {
  LOAD_REGS();
L_ee8160: /* ee8160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8161: mov ebp, esp */
  ebp = esp;
/* ee8163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8165: push 0xeef364 */
  { uint32_t v = 0xeef364u; esp -= 4; W32(esp, v); }
/* ee816a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8178: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee817b: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* ee817e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ee8181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8182: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8184: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8188: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8189: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee818c: call dword ptr [0xf0dd58] */
  esp -= 4; W32(esp, 0xee8192u); SPILL(); f_6cc19e(); if (g_unwind) return; /* Engine!??0UNetConnection@@QAE@PAVUNetDriver@@ABVFURL@@@Z */ RELOAD();
/* ee8192: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8195: mov dword ptr [eax], 0xef6190 */
  W32((uint32_t)(eax), 0xef6190u);
/* ee819b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee819e: mov dword ptr [ecx + 0x28], 0xef6180 */
  W32((uint32_t)(ecx + 0x28u), 0xef6180u);
/* ee81a5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81a8: mov dword ptr [edx + 0x2c], 0xef617c */
  W32((uint32_t)(edx + 0x2cu), 0xef617cu);
/* ee81af: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81b2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ee81b5: add eax, 0x3f30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee81ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ee81bc: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ee81bf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ee81c2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* ee81c5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* ee81c8: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* ee81cb: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee81ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81d1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee81d4: mov dword ptr [eax + 0x3f40], ecx */
  W32((uint32_t)(eax + 0x3f40u), ecx);
/* ee81da: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81dd: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ee81e0: mov dword ptr [edx + 0x3f44], eax */
  W32((uint32_t)(edx + 0x3f44u), eax);
/* ee81e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81e9: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* ee81ec: mov dword ptr [ecx + 0x6c], edx */
  W32((uint32_t)(ecx + 0x6cu), edx);
/* ee81ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81f2: mov dword ptr [eax + 0xbc], 0x200 */
  W32((uint32_t)(eax + 0xbcu), 0x200u);
/* ee81fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee81ff: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee8206: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee820a: mov dword ptr [ecx + 0xc0], 0x20 */
  W32((uint32_t)(ecx + 0xc0u), 0x20u);
/* ee8214: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee8216: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee8219: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ee821c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ee821f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee8222: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee8224: jge 0xee822c */
  if ((sf == of)) goto L_ee822c;
L_ee8226: /* ee8226: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee822c: /* ee822c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee822f: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ee8235: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee8237: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ee823a: jge 0xee8242 */
  if ((sf == of)) goto L_ee8242;
L_ee823c: /* ee823c: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee8242: /* ee8242: mov ecx, dword ptr [0xf0daf8] */
  ecx = R32((uint32_t)(0xf0daf8u));
/* ee8248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ee824a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee824d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* ee824f: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ee8255: fstp qword ptr [edx + 0x3f4c] */
  WF64((uint32_t)(edx + 0x3f4cu), ST0); FPOP();
/* ee825b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee825e: call dword ptr [0xf0dff8] */
  esp -= 4; W32(esp, 0xee8264u); SPILL(); f_6c652d(); if (g_unwind) return; /* Engine!?InitOut@UNetConnection@@UAEXXZ */ RELOAD();
/* ee8264: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ee8267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8269: je 0xee832c */
  if (zf) goto L_ee832c;
L_ee826f: /* ee826f: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* ee8272: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee8275: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee827bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee827b: mov edi, dword ptr [0xf0dbc8] */
  edi = R32((uint32_t)(0xf0dbc8u));
/* ee8281: xor esi, esi */
  esi = 0;
L_ee8283: /* ee8283: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee8286: jge 0xee82b0 */
  if ((sf == of)) goto L_ee82b0;
L_ee8288: /* ee8288: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee828a: je 0xee82ad */
  if (zf) goto L_ee82ad;
L_ee828c: /* ee828c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* ee828f: cmp cx, 0x30 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* ee8293: jb 0xee82ad */
  if (cf) goto L_ee82ad;
L_ee8295: /* ee8295: cmp cx, 0x39 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ee8299: ja 0xee82ad */
  if ((!cf && !zf)) goto L_ee82ad;
L_ee829b: /* ee829b: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* ee829d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee829e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee82a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee82a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee82a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee82a5: je 0xee82aa */
  if (zf) goto L_ee82aa;
L_ee82a7: /* ee82a7: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_ee82aa: /* ee82aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee82ab: jmp 0xee8283 */
  goto L_ee8283;
L_ee82ad: /* ee82ad: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_ee82b0: /* ee82b0: jne 0xee82e8 */
  if (!zf) goto L_ee82e8;
L_ee82b2: /* ee82b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee82b4: jne 0xee82e8 */
  if (!zf) goto L_ee82e8;
L_ee82b6: /* ee82b6: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* ee82b9: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee82bc: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee82c2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee82c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee82c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee82c5: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xee82cbu); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* ee82cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee82ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee82cf: call 0xeebbb8 */
  esp -= 4; W32(esp, 0xee82d4u); SPILL(); f_eebbb8(); if (g_unwind) return; RELOAD();
/* ee82d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee82d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee82d8: add eax, 0x3f34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f34u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee82dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee82de: call 0xed1a55 */
  esp -= 4; W32(esp, 0xee82e3u); SPILL(); f_ed1a55(); if (g_unwind) return; RELOAD();
/* ee82e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee82e6: jmp 0xee832c */
  goto L_ee832c;
L_ee82e8: /* ee82e8: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee82ee: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee82f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee82f2: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* ee82f7: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* ee82fc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xee82feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee82fe: mov esi, eax */
  esi = eax;
/* ee8300: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* ee8303: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8305: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee8309: je 0xee8321 */
  if (zf) goto L_ee8321;
L_ee830b: /* ee830b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* ee830e: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee8311: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee8317u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee8317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8318: mov ecx, esi */
  ecx = esi;
/* ee831a: call 0xed1429 */
  esp -= 4; W32(esp, 0xee831fu); SPILL(); f_ed1429(); if (g_unwind) return; RELOAD();
/* ee831f: jmp 0xee8323 */
  goto L_ee8323;
L_ee8321: /* ee8321: xor eax, eax */
  eax = 0;
L_ee8323: /* ee8323: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8326: mov dword ptr [ecx + 0x3f48], eax */
  W32((uint32_t)(ecx + 0x3f48u), eax);
L_ee832c: /* ee832c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee832f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8332: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8333: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8334: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee833b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee833c: mov esp, ebp */
  esp = ebp;
/* ee833e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee833f: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_ee8342(void) {
  LOAD_REGS();
L_ee8342: /* ee8342: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee8345: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee834a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* ee834d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee834e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* ee8351: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8356u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee8356(); return;
}

void f_ee8356(void) {
  LOAD_REGS();
L_ee8356: /* ee8356: push 0xef6f90 */
  { uint32_t v = 0xef6f90u; esp -= 4; W32(esp, v); }
/* ee835b: push 0xf05398 */
  { uint32_t v = 0xf05398u; esp -= 4; W32(esp, v); }
/* ee8360: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee8366u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee8366: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee836b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee836d: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8372u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee8372: guest_badaddr(0xee8372); return;
}

void f_ee8410(void) {
  LOAD_REGS();
L_ee8410: /* ee8410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8411: mov ebp, esp */
  ebp = esp;
/* ee8413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8415: push 0xeef389 */
  { uint32_t v = 0xeef389u; esp -= 4; W32(esp, v); }
/* ee841a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8428: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee842b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee842c: mov edx, ecx */
  edx = ecx;
/* ee842e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee842f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee8432: mov eax, dword ptr [edx + 0x3f48] */
  eax = R32((uint32_t)(edx + 0x3f48u));
/* ee8438: xor ebx, ebx */
  ebx = 0;
/* ee843a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee843c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee843d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8440: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ee8443: je 0xee8561 */
  if (zf) goto L_ee8561;
L_ee8449: /* ee8449: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee844c: jne 0xee85a9 */
  if (!zf) goto L_ee85a9;
L_ee8452: /* ee8452: cmp word ptr [eax + 0x108], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x108u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* ee8459: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* ee845f: je 0xee84d4 */
  if (zf) goto L_ee84d4;
L_ee8461: /* ee8461: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8463: je 0xee84d4 */
  if (zf) goto L_ee84d4;
L_ee8465: /* ee8465: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* ee846b: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* ee846e: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* ee8471: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ee8473: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee8475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8476: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee847b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee847d: push 0xf053a0 */
  { uint32_t v = 0xf053a0u; esp -= 4; W32(esp, v); }
/* ee8482: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* ee8487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8488: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee848eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee848e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8491: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* ee8494: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* ee8497: mov dword ptr [ecx + 0x6c], 1 */
  W32((uint32_t)(ecx + 0x6cu), 0x1u);
/* ee849e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee84a1: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee84a7: mov eax, dword ptr [edx + 0x3f48] */
  eax = R32((uint32_t)(edx + 0x3f48u));
/* ee84ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee84af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee84b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee84b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee84b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee84b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee84b8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee84bb: mov dword ptr [eax + 0x3f48], ebx */
  W32((uint32_t)(eax + 0x3f48u), ebx);
/* ee84c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee84c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee84cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee84cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee84cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee84ce: mov esp, ebp */
  esp = ebp;
/* ee84d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee84d1: ret 8 */
  esp += 12; SPILL(); return;
L_ee84d4: /* ee84d4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ee84d6: mov dword ptr [edx + 0x3f34], eax */
  W32((uint32_t)(edx + 0x3f34u), eax);
/* ee84dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee84df: mov eax, dword ptr [ecx + 0x3f48] */
  eax = R32((uint32_t)(ecx + 0x3f48u));
/* ee84e5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ee84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee84e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee84e9: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* ee84ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee84ed: call 0xed16db */
  esp -= 4; W32(esp, 0xee84f2u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee84f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee84f5: mov esi, eax */
  esi = eax;
/* ee84f7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee84fa: mov eax, dword ptr [eax + 0x3f48] */
  eax = R32((uint32_t)(eax + 0x3f48u));
/* ee8500: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee8503: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8505: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee8509: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xee850fu); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* ee850f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8512: mov ecx, esi */
  ecx = esi;
/* ee8514: mov edi, eax */
  edi = eax;
/* ee8516: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee851cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee851c: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee8522: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8524: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8525: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8526: push 0xf053a8 */
  { uint32_t v = 0xf053a8u; esp -= 4; W32(esp, v); }
/* ee852b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee852c: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee8532u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee8532: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8535: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ee8538: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee853b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee8541u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee8541: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8544: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ee854a: mov eax, dword ptr [eax + 0x3f48] */
  eax = R32((uint32_t)(eax + 0x3f48u));
/* ee8550: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ee8552: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8555: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xee8558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee8558: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee855b: mov dword ptr [eax + 0x3f48], ebx */
  W32((uint32_t)(eax + 0x3f48u), ebx);
L_ee8561: /* ee8561: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee8563: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8566: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* ee8569: sub dword ptr [ecx + 0x84], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x84u), r);
  }
/* ee856f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8572: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ee8575: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ee8577: lea edx, [eax + 0x3f30] */
  edx = (uint32_t)(eax + 0x3f30u);
/* ee857d: mov eax, dword ptr [eax + 0x3f40] */
  eax = R32((uint32_t)(eax + 0x3f40u));
/* ee8583: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8584: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ee8587: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8588: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8589: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee858a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee858b: call 0xeebc00 */
  esp -= 4; W32(esp, 0xee8590u); SPILL(); f_eebc00(); if (g_unwind) return; RELOAD();
/* ee8590: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee8592: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8595: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* ee8598: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* ee859e: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee85a1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee85a3: mov dword ptr [ecx + 0x84], edx */
  W32((uint32_t)(ecx + 0x84u), edx);
L_ee85a9: /* ee85a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee85ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee85ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee85ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee85b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee85b6: mov esp, ebp */
  esp = ebp;
/* ee85b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee85b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ee85bc(void) {
  LOAD_REGS();
L_ee85bc: /* ee85bc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee85bf: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee85c4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* ee85c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee85c8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ee85cb: call 0xeec520 */
  esp -= 4; W32(esp, 0xee85d0u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee85d0(); return;
}

void f_ee85d0(void) {
  LOAD_REGS();
L_ee85d0: /* ee85d0: push 0xef6fe4 */
  { uint32_t v = 0xef6fe4u; esp -= 4; W32(esp, v); }
/* ee85d5: push 0xf053cc */
  { uint32_t v = 0xf053ccu; esp -= 4; W32(esp, v); }
/* ee85da: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee85e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee85e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee85e3: xor ebx, ebx */
  ebx = 0;
/* ee85e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee85e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee85e7: call 0xeec520 */
  esp -= 4; W32(esp, 0xee85ecu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee85ec: guest_badaddr(0xee85ec); return;
}

void f_ee8670(void) {
  LOAD_REGS();
L_ee8670: /* ee8670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8671: mov ebp, esp */
  ebp = esp;
/* ee8673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8675: push 0xeef3c4 */
  { uint32_t v = 0xeef3c4u; esp -= 4; W32(esp, v); }
/* ee867a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8688: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee868b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee868c: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* ee868f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8690: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8691: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8694: xor edi, edi */
  edi = 0;
/* ee8696: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8697: mov esi, ecx */
  esi = ecx;
/* ee8699: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ee869c: call 0xed16d6 */
  esp -= 4; W32(esp, 0xee86a1u); SPILL(); f_ed16d6(); if (g_unwind) return; RELOAD();
/* ee86a1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee86a4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee86a6: je 0xee86fa */
  if (zf) goto L_ee86fa;
L_ee86a8: /* ee86a8: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* ee86aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee86ac: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee86ae: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xee86b3u); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* ee86b3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee86b6: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* ee86bc: jne 0xee870f */
  if (!zf) goto L_ee870f;
L_ee86be: /* ee86be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee86bf: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
/* ee86c5: call 0xed17b7 */
  esp -= 4; W32(esp, 0xee86cau); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* ee86ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee86cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee86ce: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* ee86d1: push 0xf05730 */
  { uint32_t v = 0xf05730u; esp -= 4; W32(esp, v); }
/* ee86d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee86d7: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee86ddu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee86dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee86e0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_ee86e4: /* ee86e4: mov ecx, ebx */
  ecx = ebx;
L_ee86e6: /* ee86e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee86e7: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee86edu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee86ed: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee86f0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee86f4: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee86fau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee86fa: /* ee86fa: xor eax, eax */
  eax = 0;
/* ee86fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee86ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8706: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8707: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8708: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8709: mov esp, ebp */
  esp = ebp;
/* ee870b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee870c: ret 0x10 */
  esp += 20; SPILL(); return;
L_ee870f: /* ee870f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee8711: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* ee8714: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8715: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ee8717: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee871c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee871d: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* ee8724: call 0xeebc24 */
  esp -= 4; W32(esp, 0xee8729u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* ee8729: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee872b: je 0xee8755 */
  if (zf) goto L_ee8755;
L_ee872d: /* ee872d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee872f: call 0xed17b7 */
  esp -= 4; W32(esp, 0xee8734u); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* ee8734: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8738: push 0xf05768 */
  { uint32_t v = 0xf05768u; esp -= 4; W32(esp, v); }
/* ee873d: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* ee8740: push 0xf05778 */
  { uint32_t v = 0xf05778u; esp -= 4; W32(esp, v); }
/* ee8745: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8746: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee874cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee874c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee874f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee8753: jmp 0xee86e4 */
  goto L_ee86e4;
L_ee8755: /* ee8755: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* ee875b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee875d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee875e: call 0xed128a */
  esp -= 4; W32(esp, 0xee8763u); SPILL(); f_ed128a(); if (g_unwind) return; RELOAD();
/* ee8763: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8766: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8768: je 0xee8781 */
  if (zf) goto L_ee8781;
L_ee876a: /* ee876a: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee8770: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8772: push 0xf057c8 */
  { uint32_t v = 0xf057c8u; esp -= 4; W32(esp, v); }
/* ee8777: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8778: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee877eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee877e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee8781: /* ee8781: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* ee8787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8788: call 0xed1294 */
  esp -= 4; W32(esp, 0xee878du); SPILL(); f_ed1294(); if (g_unwind) return; RELOAD();
/* ee878d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8790: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8792: je 0xee87ab */
  if (zf) goto L_ee87ab;
L_ee8794: /* ee8794: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee879a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee879c: push 0xf05810 */
  { uint32_t v = 0xf05810u; esp -= 4; W32(esp, v); }
/* ee87a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee87a2: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee87a8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee87a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee87ab: /* ee87ab: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ee87ae: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee87b4: mov eax, ebx */
  eax = ebx;
/* ee87b6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* ee87b8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ee87ba: and eax, 0xfffe8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffe8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee87bf: add eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee87c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee87c6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee87c9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ee87cc: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee87cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee87d0: push 0x1002 */
  { uint32_t v = 0x1002u; esp -= 4; W32(esp, v); }
/* ee87d5: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee87da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee87db: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* ee87e2: call 0xeebc24 */
  esp -= 4; W32(esp, 0xee87e7u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* ee87e7: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee87ed: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee87f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee87f1: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ee87f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee87f5: push 0x1002 */
  { uint32_t v = 0x1002u; esp -= 4; W32(esp, v); }
/* ee87fa: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee87ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8800: call 0xeebc30 */
  esp -= 4; W32(esp, 0xee8805u); SPILL(); f_eebc30(); if (g_unwind) return; RELOAD();
/* ee8805: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8808: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee880e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee880f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8813: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* ee8818: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee881d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee881e: call 0xeebc24 */
  esp -= 4; W32(esp, 0xee8823u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* ee8823: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee8829: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee882c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee882d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ee8830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8831: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* ee8836: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* ee883b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee883c: call 0xeebc30 */
  esp -= 4; W32(esp, 0xee8841u); SPILL(); f_eebc30(); if (g_unwind) return; RELOAD();
/* ee8841: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee8844: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee8847: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee884d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee884e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8851: push 0xf05854 */
  { uint32_t v = 0xf05854u; esp -= 4; W32(esp, v); }
/* ee8856: push 0xf05864 */
  { uint32_t v = 0xf05864u; esp -= 4; W32(esp, v); }
/* ee885b: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* ee8860: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8861: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee8867u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee8867: mov word ptr [esi + 0xac], 2 */
  W16((uint32_t)(esi + 0xacu), 0x2u);
/* ee8870: mov eax, dword ptr [0xf0db08] */
  eax = R32((uint32_t)(0xf0db08u));
/* ee8875: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee8877: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee887a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee887b: call 0xed15a5 */
  esp -= 4; W32(esp, 0xee8880u); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* ee8880: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8883: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8885: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* ee888b: mov word ptr [esi + 0xae], di */
  W16((uint32_t)(esi + 0xaeu), (edi & 0xffffu));
/* ee8892: jne 0xee88c4 */
  if (!zf) goto L_ee88c4;
L_ee8894: /* ee8894: call dword ptr [0xf0dbd0] */
  esp -= 4; W32(esp, 0xee889au); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* ee889a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* ee889d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ee88a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee88a1: push 0xf05898 */
  { uint32_t v = 0xf05898u; esp -= 4; W32(esp, v); }
/* ee88a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee88a7: call dword ptr [0xf0d974] */
  esp -= 4; W32(esp, 0xee88adu); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* ee88ad: xor edx, edx */
  edx = 0;
/* ee88af: mov dx, word ptr [ebx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* ee88b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee88b5: mov edi, eax */
  edi = eax;
/* ee88b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee88b8: call 0xeebbca */
  esp -= 4; W32(esp, 0xee88bdu); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* ee88bd: mov word ptr [esi + 0xae], ax */
  W16((uint32_t)(esi + 0xaeu), (eax & 0xffffu));
L_ee88c4: /* ee88c4: xor eax, eax */
  eax = 0;
/* ee88c6: mov ax, word ptr [esi + 0xae] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xaeu))) & 0xffffu);
/* ee88cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee88ce: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee88d3u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee88d3: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee88d9: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* ee88db: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* ee88dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee88df: and edi, 0xffffffed */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffedu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ee88e2: movzx ebx, ax */
  ebx = (uint32_t)((eax & 0xffffu));
/* ee88e5: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ee88e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee88e9: lea eax, [esi + 0xac] */
  eax = (uint32_t)(esi + 0xacu);
/* ee88ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee88f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee88f1: call 0xed13f2 */
  esp -= 4; W32(esp, 0xee88f6u); SPILL(); f_ed13f2(); if (g_unwind) return; RELOAD();
/* ee88f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee88f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee88fb: jne 0xee892c */
  if (!zf) goto L_ee892c;
L_ee88fd: /* ee88fd: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee88ff: call 0xed17b7 */
  esp -= 4; W32(esp, 0xee8904u); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* ee8904: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8909: push 0xf058a4 */
  { uint32_t v = 0xf058a4u; esp -= 4; W32(esp, v); }
/* ee890e: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* ee8911: push 0xf058b8 */
  { uint32_t v = 0xf058b8u; esp -= 4; W32(esp, v); }
/* ee8916: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8917: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee891du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee891d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8920: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ee8923: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee8927: jmp 0xee86e6 */
  goto L_ee86e6;
L_ee892c: /* ee892c: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* ee8932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8933: call 0xed17ee */
  esp -= 4; W32(esp, 0xee8938u); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* ee8938: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee893b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee893d: jne 0xee896d */
  if (!zf) goto L_ee896d;
L_ee893f: /* ee893f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8941: call 0xed17b7 */
  esp -= 4; W32(esp, 0xee8946u); SPILL(); f_ed17b7(); if (g_unwind) return; RELOAD();
/* ee8946: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee894a: push 0xf05900 */
  { uint32_t v = 0xf05900u; esp -= 4; W32(esp, v); }
/* ee894f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee8952: push 0xf05910 */
  { uint32_t v = 0xf05910u; esp -= 4; W32(esp, v); }
/* ee8957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8958: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xee895eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ee895e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8961: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ee8964: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee8968: jmp 0xee86e6 */
  goto L_ee86e6;
L_ee896d: /* ee896d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8970: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8971: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8972: mov eax, 1 */
  eax = 0x1u;
/* ee8977: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee897e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee897f: mov esp, ebp */
  esp = ebp;
/* ee8981: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8982: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ee8985(void) {
  LOAD_REGS();
L_ee8985: /* ee8985: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee8988: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee898d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ee8990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8991: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* ee8994: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8999u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee8999(); return;
}

void f_ee8999(void) {
  LOAD_REGS();
L_ee8999: /* ee8999: push 0xef7030 */
  { uint32_t v = 0xef7030u; esp -= 4; W32(esp, v); }
/* ee899e: push 0xf05950 */
  { uint32_t v = 0xf05950u; esp -= 4; W32(esp, v); }
/* ee89a3: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee89a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee89a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee89ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee89ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee89b0: call 0xeec520 */
  esp -= 4; W32(esp, 0xee89b5u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee89b5: guest_badaddr(0xee89b5); return;
}

void f_ee8aa0(void) {
  LOAD_REGS();
L_ee8aa0: /* ee8aa0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee8aa3: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* ee8aa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8aaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8aab: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ee8aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8ab0: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ee8ab4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8ab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8ab6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* ee8aba: mov dword ptr [esp + 0x14], 0x10 */
  W32((uint32_t)(esp + 0x14u), 0x10u);
/* ee8ac2: call 0xeebbc4 */
  esp -= 4; W32(esp, 0xee8ac7u); SPILL(); f_eebbc4(); if (g_unwind) return; RELOAD();
/* ee8ac7: mov eax, dword ptr [esp + 0xe] */
  eax = R32((uint32_t)(esp + 0xeu));
/* ee8acb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8acc: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee8ad1u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee8ad1: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* ee8ad4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ee8ad8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ee8adc: mov ecx, 6 */
  ecx = 0x6u;
/* ee8ae1: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* ee8ae5: mov edi, eax */
  edi = eax;
/* ee8ae7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ee8ae9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8aeb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8aee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee8b20(void) {
  LOAD_REGS();
L_ee8b20: /* ee8b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8b21: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee8b23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8b25: mov esi, ecx */
  esi = ecx;
/* ee8b27: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee8b2du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee8b2d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ee8b31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee8b33: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ee8b35: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* ee8b38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8b39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee8b50(void) {
  LOAD_REGS();
L_ee8b50: /* ee8b50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8b51: mov ebp, esp */
  ebp = esp;
/* ee8b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8b55: push 0xeef3e0 */
  { uint32_t v = 0xeef3e0u; esp -= 4; W32(esp, v); }
/* ee8b5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8b61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8b68: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee8b6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee8b6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8b6f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* ee8b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8b74: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ee8b77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8b7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8b7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8b7d: mov esi, ecx */
  esi = ecx;
/* ee8b7f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee8b86: call dword ptr [0xf0dd60] */
  esp -= 4; W32(esp, 0xee8b8cu); SPILL(); f_6cb3c0(); if (g_unwind) return; /* Engine!?InitConnect@UNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */ RELOAD();
/* ee8b8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8b8e: jne 0xee8ba5 */
  if (!zf) goto L_ee8ba5;
L_ee8b90: /* ee8b90: xor eax, eax */
  eax = 0;
/* ee8b92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8b95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8b9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8b9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8b9f: mov esp, ebp */
  esp = ebp;
/* ee8ba1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8ba2: ret 0xc */
  esp += 16; SPILL(); return;
L_ee8ba5: /* ee8ba5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee8ba8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8ba9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8baa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8bab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8bad: mov ecx, esi */
  ecx = esi;
/* ee8baf: call 0xed1857 */
  esp -= 4; W32(esp, 0xee8bb4u); SPILL(); f_ed1857(); if (g_unwind) return; RELOAD();
/* ee8bb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8bb6: je 0xee8b90 */
  if (zf) goto L_ee8b90;
L_ee8bb8: /* ee8bb8: xor edx, edx */
  edx = 0;
/* ee8bba: mov dx, word ptr [edi + 0x18] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x18u))) & 0xffffu);
/* ee8bbe: mov word ptr [ebp - 0x28], 2 */
  W16((uint32_t)(ebp + 0xffffffd8u), 0x2u);
/* ee8bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8bc5: call 0xeebbca */
  esp -= 4; W32(esp, 0xee8bcau); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* ee8bca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8bcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8bce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8bd0: mov word ptr [ebp - 0x26], ax */
  W16((uint32_t)(ebp + 0xffffffdau), (eax & 0xffffu));
/* ee8bd4: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ee8bd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8bd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8bda: call 0xed1839 */
  esp -= 4; W32(esp, 0xee8bdfu); SPILL(); f_ed1839(); if (g_unwind) return; RELOAD();
/* ee8bdf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8be2: xor ebx, ebx */
  ebx = 0;
/* ee8be4: call dword ptr [0xf0d970] */
  esp -= 4; W32(esp, 0xee8beau); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* ee8bea: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee8bf0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8bf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8bf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8bf5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8bf6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8bf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8bf9: push 0xf0a340 */
  { uint32_t v = 0xf0a340u; esp -= 4; W32(esp, v); }
/* ee8bfe: call dword ptr [0xf0dad0] */
  esp -= 4; W32(esp, 0xee8c04u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* ee8c04: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8c07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8c09: je 0xee8c3d */
  if (zf) goto L_ee8c3d;
L_ee8c0b: /* ee8c0b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee8c0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8c0f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8c11: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee8c13: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee8c16: mov ecx, esp */
  ecx = esp;
/* ee8c18: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* ee8c1a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee8c1d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* ee8c20: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee8c23: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* ee8c26: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee8c29: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* ee8c2c: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* ee8c32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8c34: mov ecx, eax */
  ecx = eax;
/* ee8c36: call 0xed1726 */
  esp -= 4; W32(esp, 0xee8c3bu); SPILL(); f_ed1726(); if (g_unwind) return; RELOAD();
/* ee8c3b: jmp 0xee8c3f */
  goto L_ee8c3f;
L_ee8c3d: /* ee8c3d: xor eax, eax */
  eax = 0;
L_ee8c3f: /* ee8c3f: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ee8c42: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* ee8c45: xor eax, eax */
  eax = 0;
/* ee8c47: mov ax, word ptr [esi + 0xae] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xaeu))) & 0xffffu);
/* ee8c4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8c4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8c50: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee8c55u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee8c55: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee8c5b: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* ee8c5e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee8c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8c61: push 0xf05468 */
  { uint32_t v = 0xf05468u; esp -= 4; W32(esp, v); }
/* ee8c66: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* ee8c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8c6c: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee8c72u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee8c72: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* ee8c75: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8c78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8c7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8c7c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee8c7e: mov ecx, esi */
  ecx = esi;
/* ee8c80: call dword ptr [0xf0dd5c] */
  esp -= 4; W32(esp, 0xee8c86u); SPILL(); f_6c74cd(); if (g_unwind) return; /* Engine!?CreateChannel@UNetConnection@@QAEPAVUChannel@@W4EChannelType@@HH@Z */ RELOAD();
/* ee8c86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8c89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8c8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8c8b: mov eax, 1 */
  eax = 0x1u;
/* ee8c90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8c97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8c98: mov esp, ebp */
  esp = ebp;
/* ee8c9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8c9b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ee8c9e(void) {
  LOAD_REGS();
L_ee8c9e: /* ee8c9e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee8ca1: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee8ca6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee8ca9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8caa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee8cad: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8cb2u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee8cb2(); return;
}

void f_ee8cb2(void) {
  LOAD_REGS();
L_ee8cb2: /* ee8cb2: push 0xef7078 */
  { uint32_t v = 0xef7078u; esp -= 4; W32(esp, v); }
/* ee8cb7: push 0xf054a8 */
  { uint32_t v = 0xf054a8u; esp -= 4; W32(esp, v); }
/* ee8cbc: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee8cc2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee8cc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8cc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8cc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8cc9: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8cceu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee8cce: guest_badaddr(0xee8cce); return;
}

void f_ee8d30(void) {
  LOAD_REGS();
L_ee8d30: /* ee8d30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8d31: mov ebp, esp */
  ebp = esp;
/* ee8d33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8d35: push 0xeef3f9 */
  { uint32_t v = 0xeef3f9u; esp -= 4; W32(esp, v); }
/* ee8d3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8d41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8d48: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee8d4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee8d4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8d4f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* ee8d52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8d53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8d54: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ee8d57: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8d5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8d5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8d5d: mov esi, ecx */
  esi = ecx;
/* ee8d5f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee8d66: call dword ptr [0xf0dd64] */
  esp -= 4; W32(esp, 0xee8d6cu); SPILL(); f_6cac6d(); if (g_unwind) return; /* Engine!?InitListen@UNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */ RELOAD();
/* ee8d6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8d6e: jne 0xee8d85 */
  if (!zf) goto L_ee8d85;
L_ee8d70: /* ee8d70: xor eax, eax */
  eax = 0;
/* ee8d72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8d75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8d7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8d7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8d7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8d7f: mov esp, ebp */
  esp = ebp;
/* ee8d81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8d82: ret 0xc */
  esp += 16; SPILL(); return;
L_ee8d85: /* ee8d85: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ee8d88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8d89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8d8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8d8d: mov ecx, esi */
  ecx = esi;
/* ee8d8f: call 0xed1857 */
  esp -= 4; W32(esp, 0xee8d94u); SPILL(); f_ed1857(); if (g_unwind) return; RELOAD();
/* ee8d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8d96: je 0xee8d70 */
  if (zf) goto L_ee8d70;
L_ee8d98: /* ee8d98: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* ee8d9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8da0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8da1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ee8da4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8da5: call 0xed16db */
  esp -= 4; W32(esp, 0xee8daau); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee8daa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8dad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8dae: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* ee8db1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee8db5: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee8dbbu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee8dbb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee8dbe: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee8dc2: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee8dc8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee8dc8: xor ecx, ecx */
  ecx = 0;
/* ee8dca: mov cx, word ptr [esi + 0xae] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xaeu))) & 0xffffu);
/* ee8dd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8dd2: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee8dd7u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee8dd7: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* ee8dda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8ddb: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* ee8dde: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee8de4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee8de6: push 0xf054b0 */
  { uint32_t v = 0xf054b0u; esp -= 4; W32(esp, v); }
/* ee8deb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* ee8df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8df1: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xee8df7u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* ee8df7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8dfa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8dfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8dfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8dff: mov eax, 1 */
  eax = 0x1u;
/* ee8e04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8e0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8e0c: mov esp, ebp */
  esp = ebp;
/* ee8e0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8e0f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ee8e12(void) {
  LOAD_REGS();
L_ee8e12: /* ee8e12: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee8e15: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee8e1a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ee8e1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8e1e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee8e21: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8e26u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee8e26(); return;
}

void f_ee8e26(void) {
  LOAD_REGS();
L_ee8e26: /* ee8e26: push 0xef70b8 */
  { uint32_t v = 0xef70b8u; esp -= 4; W32(esp, v); }
/* ee8e2b: push 0xf054e0 */
  { uint32_t v = 0xf054e0u; esp -= 4; W32(esp, v); }
/* ee8e30: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee8e36u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee8e36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8e39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8e3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8e3d: call 0xeec520 */
  esp -= 4; W32(esp, 0xee8e42u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee8e42: guest_badaddr(0xee8e42); return;
}

void f_ee8ea0(void) {
  LOAD_REGS();
L_ee8ea0: /* ee8ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee8ea1: mov ebp, esp */
  ebp = esp;
/* ee8ea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee8ea5: push 0xeef458 */
  { uint32_t v = 0xeef458u; esp -= 4; W32(esp, v); }
/* ee8eaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee8eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8eb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee8eb8: sub esp, 0x2ec */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2ecu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee8ebe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee8ebf: xor eax, eax */
  eax = 0;
/* ee8ec1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8ec2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee8ec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee8ec6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ee8ec9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ee8ecc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee8ecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8ed0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ee8ed3: call dword ptr [0xf0dd6c] */
  esp -= 4; W32(esp, 0xee8ed9u); SPILL(); f_6cc77a(); if (g_unwind) return; /* Engine!?TickDispatch@UNetDriver@@UAEXM@Z */ RELOAD();
/* ee8ed9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ee8ee0: /* ee8ee0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee8ee2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8ee5: sub dword ptr [ecx + 0x88], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x88u), r);
  }
/* ee8eeb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ee8eee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8eef: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8ef2: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* ee8ef5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8ef8: push 0x240 */
  { uint32_t v = 0x240u; esp -= 4; W32(esp, v); }
/* ee8efd: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* ee8f03: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* ee8f0a: mov edx, dword ptr [ecx + 0xbc] */
  edx = R32((uint32_t)(ecx + 0xbcu));
/* ee8f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8f11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8f12: call 0xeebc06 */
  esp -= 4; W32(esp, 0xee8f17u); SPILL(); f_eebc06(); if (g_unwind) return; RELOAD();
/* ee8f17: mov ebx, eax */
  ebx = eax;
/* ee8f19: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* ee8f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee8f1e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8f21: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* ee8f27: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee8f2a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ee8f2c: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8f2f: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
/* ee8f35: jne 0xee8fcc */
  if (!zf) goto L_ee8fcc;
L_ee8f3b: /* ee8f3b: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee8f40u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee8f40: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8f45: je 0xee8fb9 */
  if (zf) goto L_ee8fb9;
L_ee8f47: /* ee8f47: cmp eax, 0x2746 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2746u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee8f4c: je 0xee8fcc */
  if (zf) goto L_ee8fcc;
L_ee8f4e: /* ee8f4e: mov eax, dword ptr [0xf05c08] */
  eax = R32((uint32_t)(0xf05c08u));
/* ee8f53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8f55: je 0xee8faf */
  if (zf) goto L_ee8faf;
L_ee8f57: /* ee8f57: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee8f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee8f5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8f5d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee8f60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8f61: call 0xed16db */
  esp -= 4; W32(esp, 0xee8f66u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee8f66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8f69: mov ecx, eax */
  ecx = eax;
/* ee8f6b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee8f6f: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee8f75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee8f75: mov edx, dword ptr [ebp - 0x2a] */
  edx = R32((uint32_t)(ebp + 0xffffffd6u));
/* ee8f78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8f79: mov esi, eax */
  esi = eax;
/* ee8f7b: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee8f80u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee8f80: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* ee8f83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee8f85: call 0xeebba0 */
  esp -= 4; W32(esp, 0xee8f8au); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* ee8f8a: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee8f90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee8f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8f93: push 0xf054e8 */
  { uint32_t v = 0xf054e8u; esp -= 4; W32(esp, v); }
/* ee8f98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee8f99: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee8f9fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee8f9f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8fa2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee8fa5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee8fa9: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee8fafu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee8faf: /* ee8faf: mov dword ptr [0xf05c08], 0 */
  W32((uint32_t)(0xf05c08u), 0x0u);
L_ee8fb9: /* ee8fb9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee8fbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee8fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee8fbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee8fc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee8fc6: mov esp, ebp */
  esp = ebp;
/* ee8fc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee8fc9: ret 4 */
  esp += 8; SPILL(); return;
L_ee8fcc: /* ee8fcc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8fcf: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* ee8fd2: xor edi, edi */
  edi = 0;
/* ee8fd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8fd6: je 0xee8ff4 */
  if (zf) goto L_ee8ff4;
L_ee8fd8: /* ee8fd8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ee8fdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee8fdc: add eax, 0x3f30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ee8fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee8fe2: call 0xed154b */
  esp -= 4; W32(esp, 0xee8fe7u); SPILL(); f_ed154b(); if (g_unwind) return; RELOAD();
/* ee8fe7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee8fea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee8fed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8fef: je 0xee8ff4 */
  if (zf) goto L_ee8ff4;
L_ee8ff1: /* ee8ff1: mov edi, dword ptr [ecx + 0x38] */
  edi = R32((uint32_t)(ecx + 0x38u));
L_ee8ff4: /* ee8ff4: xor esi, esi */
  esi = 0;
L_ee8ff6: /* ee8ff6: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee8ff9: jge 0xee9028 */
  if ((sf == of)) goto L_ee9028;
L_ee8ffb: /* ee8ffb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee8ffd: jne 0xee9028 */
  if (!zf) goto L_ee9028;
L_ee8fff: /* ee8fff: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ee9002: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* ee9005: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* ee9008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9009: add ecx, 0x3f30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee900f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9010: call 0xed154b */
  esp -= 4; W32(esp, 0xee9015u); SPILL(); f_ed154b(); if (g_unwind) return; RELOAD();
/* ee9015: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee9018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee901b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee901d: je 0xee9025 */
  if (zf) goto L_ee9025;
L_ee901f: /* ee901f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ee9022: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
L_ee9025: /* ee9025: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee9026: jmp 0xee8ff6 */
  goto L_ee8ff6;
L_ee9028: /* ee9028: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee902b: jne 0xee9125 */
  if (!zf) goto L_ee9125;
L_ee9031: /* ee9031: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9033: je 0xee90c0 */
  if (zf) goto L_ee90c0;
L_ee9039: /* ee9039: cmp edi, dword ptr [ecx + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee903c: je 0xee8ee0 */
  if (zf) goto L_ee8ee0;
L_ee9042: /* ee9042: cmp dword ptr [edi + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee9046: jne 0xee9056 */
  if (!zf) goto L_ee9056;
L_ee9048: /* ee9048: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* ee904e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9050: jne 0xee8ee0 */
  if (!zf) goto L_ee8ee0;
L_ee9056: /* ee9056: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* ee905c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee905e: je 0xee90b2 */
  if (zf) goto L_ee90b2;
L_ee9060: /* ee9060: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee9063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9066: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee9069: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee906a: call 0xed16db */
  esp -= 4; W32(esp, 0xee906fu); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee906f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9072: mov ecx, eax */
  ecx = eax;
/* ee9074: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee9078: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee907eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee907e: mov edx, dword ptr [ebp - 0x2a] */
  edx = R32((uint32_t)(ebp + 0xffffffd6u));
/* ee9081: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9082: mov esi, eax */
  esi = eax;
/* ee9084: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee9089u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee9089: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* ee908f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9091: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* ee9094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9096: push 0xf05530 */
  { uint32_t v = 0xf05530u; esp -= 4; W32(esp, v); }
/* ee909b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee909c: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee90a2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee90a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee90a5: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ee90a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee90ac: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee90b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ee90b2: /* ee90b2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ee90b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee90b6: mov ecx, edi */
  ecx = edi;
/* ee90b8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xee90bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee90bb: jmp 0xee8ee0 */
  goto L_ee8ee0;
L_ee90c0: /* ee90c0: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* ee90c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee90c8: je 0xee8ee0 */
  if (zf) goto L_ee8ee0;
L_ee90ce: /* ee90ce: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee90d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee90d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee90d4: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* ee90d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee90d8: call 0xed16db */
  esp -= 4; W32(esp, 0xee90ddu); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee90dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee90e0: mov ecx, eax */
  ecx = eax;
/* ee90e2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* ee90e6: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee90ecu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee90ec: mov esi, eax */
  esi = eax;
/* ee90ee: mov eax, dword ptr [ebp - 0x2a] */
  eax = R32((uint32_t)(ebp + 0xffffffd6u));
/* ee90f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee90f2: call 0xeebbbe */
  esp -= 4; W32(esp, 0xee90f7u); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* ee90f7: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee90fd: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* ee9100: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee9102: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9104: push 0xf055b8 */
  { uint32_t v = 0xf055b8u; esp -= 4; W32(esp, v); }
/* ee9109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee910a: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee9110u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee9110: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9113: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* ee9116: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee911a: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9120u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9120: jmp 0xee8ee0 */
  goto L_ee8ee0;
L_ee9125: /* ee9125: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* ee912b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee912d: jne 0xee913c */
  if (!zf) goto L_ee913c;
L_ee912f: /* ee912f: mov dword ptr [ecx + 0xa4], 5 */
  W32((uint32_t)(ecx + 0xa4u), 0x5u);
/* ee9139: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_ee913c: /* ee913c: xor ebx, ebx */
  ebx = 0;
/* ee913e: xor esi, esi */
  esi = 0;
L_ee9140: /* ee9140: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee9143: jge 0xee91d8 */
  if ((sf == of)) goto L_ee91d8;
L_ee9149: /* ee9149: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee914b: jne 0xee91d8 */
  if (!zf) goto L_ee91d8;
L_ee9151: /* ee9151: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ee9154: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* ee9157: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* ee915a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee915b: add ecx, 0x3f30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ee9161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9162: call 0xed193d */
  esp -= 4; W32(esp, 0xee9167u); SPILL(); f_ed193d(); if (g_unwind) return; RELOAD();
/* ee9167: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee916a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee916c: je 0xee91cf */
  if (zf) goto L_ee91cf;
L_ee916e: /* ee916e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* ee9170: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* ee9173: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* ee9176: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* ee9179: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ee917c: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ee917f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ee9182: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* ee9185: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee9187: jge 0xee918f */
  if ((sf == of)) goto L_ee918f;
L_ee9189: /* ee9189: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee918f: /* ee918f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* ee9192: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* ee9198: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ee919a: fild dword ptr [ebp - 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* ee919d: jge 0xee91a5 */
  if ((sf == of)) goto L_ee91a5;
L_ee919f: /* ee919f: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_ee91a5: /* ee91a5: mov edx, dword ptr [0xf0daf8] */
  edx = R32((uint32_t)(0xf0daf8u));
/* ee91ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ee91ad: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* ee91af: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* ee91b5: fsub qword ptr [0xef6910] */
  ST0 = ST0 - (F64((uint32_t)(0xef6910u)));
/* ee91bb: fcomp qword ptr [eax + 0x3f4c] */
  fpu_com(ST0, F64((uint32_t)(eax + 0x3f4cu)));
  FPOP();
/* ee91c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ee91c3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ee91c6: jp 0xee91d2 */
  if (pf) goto L_ee91d2;
L_ee91c8: /* ee91c8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ee91c9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee91ca: jmp 0xee9140 */
  goto L_ee9140;
L_ee91cf: /* ee91cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_ee91d2: /* ee91d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ee91d3: jmp 0xee9140 */
  goto L_ee9140;
L_ee91d8: /* ee91d8: cmp ebx, dword ptr [ecx + 0xa4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ee91de: jge 0xee930b */
  if ((sf == of)) goto L_ee930b;
L_ee91e4: /* ee91e4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee91e6: jne 0xee92f3 */
  if (!zf) goto L_ee92f3;
L_ee91ec: /* ee91ec: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* ee91ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ee91f1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xee91f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee91f3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ee91f6: jne 0xee8ee0 */
  if (!zf) goto L_ee8ee0;
L_ee91fc: /* ee91fc: xor esi, esi */
  esi = 0;
/* ee91fe: call dword ptr [0xf0d970] */
  esp -= 4; W32(esp, 0xee9204u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* ee9204: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee920a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee920c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee920d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee920e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee920f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9213: push 0xf0a340 */
  { uint32_t v = 0xf0a340u; esp -= 4; W32(esp, v); }
/* ee9218: call dword ptr [0xf0dad0] */
  esp -= 4; W32(esp, 0xee921eu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* ee921e: mov esi, eax */
  esi = eax;
/* ee9220: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9223: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9225: je 0xee9277 */
  if (zf) goto L_ee9277;
L_ee9227: /* ee9227: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee9228: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* ee922e: call dword ptr [0xf0df94] */
  esp -= 4; W32(esp, 0xee9234u); SPILL(); f_6c321a(); if (g_unwind) return; /* Engine!??0FURL@@QAE@PBG@Z */ RELOAD();
/* ee9234: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee9237: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee923a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee923b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee923c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ee923e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee9241: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* ee9244: mov eax, esp */
  eax = esp;
/* ee9246: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ee9248: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ee924b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ee924e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee9251: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ee9254: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ee9257: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* ee925a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ee925d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee9260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9261: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* ee9267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9268: mov ecx, esi */
  ecx = esi;
/* ee926a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee926e: call 0xed1726 */
  esp -= 4; W32(esp, 0xee9273u); SPILL(); f_ed1726(); if (g_unwind) return; RELOAD();
/* ee9273: mov edi, eax */
  edi = eax;
/* ee9275: jmp 0xee9279 */
  goto L_ee9279;
L_ee9277: /* ee9277: xor edi, edi */
  edi = 0;
L_ee9279: /* ee9279: test byte ptr [ebp - 0x1c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee927d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee9284: je 0xee929b */
  if (zf) goto L_ee929b;
L_ee9286: /* ee9286: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ee9289: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ee928c: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* ee9292: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ee9295: call dword ptr [0xf0df60] */
  esp -= 4; W32(esp, 0xee929bu); SPILL(); f_6ccd7e(); if (g_unwind) return; /* Engine!??1FURL@@QAE@XZ */ RELOAD();
L_ee929b: /* ee929b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee929e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee92a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee92a1: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* ee92a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee92a5: call 0xed16db */
  esp -= 4; W32(esp, 0xee92aau); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee92aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee92ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee92ae: lea ecx, [edi + 0x7c] */
  ecx = (uint32_t)(edi + 0x7cu);
/* ee92b1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee92b5: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee92bbu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee92bb: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* ee92be: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee92c2: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee92c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee92c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee92cb: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* ee92ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee92d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee92d1: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xee92d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee92d4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* ee92d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ee92d9: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ee92dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee92de: mov ecx, esi */
  ecx = esi;
/* ee92e0: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xee92e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ee92e6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee92e8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ee92ea: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* ee92ed: je 0xee8ee0 */
  if (zf) goto L_ee8ee0;
L_ee92f3: /* ee92f3: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* ee92f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee92f7: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* ee92fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee92fe: mov ecx, edi */
  ecx = edi;
/* ee9300: call dword ptr [0xf0dd68] */
  esp -= 4; W32(esp, 0xee9306u); SPILL(); f_6c6adc(); if (g_unwind) return; /* Engine!?ReceivedRawPacket@UNetConnection@@QAEXPAXH@Z */ RELOAD();
/* ee9306: jmp 0xee8ee0 */
  goto L_ee8ee0;
L_ee930b: /* ee930b: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* ee9311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9313: je 0xee8ee0 */
  if (zf) goto L_ee8ee0;
L_ee9319: /* ee9319: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ee931c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee931e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee931f: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* ee9322: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9323: call 0xed16db */
  esp -= 4; W32(esp, 0xee9328u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* ee9328: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee932b: mov ecx, eax */
  ecx = eax;
/* ee932d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ee9331: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9337u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9337: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* ee933d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee933e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ee9341: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* ee9347: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee9349: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee934a: push 0xf05650 */
  { uint32_t v = 0xf05650u; esp -= 4; W32(esp, v); }
/* ee934f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9350: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee9356u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee9356: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9359: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* ee935c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee9360: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9366u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9366: jmp 0xee8ee0 */
  goto L_ee8ee0;
}

void f_ee936b(void) {
  LOAD_REGS();
L_ee936b: /* ee936b: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* ee936e: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee9373: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* ee9376: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee9377: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* ee937a: call 0xeec520 */
  esp -= 4; W32(esp, 0xee937fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee937f(); return;
}

void f_ee937f(void) {
  LOAD_REGS();
L_ee937f: /* ee937f: push 0xef70f8 */
  { uint32_t v = 0xef70f8u; esp -= 4; W32(esp, v); }
/* ee9384: push 0xf056b4 */
  { uint32_t v = 0xf056b4u; esp -= 4; W32(esp, v); }
/* ee9389: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee938fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee938f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9392: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9394: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9396: call 0xeec520 */
  esp -= 4; W32(esp, 0xee939bu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee939b: guest_badaddr(0xee939b); return;
}

void f_ee94e0(void) {
  LOAD_REGS();
L_ee94e0: /* ee94e0: mov eax, 0xf0afc0 */
  eax = 0xf0afc0u;
/* ee94e5: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9500(void) {
  LOAD_REGS();
L_ee9500: /* ee9500: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ee9504: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9520(void) {
  LOAD_REGS();
L_ee9520: /* ee9520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9521: mov esi, ecx */
  esi = ecx;
/* ee9523: call dword ptr [0xf0d968] */
  esp -= 4; W32(esp, 0xee9529u); SPILL(); f_4e26e4(); if (g_unwind) return; /* Core!??0UCommandlet@@QAE@XZ */ RELOAD();
/* ee9529: mov dword ptr [esi], 0xef7140 */
  W32((uint32_t)(esi), 0xef7140u);
/* ee952f: mov eax, esi */
  eax = esi;
/* ee9531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9532: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9550(void) {
  LOAD_REGS();
L_ee9550: /* ee9550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9551: mov esi, ecx */
  esi = ecx;
/* ee9553: call 0xed16ef */
  esp -= 4; W32(esp, 0xee9558u); SPILL(); f_ed16ef(); if (g_unwind) return; RELOAD();
/* ee9558: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee955d: je 0xee956e */
  if (zf) goto L_ee956e;
L_ee955f: /* ee955f: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* ee9564: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9565: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee956bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee956b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee956e: /* ee956e: mov eax, esi */
  eax = esi;
/* ee9570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9571: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee9590(void) {
  LOAD_REGS();
L_ee9590: /* ee9590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee9592: push 0xeef489 */
  { uint32_t v = 0xeef489u; esp -= 4; W32(esp, v); }
/* ee9597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee959d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee959e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee95a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee95a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee95a7: mov esi, ecx */
  esi = ecx;
/* ee95a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee95ad: mov dword ptr [esi], 0xef7140 */
  W32((uint32_t)(esi), 0xef7140u);
/* ee95b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee95bb: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xee95c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ee95c1: mov ecx, esi */
  ecx = esi;
/* ee95c3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee95cb: call dword ptr [0xf0d964] */
  esp -= 4; W32(esp, 0xee95d1u); SPILL(); f_4e189d(); if (g_unwind) return; /* Core!??1UCommandlet@@UAE@XZ */ RELOAD();
/* ee95d1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee95d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee95d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee95dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee95e0: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9610(void) {
  LOAD_REGS();
L_ee9610: /* ee9610: mov eax, 0xf0b4f0 */
  eax = 0xf0b4f0u;
/* ee9615: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9630(void) {
  LOAD_REGS();
L_ee9630: /* ee9630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ee9634: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9650(void) {
  LOAD_REGS();
L_ee9650: /* ee9650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9651: mov esi, ecx */
  esi = ecx;
/* ee9653: call dword ptr [0xf0d968] */
  esp -= 4; W32(esp, 0xee9659u); SPILL(); f_4e26e4(); if (g_unwind) return; /* Core!??0UCommandlet@@QAE@XZ */ RELOAD();
/* ee9659: mov dword ptr [esi], 0xef71c8 */
  W32((uint32_t)(esi), 0xef71c8u);
/* ee965f: mov eax, esi */
  eax = esi;
/* ee9661: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9662: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9680(void) {
  LOAD_REGS();
L_ee9680: /* ee9680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9681: mov esi, ecx */
  esi = ecx;
/* ee9683: call 0xed1055 */
  esp -= 4; W32(esp, 0xee9688u); SPILL(); f_ed1055(); if (g_unwind) return; RELOAD();
/* ee9688: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ee968d: je 0xee969e */
  if (zf) goto L_ee969e;
L_ee968f: /* ee968f: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* ee9694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9695: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xee969bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ee969b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee969e: /* ee969e: mov eax, esi */
  eax = esi;
/* ee96a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee96a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee96c0(void) {
  LOAD_REGS();
L_ee96c0: /* ee96c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee96c2: push 0xeef4a9 */
  { uint32_t v = 0xeef4a9u; esp -= 4; W32(esp, v); }
/* ee96c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee96cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee96ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee96d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee96d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee96d7: mov esi, ecx */
  esi = ecx;
/* ee96d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ee96dd: mov dword ptr [esi], 0xef71c8 */
  W32((uint32_t)(esi), 0xef71c8u);
/* ee96e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ee96eb: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xee96f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ee96f1: mov ecx, esi */
  ecx = esi;
/* ee96f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ee96fb: call dword ptr [0xf0d964] */
  esp -= 4; W32(esp, 0xee9701u); SPILL(); f_4e189d(); if (g_unwind) return; /* Core!??1UCommandlet@@UAE@XZ */ RELOAD();
/* ee9701: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ee9705: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee9706: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee970d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9710: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9740(void) {
  LOAD_REGS();
L_ee9740: /* ee9740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee9741: mov ebp, esp */
  ebp = esp;
/* ee9743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee9745: push 0xeef4ed */
  { uint32_t v = 0xeef4edu; esp -= 4; W32(esp, v); }
/* ee974a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee9750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee9758: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee975b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee975c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee975d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee975e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee9761: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee9764: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee976b: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee9771u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee9771: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* ee9774: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee9778: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee977eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee977e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9780: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* ee9783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9784: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* ee9787: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9788: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee978c: call dword ptr [0xf0d95c] */
  esp -= 4; W32(esp, 0xee9792u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* ee9792: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9795: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9797: jne 0xee97b0 */
  if (!zf) goto L_ee97b0;
L_ee9799: /* ee9799: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* ee979f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee97a1: push 0xf05db4 */
  { uint32_t v = 0xf05db4u; esp -= 4; W32(esp, v); }
/* ee97a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee97a7: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xee97adu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* ee97ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee97b0: /* ee97b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee97b3: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee97b9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee97b9: mov edi, dword ptr [0xf0dba8] */
  edi = R32((uint32_t)(0xf0dba8u));
/* ee97bf: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* ee97c1: push 0xf05df0 */
  { uint32_t v = 0xf05df0u; esp -= 4; W32(esp, v); }
/* ee97c6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee97c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee97cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee97cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee97ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee97cf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee97d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee97d3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee97d6: call dword ptr [0xf0d960] */
  esp -= 4; W32(esp, 0xee97dcu); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* ee97dc: push 0xf05dfc */
  { uint32_t v = 0xf05dfcu; esp -= 4; W32(esp, v); }
/* ee97e1: mov ecx, eax */
  ecx = eax;
/* ee97e3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* ee97e7: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xee97edu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ee97ed: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee97f0: mov esi, eax */
  esi = eax;
/* ee97f2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee97f5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee97fbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee97fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee97fd: je 0xee9849 */
  if (zf) goto L_ee9849;
L_ee97ff: /* ee97ff: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* ee9802: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9804: je 0xee980b */
  if (zf) goto L_ee980b;
L_ee9806: /* ee9806: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* ee9809: jmp 0xee980d */
  goto L_ee980d;
L_ee980b: /* ee980b: xor esi, esi */
  esi = 0;
L_ee980d: /* ee980d: push 0xf05e08 */
  { uint32_t v = 0xf05e08u; esp -= 4; W32(esp, v); }
/* ee9812: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9814u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9814: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9817: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ee9819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee981a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* ee981d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee981e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee9821: call dword ptr [0xf0dc0c] */
  esp -= 4; W32(esp, 0xee9827u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* ee9827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9828: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee982b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ee982f: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xee9835u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ee9835: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ee9838: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ee983b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9841u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9841: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* ee9847: jmp 0xee9866 */
  goto L_ee9866;
L_ee9849: /* ee9849: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee984e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee9850: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* ee9856: push 0xf05e14 */
  { uint32_t v = 0xf05e14u; esp -= 4; W32(esp, v); }
/* ee985b: push 0xf05e20 */
  { uint32_t v = 0xf05e20u; esp -= 4; W32(esp, v); }
/* ee9860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9861: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9863: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee9866: /* ee9866: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee9869: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee986fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee986f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee9872: mov esi, eax */
  esi = eax;
/* ee9874: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee987au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee987a: mov edx, dword ptr [0xf0d998] */
  edx = R32((uint32_t)(0xf0d998u));
/* ee9880: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ee9882: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee9884: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9886: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ee9888: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee988a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee988c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ee988e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee988f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9890: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xee9893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9893: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee9896: je 0xee98f9 */
  if (zf) goto L_ee98f9;
L_ee9898: /* ee9898: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ee989b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee989e: je 0xee98da */
  if (zf) goto L_ee98da;
L_ee98a0: /* ee98a0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ee98a1: je 0xee98be */
  if (zf) goto L_ee98be;
L_ee98a3: /* ee98a3: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee98a9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee98a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee98aa: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* ee98af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee98b1: push 0xf05ee0 */
  { uint32_t v = 0xf05ee0u; esp -= 4; W32(esp, v); }
/* ee98b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee98b7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee98b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee98b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee98bc: jmp 0xee98f9 */
  goto L_ee98f9;
L_ee98be: /* ee98be: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee98c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee98c4: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* ee98ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee98cb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee98cd: push 0xf05ea4 */
  { uint32_t v = 0xf05ea4u; esp -= 4; W32(esp, v); }
/* ee98d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee98d3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee98d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee98d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee98d8: jmp 0xee98f9 */
  goto L_ee98f9;
L_ee98da: /* ee98da: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee98e0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee98e0: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* ee98e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ee98e8: push 0xf05e60 */
  { uint32_t v = 0xf05e60u; esp -= 4; W32(esp, v); }
/* ee98ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee98ee: push 0xf05e6c */
  { uint32_t v = 0xf05e6cu; esp -= 4; W32(esp, v); }
/* ee98f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ee98f4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee98f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee98f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ee98f9: /* ee98f9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee98fc: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee9902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee9902: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee9905: mov esi, eax */
  esi = eax;
/* ee9907: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xee990du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ee990d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee990e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee990f: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* ee9914: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ee9916: push 0xf05f20 */
  { uint32_t v = 0xf05f20u; esp -= 4; W32(esp, v); }
/* ee991b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee991c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee991eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee991e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9921: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ee9924: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* ee9928: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee992eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee992e: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* ee9931: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee9935: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee993bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee993b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* ee993e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee9942: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xee9948u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ee9948: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ee994b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ee994c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ee994d: xor eax, eax */
  eax = 0;
/* ee994f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ee9956: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ee9957: mov esp, ebp */
  esp = ebp;
/* ee9959: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ee995a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ee995d(void) {
  LOAD_REGS();
L_ee995d: /* ee995d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ee9960: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ee9965: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ee9968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9969: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ee996c: call 0xeec520 */
  esp -= 4; W32(esp, 0xee9971u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ee9971(); return;
}

void f_ee9971(void) {
  LOAD_REGS();
L_ee9971: /* ee9971: push 0xef724c */
  { uint32_t v = 0xef724cu; esp -= 4; W32(esp, v); }
/* ee9976: push 0xf05f4c */
  { uint32_t v = 0xf05f4cu; esp -= 4; W32(esp, v); }
/* ee997b: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xee9981u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ee9981: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9986: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9988: call 0xeec520 */
  esp -= 4; W32(esp, 0xee998du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ee998d: guest_badaddr(0xee998d); return;
}

void f_ee9a30(void) {
  LOAD_REGS();
L_ee9a30: /* ee9a30: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee9a34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9a36: je 0xee9a3d */
  if (zf) goto L_ee9a3d;
L_ee9a38: /* ee9a38: jmp 0xed1505 */
  SPILL(); f_ed1505(); return;
L_ee9a3d: /* ee9a3d: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9a50(void) {
  LOAD_REGS();
L_ee9a50: /* ee9a50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ee9a54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9a56: je 0xee9a5d */
  if (zf) goto L_ee9a5d;
L_ee9a58: /* ee9a58: jmp 0xed1208 */
  SPILL(); f_ed1208(); return;
L_ee9a5d: /* ee9a5d: ret  */
  esp += 4; SPILL(); return;
}

void f_ee9a70(void) {
  LOAD_REGS();
L_ee9a70: /* ee9a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ee9a71: mov ebp, esp */
  ebp = esp;
/* ee9a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ee9a75: push 0xeef54e */
  { uint32_t v = 0xeef54eu; esp -= 4; W32(esp, v); }
/* ee9a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ee9a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ee9a88: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ee9a8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ee9a8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ee9a8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ee9a8e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* ee9a91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ee9a94: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ee9a9b: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xee9aa1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ee9aa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ee9aa3: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* ee9aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9aa7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* ee9aaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ee9aab: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ee9aaf: call dword ptr [0xf0d95c] */
  esp -= 4; W32(esp, 0xee9ab5u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* ee9ab5: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* ee9abb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ee9abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ee9ac0: jne 0xee9ad5 */
  if (!zf) goto L_ee9ad5;
L_ee9ac2: /* ee9ac2: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* ee9ac8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ee9aca: push 0xf05c10 */
  { uint32_t v = 0xf05c10u; esp -= 4; W32(esp, v); }
/* ee9acf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ee9ad0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xee9ad2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ee9ad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
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
