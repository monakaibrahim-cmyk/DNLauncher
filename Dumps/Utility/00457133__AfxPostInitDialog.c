// Address: 0x00457133
// Name: _AfxPostInitDialog
// Category: Utility


/* Library Function - Single Match
    void __stdcall _AfxPostInitDialog(class CWnd *,struct tagRECT const &,unsigned long)
   
   Library: Visual Studio 2005 Release */

void _AfxPostInitDialog(CWnd *param_1,tagRECT *param_2,ulong param_3)

{
  ulong uVar1;
  HWND pHVar2;
  CWnd *this;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = CWnd::GetExStyle(param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect(*(HWND *)(param_1 + 0x20),&local_14), param_2->left == local_14.left)) &&
     (param_2->top == local_14.top)) {
    pHVar2 = GetWindow(*(HWND *)(param_1 + 0x20),4);
    this = CWnd::FromHandle(pHVar2);
    if (((this == (CWnd *)0x0) || (iVar3 = CWnd::IsWindowEnabled(this), iVar3 == 0)) &&
       (iVar3 = (**(code **)(*(int *)param_1 + 0x11c))(), iVar3 != 0)) {
      CWnd::CenterWindow(param_1,(CWnd *)0x0);
    }
  }
  return;
}

