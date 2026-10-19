// Address: 0x0046a29a
// Name: COleControlSite::DisconnectSink
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall COleControlSite::DisconnectSink(struct _GUID const &,unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::DisconnectSink(COleControlSite *this,_GUID *param_1,ulong param_2)

{
  int iVar1;
  COleControlSite *local_c;
  COleControlSite *local_8;
  
  if ((param_2 != 0) && (*(int *)(this + 0x50) != 0)) {
    local_c = this;
    local_8 = this;
    iVar1 = (**(code **)**(undefined4 **)(this + 0x50))
                      (*(undefined4 **)(this + 0x50),&DAT_004ab84c,&local_c);
    if (-1 < iVar1) {
      local_8 = (COleControlSite *)0x0;
      iVar1 = (**(code **)(*(int *)local_c + 0x10))(local_c,param_1,&local_8);
      if (-1 < iVar1) {
        (**(code **)(*(int *)local_8 + 0x18))(local_8,param_2);
        (**(code **)(*(int *)local_8 + 8))(local_8);
      }
      (**(code **)(*(int *)local_c + 8))(local_c);
    }
  }
  return;
}

