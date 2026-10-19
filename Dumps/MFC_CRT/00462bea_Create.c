// Address: 0x00462bea
// Name: Create
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CFrameWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,char const *,unsigned long,struct CCreateContext *)
    public: virtual int __thiscall CFrameWnd::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,wchar_t const *,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
Create(void *this,undefined4 param_1,short *param_2,undefined4 param_3,int *param_4,int param_5,
      LPCWSTR param_6,undefined4 param_7,undefined4 param_8)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  HMENU local_8;
  
  local_8 = (HMENU)0x0;
  if (param_6 != (LPCWSTR)0x0) {
    pAVar1 = AfxGetModuleState();
    local_8 = LoadMenuW(*(HINSTANCE *)(pAVar1 + 0xc),param_6);
    if (local_8 == (HMENU)0x0) {
      (**(code **)(*(int *)this + 0x114))();
      return 0;
    }
  }
  FUN_004034e0((void *)((int)this + 0xc4),param_2);
  if (param_5 == 0) {
    param_6 = (LPCWSTR)0x0;
  }
  else {
    param_6 = *(LPCWSTR *)(param_5 + 0x20);
  }
  iVar2 = (**(code **)(*(int *)this + 0x5c))
                    (param_7,param_1,param_2,param_3,*param_4,param_4[1],param_4[2] - *param_4,
                     param_4[3] - param_4[1],param_6,local_8,param_8);
  if (iVar2 == 0) {
    if (local_8 != (HMENU)0x0) {
      DestroyMenu(local_8);
    }
    return 0;
  }
  return 1;
}

