// Address: 0x0045a89c
// Name: AfxMessageBox
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxMessageBox(wchar_t const *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int AfxMessageBox(wchar_t *param_1,uint param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x98))();
    return iVar2;
  }
  iVar2 = CWinApp::ShowAppMessageBox((CWinApp *)0x0,param_1,param_2,param_3);
  return iVar2;
}

