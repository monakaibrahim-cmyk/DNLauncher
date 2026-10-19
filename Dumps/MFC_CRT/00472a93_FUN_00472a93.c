// Address: 0x00472a93
// Name: FUN_00472a93
// Category: MFC_CRT


void __thiscall FUN_00472a93(void *this,uint param_1,int param_2)

{
  void *_Dst;
  
  if (param_1 == 0) {
    param_1 = 0x11;
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if (param_2 != 0) {
    _Dst = FUN_00452728(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 4));
    *(void **)((int)this + 4) = _Dst;
    _memset(_Dst,0,param_1 << 2);
  }
  *(uint *)((int)this + 8) = param_1;
  return;
}

