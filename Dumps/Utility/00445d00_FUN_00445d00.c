// Address: 0x00445d00
// Name: FUN_00445d00
// Category: Utility


void __cdecl FUN_00445d00(int *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  uint *local_b0;
  uint local_ac;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_b0;
  local_b0 = param_2;
  if (param_1 != (int *)0x0) {
    if (*(byte *)(param_1 + 0x4b) < 8) {
      uVar7 = (uint)*(byte *)(param_1 + 0x4b);
      FUN_0044d680(param_1);
      *(undefined1 *)(param_1 + 0x4b) = 8;
      iVar3 = FUN_004452d0((int)(param_2 + 8),uVar7,-uVar7 + 8);
      if (iVar3 != 0) {
        if ((uVar7 < 4) && (iVar3 = FUN_004452d0((int)(param_2 + 8),uVar7,-uVar7 + 4), iVar3 != 0))
        {
          pcVar8 = "Not a PNG file";
        }
        else {
          pcVar8 = "PNG file corrupted by ASCII conversion";
        }
        FUN_00445110(param_1,pcVar8);
      }
      if (uVar7 < 3) {
        param_1[0x1a] = param_1[0x1a] | 0x1000;
      }
    }
    local_34._2_1_ = 0x44;
    local_a4._1_1_ = 0x44;
    local_84._3_1_ = 0x44;
    local_44._3_1_ = 0x44;
    local_94._1_1_ = 0x46;
    local_94._2_1_ = 0x46;
    local_34._0_1_ = 0x49;
    local_34._1_1_ = 0x48;
    local_34._3_1_ = 0x52;
    local_30 = 0;
    local_a4._0_1_ = 0x49;
    local_a4._2_1_ = 0x41;
    local_a4._3_1_ = 0x54;
    local_a0 = 0;
    local_84._0_1_ = 0x49;
    local_84._1_1_ = 0x45;
    local_84._2_1_ = 0x4e;
    local_80 = 0;
    local_9c._0_1_ = 0x50;
    local_9c._1_1_ = 0x4c;
    local_9c._2_1_ = 0x54;
    local_9c._3_1_ = 0x45;
    local_98 = 0;
    local_44._0_1_ = 0x62;
    local_44._1_1_ = 0x4b;
    local_44._2_1_ = 0x47;
    local_40 = 0;
    local_74._0_1_ = 99;
    local_74._1_1_ = 0x48;
    local_74._2_1_ = 0x52;
    local_74._3_1_ = 0x4d;
    local_70 = 0;
    local_24._0_1_ = 0x67;
    local_24._1_1_ = 0x41;
    local_24._2_1_ = 0x4d;
    local_24._3_1_ = 0x41;
    local_20 = 0;
    local_64._0_1_ = 0x68;
    local_64._1_1_ = 0x49;
    local_64._2_1_ = 0x53;
    local_64._3_1_ = 0x54;
    local_60 = 0;
    local_5c._0_1_ = 0x69;
    local_5c._1_1_ = 0x43;
    local_5c._2_1_ = 0x43;
    local_5c._3_1_ = 0x50;
    local_58 = 0;
    local_94._0_1_ = 0x6f;
    local_94._3_1_ = 0x73;
    local_90 = 0;
    local_54._0_1_ = 0x70;
    local_54._1_1_ = 0x43;
    local_54._2_1_ = 0x41;
    local_54._3_1_ = 0x4c;
    local_50 = 0;
    local_8c._0_1_ = 0x70;
    local_8c._1_1_ = 0x48;
    local_8c._2_1_ = 0x59;
    local_8c._3_1_ = 0x73;
    local_88 = 0;
    local_7c._0_1_ = 0x73;
    local_7c._1_1_ = 0x42;
    local_7c._2_1_ = 0x49;
    local_7c._3_1_ = 0x54;
    local_78 = 0;
    local_14._0_1_ = 0x73;
    local_14._1_1_ = 0x43;
    local_14._2_1_ = 0x41;
    local_14._3_1_ = 0x4c;
    local_10 = 0;
    local_4c._0_1_ = 0x73;
    local_4c._1_1_ = 0x50;
    local_4c._2_1_ = 0x4c;
    local_4c._3_1_ = 0x54;
    local_48 = 0;
    local_6c._0_1_ = 0x73;
    local_6c._1_1_ = 0x52;
    local_6c._2_1_ = 0x47;
    local_6c._3_1_ = 0x42;
    local_68 = 0;
    local_3c._0_1_ = 0x74;
    local_3c._1_1_ = 0x45;
    local_3c._2_1_ = 0x58;
    local_3c._3_1_ = 0x74;
    local_38 = 0;
    local_2c._0_1_ = 0x74;
    local_2c._1_1_ = 0x49;
    local_2c._2_1_ = 0x4d;
    local_2c._3_1_ = 0x45;
    local_28 = 0;
    local_1c._0_1_ = 0x74;
    local_1c._1_1_ = 0x52;
    local_1c._2_1_ = 0x4e;
    local_1c._3_1_ = 0x53;
    local_18 = 0;
    local_c._0_1_ = 0x7a;
    local_c._1_1_ = 0x54;
    local_c._2_1_ = 0x58;
    local_c._3_1_ = 0x74;
    local_8 = 0;
    puVar1 = (uint *)(param_1 + 0x47);
LAB_00446000:
    FUN_0044d680(param_1);
    local_ac = FUN_0044eb60(param_1,local_a8);
    FUN_00445460((int)param_1);
    FUN_0044da60(param_1,puVar1,4);
    uVar7 = 4;
    puVar5 = &local_a4;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_00446058;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_004460b5:
      iVar4 = 0;
    }
    else {
LAB_00446058:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_004460b5;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_004460b5;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_004460b5;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if ((iVar4 == 0) && ((param_1[0x1a] & 8U) != 0)) {
      param_1[0x1a] = param_1[0x1a] | 0x2000;
    }
    uVar7 = 4;
    puVar5 = &local_34;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_004460f0;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_0044614d:
      iVar4 = 0;
    }
    else {
LAB_004460f0:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_0044614d;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_0044614d;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_0044614d;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      FUN_0044ec50(param_1,local_b0,local_ac);
      goto LAB_00446000;
    }
    uVar7 = 4;
    puVar5 = &local_84;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_0044618e;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_004461eb:
      iVar4 = 0;
    }
    else {
LAB_0044618e:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_004461eb;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_004461eb;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_004461eb;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      FUN_0044ef60(param_1,local_b0,local_ac);
      goto LAB_00446000;
    }
    bVar2 = FUN_00445950((int)param_1,(byte *)puVar1);
    uVar7 = 4;
    if (CONCAT31(extraout_var,bVar2) == 0) {
      puVar5 = &local_9c;
      puVar6 = puVar1;
      do {
        if (*puVar6 != *puVar5) goto LAB_0044640b;
        uVar7 = uVar7 - 4;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (3 < uVar7);
      if (uVar7 == 0) {
LAB_00446468:
        iVar4 = 0;
      }
      else {
LAB_0044640b:
        iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
        if (iVar3 == 0) {
          if (uVar7 == 1) goto LAB_00446468;
          iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
          if (iVar3 == 0) {
            if (uVar7 == 2) goto LAB_00446468;
            iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
            if (iVar3 == 0) {
              if ((uVar7 == 3) ||
                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                 iVar3 == 0)) goto LAB_00446468;
            }
          }
        }
        iVar4 = 1;
        if (iVar3 < 1) {
          iVar4 = -1;
        }
      }
      if (iVar4 == 0) {
        FUN_0044edd0(param_1,(int)local_b0,local_ac);
      }
      else {
        uVar7 = 4;
        puVar5 = &local_a4;
        puVar6 = puVar1;
        do {
          if (*puVar6 != *puVar5) goto LAB_004464a9;
          uVar7 = uVar7 - 4;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (3 < uVar7);
        if (uVar7 == 0) {
LAB_00446506:
          iVar4 = 0;
        }
        else {
LAB_004464a9:
          iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
          if (iVar3 == 0) {
            if (uVar7 == 1) goto LAB_00446506;
            iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
            if (iVar3 == 0) {
              if (uVar7 == 2) goto LAB_00446506;
              iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
              if (iVar3 == 0) {
                if ((uVar7 == 3) ||
                   (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                   iVar3 == 0)) goto LAB_00446506;
              }
            }
          }
          iVar4 = 1;
          if (iVar3 < 1) {
            iVar4 = -1;
          }
        }
        if (iVar4 == 0) {
          if ((param_1[0x1a] & 1U) == 0) {
            pcVar8 = "Missing IHDR before IDAT";
LAB_00446f6c:
            FUN_00445110(param_1,pcVar8);
          }
          else if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((param_1[0x1a] & 2U) == 0)) {
            pcVar8 = "Missing PLTE before IDAT";
            goto LAB_00446f6c;
          }
          param_1[0x1a] = param_1[0x1a] | 4;
          param_1[0x43] = local_ac;
          goto LAB_00446f86;
        }
        uVar7 = 4;
        puVar5 = &local_44;
        puVar6 = puVar1;
        do {
          if (*puVar6 != *puVar5) goto LAB_00446538;
          uVar7 = uVar7 - 4;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (3 < uVar7);
        if (uVar7 == 0) {
LAB_00446595:
          iVar4 = 0;
        }
        else {
LAB_00446538:
          iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
          if (iVar3 == 0) {
            if (uVar7 == 1) goto LAB_00446595;
            iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
            if (iVar3 == 0) {
              if (uVar7 == 2) goto LAB_00446595;
              iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
              if (iVar3 == 0) {
                if ((uVar7 == 3) ||
                   (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                   iVar3 == 0)) goto LAB_00446595;
              }
            }
          }
          iVar4 = 1;
          if (iVar3 < 1) {
            iVar4 = -1;
          }
        }
        if (iVar4 == 0) {
          FUN_0044ff80(param_1,(int)local_b0,local_ac);
        }
        else {
          uVar7 = 4;
          puVar5 = &local_74;
          puVar6 = puVar1;
          do {
            if (*puVar6 != *puVar5) goto LAB_004465d8;
            uVar7 = uVar7 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar7);
          if (uVar7 == 0) {
LAB_00446635:
            iVar4 = 0;
          }
          else {
LAB_004465d8:
            iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
            if (iVar3 == 0) {
              if (uVar7 == 1) goto LAB_00446635;
              iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar3 == 0) {
                if (uVar7 == 2) goto LAB_00446635;
                iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar3 == 0) {
                  if ((uVar7 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar3 == 0)) goto LAB_00446635;
                }
              }
            }
            iVar4 = 1;
            if (iVar3 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 == 0) {
            FUN_0044f290(param_1,(int)local_b0,local_ac);
          }
          else {
            uVar7 = 4;
            puVar5 = &local_24;
            puVar6 = puVar1;
            do {
              if (*puVar6 != *puVar5) goto LAB_00446679;
              uVar7 = uVar7 - 4;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (3 < uVar7);
            if (uVar7 == 0) {
LAB_004466d6:
              iVar4 = 0;
            }
            else {
LAB_00446679:
              iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
              if (iVar3 == 0) {
                if (uVar7 == 1) goto LAB_004466d6;
                iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                if (iVar3 == 0) {
                  if (uVar7 == 2) goto LAB_004466d6;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                  if (iVar3 == 0) {
                    if ((uVar7 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                       iVar3 == 0)) goto LAB_004466d6;
                  }
                }
              }
              iVar4 = 1;
              if (iVar3 < 1) {
                iVar4 = -1;
              }
            }
            if (iVar4 == 0) {
              FUN_0044efb0(param_1,(int)local_b0,local_ac);
            }
            else {
              uVar7 = 4;
              puVar5 = &local_64;
              puVar6 = puVar1;
              do {
                if (*puVar6 != *puVar5) goto LAB_00446718;
                uVar7 = uVar7 - 4;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              } while (3 < uVar7);
              if (uVar7 == 0) {
LAB_00446775:
                iVar4 = 0;
              }
              else {
LAB_00446718:
                iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                if (iVar3 == 0) {
                  if (uVar7 == 1) goto LAB_00446775;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                  if (iVar3 == 0) {
                    if (uVar7 == 2) goto LAB_00446775;
                    iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                    if (iVar3 == 0) {
                      if ((uVar7 == 3) ||
                         (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                  (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0)) goto LAB_00446775;
                    }
                  }
                }
                iVar4 = 1;
                if (iVar3 < 1) {
                  iVar4 = -1;
                }
              }
              if (iVar4 == 0) {
                FUN_004501c0(param_1,(int)local_b0,local_ac);
              }
              else {
                uVar7 = 4;
                puVar5 = &local_94;
                puVar6 = puVar1;
                do {
                  if (*puVar6 != *puVar5) goto LAB_004467b8;
                  uVar7 = uVar7 - 4;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                } while (3 < uVar7);
                if (uVar7 == 0) {
LAB_00446815:
                  iVar4 = 0;
                }
                else {
LAB_004467b8:
                  iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                  if (iVar3 == 0) {
                    if (uVar7 == 1) goto LAB_00446815;
                    iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                    if (iVar3 == 0) {
                      if (uVar7 == 2) goto LAB_00446815;
                      iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                      if (iVar3 == 0) {
                        if ((uVar7 == 3) ||
                           (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                    (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                        goto LAB_00446815;
                      }
                    }
                  }
                  iVar4 = 1;
                  if (iVar3 < 1) {
                    iVar4 = -1;
                  }
                }
                if (iVar4 == 0) {
                  FUN_00450480(param_1,(int)local_b0,local_ac);
                }
                else {
                  uVar7 = 4;
                  puVar5 = &local_54;
                  puVar6 = puVar1;
                  do {
                    if (*puVar6 != *puVar5) goto LAB_00446858;
                    uVar7 = uVar7 - 4;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
                  } while (3 < uVar7);
                  if (uVar7 == 0) {
LAB_004468b5:
                    iVar4 = 0;
                  }
                  else {
LAB_00446858:
                    iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                    if (iVar3 == 0) {
                      if (uVar7 == 1) goto LAB_004468b5;
                      iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                      if (iVar3 == 0) {
                        if (uVar7 == 2) goto LAB_004468b5;
                        iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                        if (iVar3 == 0) {
                          if ((uVar7 == 3) ||
                             (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                      (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                          goto LAB_004468b5;
                        }
                      }
                    }
                    iVar4 = 1;
                    if (iVar3 < 1) {
                      iVar4 = -1;
                    }
                  }
                  if (iVar4 == 0) {
                    FUN_004505b0(param_1,(int)local_b0,local_ac);
                  }
                  else {
                    uVar7 = 4;
                    puVar5 = &local_14;
                    puVar6 = puVar1;
                    do {
                      if (*puVar6 != *puVar5) goto LAB_004468f9;
                      uVar7 = uVar7 - 4;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    } while (3 < uVar7);
                    if (uVar7 == 0) {
LAB_00446956:
                      iVar4 = 0;
                    }
                    else {
LAB_004468f9:
                      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                      if (iVar3 == 0) {
                        if (uVar7 == 1) goto LAB_00446956;
                        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                        if (iVar3 == 0) {
                          if (uVar7 == 2) goto LAB_00446956;
                          iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                  (uint)*(byte *)((int)puVar5 + 2);
                          if (iVar3 == 0) {
                            if ((uVar7 == 3) ||
                               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                        (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                            goto LAB_00446956;
                          }
                        }
                      }
                      iVar4 = 1;
                      if (iVar3 < 1) {
                        iVar4 = -1;
                      }
                    }
                    if (iVar4 == 0) {
                      FUN_00450810(param_1,(int)local_b0,local_ac);
                    }
                    else {
                      uVar7 = 4;
                      puVar5 = &local_8c;
                      puVar6 = puVar1;
                      do {
                        if (*puVar6 != *puVar5) goto LAB_00446998;
                        uVar7 = uVar7 - 4;
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 1;
                      } while (3 < uVar7);
                      if (uVar7 == 0) {
LAB_004469f5:
                        iVar4 = 0;
                      }
                      else {
LAB_00446998:
                        iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                        if (iVar3 == 0) {
                          if (uVar7 == 1) goto LAB_004469f5;
                          iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                  (uint)*(byte *)((int)puVar5 + 1);
                          if (iVar3 == 0) {
                            if (uVar7 == 2) goto LAB_004469f5;
                            iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                    (uint)*(byte *)((int)puVar5 + 2);
                            if (iVar3 == 0) {
                              if ((uVar7 == 3) ||
                                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                          (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                              goto LAB_004469f5;
                            }
                          }
                        }
                        iVar4 = 1;
                        if (iVar3 < 1) {
                          iVar4 = -1;
                        }
                      }
                      if (iVar4 == 0) {
                        FUN_00450360(param_1,(int)local_b0,local_ac);
                      }
                      else {
                        uVar7 = 4;
                        puVar5 = &local_7c;
                        puVar6 = puVar1;
                        do {
                          if (*puVar6 != *puVar5) goto LAB_00446a38;
                          uVar7 = uVar7 - 4;
                          puVar5 = puVar5 + 1;
                          puVar6 = puVar6 + 1;
                        } while (3 < uVar7);
                        if (uVar7 == 0) {
LAB_00446a95:
                          iVar4 = 0;
                        }
                        else {
LAB_00446a38:
                          iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                          if (iVar3 == 0) {
                            if (uVar7 == 1) goto LAB_00446a95;
                            iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                    (uint)*(byte *)((int)puVar5 + 1);
                            if (iVar3 == 0) {
                              if (uVar7 == 2) goto LAB_00446a95;
                              iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                      (uint)*(byte *)((int)puVar5 + 2);
                              if (iVar3 == 0) {
                                if ((uVar7 == 3) ||
                                   (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                            (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                goto LAB_00446a95;
                              }
                            }
                          }
                          iVar4 = 1;
                          if (iVar3 < 1) {
                            iVar4 = -1;
                          }
                        }
                        if (iVar4 == 0) {
                          FUN_0044f120(param_1,(int)local_b0,local_ac);
                        }
                        else {
                          uVar7 = 4;
                          puVar5 = &local_6c;
                          puVar6 = puVar1;
                          do {
                            if (*puVar6 != *puVar5) goto LAB_00446ad8;
                            uVar7 = uVar7 - 4;
                            puVar5 = puVar5 + 1;
                            puVar6 = puVar6 + 1;
                          } while (3 < uVar7);
                          if (uVar7 == 0) {
LAB_00446b35:
                            iVar4 = 0;
                          }
                          else {
LAB_00446ad8:
                            iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                            if (iVar3 == 0) {
                              if (uVar7 == 1) goto LAB_00446b35;
                              iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                      (uint)*(byte *)((int)puVar5 + 1);
                              if (iVar3 == 0) {
                                if (uVar7 == 2) goto LAB_00446b35;
                                iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                        (uint)*(byte *)((int)puVar5 + 2);
                                if (iVar3 == 0) {
                                  if ((uVar7 == 3) ||
                                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                              (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                  goto LAB_00446b35;
                                }
                              }
                            }
                            iVar4 = 1;
                            if (iVar3 < 1) {
                              iVar4 = -1;
                            }
                          }
                          if (iVar4 == 0) {
                            FUN_0044f740(param_1,(int)local_b0,local_ac);
                          }
                          else {
                            uVar7 = 4;
                            puVar5 = &local_5c;
                            puVar6 = puVar1;
                            do {
                              if (*puVar6 != *puVar5) goto LAB_00446b78;
                              uVar7 = uVar7 - 4;
                              puVar5 = puVar5 + 1;
                              puVar6 = puVar6 + 1;
                            } while (3 < uVar7);
                            if (uVar7 == 0) {
LAB_00446bd5:
                              iVar4 = 0;
                            }
                            else {
LAB_00446b78:
                              iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                              if (iVar3 == 0) {
                                if (uVar7 == 1) goto LAB_00446bd5;
                                iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                        (uint)*(byte *)((int)puVar5 + 1);
                                if (iVar3 == 0) {
                                  if (uVar7 == 2) goto LAB_00446bd5;
                                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                          (uint)*(byte *)((int)puVar5 + 2);
                                  if (iVar3 == 0) {
                                    if ((uVar7 == 3) ||
                                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                    goto LAB_00446bd5;
                                  }
                                }
                              }
                              iVar4 = 1;
                              if (iVar3 < 1) {
                                iVar4 = -1;
                              }
                            }
                            if (iVar4 == 0) {
                              FUN_0044f940(param_1,(int)local_b0,local_ac);
                            }
                            else {
                              uVar7 = 4;
                              puVar5 = &local_4c;
                              puVar6 = puVar1;
                              do {
                                if (*puVar6 != *puVar5) goto LAB_00446c18;
                                uVar7 = uVar7 - 4;
                                puVar5 = puVar5 + 1;
                                puVar6 = puVar6 + 1;
                              } while (3 < uVar7);
                              if (uVar7 == 0) {
LAB_00446c75:
                                iVar4 = 0;
                              }
                              else {
LAB_00446c18:
                                iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                                if (iVar3 == 0) {
                                  if (uVar7 == 1) goto LAB_00446c75;
                                  iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                          (uint)*(byte *)((int)puVar5 + 1);
                                  if (iVar3 == 0) {
                                    if (uVar7 == 2) goto LAB_00446c75;
                                    iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                            (uint)*(byte *)((int)puVar5 + 2);
                                    if (iVar3 == 0) {
                                      if ((uVar7 == 3) ||
                                         (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                  (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                      goto LAB_00446c75;
                                    }
                                  }
                                }
                                iVar4 = 1;
                                if (iVar3 < 1) {
                                  iVar4 = -1;
                                }
                              }
                              if (iVar4 == 0) {
                                FUN_0044fb00(param_1,(int)local_b0,local_ac);
                              }
                              else {
                                uVar7 = 4;
                                puVar5 = &local_3c;
                                puVar6 = puVar1;
                                do {
                                  if (*puVar6 != *puVar5) goto LAB_00446cb9;
                                  uVar7 = uVar7 - 4;
                                  puVar5 = puVar5 + 1;
                                  puVar6 = puVar6 + 1;
                                } while (3 < uVar7);
                                if (uVar7 == 0) {
LAB_00446d16:
                                  iVar4 = 0;
                                }
                                else {
LAB_00446cb9:
                                  iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                                  if (iVar3 == 0) {
                                    if (uVar7 == 1) goto LAB_00446d16;
                                    iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                            (uint)*(byte *)((int)puVar5 + 1);
                                    if (iVar3 == 0) {
                                      if (uVar7 == 2) goto LAB_00446d16;
                                      iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                              (uint)*(byte *)((int)puVar5 + 2);
                                      if (iVar3 == 0) {
                                        if ((uVar7 == 3) ||
                                           (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                    (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                        goto LAB_00446d16;
                                      }
                                    }
                                  }
                                  iVar4 = 1;
                                  if (iVar3 < 1) {
                                    iVar4 = -1;
                                  }
                                }
                                if (iVar4 == 0) {
                                  FUN_00450af0(param_1,(int)local_b0,local_ac);
                                }
                                else {
                                  uVar7 = 4;
                                  puVar5 = &local_2c;
                                  puVar6 = puVar1;
                                  do {
                                    if (*puVar6 != *puVar5) goto LAB_00446d5a;
                                    uVar7 = uVar7 - 4;
                                    puVar5 = puVar5 + 1;
                                    puVar6 = puVar6 + 1;
                                  } while (3 < uVar7);
                                  if (uVar7 == 0) {
LAB_00446db7:
                                    iVar4 = 0;
                                  }
                                  else {
LAB_00446d5a:
                                    iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                                    if (iVar3 == 0) {
                                      if (uVar7 == 1) goto LAB_00446db7;
                                      iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                              (uint)*(byte *)((int)puVar5 + 1);
                                      if (iVar3 == 0) {
                                        if (uVar7 == 2) goto LAB_00446db7;
                                        iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                (uint)*(byte *)((int)puVar5 + 2);
                                        if (iVar3 == 0) {
                                          if ((uVar7 == 3) ||
                                             (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                      (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                          goto LAB_00446db7;
                                        }
                                      }
                                    }
                                    iVar4 = 1;
                                    if (iVar3 < 1) {
                                      iVar4 = -1;
                                    }
                                  }
                                  if (iVar4 == 0) {
                                    FUN_004509d0(param_1,(int)local_b0,local_ac);
                                  }
                                  else {
                                    uVar7 = 4;
                                    puVar5 = &local_1c;
                                    puVar6 = puVar1;
                                    do {
                                      if (*puVar6 != *puVar5) goto LAB_00446dfb;
                                      uVar7 = uVar7 - 4;
                                      puVar5 = puVar5 + 1;
                                      puVar6 = puVar6 + 1;
                                    } while (3 < uVar7);
                                    if (uVar7 == 0) {
LAB_00446e58:
                                      iVar4 = 0;
                                    }
                                    else {
LAB_00446dfb:
                                      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                                      if (iVar3 == 0) {
                                        if (uVar7 == 1) goto LAB_00446e58;
                                        iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                (uint)*(byte *)((int)puVar5 + 1);
                                        if (iVar3 == 0) {
                                          if (uVar7 == 2) goto LAB_00446e58;
                                          iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                  (uint)*(byte *)((int)puVar5 + 2);
                                          if (iVar3 == 0) {
                                            if ((uVar7 == 3) ||
                                               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                        (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0
                                               )) goto LAB_00446e58;
                                          }
                                        }
                                      }
                                      iVar4 = 1;
                                      if (iVar3 < 1) {
                                        iVar4 = -1;
                                      }
                                    }
                                    if (iVar4 == 0) {
                                      FUN_0044fd20(param_1,(int)local_b0,local_ac);
                                    }
                                    else {
                                      uVar7 = 4;
                                      puVar5 = &local_c;
                                      puVar6 = puVar1;
                                      do {
                                        if (*puVar6 != *puVar5) goto LAB_00446e9c;
                                        uVar7 = uVar7 - 4;
                                        puVar5 = puVar5 + 1;
                                        puVar6 = puVar6 + 1;
                                      } while (3 < uVar7);
                                      if (uVar7 == 0) {
LAB_00446ef9:
                                        iVar4 = 0;
                                      }
                                      else {
LAB_00446e9c:
                                        iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
                                        if (iVar3 == 0) {
                                          if (uVar7 == 1) goto LAB_00446ef9;
                                          iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                  (uint)*(byte *)((int)puVar5 + 1);
                                          if (iVar3 == 0) {
                                            if (uVar7 == 2) goto LAB_00446ef9;
                                            iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                    (uint)*(byte *)((int)puVar5 + 2);
                                            if (iVar3 == 0) {
                                              if ((uVar7 == 3) ||
                                                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                          (uint)*(byte *)((int)puVar5 + 3),
                                                 iVar3 == 0)) goto LAB_00446ef9;
                                            }
                                          }
                                        }
                                        iVar4 = 1;
                                        if (iVar3 < 1) {
                                          iVar4 = -1;
                                        }
                                      }
                                      if (iVar4 == 0) {
                                        FUN_00450c10(param_1,(int)local_b0,local_ac);
                                      }
                                      else {
                                        FUN_00450d60(param_1,(int)local_b0,local_ac);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00446000;
    }
    puVar5 = &local_a4;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_0044623e;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_0044629b:
      iVar4 = 0;
    }
    else {
LAB_0044623e:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_0044629b;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_0044629b;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_0044629b;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      param_1[0x1a] = param_1[0x1a] | 4;
    }
    FUN_00450d60(param_1,(int)local_b0,local_ac);
    uVar7 = 4;
    puVar5 = &local_9c;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_004462db;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_00446338:
      iVar4 = 0;
    }
    else {
LAB_004462db:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_00446338;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_00446338;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_00446338;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      param_1[0x1a] = param_1[0x1a] | 2;
      goto LAB_00446000;
    }
    uVar7 = 4;
    puVar5 = &local_a4;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_0044636a;
      uVar7 = uVar7 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar7);
    if (uVar7 == 0) {
LAB_004463c7:
      iVar4 = 0;
    }
    else {
LAB_0044636a:
      iVar3 = (uint)(byte)*puVar6 - (uint)(byte)*puVar5;
      if (iVar3 == 0) {
        if (uVar7 == 1) goto LAB_004463c7;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar7 == 2) goto LAB_004463c7;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar7 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_004463c7;
          }
        }
      }
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 != 0) goto LAB_00446000;
    if ((param_1[0x1a] & 1U) == 0) {
      FUN_00445110(param_1,"Missing IHDR before IDAT");
    }
    else if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((param_1[0x1a] & 2U) == 0)) {
      FUN_00445110(param_1,"Missing PLTE before IDAT");
    }
  }
LAB_00446f86:
  __security_check_cookie(local_4 ^ (uint)&local_b0);
  return;
}

