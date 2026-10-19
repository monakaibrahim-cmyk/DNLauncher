// Address: 0x0041a430
// Name: FUN_0041a430
// Category: Launcher


undefined4 FUN_0041a430(int param_1)

{
  int in_EAX;
  HWND hWnd;
  BOOL BVar1;
  CWnd *unaff_ESI;
  
  if (unaff_ESI == (CWnd *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(unaff_ESI + 0x20);
  }
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    if (*(int *)(unaff_ESI + 0x74) < in_EAX) {
      in_EAX = *(int *)(unaff_ESI + 0x74);
    }
    if (in_EAX < *(int *)(unaff_ESI + 0x70)) {
      in_EAX = *(int *)(unaff_ESI + 0x70);
    }
    if (in_EAX < *(int *)(unaff_ESI + 0x88)) {
      in_EAX = *(int *)(unaff_ESI + 0x88);
    }
    *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(unaff_ESI + 0x98);
    *(int *)(unaff_ESI + 0x98) = in_EAX;
    if (param_1 != 0) {
      FUN_0041a4f0(unaff_ESI);
    }
    return *(undefined4 *)(unaff_ESI + 0x94);
  }
  return 0;
}

