// Address: 0x00461f79
// Name: CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CList<struct HWND__ *,struct HWND__ *>::CList<struct HWND__ *,struct HWND__
   *>(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>(CList<HWND__*,HWND__*> *this,int param_1)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x18) = param_1;
  return;
}

