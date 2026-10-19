// Address: 0x0045e024
// Name: CFormView
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall CFormView::CFormView(char const *)
    protected: __thiscall CFormView::CFormView(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

CScrollView * __thiscall CFormView(void *this,undefined4 param_1)

{
  CScrollView::CScrollView(this);
  *(undefined4 *)((int)this + 0x88) = param_1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)this = CFormView::vftable;
  *(undefined1 *)((int)this + 0x24) = 1;
  return this;
}

