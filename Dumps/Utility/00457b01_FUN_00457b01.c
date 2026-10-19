// Address: 0x00457b01
// Name: FUN_00457b01
// Category: Utility


undefined4
FUN_00457b01(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80010108;
  }
  else if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_5 == 0)) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x58))
                      (piVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return uVar2;
}

