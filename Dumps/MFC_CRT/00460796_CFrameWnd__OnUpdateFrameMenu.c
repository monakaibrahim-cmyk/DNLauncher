// Address: 0x00460796
// Name: CFrameWnd::OnUpdateFrameMenu
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnUpdateFrameMenu(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
  int *piVar1;
  
  if (param_1 == (HMENU__ *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x13c))();
    if (piVar1 != (int *)0x0) {
      param_1 = (HMENU__ *)(**(code **)(*piVar1 + 0xa4))();
      if (param_1 != (HMENU)0x0) goto LAB_004607be;
    }
    param_1 = *(HMENU__ **)(this + 0x5c);
  }
LAB_004607be:
  SetMenu(*(HWND *)(this + 0x20),param_1);
  return;
}

