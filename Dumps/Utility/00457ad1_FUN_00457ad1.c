// Address: 0x00457ad1
// Name: FUN_00457ad1
// Category: Utility


undefined4
FUN_00457ad1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80010108;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x54))(piVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

