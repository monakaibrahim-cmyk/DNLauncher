// Address: 0x0045fe9b
// Name: COleSafeArray::operator=
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: class COleSafeArray & __thiscall COleSafeArray::operator=(struct tagVARIANT const &)
    public: class COleSafeArray & __thiscall COleSafeArray::operator=(class COleSafeArray const &)
    public: class COleSafeArray & __thiscall COleSafeArray::operator=(class COleVariant const &)
    public: class COleSafeArray & __thiscall COleSafeArray::operator=(struct tagVARIANT const *)
   
   Library: Visual Studio 2005 Release */

VARIANTARG * __thiscall COleSafeArray__operator_(void *this,VARIANTARG *param_1)

{
  HRESULT HVar1;
  
  if (((param_1->n1).n2.vt & 0x2000) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  HVar1 = VariantCopy(this,param_1);
  AfxCheckError(HVar1);
  return this;
}

