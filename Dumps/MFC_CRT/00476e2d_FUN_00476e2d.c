// Address: 0x00476e2d
// Name: FUN_00476e2d
// Category: MFC_CRT


errno_t __cdecl FUN_00476e2d(tm *param_1,uint *param_2)

{
  DWORD *pDVar1;
  int iVar2;
  errno_t eVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (param_1 == (tm *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  _memset(param_1,0xff,0x24);
  if (param_2 == (uint *)0x0) {
LAB_00476ea7:
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  uVar6 = param_2[1];
  if (((int)uVar6 < 1) && ((int)uVar6 < 0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    return 0x16;
  }
  if ((6 < (int)uVar6) && ((7 < (int)uVar6 || (0x93406fff < *param_2)))) goto LAB_00476ea7;
  ___tzset();
  iVar2 = FUN_00482d48(&local_c);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_dstbias((long *)&local_10);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_timezone((long *)&local_8);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (0x3f480 < uVar5)))) {
    local_18 = uVar5 - local_8;
    local_14 = (uVar6 - ((int)local_8 >> 0x1f)) - (uint)(uVar5 < local_8);
    eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
    if (eVar3 != 0) {
      return eVar3;
    }
    if (local_c == 0) {
      return 0;
    }
    iVar2 = __isindst(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    bVar7 = local_18 < local_10;
    local_18 = local_18 - local_10;
    local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar7;
    eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
    if (eVar3 == 0) {
      param_1->tm_isdst = 1;
      return 0;
    }
    return eVar3;
  }
  eVar3 = __gmtime64_s(param_1,(__time64_t *)param_2);
  if (eVar3 != 0) {
    return eVar3;
  }
  if ((local_c == 0) || (iVar2 = __isindst(param_1), iVar2 == 0)) {
    uVar6 = param_1->tm_sec;
    uVar5 = uVar6 - local_8;
    local_14 = (((int)uVar6 >> 0x1f) - ((int)local_8 >> 0x1f)) - (uint)(uVar6 < local_8);
  }
  else {
    uVar4 = local_8 + local_10;
    uVar6 = param_1->tm_sec;
    uVar5 = uVar6 - uVar4;
    local_14 = (((int)uVar6 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar6 < uVar4);
    param_1->tm_isdst = 1;
  }
  uVar8 = __allrem(uVar5,local_14,0x3c,0);
  iVar2 = (int)uVar8;
  param_1->tm_sec = iVar2;
  if (iVar2 < 0) {
    bVar7 = 0x3b < uVar5;
    uVar5 = uVar5 - 0x3c;
    local_14 = (local_14 - 1) + (uint)bVar7;
    param_1->tm_sec = iVar2 + 0x3c;
  }
  lVar9 = __alldiv(uVar5,local_14,0x3c,0);
  lVar9 = lVar9 + param_1->tm_min;
  uVar6 = (uint)lVar9;
  local_14 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar8 = __allrem(uVar6,local_14,0x3c,0);
  iVar2 = (int)uVar8;
  param_1->tm_min = iVar2;
  if (iVar2 < 0) {
    bVar7 = 0x3b < uVar6;
    uVar6 = uVar6 - 0x3c;
    local_14 = (local_14 - 1) + (uint)bVar7;
    param_1->tm_min = iVar2 + 0x3c;
  }
  lVar9 = __alldiv(uVar6,local_14,0x3c,0);
  lVar9 = lVar9 + param_1->tm_hour;
  uVar6 = (uint)lVar9;
  local_14 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar8 = __allrem(uVar6,local_14,0x18,0);
  iVar2 = (int)uVar8;
  param_1->tm_hour = iVar2;
  if (iVar2 < 0) {
    bVar7 = 0x17 < uVar6;
    uVar6 = uVar6 - 0x18;
    local_14 = (local_14 - 1) + (uint)bVar7;
    param_1->tm_hour = iVar2 + 0x18;
  }
  lVar9 = __alldiv(uVar6,local_14,0x18,0);
  iVar2 = (int)lVar9;
  if (-1 < lVar9) {
    if ((0xffffffff < lVar9) || (iVar2 != 0)) {
      param_1->tm_mday = param_1->tm_mday + iVar2;
      param_1->tm_wday = (param_1->tm_wday + iVar2) % 7;
      goto LAB_004770a9;
    }
    if (0xffffffff < lVar9) {
      return 0;
    }
    if (-1 < lVar9) {
      return 0;
    }
  }
  param_1->tm_mday = param_1->tm_mday + iVar2;
  param_1->tm_wday = (param_1->tm_wday + 7 + iVar2) % 7;
  if (param_1->tm_mday < 1) {
    param_1->tm_yday = param_1->tm_yday + iVar2 + 0x16d;
    param_1->tm_year = param_1->tm_year + -1;
    param_1->tm_mday = param_1->tm_mday + 0x1f;
    param_1->tm_mon = 0xb;
    return 0;
  }
LAB_004770a9:
  param_1->tm_yday = param_1->tm_yday + iVar2;
  return 0;
}

