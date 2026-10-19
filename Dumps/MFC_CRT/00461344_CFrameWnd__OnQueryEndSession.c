// Address: 0x00461344
// Name: CFrameWnd::OnQueryEndSession
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnQueryEndSession(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall CFrameWnd::OnQueryEndSession(CFrameWnd *this)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar2 + 4);
  if ((piVar1 != (int *)0x0) && ((CFrameWnd *)piVar1[8] == this)) {
                    /* WARNING: Could not recover jumptable at 0x0046135d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*piVar1 + 0x94))();
    return iVar3;
  }
  return 1;
}

