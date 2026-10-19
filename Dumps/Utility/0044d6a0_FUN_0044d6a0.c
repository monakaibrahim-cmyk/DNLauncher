// Address: 0x0044d6a0
// Name: FUN_0044d6a0
// Category: Utility


void __cdecl FUN_0044d6a0(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1 != (int *)0x0) {
    sVar1 = FUN_004793fd(param_2,1,param_3,(FILE *)param_1[0x15]);
    if (sVar1 != param_3) {
      FUN_00445110(param_1,"Read Error");
    }
  }
  return;
}

