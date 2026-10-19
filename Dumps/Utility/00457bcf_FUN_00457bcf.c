// Address: 0x00457bcf
// Name: FUN_00457bcf
// Category: Utility


undefined4
FUN_00457bcf(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80010108;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 100))(piVar1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

