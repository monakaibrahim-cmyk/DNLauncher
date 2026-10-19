// Address: 0x00472b7b
// Name: GetAssocAt
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::GetAssocAt(wchar_t const
   *,unsigned int &,unsigned int &)const 
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::GetAssocAt(wchar_t const
   *,unsigned int &,unsigned int &)const 
   
   Library: Visual Studio 2005 Release */

undefined4 * __thiscall GetAssocAt(void *this,wchar_t *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = HashKey((ushort *)param_1);
  *param_3 = uVar1;
  uVar1 = uVar1 % *(uint *)((int)this + 8);
  *param_2 = uVar1;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar3 = *(undefined4 **)(*(int *)((int)this + 4) + uVar1 * 4); puVar3 != (undefined4 *)0x0
        ; puVar3 = (undefined4 *)*puVar3) {
      if ((puVar3[1] == *param_3) &&
         (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                             (puVar3 + 2),param_1), iVar2 == 0)) {
        return puVar3;
      }
    }
  }
  return (undefined4 *)0x0;
}

