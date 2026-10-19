// Address: 0x00402f30
// Name: FUN_00402f30
// Category: Launcher


uint __thiscall FUN_00402f30(void *this,uint param_1)

{
  uint in_EAX;
  uint uVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && ((param_1 & 0xffff0000) == 0)) {
    pHVar2 = (HMODULE)FUN_00452b55();
    uVar3 = 0;
    if (pHVar2 != (HMODULE)0x0) {
      uVar3 = FUN_00402fa0(this,pHVar2,param_1 & 0xffff);
    }
    uVar1 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar1;
}

