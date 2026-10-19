// Address: 0x00455406
// Name: CWnd::CWnd
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CWnd::CWnd(void)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::CWnd(CWnd *this)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x30) = XAccessible::vftable;
  *(undefined ***)(this + 0x34) = XAccessibleServer::vftable;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (CWnd)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return this;
}

