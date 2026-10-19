// Address: 0x00437a90
// Name: FUN_00437a90
// Category: Utility


bool __thiscall FUN_00437a90(void *this,uint param_1)

{
  uint *_Size;
  int *piVar1;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    _Size = (uint *)((param_1 & 0xffff0000) + 0x10000);
    if (*(int **)((int)this + 4) == (int *)0x0) {
      piVar1 = _malloc((size_t)_Size);
    }
    else {
      piVar1 = FUN_00475d44(*(int **)((int)this + 4),_Size);
    }
    *(uint **)((int)this + 0x14) = _Size;
    *(int **)((int)this + 4) = piVar1;
    *(undefined1 *)((int)this + 0xc) = 1;
  }
  return *(int *)((int)this + 4) != 0;
}

