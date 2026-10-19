// Address: 0x004601f9
// Name: COleSafeArray::COleSafeArray
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall COleSafeArray::COleSafeArray(struct tagVARIANT const *)
   
   Library: Visual Studio 2005 Release */

COleSafeArray * __thiscall COleSafeArray::COleSafeArray(COleSafeArray *this,tagVARIANT *param_1)

{
  UINT UVar1;
  
  AfxSafeArrayInit(this);
  COleSafeArray__operator_(this,param_1);
  UVar1 = SafeArrayGetDim(*(SAFEARRAY **)(this + 8));
  *(UINT *)(this + 0x14) = UVar1;
  UVar1 = SafeArrayGetElemsize(*(SAFEARRAY **)(this + 8));
  *(UINT *)(this + 0x10) = UVar1;
  return this;
}

