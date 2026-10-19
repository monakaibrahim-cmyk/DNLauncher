// Address: 0x0045ca53
// Name: CCmdUI::SetCheck
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetCheck(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetCheck(CCmdUI *this,int param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) {
LAB_0045ca6b:
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    uVar1 = SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 0x20),0x87,0,0);
    if ((uVar1 & 0x2000) != 0) {
      SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 0x20),0xf1,param_1,0);
    }
  }
  else if (*(int *)(this + 0x10) == 0) {
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) goto LAB_0045ca6b;
    CheckMenuItem(*(HMENU *)(*(int *)(this + 0xc) + 4),*(uint *)(this + 8),
                  -(uint)(param_1 != 0) & 8 | 0x400);
  }
  return;
}

