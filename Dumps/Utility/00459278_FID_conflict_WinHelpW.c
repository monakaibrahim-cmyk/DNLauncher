// Address: 0x00459278
// Name: FID_conflict:WinHelpW
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::WinHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  BOOL extraout_EAX;
  CWnd *in_ECX;
  undefined4 *puVar5;
  undefined4 uStackY_34;
  
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  CWnd::PrepareForHelp(in_ECX);
  pCVar3 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar3 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  puVar5 = &uStackY_34;
  uStackY_34 = 0x4592c8;
  BVar4 = WinHelpW(*(HWND *)(pCVar3 + 0x20),*(LPCWSTR *)(iVar1 + 100),(UINT)lpszHelp,
                   (ULONG_PTR)hWndMain);
  if (BVar4 == 0) {
    puVar5[-1] = 0xffffffff;
    puVar5[-2] = 0;
    puVar5[-3] = 0xf107;
    puVar5[-4] = 0x4592d9;
    AfxMessageBox(puVar5[-3],puVar5[-2],puVar5[-1]);
  }
  puVar5[-1] = 0x4592e5;
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&hWndMain + 3));
  puVar5[-1] = 0x4592ea;
  return extraout_EAX;
}

