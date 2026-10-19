// Address: 0x004770f2
// Name: FUN_004770f2
// Category: MFC_CRT


undefined4 __cdecl FUN_004770f2(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_0047b86f(DVar2);
    return 0xffffffff;
  }
  return 0;
}

