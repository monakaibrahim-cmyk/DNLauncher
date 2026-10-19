// Address: 0x0047ab21
// Name: __snprintf
// Category: MFC_CRT


/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = FUN_004836a8(&local_24,(byte *)_Format,(localeinfo_struct *)0x0,
                         (wchar_t *)&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        FUN_004800dc(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}

