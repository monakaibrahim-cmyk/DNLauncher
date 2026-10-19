// Address: 0x004779fd
// Name: _sprintf
// Category: MFC_CRT


/* Library Function - Single Match
    _sprintf
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_004836a8(&local_24,(byte *)_Format,(localeinfo_struct *)0x0,
                         (wchar_t *)&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      FUN_004800dc(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}

