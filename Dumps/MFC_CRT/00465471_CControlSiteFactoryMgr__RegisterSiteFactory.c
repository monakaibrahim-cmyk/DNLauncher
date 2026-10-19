// Address: 0x00465471
// Name: CControlSiteFactoryMgr::RegisterSiteFactory
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CControlSiteFactoryMgr::RegisterSiteFactory(class IControlSiteFactory *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CControlSiteFactoryMgr::RegisterSiteFactory
          (CControlSiteFactoryMgr *this,IControlSiteFactory *param_1)

{
  __POSITION *p_Var1;
  
  if (param_1 == (IControlSiteFactory *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  p_Var1 = CList<IControlSiteFactory*,IControlSiteFactory*>::Find
                     ((CList<IControlSiteFactory*,IControlSiteFactory*> *)(this + 4),param_1,
                      (__POSITION *)0x0);
  if (p_Var1 == (__POSITION *)0x0) {
    CList<IControlSiteFactory*,IControlSiteFactory*>::AddHead
              ((CList<IControlSiteFactory*,IControlSiteFactory*> *)(this + 4),param_1);
  }
  return 0;
}

