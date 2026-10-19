// Address: 0x0045546c
// Name: CreateEx
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,char const *,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,void *)
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CreateEx(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        int *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_6 + 0x20);
  }
  (**(code **)(*(int *)this + 0x5c))
            (param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5[2] - *param_5,
             param_5[3] - param_5[1],uVar1,param_7,param_8);
  return;
}

