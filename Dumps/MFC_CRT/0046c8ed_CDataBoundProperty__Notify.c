// Address: 0x0046c8ed
// Name: CDataBoundProperty::Notify
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDataBoundProperty::Notify(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDataBoundProperty::Notify(CDataBoundProperty *this)

{
  int iVar1;
  IUnknown *pIVar2;
  undefined4 uVar3;
  CDataBoundProperty *local_8;
  
  if ((*(int *)(this + 8) != -0x7ffeffff) && (iVar1 = *(int *)this, iVar1 != 0)) {
    local_8 = this;
    if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    iVar1 = (**(code **)**(undefined4 **)(iVar1 + 0x50))
                      (*(undefined4 **)(iVar1 + 0x50),&DAT_004ab5cc,&local_8);
    if (iVar1 < 0) {
      pIVar2 = GetCursor(this);
      if (pIVar2 != (IUnknown *)0x0) {
        uVar3 = 0xd;
        if (*(int *)(*(int *)(this + 0xc) + 0x90) != 0) {
          uVar3 = 0x800d;
        }
        (**(code **)(**(int **)this + 0x70))(*(int **)this,*(undefined4 *)(this + 8),uVar3,pIVar2);
      }
    }
    else {
      (**(code **)(*(int *)local_8 + 0xc))
                (local_8,*(undefined4 *)(this + 8),*(int *)(this + 0xc) != 0,this + 0x10);
      (**(code **)(*(int *)local_8 + 8))(local_8);
    }
  }
  return;
}

