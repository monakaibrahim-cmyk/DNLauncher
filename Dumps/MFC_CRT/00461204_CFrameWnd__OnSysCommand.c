// Address: 0x00461204
// Name: CFrameWnd::OnSysCommand
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSysCommand(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnSysCommand(CFrameWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  uVar4 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x68) == 0) {
LAB_00461249:
    CWnd::Default((CWnd *)this);
  }
  else {
    if (uVar4 < 0xf041) {
      if (((uVar4 != 0xf040) && (uVar4 != 0xf000)) && (uVar4 != 0xf010)) {
        iVar2 = uVar4 - 0xf020;
LAB_00461242:
        if ((iVar2 != 0) && (iVar2 != 0x10)) goto LAB_00461249;
      }
    }
    else if ((uVar4 != 0xf050) && (uVar4 != 0xf060)) {
      iVar2 = uVar4 - 0xf120;
      goto LAB_00461242;
    }
    LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x365,0,(uVar4 - 0xf000 >> 4) + 0x1ef00);
    if (LVar3 == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
    }
  }
  return;
}

