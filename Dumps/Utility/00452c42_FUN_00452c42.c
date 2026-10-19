// Address: 0x00452c42
// Name: FUN_00452c42
// Category: Utility


void FUN_00452c42(short *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if ((param_1 == (short *)0x0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_004164c0(param_1,param_2,param_3);
  }
  if ((iVar1 < 0) && (param_3 != (int *)0x0)) {
    *param_3 = 0;
  }
  return;
}

