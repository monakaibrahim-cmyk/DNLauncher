// Address: 0x0045d7e5
// Name: CHtmlView::CreateControlSite
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CHtmlView::CreateControlSite(class COleControlContainer *,class
   COleControlSite * *,unsigned int,struct _GUID const &)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CHtmlView::CreateControlSite
          (CHtmlView *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  CHtmlControlSite *this_00;
  COleControlSite *pCVar1;
  
  this_00 = FUN_00452728(0xf0);
  pCVar1 = (COleControlSite *)0x0;
  if (this_00 != (CHtmlControlSite *)0x0) {
    pCVar1 = (COleControlSite *)CHtmlControlSite::CHtmlControlSite(this_00,param_1);
  }
  *param_2 = pCVar1;
  return 1;
}

