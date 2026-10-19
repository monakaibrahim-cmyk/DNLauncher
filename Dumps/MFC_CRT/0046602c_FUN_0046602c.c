// Address: 0x0046602c
// Name: FUN_0046602c
// Category: MFC_CRT


void __thiscall FUN_0046602c(void *this,undefined4 param_1,LPRECT param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x110))(0x40a,param_1);
  if (iVar1 == 0) {
    SetRectEmpty(param_2);
  }
  return;
}

