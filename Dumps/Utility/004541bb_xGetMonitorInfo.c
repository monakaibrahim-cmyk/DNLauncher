// Address: 0x004541bb
// Name: xGetMonitorInfo
// Category: Utility


/* Library Function - Single Match
    _xGetMonitorInfo@8
   
   Library: Visual Studio 2005 Release
   __stdcall xGetMonitorInfo,8 */

int xGetMonitorInfo(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x12340042) && (param_2 != (uint *)0x0)) &&
       ((0x27 < *param_2 && (BVar3 = SystemParametersInfoA(0x30,0,&local_14,0), BVar3 != 0)))) {
      param_2[1] = 0;
      param_2[2] = 0;
      uVar4 = GetSystemMetrics(0);
      param_2[3] = uVar4;
      uVar4 = GetSystemMetrics(1);
      param_2[5] = local_14;
      param_2[6] = uStack_10;
      param_2[7] = uStack_c;
      param_2[8] = uStack_8;
      iVar2 = 1;
      param_2[4] = uVar4;
      param_2[9] = 1;
      if (0x67 < *param_2) {
        MultiByteToWideChar(0,0,"DISPLAY",-1,(LPWSTR)(param_2 + 10),0x20);
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (*DAT_004ca730)(param_1,param_2);
    if (((iVar2 != 0) && (DAT_004ca740 == 0)) && (0x67 < *param_2)) {
      MultiByteToWideChar(0,0,(LPCSTR)(param_2 + 10),-1,(LPWSTR)(param_2 + 10),0x20);
    }
  }
  return iVar2;
}

