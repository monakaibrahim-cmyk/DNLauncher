// Address: 0x00401da0
// Name: FUN_00401da0
// Category: Launcher


void __cdecl
FUN_00401da0(CSimpleStringT<char,0> *param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  void *_Dst;
  rsize_t _DstSize;
  
  iVar1 = param_3 + param_5;
  if ((int)(1U - *(int *)(*(int *)param_1 + -4) | *(int *)(*(int *)param_1 + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(param_1,iVar1);
  }
  _Dst = *(void **)param_1;
  _DstSize = param_3 * 2;
  _memcpy_s(_Dst,_DstSize,param_2,_DstSize);
  _memcpy_s((void *)(_DstSize + (int)_Dst),param_5 * 2,param_4,param_5 * 2);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)param_1 + -8))) {
    *(int *)(*(int *)param_1 + -0xc) = iVar1;
    *(undefined2 *)(*(int *)param_1 + iVar1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

