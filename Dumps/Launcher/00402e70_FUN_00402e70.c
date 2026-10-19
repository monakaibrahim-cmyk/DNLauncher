// Address: 0x00402e70
// Name: FUN_00402e70
// Category: Launcher


void FUN_00402e70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)GetLastError();
  if (0 < (int)puVar1) {
    puVar1 = (undefined4 *)((uint)puVar1 & 0xffff | 0x80070000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200(puVar1);
}

