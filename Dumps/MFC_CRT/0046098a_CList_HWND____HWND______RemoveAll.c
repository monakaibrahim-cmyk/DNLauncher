// Address: 0x0046098a
// Name: CList<HWND__*,HWND__*>::RemoveAll
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CList<struct HWND__ *,struct HWND__ *>::RemoveAll(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CList<HWND__*,HWND__*>::RemoveAll(CList<HWND__*,HWND__*> *this)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  FUN_00471658(*(void **)(this + 0x14));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

