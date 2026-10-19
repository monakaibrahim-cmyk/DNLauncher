// Address: 0x0046bd21
// Name: COleControlSite::SetWindowPos
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::SetWindowPos(class CWnd const
   *,int,int,int,int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlSite::SetWindowPos
          (COleControlSite *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
          uint param_6)

{
  int iVar1;
  int iVar2;
  HWND hWndInsertAfter;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  
  if ((char)(byte)param_6 < '\0') {
    (**(code **)(*(int *)this + 0xa0))(0);
  }
  if (((byte)param_6 & 3) != 3) {
    iVar1 = param_3;
    iVar5 = param_2;
    if ((param_6 & 2) != 0) {
      iVar1 = *(int *)(this + 0x34);
      iVar5 = *(int *)(this + 0x30);
    }
    iVar2 = param_4;
    iVar4 = param_5;
    if ((param_6 & 1) != 0) {
      iVar2 = *(int *)(this + 0x38) - *(int *)(this + 0x30);
      iVar4 = *(int *)(this + 0x3c) - *(int *)(this + 0x34);
    }
    (**(code **)(*(int *)this + 0x98))(iVar5,iVar1,iVar2,iVar4);
  }
  if ((param_6 & 0x40) != 0) {
    (**(code **)(*(int *)this + 0xa0))(5);
  }
  hWndInsertAfter = (HWND)0x0;
  if (param_1 != (CWnd *)0x0) {
    hWndInsertAfter = *(HWND *)(param_1 + 0x20);
  }
  BVar3 = ::SetWindowPos(*(HWND *)(this + 0x24),hWndInsertAfter,param_2,param_3,param_4,param_5,
                         param_6 & 0xffffff3f | 3);
  return BVar3;
}

