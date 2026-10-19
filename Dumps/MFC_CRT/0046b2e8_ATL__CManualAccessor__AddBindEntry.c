// Address: 0x0046b2e8
// Name: ATL::CManualAccessor::AddBindEntry
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall ATL::CManualAccessor::AddBindEntry(unsigned long,unsigned short,unsigned
   long,void *,void *,void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CManualAccessor::AddBindEntry
          (CManualAccessor *this,ulong param_1,ushort param_2,ulong param_3,void *param_4,
          void *param_5,void *param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_6 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (int)param_6 - *(int *)(this + 8);
  }
  if (param_5 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)param_5 - *(int *)(this + 8);
  }
  CAccessorBase::Bind((tagDBBINDING *)(*(int *)(this + 0x14) * 0x34 + *(int *)(this + 0xc)),param_1,
                      param_2,param_3,'\0','\0',0,(int)param_4 - *(int *)(this + 8),uVar2,uVar1,
                      (tagDBOBJECT *)0x0);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}

