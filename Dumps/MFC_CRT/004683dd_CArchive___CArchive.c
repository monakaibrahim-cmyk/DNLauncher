// Address: 0x004683dd
// Name: CArchive::~CArchive
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CArchive::~CArchive(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::~CArchive(CArchive *this)

{
  if ((*(int *)(this + 0x24) != 0) && (((byte)this[0x18] & 2) == 0)) {
    Close(this);
  }
  FUN_00467eb5((int *)this);
  FUN_004031b0((undefined4 *)(*(int *)(this + 0x14) + -0x10));
  return;
}

