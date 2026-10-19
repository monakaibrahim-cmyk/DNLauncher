// Address: 0x0045d822
// Name: Create
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CHtmlView::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    public: virtual int __thiscall CHtmlView::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
      undefined4 param_6,int param_7)

{
  CWnd *this_00;
  void **ppvObject;
  int iVar1;
  IUnknown *This;
  HRESULT HVar2;
  tagRECT local_14;
  
  *(int *)((int)this + 0x8c) = param_7;
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 != 0) {
    AfxEnableControlContainer((COccManager *)0x0);
    GetClientRect(*(HWND *)((int)this + 0x20),&local_14);
    this_00 = (CWnd *)((int)this + 0x98);
    iVar1 = CreateControl(this_00,(undefined4 *)&DAT_004ab74c,param_2,0x50000000,&local_14);
    if (iVar1 != 0) {
      This = CWnd::GetControlUnknown(this_00);
      ppvObject = (void **)((int)this + 0xec);
      HVar2 = (*This->lpVtbl->QueryInterface)(This,(IID *)&DAT_004ab75c,ppvObject);
      if (-1 < HVar2) {
        return 1;
      }
      if (*ppvObject != (void *)0x0) {
        FUN_00404940((int *)ppvObject,(int *)0x0);
      }
      (**(code **)(*(int *)this_00 + 0x60))();
    }
    (**(code **)(*(int *)this + 0x60))();
  }
  return 0;
}

