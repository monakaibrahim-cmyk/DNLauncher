// Address: 0x004020c0
// Name: ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
// Category: Launcher


/* Library Function - Single Match
    public: __thiscall ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>(wchar_t const
   *,int,struct ATL::IAtlStringMgr *)
   
   Library: Visual Studio 2005 Release */

CSimpleStringT<wchar_t,0> * __thiscall
ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
          (CSimpleStringT<wchar_t,0> *this,wchar_t *param_1,int param_2,IAtlStringMgr *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  if (param_3 == (IAtlStringMgr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  if ((param_1 != (wchar_t *)0x0) || (param_2 == 0)) {
    iVar1 = (*(code *)**(undefined4 **)param_3)(param_2,2);
    if (iVar1 == 0) {
      iVar1 = FUN_0040fef0();
    }
    *(int *)this = iVar1 + 0x10;
    if ((-1 < param_2) && (param_2 <= *(int *)(iVar1 + 8))) {
      *(int *)(iVar1 + 4) = param_2;
      _DstSize = param_2 * 2;
      *(undefined2 *)(_DstSize + *(int *)this) = 0;
      _memcpy_s(*(void **)this,_DstSize,param_1,_DstSize);
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

