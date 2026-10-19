// Address: 0x00434320
// Name: FUN_00434320
// Category: Utility


void __cdecl FUN_00434320(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = 0;
  if (*(int *)(in_EAX + 0x16a0) != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(in_EAX + 0x16a4) + uVar4 * 2);
      uVar8 = (uint)*(byte *)(uVar4 + *(int *)(in_EAX + 0x1698));
      uVar4 = uVar4 + 1;
      iVar5 = *(int *)(in_EAX + 0x16bc);
      bVar3 = (byte)iVar5;
      if (uVar7 == 0) {
        uVar7 = (uint)*(ushort *)(param_1 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_1 + uVar8 * 4);
          *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar1 << (bVar3 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar5 = *(int *)(in_EAX + 0x16bc) + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | *(short *)(param_1 + uVar8 * 4) << (bVar3 & 0x1f);
          iVar5 = iVar5 + uVar7;
        }
LAB_0043465c:
        *(int *)(in_EAX + 0x16bc) = iVar5;
      }
      else {
        uVar6 = (uint)(byte)(&DAT_004ad0b8)[uVar8];
        uVar10 = (uint)*(ushort *)(param_1 + 0x406 + uVar6 * 4);
        if ((int)(0x10 - uVar10) < iVar5) {
          uVar1 = *(ushort *)(param_1 + 0x404 + uVar6 * 4);
          *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar1 << (bVar3 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          iVar5 = *(int *)(in_EAX + 0x16bc);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16bc) = iVar5 + -0x10 + uVar10;
          *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) |
               *(short *)(param_1 + 0x404 + uVar6 * 4) << (bVar3 & 0x1f);
          *(uint *)(in_EAX + 0x16bc) = iVar5 + uVar10;
        }
        iVar5 = *(int *)(&DAT_004ac870 + uVar6 * 4);
        if (iVar5 != 0) {
          iVar9 = uVar8 - *(int *)(&DAT_004ad1b8 + uVar6 * 4);
          iVar2 = *(int *)(in_EAX + 0x16bc);
          if (0x10 - iVar5 < iVar2) {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar2 = *(int *)(in_EAX + 0x16bc) + -0x10;
            *(ushort *)(in_EAX + 0x16b8) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
          }
          *(int *)(in_EAX + 0x16bc) = iVar2 + iVar5;
        }
        uVar8 = uVar7 - 1;
        if (uVar8 < 0x100) {
          bVar3 = (&DAT_004aceb7)[uVar7];
        }
        else {
          bVar3 = (&DAT_004acfb8)[uVar8 >> 7];
        }
        uVar6 = (uint)bVar3;
        uVar7 = (uint)*(ushort *)(param_2 + 2 + uVar6 * 4);
        iVar5 = *(int *)(in_EAX + 0x16bc);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_2 + uVar6 * 4);
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar5 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          iVar5 = *(int *)(in_EAX + 0x16bc);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16bc) = iVar5 + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) |
               *(short *)(param_2 + uVar6 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(in_EAX + 0x16bc) = iVar5 + uVar7;
        }
        iVar5 = *(int *)(&DAT_004ac8f8 + uVar6 * 4);
        if (iVar5 != 0) {
          iVar2 = *(int *)(in_EAX + 0x16bc);
          iVar9 = uVar8 - *(int *)(&DAT_004ad230 + uVar6 * 4);
          if (0x10 - iVar5 < iVar2) {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar5 = *(int *)(in_EAX + 0x16bc) + -0x10 + iVar5;
            *(ushort *)(in_EAX + 0x16b8) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            iVar5 = iVar2 + iVar5;
          }
          goto LAB_0043465c;
        }
      }
    } while (uVar4 < *(uint *)(in_EAX + 0x16a0));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x402);
  iVar5 = *(int *)(in_EAX + 0x16bc);
  if (iVar5 <= (int)(0x10 - uVar4)) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | *(short *)(param_1 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(in_EAX + 0x16bc) = iVar5 + uVar4;
    *(uint *)(in_EAX + 0x16b4) = (uint)*(ushort *)(param_1 + 0x402);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x400);
  *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar5 & 0x1f);
  *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = *(undefined1 *)(in_EAX + 0x16b8)
  ;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = *(undefined1 *)(in_EAX + 0x16b9)
  ;
  iVar5 = *(int *)(in_EAX + 0x16bc);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(uint *)(in_EAX + 0x16bc) = iVar5 + -0x10 + uVar4;
  *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
  *(uint *)(in_EAX + 0x16b4) = (uint)*(ushort *)(param_1 + 0x402);
  return;
}

