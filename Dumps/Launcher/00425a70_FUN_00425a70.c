// Address: 0x00425a70
// Name: FUN_00425a70
// Category: Launcher


undefined4 __fastcall FUN_00425a70(byte *param_1,byte *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  for (; 3 < in_EAX; in_EAX = in_EAX - 4) {
    if (*(int *)param_2 != *(int *)param_1) goto LAB_00425a8f;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  if (in_EAX == 0) {
LAB_00425aed:
    uVar1 = 0;
  }
  else {
LAB_00425a8f:
    iVar2 = (uint)*param_2 - (uint)*param_1;
    if (iVar2 == 0) {
      if (in_EAX == 1) goto LAB_00425aed;
      iVar2 = (uint)param_2[1] - (uint)param_1[1];
      if (iVar2 == 0) {
        if (in_EAX == 2) goto LAB_00425aed;
        iVar2 = (uint)param_2[2] - (uint)param_1[2];
        if (iVar2 == 0) {
          if ((in_EAX == 3) || (iVar2 = (uint)param_2[3] - (uint)param_1[3], iVar2 == 0))
          goto LAB_00425aed;
        }
      }
    }
    uVar1 = 1;
    if (iVar2 < 1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

