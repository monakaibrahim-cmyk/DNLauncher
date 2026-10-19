// Address: 0x0042a900
// Name: FUN_0042a900
// Category: Launcher


void FUN_0042a900(void)

{
  int iVar1;
  uint unaff_EBX;
  int unaff_ESI;
  int iVar2;
  DWORD local_4;
  
  if (-1 < (int)unaff_EBX) {
    iVar2 = 0;
    if (*(int *)(unaff_ESI + 0x2a4) != 0) {
      iVar2 = (*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c;
    }
    if ((int)unaff_EBX < iVar2) {
      if ((*(int *)(unaff_ESI + 0x2a4) == 0) ||
         ((uint)((*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c) <= unaff_EBX))
      {
        FUN_00475b26();
      }
      iVar2 = unaff_EBX * 0x13c;
      *(undefined4 *)(iVar2 + 0x100 + *(int *)(unaff_ESI + 0x2a4)) = 0;
      if ((*(int *)(unaff_ESI + 0x2a4) == 0) ||
         ((uint)((*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c) <= unaff_EBX))
      {
        FUN_00475b26();
      }
      iVar1 = *(int *)(unaff_ESI + 0x2a4);
      *(undefined4 *)(iVar1 + 0x104 + iVar2) = 0;
      if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(iVar1,0,*(HANDLE *)(unaff_ESI + 8),*(int *)(unaff_ESI + 0x114) + iVar2,0);
      }
      if ((*(int *)(unaff_ESI + 0x2a4) == 0) ||
         ((uint)((*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c) <= unaff_EBX))
      {
        FUN_00475b26();
      }
      if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
        local_4 = 0;
        WriteFile(*(HANDLE *)(unaff_ESI + 8),(LPCVOID)(*(int *)(unaff_ESI + 0x2a4) + iVar2),0x13c,
                  &local_4,(LPOVERLAPPED)0x0);
      }
    }
  }
  return;
}

