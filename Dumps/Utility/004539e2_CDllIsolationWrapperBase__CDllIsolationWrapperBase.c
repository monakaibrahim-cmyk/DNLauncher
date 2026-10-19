// Address: 0x004539e2
// Name: CDllIsolationWrapperBase::CDllIsolationWrapperBase
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CDllIsolationWrapperBase::CDllIsolationWrapperBase(class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
   
   Library: Visual Studio 2005 Release */

CDllIsolationWrapperBase * __thiscall
CDllIsolationWrapperBase::CDllIsolationWrapperBase
          (CDllIsolationWrapperBase *this,
          CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *param_1)

{
  *(undefined ***)this = vftable;
  FUN_00403410(this + 0xc,(int *)param_1);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (CDllIsolationWrapperBase)0x0;
  return this;
}

