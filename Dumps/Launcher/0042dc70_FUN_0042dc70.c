// Address: 0x0042dc70
// Name: FUN_0042dc70
// Category: Launcher


void __thiscall FUN_0042dc70(void *this,FILE *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      FUN_00477353(param_1,&DAT_004b416c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00477353(param_1,&DAT_004b4184);
  piVar1 = *(int **)((int)this + 0x94);
  if (piVar1 != (int *)((int)this + 0x44)) {
    while (piVar1 != (int *)0x0) {
      FUN_00477353(param_1,&DAT_004b2d84);
      (**(code **)(*piVar1 + 4))(param_1,param_2);
      piVar1 = (int *)FUN_0042e190();
    }
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    if ((piVar1 == *(int **)((int)this + 0x1c)) &&
       (iVar2 = (**(code **)(*piVar1 + 0x2c))(), iVar2 != 0)) {
      FUN_00477353(param_1,&DAT_004b418c);
      (**(code **)(**(int **)((int)this + 0x18) + 4))(param_1,param_2 + 1);
    }
    else {
      FUN_00477353(param_1,&DAT_004b418c);
      piVar1 = *(int **)((int)this + 0x18);
      if (piVar1 != (int *)0x0) {
        do {
          iVar2 = (**(code **)(*piVar1 + 0x2c))();
          if (iVar2 == 0) {
            FUN_00477353(param_1,&DAT_004b4174);
          }
          (**(code **)(*piVar1 + 4))(param_1,param_2 + 1);
          piVar1 = (int *)piVar1[0x10];
        } while (piVar1 != (int *)0x0);
      }
      FUN_00477353(param_1,&DAT_004b4174);
      if (0 < param_2) {
        do {
          FUN_00477353(param_1,&DAT_004b416c);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    FUN_00477353(param_1,(byte *)"</%s>");
    return;
  }
  FUN_00477353(param_1,&DAT_004b4188);
  return;
}

