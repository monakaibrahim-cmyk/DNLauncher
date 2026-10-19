// Address: 0x00471a93
// Name: COccManager::IsLabelControl
// Category: MFC_CRT


/* Library Function - Single Match
    public: static int __cdecl COccManager::IsLabelControl(struct COleControlSiteOrWnd *)
   
   Library: Visual Studio 2005 Release */

int __cdecl COccManager::IsLabelControl(COleControlSiteOrWnd *param_1)

{
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  HWND hWnd;
  
  if (param_1 != (COleControlSiteOrWnd *)0x0) {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 == (int *)0x0) {
      hWnd = *(HWND *)param_1;
    }
    else {
      hWnd = (HWND)piVar1[9];
    }
    if (hWnd == (HWND)0x0) {
      if ((piVar1 != (int *)0x0) &&
         (uVar3 = (**(code **)(*piVar1 + 0x78))(), (uVar3 & 0x8000000) != 0)) {
        return 0;
      }
    }
    else {
      BVar2 = IsWindowEnabled(hWnd);
      if (BVar2 == 0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 4) != 0) && ((*(ushort *)(*(int *)(param_1 + 4) + 0x70) & 0x2000) != 0))
    {
      return 1;
    }
  }
  return 0;
}

