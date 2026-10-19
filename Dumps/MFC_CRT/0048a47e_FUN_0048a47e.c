// Address: 0x0048a47e
// Name: FUN_0048a47e
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0048a47e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM0 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar6 = (double)(in_XMM0._0_8_ & (ulonglong)_DAT_004a5ca0 | (ulonglong)DAT_004a5d00);
    dVar7 = (double)(in_XMM0._0_8_ & _UNK_004a5ca8 | (ulonglong)_UNK_004a5d08);
    uVar1 = SUB82(_DAT_004a5cb0 + dVar6,0) & 0x7f0;
    dVar10 = (double)(_UNK_004a5cc8 & (ulonglong)dVar7);
    dVar9 = (double)(_DAT_004a5cc0 & (ulonglong)dVar6) * *(double *)(&DAT_004a5d80 + uVar1) -
            DAT_004a5d00;
    dVar6 = (dVar6 - (double)(_DAT_004a5cc0 & (ulonglong)dVar6)) *
            *(double *)(&DAT_004a5d80 + uVar1);
    dVar8 = (dVar7 - dVar10) * *(double *)(&UNK_004a5d88 + uVar1);
    dVar7 = dVar6 + dVar9;
    in_XMM0._8_8_ = dVar8 + (dVar10 * *(double *)(&UNK_004a5d88 + uVar1) - _UNK_004a5d08);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar10 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((_DAT_004a5d50 * dVar7 + _DAT_004a5d60) * dVar7 + _DAT_004a5d70) *
                       dVar7 * dVar7 * dVar7 * dVar7 * dVar7 +
                       ((_UNK_004a5d58 * in_XMM0._8_8_ + _UNK_004a5d68) * in_XMM0._8_8_ +
                       _UNK_004a5d78) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_004a6198 + uVar1) + dVar10 * _UNK_004a5cd8 +
                       (double)((ulonglong)dVar8 & *(ulonglong *)(&UNK_004a5ce8 + iVar5)) +
                      *(double *)(&DAT_004a6190 + uVar1) + dVar9 + dVar10 * _DAT_004a5cd0 +
                      (double)((ulonglong)dVar6 & *(ulonglong *)(&DAT_004a5ce0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(_DAT_004a5d10 == param_1);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (DAT_004a5d00 ==
            (double)((ulonglong)param_1 & (ulonglong)_DAT_004a5ca0 | (ulonglong)DAT_004a5d00)) {
          return (float10)_DAT_004a5d38;
        }
        iVar4 = 1000;
        local_c = _DAT_004a5ca0;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        iVar4 = 3;
      }
      else {
        iVar4 = 1000;
      }
      goto LAB_0048a672;
    }
    in_XMM0._0_8_ = param_1 * DAT_004a5d20;
    iVar4 = -0x34;
  }
  iVar4 = 2;
  local_c = DAT_004a5d30;
LAB_0048a672:
  ___libm_error_support(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}

