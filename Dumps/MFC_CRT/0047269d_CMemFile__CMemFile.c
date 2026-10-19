// Address: 0x0047269d
// Name: CMemFile::CMemFile
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMemFile::CMemFile(unsigned char *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

CMemFile * __thiscall CMemFile::CMemFile(CMemFile *this,uchar *param_1,uint param_2,uint param_3)

{
  CFile::CFile((CFile *)this);
  *(undefined ***)this = vftable;
  if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x24) = 0;
  *(uint *)(this + 0x1c) = ~-(uint)(param_3 != 0) & param_2;
  *(uint *)(this + 0x18) = param_2;
  *(uchar **)(this + 0x20) = param_1;
  return this;
}

