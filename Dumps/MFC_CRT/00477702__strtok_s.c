// Address: 0x00477702
// Name: _strtok_s
// Category: MFC_CRT


/* Library Function - Single Match
    _strtok_s
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strtok_s(char *_Str,char *_Delim,char **_Context)

{
  byte bVar1;
  DWORD *pDVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (((_Context == (char **)0x0) || (_Delim == (char *)0x0)) ||
     ((_Str == (char *)0x0 && (*_Context == (char *)0x0)))) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pbVar5 = local_28;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    do {
      bVar1 = *_Delim;
      local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
      _Delim = _Delim + 1;
    } while (bVar1 != 0);
    if (_Str == (char *)0x0) {
      _Str = *_Context;
    }
    for (; (bVar1 = *_Str, (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0));
        _Str = _Str + 1) {
    }
    for (; *_Str != 0; _Str = _Str + 1) {
      if ((local_28[(byte)*_Str >> 3] & (byte)(1 << (*_Str & 7U))) != 0) {
        *_Str = 0;
        _Str = _Str + 1;
        break;
      }
    }
    *_Context = _Str;
  }
  pcVar3 = (char *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pcVar3;
}

