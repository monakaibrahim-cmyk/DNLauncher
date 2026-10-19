// Address: 0x00473c88
// Name: CEnumArray::OnClone
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CEnumArray * __thiscall CEnumArray::OnClone(void)
   
   Library: Visual Studio 2005 Release */

CEnumArray * __thiscall CEnumArray::OnClone(CEnumArray *this)

{
  CEnumArray *this_00;
  CEnumArray *pCVar1;
  
  this_00 = FUN_00452728(0x3c);
  pCVar1 = (CEnumArray *)0x0;
  if (this_00 != (CEnumArray *)0x0) {
    pCVar1 = (CEnumArray *)
             CEnumArray(this_00,*(uint *)(this + 0x20),*(void **)(this + 0x28),
                        *(uint *)(this + 0x30),0);
  }
  *(undefined4 *)(pCVar1 + 0x2c) = *(undefined4 *)(this + 0x2c);
  return pCVar1;
}

