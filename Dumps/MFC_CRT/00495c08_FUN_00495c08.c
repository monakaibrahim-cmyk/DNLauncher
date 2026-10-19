// Address: 0x00495c08
// Name: FUN_00495c08
// Category: MFC_CRT


void FUN_00495c08(void)

{
  int *in_EAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = ___delayLoadHelper2_8(&ImgDelayDescr_004bf00c.grAttrs,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00495c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

