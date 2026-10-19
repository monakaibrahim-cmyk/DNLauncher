// Address: 0x00433e30
// Name: FUN_00433e30
// Category: Utility


void __cdecl FUN_00433e30(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xd) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xc;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(in_EAX + 0x16bc);
      if (iVar2 < 0xe) {
        *(ushort *)(in_EAX + 0x16b8) =
             *(ushort *)(in_EAX + 0x16b8) |
             *(short *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_004ac8e4)[iVar3] * 4) <<
             ((byte)iVar2 & 0x1f);
        *(int *)(in_EAX + 0x16bc) = iVar2 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_004ac8e4)[iVar3] * 4);
        *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b8);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b9);
        iVar2 = *(int *)(in_EAX + 0x16bc);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16bc) = iVar2 + -0xd;
        *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  iVar3 = FUN_00433850(param_1 + -1,in_EAX + 0x94);
  FUN_00433850(param_2 + -1,iVar3 + 0x988);
  return;
}

