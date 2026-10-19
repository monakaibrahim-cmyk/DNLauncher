// Address: 0x0045e7ca
// Name: _AFX_MOUSEANCHORWND::_AFX_MOUSEANCHORWND
// Category: Utility


/* Library Function - Single Match
    public: __thiscall _AFX_MOUSEANCHORWND::_AFX_MOUSEANCHORWND(class CPoint &)
   
   Library: Visual Studio 2005 Release */

_AFX_MOUSEANCHORWND * __thiscall
_AFX_MOUSEANCHORWND::_AFX_MOUSEANCHORWND(_AFX_MOUSEANCHORWND *this,CPoint *param_1)

{
  undefined4 uVar1;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 100) = *(undefined4 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x68) = uVar1;
  return this;
}

