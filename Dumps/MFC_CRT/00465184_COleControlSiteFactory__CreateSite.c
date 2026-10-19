// Address: 0x00465184
// Name: COleControlSiteFactory::CreateSite
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class COleControlSite * __thiscall COleControlSiteFactory::CreateSite(class
   COleControlContainer *,class CControlCreationInfo const &)
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall
COleControlSiteFactory::CreateSite
          (COleControlSiteFactory *this,COleControlContainer *param_1,CControlCreationInfo *param_2)

{
  COleControlSite *this_00;
  COleControlSite *pCVar1;
  
  this_00 = FUN_00452728(0xec);
  pCVar1 = (COleControlSite *)0x0;
  if (this_00 != (COleControlSite *)0x0) {
    pCVar1 = (COleControlSite *)COleControlSite::COleControlSite(this_00,param_1);
  }
  return pCVar1;
}

