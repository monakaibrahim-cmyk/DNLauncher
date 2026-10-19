// Address: 0x0045cc2d
// Name: CCmdUI::SetRadio
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetRadio(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetRadio(CCmdUI *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) == 0)) {
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    if ((hBitmapChecked_004cab78 == (HBITMAP)0x0) &&
       (_AfxLoadDotBitmap(), hBitmapChecked_004cab78 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(*(int *)(this + 0xc) + 4),*(UINT *)(this + 8),0x400,(HBITMAP)0x0,
                       hBitmapChecked_004cab78);
  }
  return;
}

