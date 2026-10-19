// Address: 0x0046d6bd
// Name: FUN_0046d6bd
// Category: MFC_CRT


undefined4 __thiscall FUN_0046d6bd(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)((int)this + 4);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0x80004002;
  }
  else {
    uVar4 = *(undefined4 *)((int)*(void **)((int)this + 8) + 8);
    iVar2 = *piVar1;
    uVar3 = FUN_00469cce(*(void **)((int)this + 8),param_1);
    uVar4 = (**(code **)(iVar2 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar3,uVar4);
  }
  return uVar4;
}

