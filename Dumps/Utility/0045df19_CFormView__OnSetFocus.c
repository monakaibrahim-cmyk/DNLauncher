// Address: 0x0045df19
// Name: CFormView::OnSetFocus
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CFormView::OnSetFocus(class CWnd *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CFormView::OnSetFocus(CFormView *this,CWnd *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(this + 0x90));
  if ((BVar1 != 0) && (BVar1 = IsChild(*(HWND *)(this + 0x20),*(HWND *)(this + 0x90)), BVar1 != 0))
  {
    SetFocus(*(HWND *)(this + 0x90));
    return;
  }
  *(undefined4 *)(this + 0x90) = 0;
  CWnd::Default((CWnd *)this);
  return;
}

