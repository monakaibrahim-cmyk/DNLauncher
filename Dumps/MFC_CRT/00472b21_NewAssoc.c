// Address: 0x00472b21
// Name: NewAssoc
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::NewAssoc(void)
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::NewAssoc(void)
   
   Library: Visual Studio 2005 Release */

undefined4 * __fastcall NewAssoc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = FUN_00471627((undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18),0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar4 = (undefined4 *)(iVar3 + -0xc + iVar1 * 0x10);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar4 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar4;
      puVar4 = puVar4 + -4;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  uVar2 = *puVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(puVar4 + 2) !=
      (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)0x0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(puVar4 + 2));
  }
  puVar4[3] = 0;
  return puVar4;
}

