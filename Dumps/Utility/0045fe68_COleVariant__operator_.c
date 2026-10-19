// Address: 0x0045fe68
// Name: COleVariant::operator=
// Category: Utility


/* Library Function - Single Match
    public: class COleVariant const & __thiscall COleVariant::operator=(struct tagVARIANT const &)
   
   Library: Visual Studio 2005 Release */

COleVariant * __thiscall COleVariant::operator=(COleVariant *this,tagVARIANT *param_1)

{
  HRESULT HVar1;
  
  if (this != (COleVariant *)param_1) {
    HVar1 = VariantCopy((VARIANTARG *)this,param_1);
    AfxCheckError(HVar1);
  }
  return this;
}

