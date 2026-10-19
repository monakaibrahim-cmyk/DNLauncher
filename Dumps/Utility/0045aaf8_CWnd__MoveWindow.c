// Address: 0x0045aaf8
// Name: CWnd::MoveWindow
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::MoveWindow(int,int,int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(int *)(this + 0x50) == 0) {
    ::MoveWindow(*(HWND *)(this + 0x20),param_1,param_2,param_3,param_4,param_5);
  }
  else {
    (**(code **)(**(int **)(this + 0x50) + 0x98))(param_1,param_2,param_3,param_4);
  }
  return;
}

