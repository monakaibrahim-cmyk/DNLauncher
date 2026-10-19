// Address: 0x0046642b
// Name: CDC::FillSolidRect
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDC::FillSolidRect(struct tagRECT const *,unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
  if (((this != (CDC *)0x0) && (*(HDC *)(this + 4) != (HDC)0x0)) && (param_1 != (tagRECT *)0x0)) {
    SetBkColor(*(HDC *)(this + 4),param_2);
    ExtTextOutW(*(HDC *)(this + 4),0,0,2,param_1,(LPCWSTR)0x0,0,(INT *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

