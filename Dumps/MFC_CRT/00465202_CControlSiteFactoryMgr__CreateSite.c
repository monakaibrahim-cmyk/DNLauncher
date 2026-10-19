// Address: 0x00465202
// Name: CControlSiteFactoryMgr::CreateSite
// Category: MFC_CRT


/* Library Function - Single Match
    public: class COleControlSite * __thiscall CControlSiteFactoryMgr::CreateSite(class
   COleControlContainer *,class CControlCreationInfo const &)
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall
CControlSiteFactoryMgr::CreateSite
          (CControlSiteFactoryMgr *this,COleControlContainer *param_1,CControlCreationInfo *param_2)

{
  int *piVar1;
  COleControlSite *pCVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 8);
  pCVar2 = (COleControlSite *)0x0;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return pCVar2;
    }
    piVar1 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
  } while (((int *)*piVar1 == (int *)0x0) ||
          (pCVar2 = (COleControlSite *)(**(code **)(*(int *)*piVar1 + 4))(param_1,param_2),
          pCVar2 == (COleControlSite *)0x0));
  return pCVar2;
}

