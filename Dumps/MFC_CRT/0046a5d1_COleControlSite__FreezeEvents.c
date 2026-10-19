// Address: 0x0046a5d1
// Name: COleControlSite::FreezeEvents
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlSite::FreezeEvents(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::FreezeEvents(COleControlSite *this,int param_1)

{
  int iVar1;
  COleControlSite *local_8;
  
  local_8 = this;
  if (*(int *)(this + 0x50) == 0) {
LAB_0046a5db:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  local_8 = (COleControlSite *)0x0;
  iVar1 = (**(code **)**(undefined4 **)(this + 0x50))
                    (*(undefined4 **)(this + 0x50),&DAT_004ab80c,&local_8);
  if (-1 < iVar1) {
    if (local_8 == (COleControlSite *)0x0) goto LAB_0046a5db;
    (**(code **)(*(int *)local_8 + 0x18))(local_8,param_1);
    (**(code **)(*(int *)local_8 + 8))(local_8);
  }
  return;
}

