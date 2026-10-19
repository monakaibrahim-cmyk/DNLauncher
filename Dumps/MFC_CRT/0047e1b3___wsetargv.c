// Address: 0x0047e1b3
// Name: __wsetargv
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wsetargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __wsetargv(void)

{
  uint _Size;
  undefined4 *puVar1;
  int iVar2;
  uint in_ECX;
  uint local_8;
  
  _DAT_004cb3a8 = 0;
  local_8 = in_ECX;
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_004cb1a0,0x104);
  _DAT_004cae70 = &DAT_004cb1a0;
  wparse_cmdline((undefined4 *)0x0,(int *)&local_8);
  if ((((local_8 < 0x3fffffff) && (in_ECX < 0x7fffffff)) &&
      (_Size = (in_ECX + local_8 * 2) * 2, in_ECX * 2 <= _Size)) &&
     (puVar1 = __malloc_crt(_Size), puVar1 != (undefined4 *)0x0)) {
    wparse_cmdline(puVar1,(int *)&local_8);
    _DAT_004cae50 = local_8 - 1;
    iVar2 = 0;
    _DAT_004cae58 = puVar1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

