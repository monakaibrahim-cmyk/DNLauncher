// Address: 0x004783ae
// Name: _strcpy_s
// Category: MFC_CRT


/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      pDVar2 = FUN_0047b849();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_004783cd;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_0047b849();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_004783cd:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}

