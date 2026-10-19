// Address: 0x0046a752
// Name: COleControlSite::SetPropertyV
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::SetPropertyV(long,unsigned short,char *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlSite::SetPropertyV(COleControlSite *this,long param_1,ushort param_2,char *param_3)

{
  char cVar1;
  undefined2 in_stack_0000000a;
  
  if ((param_2 & 0x4000) != 0) {
    param_2 = param_2 & 0xbfff | 0x40;
  }
  if ((short)param_2 < 0) {
    cVar1 = '\b';
    param_2 = param_2 & 0x7fff;
  }
  else {
    cVar1 = (param_2 == 9) * '\x04' + '\x04';
  }
  _param_2 = CONCAT22(in_stack_0000000a,param_2) & 0xffff00ff;
  (**(code **)(*(int *)this + 0x60))(param_1,cVar1,0,0,&param_2,param_3);
  return;
}

