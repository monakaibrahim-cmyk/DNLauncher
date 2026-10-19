// Address: 0x0046a230
// Name: COleControlSite::ConnectSink
// Category: MFC_CRT


/* Library Function - Single Match
    protected: unsigned long __thiscall COleControlSite::ConnectSink(struct _GUID const &,struct
   IUnknown *)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall
COleControlSite::ConnectSink(COleControlSite *this,_GUID *param_1,IUnknown *param_2)

{
  int iVar1;
  ulong local_10;
  int *local_c;
  int *local_8;
  
  if ((*(int *)(this + 0x50) != 0) &&
     (iVar1 = (**(code **)**(undefined4 **)(this + 0x50))
                        (*(undefined4 **)(this + 0x50),&DAT_004ab84c,&local_c), -1 < iVar1)) {
    local_8 = (int *)0x0;
    local_10 = 0;
    iVar1 = (**(code **)(*local_c + 0x10))(local_c,param_1,&local_8);
    if (-1 < iVar1) {
      (**(code **)(*local_8 + 0x14))(local_8,param_2,&local_10);
      (**(code **)(*local_8 + 8))(local_8);
    }
    (**(code **)(*local_c + 8))(local_c);
    return local_10;
  }
  return 0;
}

