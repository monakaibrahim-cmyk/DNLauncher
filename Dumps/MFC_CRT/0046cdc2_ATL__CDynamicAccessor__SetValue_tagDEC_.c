// Address: 0x0046cdc2
// Name: ATL::CDynamicAccessor::SetValue<tagDEC>
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall ATL::CDynamicAccessor::SetValue<struct tagDEC>(unsigned long,struct
   tagDEC const &)
   
   Library: Visual Studio 2005 Release */

bool __thiscall
ATL::CDynamicAccessor::SetValue<tagDEC>(CDynamicAccessor *this,ulong param_1,tagDEC *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    puVar2 = (undefined4 *)
             (*(int *)(param_1 * 0x30 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8));
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = param_2->Hi32;
    puVar2[2] = (param_2->u2).s2.Lo32;
    puVar2[3] = (param_2->u2).s2.Mid32;
  }
  return bVar1;
}

