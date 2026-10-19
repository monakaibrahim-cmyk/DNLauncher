// Address: 0x00455554
// Name: CMenu::TrackPopupMenu
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CMenu::TrackPopupMenu(unsigned int,int,int,class CWnd *,struct tagRECT
   const *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall
CMenu::TrackPopupMenu
          (CMenu *this,uint param_1,int param_2,int param_3,CWnd *param_4,tagRECT *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _AFX_THREAD_STATE *p_Var3;
  HWND hWnd;
  BOOL BVar4;
  
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 0x78);
  uVar2 = *(undefined4 *)(p_Var3 + 0x74);
  hWnd = (HWND)0x0;
  if (param_4 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_4 + 0x20);
  }
  *(HWND *)(p_Var3 + 0x74) = hWnd;
  *(undefined4 *)(p_Var3 + 0x78) = *(undefined4 *)(this + 4);
  BVar4 = ::TrackPopupMenu(*(HMENU *)(this + 4),param_1,param_2,param_3,0,hWnd,param_5);
  *(undefined4 *)(p_Var3 + 0x74) = uVar2;
  *(undefined4 *)(p_Var3 + 0x78) = uVar1;
  return BVar4;
}

