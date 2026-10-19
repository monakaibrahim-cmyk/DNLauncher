// Address: 0x00431850
// Name: FUN_00431850
// Category: Utility


void __cdecl FUN_00431850(int param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  if ((in_EAX != (undefined4 *)0x0) && (iVar2 = 0x22, param_1 == 0x22)) {
    iVar1 = -(int)in_EAX;
    do {
      *in_EAX = *(undefined4 *)((int)&DAT_004cbef0 + iVar1 + (int)in_EAX);
      in_EAX[1] = *(undefined4 *)(iVar1 + 0x4cbef4 + (int)in_EAX);
      in_EAX[2] = *(undefined4 *)(iVar1 + 0x4cbef8 + (int)in_EAX);
      in_EAX[3] = *(undefined4 *)(iVar1 + 0x4cbefc + (int)in_EAX);
      in_EAX = in_EAX + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

