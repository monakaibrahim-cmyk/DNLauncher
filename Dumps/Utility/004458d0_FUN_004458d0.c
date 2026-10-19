// Address: 0x004458d0
// Name: FUN_004458d0
// Category: Utility


void __cdecl FUN_004458d0(int param_1,int param_2)

{
  FUN_00445510(param_1,param_2,0x7fff,-1);
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_0044d9b0(param_1,*(void **)(param_1 + 0x224));
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  FUN_004454d0(&param_2,0x120);
  return;
}

