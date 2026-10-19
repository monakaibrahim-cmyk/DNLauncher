// Address: 0x0046cdf8
// Name: SetValue<>
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<signed char>(unsigned long,signed char
   const &)
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<unsigned char>(unsigned long,unsigned
   char const &)
   
   Library: Visual Studio 2005 Release */

bool __thiscall SetValue<>(void *this,ulong param_1,undefined1 *param_2)

{
  bool bVar1;
  
  bVar1 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
  if (bVar1) {
    *(undefined1 *)
     (*(int *)(param_1 * 0x30 + 4 + *(int *)((int)this + 0x14)) + *(int *)((int)this + 8)) =
         *param_2;
  }
  return bVar1;
}

