// Address: 0x0045fed8
// Name: COleSafeArray::UnaccessData
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall COleSafeArray::UnaccessData(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleSafeArray::UnaccessData(COleSafeArray *this)

{
  HRESULT HVar1;
  
  HVar1 = SafeArrayUnaccessData(*(SAFEARRAY **)(this + 8));
  AfxCheckError(HVar1);
  return;
}

