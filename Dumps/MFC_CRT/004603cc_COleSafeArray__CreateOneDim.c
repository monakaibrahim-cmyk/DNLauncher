// Address: 0x004603cc
// Name: COleSafeArray::CreateOneDim
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleSafeArray::CreateOneDim(unsigned short,unsigned long,void const
   *,long)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleSafeArray::CreateOneDim
          (COleSafeArray *this,ushort param_1,ulong param_2,void *param_3,long param_4)

{
  ulong uVar1;
  UINT UVar2;
  uint uVar3;
  SAFEARRAYBOUND local_c;
  
  uVar1 = param_2;
  local_c.cElements = (ULONG)this;
  local_c.lLbound = (LONG)this;
  if (param_2 == 0) {
LAB_004603dc:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  local_c.lLbound = param_4;
  local_c.cElements = param_2;
  FUN_0046026a(this,param_1,1,&local_c);
  if (param_3 != (void *)0x0) {
    AccessData(this,(void **)&param_2);
    UVar2 = SafeArrayGetElemsize(*(SAFEARRAY **)(this + 8));
    uVar3 = (uint)((ulonglong)UVar2 * (ulonglong)uVar1);
    if (((int)((ulonglong)UVar2 * (ulonglong)uVar1 >> 0x20) != 0) || (0x7fffffff < uVar3))
    goto LAB_004603dc;
    FUN_004527b0((void *)param_2,uVar3,param_3,uVar3);
    UnaccessData(this);
  }
  return;
}

