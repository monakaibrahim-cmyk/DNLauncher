// Address: 0x0042a800
// Name: FUN_0042a800
// Category: Launcher


void FUN_0042a800(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_ESI;
  int iVar2;
  DWORD local_4;
  
  if ((*(char *)(unaff_ESI + 4) == '\0') && (*(char *)(unaff_ESI + 0x118) != '\0')) {
    if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
      FUN_004290f0(*(undefined4 *)(unaff_ESI + 0x114),0,*(HANDLE *)(unaff_ESI + 8),
                   *(undefined4 *)(unaff_ESI + 0x114),0);
    }
    if (*(int *)(unaff_ESI + 0x2a4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c;
    }
    if ((*(int *)(unaff_ESI + 0x2a4) == 0) ||
       (iVar1 = *(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4),
       iVar1 / 0x13c + (iVar1 >> 0x1f) == iVar1 >> 0x1f)) {
      FUN_00475b26();
      iVar1 = extraout_ECX;
    }
    if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
      local_4 = 0;
      WriteFile(*(HANDLE *)(unaff_ESI + 8),*(LPCVOID *)(unaff_ESI + 0x2a4),iVar2 * 0x13c,&local_4,
                (LPOVERLAPPED)0x0);
      iVar1 = extraout_ECX_00;
    }
    *(undefined1 *)(unaff_ESI + 0x118) = 0;
    if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
      FUN_004290f0(iVar1,0,*(HANDLE *)(unaff_ESI + 8),0,0);
    }
    if (*(HANDLE *)(unaff_ESI + 8) != (HANDLE)0xffffffff) {
      local_4 = 0;
      WriteFile(*(HANDLE *)(unaff_ESI + 8),(LPCVOID)(unaff_ESI + 0xc),0x110,&local_4,
                (LPOVERLAPPED)0x0);
    }
    *(undefined1 *)(unaff_ESI + 0x118) = 0;
  }
  return;
}

