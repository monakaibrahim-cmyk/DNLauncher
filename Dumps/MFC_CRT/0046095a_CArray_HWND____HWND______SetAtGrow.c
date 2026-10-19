// Address: 0x0046095a
// Name: CArray<HWND__*,HWND__*>::SetAtGrow
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArray<struct HWND__ *,struct HWND__ *>::SetAtGrow(int,struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CArray<HWND__*,HWND__*>::SetAtGrow(CArray<HWND__*,HWND__*> *this,int param_1,HWND__ *param_2)

{
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(this + 8) <= param_1) {
    FUN_00473cf2(this,param_1 + 1,-1);
  }
  *(HWND__ **)(*(int *)(this + 4) + param_1 * 4) = param_2;
  return;
}

