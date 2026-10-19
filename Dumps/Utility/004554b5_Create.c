// Address: 0x004554b5
// Name: Create
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    public: virtual int __thiscall CWnd::Create(wchar_t const *,wchar_t const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
      undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x20);
  }
  (**(code **)(*(int *)this + 0x5c))
            (0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4,
             param_4[3] - param_4[1],uVar1,param_6,param_7);
  return;
}

