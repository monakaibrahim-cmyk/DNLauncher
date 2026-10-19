// Address: 0x00457b58
// Name: FUN_00457b58
// Category: Utility


undefined4
FUN_00457b58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80010108;
  }
  else if (param_7 == 0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}

