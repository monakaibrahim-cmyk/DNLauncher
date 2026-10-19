// Address: 0x0045c8d3
// Name: CCmdUI::DoUpdate
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CCmdUI::DoUpdate(class CCmdTarget *,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CCmdUI::DoUpdate(CCmdUI *this,CCmdTarget *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCmdUI *local_c;
  CCmdUI *pCStack_8;
  
  iVar1 = *(int *)(this + 4);
  if ((iVar1 == 0) || ((short)iVar1 == -1)) {
    iVar1 = 1;
  }
  else {
    local_c = this;
    pCStack_8 = this;
    if (param_1 == (CCmdTarget *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    *(undefined4 *)(this + 0x18) = 0;
    iVar1 = (**(code **)(*(int *)param_1 + 0xc))(iVar1,0xffffffff,this,0);
    if ((param_2 != 0) && (*(int *)(this + 0x18) == 0)) {
      local_c = (CCmdUI *)0x0;
      uVar2 = (**(code **)(*(int *)param_1 + 0xc))(*(undefined4 *)(this + 4),0,this,&local_c);
      (*(code *)**(undefined4 **)this)(uVar2);
    }
  }
  return iVar1;
}

