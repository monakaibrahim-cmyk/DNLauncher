// Address: 0x00465fff
// Name: OnChildNotify
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CButton::OnChildNotify(unsigned int,unsigned int,long,long *)
    protected: virtual int __thiscall CHeaderCtrl::OnChildNotify(unsigned int,unsigned int,long,long
   *)
    protected: virtual int __thiscall CListCtrl::OnChildNotify(unsigned int,unsigned int,long,long
   *)
    protected: virtual int __thiscall CListView::OnChildNotify(unsigned int,unsigned int,long,long
   *)
     8 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2010 Release */

int __thiscall OnChildNotify(void *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
  if (param_1 != 0x2b) {
    iVar1 = CWnd::OnChildNotify(this,param_1,param_2,param_3,param_4);
    return iVar1;
  }
  (**(code **)(*(int *)this + 0x138))(param_3);
  return 1;
}

