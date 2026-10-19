// Address: 0x00434120
// Name: FUN_00434120
// Category: Utility


void __fastcall FUN_00434120(undefined1 *param_1,int *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *this;
  int in_EAX;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  uint uVar5;
  
  this = param_3;
  param_3 = (void *)0x0;
  if (param_2[0x21] < 1) {
    uVar3 = in_EAX + 5;
  }
  else {
    if ((in_EAX != 0) && (*(int *)(*param_2 + 0x2c) == 2)) {
      FUN_00434730(param_1,param_2);
    }
    FUN_00433560(param_2 + 0x2c6);
    FUN_00433560(param_2 + 0x2c9);
    param_3 = (void *)FUN_00433d60();
    uVar5 = param_2[0x5aa] + 10U >> 3;
    uVar3 = param_2[0x5ab] + 10U >> 3;
    if (uVar5 < uVar3) goto LAB_00434199;
  }
  uVar5 = uVar3;
LAB_00434199:
  if ((uVar5 < in_EAX + 4U) || (param_1 == (undefined1 *)0x0)) {
    if ((param_2[0x22] == 4) || (uVar3 == uVar5)) {
      iVar2 = param_2[0x5af];
      iVar1 = (int)this + 2;
      if (iVar2 < 0xe) {
        *(ushort *)(param_2 + 0x5ae) =
             *(ushort *)(param_2 + 0x5ae) | (ushort)(iVar1 << ((byte)iVar2 & 0x1f));
        param_2[0x5af] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_2 + 0x5ae) =
             *(ushort *)(param_2 + 0x5ae) | (ushort)(iVar1 << ((byte)iVar2 & 0x1f));
        *(char *)(param_2[2] + param_2[5]) = (char)param_2[0x5ae];
        param_2[5] = param_2[5] + 1;
        *(undefined1 *)(param_2[5] + param_2[2]) = *(undefined1 *)((int)param_2 + 0x16b9);
        iVar2 = param_2[0x5af];
        param_2[5] = param_2[5] + 1;
        param_2[0x5af] = iVar2 + -0xd;
        *(ushort *)(param_2 + 0x5ae) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00434320(0x4ac9c0,0x4ace40);
      uVar4 = extraout_ECX_01;
    }
    else {
      iVar2 = param_2[0x5af];
      iVar1 = (int)this + 4;
      if (iVar2 < 0xe) {
        *(ushort *)(param_2 + 0x5ae) =
             *(ushort *)(param_2 + 0x5ae) | (ushort)(iVar1 << ((byte)iVar2 & 0x1f));
        param_2[0x5af] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_2 + 0x5ae) =
             *(ushort *)(param_2 + 0x5ae) | (ushort)(iVar1 << ((byte)iVar2 & 0x1f));
        *(char *)(param_2[2] + param_2[5]) = (char)param_2[0x5ae];
        param_2[5] = param_2[5] + 1;
        *(undefined1 *)(param_2[5] + param_2[2]) = *(undefined1 *)((int)param_2 + 0x16b9);
        iVar2 = param_2[0x5af];
        param_2[5] = param_2[5] + 1;
        param_2[0x5af] = iVar2 + -0xd;
        *(ushort *)(param_2 + 0x5ae) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00433e30(param_2[0x2c7] + 1,param_2[0x2ca] + 1,(int)param_3 + 1);
      FUN_00434320((int)(param_2 + 0x25),(int)(param_2 + 0x262));
      uVar4 = extraout_ECX_00;
    }
  }
  else {
    FUN_00434090(this,param_1,in_EAX);
    uVar4 = extraout_ECX;
  }
  FUN_00433180(uVar4,(int)param_2);
  if (this == (void *)0x0) {
    return;
  }
  FUN_00434820();
  return;
}

