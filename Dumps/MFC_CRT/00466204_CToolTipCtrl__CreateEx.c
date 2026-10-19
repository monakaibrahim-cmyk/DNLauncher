// Address: 0x00466204
// Name: CToolTipCtrl::CreateEx
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CToolTipCtrl::CreateEx(class CWnd *,unsigned long,unsigned long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CToolTipCtrl::CreateEx(CToolTipCtrl *this,CWnd *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x134))(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = CWnd::ModifyStyleEx((CWnd *)this,0,(ulong)param_1,0), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

