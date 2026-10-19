// Address: 0x0042b620
// Name: FUN_0042b620
// Category: Launcher


void FUN_0042b620(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_EAX + 4);
  if (uVar3 != 0) {
    iVar1 = *(uint *)(in_EAX + 8) - uVar3;
    iVar2 = iVar1 >> 0x1f;
    if (iVar1 / 0x13c + iVar2 != iVar2) {
      if (*(uint *)(in_EAX + 8) < uVar3) {
        FUN_00475b26();
      }
      if ((param_3 == 0) || (param_3 != in_EAX)) {
        FUN_00475b26();
      }
      iVar2 = (int)((int)param_4 - uVar3) / 0x13c;
      goto LAB_0042b683;
    }
  }
  iVar2 = 0;
LAB_0042b683:
  FUN_0042bb20(in_EAX,param_2,1,param_3,param_4);
  uVar3 = *(uint *)(in_EAX + 4);
  if (*(uint *)(in_EAX + 8) < uVar3) {
    FUN_00475b26();
  }
  uVar3 = iVar2 * 0x13c + uVar3;
  if ((*(uint *)(in_EAX + 8) < uVar3) || (uVar3 < *(uint *)(in_EAX + 4))) {
    FUN_00475b26();
  }
  *param_1 = in_EAX;
  param_1[1] = uVar3;
  return;
}

