// Address: 0x004654cd
// Name: CControlSiteFactoryMgr::CControlSiteFactoryMgr
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CControlSiteFactoryMgr::CControlSiteFactoryMgr(void)
   
   Library: Visual Studio 2005 Release */

CControlSiteFactoryMgr * __thiscall
CControlSiteFactoryMgr::CControlSiteFactoryMgr(CControlSiteFactoryMgr *this)

{
  IControlSiteFactory *pIVar1;
  
  *(undefined ***)this = vftable;
  CList<IControlSiteFactory*,IControlSiteFactory*>::CList<IControlSiteFactory*,IControlSiteFactory*>
            ((CList<IControlSiteFactory*,IControlSiteFactory*> *)(this + 4),10);
  pIVar1 = FUN_00452728(4);
  if (pIVar1 == (IControlSiteFactory *)0x0) {
    pIVar1 = (IControlSiteFactory *)0x0;
  }
  else {
    *(undefined ***)pIVar1 = COleControlSiteFactory::vftable;
  }
  *(IControlSiteFactory **)(this + 0x20) = pIVar1;
  RegisterSiteFactory(this,pIVar1);
  return this;
}

