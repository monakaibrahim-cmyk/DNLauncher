// Address: 0x0048430c
// Name: FUN_0048430c
// Category: MFC_CRT


void __cdecl FUN_0048430c(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) && ((*(uint *)(param_1 + 0xc) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}

