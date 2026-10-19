// Address: 0x0046efd7
// Name: COleControlSite::EnableDSC
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::EnableDSC(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::EnableDSC(COleControlSite *this)

{
  CDataSourceControl *pCVar1;
  
  if (*(int *)(this + 0x90) == 0) {
    pCVar1 = FUN_00452728(0x5c);
    if (pCVar1 == (CDataSourceControl *)0x0) {
      pCVar1 = (CDataSourceControl *)0x0;
    }
    else {
      pCVar1 = (CDataSourceControl *)CDataSourceControl::CDataSourceControl(pCVar1,this);
    }
    *(CDataSourceControl **)(this + 0x90) = pCVar1;
    CDataSourceControl::Initialize(pCVar1);
  }
  return;
}

