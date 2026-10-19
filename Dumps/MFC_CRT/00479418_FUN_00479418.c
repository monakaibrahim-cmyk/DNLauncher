// Address: 0x00479418
// Name: FUN_00479418
// Category: MFC_CRT


uint __cdecl FUN_00479418(WCHAR *param_1,uint param_2,uint param_3,FILE *param_4)

{
  DWORD *pDVar1;
  int iVar2;
  WCHAR *pWVar3;
  uint uVar4;
  WCHAR *pWVar5;
  WCHAR *pWVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  WCHAR *local_c;
  WCHAR *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (WCHAR *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      pWVar6 = (WCHAR *)(param_2 * param_3);
      pWVar5 = pWVar6;
      if ((param_4->_flag & 0x10c) == 0) {
        local_c = (WCHAR *)0x1000;
      }
      else {
        local_c = (WCHAR *)param_4->_bufsiz;
      }
      do {
        while( true ) {
          if (pWVar5 == (WCHAR *)0x0) {
            return param_3;
          }
          uVar4 = param_4->_flag & 0x108;
          if (uVar4 == 0) break;
          pWVar7 = (WCHAR *)param_4->_cnt;
          if (pWVar7 == (WCHAR *)0x0) break;
          if ((int)pWVar7 < 0) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_00479562;
          }
          local_8 = pWVar5;
          if (pWVar7 <= pWVar5) {
            local_8 = pWVar7;
          }
          _memcpy(param_4->_ptr,param_1,(size_t)local_8);
          param_4->_cnt = param_4->_cnt - (int)local_8;
          param_4->_ptr = param_4->_ptr + (int)local_8;
          pWVar5 = (WCHAR *)((int)pWVar5 - (int)local_8);
LAB_0047951e:
          local_8 = (WCHAR *)((int)param_1 + (int)local_8);
          param_1 = local_8;
        }
        if (local_c <= pWVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) goto LAB_00479562;
          pWVar7 = pWVar5;
          if (local_c != (WCHAR *)0x0) {
            pWVar7 = (WCHAR *)((int)pWVar5 - (uint)pWVar5 % (uint)local_c);
          }
          pWVar3 = param_1;
          pWVar8 = pWVar7;
          uVar4 = __fileno(param_4);
          pWVar3 = (WCHAR *)FUN_00489089(uVar4,pWVar3,pWVar8);
          if (pWVar3 != (WCHAR *)0xffffffff) {
            local_8 = pWVar7;
            if (pWVar3 <= pWVar7) {
              local_8 = pWVar3;
            }
            pWVar5 = (WCHAR *)((int)pWVar5 - (int)local_8);
            if (pWVar7 <= pWVar3) goto LAB_0047951e;
          }
          param_4->_flag = param_4->_flag | 0x20;
LAB_00479562:
          return (uint)((int)pWVar6 - (int)pWVar5) / param_2;
        }
        uVar4 = FUN_004800dc((int)(char)*param_1,param_4);
        if (uVar4 == 0xffffffff) goto LAB_00479562;
        param_1 = (WCHAR *)((int)param_1 + 1);
        local_c = (WCHAR *)param_4->_bufsiz;
        pWVar5 = (WCHAR *)((int)pWVar5 + -1);
        if ((int)local_c < 1) {
          local_c = (WCHAR *)&DAT_00000001;
        }
      } while( true );
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

