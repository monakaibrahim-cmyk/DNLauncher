// Address: 0x00460505
// Name: COleVariant::COleVariant
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall COleVariant::COleVariant(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2005 Release */

COleVariant * __thiscall COleVariant::COleVariant(COleVariant *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
  local_234 [556];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x224;
  local_8 = 0x460514;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)this = 8;
  if (param_1 != (wchar_t *)0x0) {
    iVar1 = ATL::
            CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
            ::
            CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
                      (local_234,param_1);
    local_8 = 0;
    uVar2 = FUN_00404770((undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(this + 8) = uVar2;
    FUN_0046043c((undefined4 *)local_234);
  }
  return this;
}

