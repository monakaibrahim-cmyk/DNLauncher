// Address: 0x00434090
// Name: FUN_00434090
// Category: Utility


void __thiscall FUN_00434090(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x16bc);
  if (0xd < iVar1) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)((int)this << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)this >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
    *(int *)(in_EAX + 0x16bc) = *(int *)(in_EAX + 0x16bc) + -0xd;
    FUN_004348a0(param_2,param_1);
    return;
  }
  *(ushort *)(in_EAX + 0x16b8) =
       *(ushort *)(in_EAX + 0x16b8) | (ushort)((int)this << ((byte)iVar1 & 0x1f));
  *(int *)(in_EAX + 0x16bc) = iVar1 + 3;
  FUN_004348a0(param_2,param_1);
  return;
}

