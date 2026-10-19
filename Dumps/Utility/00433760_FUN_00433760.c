// Address: 0x00433760
// Name: FUN_00433760
// Category: Utility


void __thiscall FUN_00433760(void *this,int param_1)

{
  short *psVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *local_c;
  uint local_8;
  int local_4;
  
  uVar2 = *(ushort *)(in_EAX + 2);
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar3 = 7;
  iVar5 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar5 = 3;
  }
  *(undefined2 *)(in_EAX + 6 + (int)this * 4) = 0xffff;
  if (-1 < (int)this) {
    local_c = (ushort *)(in_EAX + 6);
    local_4 = (int)this + 1;
    uVar6 = (uint)uVar2;
    do {
      uVar7 = (uint)*local_c;
      iVar4 = iVar4 + 1;
      if ((iVar3 <= iVar4) || (uVar6 != uVar7)) {
        if (iVar4 < iVar5) {
          psVar1 = (short *)(param_1 + 0xa7c + uVar6 * 4);
          *psVar1 = *psVar1 + (short)iVar4;
        }
        else if (uVar6 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar6 != local_8) {
            psVar1 = (short *)(param_1 + 0xa7c + uVar6 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar4 = 0;
        local_8 = uVar6;
        if (uVar7 == 0) {
          iVar3 = 0x8a;
          iVar5 = 3;
        }
        else if (uVar6 == uVar7) {
          iVar3 = 6;
          iVar5 = 3;
        }
        else {
          iVar3 = 7;
          iVar5 = 4;
        }
      }
      local_c = local_c + 2;
      local_4 = local_4 + -1;
      uVar6 = uVar7;
    } while (local_4 != 0);
  }
  return;
}

