// Address: 0x0048c801
// Name: __wcstombs_s_l
// Category: MFC_CRT


/* Library Function - Single Match
    __wcstombs_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,
              size_t _MaxCountInBytes,_locale_t _Locale)

{
  size_t sVar1;
  int iVar2;
  DWORD *pDVar3;
  uint uVar4;
  DWORD DVar5;
  errno_t local_8;
  
  local_8 = 0;
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes != 0) goto LAB_0048c85b;
  }
  else if (_DstSizeInBytes == 0) {
LAB_0048c85b:
    pDVar3 = FUN_0047b849();
    DVar5 = 0x16;
    goto LAB_0048c862;
  }
  if (_Dst != (char *)0x0) {
    *_Dst = '\0';
  }
  if (_PtNumOfCharConverted != (size_t *)0x0) {
    *_PtNumOfCharConverted = 0;
  }
  sVar1 = _MaxCountInBytes;
  if (_DstSizeInBytes < _MaxCountInBytes) {
    sVar1 = _DstSizeInBytes;
  }
  iVar2 = __wcstombs_l_helper(_Dst,_Src,sVar1,_Locale);
  if (iVar2 == -1) {
    if (_Dst != (char *)0x0) {
      *_Dst = '\0';
    }
    pDVar3 = FUN_0047b849();
    return *pDVar3;
  }
  uVar4 = iVar2 + 1;
  if (_Dst != (char *)0x0) {
    if (_DstSizeInBytes < uVar4) {
      if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= uVar4)) {
        pDVar3 = FUN_0047b849();
        DVar5 = 0x22;
LAB_0048c862:
        *pDVar3 = DVar5;
        FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return DVar5;
      }
      local_8 = 0x50;
      uVar4 = _DstSizeInBytes;
    }
    _Dst[uVar4 - 1] = '\0';
  }
  if (_PtNumOfCharConverted == (size_t *)0x0) {
    return local_8;
  }
  *_PtNumOfCharConverted = uVar4;
  return local_8;
}

