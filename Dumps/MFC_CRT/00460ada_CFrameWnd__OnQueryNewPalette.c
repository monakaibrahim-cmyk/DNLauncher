// Address: 0x00460ada
// Name: CFrameWnd::OnQueryNewPalette
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnQueryNewPalette(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall CFrameWnd::OnQueryNewPalette(CFrameWnd *this)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar1 = (**(code **)(**(int **)(this + 0x80) + 0x70))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  lVar2 = CWnd::Default((CWnd *)this);
  return lVar2;
}

