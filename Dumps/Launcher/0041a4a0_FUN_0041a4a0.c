// Address: 0x0041a4a0
// Name: FUN_0041a4a0
// Category: Launcher


void FUN_0041a4a0(void)

{
  int in_EAX;
  _FILETIME local_c;
  
  GetLocalTime((LPSYSTEMTIME)(in_EAX + 0xf0));
  SystemTimeToFileTime((LPSYSTEMTIME)(in_EAX + 0xf0),&local_c);
  *(DWORD *)(in_EAX + 0x100) = local_c.dwLowDateTime;
  *(DWORD *)(in_EAX + 0x104) = local_c.dwHighDateTime;
  FUN_0041a430(0);
  return;
}

