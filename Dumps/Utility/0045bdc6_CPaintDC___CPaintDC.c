// Address: 0x0045bdc6
// Name: CPaintDC::~CPaintDC
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CPaintDC::~CPaintDC(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
  *(undefined ***)this = vftable;
  EndPaint(*(HWND *)(this + 0x10),(PAINTSTRUCT *)(this + 0x14));
  CDC::Detach((CDC *)this);
  CDC::~CDC((CDC *)this);
  return;
}

