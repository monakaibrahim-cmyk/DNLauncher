// Address: 0x00471d08
// Name: COccManager::UIDeactivateIfNecessary
// Category: MFC_CRT


/* Library Function - Single Match
    protected: static void __cdecl COccManager::UIDeactivateIfNecessary(class CWnd *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __cdecl COccManager::UIDeactivateIfNecessary(CWnd *param_1,CWnd *param_2)

{
  int *piVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *this;
  int iVar4;
  
  if (((param_1 != (CWnd *)0x0) && (BVar2 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar2 != 0)) &&
     (param_1 != param_2)) {
    do {
      piVar1 = *(int **)(param_1 + 0x4c);
      if (piVar1 != (int *)0x0) {
        iVar4 = piVar1[0x1a];
        this = (CWnd *)0x0;
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x74) == 0)) &&
           (this = CWnd::FromHandle(*(HWND__ **)(iVar4 + 0x24)), this == (CWnd *)0x0)) {
          return;
        }
        if ((param_2 != (CWnd *)0x0) && (this != (CWnd *)0x0)) {
          if (param_2 == this) {
            return;
          }
          iVar4 = CWnd::IsChild(this,param_2);
          if (iVar4 != 0) {
            return;
          }
        }
        (**(code **)(*piVar1 + 0x60))(0);
        return;
      }
      pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
      param_1 = CWnd::FromHandle(pHVar3);
    } while (param_1 != (CWnd *)0x0);
  }
  return;
}

