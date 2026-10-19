// Address: 0x0046cd1d
// Name: ATL::CDynamicAccessor::SetValue<double>
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<double>(unsigned long,double const &)
   
   Library: Visual Studio 2005 Release */

bool __thiscall
ATL::CDynamicAccessor::SetValue<double>(CDynamicAccessor *this,ulong param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    *(double *)(*(int *)(param_1 * 0x30 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8)) =
         *param_2;
  }
  return bVar1;
}

