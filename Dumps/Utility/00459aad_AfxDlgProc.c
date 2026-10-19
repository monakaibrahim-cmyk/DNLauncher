// Address: 0x00459aad
// Name: AfxDlgProc
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxDlgProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
   lpDialogFunc parameter of CreateDialogIndirectParamW
    */

int AfxDlgProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  CWnd *pCVar1;
  CObject *pCVar2;
  int iVar3;
  
  if (param_2 == 0x110) {
    pCVar1 = CWnd::FromHandlePermanent(param_1);
    pCVar2 = FUN_0046618c((CRuntimeClass *)&PTR_s_CDialog_004a0eb8,(CObject *)pCVar1);
    if (pCVar2 == (CObject *)0x0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (**(code **)(*(int *)pCVar2 + 0x148))();
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

