// Address: 0x00471c9b
// Name: COccManager::UIActivateControl
// Category: MFC_CRT


/* Library Function - Single Match
    protected: static void __cdecl COccManager::UIActivateControl(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __cdecl COccManager::UIActivateControl(CWnd *param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  int *piVar5;
  
  if (param_1 != (CWnd *)0x0) {
    piVar5 = (int *)0x0;
    pCVar3 = param_1;
    do {
      iVar1 = *(int *)(pCVar3 + 0x4c);
      if ((iVar1 != 0) || (piVar5 = *(int **)(pCVar3 + 0x50), piVar5 != (int *)0x0)) break;
      pHVar2 = GetParent(*(HWND *)(pCVar3 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
    } while (pCVar3 != (CWnd *)0x0);
    if ((pCVar3 != (CWnd *)0x0) && (iVar1 == 0)) {
      (**(code **)(*piVar5 + 0xb0))();
      pHVar2 = GetFocus();
      pCVar3 = CWnd::FromHandle(pHVar2);
      if ((pCVar3 != param_1) && (BVar4 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar4 != 0)) {
        CWnd::SetFocus(param_1);
        return;
      }
    }
  }
  return;
}

