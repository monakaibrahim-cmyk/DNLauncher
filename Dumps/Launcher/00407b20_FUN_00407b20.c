// Address: 0x00407b20
// Name: FUN_00407b20
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407b20(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  if (_DAT_004b4710 < (double)iVar2 / (double)iVar1) {
    *(undefined4 *)(unaff_ESI + 4) = 0x400;
    *(undefined4 *)(unaff_ESI + 8) = 0x300;
    return;
  }
  *(undefined4 *)(unaff_ESI + 4) = 0x500;
  *(undefined4 *)(unaff_ESI + 8) = 800;
  return;
}

