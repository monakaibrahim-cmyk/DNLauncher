// Address: 0x004604be
// Name: ATL::CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>::CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall ATL::CFixedStringT<class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,256>::CFixedStringT<class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,256>(wchar_t
   const *)
   
   Library: Visual Studio 2005 Release */

CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256> *
__thiscall
ATL::CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>::
CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
          (CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
           *this,wchar_t *param_1)

{
  IAtlStringMgr *pIVar1;
  
  pIVar1 = (IAtlStringMgr *)FUN_00453ed1();
  CFixedStringMgr::CFixedStringMgr
            ((CFixedStringMgr *)this,(CStringData *)(this + 0x10),0x100,pIVar1);
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xc),
             param_1,(IAtlStringMgr *)this);
  *(undefined ***)this = vftable;
  return this;
}

