// Address: 0x004941c4
// Name: FUN_004941c4
// Category: MFC_CRT


undefined2 __cdecl FUN_004941c4(undefined2 param_1,FILE *param_2)

{
  uint uVar1;
  WCHAR *pWVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  DWORD *pDVar6;
  undefined **ppuVar7;
  undefined3 extraout_var;
  undefined *puVar8;
  WCHAR *pWVar9;
  longlong lVar10;
  WCHAR *local_8;
  
  uVar5 = __fileno(param_2);
  uVar1 = param_2->_flag;
  if ((uVar1 & 0x82) == 0) {
    pDVar6 = FUN_0047b849();
    *pDVar6 = 9;
LAB_004941e8:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    pDVar6 = FUN_0047b849();
    *pDVar6 = 0x22;
    goto LAB_004941e8;
  }
  if ((uVar1 & 1) != 0) {
    param_2->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      param_2->_flag = uVar1 | 0x20;
      return 0xffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = param_2->_flag;
  param_2->_cnt = 0;
  local_8 = (WCHAR *)0x0;
  pWVar9 = (WCHAR *)0x2;
  param_2->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((ppuVar7 = FUN_0047a87c(), param_2 != (FILE *)(ppuVar7 + 8) &&
       (ppuVar7 = FUN_0047a87c(), param_2 != (FILE *)(ppuVar7 + 0x10))) ||
      (bVar4 = FUN_0048e22a(uVar5), CONCAT31(extraout_var,bVar4) == 0)))) {
    __getbuf(param_2);
  }
  if ((param_2->_flag & 0x108) == 0) {
    local_8 = (WCHAR *)CONCAT22(local_8._2_2_,param_1);
    local_8 = (WCHAR *)FUN_00489089(uVar5,(WCHAR *)&local_8,(WCHAR *)0x2);
  }
  else {
    pWVar2 = (WCHAR *)param_2->_base;
    pcVar3 = param_2->_ptr;
    param_2->_ptr = (char *)(pWVar2 + 1);
    pWVar9 = (WCHAR *)(pcVar3 + -(int)pWVar2);
    param_2->_cnt = param_2->_bufsiz + -2;
    if ((int)pWVar9 < 1) {
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar8 = &DAT_004c3d70;
      }
      else {
        puVar8 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_004cc260)[(int)uVar5 >> 5]);
      }
      if (((puVar8[4] & 0x20) != 0) && (lVar10 = FUN_0048e0cd(uVar5,0,0,2), lVar10 == -1))
      goto LAB_0049431d;
    }
    else {
      local_8 = (WCHAR *)FUN_00489089(uVar5,pWVar2,pWVar9);
    }
    *(undefined2 *)param_2->_base = param_1;
  }
  if (local_8 == pWVar9) {
    return param_1;
  }
LAB_0049431d:
  param_2->_flag = param_2->_flag | 0x20;
  return 0xffff;
}

