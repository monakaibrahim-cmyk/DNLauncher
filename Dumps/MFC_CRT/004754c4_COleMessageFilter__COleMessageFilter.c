// Address: 0x004754c4
// Name: COleMessageFilter::COleMessageFilter
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall COleMessageFilter::COleMessageFilter(void)
   
   Library: Visual Studio 2005 Release */

COleMessageFilter * __thiscall COleMessageFilter::COleMessageFilter(COleMessageFilter *this)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = XMessageFilter::vftable;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x34) = 10000;
  *(undefined4 *)(this + 0x3c) = 8000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return this;
}

