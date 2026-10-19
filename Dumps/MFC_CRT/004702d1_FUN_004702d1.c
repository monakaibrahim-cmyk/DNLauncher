// Address: 0x004702d1
// Name: FUN_004702d1
// Category: MFC_CRT


bool __thiscall FUN_004702d1(void *this,int param_1)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = GetStockObject(param_1);
  *(HGDIOBJ *)((int)this + 4) = pvVar1;
  return pvVar1 != (HGDIOBJ)0x0;
}

