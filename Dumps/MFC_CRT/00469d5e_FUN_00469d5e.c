// Address: 0x00469d5e
// Name: FUN_00469d5e
// Category: MFC_CRT


undefined4 __cdecl FUN_00469d5e(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (param_3 == 0)) || (param_5 == (int *)0x0)) {
    uVar1 = 0x80004005;
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0x10))
                      (param_5,(*(int *)(param_1 + 0x24) != 0) * '\x02' + '\x02',param_2,param_1,
                       param_4,param_3,0);
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x14));
    }
  }
  return uVar1;
}

