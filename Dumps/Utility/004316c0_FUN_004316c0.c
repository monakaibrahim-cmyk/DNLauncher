// Address: 0x004316c0
// Name: FUN_004316c0
// Category: Utility


uint FUN_004316c0(void)

{
  int iVar1;
  uint uVar2;
  void *this;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004992c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)(*(int *)(*unaff_EDI + 4) + (int)unaff_EDI);
  if (*(int *)(*(int *)(*unaff_EDI + 4) + 8 + (int)unaff_EDI) == 0) {
    if (*(int *)((int)this + 0x2c) != 0) {
      FUN_0042ead0();
    }
    iVar1 = *(int *)(*unaff_EDI + 4);
    this = (void *)(iVar1 + (int)unaff_EDI);
    if (*(int *)(iVar1 + 8 + (int)unaff_EDI) == 0) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  uVar2 = *(uint *)((int)this + 8) | 2;
  if (*(int *)((int)this + 0x28) == 0) {
    uVar2 = *(uint *)((int)this + 8) | 6;
  }
  uVar2 = uVar2 & 0x17;
  *(uint *)((int)this + 8) = uVar2;
  if ((*(uint *)((int)this + 0xc) & uVar2) != 0) {
    uVar2 = FUN_0042ce70(this,'\0');
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}

