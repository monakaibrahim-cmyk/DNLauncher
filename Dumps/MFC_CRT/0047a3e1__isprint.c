// Address: 0x0047a3e1
// Name: _isprint
// Category: MFC_CRT


/* Library Function - Single Match
    _isprint
   
   Library: Visual Studio 2005 Release */

int __cdecl _isprint(int _C)

{
  int iVar1;
  
  if (DAT_004cb878 == 0) {
    return *(ushort *)(PTR_DAT_004c44e8 + _C * 2) & 0x157;
  }
  iVar1 = __isprint_l(_C,(_locale_t)0x0);
  return iVar1;
}

