// Address: 0x004904bf
// Name: FUN_004904bf
// Category: MFC_CRT


uint __cdecl FUN_004904bf(uint param_1,FILE *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  DWORD *pDVar5;
  
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
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(param_2);
      if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
        puVar4 = &DAT_004c3d70;
      }
      else {
        iVar2 = __fileno(param_2);
        uVar3 = __fileno(param_2);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_0049057c;
    }
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
LAB_0049057c:
    if (param_1 != 0xffffffff) {
      uVar3 = param_2->_flag;
      if (((uVar3 & 1) != 0) || (((char)uVar3 < '\0' && ((uVar3 & 2) == 0)))) {
        if (param_2->_base == (char *)0x0) {
          __getbuf(param_2);
        }
        if (param_2->_ptr == param_2->_base) {
          if (param_2->_cnt != 0) {
            return 0xffffffff;
          }
          param_2->_ptr = param_2->_ptr + 1;
        }
        param_2->_ptr = param_2->_ptr + -1;
        pcVar1 = param_2->_ptr;
        if ((param_2->_flag & 0x40) == 0) {
          *pcVar1 = (char)param_1;
        }
        else if (*pcVar1 != (char)param_1) {
          param_2->_ptr = pcVar1 + 1;
          return 0xffffffff;
        }
        param_2->_cnt = param_2->_cnt + 1;
        param_2->_flag = param_2->_flag & 0xffffffefU | 1;
        return param_1 & 0xff;
      }
    }
  }
  return 0xffffffff;
}

