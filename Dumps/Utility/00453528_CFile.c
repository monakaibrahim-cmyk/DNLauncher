// Address: 0x00453528
// Name: CFile
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CFile::CFile(char const *,unsigned int)
    public: __thiscall CFile::CFile(wchar_t const *,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 * __thiscall CFile(void *this,LPCWSTR param_1,uint param_2)

{
  int iVar1;
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  short *local_18;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x453534;
  *(undefined ***)this = CFile::vftable;
  local_14 = this;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)((int)this + 0xc))
  ;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  local_8 = 0;
  FUN_00416290(local_28,0,0xffffffff,(short *)0x0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_00453369(this,param_1,param_2,(int)local_28);
  if (iVar1 == 0) {
    FUN_00465ef2(local_20,local_1c,local_18);
  }
  local_28[0] = CFileException::vftable;
  FUN_004031b0((undefined4 *)(local_18 + -8));
  return this;
}

