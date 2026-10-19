// Address: 0x00479161
// Name: FUN_00479161
// Category: MFC_CRT


uint __cdecl FUN_00479161(LPWSTR param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5)

{
  LPWSTR pWVar1;
  LPWSTR pWVar2;
  DWORD *pDVar3;
  LPWSTR pWVar4;
  int iVar5;
  uint uVar6;
  LPWSTR pWVar7;
  LPWSTR pWVar8;
  LPWSTR pWVar9;
  LPWSTR local_10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (LPWSTR)0x0) {
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3))) {
LAB_004791da:
        pWVar8 = (LPWSTR)(param_3 * param_4);
        pWVar7 = pWVar8;
        pWVar2 = param_1;
        pWVar1 = param_2;
        if ((param_5->_flag & 0x10c) == 0) {
          local_10 = (LPWSTR)0x1000;
        }
        else {
          local_10 = (LPWSTR)param_5->_bufsiz;
        }
joined_r0x004791ff:
        do {
          while( true ) {
            if (pWVar7 == (LPWSTR)0x0) {
              return param_4;
            }
            if ((param_5->_flag & 0x10c) == 0) break;
            pWVar4 = (LPWSTR)param_5->_cnt;
            if (pWVar4 == (LPWSTR)0x0) break;
            if ((int)pWVar4 < 0) {
LAB_0047934f:
              param_5->_flag = param_5->_flag | 0x20;
LAB_00479353:
              return (uint)((int)pWVar8 - (int)pWVar7) / param_3;
            }
            pWVar9 = pWVar7;
            if (pWVar4 <= pWVar7) {
              pWVar9 = pWVar4;
            }
            if (pWVar1 < pWVar9) {
              if (param_2 != (LPWSTR)0xffffffff) {
                _memset(param_1,0,(size_t)param_2);
              }
              pDVar3 = FUN_0047b849();
              *pDVar3 = 0x22;
              goto LAB_00479196;
            }
            _memcpy_s(pWVar2,(rsize_t)pWVar1,param_5->_ptr,(rsize_t)pWVar9);
            param_5->_cnt = param_5->_cnt - (int)pWVar9;
            param_5->_ptr = param_5->_ptr + (int)pWVar9;
            pWVar7 = (LPWSTR)((int)pWVar7 - (int)pWVar9);
            pWVar1 = (LPWSTR)((int)pWVar1 - (int)pWVar9);
            pWVar2 = (LPWSTR)((int)pWVar2 + (int)pWVar9);
          }
          if (local_10 <= pWVar7) {
            if (local_10 == (LPWSTR)0x0) {
              pWVar4 = (LPWSTR)0x7fffffff;
              if (pWVar7 < (LPWSTR)0x80000000) {
                pWVar4 = pWVar7;
              }
            }
            else {
              if (pWVar7 < (LPWSTR)0x80000000) {
                uVar6 = (uint)pWVar7 % (uint)local_10;
                pWVar4 = pWVar7;
              }
              else {
                uVar6 = (uint)(0x7fffffff % ZEXT48(local_10));
                pWVar4 = (LPWSTR)0x7fffffff;
              }
              pWVar4 = (LPWSTR)((int)pWVar4 - uVar6);
            }
            if (pWVar1 < pWVar4) {
LAB_00479322:
              if (param_2 != (LPWSTR)0xffffffff) {
                _memset(param_1,0,(size_t)param_2);
              }
              pDVar3 = FUN_0047b849();
              *pDVar3 = 0x22;
              goto LAB_00479196;
            }
            pWVar9 = pWVar2;
            uVar6 = __fileno(param_5);
            iVar5 = FUN_0048896a(uVar6,pWVar9,pWVar4);
            if (iVar5 == 0) {
              param_5->_flag = param_5->_flag | 0x10;
              goto LAB_00479353;
            }
            if (iVar5 == -1) goto LAB_0047934f;
            pWVar7 = (LPWSTR)((int)pWVar7 - iVar5);
            pWVar1 = (LPWSTR)((int)pWVar1 - iVar5);
            pWVar2 = (LPWSTR)((int)pWVar2 + iVar5);
            goto joined_r0x004791ff;
          }
          uVar6 = FUN_00488289(param_5);
          if (uVar6 == 0xffffffff) goto LAB_00479353;
          if (pWVar1 == (LPWSTR)0x0) goto LAB_00479322;
          *(char *)pWVar2 = (char)uVar6;
          local_10 = (LPWSTR)param_5->_bufsiz;
          pWVar7 = (LPWSTR)((int)pWVar7 - 1);
          pWVar1 = (LPWSTR)((int)pWVar1 - 1);
          pWVar2 = (LPWSTR)((int)pWVar2 + 1);
        } while( true );
      }
      if (param_2 != (LPWSTR)0xffffffff) {
        _memset(param_1,0,(size_t)param_2);
      }
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3)))
      goto LAB_004791da;
    }
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
LAB_00479196:
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

