// Address: 0x0048c054
// Name: FUN_0048c054
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0048c054(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  dVar2 = 0.0;
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar3 = _DAT_004c4a60;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar3 = 1.0, dVar1 < 1.0)) {
        dVar3 = dVar2;
      }
      goto LAB_0048c181;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    dVar3 = dVar2;
    if ((dVar1 <= 1.0) && (dVar3 = _DAT_004c4a60, 1.0 <= dVar1)) {
      *param_5 = _DAT_004c4a68;
      return 1;
    }
    goto LAB_0048c181;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar3 = dVar2, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar3 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar4 = __d_inttype((double)CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar3 = 1.0;
      }
      else {
        dVar3 = 0.0;
        if (iVar4 == 1) {
          dVar3 = _DAT_004c4a80;
        }
      }
    }
    else {
      dVar3 = _DAT_004c4a60;
      if (iVar4 == 1) {
        dVar3 = -_DAT_004c4a60;
      }
    }
  }
LAB_0048c181:
  *param_5 = dVar3;
  return 0;
}

