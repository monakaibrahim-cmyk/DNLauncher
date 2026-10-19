// Address: 0x0045e5e3
// Name: CScrollView::OnVScroll
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CScrollView::OnVScroll(unsigned int,unsigned int,class CScrollBar *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CScrollView::OnVScroll(CScrollView *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  CScrollBar *pCVar2;
  
  if ((param_3 != (CScrollBar *)0x0) &&
     (iVar1 = CWnd::SendChildNotifyLastMsg((CWnd *)param_3,(long *)0x0), iVar1 != 0)) {
    return;
  }
  pCVar2 = (CScrollBar *)(**(code **)(*(int *)this + 0x70))(1);
  if (param_3 == pCVar2) {
    (**(code **)(*(int *)this + 0x138))((param_1 & 0xff) << 8 | 0xff,param_2,1);
  }
  return;
}

