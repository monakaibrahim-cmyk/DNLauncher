// Address: 0x0045bc3b
// Name: CDC::~CDC
// Category: Utility


/* Library Function - Single Match
    public: virtual __thiscall CDC::~CDC(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDC::~CDC(CDC *this)

{
  HDC__ *hdc;
  
  *(undefined ***)this = vftable;
  if (*(int *)(this + 4) != 0) {
    hdc = Detach(this);
    ::DeleteDC(hdc);
  }
  return;
}

