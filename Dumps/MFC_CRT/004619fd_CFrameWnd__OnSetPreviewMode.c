// Address: 0x004619fd
// Name: CFrameWnd::OnSetPreviewMode
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnSetPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
  CControlBar *pCVar1;
  CPrintPreviewState *pCVar2;
  void **ppvVar3;
  int iVar4;
  HWND pHVar5;
  HMENU pHVar6;
  HWND hWnd;
  uint uVar7;
  HWND unaff_retaddr;
  __POSITION *p_Stack_c;
  uint uStack_8;
  int iStack_4;
  
  pCVar2 = param_2;
  if ((param_2 != (CPrintPreviewState *)0x0) &&
     (iStack_4 = (**(code **)(*(int *)this + 0x140))(), iStack_4 != 0)) {
    if ((param_1 != 0) && (*(int *)(iStack_4 + 0x80) != 0)) {
      (**(code **)(**(int **)(iStack_4 + 0x80) + 0x5c))(0);
    }
    p_Stack_c = *(__POSITION **)(this + 0x88);
    param_2 = (CPrintPreviewState *)0x0;
    while( true ) {
      if (p_Stack_c == (__POSITION *)0x0) {
        *(CPrintPreviewState **)(pCVar2 + 8) = param_2;
        if (param_1 == 0) {
          *(undefined4 *)(this + 0xb4) = 0;
          pHVar5 = GetDlgItem(*(HWND *)(this + 0x20),0xea21);
          if (pHVar5 != (HWND)0x0) {
            hWnd = GetDlgItem(*(HWND *)(this + 0x20),0xe900);
            if (hWnd != (HWND)0x0) {
              SetWindowLongW(hWnd,-0xc,0xea21);
            }
            SetWindowLongW(pHVar5,-0xc,0xe900);
          }
          if (*(int *)(pCVar2 + 4) != 0) {
            InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
            SetMenu(*(HWND *)(this + 0x20),*(HMENU *)(pCVar2 + 4));
          }
          if (*(int *)(iStack_4 + 0x80) != 0) {
            (**(code **)(**(int **)(iStack_4 + 0x80) + 0x5c))(1);
          }
          (**(code **)(*(int *)this + 0x148))(1);
          if (*(int *)pCVar2 != 0xe900) {
            unaff_retaddr = GetDlgItem(*(HWND *)(this + 0x20),*(int *)pCVar2);
          }
          ShowWindow(unaff_retaddr,5);
          *(undefined4 *)(this + 0x60) = *(undefined4 *)(pCVar2 + 0x14);
          ShowOwnedWindows(this,1);
        }
        else {
          *(undefined4 *)(this + 0xb4) = *(undefined4 *)(pCVar2 + 0x10);
          ShowOwnedWindows(this,0);
          pHVar5 = GetDlgItem(*(HWND *)(this + 0x20),*(int *)pCVar2);
          ShowWindow(pHVar5,0);
          pHVar6 = GetMenu(*(HWND *)(this + 0x20));
          *(HMENU *)(pCVar2 + 4) = pHVar6;
          if (pHVar6 != (HMENU)0x0) {
            InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
            SetMenu(*(HWND *)(this + 0x20),(HMENU)0x0);
            *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) & 0xfffffffe;
          }
          *(undefined4 *)(pCVar2 + 0x14) = *(undefined4 *)(this + 0x60);
          *(undefined4 *)(this + 0x60) = 0;
          LoadAccelTable(this,(LPCWSTR)0x7915);
          if (*(int *)pCVar2 != 0xe900) {
            pHVar5 = GetDlgItem(*(HWND *)(this + 0x20),0xe900);
          }
          if (pHVar5 != (HWND)0x0) {
            SetWindowLongW(pHVar5,-0xc,0xea21);
          }
        }
        return;
      }
      ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x84),&p_Stack_c);
      pCVar1 = *ppvVar3;
      if (pCVar1 == (CControlBar *)0x0) break;
      uStack_8 = GetDlgCtrlID(*(HWND *)(pCVar1 + 0x20));
      uStack_8 = uStack_8 & 0xffff;
      if (uStack_8 - 0xe800 < 0x20) {
        uVar7 = 1 << ((byte)uStack_8 & 0x1f);
        iVar4 = (**(code **)(*(int *)pCVar1 + 0x154))();
        if (iVar4 != 0) {
          param_2 = (CPrintPreviewState *)((uint)param_2 | uVar7);
        }
        iVar4 = (**(code **)(*(int *)pCVar1 + 0x15c))();
        if ((iVar4 == 0) || (uStack_8 != 0xe81f)) {
          ShowControlBar(this,pCVar1,*(uint *)(pCVar2 + 8) & uVar7,1);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

