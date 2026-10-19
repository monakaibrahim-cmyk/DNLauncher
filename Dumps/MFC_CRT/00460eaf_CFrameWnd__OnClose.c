// Address: 0x00460eaf
// Name: CFrameWnd::OnClose
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnClose(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
  CWinApp *this_00;
  int *piVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CWnd *this_01;
  CFrameWnd *pCVar4;
  CFrameWnd *local_8;
  
  local_8 = this;
  if (*(code **)(this + 0xb4) != (code *)0x0) {
    (**(code **)(this + 0xb4))(this);
  }
  piVar1 = (int *)(**(code **)(*(int *)this + 0x13c))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x8c))(this), iVar2 == 0)) {
    return;
  }
  pAVar3 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar3 + 4);
  if ((this_00 != (CWinApp *)0x0) && (*(CFrameWnd **)(this_00 + 0x20) == this)) {
    if ((piVar1 == (int *)0x0) && (iVar2 = (**(code **)(*(int *)this_00 + 0x94))(), iVar2 == 0)) {
      return;
    }
    CWinApp::HideApplication(this_00);
    CWinApp::CloseAllDocuments(this_00,0);
    iVar2 = AfxOleCanExitApp();
    if (iVar2 == 0) {
      AfxOleSetUserCtrl(0);
      return;
    }
    pAVar3 = AfxGetModuleState();
    if ((pAVar3[0x14] == (AFX_MODULE_STATE)0x0) && (*(int *)(this_00 + 0x20) == 0)) {
      AfxPostQuitMessage(0);
      return;
    }
  }
  if ((piVar1 != (int *)0x0) && (piVar1[0x13] != 0)) {
    local_8 = (CFrameWnd *)(**(code **)(*piVar1 + 0x60))();
    do {
      if (local_8 == (CFrameWnd *)0x0) {
        (**(code **)(*piVar1 + 0x7c))();
        return;
      }
      this_01 = (CWnd *)(**(code **)(*piVar1 + 100))(&local_8);
      if (this_01 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      pCVar4 = CWnd::GetParentFrame(this_01);
    } while (pCVar4 == this);
    (**(code **)(*piVar1 + 0x94))(this);
  }
  (**(code **)(*(int *)this + 0x60))();
  return;
}

