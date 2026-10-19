// Address: 0x0045a562
// Name: DDX_Control
// Category: Utility


/* Library Function - Single Match
    void __stdcall DDX_Control(class CDataExchange *,int,class CWnd &)
   
   Library: Visual Studio 2005 Release */

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
  CWnd *this;
  IUnknown *pIVar1;
  int iVar2;
  COleControlSite *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  this = param_3;
  if (*(int *)(param_3 + 0x20) != 0) {
    return;
  }
  pIVar1 = CWnd::GetControlUnknown(param_3);
  if (pIVar1 != (IUnknown *)0x0) {
    return;
  }
  CDataExchange::PrepareCtrl(param_1,param_2);
  CWnd::GetDlgItem(*(CWnd **)(param_1 + 4),param_2,(HWND__ **)&param_3);
  if (param_3 != (CWnd *)0x0) {
    iVar2 = CWnd::SubclassWindow(this,(HWND__ *)param_3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529ce();
    }
    if (param_3 != (CWnd *)0x0) {
      pCVar5 = *(CWnd **)(param_1 + 4);
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      if (*(HWND *)(pCVar5 + 0x20) == pHVar4) {
        return;
      }
      param_2 = 0;
      goto LAB_0045a5dd;
    }
  }
  pCVar3 = CWnd::GetOleControlSite(*(CWnd **)(param_1 + 4),param_2);
  if (pCVar3 == (COleControlSite *)0x0) {
    return;
  }
  pCVar5 = *(CWnd **)(param_1 + 4);
LAB_0045a5dd:
  CWnd::AttachControlSite(this,pCVar5,param_2);
  return;
}

