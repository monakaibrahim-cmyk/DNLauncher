// Address: 0x0046a19e
// Name: COleControlSite::IsDefaultButton
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall COleControlSite::IsDefaultButton(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::IsDefaultButton(COleControlSite *this)

{
  int iVar1;
  
  if (((*(ushort *)(this + 0x70) & 0x1000) == 0) || (iVar1 = 1, ((byte)this[0x6c] & 1) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

