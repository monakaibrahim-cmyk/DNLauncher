// Address: 0x0047a2e5
// Name: _isspace
// Category: MFC_CRT


/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_004cb878 == 0) {
    return (byte)PTR_DAT_004c44e8[_C * 2] & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}

