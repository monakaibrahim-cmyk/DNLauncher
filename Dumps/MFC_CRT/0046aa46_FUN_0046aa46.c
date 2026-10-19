// Address: 0x0046aa46
// Name: FUN_0046aa46
// Category: MFC_CRT


void __thiscall FUN_0046aa46(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar1 = (**(code **)(*(int *)this + 0x74))(this,0xfffffdfa,8,param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x74))(this,0xfffffdfb,8,param_1);
  }
  return;
}

