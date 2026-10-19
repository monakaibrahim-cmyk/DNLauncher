// Address: 0x00457cdb
// Name: CWnd::GetOwner
// Category: Utility


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetOwner(void)const 
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetOwner(CWnd *this)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x38);
  if (pHVar1 == (HWND__ *)0x0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
  }
  pCVar2 = FromHandle(pHVar1);
  return pCVar2;
}

