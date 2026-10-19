// Address: 0x00469de6
// Name: FUN_00469de6
// Category: MFC_CRT


void __fastcall FUN_00469de6(int param_1)

{
  CoTaskMemFree(*(LPVOID *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  CoTaskMemFree(*(LPVOID *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}

