// Address: 0x00426120
// Name: FUN_00426120
// Category: Launcher


void __fastcall FUN_00426120(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_108;
  local_108[0] = '\0';
  _memset(local_108 + 1,0,0x103);
  _strcpy_s(local_108,0x104,param_1);
  pcVar2 = local_108;
  do {
    pcVar1 = pcVar2;
    pcVar2 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  if (pcVar1[-1] != '\\') {
    _strcat_s(local_108,0x104,"\\");
  }
  for (pcVar2 = _strchr(local_108,0x5c); pcVar2 != (char *)0x0; pcVar2 = _strchr(pcVar2 + 1,0x5c)) {
    if (pcVar2[-1] != ':') {
      *pcVar2 = '\0';
      CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
      *pcVar2 = '\\';
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

