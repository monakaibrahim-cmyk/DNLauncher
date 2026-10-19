// Address: 0x0042f8c0
// Name: FUN_0042f8c0
// Category: Launcher


byte * __thiscall FUN_0042f8c0(void *this,char *param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *this_00;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  undefined4 local_c;
  
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_00402d00((void *)((int)this + 0x4c),&PTR_004b2d68,0);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    if (param_2 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      *(undefined4 *)((int)this + 4) = *param_2;
      *(undefined4 *)((int)this + 8) = param_2[1];
    }
    local_c = *(undefined4 *)((int)this + 0x68);
    local_18 = *(undefined4 *)((int)this + 4);
    local_14 = *(undefined4 *)((int)this + 8);
    local_10 = param_1;
    *(undefined4 *)((int)this + 4) = local_18;
    *(undefined4 *)((int)this + 8) = local_14;
    if (((((param_3 == 0) && (*param_1 != '\0')) && (*param_1 == -0x11)) &&
        ((param_1[1] != '\0' && (param_1[1] == -0x45)))) &&
       ((param_1[2] != '\0' && (param_1[2] == -0x41)))) {
      param_3 = 1;
      *(undefined1 *)((int)this + 0x74) = 1;
    }
    pbVar1 = FUN_0042ef30(param_3);
    if (pbVar1 != (byte *)0x0) {
      do {
        if ((*pbVar1 == 0) || (piVar2 = FUN_0042faf0(this,pbVar1,param_3), piVar2 == (int *)0x0))
        break;
        (**(code **)(*piVar2 + 8))(pbVar1,&local_18,param_3);
        FUN_0042d770((int)this);
        if ((param_3 == 0) && (iVar3 = (**(code **)(*piVar2 + 0x34))(), iVar3 != 0)) {
          iVar3 = (**(code **)(*piVar2 + 0x34))();
          if (*(uint *)(iVar3 + 0x78) < 0x10) {
            this_00 = (char *)(iVar3 + 100);
          }
          else {
            this_00 = *(char **)(iVar3 + 100);
          }
          if (*this_00 == '\0') {
            param_3 = 1;
          }
          else {
            uVar4 = FUN_0042f4d0(this_00,'\x01',0);
            if ((char)uVar4 == '\0') {
              uVar4 = FUN_0042f4d0(this_00,'\x01',0);
              param_3 = 2 - (uint)((char)uVar4 != '\0');
            }
            else {
              param_3 = 1;
            }
          }
        }
        pbVar1 = FUN_0042ef30(param_3);
      } while (pbVar1 != (byte *)0x0);
      if (*(int *)((int)this + 0x18) != 0) {
        return pbVar1;
      }
      goto LAB_0042f985;
    }
  }
  param_3 = 0;
LAB_0042f985:
  FUN_0042fa80((void *)0x0,(byte *)0x0,param_3);
  return (byte *)0x0;
}

