// Address: 0x00419840
// Name: FUN_00419840
// Category: Launcher


undefined4 FUN_00419840(int param_1)

{
  int iVar1;
  BOOL BVar2;
  CWnd *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  *(undefined4 *)(unaff_ESI + 0xd4) = 0;
  *(undefined4 *)(unaff_ESI + 0xd8) = 0;
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  FUN_00402e90(unaff_ESI + 100,(LPCSTR)&PTR_004b2d68);
  SetRect((LPRECT)(unaff_ESI + 0xb0),0,0,0,0);
  iVar1 = FUN_00419ca0(param_1,unaff_ESI);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 100;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  BVar2 = IsWindow(*(HWND *)(unaff_ESI + 0x20));
  if (BVar2 != 0) {
    *(undefined4 *)(unaff_ESI + 0x70) = 0;
    *(undefined4 *)(unaff_ESI + 0x74) = 100;
    *(undefined4 *)(unaff_ESI + 0x78) = 1;
  }
  FUN_00403520(unaff_ESI + 0x60,(void *)0x0,0);
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  FUN_0041a4a0();
  SetTimer(*(HWND *)(unaff_ESI + 0x20),(UINT_PTR)unaff_ESI,500,(TIMERPROC)0x0);
  FUN_0041a4f0(unaff_ESI);
  return 1;
}

