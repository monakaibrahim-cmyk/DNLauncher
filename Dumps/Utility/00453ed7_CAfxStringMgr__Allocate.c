// Address: 0x00453ed7
// Name: CAfxStringMgr::Allocate
// Category: Utility


/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Allocate(int,int)
   
   Library: Visual Studio 2005 Release */

CStringData * __thiscall CAfxStringMgr::Allocate(CAfxStringMgr *this,int param_1,int param_2)

{
  CStringData *pCVar1;
  
  if ((-1 < param_1) &&
     (pCVar1 = _malloc((param_1 + 1) * param_2 + 0x10), pCVar1 != (CStringData *)0x0)) {
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(CAfxStringMgr **)pCVar1 = this;
    *(undefined4 *)(pCVar1 + 0xc) = 1;
    *(int *)(pCVar1 + 8) = param_1;
    return pCVar1;
  }
  return (CStringData *)0x0;
}

