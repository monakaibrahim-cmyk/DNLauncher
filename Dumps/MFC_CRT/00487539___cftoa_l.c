// Address: 0x00487539
// Name: __cftoa_l
// Category: MFC_CRT


/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  DWORD *pDVar2;
  size_t _SizeInBytes;
  errno_t eVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar8;
  DWORD unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  DWORD DVar14;
  DWORD DVar15;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_0047b849();
    DVar14 = 0x16;
LAB_00487572:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_0047b849();
    DVar14 = 0x22;
    goto LAB_00487572;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar3 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar3 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar4 = _strrchr(param_2 + 2,0x65);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar4[3] = '\0';
    }
    goto LAB_00487896;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar8 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar10 = param_2 + 3;
  pcVar4 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar10 = '\0';
  }
  else {
    *pcVar10 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar12 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar8;
      }
      local_8 = local_8 + -4;
      *pcVar4 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar9 = pcVar4, 8 < (ushort)uVar12)) {
      while( true ) {
        pcVar5 = pcVar9 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar9 = pcVar5;
      }
      if (pcVar5 == pcVar10) {
        pcVar9[-2] = pcVar9[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)sVar8 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar4,0x30,param_4);
    pcVar4 = pcVar4 + param_4;
  }
  if (*pcVar10 == '\0') {
    pcVar4 = pcVar10;
  }
  *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar12 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar6 = (uint)(uVar12 & 0x7ff);
  uVar7 = uVar6 - local_18;
  uVar6 = -(uint)(uVar6 < local_18);
  if ((int)uVar6 < 0) {
    pcVar4[1] = '-';
    bVar11 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar6 = -(uVar6 + bVar11);
  }
  else {
    pcVar4[1] = '+';
  }
  pcVar9 = pcVar4 + 2;
  *pcVar9 = '0';
  pcVar10 = pcVar9;
  if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar7 < 1000)))) {
LAB_00487845:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_00487850;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_00487845;
LAB_00487850:
    uVar13 = __alldvrm(uVar7,uVar6,100,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar6 = 0;
    uVar7 = extraout_ECX_00;
  }
  if ((pcVar10 != pcVar9) || ((-1 < (int)uVar6 && ((0 < (int)uVar6 || (9 < uVar7)))))) {
    uVar13 = __alldvrm(uVar7,uVar6,10,0);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_01;
  }
  *pcVar10 = (char)uVar7 + '0';
  pcVar10[1] = '\0';
LAB_00487896:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}

