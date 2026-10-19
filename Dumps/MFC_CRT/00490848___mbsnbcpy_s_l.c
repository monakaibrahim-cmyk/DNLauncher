// Address: 0x00490848
// Name: __mbsnbcpy_s_l
// Category: MFC_CRT


/* Library Function - Single Match
    __mbsnbcpy_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__mbsnbcpy_s_l(uchar *_Dst,size_t _DstSizeInBytes,uchar *_Src,size_t _MaxCount,_locale_t _Locale)

{
  byte *pbVar1;
  uchar uVar2;
  DWORD *pDVar3;
  errno_t eVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  size_t sVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (_MaxCount == 0) {
    if (_Dst == (uchar *)0x0) {
      if (_DstSizeInBytes == 0) {
        return 0;
      }
      goto LAB_00490873;
    }
  }
  else if (_Dst == (uchar *)0x0) goto LAB_00490873;
  if (_DstSizeInBytes == 0) {
LAB_00490873:
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_MaxCount == 0) {
    *_Dst = '\0';
    return 0;
  }
  if (_Src == (uchar *)0x0) {
    *_Dst = '\0';
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if ((local_18.mbcinfo)->ismbcodepage == 0) {
    eVar4 = _strncpy_s((char *)_Dst,_DstSizeInBytes,(char *)_Src,_MaxCount);
    goto LAB_00490a34;
  }
  puVar5 = _Dst;
  sVar8 = _DstSizeInBytes;
  if (_MaxCount == 0xffffffff) {
    do {
      uVar2 = *_Src;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      _Src = _Src + 1;
      if (uVar2 == '\0') break;
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
  }
  else {
    do {
      puVar6 = puVar5;
      uVar2 = *_Src;
      *puVar6 = uVar2;
      puVar5 = puVar6 + 1;
      _Src = _Src + 1;
      if ((uVar2 == '\0') || (sVar8 = sVar8 - 1, sVar8 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (_MaxCount == 0) {
      *puVar5 = '\0';
      puVar5 = puVar6 + 2;
    }
  }
  if (sVar8 != 0) {
    if ((int)puVar5 - (int)_Dst < 2) {
LAB_00490a42:
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar9 = puVar5 + -2;
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) == 0) goto LAB_00490a42;
LAB_00490a26:
    *pbVar9 = 0;
    pDVar3 = FUN_0047b849();
    eVar4 = 0x2a;
    *pDVar3 = 0x2a;
LAB_00490a34:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return eVar4;
    }
    return eVar4;
  }
  if ((*_Src == '\0') || (_MaxCount == 1)) {
    pbVar9 = puVar5 + -1;
    local_8 = pbVar9;
    while ((_Dst <= local_8 && (iVar7 = __ismbblead_l((uint)*local_8,&local_18), iVar7 != 0))) {
      local_8 = local_8 + -1;
    }
    if (((int)pbVar9 - (int)local_8 & 1U) != 0) goto LAB_00490a26;
  }
  if (_MaxCount != 0xffffffff) {
    *_Dst = '\0';
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x22;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return 0x22;
    }
    return 0x22;
  }
  if (1 < _DstSizeInBytes) {
    pbVar9 = _Dst + (_DstSizeInBytes - 2);
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) != 0) {
      *pbVar9 = 0;
      goto LAB_004909af;
    }
  }
  _Dst[_DstSizeInBytes - 1] = '\0';
LAB_004909af:
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return 0x50;
}

