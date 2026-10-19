// Address: 0x0042b7d0
// Name: FUN_0042b7d0
// Category: Launcher


void FUN_0042b7d0(int param_1,int *param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
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
  if (0xffffffd < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00402d00(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00402dd0(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004bba20);
  }
  piVar3 = (int *)FUN_0042bfa0(*(undefined4 *)(param_1 + 4),unaff_EDI,*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (unaff_EDI == *(undefined4 **)(param_1 + 4)) {
    (*(undefined4 **)(param_1 + 4))[1] = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *unaff_EDI = piVar3;
      if (unaff_EDI == (undefined4 *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_0042b89e;
    }
    unaff_EDI[2] = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (unaff_EDI != *(undefined4 **)(iVar4 + 8)) goto LAB_0042b89e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0042b89e:
  cVar1 = *(char *)(piVar3[1] + 0x20);
  piVar7 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
      ExceptionList = local_c;
      return;
    }
    piVar5 = piVar7 + 1;
    piVar6 = (int *)*piVar5;
    piVar2 = (int *)piVar6[1];
    if (piVar6 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x20) != '\0') {
        if (piVar7 == (int *)piVar6[2]) {
          piVar7 = (int *)piVar6[2];
          piVar6[2] = *piVar7;
          if (*(char *)(*piVar7 + 0x21) == '\0') {
            *(int **)(*piVar7 + 4) = piVar6;
          }
          piVar5 = piVar6 + 1;
          piVar7[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
          }
          else {
            piVar2 = (int *)*piVar5;
            if (piVar6 == (int *)*piVar2) {
              *piVar2 = (int)piVar7;
            }
            else {
              piVar2[2] = (int)piVar7;
            }
          }
          *piVar7 = (int)piVar6;
          *piVar5 = (int)piVar7;
          piVar7 = piVar6;
        }
        *(undefined1 *)(*piVar5 + 0x20) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x20) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
        goto LAB_0042b9d6;
      }
LAB_0042b968:
      *(undefined1 *)(piVar6 + 8) = 1;
      *(undefined1 *)(iVar4 + 0x20) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x20) = 0;
      piVar7 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x20) == '\0') goto LAB_0042b968;
      if (piVar7 == (int *)*piVar6) {
        FUN_0042ba90(piVar6,param_1);
        piVar7 = piVar6;
      }
      *(undefined1 *)(piVar7[1] + 0x20) = 1;
      *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
      piVar5 = *(int **)(piVar7[1] + 4);
      piVar6 = (int *)piVar5[2];
      piVar5[2] = *piVar6;
      if (*(char *)(*piVar6 + 0x21) == '\0') {
        *(int **)(*piVar6 + 4) = piVar5;
      }
      piVar6[1] = piVar5[1];
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar5[1];
        if (piVar5 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar5;
LAB_0042b9d6:
      piVar5[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar7[1] + 0x20);
  } while( true );
}

