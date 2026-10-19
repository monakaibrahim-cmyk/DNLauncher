// Address: 0x0046a6f8
// Name: COleControlSite::InvokeHelperV
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::InvokeHelperV(long,unsigned short,unsigned
   short,void *,unsigned char const *,char *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlSite::InvokeHelperV
          (COleControlSite *this,long param_1,ushort param_2,ushort param_3,void *param_4,
          uchar *param_5,char *param_6)

{
  COleDispatchDriver *this_00;
  int iVar1;
  undefined2 in_stack_0000000a;
  COleControlSite *local_8;
  
  this_00 = (COleDispatchDriver *)(this + 0xbc);
  local_8 = this;
  if (*(int *)this_00 == 0) {
    if ((*(int *)(this + 0x50) != 0) &&
       (iVar1 = (**(code **)**(undefined4 **)(this + 0x50))
                          (*(undefined4 **)(this + 0x50),&DAT_004ab72c,&local_8), -1 < iVar1)) {
      COleDispatchDriver::AttachDispatch(this_00,(IDispatch *)local_8,1);
    }
    if (*(int *)this_00 == 0) {
      return;
    }
  }
  FUN_00473234(this_00,param_1,_param_2,param_3,param_4,param_5,(double *)param_6);
  return;
}

