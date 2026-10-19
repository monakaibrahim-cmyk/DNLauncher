// Address: 0x004601d9
// Name: COleVariant::COleVariant
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall COleVariant::COleVariant(struct tagVARIANT const &)
   
   Library: Visual Studio 2005 Release */

COleVariant * __thiscall COleVariant::COleVariant(COleVariant *this,tagVARIANT *param_1)

{
  HRESULT HVar1;
  
  FUN_0045fe88(this);
  HVar1 = VariantCopy((VARIANTARG *)this,param_1);
  AfxCheckError(HVar1);
  return this;
}

