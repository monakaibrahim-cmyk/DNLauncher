// Address: 0x00421120
// Name: FUN_00421120
// Category: Launcher


void __fastcall FUN_00421120(int param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498b2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_004cbcdc == (undefined4 *)0x0) {
    puVar1 = FUN_00452728(0xa4);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00410680(puVar1);
    }
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    DAT_004cbcdc = puVar1;
    puVar1[0x11] = uVar3;
    if (puVar1[2] == -1) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                            (LPTHREAD_START_ROUTINE)&lpStartAddress_00410670,puVar1 + 1,0,puVar1 + 3
                           );
      puVar1[2] = pvVar2;
      if (pvVar2 != (HANDLE)0x0) {
        puVar1[4] = 1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

