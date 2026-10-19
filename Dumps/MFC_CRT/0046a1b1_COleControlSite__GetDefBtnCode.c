// Address: 0x0046a1b1
// Name: COleControlSite::GetDefBtnCode
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall COleControlSite::GetDefBtnCode(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall COleControlSite::GetDefBtnCode(COleControlSite *this)

{
  if ((*(ushort *)(this + 0x70) & 0x1000) != 0) {
    return (-(uint)((*(uint *)(this + 0x6c) & 1) != 0) & 0xfffffff0) + 0x20;
  }
  return 0;
}

