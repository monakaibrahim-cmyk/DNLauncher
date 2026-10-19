// Address: 0x0042da40
// Name: FUN_0042da40
// Category: Launcher


void FUN_0042da40(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  
  FUN_0042d740();
  uVar3 = in_EAX + 0x44;
  while ((uVar1 = *(uint *)(in_EAX + 0x94), uVar1 != uVar3 && (uVar1 != 0))) {
    puVar2 = (undefined4 *)(-(uint)(uVar1 != uVar3) & uVar1);
    FUN_0042e9d0(uVar3,(int)puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

