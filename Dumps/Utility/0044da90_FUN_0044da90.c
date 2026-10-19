// Address: 0x0044da90
// Name: FUN_0044da90
// Category: Utility


bool __cdecl FUN_0044da90(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) == 0) goto LAB_0044dac0;
  }
  else if ((param_1[0x1b] & 0x300U) != 0x300) goto LAB_0044dac0;
  bVar1 = false;
LAB_0044dac0:
  FUN_0044d680(param_1);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_0044da10((undefined1 *)&param_1);
  return iVar3 != piVar2[0x44];
}

