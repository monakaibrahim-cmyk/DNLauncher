// Address: 0x00476648
// Name: __vsnwprintf_s_l
// Category: MFC_CRT


/* Library Function - Single Match
    __vsnwprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,
                _locale_t _Locale,va_list _ArgList)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (_Format == (wchar_t *)0x0) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00476692:
      if (_DstSize != 0) {
        pDVar2 = FUN_0047b849();
        if (_MaxCount < _DstSize) {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_00480be5,(char *)_DstBuf,_MaxCount + 1,(int)_Format,
                                     _Locale,_ArgList);
          if (iVar3 == -2) {
            pDVar2 = FUN_0047b849();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_0047b849();
            *pDVar2 = DVar1;
            return -1;
          }
LAB_00476723:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_00480be5,(char *)_DstBuf,_DstSize,(int)_Format,_Locale,
                                     _ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (iVar3 != -2) goto LAB_00476723;
          if (_MaxCount == 0xffffffff) {
            pDVar2 = FUN_0047b849();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_0047b849();
            *pDVar2 = DVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        pDVar2 = FUN_0047b849();
        *pDVar2 = 0x22;
        goto LAB_0047673a;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_00476692;
  pDVar2 = FUN_0047b849();
  *pDVar2 = 0x16;
LAB_0047673a:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}

