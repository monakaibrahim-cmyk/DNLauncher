// Address: 0x004592ed
// Name: FID_conflict:HtmlHelpA
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::HtmlHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::HtmlHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall FID_conflict_HtmlHelpA(void *this,undefined4 param_1,undefined4 param_2)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *pCVar2;
  int iVar3;
  
  pAVar1 = AfxGetModuleState();
  iVar3 = *(int *)(pAVar1 + 4);
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  CWnd::PrepareForHelp(this);
  pCVar2 = CWnd::GetTopLevelParent(this);
  if (pCVar2 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar3 = AfxHtmlHelp(*(undefined4 *)(pCVar2 + 0x20),*(undefined4 *)(iVar3 + 100),param_2,param_1);
  if (iVar3 == 0) {
    AfxMessageBox(0xf107,0,0xffffffff);
  }
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
  return;
}

