// Address: 0x0040ea70
// Name: ATL::CSimpleStringT<char,0>::SetString
// Category: Launcher


/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::SetString(char const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CSimpleStringT<char,0>::SetString(CSimpleStringT<char,0> *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  if (param_2 == 0) {
    Empty(this);
    return;
  }
  if (param_1 != (char *)0x0) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + -0xc);
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      PrepareWrite2(this,param_2);
    }
    _Dst = *(void **)this;
    if (uVar2 < (uint)((int)param_1 - iVar1)) {
      _memcpy_s(_Dst,param_2,param_1,param_2);
    }
    else {
      _memmove_s(_Dst,param_2,(void *)((int)_Dst + ((int)param_1 - iVar1)),param_2);
    }
    if ((-1 < param_2) && (param_2 <= *(int *)(*(int *)this + -8))) {
      *(int *)(*(int *)this + -0xc) = param_2;
      *(undefined1 *)(param_2 + *(int *)this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

