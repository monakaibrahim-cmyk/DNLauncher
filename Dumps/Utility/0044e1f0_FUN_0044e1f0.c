// Address: 0x0044e1f0
// Name: FUN_0044e1f0
// Category: Utility


void __cdecl FUN_0044e1f0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  void *_Src;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  void *_Dst;
  byte *pbVar9;
  undefined1 auStack_4c [3];
  byte local_49;
  uint local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint local_28 [9];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_4c;
  iVar2 = *(int *)(param_1 + 0xec) + 1;
  uVar7 = *(uint *)(param_1 + 0x70);
  local_30 = (uint *)(param_1 + 0x100);
  local_28[0] = 8;
  local_28[1] = 8;
  local_28[2] = 4;
  local_28[3] = 4;
  local_28[4] = 2;
  local_28[5] = 2;
  local_28[6] = 1;
  if ((iVar2 != 0) && (local_30 != (uint *)0x0)) {
    local_2c = local_28[*(byte *)(param_1 + 0x124)];
    uVar5 = *local_30;
    bVar1 = *(byte *)(param_1 + 0x10b);
    pbVar4 = (byte *)(uVar5 * local_2c);
    if (bVar1 == 1) {
      local_3c = (byte *)((uVar5 - 1 >> 3) + iVar2);
      pbVar9 = (byte *)(((uint)(pbVar4 + -1) >> 3) + iVar2);
      if ((uVar7 & 0x10000) == 0) {
        local_38 = (byte *)(7 - (uVar5 - 1 & 7));
        pbVar3 = (byte *)(7 - ((uint)(pbVar4 + -1) & 7));
        local_44 = (byte *)0x0;
        local_40 = (byte *)0x7;
        local_48 = 1;
      }
      else {
        local_38 = (byte *)(uVar5 - 1 & 7);
        pbVar3 = (byte *)((uint)(pbVar4 + -1) & 7);
        local_44 = (byte *)0x7;
        local_40 = (byte *)0x0;
        local_48 = 0xffffffff;
      }
      local_28[7] = 0;
      if (uVar5 != 0) {
        do {
          bVar1 = *local_3c;
          uVar7 = local_2c;
          if (0 < (int)local_2c) {
            do {
              local_34 = uVar7;
              *pbVar9 = (byte)(0x7f7f >> (7 - (byte)pbVar3 & 0x1f)) & *pbVar9 |
                        (bVar1 >> ((byte)local_38 & 0x1f) & 1) << ((byte)pbVar3 & 0x1f);
              if (pbVar3 == local_40) {
                pbVar9 = pbVar9 + -1;
                pbVar3 = local_44;
              }
              else {
                pbVar3 = pbVar3 + local_48;
              }
              uVar7 = local_34 - 1;
            } while (local_34 - 1 != 0);
            local_34 = 0;
          }
          if (local_38 == local_40) {
            local_3c = local_3c + -1;
            local_38 = local_44;
          }
          else {
            local_38 = local_38 + local_48;
          }
          local_28[7] = local_28[7] + 1;
        } while (local_28[7] < *local_30);
      }
    }
    else {
      local_38 = pbVar4;
      if (bVar1 == 2) {
        local_44 = (byte *)((uVar5 - 1 >> 2) + iVar2);
        pbVar9 = (byte *)(((uint)(pbVar4 + -1) >> 2) + iVar2);
        if ((uVar7 & 0x10000) == 0) {
          pbVar3 = (byte *)((3 - (uVar5 - 1 & 3)) * 2);
          pbVar8 = (byte *)((3 - ((uint)(pbVar4 + -1) & 3)) * 2);
          local_40 = (byte *)0x0;
          pbVar6 = (byte *)0x6;
          local_3c = (byte *)0x2;
        }
        else {
          pbVar3 = (byte *)(uVar5 * 2 - 1 & 6);
          pbVar8 = (byte *)((int)pbVar4 * 2 - 1U & 6);
          local_40 = (byte *)0x6;
          pbVar6 = (byte *)0x0;
          local_3c = (byte *)0xfffffffe;
        }
        local_48 = 0;
        if (uVar5 != 0) {
          do {
            local_49 = *local_44 >> ((byte)pbVar3 & 0x1f) & 3;
            uVar7 = local_2c;
            if (0 < (int)local_2c) {
              do {
                local_34 = uVar7;
                *pbVar9 = (byte)(0x3f3f >> (6 - (byte)pbVar8 & 0x1f)) & *pbVar9 |
                          local_49 << ((byte)pbVar8 & 0x1f);
                if (pbVar8 == pbVar6) {
                  pbVar9 = pbVar9 + -1;
                  pbVar8 = local_40;
                }
                else {
                  pbVar8 = pbVar8 + (int)local_3c;
                }
                local_34 = local_34 - 1;
                uVar7 = local_34;
              } while (local_34 != 0);
            }
            if (pbVar3 == pbVar6) {
              local_44 = local_44 + -1;
              pbVar3 = local_40;
            }
            else {
              pbVar3 = pbVar3 + (int)local_3c;
            }
            local_48 = local_48 + 1;
          } while (local_48 < *local_30);
        }
      }
      else if (bVar1 == 4) {
        local_44 = (byte *)((uVar5 - 1 >> 1) + iVar2);
        pbVar9 = (byte *)(((uint)(pbVar4 + -1) >> 1) + iVar2);
        if ((uVar7 & 0x10000) == 0) {
          pbVar3 = (byte *)((uVar5 - 1 & 1) * -4 + 4);
          pbVar8 = (byte *)(((uint)(pbVar4 + -1) & 1) * -4 + 4);
          pbVar6 = (byte *)0x4;
          local_3c = (byte *)0x0;
          local_40 = (byte *)0x4;
        }
        else {
          pbVar3 = (byte *)(uVar5 * -4 - 1 & 4);
          pbVar8 = (byte *)((int)pbVar4 * -4 - 1U & 4);
          local_3c = (byte *)0x4;
          pbVar6 = (byte *)0x0;
          local_40 = (byte *)0xfffffffc;
        }
        local_34 = 0;
        if (uVar5 != 0) {
          do {
            local_49 = *local_44 >> ((byte)pbVar3 & 0x1f) & 0xf;
            uVar7 = local_2c;
            if (0 < (int)local_2c) {
              do {
                local_48 = uVar7;
                *pbVar9 = (byte)(0xf0f >> (4 - (byte)pbVar8 & 0x1f)) & *pbVar9 |
                          local_49 << ((byte)pbVar8 & 0x1f);
                if (pbVar8 == pbVar6) {
                  pbVar9 = pbVar9 + -1;
                  pbVar8 = local_3c;
                }
                else {
                  pbVar8 = pbVar8 + (int)local_40;
                }
                local_48 = local_48 - 1;
                uVar7 = local_48;
              } while (local_48 != 0);
            }
            if (pbVar3 == pbVar6) {
              local_44 = local_44 + -1;
              pbVar3 = local_3c;
            }
            else {
              pbVar3 = pbVar3 + (int)local_40;
            }
            local_34 = local_34 + 1;
          } while (local_34 < *local_30);
        }
      }
      else {
        uVar7 = (uint)(bVar1 >> 3);
        _Src = (void *)((uVar5 - 1) * uVar7 + iVar2);
        _Dst = (void *)((int)(pbVar4 + -1) * uVar7 + iVar2);
        local_48 = 0;
        if (uVar5 != 0) {
          do {
            _memcpy(local_28 + 7,_Src,uVar7);
            uVar5 = local_2c;
            if (0 < (int)local_2c) {
              do {
                _memcpy(_Dst,local_28 + 7,uVar7);
                _Dst = (void *)((int)_Dst - uVar7);
                uVar5 = uVar5 - 1;
                pbVar4 = local_38;
              } while (uVar5 != 0);
            }
            local_48 = local_48 + 1;
            _Src = (void *)((int)_Src - uVar7);
          } while (local_48 < *local_30);
        }
      }
    }
    bVar1 = *(byte *)((int)local_30 + 0xb);
    *local_30 = (uint)pbVar4;
    if (bVar1 < 8) {
      uVar7 = (uint)bVar1 * (int)pbVar4 + 7 >> 3;
    }
    else {
      uVar7 = (uint)(bVar1 >> 3) * (int)pbVar4;
    }
    local_30[1] = uVar7;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_4c);
  return;
}

