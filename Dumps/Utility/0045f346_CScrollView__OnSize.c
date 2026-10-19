// Address: 0x0045f346
// Name: CScrollView::OnSize
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CScrollView::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::OnSize(CScrollView *this,uint param_1,int param_2,int param_3)

{
  CWnd::Default((CWnd *)this);
  if (*(int *)(this + 0x5c) == -1) {
    SetScaleToFitSize(this,*(tagSIZE *)(this + 0x60));
  }
  else {
    UpdateBars(this);
  }
  return;
}

