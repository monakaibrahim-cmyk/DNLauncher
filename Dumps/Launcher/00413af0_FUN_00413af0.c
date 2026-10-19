// Address: 0x00413af0
// Name: FUN_00413af0
// Category: Launcher


undefined4 __thiscall FUN_00413af0(void *this,int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *this_00;
  undefined4 extraout_ECX;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != (char *)0x0) {
    uVar7 = 0;
    while( true ) {
      iVar2 = *(int *)((int)this + 0x50);
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0x54) - iVar2 >> 2;
      }
      if (iVar5 <= (int)uVar7) {
        ExceptionList = local_c;
        return 1;
      }
      if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x54) - iVar2 >> 2) <= uVar7)) {
        FUN_00475b26();
      }
      uVar6 = FUN_0042a280(*(uint *)(pcVar3 + 0x100));
      if (uVar6 != 0xffffffff) break;
      uVar7 = uVar7 + 1;
    }
    this_00 = FUN_00429b00(extraout_ECX,pcVar3);
    if (this_00 != (undefined4 *)0x0) {
      FUN_00416180(&param_1,param_2);
      local_4 = 0;
      FUN_00418fd0(L"Patch File Name: [%s]");
      if ((*(int *)((int)this + 0x50) == 0) ||
         ((uint)(*(int *)((int)this + 0x54) - *(int *)((int)this + 0x50) >> 2) <= uVar7)) {
        FUN_00475b26();
      }
      cVar4 = FUN_0042ab00(this_00,*(int *)(*(int *)((int)this + 0x50) + uVar7 * 4),uVar6,1);
      if (cVar4 != '\0') {
        (**(code **)*this_00)(1);
        local_4 = 0xffffffff;
        *param_3 = 1;
        piVar1 = (int *)(param_1 + -4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1 || iVar2 + -1 < 0) {
          (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10));
        }
        ExceptionList = local_c;
        return 1;
      }
      FUN_00418f70(L"Patch File Failed!");
      (**(code **)*this_00)(1);
      local_4 = 0xffffffff;
      piVar1 = (int *)(param_1 + -4);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10));
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

