// Address: 0x0048e288
// Name: FUN_0048e288
// Category: MFC_CRT


void __cdecl FUN_0048e288(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  errno_t eVar5;
  char cVar6;
  wchar_t _WCh;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  _WCh = (wchar_t)param_1;
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
    if ((puVar4[0x24] & 0x7f) != 2) {
      iVar2 = __fileno(param_2);
      if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
        puVar4 = &DAT_004c3d70;
      }
      else {
        iVar2 = __fileno(param_2);
        uVar3 = __fileno(param_2);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x7f) == 1) {
        piVar1 = &param_2->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar3 = FUN_004800dc((int)(char)param_1,param_2);
        }
        else {
          *param_2->_ptr = (char)param_1;
          uVar3 = (uint)(byte)*param_2->_ptr;
          param_2->_ptr = param_2->_ptr + 1;
        }
        if (uVar3 != 0xffffffff) {
          piVar1 = &param_2->_cnt;
          *piVar1 = *piVar1 + -1;
          cVar6 = (char)((uint)param_1 >> 8);
          if (*piVar1 < 0) {
            FUN_004800dc((int)cVar6,param_2);
          }
          else {
            *param_2->_ptr = cVar6;
            param_2->_ptr = param_2->_ptr + 1;
          }
        }
        goto LAB_0048e457;
      }
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
        eVar5 = _wctomb_s(&local_14,local_10,5,_WCh);
        if ((eVar5 == 0) && (iVar2 = 0, 0 < local_14)) {
          do {
            piVar1 = &param_2->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar3 = FUN_004800dc((int)local_10[iVar2],param_2);
            }
            else {
              *param_2->_ptr = local_10[iVar2];
              uVar3 = (uint)(byte)*param_2->_ptr;
              param_2->_ptr = param_2->_ptr + 1;
            }
          } while ((uVar3 != 0xffffffff) && (iVar2 = iVar2 + 1, iVar2 < local_14));
        }
        goto LAB_0048e457;
      }
    }
  }
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    FUN_004941c4(_WCh,param_2);
  }
  else {
    *(wchar_t *)param_2->_ptr = _WCh;
    param_2->_ptr = param_2->_ptr + 2;
  }
LAB_0048e457:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

