// Address: 0x00425e40
// Name: FUN_00425e40
// Category: Launcher


void __cdecl FUN_00425e40(LPCWSTR param_1,LPCWSTR param_2)

{
  CHAR local_204;
  undefined1 local_203 [255];
  CHAR local_104;
  undefined1 local_103 [255];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_204;
  local_204 = '\0';
  _memset(local_203,0,0xfe);
  local_104 = '\0';
  _memset(local_103,0,0xfe);
  WideCharToMultiByte(0,0,param_1,-1,&local_204,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
  WideCharToMultiByte(0,0,param_2,-1,&local_104,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
  __security_check_cookie(local_4 ^ (uint)&local_204);
  return;
}

