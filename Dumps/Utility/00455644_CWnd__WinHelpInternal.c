// Address: 0x00455644
// Name: CWnd::WinHelpInternal
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CWnd::WinHelpInternal(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  if (*(int *)(*(int *)(pAVar1 + 4) + 0x6c) == 1) {
    if (param_2 == 1) {
      param_2 = 0xf;
    }
    else if (param_2 == 3) {
      param_2 = 1;
    }
    else if (param_2 == 0xb) {
      param_2 = 0;
    }
    (**(code **)(*(int *)this + 0x78))(param_1,param_2);
  }
  else {
    (**(code **)(*(int *)this + 0x74))(param_1,param_2);
  }
  return;
}

