// Address: 0x00460b76
// Name: CFrameWnd::OnSetCursor
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall CFrameWnd::OnSetCursor(CFrameWnd *this,CWnd *param_1,uint param_2,uint param_3)

{
  CFrameWnd *pCVar1;
  int iVar2;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(pCVar1 + 0x68) == 0) {
    iVar2 = CWnd::Default((CWnd *)this);
  }
  else {
    SetCursor(hCursor_004cab6c);
    iVar2 = 1;
  }
  return iVar2;
}

