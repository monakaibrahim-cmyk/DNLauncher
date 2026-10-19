// Address: 0x0045a964
// Name: CWnd::GetOleControlSite
// Category: Utility


/* Library Function - Single Match
    public: class COleControlSite * __thiscall CWnd::GetOleControlSite(unsigned int)const 
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall CWnd::GetOleControlSite(CWnd *this,uint param_1)

{
  COleControlSite *pCVar1;
  
  if (*(int *)(this + 0x4c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045a96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pCVar1 = (COleControlSite *)(**(code **)(**(int **)(this + 0x4c) + 0x54))();
    return pCVar1;
  }
  return (COleControlSite *)0x0;
}

