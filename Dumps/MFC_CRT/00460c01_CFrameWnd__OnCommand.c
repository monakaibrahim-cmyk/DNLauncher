// Address: 0x00460c01
// Name: CFrameWnd::OnCommand
// Category: MFC_CRT


/* Library Function - Single Match
    protected: virtual int __thiscall CFrameWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xffff;
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((((*(int *)(pCVar1 + 0x68) == 0) || (param_2 != 0)) || (uVar4 == 0xe146)) ||
     ((uVar4 == 0xe147 || (uVar4 == 0xe145)))) {
    iVar3 = CWnd::OnCommand((CWnd *)this,param_1,param_2);
  }
  else {
    LVar2 = SendMessageW(*(HWND *)(this + 0x20),0x365,0,uVar4 + 0x10000);
    if (LVar2 == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
    }
    iVar3 = 1;
  }
  return iVar3;
}

