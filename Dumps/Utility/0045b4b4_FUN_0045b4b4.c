// Address: 0x0045b4b4
// Name: FUN_0045b4b4
// Category: Utility


int __thiscall FUN_0045b4b4(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    iVar1 = SetBkMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    iVar1 = SetBkMode(*(HDC *)((int)this + 8),param_1);
  }
  return iVar1;
}

