// Address: 0x0046dbc4
// Name: FUN_0046dbc4
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0046dbc4(void *this,undefined4 *param_1)

{
  longlong lVar1;
  int iVar2;
  int *local_38 [2];
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x46dbd0;
  local_28 = DAT_004a4104;
  uStack_24 = DAT_004a4108;
  uStack_20 = DAT_004a410c;
  uStack_1c = DAT_004a4110;
  if (param_1 != (undefined4 *)0x0) {
    local_38[0] = (int *)0x0;
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    local_2c = (int *)(**(code **)*param_1)(param_1,&DAT_004a3fbc,local_38);
    if (-1 < (int)local_2c) {
      local_30 = 0;
      if (*(int *)((int)this + 0x14) == 0) {
        local_2c = (int *)0x0;
        local_8._0_1_ = 1;
        iVar2 = (**(code **)*param_1)(param_1,&DAT_004a3f9c,&local_2c);
        if (iVar2 < 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          if (local_2c != (int *)0x0) {
            (**(code **)(*local_2c + 8))(local_2c);
          }
          local_8 = 0xffffffff;
          if (local_38[0] != (int *)0x0) {
            (**(code **)(*local_38[0] + 8))(local_38[0]);
          }
          goto LAB_0046e212;
        }
        iVar2 = (**(code **)(*local_2c + 0xc))
                          (local_2c,(int)this + 0xc,(int *)((int)this + 0x14),(int)this + 0x18);
        local_8._0_1_ = 0;
        if (iVar2 < 0) {
          if (local_2c != (int *)0x0) {
            (**(code **)(*local_2c + 8))(local_2c);
          }
          local_8 = 0xffffffff;
          FUN_0046e208();
          return;
        }
        *(undefined1 *)((int)this + 0x1c) = 0;
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 8))(local_2c);
        }
      }
      else {
        *(undefined1 *)((int)this + 0x1c) = 1;
      }
      lVar1 = (ulonglong)*(uint *)((int)this + 0xc) * 0x34;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00452728(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      local_8 = 0;
      FUN_0046dd15();
      return;
    }
    local_8 = 0xffffffff;
    if (local_38[0] != (int *)0x0) {
      (**(code **)(*local_38[0] + 8))(local_38[0]);
    }
  }
LAB_0046e212:
  FUN_0047b7b5();
  return;
}

