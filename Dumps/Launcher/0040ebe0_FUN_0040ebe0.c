// Address: 0x0040ebe0
// Name: FUN_0040ebe0
// Category: Launcher


int __thiscall FUN_0040ebe0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00499490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x30;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (0x5555555 < uVar3) {
      FUN_004065a0();
    }
    iVar1 = FUN_0040e440(uVar3);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1;
    *(uint *)(param_1 + 0xc) = uVar3 * 0x30 + iVar1;
    local_8 = 0;
    uVar3 = *(uint *)((int)this + 8);
    if (uVar3 < *(uint *)((int)this + 4)) {
      FUN_00475b26();
    }
    this_00 = *(void **)((int)this + 4);
    if (*(void **)((int)this + 8) < this_00) {
      FUN_00475b26();
    }
    puVar2 = FUN_0040fa70(this_00,uVar3,*(undefined4 **)(param_1 + 4));
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  ExceptionList = local_10;
  return param_1;
}

