// Address: 0x00453f96
// Name: FUN_00453f96
// Category: Utility


undefined8 __fastcall FUN_00453f96(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x10);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return CONCAT44(iVar2,param_1 + 4);
}

