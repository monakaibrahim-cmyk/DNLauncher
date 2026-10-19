// Address: 0x0041c610
// Name: FUN_0041c610
// Category: Launcher


void __thiscall FUN_0041c610(void *this,int param_1)

{
  HDC pHVar1;
  
  if (param_1 == 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(this,pHVar1);
    return;
  }
  pHVar1 = CreateCompatibleDC(*(HDC *)(param_1 + 4));
  CDC::Attach(this,pHVar1);
  return;
}

