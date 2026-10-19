// Address: 0x0045ad41
// Name: CWnd::SetWindowPos
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SetWindowPos(class CWnd const *,int,int,int,int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  HWND hWndInsertAfter;
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_1 != (CWnd *)0x0) {
      hWndInsertAfter = *(HWND *)(param_1 + 0x20);
    }
    BVar1 = ::SetWindowPos(*(HWND *)(this + 0x20),hWndInsertAfter,param_2,param_3,param_4,param_5,
                           param_6);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045ad77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x9c))();
  return iVar2;
}

