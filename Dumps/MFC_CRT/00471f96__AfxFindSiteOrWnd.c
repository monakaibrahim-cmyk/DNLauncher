// Address: 0x00471f96
// Name: _AfxFindSiteOrWnd
// Category: MFC_CRT


/* Library Function - Single Match
    struct COleControlSiteOrWnd * __stdcall _AfxFindSiteOrWnd(class CWnd *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

COleControlSiteOrWnd * _AfxFindSiteOrWnd(CWnd *param_1,CWnd *param_2)

{
  COleControlSiteOrWnd *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  void **ppvVar4;
  
  iVar3 = FUN_00454fc3((int)param_1);
  pCVar2 = param_2;
  if ((iVar3 != 0) && (param_1 = *(CWnd **)(iVar3 + 0x44), param_1 != (CWnd *)0x0)) {
    do {
      ppvVar4 = CPtrList::GetNext((CPtrList *)(iVar3 + 0x40),(__POSITION **)&param_1);
      pCVar1 = *ppvVar4;
      if ((*(int *)(pCVar1 + 4) != 0) &&
         (*(int *)(*(int *)(pCVar1 + 4) + 0x24) == *(int *)(pCVar2 + 0x20))) {
        return pCVar1;
      }
      if (*(int *)pCVar1 == *(int *)(pCVar2 + 0x20)) {
        return pCVar1;
      }
    } while (param_1 != (CWnd *)0x0);
  }
  return (COleControlSiteOrWnd *)0x0;
}

