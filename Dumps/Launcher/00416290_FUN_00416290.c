// Address: 0x00416290
// Name: FUN_00416290
// Category: Launcher


undefined4 * __thiscall
FUN_00416290(void *this,undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497e8b;
  local_c = ExceptionList;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_00452a31((int)this);
  *(undefined ***)this = CFileException::vftable;
  piVar3 = (int *)FUN_00453ed1();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))(uVar2);
  *(int *)((int)this + 0x10) = iVar4 + 0x10;
  uStack_4 = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 8) = param_1;
  if (param_3 == (short *)0x0) {
    iVar4 = 0;
  }
  else {
    psVar5 = param_3;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar4 = (int)psVar5 - (int)(param_3 + 1) >> 1;
  }
  FUN_00403520((int *)((int)this + 0x10),param_3,iVar4);
  ExceptionList = local_c;
  return this;
}

