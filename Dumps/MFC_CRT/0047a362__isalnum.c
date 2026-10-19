// Address: 0x0047a362
// Name: _isalnum
// Category: MFC_CRT


/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_004cb878 == 0) {
    return *(ushort *)(PTR_DAT_004c44e8 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}

