// Address: 0x00437b00
// Name: FUN_00437b00
// Category: Utility


int __thiscall FUN_00437b00(void *this,void *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  size_t _Size;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    return 0;
  }
  _Size = param_2 * param_3;
  if (_Size == 0) {
    return 0;
  }
  uVar2 = *(int *)((int)this + 0x10) + _Size;
  if ((*(int *)((int)this + 0x14) < (int)uVar2) && (bVar1 = FUN_00437a90(this,uVar2), !bVar1)) {
    return 0;
  }
  _memcpy((void *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 4)),param_1,_Size);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + _Size;
  if (*(int *)((int)this + 8) < *(int *)((int)this + 0x10)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 0x10);
  }
  return param_3;
}

