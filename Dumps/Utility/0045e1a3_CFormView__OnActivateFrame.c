// Address: 0x0045e1a3
// Name: CFormView::OnActivateFrame
// Category: Utility


/* Library Function - Single Match
    protected: virtual void __thiscall CFormView::OnActivateFrame(unsigned int,class CFrameWnd *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFormView::OnActivateFrame(CFormView *this,uint param_1,CFrameWnd *param_2)

{
  if (param_1 == 0) {
    SaveFocusControl(this);
  }
  return;
}

