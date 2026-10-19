// Address: 0x00416e10
// Name: FUN_00416e10
// Category: Launcher


undefined4 FUN_00416e10(void)

{
  undefined2 *in_EAX;
  int iVar1;
  ushort uVar2;
  int *unaff_EBX;
  uint local_c;
  int local_8;
  int local_4;
  
  if (unaff_EBX != (int *)0x0) {
    *unaff_EBX = 0;
  }
  if (in_EAX != (undefined2 *)0x0) {
    *in_EAX = 0;
  }
  local_8 = 0;
  local_4 = 0;
  local_c = 0x20;
  iVar1 = FUN_00416f00();
  if (iVar1 < 0) {
    iVar1 = FUN_00417140(&local_8,&local_4,(undefined2 *)&local_c);
    if (iVar1 < 0) {
      return 0x80004005;
    }
  }
  iVar1 = _tolower(local_c & 0xffff);
  uVar2 = (ushort)(char)iVar1;
  if (unaff_EBX != (int *)0x0) {
    iVar1 = (local_8 * 0x100 + local_4) * 0x100;
    if ((ushort)(uVar2 - 0x61) < 0x1a) {
      iVar1 = iVar1 + -0x60 + (uint)uVar2;
    }
    *unaff_EBX = iVar1;
  }
  if (in_EAX != (undefined2 *)0x0) {
    if (uVar2 == 0x20) {
      FUN_004163b0(L"%d.%d");
      return 0;
    }
    FUN_004163b0(L"%d.%d%c");
  }
  return 0;
}

