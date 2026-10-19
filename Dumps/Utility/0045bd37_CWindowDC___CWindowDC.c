// Address: 0x0045bd37
// Name: CWindowDC::~CWindowDC
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CWindowDC::~CWindowDC(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWindowDC::~CWindowDC(CWindowDC *this)

{
  HDC__ *hDC;
  
  *(undefined ***)this = vftable;
  hDC = CDC::Detach((CDC *)this);
  ReleaseDC(*(HWND *)(this + 0x10),hDC);
  CDC::~CDC((CDC *)this);
  return;
}

