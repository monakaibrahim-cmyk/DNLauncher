// Address: 0x0046a7a7
// Name: COleControlSite::InvokeHelper
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __cdecl COleControlSite::InvokeHelper(long,unsigned short,unsigned
   short,void *,unsigned char const *,...)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall
COleControlSite::InvokeHelper
          (COleControlSite *this,long param_1,ushort param_2,ushort param_3,void *param_4,
          uchar *param_5,...)

{
  undefined4 in_stack_00000018;
  
  (**(code **)(*(int *)param_1 + 0x60))
            (_param_2,_param_3,param_4,param_5,in_stack_00000018,&stack0x0000001c);
  return;
}

