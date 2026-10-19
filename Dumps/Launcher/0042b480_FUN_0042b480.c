// Address: 0x0042b480
// Name: FUN_0042b480
// Category: Launcher


int * FUN_0042b480(int *param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  uint *unaff_ESI;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  FUN_0042b750(unaff_ESI);
  iVar1 = *(int *)(in_EAX + 4);
  if ((local_10 == 0) || (local_10 != in_EAX)) {
    FUN_00475b26();
  }
  if (local_c != iVar1) {
    if ((*(int *)(local_c + 0x14) <= (int)unaff_ESI[1]) &&
       ((*(int *)(local_c + 0x14) < (int)unaff_ESI[1] || (*(uint *)(local_c + 0x10) <= *unaff_ESI)))
       ) {
      piVar2 = &local_10;
      goto LAB_0042b4d9;
    }
  }
  local_4 = *(undefined4 *)(in_EAX + 4);
  piVar2 = &local_8;
LAB_0042b4d9:
  iVar1 = piVar2[1];
  *param_1 = *piVar2;
  param_1[1] = iVar1;
  return param_1;
}

