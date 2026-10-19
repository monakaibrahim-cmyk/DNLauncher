// Address: 0x0043b030
// Name: FUN_0043b030
// Category: Utility


undefined4 FUN_0043b030(void)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x14) != 0xcc) {
    in_EAX = (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0xcc;
  }
  if (*(char *)(*(int *)(unaff_ESI + 0x180) + 8) != '\0') {
    puVar1 = (uint *)(unaff_ESI + 0x78);
    do {
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(unaff_ESI + 0x60)) {
        do {
          if (*(int *)(unaff_ESI + 8) != 0) {
            *(uint *)(*(int *)(unaff_ESI + 8) + 4) = uVar3;
            *(undefined4 *)(*(int *)(unaff_ESI + 8) + 8) = *(undefined4 *)(unaff_ESI + 0x60);
            (*(code *)**(undefined4 **)(unaff_ESI + 8))();
          }
          uVar2 = *puVar1;
          (**(code **)(*(int *)(unaff_ESI + 0x184) + 4))();
          uVar3 = *puVar1;
          if (uVar3 == uVar2) {
            return uVar3 & 0xffffff00;
          }
        } while (uVar3 < *(uint *)(unaff_ESI + 0x60));
      }
      (**(code **)(*(int *)(unaff_ESI + 0x180) + 4))();
      (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
      *puVar1 = 0;
      in_EAX = *(int *)(unaff_ESI + 0x180);
    } while (*(char *)(in_EAX + 8) != '\0');
  }
  *(uint *)(unaff_ESI + 0x14) = (*(char *)(unaff_ESI + 0x41) != '\0') + 0xcd;
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

