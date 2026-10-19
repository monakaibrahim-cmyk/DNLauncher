// Address: 0x0045eebe
// Name: _AFX_MOUSEANCHORWND::OnTimer
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::OnTimer(unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall _AFX_MOUSEANCHORWND::OnTimer(_AFX_MOUSEANCHORWND *this,uint param_1)

{
  int iVar1;
  CWnd *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR hCursor;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  tagRECT local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  GetCursorPos(&local_14);
  GetWindowRect(*(HWND *)(this + 0x20),&local_2c);
  iVar1 = *(int *)(this + 0x70);
  uVar9 = 0;
  if ((iVar1 == 0x7923) || (iVar1 == 0x7922)) {
    if (local_14.y < local_2c.top) {
      uVar9 = 30999;
    }
    else if (local_2c.bottom < local_14.y) {
      uVar9 = 0x791d;
    }
  }
  if ((iVar1 == 0x7923) || (iVar1 == 0x7921)) {
    if (local_14.x < local_2c.left) {
      if (uVar9 == 0) {
        uVar9 = 0x7919;
      }
      else if (iVar1 == 0x7923) {
        uVar9 = uVar9 - 1;
      }
    }
    else if (local_2c.right < local_14.x) {
      if (uVar9 == 0) {
        uVar9 = 0x791b;
      }
      else if (iVar1 == 0x7923) {
        uVar9 = uVar9 + 1;
      }
    }
  }
  if (*(int *)(this + 0x6c) == 0) {
    if (uVar9 == 0) {
      SetCursor(*(HCURSOR *)(this + 0x74));
    }
    else {
      pAVar3 = AfxGetModuleState();
      hCursor = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(uVar9 & 0xffff));
      SetCursor(hCursor);
      if ((local_2c.right < local_14.x) ||
         (local_2c.right = local_2c.left, local_14.x < local_2c.left)) {
        local_c = local_14.x - local_2c.right;
      }
      else {
        local_c = 0;
      }
      if ((local_2c.bottom < local_14.y) ||
         (local_2c.bottom = local_2c.top, local_14.y < local_2c.top)) {
        local_8 = local_14.y - local_2c.bottom;
      }
      else {
        local_8 = 0;
      }
      pCVar2 = CWnd::GetOwner((CWnd *)this);
      iVar1 = *(int *)(this + 0x70);
      if ((iVar1 == 0x7923) || (iVar1 == 0x7922)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      if ((iVar1 == 0x7923) || (iVar1 == 0x7921)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*(int *)pCVar2 + 0x184))(&local_1c,local_c,local_8,uVar4,uVar8);
      CWnd::ShowWindow((CWnd *)this,0);
      pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar7 = FUN_0046618c((CRuntimeClass *)&PTR_s_CSplitterWnd_004a27b0,(CObject *)pCVar6);
      if (pCVar7 == (CObject *)0x0) {
        (**(code **)(*(int *)pCVar2 + 0x13c))();
      }
      else {
        (**(code **)(*(int *)pCVar7 + 0x17c))(pCVar2,local_1c,local_18,1);
      }
      UpdateWindow(*(HWND *)(this + 0x20));
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_004ca750,*(int *)(this + 100) + -0x10,
                         *(int *)(this + 0x68) + -0x10,0,0,0x51);
    }
  }
  else {
    KillTimer(*(HWND *)(this + 0x20),0xe000);
    ReleaseCapture();
    SetCursor((HCURSOR)0x0);
    pCVar2 = CWnd::GetOwner((CWnd *)this);
    (**(code **)(*(int *)this + 0x60))();
    if (*(int **)(pCVar2 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(pCVar2 + 0x58) + 4))(1);
    }
    *(undefined4 *)(pCVar2 + 0x58) = 0;
  }
  return;
}

