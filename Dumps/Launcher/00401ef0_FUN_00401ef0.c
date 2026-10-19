// Address: 0x00401ef0
// Name: FUN_00401ef0
// Category: Launcher


void __thiscall
FUN_00401ef0(void *this,uint *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint in_EAX;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_EAX + 4);
  if (uVar2 != 0) {
    this = (void *)((int)(*(uint *)(in_EAX + 8) - uVar2) >> 5);
    if (this != (void *)0x0) {
      if (*(uint *)(in_EAX + 8) < uVar2) {
        FUN_00475b26();
        this = extraout_ECX;
      }
      if ((param_3 == 0) || (param_3 != in_EAX)) {
        FUN_00475b26();
        this = extraout_ECX_00;
      }
      iVar1 = (int)((int)param_4 - uVar2) >> 5;
      goto LAB_00401f31;
    }
  }
  iVar1 = 0;
LAB_00401f31:
  FUN_004023a0(this,param_2,in_EAX,param_3,param_4);
  uVar2 = *(uint *)(in_EAX + 4);
  if (*(uint *)(in_EAX + 8) < uVar2) {
    FUN_00475b26();
  }
  uVar2 = iVar1 * 0x20 + uVar2;
  if ((*(uint *)(in_EAX + 8) < uVar2) || (uVar2 < *(uint *)(in_EAX + 4))) {
    FUN_00475b26();
  }
  param_1[1] = uVar2;
  *param_1 = in_EAX;
  return;
}

