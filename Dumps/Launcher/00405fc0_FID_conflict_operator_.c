// Address: 0x00405fc0
// Name: FID_conflict:operator=
// Category: Launcher


/* Library Function - Multiple Matches With Different Base Names
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator=(wchar_t const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::operator=(wchar_t const *)
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator+=(wchar_t const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::operator+=(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void * __thiscall FID_conflict_operator_(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (param_1 == (short *)0x0) {
    FUN_00403380(this,(void *)0x0,0);
    return this;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00403380(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return this;
}

