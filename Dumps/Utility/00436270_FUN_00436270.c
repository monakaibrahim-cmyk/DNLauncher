// Address: 0x00436270
// Name: FUN_00436270
// Category: Utility


byte __thiscall FUN_00436270(void *this,uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 4) == 0) || (*(int *)((int)this + 0x28) == 0)) {
    return 0;
  }
  if ((((-1 < (int)param_1) && (-1 < param_2)) && ((int)param_1 < *(int *)((int)this + 0xc))) &&
     (param_2 < *(int *)((int)this + 0x10))) {
    if (*(short *)((int)this + 0x16) == 8) {
      return *(byte *)(*(int *)((int)this + 0x30) * param_2 + *(int *)((int)this + 0x34) + param_1);
    }
    bVar1 = *(byte *)(((int)(*(ushort *)((int)this + 0x16) * param_1) >> 3) +
                      *(int *)((int)this + 0x30) * param_2 + *(int *)((int)this + 0x34));
    if (*(ushort *)((int)this + 0x16) == 4) {
      uVar3 = param_1 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      bVar2 = ('\x01' - (char)uVar3) * '\x04';
      return ('\x0f' << (bVar2 & 0x1f) & bVar1) >> (bVar2 & 0x1f);
    }
    if (*(short *)((int)this + 0x16) == 1) {
      uVar3 = param_1 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      bVar2 = 7 - (char)uVar3;
      return ('\x01' << (bVar2 & 0x1f) & bVar1) >> (bVar2 & 0x1f);
    }
    return 0;
  }
  if (-1 < *(int *)((int)this + 0x14c)) {
    return *(byte *)((int)this + 0x14c);
  }
  return **(byte **)((int)this + 0x34);
}

