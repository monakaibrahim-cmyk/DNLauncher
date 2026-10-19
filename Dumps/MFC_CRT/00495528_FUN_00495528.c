// Address: 0x00495528
// Name: FUN_00495528
// Category: MFC_CRT


undefined2 __cdecl FUN_00495528(FILE *param_1)

{
  undefined2 uVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  LPWSTR pWVar6;
  LPWSTR pWVar7;
  
  if (param_1 == (FILE *)0x0) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar3 = param_1->_flag;
    if (((uVar3 & 0x83) != 0) && ((uVar3 & 0x40) == 0)) {
      if ((uVar3 & 2) == 0) {
        param_1->_flag = uVar3 | 1;
        if ((uVar3 & 0x10c) == 0) {
          __getbuf(param_1);
        }
        else {
          param_1->_ptr = param_1->_base;
        }
        pWVar7 = (LPWSTR)param_1->_bufsiz;
        pWVar6 = (LPWSTR)param_1->_base;
        uVar3 = __fileno(param_1);
        iVar4 = FUN_0048896a(uVar3,pWVar6,pWVar7);
        param_1->_cnt = iVar4;
        if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != -1)) {
          if ((param_1->_flag & 0x82) == 0) {
            iVar4 = __fileno(param_1);
            if ((iVar4 == -1) || (iVar4 = __fileno(param_1), iVar4 == -2)) {
              puVar5 = &DAT_004c3d70;
            }
            else {
              iVar4 = __fileno(param_1);
              uVar3 = __fileno(param_1);
              puVar5 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar4 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              param_1->_flag = param_1->_flag | 0x2000;
            }
          }
          if (((param_1->_bufsiz == 0x200) && ((param_1->_flag & 8U) != 0)) &&
             ((param_1->_flag & 0x400U) == 0)) {
            param_1->_bufsiz = 0x1000;
          }
          param_1->_cnt = param_1->_cnt + -2;
          uVar1 = *(undefined2 *)param_1->_ptr;
          param_1->_ptr = param_1->_ptr + 2;
          return uVar1;
        }
        param_1->_flag = param_1->_flag | (-(uint)(iVar4 != 0) & 0x10) + 0x10;
        param_1->_cnt = 0;
      }
      else {
        param_1->_flag = uVar3 | 0x20;
      }
    }
  }
  return 0xffff;
}

