// Address: 0x0046022b
// Name: COleSafeArray::GetOneDimSize
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall COleSafeArray::GetOneDimSize(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall COleSafeArray::GetOneDimSize(COleSafeArray *this)

{
  UINT UVar1;
  COleSafeArray *local_c;
  COleSafeArray *local_8;
  
  local_c = this;
  local_8 = this;
  UVar1 = SafeArrayGetDim(*(SAFEARRAY **)(this + 8));
  if (UVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  FID_conflict_GetUBound(this,1,(LONG *)&local_8);
  FID_conflict_GetUBound(this,1,(LONG *)&local_c);
  return (ulong)(local_8 + (1 - (int)local_c));
}

