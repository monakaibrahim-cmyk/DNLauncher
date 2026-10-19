// Address: 0x00456a6c
// Name: CWnd::Attach
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::Attach(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::Attach(CWnd *this,HWND__ *param_1)

{
  CHandleMap *pCVar1;
  void **ppvVar2;
  
  if (param_1 != (HWND__ *)0x0) {
    pCVar1 = afxMapHWND(1);
    *(HWND__ **)(this + 0x20) = param_1;
    ppvVar2 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    *ppvVar2 = this;
    AttachControlSite(this,pCVar1);
  }
  return (uint)(param_1 != (HWND__ *)0x0);
}

