// Address: 0x0046090d
// Name: CControlBar::GetDockingFrame
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CControlBar::GetDockingFrame(void)const 
   
   Library: Visual Studio 2005 Release */

CFrameWnd * __thiscall CControlBar::GetDockingFrame(CControlBar *this)

{
  CFrameWnd *pCVar1;
  
  pCVar1 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
    pCVar1 = *(CFrameWnd **)(this + 0x88);
  }
  return pCVar1;
}

