// Address: 0x00402c30
// Name: FUN_00402c30
// Category: Launcher


void FUN_00402c30(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((int)(0xffffffff / ZEXT48(param_1)) == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_004bba58);
    }
  }
  FUN_00452728((size_t)pcVar1);
  return;
}

