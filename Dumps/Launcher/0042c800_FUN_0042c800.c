// Address: 0x0042c800
// Name: FUN_0042c800
// Category: Launcher


undefined4 FUN_0042c800(int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  uchar *_Str2;
  uint in_EAX;
  uchar *_Str1;
  int iVar3;
  int iVar4;
  int local_c [3];
  
  _Str2 = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)**(int **)(param_1 + 0xc);
    if (piVar1 == *(int **)(param_1 + 0xc)) {
      FUN_00475b26();
    }
    iVar2 = piVar1[2];
    if (*(uint *)(iVar2 + 0x38) < 0x10) {
      _Str1 = (uchar *)(iVar2 + 0x24);
    }
    else {
      _Str1 = *(uchar **)(iVar2 + 0x24);
    }
    iVar3 = __mbscmp(_Str1,_Str2);
    iVar4 = iVar2;
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 4);
    }
    param_2 = (uchar *)FUN_0042d8b0();
    in_EAX = 0;
    if (param_2 != (uchar *)0x0) {
      if (iVar2 == iVar4) {
        FUN_0042c950(local_c,param_1 + 8,(int *)**(undefined4 **)(param_1 + 0xc));
        iVar2 = **(int **)(param_1 + 0xc);
        iVar4 = FUN_0042cb10(iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
        FUN_0042cb50(param_1 + 8);
        *(int *)(iVar2 + 4) = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
      }
      *(uchar **)(param_1 + 4) = param_2;
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

