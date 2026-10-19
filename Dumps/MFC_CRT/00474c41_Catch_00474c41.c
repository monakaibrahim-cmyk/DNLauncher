// Address: 0x00474c41
// Name: Catch@00474c41
// Category: MFC_CRT


void Catch_00474c41(void)

{
  int iVar1;
  VARIANTARG *pvarg;
  int unaff_EBP;
  uint uVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  uVar2 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    pvarg = *(VARIANTARG **)(unaff_EBP + -0x1c);
    do {
      VariantClear(pvarg);
      uVar2 = uVar2 + 1;
      pvarg = pvarg + 1;
    } while (uVar2 < *(uint *)(iVar1 + 8));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}

