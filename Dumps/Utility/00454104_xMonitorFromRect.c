// Address: 0x00454104
// Name: xMonitorFromRect
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _xMonitorFromRect@8
   
   Library: Visual Studio 2005 Release
   __stdcall xMonitorFromRect,8 */

undefined4 xMonitorFromRect(int *param_1,byte param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045410d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_004ca728)();
    return uVar2;
  }
  if ((param_2 & 3) == 0) {
    if ((0 < param_1[2]) && (0 < param_1[3])) {
      iVar3 = GetSystemMetrics(0);
      if (*param_1 < iVar3) {
        iVar3 = GetSystemMetrics(1);
        if (param_1[1] < iVar3) goto LAB_00454146;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_00454146:
    uVar2 = 0x12340042;
  }
  return uVar2;
}

