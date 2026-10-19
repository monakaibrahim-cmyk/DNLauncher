// Address: 0x00403e50
// Name: FUN_00403e50
// Category: Launcher


void __thiscall FUN_00403e50(void *this,wchar_t *param_1,va_list param_2)

{
  int iVar1;
  
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  iVar1 = FID_conflict___vscprintf_p(param_1,param_2);
  if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar1);
  }
  _vswprintf_s(*(wchar_t **)this,iVar1 + 1,param_1,param_2);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = iVar1;
    *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

