// Address: 0x004557dc
// Name: CWnd::ScrollWindow
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::ScrollWindow(int,int,struct tagRECT const *,struct tagRECT const
   *)
   
   Library: Visual Studio 2008 Release */

void __thiscall
CWnd::ScrollWindow(CWnd *this,int param_1,int param_2,tagRECT *param_3,tagRECT *param_4)

{
  BOOL BVar1;
  HWND hWnd;
  UINT uCmd;
  tagRECT local_14;
  
  BVar1 = IsWindowVisible(*(HWND *)(this + 0x20));
  if (((BVar1 == 0) && (param_3 == (tagRECT *)0x0)) && (param_4 == (tagRECT *)0x0)) {
    uCmd = 5;
    hWnd = *(HWND *)(this + 0x20);
    while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,&local_14);
      ScreenToClient(this,&local_14);
      ::SetWindowPos(hWnd,(HWND)0x0,local_14.left + param_1,local_14.top + param_2,0,0,0x15);
      uCmd = 2;
    }
  }
  else {
    ::ScrollWindow(*(HWND *)(this + 0x20),param_1,param_2,param_3,param_4);
  }
  if ((*(int *)(this + 0x4c) != 0) && (param_3 == (tagRECT *)0x0)) {
    (**(code **)(**(int **)(this + 0x4c) + 0x5c))(param_1,param_2);
  }
  return;
}

