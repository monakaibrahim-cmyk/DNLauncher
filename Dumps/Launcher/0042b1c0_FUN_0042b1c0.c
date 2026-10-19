// Address: 0x0042b1c0
// Name: FUN_0042b1c0
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x0042b2e5) */
/* WARNING: Removing unreachable block (ram,0x0042b2f5) */
/* WARNING: Removing unreachable block (ram,0x0042b2fe) */
/* WARNING: Removing unreachable block (ram,0x0042b301) */
/* WARNING: Removing unreachable block (ram,0x0042b2f1) */
/* WARNING: Removing unreachable block (ram,0x0042b30f) */
/* WARNING: Removing unreachable block (ram,0x0042b31c) */
/* WARNING: Removing unreachable block (ram,0x0042b327) */
/* WARNING: Removing unreachable block (ram,0x0042b323) */
/* WARNING: Removing unreachable block (ram,0x0042b317) */
/* WARNING: Removing unreachable block (ram,0x0042b32a) */

void FUN_0042b1c0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x21) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00402d00(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00402dd0(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004bbb28);
  }
  FUN_0042c0b0();
  piVar8 = (int *)*param_4;
  if (*(char *)((int)piVar8 + 0x21) == '\0') {
    if (*(char *)(param_4[2] + 0x21) == '\0') {
      piVar8 = (int *)param_4[2];
    }
  }
  else {
    piVar8 = (int *)param_4[2];
  }
  piVar7 = (int *)param_4[1];
  if (*(char *)((int)piVar8 + 0x21) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar7 == param_4) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x21);
      piVar2 = (int *)*piVar8;
      piVar6 = piVar8;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar4;
        cVar1 = *(char *)((int)piVar2 + 0x21);
        piVar6 = piVar4;
      }
    }
    **(int **)(param_1 + 4) = (int)piVar6;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int **)(iVar3 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x21) == '\0') {
      uVar5 = FUN_0042ba70();
      *(undefined4 *)(iVar3 + 8) = uVar5;
    }
    else {
      *(int **)(iVar3 + 8) = piVar7;
    }
  }
  if ((char)param_4[8] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar6 = piVar7;
        if ((char)piVar8[8] != '\x01') break;
        piVar7 = (int *)*piVar6;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar6[2];
          if ((char)piVar7[8] == '\0') {
            *(undefined1 *)(piVar7 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            FUN_0042ba20(piVar6,param_1);
            piVar7 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar7 + 0x21) == '\0') {
            if ((*(char *)(*piVar7 + 0x20) != '\x01') || (*(char *)(piVar7[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x20) = 1;
                *(undefined1 *)(piVar7 + 8) = 0;
                FUN_0042ba90(piVar7,param_1);
                piVar7 = (int *)piVar6[2];
              }
              *(char *)(piVar7 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar7[2] + 0x20) = 1;
              FUN_0042ba20(piVar6,param_1);
              break;
            }
LAB_0042b3f5:
            *(undefined1 *)(piVar7 + 8) = 0;
          }
        }
        else {
          if ((char)piVar7[8] == '\0') {
            *(undefined1 *)(piVar7 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            FUN_0042ba90(piVar6,param_1);
            piVar7 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar7 + 0x21) == '\0') {
            if ((*(char *)(piVar7[2] + 0x20) == '\x01') && (*(char *)(*piVar7 + 0x20) == '\x01'))
            goto LAB_0042b3f5;
            if (*(char *)(*piVar7 + 0x20) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x20) = 1;
              *(undefined1 *)(piVar7 + 8) = 0;
              FUN_0042ba20(piVar7,param_1);
              piVar7 = (int *)*piVar6;
            }
            *(char *)(piVar7 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar7 + 0x20) = 1;
            FUN_0042ba90(piVar6,param_1);
            break;
          }
        }
        piVar7 = (int *)piVar6[1];
        piVar8 = piVar6;
      } while (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 8) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_4);
}

