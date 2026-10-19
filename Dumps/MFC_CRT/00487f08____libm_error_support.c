// Address: 0x00487f08
// Name: ___libm_error_support
// Category: MFC_CRT


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2005 Release */

void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  DWORD *pDVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_004cb970 == 0) {
    pcVar1 = FUN_0045c850;
  }
  else {
    pcVar1 = (code *)FUN_0047e7dd(DAT_004cc224);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00487fb7:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        pDVar3 = FUN_0047b849();
        *pDVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00488025;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00488025;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00487fb0;
              }
              local_28 = "exp";
              goto LAB_00487fec;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00487fb7;
      }
      local_28 = "pow";
LAB_00487fec:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_004880e2_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_004880e2_caseD_3f1;
            }
            goto switchD_004880e2_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_0048809b;
        }
        local_2c = 2;
LAB_00487fb0:
        local_28 = "pow";
        goto LAB_00487fb7;
      }
      local_14 = 1.0;
    }
    goto LAB_0048817b;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_004880e2_caseD_3ee:
    local_28 = "pow";
    goto LAB_00488025;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_004880e2_caseD_3f0:
    local_28 = "acos";
    goto LAB_00488025;
  case 0x3f1:
switchD_004880e2_caseD_3f1:
    local_28 = "asin";
    goto LAB_00488025;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00488147;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00488147;
  case 0x3f4:
    local_28 = "tan";
LAB_00488147:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00488158;
  default:
    goto switchD_004880e2_default;
  }
LAB_0048809b:
  *param_3 = *param_1;
LAB_00488025:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00488158:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x21;
  }
LAB_0048817b:
  *param_3 = local_14;
switchD_004880e2_default:
  return;
}

