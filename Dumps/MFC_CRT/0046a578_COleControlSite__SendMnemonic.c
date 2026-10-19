// Address: 0x0046a578
// Name: COleControlSite::SendMnemonic
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlSite::SendMnemonic(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::SendMnemonic(COleControlSite *this,tagMSG *param_1)

{
  int iVar1;
  COleControlSite *local_8;
  
  if ((*(ushort *)(this + 0x70) & 0x4000) == 0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0xb0))();
  }
  local_8 = (COleControlSite *)0x0;
  if (*(int *)(this + 0x50) == 0) {
LAB_0046a599:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar1 = (**(code **)**(undefined4 **)(this + 0x50))
                    (*(undefined4 **)(this + 0x50),&DAT_004ab80c,&local_8);
  if (-1 < iVar1) {
    if (local_8 == (COleControlSite *)0x0) goto LAB_0046a599;
    (**(code **)(*(int *)local_8 + 0x10))(local_8,param_1);
    (**(code **)(*(int *)local_8 + 8))(local_8);
  }
  return;
}

