// Address: 0x0045ff1c
// Name: AfxSafeArrayInit
// Category: Utility


/* Library Function - Single Match
    void __stdcall AfxSafeArrayInit(class COleSafeArray *)
   
   Library: Visual Studio 2005 Release */

void AfxSafeArrayInit(COleSafeArray *param_1)

{
  if (param_1 != (COleSafeArray *)0x0) {
    _memset(param_1,0,0x18);
  }
  return;
}

