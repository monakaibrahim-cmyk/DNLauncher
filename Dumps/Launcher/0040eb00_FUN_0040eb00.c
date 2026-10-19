// Address: 0x0040eb00
// Name: FUN_0040eb00
// Category: Launcher


int __thiscall FUN_0040eb00(void *this,int param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00498660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar4 != 0) {
    if (0x1fffffff < uVar4) {
      FUN_0040e7a0();
    }
    iVar2 = FUN_0040ff90(uVar4);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = iVar2;
    *(uint *)(param_1 + 0xc) = iVar2 + uVar4 * 8;
    local_8 = 0;
    piVar1 = *(int **)((int)this + 8);
    if (piVar1 < *(int **)((int)this + 4)) {
      FUN_00475b26();
    }
    this_00 = *(void **)((int)this + 4);
    if (*(void **)((int)this + 8) < this_00) {
      FUN_00475b26();
    }
    puVar3 = FUN_0040f5f0(this_00,piVar1,*(undefined4 **)(param_1 + 4));
    *(undefined4 **)(param_1 + 8) = puVar3;
  }
  ExceptionList = local_10;
  return param_1;
}

