// Address: 0x00431360
// Name: FUN_00431360
// Category: Utility


/* WARNING: Removing unreachable block (ram,0x0043136b) */

undefined4 FUN_00431360(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(unaff_ESI + 0x34) != 0) {
    do {
      if (*(uint *)(unaff_ESI + 0x38) < 0x10) {
        iVar2 = unaff_ESI + 0x24;
      }
      else {
        iVar2 = *(int *)(unaff_ESI + 0x24);
      }
      bVar1 = *(byte *)(iVar2 + uVar3);
      in_EAX = _isspace((uint)bVar1);
      if (((in_EAX == 0) && (bVar1 != 10)) && (bVar1 != 0xd)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(unaff_ESI + 0x34));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

