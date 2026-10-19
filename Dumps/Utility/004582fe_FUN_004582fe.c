// Address: 0x004582fe
// Name: FUN_004582fe
// Category: Utility


undefined4 FUN_004582fe(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return *(undefined4 *)(param_1 + 0x14);
}

