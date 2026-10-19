// Address: 0x0045ccc1
// Name: CreateEx
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CAnimateCtrl::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
    public: virtual int __thiscall CComboBoxEx::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
    public: virtual int __thiscall CHeaderCtrl::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
    public: virtual int __thiscall CHotKeyCtrl::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
     12 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
CreateEx(void *this,ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x134))(param_2,param_3,param_4,param_5);
  if ((iVar1 != 0) && (param_1 != 0)) {
    CWnd::ModifyStyleEx(this,0,param_1,0);
  }
  return;
}

