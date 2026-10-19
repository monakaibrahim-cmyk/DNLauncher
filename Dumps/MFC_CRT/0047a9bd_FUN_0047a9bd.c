// Address: 0x0047a9bd
// Name: FUN_0047a9bd
// Category: MFC_CRT


void __cdecl FUN_0047a9bd(uint param_1)

{
  if ((0x4c3787 < param_1) && (param_1 < 0x4c39e9)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_0047efa9(((int)(param_1 - 0x4c3788) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

