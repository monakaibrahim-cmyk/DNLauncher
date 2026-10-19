// Address: 0x0040dd10
// Name: FUN_0040dd10
// Category: Launcher


void FUN_0040dd10(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_EAX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_EAX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x14 + iVar3 != iVar3) {
      if (*(uint *)(in_EAX + 8) < uVar1) {
        FUN_00475b26();
      }
      if ((param_3 == 0) || (param_3 != in_EAX)) {
        FUN_00475b26();
      }
      iVar3 = (int)((int)param_4 - uVar1) / 0x14;
      goto LAB_0040dd73;
    }
  }
  iVar3 = 0;
LAB_0040dd73:
  FUN_0040e4c0(in_EAX,param_3,param_4);
  uVar1 = *(uint *)(in_EAX + 4);
  if (*(uint *)(in_EAX + 8) < uVar1) {
    FUN_00475b26();
  }
  uVar1 = uVar1 + iVar3 * 0x14;
  if ((*(uint *)(in_EAX + 8) < uVar1) || (uVar1 < *(uint *)(in_EAX + 4))) {
    FUN_00475b26();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}

