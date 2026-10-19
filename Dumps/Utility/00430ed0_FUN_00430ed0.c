// Address: 0x00430ed0
// Name: FUN_00430ed0
// Category: Utility


/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00430ed0(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  undefined1 auStack_120 [3];
  byte local_11d;
  undefined4 *local_11c;
  void *local_118;
  void *local_114;
  void *local_110;
  undefined **local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  void *local_f4;
  undefined4 local_e4;
  uint local_e0;
  char *******local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined **local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  char *******local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  char *******local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498ebe;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_120;
  ExceptionList = &local_c;
  local_11c = param_2;
  pbVar3 = FUN_0042ef30(param_3);
  iVar4 = FUN_0042d8f0();
  if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) ||
     (uVar5 = FUN_0042f4d0(pbVar3,'\x01',param_3), puVar2 = local_11c, (char)uVar5 == '\0')) {
    if (iVar4 != 0) {
      FUN_0042fa80((void *)0x0,(byte *)0x0,param_3);
    }
  }
  else {
    if (local_11c != (undefined4 *)0x0) {
      FUN_0042ed20(pbVar3,param_3);
      *(undefined4 *)((int)this + 4) = *puVar2;
      *(undefined4 *)((int)this + 8) = puVar2[1];
    }
    local_114 = (void *)((int)this + 0x44);
    pbVar3 = pbVar3 + 5;
    FUN_00402d00(local_114,&PTR_004b2d68,0);
    local_118 = (void *)((int)this + 0x60);
    FUN_00402d00(local_118,&PTR_004b2d68,0);
    local_110 = (void *)((int)this + 0x7c);
    FUN_00402d00(local_110,&PTR_004b2d68,0);
    while (((pbVar3 != (byte *)0x0 && (*pbVar3 != 0)) && (*pbVar3 != 0x3e))) {
      pbVar3 = FUN_0042ef30(param_3);
      uVar5 = FUN_0042f4d0(pbVar3,'\x01',param_3);
      if ((char)uVar5 == '\0') {
        uVar5 = FUN_0042f4d0(pbVar3,'\x01',param_3);
        if ((char)uVar5 == '\0') {
          uVar5 = FUN_0042f4d0(pbVar3,'\x01',param_3);
          if ((char)uVar5 != '\0') {
            local_5c = 0xffffffff;
            local_60 = 0xffffffff;
            local_58 = 0;
            local_64 = TiXmlAttribute::vftable;
            local_38 = 0xf;
            local_3c = 0;
            local_4c = 0;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
            local_54 = 0;
            local_14 = 0;
            local_18 = 0;
            local_4 = 2;
            pbVar3 = FUN_00430a30(&local_64,pbVar3,local_11c,param_3);
            pppppppcVar7 = local_30[0];
            if (local_1c < 0x10) {
              pppppppcVar7 = (char *******)local_30;
            }
            pppppppcVar6 = pppppppcVar7;
            do {
              cVar1 = *(char *)pppppppcVar6;
              pppppppcVar6 = (char *******)((int)pppppppcVar6 + 1);
            } while (cVar1 != '\0');
            FUN_00402d00(local_110,pppppppcVar7,(int)pppppppcVar6 - (int)((int)pppppppcVar7 + 1));
            goto LAB_004311d1;
          }
          while( true ) {
            if (pbVar3 == (byte *)0x0) goto LAB_00431336;
            local_11d = *pbVar3;
            if (((local_11d == 0) || (local_11d == 0x3e)) ||
               ((iVar4 = _isspace((uint)local_11d), iVar4 != 0 ||
                ((local_11d == 10 || (local_11d == 0xd)))))) break;
            pbVar3 = pbVar3 + 1;
          }
        }
        else {
          local_b0 = 0xffffffff;
          local_b4 = 0xffffffff;
          local_ac = 0;
          local_b8 = TiXmlAttribute::vftable;
          local_8c = 0xf;
          local_90 = 0;
          local_a0 = 0;
          local_70 = 0xf;
          local_74 = 0;
          local_84[0] = (char *******)((uint)local_84[0] & 0xffffff00);
          local_a8 = 0;
          local_68 = 0;
          local_6c = 0;
          local_4 = 1;
          pbVar3 = FUN_00430a30(&local_b8,pbVar3,local_11c,param_3);
          pppppppcVar7 = local_84[0];
          if (local_70 < 0x10) {
            pppppppcVar7 = (char *******)local_84;
          }
          pppppppcVar6 = pppppppcVar7;
          do {
            cVar1 = *(char *)pppppppcVar6;
            pppppppcVar6 = (char *******)((int)pppppppcVar6 + 1);
          } while (cVar1 != '\0');
          FUN_00402d00(local_118,pppppppcVar7,(int)pppppppcVar6 - (int)((int)pppppppcVar7 + 1));
LAB_004311d1:
          local_4 = 0xffffffff;
          FUN_0042e960();
        }
      }
      else {
        local_104 = 0xffffffff;
        local_108 = 0xffffffff;
        local_100 = 0;
        local_10c = TiXmlAttribute::vftable;
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = (void *)((uint)local_f4 & 0xffffff00);
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8[0] = (char *******)((uint)local_d8[0] & 0xffffff00);
        local_fc = 0;
        local_bc = 0;
        local_c0 = 0;
        local_4 = 0;
        pbVar3 = FUN_00430a30(&local_10c,pbVar3,local_11c,param_3);
        pppppppcVar7 = local_d8[0];
        if (local_c4 < 0x10) {
          pppppppcVar7 = (char *******)local_d8;
        }
        pppppppcVar6 = pppppppcVar7;
        do {
          cVar1 = *(char *)pppppppcVar6;
          pppppppcVar6 = (char *******)((int)pppppppcVar6 + 1);
        } while (cVar1 != '\0');
        FUN_00402d00(local_114,pppppppcVar7,(int)pppppppcVar6 - (int)((int)pppppppcVar7 + 1));
        local_4 = 0xffffffff;
        if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_d8[0]);
        }
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8[0] = (char *******)((uint)local_d8[0] & 0xffffff00);
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          _free(local_f4);
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = (void *)((uint)local_f4 & 0xffffff00);
        local_10c = TiXmlBase::vftable;
      }
    }
  }
LAB_00431336:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_120);
  return;
}

