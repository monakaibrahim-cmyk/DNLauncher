// Address: 0x00433850
// Name: FUN_00433850
// Category: Utility


void __fastcall FUN_00433850(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_14;
  ushort *local_10;
  uint local_c;
  int local_8;
  
  local_c = 0xffffffff;
  iVar4 = 7;
  iVar9 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar4 = 0x8a;
    iVar9 = 3;
  }
  if (-1 < param_1) {
    local_10 = (ushort *)(param_2 + 6);
    local_8 = param_1 + 1;
    iVar7 = 0;
    local_14 = (uint)*(ushort *)(param_2 + 2);
    do {
      uVar5 = (uint)*local_10;
      iVar6 = iVar7 + 1;
      if ((iVar4 <= iVar6) || (local_14 != uVar5)) {
        if (iVar6 < iVar9) {
          do {
            uVar8 = (uint)*(ushort *)(in_EAX + 0xa7e + local_14 * 4);
            iVar4 = *(int *)(in_EAX + 0x16bc);
            if ((int)(0x10 - uVar8) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa7c + local_14 * 4);
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) |
                   *(short *)(in_EAX + 0xa7c + local_14 * 4) << ((byte)iVar4 & 0x1f);
            }
            iVar6 = iVar6 + -1;
            *(uint *)(in_EAX + 0x16bc) = iVar4 + uVar8;
          } while (iVar6 != 0);
        }
        else if (local_14 == 0) {
          iVar4 = *(int *)(in_EAX + 0x16bc);
          bVar3 = (byte)iVar4;
          if (iVar6 < 0xb) {
            uVar1 = *(ushort *)(in_EAX + 0xac2);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xac0);
              *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xac0) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar7 = iVar7 + -2;
            *(int *)(in_EAX + 0x16bc) = iVar4;
            if (iVar4 < 0xe) {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 3;
LAB_00433d10:
              *(int *)(in_EAX + 0x16bc) = iVar4;
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              iVar4 = *(int *)(in_EAX + 0x16bc);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x16bc) = iVar4 + -0xd;
              *(ushort *)(in_EAX + 0x16b8) = (ushort)iVar7 >> (0x10U - (char)iVar4 & 0x1f);
            }
          }
          else {
            uVar1 = *(ushort *)(in_EAX + 0xac6);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xac4);
              *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xac4) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar7 = iVar7 + -10;
            *(int *)(in_EAX + 0x16bc) = iVar4;
            if (iVar4 < 10) {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 7;
              goto LAB_00433d10;
            }
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            iVar4 = *(int *)(in_EAX + 0x16bc);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x16bc) = iVar4 + -9;
            *(ushort *)(in_EAX + 0x16b8) = (ushort)iVar7 >> (0x10U - (char)iVar4 & 0x1f);
          }
        }
        else {
          if (local_14 != local_c) {
            uVar8 = (uint)*(ushort *)(in_EAX + 0xa7e + local_14 * 4);
            iVar4 = *(int *)(in_EAX + 0x16bc);
            if ((int)(0x10 - uVar8) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa7c + local_14 * 4);
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) |
                   *(short *)(in_EAX + 0xa7c + local_14 * 4) << ((byte)iVar4 & 0x1f);
            }
            *(uint *)(in_EAX + 0x16bc) = iVar4 + uVar8;
            iVar6 = iVar7;
          }
          uVar1 = *(ushort *)(in_EAX + 0xabe);
          iVar4 = *(int *)(in_EAX + 0x16bc);
          if ((int)(0x10 - (uint)uVar1) < iVar4) {
            uVar2 = *(ushort *)(in_EAX + 0xabc);
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | uVar2 << ((byte)iVar4 & 0x1f);
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar4 = *(int *)(in_EAX + 0x16bc) + -0x10;
            *(ushort *)(in_EAX + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xabc) << ((byte)iVar4 & 0x1f);
          }
          iVar4 = iVar4 + (uint)uVar1;
          iVar6 = iVar6 + -3;
          *(int *)(in_EAX + 0x16bc) = iVar4;
          if (iVar4 < 0xf) {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            iVar4 = iVar4 + 2;
            goto LAB_00433d10;
          }
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          iVar4 = *(int *)(in_EAX + 0x16bc);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x16bc) = iVar4 + -0xe;
          *(ushort *)(in_EAX + 0x16b8) = (ushort)iVar6 >> (0x10U - (char)iVar4 & 0x1f);
        }
        iVar6 = 0;
        local_c = local_14;
        if (uVar5 == 0) {
          iVar4 = 0x8a;
          iVar9 = 3;
        }
        else if (local_14 == uVar5) {
          iVar4 = 6;
          iVar9 = 3;
        }
        else {
          iVar4 = 7;
          iVar9 = 4;
        }
      }
      local_10 = local_10 + 2;
      local_8 = local_8 + -1;
      iVar7 = iVar6;
      local_14 = uVar5;
    } while (local_8 != 0);
  }
  return;
}

