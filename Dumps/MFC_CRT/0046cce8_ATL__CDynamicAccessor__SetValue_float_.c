// Address: 0x0046cce8
// Name: ATL::CDynamicAccessor::SetValue<float>
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<float>(unsigned long,float const &)
   
   Library: Visual Studio 2005 Release */

bool __thiscall
ATL::CDynamicAccessor::SetValue<float>(CDynamicAccessor *this,ulong param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    *(float *)(*(int *)(param_1 * 0x30 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8)) = *param_2
    ;
  }
  return bVar1;
}

