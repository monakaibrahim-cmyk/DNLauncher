// Address: 0x0045bef1
// Name: FUN_0045bef1
// Category: Utility


void __thiscall FUN_0045bef1(void *this,int param_1)

{
  HBITMAP hbm;
  HBRUSH pHVar1;
  
  hbm = (HBITMAP)0x0;
  if (param_1 != 0) {
    hbm = *(HBITMAP *)(param_1 + 4);
  }
  pHVar1 = CreatePatternBrush(hbm);
  Attach(this,(int)pHVar1);
  return;
}

