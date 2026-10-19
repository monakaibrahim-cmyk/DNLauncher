// Address: 0x0045cc90
// Name: CProgressCtrl::Create
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CProgressCtrl::Create(unsigned long,struct tagRECT const &,class
   CWnd *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CProgressCtrl::Create(CProgressCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4)

{
  int iVar1;
  
  AfxEndDeferRegisterClass(0x200);
  iVar1 = (**(code **)(*(int *)this + 0x54))
                    (L"msctls_progress32",0,param_1,param_2,param_3,param_4,0);
  return iVar1;
}

