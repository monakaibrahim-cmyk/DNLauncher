// Address: 0x0046ad0b
// Name: CRect::CRect
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CRect::CRect(struct tagPOINT,struct tagSIZE)
   
   Library: Visual Studio 2005 Release */

void __thiscall CRect::CRect(CRect *this,tagPOINT param_1,tagSIZE param_2)

{
  *(LONG *)(this + 8) = param_2.cx + param_1.x;
  *(LONG *)this = param_1.x;
  *(LONG *)(this + 4) = param_1.y;
  *(LONG *)(this + 0xc) = param_2.cy + param_1.y;
  return;
}

