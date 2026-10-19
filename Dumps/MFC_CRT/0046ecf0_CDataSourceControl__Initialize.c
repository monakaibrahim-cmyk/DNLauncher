// Address: 0x0046ecf0
// Name: CDataSourceControl::Initialize
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall CDataSourceControl::Initialize(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CDataSourceControl::Initialize(CDataSourceControl *this)

{
  int *piVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  long lVar7;
  tagRECT local_38;
  tagRECT local_28;
  uint local_18;
  int *local_14;
  int *local_10;
  int local_c;
  CWnd *local_8;
  
  if (((*(int *)(this + 4) == 0) ||
      (pCVar5 = *(CWnd **)(*(int *)(this + 4) + 0x28), pCVar5 == (CWnd *)0x0)) ||
     (local_8 = CWnd::GetTopLevelParent(pCVar5), local_8 == (CWnd *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  BVar3 = IsWindowVisible(*(HWND *)(local_8 + 0x20));
  local_18 = (uint)(BVar3 == 0);
  if (local_18 != 0) {
    pHVar4 = GetDesktopWindow();
    pCVar5 = CWnd::FromHandle(pHVar4);
    GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_38);
    GetWindowRect(*(HWND *)(local_8 + 0x20),&local_28);
    CWnd::MoveWindow(local_8,(local_38.right - local_38.left) / 2,
                     (local_38.bottom - local_38.top) / 2,0,0,0);
    CWnd::ShowWindow(local_8,1);
  }
  iVar6 = (**(code **)**(undefined4 **)(*(int *)(this + 4) + 0x50))
                    (*(undefined4 **)(*(int *)(this + 4) + 0x50),&DAT_004a3f18,this + 0x48);
  if (iVar6 < 0) {
    iVar6 = (**(code **)**(undefined4 **)(*(int *)(this + 4) + 0x50))
                      (*(undefined4 **)(*(int *)(this + 4) + 0x50),&DAT_004a3f70,&local_10);
    if (iVar6 < 0) {
      return iVar6;
    }
    (**(code **)(*local_10 + 0x14))(local_10,&local_14);
    (**(code **)(*local_10 + 8))(local_10);
    if (local_14 == (int *)0x0) {
      return -0x7fffbffb;
    }
    local_c = (**(code **)*local_14)(local_14,&DAT_004ab5fc,this + 8);
    (**(code **)(*local_14 + 8))(local_14);
    if (local_c < 0) {
      return local_c;
    }
    puVar2 = *(undefined4 **)(this + 8);
    (**(code **)*puVar2)(puVar2,&DAT_004ab5ec,this + 0xc);
  }
  else {
    piVar1 = *(int **)(this + 0x48);
    local_c = (**(code **)(*piVar1 + 0xc))(piVar1,0,&DAT_004ab8dc,this + 0x4c);
    if (*(int *)(this + 0x4c) == 0) {
      local_c = -0x7fffbffd;
    }
    if (local_c < 0) {
      if (local_18 == 0) {
        return local_c;
      }
      CWnd::MoveWindow(local_8,local_28.left,local_28.top,local_28.right - local_28.left,
                       local_28.bottom - local_28.top,0);
      CWnd::ShowWindow(local_8,0);
      return local_c;
    }
  }
  lVar7 = GetMetaData(this);
  if (local_18 != 0) {
    CWnd::MoveWindow(local_8,local_28.left,local_28.top,local_28.right - local_28.left,
                     local_28.bottom - local_28.top,0);
    CWnd::ShowWindow(local_8,0);
  }
  return lVar7;
}

