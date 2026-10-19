// Address: 0x00475652
// Name: COleBusyDialog::DoModal
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleBusyDialog::DoModal(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleBusyDialog::DoModal(COleBusyDialog *this)

{
  HWND__ *pHVar1;
  uint uVar2;
  int iVar3;
  COleBusyDialog *local_8;
  
  pHVar1 = (HWND__ *)0x0;
  if (*(int *)(this + 0x68) != 0) {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x68) + 0x20);
  }
  local_8 = this;
  pHVar1 = CWnd::GetSafeOwner_(pHVar1,(HWND__ **)&local_8);
  *(HWND__ **)(this + 0x80) = pHVar1;
  AfxHookWindowCreate((CWnd *)this);
  uVar2 = OleUIBusyW(this + 0x78);
  AfxUnhookWindowCreate();
  CWnd::Detach((CWnd *)this);
  if (local_8 != (COleBusyDialog *)0x0) {
    EnableWindow((HWND)local_8,1);
  }
  iVar3 = 2;
  if (uVar2 != 2) {
    if (uVar2 == 0x75) {
      *(undefined4 *)(this + 0xa4) = 1;
    }
    else {
      if (uVar2 != 0x76) {
        if (uVar2 == 0x77) {
          *(undefined4 *)(this + 0xa4) = 3;
          return 1;
        }
        iVar3 = COleDialog::MapResult((COleDialog *)this,uVar2);
      }
      *(int *)(this + 0xa4) = iVar3;
    }
    return 1;
  }
  return 2;
}

