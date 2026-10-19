// Address: 0x00473978
// Name: FUN_00473978
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00473978(CCmdTarget *param_1)

{
  *(undefined ***)param_1 = CEnumArray::vftable;
  if (*(CCmdTarget **)(param_1 + 0x24) != (CCmdTarget *)0x0) {
    CCmdTarget::InternalRelease(*(CCmdTarget **)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  CCmdTarget::~CCmdTarget(param_1);
  return;
}

