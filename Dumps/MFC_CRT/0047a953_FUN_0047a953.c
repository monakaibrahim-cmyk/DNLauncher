// Address: 0x0047a953
// Name: FUN_0047a953
// Category: MFC_CRT


void __cdecl FUN_0047a953(uint param_1)

{
  if ((0x4c3787 < param_1) && (param_1 < 0x4c39e9)) {
    __lock(((int)(param_1 - 0x4c3788) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

