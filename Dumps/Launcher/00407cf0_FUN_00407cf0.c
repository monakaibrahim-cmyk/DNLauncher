// Address: 0x00407cf0
// Name: FUN_00407cf0
// Category: Launcher


void FUN_00407cf0(undefined4 *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  uint uVar1;
  void *in_EAX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)in_EAX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)((int)in_EAX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x38 + iVar3 != iVar3) {
      if (*(uint *)((int)in_EAX + 8) < uVar1) {
        FUN_00475b26();
      }
      if ((param_3 == (void *)0x0) || (param_3 != in_EAX)) {
        FUN_00475b26();
      }
      iVar3 = (int)((int)param_4 - uVar1) / 0x38;
      goto LAB_00407d57;
    }
  }
  iVar3 = 0;
LAB_00407d57:
  FUN_00407e00(in_EAX,param_3,param_4);
  uVar1 = *(uint *)((int)in_EAX + 4);
  if (*(uint *)((int)in_EAX + 8) < uVar1) {
    FUN_00475b26();
  }
  uVar1 = uVar1 + iVar3 * 0x38;
  if ((*(uint *)((int)in_EAX + 8) < uVar1) || (uVar1 < *(uint *)((int)in_EAX + 4))) {
    FUN_00475b26();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}

