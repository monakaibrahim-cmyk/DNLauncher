// Address: 0x00437d40
// Name: FUN_00437d40
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00437d40(void *param_1,double *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 extraout_ST0;
  
  fVar5 = (float10)0;
  switch(param_3) {
  case 1:
    return (float10)*(byte *)param_2;
  default:
    break;
  case 3:
    uVar1 = FUN_00437cb0(param_1,(undefined2 *)param_2);
    return (float10)CONCAT22(extraout_var,uVar1);
  case 4:
    iVar3 = thunk_FUN_00437ce0(param_1,(undefined4 *)param_2);
    fVar5 = (float10)iVar3;
    if (iVar3 < 0) {
      return fVar5 + (float10)_DAT_0049c9d0;
    }
    break;
  case 5:
  case 10:
    iVar3 = FUN_00437ce0(param_1,(undefined4 *)((int)param_2 + 4));
    fVar5 = extraout_ST0;
    if (iVar3 != 0) {
      iVar4 = FUN_00437ce0(param_1,(undefined4 *)param_2);
      return (float10)iVar4 / (float10)iVar3;
    }
    break;
  case 6:
    return (float10)(int)*(char *)param_2;
  case 8:
    sVar2 = FUN_00437cb0(param_1,(undefined2 *)param_2);
    return (float10)(int)sVar2;
  case 9:
    iVar3 = FUN_00437ce0(param_1,(undefined4 *)param_2);
    return (float10)iVar3;
  case 0xb:
    return (float10)*(float *)param_2;
  case 0xc:
    return (float10)*param_2;
  }
  return fVar5;
}

