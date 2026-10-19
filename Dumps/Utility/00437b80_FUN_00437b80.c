// Address: 0x00437b80
// Name: FUN_00437b80
// Category: Utility


uint __thiscall FUN_00437b80(void *this,undefined1 param_1)

{
  int iVar1;
  bool bVar2;
  uint in_EAX;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 4) == 0) {
LAB_00437b89:
    return in_EAX & 0xffffff00;
  }
  if (*(int *)((int)this + 0x14) <= *(int *)((int)this + 0x10)) {
    bVar2 = FUN_00437a90(this,*(int *)((int)this + 0x10) + 1);
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (!bVar2) goto LAB_00437b89;
  }
  *(undefined1 *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 4)) = param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  iVar1 = *(int *)((int)this + 0x10);
  if (*(int *)((int)this + 8) < iVar1) {
    *(int *)((int)this + 8) = iVar1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

