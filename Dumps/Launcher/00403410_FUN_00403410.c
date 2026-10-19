// Address: 0x00403410
// Name: FUN_00403410
// Category: Launcher


undefined4 * __thiscall FUN_00403410(void *this,int *param_1)

{
  CStringData *pCVar1;
  
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*param_1 + -0x10));
  *(CStringData **)this = pCVar1 + 0x10;
  return this;
}

