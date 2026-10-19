// Address: 0x004259c0
// Name: FUN_004259c0
// Category: Launcher


void __thiscall FUN_004259c0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_4;
  for (; (void *)param_1 != this; this = (void *)((int)this + -0x1c)) {
    uVar1 = *(undefined4 *)(param_2 + -0x18);
    uVar2 = *(undefined4 *)(param_2 + -0x14);
    uVar3 = *(undefined4 *)(param_2 + -0x10);
    uVar4 = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)((int)this + -0x18);
    *(undefined4 *)(param_2 + -0x14) = *(undefined4 *)((int)this + -0x14);
    *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)((int)this + -0x10);
    *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)((int)this + -0xc);
    *(undefined4 *)((int)this + -0x18) = uVar1;
    *(undefined4 *)((int)this + -0x14) = uVar2;
    *(undefined4 *)((int)this + -0x10) = uVar3;
    *(undefined4 *)((int)this + -0xc) = uVar4;
    uVar1 = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_2 + -8) = *(undefined4 *)((int)this + -8);
    *(undefined4 *)((int)this + -8) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *(undefined4 *)((int)this + -4);
    *(undefined4 *)((int)this + -4) = uVar1;
    param_2 = param_2 + -0x1c;
  }
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

