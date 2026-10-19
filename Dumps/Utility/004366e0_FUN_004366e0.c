// Address: 0x004366e0
// Name: FUN_004366e0
// Category: Utility


void __thiscall FUN_004366e0(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 local_4;
  
  iVar4 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar4) {
    local_4 = iVar4 * 2;
    iVar5 = iVar4 * 4;
    do {
      bVar1 = ('\x03' - ((byte)iVar4 & 3)) * '\x02';
      iVar3 = local_4 >> 3;
      pbVar6 = (byte *)((iVar5 >> 3) + param_1);
      local_4 = local_4 + -2;
      bVar2 = ('\x01' - ((byte)iVar4 & 1)) * '\x04';
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + -4;
      *pbVar6 = ~('\x0f' << (bVar2 & 0x1f)) & *pbVar6 |
                ((byte)((int)((uint)*(byte *)(iVar3 + param_1) & 3 << (bVar1 & 0x1f)) >>
                       (bVar1 & 0x1f)) & 0xf) << (bVar2 & 0x1f);
    } while (-1 < iVar4);
  }
  return;
}

