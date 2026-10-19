// Address: 0x0041c0b0
// Name: FUN_0041c0b0
// Category: Launcher


CSimpleStringT<wchar_t,0> * __thiscall
FUN_0041c0b0(void *this,CSimpleStringT<wchar_t,0> *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CStringData *pCVar3;
  IAtlStringMgr *pIVar4;
  int *piVar5;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 <= param_2) {
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iVar1 + -0x10));
    *(CStringData **)param_1 = pCVar3 + 0x10;
    return param_1;
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    pIVar4 = (IAtlStringMgr *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
    if (pIVar4 != (IAtlStringMgr *)0x0) goto LAB_0041c111;
  }
  piVar5 = (int *)FUN_00453ed1();
  pIVar4 = (IAtlStringMgr *)(**(code **)(*piVar5 + 0x10))();
LAB_0041c111:
  ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
            (param_1,(wchar_t *)(*(int *)this + (iVar2 - param_2) * 2),param_2,pIVar4);
  return param_1;
}

