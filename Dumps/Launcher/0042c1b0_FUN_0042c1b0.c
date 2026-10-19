// Address: 0x0042c1b0
// Name: FUN_0042c1b0
// Category: Launcher


void __fastcall FUN_0042c1b0(uint param_1)

{
  char *local_10;
  undefined **local_c [3];
  
  if ((uint)(0xffffffff / (ulonglong)param_1) < 0x28) {
    local_10 = (char *)0x0;
    std::exception::exception((exception *)local_c,&local_10);
    local_c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_004bba58);
  }
  FUN_00452728(param_1 * 0x28);
  return;
}

