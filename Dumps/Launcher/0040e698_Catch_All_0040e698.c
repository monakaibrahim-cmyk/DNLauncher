// Address: 0x0040e698
// Name: Catch_All@0040e698
// Category: Launcher


void Catch_All_0040e698(void)

{
  void *_Memory;
  int unaff_EBP;
  
  _Memory = *(void **)(unaff_EBP + -0x18);
  FUN_0040e4a0();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

