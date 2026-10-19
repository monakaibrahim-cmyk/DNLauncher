// Address: 0x00403720
// Name: FID_conflict:operator=
// Category: Launcher


/* Library Function - Multiple Matches With Different Base Names
    public: class ATL::CSimpleStringT<char,0> & __thiscall
   ATL::CSimpleStringT<char,0>::operator=(class ATL::CSimpleStringT<char,0> const &)
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator=(class ATL::CSimpleStringT<wchar_t,0> const &)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int * __thiscall FID_conflict_operator_(void *this,undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  CStringData *pCVar4;
  CStringData *pCVar5;
  
  pvVar2 = (void *)*param_1;
  iVar3 = *(int *)this;
  pCVar4 = (CStringData *)((int)pvVar2 + -0x10);
  pCVar5 = (CStringData *)(iVar3 + -0x10);
  if (pCVar4 == pCVar5) {
    return this;
  }
  piVar1 = (int *)(iVar3 + -4);
  if ((-1 < *(int *)(iVar3 + -4)) && (*(int *)pCVar4 == *(int *)pCVar5)) {
    pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)pCVar5 + 4))(pCVar5);
    }
    *(CStringData **)this = pCVar4 + 0x10;
    return this;
  }
  FUN_00403520(this,pvVar2,*(int *)((int)pvVar2 + -0xc));
  return this;
}

