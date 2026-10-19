// Address: 0x0047a1ee
// Name: _isdigit
// Category: MFC_CRT


/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_004cb878 == 0) {
    return (byte)PTR_DAT_004c44e8[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}

