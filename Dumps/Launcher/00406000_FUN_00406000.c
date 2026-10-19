// Address: 0x00406000
// Name: FUN_00406000
// Category: Launcher


undefined4 __thiscall FUN_00406000(void *this,CSimpleStringT<wchar_t,0> *param_1)

{
  int iVar1;
  int iVar2;
  rsize_t _DstSize;
  int in_EAX;
  errno_t eVar3;
  int iVar4;
  
  if ((int)this < 0) {
    this = (void *)0x0;
  }
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(iVar1 + -0xc);
  if ((int)this <= 0x7fffffff - in_EAX) {
    if (iVar2 < (int)this + in_EAX) {
      in_EAX = iVar2 - (int)this;
    }
    if (in_EAX < 1) {
LAB_00406097:
      return *(undefined4 *)(*(int *)param_1 + -0xc);
    }
    iVar4 = iVar2 - in_EAX;
    if (1 < *(int *)(iVar1 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(param_1,*(int *)(iVar1 + -0xc));
    }
    _DstSize = (((iVar2 - (int)this) - in_EAX) + 1) * 2;
    eVar3 = _memmove_s((void *)(*(int *)param_1 + (int)this * 2),_DstSize,
                       (void *)(*(int *)param_1 + ((int)this + in_EAX) * 2),_DstSize);
    FUN_00403120(eVar3);
    if (-1 < iVar4) {
      if (iVar4 <= *(int *)(*(int *)param_1 + -8)) {
        *(int *)(*(int *)param_1 + -0xc) = iVar4;
        *(undefined2 *)(*(int *)param_1 + iVar4 * 2) = 0;
        goto LAB_00406097;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

