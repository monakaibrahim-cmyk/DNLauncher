// Address: 0x00492dd6
// Name: FUN_00492dd6
// Category: MFC_CRT


/* WARNING: Removing unreachable block (ram,0x00492ff7) */

undefined4 __cdecl FUN_00492dd6(undefined4 *param_1,int param_2)

{
  uint _Size;
  undefined4 *puVar1;
  uchar uVar2;
  uchar *_Str;
  int *piVar3;
  DWORD *pDVar4;
  uchar *puVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  char *_Dst;
  errno_t eVar9;
  BOOL BVar10;
  size_t _Size_00;
  uchar *_Src;
  
  if (param_1 == (undefined4 *)0x0) {
    pDVar4 = FUN_0047b849();
    *pDVar4 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar5 = __mbschr(_Str,0x3d), puVar5 == (uchar *)0x0)) ||
     (_Str == puVar5)) {
LAB_00492e64:
    pDVar4 = FUN_0047b849();
    *pDVar4 = 0x16;
  }
  else {
    uVar2 = puVar5[1];
    if (DAT_004cae5c == DAT_004cae60) {
      DAT_004cae5c = copy_environ();
    }
    if (DAT_004cae5c == (int *)0x0) {
      if ((param_2 == 0) || (DAT_004cae64 == (undefined4 *)0x0)) {
        if (uVar2 == '\0') {
          return 0;
        }
        DAT_004cae5c = __malloc_crt(4);
        if (DAT_004cae5c == (int *)0x0) {
          return 0xffffffff;
        }
        *DAT_004cae5c = 0;
        if (DAT_004cae64 == (undefined4 *)0x0) {
          DAT_004cae64 = __malloc_crt(4);
          if (DAT_004cae64 == (undefined4 *)0x0) {
            return 0xffffffff;
          }
          *DAT_004cae64 = 0;
        }
      }
      else {
        iVar6 = FUN_0048b3f0();
        if (iVar6 != 0) goto LAB_00492e64;
      }
    }
    piVar3 = DAT_004cae5c;
    if (DAT_004cae5c != (int *)0x0) {
      iVar6 = findenv(_Str);
      if ((-1 < iVar6) && (*piVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar3[iVar6]);
      }
      if (uVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        _free(_Str);
      }
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      _Size = iVar6 + 2;
      if (((iVar6 <= (int)_Size) && (_Size < 0x3fffffff)) &&
         (pvVar7 = __recalloc_crt(DAT_004cae5c,4,_Size), pvVar7 != (void *)0x0)) {
        puVar1 = (undefined4 *)((int)pvVar7 + iVar6 * 4);
        *puVar1 = _Str;
        puVar1[1] = 0;
        *param_1 = 0;
        if (param_2 == 0) {
          DAT_004cae5c = pvVar7;
          return 0;
        }
        _Size_00 = 1;
        DAT_004cae5c = pvVar7;
        sVar8 = _strlen((char *)_Str);
        _Dst = __calloc_crt(sVar8 + 2,_Size_00);
        if (_Dst != (char *)0x0) {
          _Src = _Str;
          sVar8 = _strlen((char *)_Str);
          eVar9 = _strcpy_s(_Dst,sVar8 + 2,(char *)_Src);
          if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar5[(int)_Dst - (int)_Str] = '\0';
          BVar10 = SetEnvironmentVariableA(_Dst,(LPCSTR)(puVar5 + ((int)_Dst - (int)_Str) + 1));
          if (BVar10 == 0) {
            pDVar4 = FUN_0047b849();
            *pDVar4 = 0x2a;
          }
                    /* WARNING: Subroutine does not return */
          _free(_Dst);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}

