// Address: 0x00457451
// Name: CWnd::GetTopLevelFrame
// Category: Utility


/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CWnd::GetTopLevelFrame(void)const 
   
   Library: Visual Studio 2005 Release */

CFrameWnd * __thiscall CWnd::GetTopLevelFrame(CWnd *this)

{
  CWnd *this_00;
  int iVar1;
  CFrameWnd *pCVar2;
  
  if ((this != (CWnd *)0x0) && (*(int *)(this + 0x20) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x120))();
    pCVar2 = (CFrameWnd *)this;
    if (iVar1 == 0) {
      this = (CWnd *)GetParentFrame(this);
      pCVar2 = (CFrameWnd *)this;
    }
    while (this_00 = (CWnd *)pCVar2, this_00 != (CWnd *)0x0) {
      pCVar2 = GetParentFrame(this_00);
      this = this_00;
    }
    return (CFrameWnd *)this;
  }
  return (CFrameWnd *)0x0;
}

