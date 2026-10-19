// Address: 0x0047b3d5
// Name: __mbscmp_l
// Category: MFC_CRT


/* Library Function - Single Match
    __mbscmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  ushort uVar6;
  byte *pbVar7;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (*(int *)(local_14 + 8) == 0) {
    iVar3 = _strcmp((char *)_Str1,(char *)_Str2);
LAB_0047b4e3:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else {
    do {
      bVar1 = *_Str1;
      uVar6 = (ushort)bVar1;
      puVar4 = _Str1 + 1;
      if ((*(byte *)(bVar1 + 0x1d + local_14) & 4) != 0) {
        if (*puVar4 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT11(bVar1,*puVar4);
          puVar4 = _Str1 + 2;
        }
      }
      _Str1 = puVar4;
      uVar5 = (uint)*_Str2;
      pbVar7 = _Str2 + 1;
      if ((*(byte *)(uVar5 + 0x1d + local_14) & 4) != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar7 = _Str2 + 2;
          uVar5 = (uint)CONCAT11(*_Str2,bVar1);
        }
      }
      if ((ushort)uVar5 != uVar6) {
        iVar3 = (-(uint)((ushort)uVar5 < uVar6) & 2) - 1;
        goto LAB_0047b4e3;
      }
      _Str2 = pbVar7;
    } while (uVar6 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  return iVar3;
}

