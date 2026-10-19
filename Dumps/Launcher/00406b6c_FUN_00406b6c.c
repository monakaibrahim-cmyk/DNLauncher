// Address: 0x00406b6c
// Name: FUN_00406b6c
// Category: Launcher


void FUN_00406b6c(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 *puVar3;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 != 0) {
    if (*(uint *)(unaff_EDI + 0x18) < 8) {
      _Src = (void *)(unaff_EDI + 4);
    }
    else {
      _Src = *(void **)(unaff_EDI + 4);
    }
    _memcpy_s(*(void **)(unaff_EBP + 0xc),unaff_ESI * 2 + 2,_Src,iVar1 * 2);
  }
  if (7 < *(uint *)(unaff_EDI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EDI + 4));
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  puVar3 = (undefined4 *)(unaff_EDI + 4);
  *(undefined2 *)puVar3 = 0;
  *puVar3 = puVar2;
  *(uint *)(unaff_EDI + 0x18) = unaff_ESI;
  *(int *)(unaff_EDI + 0x14) = iVar1;
  if (7 < unaff_ESI) {
    puVar3 = puVar2;
  }
  *(undefined2 *)((int)puVar3 + iVar1 * 2) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

