// Address: 0x0040e33c
// Name: Catch_All@0040e33c
// Category: Launcher


void Catch_All_0040e33c(void)

{
  void *_Memory;
  int unaff_EBP;
  
  _Memory = *(void **)(unaff_EBP + -0x1c);
  FUN_0040ff40();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

