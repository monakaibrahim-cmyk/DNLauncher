// Address: 0x00453f1f
// Name: CAfxStringMgr::Reallocate
// Category: Utility


/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2005 Release */

CStringData * __thiscall
CAfxStringMgr::Reallocate(CAfxStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  CStringData *pCVar1;
  
  if ((-1 < param_2) &&
     (pCVar1 = (CStringData *)FUN_00475d44((int *)param_1,(uint *)((param_2 + 1) * param_3 + 0x10)),
     pCVar1 != (CStringData *)0x0)) {
    *(int *)(pCVar1 + 8) = param_2;
    return pCVar1;
  }
  return (CStringData *)0x0;
}

