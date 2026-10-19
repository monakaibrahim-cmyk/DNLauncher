// Address: 0x0040db70
// Name: FUN_0040db70
// Category: Launcher


void FUN_0040db70(int *param_1,void *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  uVar1 = *(uint *)(in_EAX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_EAX + 8) - uVar1) >> 3 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_EAX + 8) < uVar1) {
      FUN_00475b26();
    }
    if ((param_3 == 0) || (param_3 != in_EAX)) {
      FUN_00475b26();
    }
    iVar2 = (int)((int)param_4 - uVar1) >> 3;
  }
  FUN_0040dec0(param_2,in_EAX,param_3,param_4);
  uVar1 = *(uint *)(in_EAX + 4);
  if (*(uint *)(in_EAX + 8) < uVar1) {
    FUN_00475b26();
  }
  uVar1 = uVar1 + iVar2 * 8;
  if ((*(uint *)(in_EAX + 8) < uVar1) || (uVar1 < *(uint *)(in_EAX + 4))) {
    FUN_00475b26();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}

