// Address: 0x004729f2
// Name: CMemFile::~CMemFile
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMemFile::~CMemFile(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMemFile::~CMemFile(CMemFile *this)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x20) != 0) {
    Close(this);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  FUN_00453041((CFile *)this);
  return;
}

