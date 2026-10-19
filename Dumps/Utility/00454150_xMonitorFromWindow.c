// Address: 0x00454150
// Name: xMonitorFromWindow
// Category: Utility


/* Library Function - Single Match
    _xMonitorFromWindow@8
   
   Library: Visual Studio 2005 Release
   __stdcall xMonitorFromWindow,8 */

undefined4 xMonitorFromWindow(HWND param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  WINDOWPLACEMENT local_30;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        iVar4 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        iVar4 = GetWindowPlacement(param_1,&local_30);
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = xMonitorFromRect(&local_30.rcNormalPosition.left,(byte)param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_004ca724)(param_1,param_2);
  }
  return uVar2;
}

