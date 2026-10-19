// Address: 0x0048a8fe
// Name: FUN_0048a8fe
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0048a8fe(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar4 = _DAT_004a6600 * in_XMM0_Qa + _DAT_004a65e0;
    dVar5 = (_UNK_004a6608 * in_XMM0_Qa + _UNK_004a65e8) - _UNK_004a65e8;
    uVar1 = SUB84(dVar4,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar3 = (in_XMM0_Qa - _DAT_004a6610 * (dVar4 - _DAT_004a65e0)) -
            _DAT_004a6620 * (dVar4 - _DAT_004a65e0);
    dVar5 = (in_XMM0_Qa - _UNK_004a6618 * dVar5) - _UNK_004a6628 * dVar5;
    dVar4 = (double)(*(ulonglong *)(&UNK_004a6658 + iVar2) |
                    ((ulonglong)dVar4 & _DAT_004a65c0) + _DAT_004a65d0 << 0x2e);
    dVar3 = dVar5 * dVar5 * (_UNK_004a6648 + _UNK_004a6638 * dVar5) +
            dVar3 + *(double *)(&DAT_004a6650 + iVar2) +
            dVar3 * dVar3 * dVar3 * dVar3 * (_DAT_004a6640 + _DAT_004a6630 * dVar3);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar3 * dVar4 + dVar4);
    }
    dVar5 = (double)(~_DAT_004a65b0 & (ulonglong)dVar4 |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar5 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar5 + dVar3 * dVar5);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_0048aaf2;
      iVar2 = 0xf;
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + _DAT_004a6a50);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = DAT_004a6a80 * DAT_004a6a80;
        iVar2 = 0xe;
      }
      else {
        in_XMM0_Qa = DAT_004a6a88 * DAT_004a6a88;
        iVar2 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)_DAT_004a6a78;
        }
        return (float10)_DAT_004a6a70;
      }
      iVar2 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support((double *)&param_1,(undefined8 *)&param_1,(double *)&uStack_c,iVar2);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_0048aaf2:
  return (float10)in_XMM0_Qa;
}

