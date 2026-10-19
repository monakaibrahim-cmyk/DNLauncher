// Address: 0x00471b26
// Name: CWnd::IsChild
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CWnd::IsChild(class CWnd const *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::IsChild(CWnd *this,CWnd *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = (HWND)0x0;
  if (param_1 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_1 + 0x20);
  }
  BVar1 = ::IsChild(*(HWND *)(this + 0x20),hWnd);
  return BVar1;
}

