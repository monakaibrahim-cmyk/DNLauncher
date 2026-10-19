// Address: 0x0047a174
// Name: _isalpha
// Category: MFC_CRT


/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_004cb878 == 0) {
    return *(ushort *)(PTR_DAT_004c44e8 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}

