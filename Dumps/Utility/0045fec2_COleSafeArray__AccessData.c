// Address: 0x0045fec2
// Name: COleSafeArray::AccessData
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall COleSafeArray::AccessData(void * *)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleSafeArray::AccessData(COleSafeArray *this,void **param_1)

{
  HRESULT HVar1;
  
  HVar1 = SafeArrayAccessData(*(SAFEARRAY **)(this + 8),param_1);
  AfxCheckError(HVar1);
  return;
}

