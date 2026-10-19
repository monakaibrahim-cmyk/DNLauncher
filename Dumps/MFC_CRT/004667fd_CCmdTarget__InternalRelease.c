// Address: 0x004667fd
// Name: CCmdTarget::InternalRelease
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::InternalRelease(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CCmdTarget::InternalRelease(CCmdTarget *this)

{
  ulong uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x466809;
  if (*(int *)(this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = InterlockedDecrement((LONG *)(this + 4));
    if (uVar1 == 0) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(this + 0x1c));
      local_8 = 0;
      (**(code **)(*(int *)this + 0x10))();
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_00453641();
      }
    }
  }
  return uVar1;
}

