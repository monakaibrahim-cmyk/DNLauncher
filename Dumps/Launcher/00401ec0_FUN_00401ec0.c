// Address: 0x00401ec0
// Name: FUN_00401ec0
// Category: Launcher


undefined4 * __fastcall FUN_00401ec0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar2 = unaff_EDI;
  for (iVar1 = unaff_ESI; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  return unaff_EDI + unaff_ESI;
}

