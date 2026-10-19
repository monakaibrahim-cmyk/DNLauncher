// Address: 0x0046b15c
// Name: CWnd::InvalidateRgn
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWnd::InvalidateRgn(class CRgn *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::InvalidateRgn(CWnd *this,CRgn *param_1,int param_2)

{
  HRGN hRgn;
  
  hRgn = (HRGN)0x0;
  if (param_1 != (CRgn *)0x0) {
    hRgn = *(HRGN *)(param_1 + 4);
  }
  ::InvalidateRgn(*(HWND *)(this + 0x20),hRgn,param_2);
  return;
}

