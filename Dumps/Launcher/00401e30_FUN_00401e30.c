// Address: 0x00401e30
// Name: FUN_00401e30
// Category: Launcher


void FUN_00401e30(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *in_EAX;
  int iVar2;
  
  uVar1 = *(uint *)((int)in_EAX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)in_EAX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)in_EAX + 8) < uVar1) {
      FUN_00475b26();
    }
    if ((param_3 == (void *)0x0) || (param_3 != in_EAX)) {
      FUN_00475b26();
    }
    iVar2 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_00402140(in_EAX,param_3,param_4);
  uVar1 = *(uint *)((int)in_EAX + 4);
  if (*(uint *)((int)in_EAX + 8) < uVar1) {
    FUN_00475b26();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)in_EAX + 8) < uVar1) || (uVar1 < *(uint *)((int)in_EAX + 4))) {
    FUN_00475b26();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}

