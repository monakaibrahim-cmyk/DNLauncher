// Address: 0x0045b485
// Name: FUN_0045b485
// Category: Utility


COLORREF __thiscall FUN_0045b485(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 8),param_1);
  }
  return CVar1;
}

