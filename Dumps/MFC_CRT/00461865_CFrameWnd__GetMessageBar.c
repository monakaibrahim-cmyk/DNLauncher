// Address: 0x00461865
// Name: CFrameWnd::GetMessageBar
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CFrameWnd::GetMessageBar(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

CWnd * __thiscall CFrameWnd::GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
  pCVar1 = CWnd::GetDescendantWindow(*(HWND__ **)(this + 0x20),0xe801,1);
  return pCVar1;
}

