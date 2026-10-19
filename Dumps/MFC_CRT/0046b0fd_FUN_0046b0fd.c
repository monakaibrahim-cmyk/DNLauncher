// Address: 0x0046b0fd
// Name: FUN_0046b0fd
// Category: MFC_CRT


void __thiscall FUN_0046b0fd(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)*(void **)((int)this + 8) + 8);
  piVar1 = *(int **)this;
  iVar2 = *piVar1;
  uVar3 = FUN_00469cce(*(void **)((int)this + 8),param_1);
  (**(code **)(iVar2 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar3,uVar4);
  return;
}

