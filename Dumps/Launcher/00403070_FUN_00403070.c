// Address: 0x00403070
// Name: FUN_00403070
// Category: Launcher


void __cdecl FUN_00403070(HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  
  pHVar1 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if (pHVar1 == (HRSRC)0x0) {
    return;
  }
  FUN_004030b0(param_1,pHVar1,param_2);
  return;
}

