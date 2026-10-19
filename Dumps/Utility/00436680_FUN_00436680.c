// Address: 0x00436680
// Name: FUN_00436680
// Category: Utility


void __thiscall FUN_00436680(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  size_t _Size;
  
  if (((*(int *)((int)this + 0x10) != 0) && (param_1 != (void *)0x0)) && (0 < (int)param_2)) {
    iVar1 = FUN_00434f30(*(int *)((int)this + 0x14));
    if ((int)param_2 < iVar1) {
      _memcpy(param_1,*(void **)((int)this + 0x10),param_2);
      return;
    }
    _Size = FUN_00434f30(*(int *)((int)this + 0x14));
    _memcpy(param_1,*(void **)((int)this + 0x10),_Size);
  }
  return;
}

