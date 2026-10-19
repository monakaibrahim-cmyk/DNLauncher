// Address: 0x0047a9f3
// Name: FUN_0047a9f3
// Category: MFC_CRT


void __cdecl FUN_0047a9f3(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_0047efa9(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

