// Address: 0x00458845
// Name: CWnd::CreateEx
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,void *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  uint uVar3;
  HWND pHVar4;
  void *local_34;
  HINSTANCE local_30;
  HMENU__ *local_2c;
  HWND__ *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  ulong local_8;
  
  if (param_3 != (wchar_t *)0x0) {
    iVar1 = AfxIsValidString(param_3,-1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
  }
  local_8 = param_1;
  local_c = param_2;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_10 = param_3;
  local_2c = param_10;
  pAVar2 = AfxGetModuleState();
  local_30 = *(HINSTANCE *)(pAVar2 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 100))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x114))();
    uVar3 = 0;
  }
  else {
    AfxHookWindowCreate(this);
    pHVar4 = FID_conflict_AfxCtxCreateWindowExW
                       (local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                        local_28,local_2c,local_30,local_34);
    iVar1 = AfxUnhookWindowCreate();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x114))();
    }
    uVar3 = (uint)(pHVar4 != (HWND)0x0);
  }
  return uVar3;
}

