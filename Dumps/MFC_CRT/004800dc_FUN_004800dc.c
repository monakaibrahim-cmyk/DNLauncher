// Address: 0x004800dc
// Name: FUN_004800dc
// Category: MFC_CRT


uint __cdecl FUN_004800dc(uint param_1,FILE *param_2)

{
  uint uVar1;
  WCHAR *pWVar2;
  char *pcVar3;
  FILE *_File;
  byte bVar4;
  DWORD *pDVar5;
  undefined **ppuVar6;
  undefined3 extraout_var;
  undefined *puVar7;
  WCHAR *pWVar8;
  longlong lVar9;
  WCHAR *local_8;
  
  _File = param_2;
  param_2 = (FILE *)__fileno(param_2);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    pDVar5 = FUN_0047b849();
    *pDVar5 = 9;
LAB_00480100:
    _File->_flag = _File->_flag | 0x20;
    return 0xffffffff;
  }
  if ((uVar1 & 0x40) != 0) {
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x22;
    goto LAB_00480100;
  }
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffffffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_flag = uVar1 & 0xffffffef | 2;
  _File->_cnt = 0;
  local_8 = (WCHAR *)0x0;
  if (((uVar1 & 0x10c) == 0) &&
     (((ppuVar6 = FUN_0047a87c(), _File != (FILE *)(ppuVar6 + 8) &&
       (ppuVar6 = FUN_0047a87c(), _File != (FILE *)(ppuVar6 + 0x10))) ||
      (bVar4 = FUN_0048e22a((uint)param_2), CONCAT31(extraout_var,bVar4) == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108) == 0) {
    pWVar8 = (WCHAR *)&DAT_00000001;
    local_8 = (WCHAR *)FUN_00489089((uint)param_2,(WCHAR *)&param_1,(WCHAR *)&DAT_00000001);
  }
  else {
    pWVar2 = (WCHAR *)_File->_base;
    pcVar3 = _File->_ptr;
    _File->_ptr = (char *)((int)pWVar2 + 1);
    pWVar8 = (WCHAR *)(pcVar3 + -(int)pWVar2);
    _File->_cnt = _File->_bufsiz + -1;
    if ((int)pWVar8 < 1) {
      if ((param_2 == (FILE *)0xffffffff) || (param_2 == (FILE *)0xfffffffe)) {
        puVar7 = &DAT_004c3d70;
      }
      else {
        puVar7 = (undefined *)(((uint)param_2 & 0x1f) * 0x40 + (&DAT_004cc260)[(int)param_2 >> 5]);
      }
      if (((puVar7[4] & 0x20) != 0) && (lVar9 = FUN_0048e0cd((uint)param_2,0,0,2), lVar9 == -1))
      goto LAB_00480226;
    }
    else {
      local_8 = (WCHAR *)FUN_00489089((uint)param_2,pWVar2,pWVar8);
    }
    *_File->_base = (char)param_1;
  }
  if (local_8 == pWVar8) {
    return param_1 & 0xff;
  }
LAB_00480226:
  _File->_flag = _File->_flag | 0x20;
  return 0xffffffff;
}

