// Address: 0x00401c60
// Name: FUN_00401c60
// Category: Launcher


int * __fastcall FUN_00401c60(int *param_1,LPCSTR param_2,int *param_3)

{
  int iVar1;
  HMODULE pHVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))(DAT_004c3750 ^ (uint)&stack0xffffffec);
  *param_3 = iVar1 + 0x10;
  uStack_4 = 0;
  if ((param_2 == (LPCSTR)0x0) || (((uint)param_2 & 0xffff0000) != 0)) {
    FUN_00402e90(param_3,param_2);
  }
  else {
    pHVar2 = (HMODULE)FUN_00452b55();
    if (pHVar2 != (HMODULE)0x0) {
      FUN_00402fa0(param_3,pHVar2,(uint)param_2 & 0xffff);
    }
  }
  ExceptionList = local_c;
  return param_3;
}

