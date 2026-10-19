// Address: 0x00475242
// Name: COleMessageFilter::~COleMessageFilter
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual __thiscall COleMessageFilter::~COleMessageFilter(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall COleMessageFilter::~COleMessageFilter(COleMessageFilter *this)

{
  *(undefined ***)this = vftable;
  Revoke(this);
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  return;
}

