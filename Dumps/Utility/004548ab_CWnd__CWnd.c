// Address: 0x004548ab
// Name: CWnd::CWnd
// Category: Utility


/* Library Function - Single Match
    private: __thiscall CWnd::CWnd(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::CWnd(CWnd *this,HWND__ *param_1)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x30) = XAccessible::vftable;
  *(undefined ***)(this + 0x34) = XAccessibleServer::vftable;
  *(HWND__ **)(this + 0x20) = param_1;
  this[0x24] = (CWnd)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return this;
}

