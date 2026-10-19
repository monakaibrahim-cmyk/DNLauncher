// Address: 0x004378e0
// Name: FUN_004378e0
// Category: Utility


uint __thiscall FUN_004378e0(void *this,void *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint _Size;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)this + 4) == 0)) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 <= iVar1) {
    return 0;
  }
  _Size = param_2 * param_3;
  if (_Size != 0) {
    if (iVar2 < (int)(iVar1 + _Size)) {
      _Size = iVar2 - iVar1;
    }
    _memcpy(param_1,(void *)(iVar1 + *(int *)((int)this + 4)),_Size);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + _Size;
    return _Size / param_2;
  }
  return 0;
}

