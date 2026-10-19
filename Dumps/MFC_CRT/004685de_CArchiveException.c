// Address: 0x004685de
// Name: CArchiveException
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CArchiveException::CArchiveException(int,char const *)
    public: __thiscall CArchiveException::CArchiveException(int,wchar_t const *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 * __thiscall CArchiveException(void *this,undefined4 param_1,short *param_2)

{
  FUN_00452a31((int)this);
  *(undefined ***)this = CArchiveException::vftable;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)((int)this + 0xc))
  ;
  *(undefined4 *)((int)this + 8) = param_1;
  FUN_004034e0((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
               ((int)this + 0xc),param_2);
  return this;
}

