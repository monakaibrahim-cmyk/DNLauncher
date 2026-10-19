// Address: 0x00452af1
// Name: FUN_00452af1
// Category: Utility


uint FUN_00452af1(uint param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  ushort *puVar3;
  uint uVar4;
  
  if ((param_2 != (undefined2 *)0x0) && (param_3 != 0)) {
    pAVar2 = AfxGetModuleState();
    puVar3 = (ushort *)FUN_00403070(*(HMODULE *)(pAVar2 + 0xc),param_1);
    if (puVar3 == (ushort *)0x0) {
      *param_2 = 0;
      uVar4 = 0;
    }
    else {
      uVar1 = param_3 - 1;
      uVar4 = (uint)*puVar3;
      if (uVar1 < *puVar3) {
        uVar4 = uVar1;
      }
      FUN_004527b0(param_2,uVar1 * 2,puVar3 + 1,uVar4 * 2);
      param_2[uVar4] = 0;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

