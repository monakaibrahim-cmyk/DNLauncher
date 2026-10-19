// Address: 0x0040e062
// Name: Catch_All@0040e062
// Category: Launcher


void Catch_All_0040e062(void)

{
  void *_Memory;
  int unaff_EBP;
  
  _Memory = *(void **)(unaff_EBP + -0x1c);
  FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

