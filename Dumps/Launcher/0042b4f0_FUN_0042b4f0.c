// Address: 0x0042b4f0
// Name: FUN_0042b4f0
// Category: Launcher


void __thiscall FUN_0042b4f0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_154 [4];
  uint local_150;
  undefined4 local_14c [81];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_154;
  puVar3 = (undefined4 *)&stack0x00000008;
  puVar5 = local_14c;
  for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = *(undefined4 **)((int)this + 4);
  if (puVar3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - (int)puVar3) / 0x13c;
  }
  if (uVar1 < param_1) {
    puVar5 = *(undefined4 **)((int)this + 8);
    if (puVar5 < puVar3) {
      FUN_00475b26();
    }
    if (*(int *)((int)this + 4) == 0) {
      FUN_0042bb20((int)this,local_14c,param_1,this,puVar5);
    }
    else {
      FUN_0042bb20((int)this,local_14c,
                   param_1 - (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x13c,this,puVar5
                  );
    }
  }
  else if (puVar3 != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)((int)this + 8);
    if (param_1 < (uint)(((int)puVar5 - (int)puVar3) / 0x13c)) {
      if (puVar5 < puVar3) {
        FUN_00475b26();
      }
      uVar1 = *(uint *)((int)this + 4);
      if (*(uint *)((int)this + 8) < uVar1) {
        FUN_00475b26();
      }
      uVar4 = uVar1 + param_1 * 0x13c;
      local_150 = uVar1;
      if ((*(uint *)((int)this + 8) < uVar4) || (uVar4 < *(uint *)((int)this + 4))) {
        FUN_00475b26();
      }
      FUN_0042b6d0((int)this,(int)this,uVar4,(int)this,(int)puVar5);
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_154);
  return;
}

