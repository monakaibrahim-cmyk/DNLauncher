// Address: 0x00465870
// Name: COccManager::CreateSite
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual class COleControlSite * __thiscall COccManager::CreateSite(class
   COleControlContainer *,class CControlCreationInfo const &)
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall
COccManager::CreateSite
          (COccManager *this,COleControlContainer *param_1,CControlCreationInfo *param_2)

{
  COleControlSite *pCVar1;
  int iVar2;
  CNoTrackObject *this_00;
  COleControlContainer *unaff_retaddr;
  
  pCVar1 = (COleControlSite *)(**(code **)(*(int *)this + 0x10))(param_1);
  if (pCVar1 == (COleControlSite *)0x0) {
    this_00 = CProcessLocalObject::GetData
                        ((CProcessLocalObject *)&DAT_004cab18,
                         (_func_CNoTrackObject_ptr *)&LAB_0046553e);
    if ((this_00 == (CNoTrackObject *)0x0) ||
       (pCVar1 = CControlSiteFactoryMgr::CreateSite
                           ((CControlSiteFactoryMgr *)this_00,unaff_retaddr,
                            (CControlCreationInfo *)param_1), pCVar1 == (COleControlSite *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
  }
  else {
    iVar2 = CControlCreationInfo::IsManaged((CControlCreationInfo *)param_1);
    if (iVar2 != 0) {
      pCVar1 = (COleControlSite *)0x0;
    }
  }
  return pCVar1;
}

