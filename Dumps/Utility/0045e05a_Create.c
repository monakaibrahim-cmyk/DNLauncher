// Address: 0x0045e05a
// Name: Create
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CFormView::Create(char const *,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    protected: virtual int __thiscall CFormView::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
      int param_6,undefined4 param_7)

{
  tagSIZE tVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined1 local_44 [32];
  uint local_24;
  uint local_18;
  tagRECT local_14;
  
  *(undefined4 *)((int)this + 0x8c) = param_7;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0x7c000);
  _memset(local_44,0,0x30);
  if (param_3 == 0) {
    param_3 = 0x50800000;
  }
  local_24 = param_3;
  iVar3 = (**(code **)(*(int *)this + 100))(local_44);
  if ((iVar3 != 0) &&
     (bVar2 = CreateDlg(this,*(LPCWSTR *)((int)this + 0x88),param_5),
     CONCAT31(extraout_var,bVar2) != 0)) {
    *(undefined4 *)((int)this + 0x8c) = 0;
    CWnd::ModifyStyle(this,0xc00000,local_24 & 0xc00000,0);
    CWnd::ModifyStyleEx(this,0x200,local_18 & 0x200,0);
    CWnd::SetDlgCtrlID(this,param_6);
    GetWindowRect(*(HWND *)((int)this + 0x20),&local_14);
    tVar1.cy = local_14.bottom - local_14.top;
    tVar1.cx = local_14.right - local_14.left;
    CScrollView::SetScrollSizes(this,1,tVar1,(tagSIZE *)&DAT_004a2320,(tagSIZE *)&DAT_004a2320);
    iVar3 = CWnd::ExecuteDlgInit(this,*(wchar_t **)((int)this + 0x88));
    if (iVar3 != 0) {
      CWnd::SetWindowPos(this,(CWnd *)0x0,*param_4,param_4[1],param_4[2] - *param_4,
                         param_4[3] - param_4[1],0x14);
      if ((param_3 & 0x10000000) != 0) {
        CWnd::ShowWindow(this,1);
      }
      return 1;
    }
  }
  return 0;
}

