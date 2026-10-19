// Address: 0x004570f7
// Name: CWnd::UnsubclassWindow
// Category: Utility


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::UnsubclassWindow(void)
   
   Library: Visual Studio 2005 Release */

HWND__ * __thiscall CWnd::UnsubclassWindow(CWnd *this)

{
  LONG *pLVar1;
  HWND__ *pHVar2;
  
  pLVar1 = (LONG *)(**(code **)(*(int *)this + 0xf0))();
  SetWindowLongW(*(HWND *)(this + 0x20),-4,*pLVar1);
  *pLVar1 = 0;
  pHVar2 = Detach(this);
  return pHVar2;
}

