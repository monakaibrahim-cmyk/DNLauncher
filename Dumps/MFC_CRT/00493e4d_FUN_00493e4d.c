// Address: 0x00493e4d
// Name: FUN_00493e4d
// Category: MFC_CRT


void __cdecl FUN_00493e4d(undefined4 param_1,FILE *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  errno_t eVar5;
  wchar_t _WCh;
  undefined4 local_14;
  char local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  _WCh = (wchar_t)param_1;
  if (_WCh != L'\xffff') {
    uVar3 = param_2->_flag;
    if (((uVar3 & 1) != 0) || (((char)uVar3 < '\0' && ((uVar3 & 2) == 0)))) {
      if (param_2->_base == (char *)0x0) {
        __getbuf(param_2);
      }
      if ((param_2->_flag & 0x40) == 0) {
        iVar2 = __fileno(param_2);
        if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
          puVar4 = &DAT_004c3d70;
        }
        else {
          iVar2 = __fileno(param_2);
          uVar3 = __fileno(param_2);
          puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
        }
        if ((puVar4[4] & 0x80) != 0) {
          iVar2 = __fileno(param_2);
          if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
            puVar4 = &DAT_004c3d70;
          }
          else {
            iVar2 = __fileno(param_2);
            uVar3 = __fileno(param_2);
            puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
          }
          if ((puVar4[0x24] & 0x7f) == 0) {
            eVar5 = _wctomb_s(&local_14,&local_10,5,_WCh);
            if (eVar5 != 0) goto LAB_00493fd1;
          }
          else {
            local_10 = (char)param_1;
            local_f = (char)((uint)param_1 >> 8);
            local_14 = 2;
          }
          iVar2 = local_14;
          if (param_2->_ptr < param_2->_base + local_14) {
            if ((param_2->_cnt != 0) || (param_2->_bufsiz < local_14)) goto LAB_00493fd1;
            param_2->_ptr = param_2->_base + local_14;
          }
          while (iVar2 = iVar2 + -1, -1 < iVar2) {
            param_2->_ptr = param_2->_ptr + -1;
            *param_2->_ptr = (&local_10)[iVar2];
          }
          param_2->_cnt = param_2->_cnt + local_14;
          param_2->_flag = param_2->_flag & 0xffffffefU | 1;
          goto LAB_00493fd1;
        }
      }
      if (param_2->_ptr < param_2->_base + 2) {
        if ((param_2->_cnt != 0) || ((uint)param_2->_bufsiz < 2)) goto LAB_00493fd1;
        param_2->_ptr = param_2->_base + 2;
      }
      param_2->_ptr = param_2->_ptr + -2;
      pwVar1 = (wchar_t *)param_2->_ptr;
      if ((param_2->_flag & 0x40) == 0) {
        *pwVar1 = _WCh;
      }
      else if (*pwVar1 != _WCh) {
        param_2->_ptr = (char *)(pwVar1 + 1);
        goto LAB_00493fd1;
      }
      param_2->_cnt = param_2->_cnt + 2;
      param_2->_flag = param_2->_flag & 0xffffffefU | 1;
    }
  }
LAB_00493fd1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

