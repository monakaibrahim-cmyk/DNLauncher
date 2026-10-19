// Address: 0x0046ce2d
// Name: SetValue<>
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<short>(unsigned long,short const &)
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<unsigned short>(unsigned long,unsigned
   short const &)
   
   Library: Visual Studio 2005 Release */

bool __thiscall SetValue<>(void *this,ulong param_1,undefined2 *param_2)

{
  bool bVar1;
  
  bVar1 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
  if (bVar1) {
    *(undefined2 *)
     (*(int *)(param_1 * 0x30 + 4 + *(int *)((int)this + 0x14)) + *(int *)((int)this + 8)) =
         *param_2;
  }
  return bVar1;
}

