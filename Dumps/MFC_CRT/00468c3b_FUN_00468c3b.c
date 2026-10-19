// Address: 0x00468c3b
// Name: FUN_00468c3b
// Category: MFC_CRT


CChevronOwnerDrawMenu * __thiscall FUN_00468c3b(void *this,byte param_1)

{
  CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

