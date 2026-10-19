// Address: 0x00461728
// Name: CFrameWnd::OnMenuSelect
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnMenuSelect(unsigned int,unsigned int,struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnMenuSelect(CFrameWnd *this,uint param_1,uint param_2,HMENU__ *param_3)

{
  CFrameWnd *pCVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((*(int **)(this + 0x80) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x80) + 0x7c))(param_1,param_2,param_3), iVar2 != 0)) {
    return;
  }
  if (param_2 == 0xffff) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffbf;
    if (*(int *)(pCVar1 + 0x68) == 0) {
      *(undefined4 *)(this + 0xa8) = 0xe001;
    }
    else {
      *(undefined4 *)(this + 0xa8) = 0xe002;
    }
    SendMessageW(*(HWND *)(this + 0x20),0x362,*(WPARAM *)(this + 0xa8),0);
    iVar2 = (**(code **)(*(int *)this + 0x154))();
    if (iVar2 != 0) {
      UpdateWindow(*(HWND *)(iVar2 + 0x20));
    }
    goto LAB_00461808;
  }
  if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
    *(undefined4 *)(this + 0xa8) = 0;
  }
  else {
    if (param_1 - 0xf000 < 0x1f0) {
      param_1 = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    else if (0xfeff < param_1) {
      *(undefined4 *)(this + 0xa8) = 0xef1f;
      goto LAB_00461804;
    }
    *(uint *)(this + 0xa8) = param_1;
  }
LAB_00461804:
  *(uint *)(pCVar1 + 0x3c) = *(uint *)(pCVar1 + 0x3c) | 0x40;
LAB_00461808:
  if (*(int *)(this + 0xa8) != *(int *)(this + 0xac)) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    if (pCVar4 != (CWnd *)0x0) {
      PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
    }
  }
  return;
}

