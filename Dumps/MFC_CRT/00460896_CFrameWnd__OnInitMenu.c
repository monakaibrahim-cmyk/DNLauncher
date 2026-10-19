// Address: 0x00460896
// Name: CFrameWnd::OnInitMenu
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnInitMenu(class CMenu *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnInitMenu(CFrameWnd *this,CMenu *param_1)

{
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x80) + 0x78))(param_1);
  }
  CWnd::Default((CWnd *)this);
  return;
}

