// Address: 0x00434b20
// Name: FUN_00434b20
// Category: Utility


int __thiscall FUN_00434b20(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 < *(uint *)((int)this + 0x10)) {
      piVar1 = *(int **)((int)this + 4);
      iVar2 = FUN_00436190((int)this);
      return iVar2 + *(int *)((int)this + 0x30) * param_1 + *piVar1 + (int)piVar1;
    }
    return 0;
  }
  piVar1 = *(int **)((int)this + 4);
  iVar2 = FUN_00436190((int)this);
  return iVar2 + *piVar1 + (int)piVar1;
}

