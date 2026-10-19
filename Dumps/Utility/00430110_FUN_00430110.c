// Address: 0x00430110
// Name: FUN_00430110
// Category: Utility


void __thiscall FUN_00430110(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *this_00;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  int local_3c;
  undefined4 *local_38;
  void *local_34;
  byte *local_30;
  undefined1 local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004993a8;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_3c;
  ExceptionList = &local_c;
  local_38 = param_2;
  local_34 = this;
  pbVar3 = FUN_0042ef30(param_3);
  local_3c = FUN_0042d8f0();
  if ((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) {
    if (local_3c == 0) goto LAB_0043048a;
    pbVar3 = (byte *)0x0;
    param_2 = (undefined4 *)0x0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      FUN_0042ed20(pbVar3,param_3);
      *(undefined4 *)((int)this + 4) = *param_2;
      *(undefined4 *)((int)this + 8) = param_2[1];
    }
    if (*pbVar3 == 0x3c) {
      local_30 = FUN_0042ef30(param_3);
      pbVar4 = (byte *)FUN_0042f1d0();
      pbVar3 = local_30;
      if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
        FUN_00402cc0(local_2c,"</");
        local_4 = 0;
        FUN_004263a0((int)this + 0x20,0);
        FUN_00426290(extraout_ECX,">");
        while (*pbVar4 != 0) {
          pbVar3 = FUN_0042ef30(param_3);
          this_00 = local_38;
          if ((pbVar3 == (byte *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) {
            if (local_3c == 0) goto LAB_00430393;
            FUN_0042fa80(local_38,pbVar4,param_3);
            FUN_00402c90((int)local_2c);
            goto LAB_0043048a;
          }
          if (bVar1 == 0x2f) {
            if (pbVar3[1] == 0x3e) {
              FUN_00402c90((int)local_2c);
            }
            else {
              if (local_3c != 0) {
                FUN_0042fa80(local_38,pbVar3 + 1,param_3);
              }
              FUN_00402c90((int)local_2c);
            }
            goto LAB_0043048a;
          }
          if (bVar1 == 0x3e) {
            pbVar3 = FUN_004304b0(pbVar3 + 1,local_38,param_3);
            if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) ||
               (uVar7 = FUN_0042f4d0(pbVar3,'\0',param_3), (char)uVar7 == '\0')) {
              if (local_3c != 0) {
                FUN_0042fa80(this_00,pbVar3,param_3);
              }
LAB_00430393:
              FUN_00402c90((int)local_2c);
            }
            else {
              FUN_00402c90((int)local_2c);
            }
            goto LAB_0043048a;
          }
          piVar5 = FUN_00452728(0x54);
          if (piVar5 == (int *)0x0) {
            if (local_3c == 0) goto LAB_00430393;
            FUN_0042fa80(local_38,pbVar4,param_3);
            FUN_00402c90((int)local_2c);
            goto LAB_0043048a;
          }
          piVar5[2] = -1;
          piVar5[1] = -1;
          piVar5[3] = 0;
          *piVar5 = (int)TiXmlAttribute::vftable;
          piVar5[10] = 0;
          piVar5[0xb] = 0xf;
          *(undefined1 *)(piVar5 + 6) = 0;
          piVar5[0x11] = 0;
          piVar5[0x12] = 0xf;
          *(undefined1 *)(piVar5 + 0xd) = 0;
          piVar5[0x14] = 0;
          piVar5[0x13] = 0;
          pcVar2 = *(code **)(*piVar5 + 8);
          piVar5[4] = local_3c;
          local_30 = pbVar3;
          pbVar4 = (byte *)(*pcVar2)(pbVar3,local_38,param_3);
          if ((pbVar4 == (byte *)0x0) || (*pbVar4 == 0)) {
            if (local_3c != 0) {
              FUN_0042fa80(local_38,local_30,param_3);
            }
            (**(code **)*piVar5)(1);
            FUN_00402c90((int)local_2c);
            goto LAB_0043048a;
          }
          iVar6 = FUN_0042ea00((int)local_34 + 0x44,(int)(piVar5 + 5));
          if (iVar6 != 0) {
            if ((uint)piVar5[0x12] < 0x10) {
              piVar8 = piVar5 + 0xd;
            }
            else {
              piVar8 = (int *)piVar5[0xd];
            }
            FUN_0042d0c0(extraout_ECX_00,(char *)piVar8,iVar6);
            (**(code **)*piVar5)(1);
            FUN_00402c90((int)local_2c);
            goto LAB_0043048a;
          }
          FUN_0042e9b0((int)local_34 + 0x44);
        }
        FUN_00402c90((int)local_2c);
        goto LAB_0043048a;
      }
    }
    if (local_3c == 0) goto LAB_0043048a;
  }
  FUN_0042fa80(param_2,pbVar3,param_3);
LAB_0043048a:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_3c);
  return;
}

