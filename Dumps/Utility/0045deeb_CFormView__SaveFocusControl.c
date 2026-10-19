// Address: 0x0045deeb
// Name: CFormView::SaveFocusControl
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CFormView::SaveFocusControl(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CFormView::SaveFocusControl(CFormView *this)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = GetFocus();
  if ((hWnd != (HWND)0x0) && (BVar1 = IsChild(*(HWND *)(this + 0x20),hWnd), BVar1 != 0)) {
    *(HWND *)(this + 0x90) = hWnd;
    return 1;
  }
  return 0;
}

