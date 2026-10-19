// Address: 0x00473163
// Name: FUN_00473163
// Category: MFC_CRT


void __fastcall FUN_00473163(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = CArray<CVariantBoolPair,CVariantBoolPair_const&>::vftable;
  if (param_1[1] == 0) {
    return;
  }
  iVar2 = 0;
  if (0 < (int)param_1[2]) {
    iVar1 = 0;
    do {
      FUN_00472e1e((void *)(param_1[1] + iVar1),0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < (int)param_1[2]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}

