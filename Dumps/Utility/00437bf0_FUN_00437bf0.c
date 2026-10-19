// Address: 0x00437bf0
// Name: FUN_00437bf0
// Category: Utility


int * __thiscall FUN_00437bf0(void *this,int param_1)

{
  void *_Dst;
  
  if (param_1 == 0) {
    _Dst = FUN_00452728(0x4b8);
    *(void **)this = _Dst;
    _memset(_Dst,0,0x4b8);
    *(undefined1 *)((int)this + 0x200) = 1;
  }
  else {
    *(int *)this = param_1;
    *(undefined1 *)((int)this + 0x200) = 0;
  }
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  _memset((void *)((int)this + 0x10c),0,0xf0);
  return this;
}

