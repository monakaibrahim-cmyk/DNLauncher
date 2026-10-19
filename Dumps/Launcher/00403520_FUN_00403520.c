// Address: 0x00403520
// Name: FUN_00403520
// Category: Launcher


void __thiscall FUN_00403520(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  rsize_t _DstSize;
  uint uVar3;
  
  if (param_2 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::Empty(this);
    return;
  }
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  iVar1 = *(int *)this;
  uVar3 = (int)param_1 - iVar1 >> 1;
  uVar2 = *(uint *)(iVar1 + -0xc);
  if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,param_2);
  }
  _Dst = *(void **)this;
  _DstSize = param_2 * 2;
  if (uVar2 < uVar3) {
    _memcpy_s(_Dst,_DstSize,param_1,_DstSize);
  }
  else {
    _memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar3 * 2),_DstSize);
  }
  if ((-1 < param_2) && (param_2 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = param_2;
    *(undefined2 *)(_DstSize + *(int *)this) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

