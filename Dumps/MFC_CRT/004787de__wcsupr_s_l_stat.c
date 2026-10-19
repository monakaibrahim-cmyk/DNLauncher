// Address: 0x004787de
// Name: _wcsupr_s_l_stat
// Category: MFC_CRT


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcsupr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

int __cdecl _wcsupr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  DWORD *pDVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  int iVar6;
  wchar_t *unaff_EBX;
  DWORD DVar7;
  wchar_t *local_c;
  
  uVar2 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (unaff_EBX == (wchar_t *)0x0) {
LAB_004787f6:
    pDVar3 = FUN_0047b849();
    DVar7 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(unaff_EBX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *unaff_EBX = L'\0';
      goto LAB_004787f6;
    }
    if (*(DWORD *)(*(int *)param_2 + 0x14) == 0) {
      wVar1 = *unaff_EBX;
      while (wVar1 != L'\0') {
        wVar1 = *unaff_EBX;
        if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
          *unaff_EBX = wVar1 + L'￠';
        }
        unaff_EBX = unaff_EBX + 1;
        wVar1 = *unaff_EBX;
      }
      goto LAB_00478954;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),(LPCWSTR)0x200,
                                (int)unaff_EBX,(LPWSTR)0xffffffff,0);
    if (pwVar4 == (wchar_t *)0x0) {
      pDVar3 = FUN_0047b849();
      *pDVar3 = 0x2a;
LAB_0047888b:
      FUN_0047b849();
      goto LAB_00478954;
    }
    if (pwVar4 <= param_1) {
      if (((int)pwVar4 < 1) || (0xffffffe0U / (uint)pwVar4 < 2)) {
        local_c = (wchar_t *)0x0;
      }
      else {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          local_c = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_004788ea:
            local_c = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          local_c = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_004788ea;
          }
        }
      }
      if (local_c != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),
                                   (LPCWSTR)0x200,(int)unaff_EBX,(LPWSTR)0xffffffff,(int)local_c);
        if (iVar6 == 0) {
          pDVar3 = FUN_0047b849();
          *pDVar3 = 0x2a;
        }
        else {
          _wcscpy_s(unaff_EBX,(rsize_t)param_1,local_c);
        }
        FUN_00477a94((int)local_c);
        goto LAB_00478954;
      }
      pDVar3 = FUN_0047b849();
      *pDVar3 = 0xc;
      goto LAB_0047888b;
    }
    *unaff_EBX = L'\0';
    pDVar3 = FUN_0047b849();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_00478954:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

