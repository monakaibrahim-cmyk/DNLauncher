// Address: 0x00456a2b
// Name: CWnd::FromHandle
// Category: Utility


/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::FromHandle(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CHandleMap *this;
  CObject *this_00;
  
  this = afxMapHWND(1);
  this_00 = CHandleMap::FromHandle(this,param_1);
  AttachControlSite((CWnd *)this_00,this);
  return (CWnd *)this_00;
}

