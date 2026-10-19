// Address: 0x00436630
// Name: FUN_00436630
// Category: Utility


void __thiscall FUN_00436630(void *this,void *param_1,size_t param_2)

{
  bool bVar1;
  size_t _Size;
  
  _Size = FUN_00434f30(*(int *)((int)this + 0x14));
  if ((-1 < (int)param_2) && (bVar1 = (int)_Size <= (int)param_2, _Size = param_2, bVar1)) {
    _Size = FUN_00434f30(*(int *)((int)this + 0x14));
  }
  if (((*(void **)((int)this + 0x10) != (void *)0x0) && (param_1 != (void *)0x0)) &&
     (0 < (int)_Size)) {
    _memcpy(*(void **)((int)this + 0x10),param_1,_Size);
  }
  return;
}

