// Address: 0x00477247
// Name: __fseek_nolock
// Category: MFC_CRT


/* Library Function - Single Match
    __fseek_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  
  if ((_File->_flag & 0x83U) == 0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    iVar2 = -1;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    if (_Origin == 1) {
      iVar2 = FUN_004795f9(_File);
      _Offset = _Offset + iVar2;
      _Origin = 0;
    }
    __flush(_File);
    uVar3 = _File->_flag;
    if ((char)uVar3 < '\0') {
      _File->_flag = uVar3 & 0xfffffffc;
    }
    else if ((((uVar3 & 1) != 0) && ((uVar3 & 8) != 0)) && ((uVar3 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    uVar3 = __fileno(_File);
    DVar4 = FUN_00483439(uVar3,_Offset,_Origin);
    iVar2 = (DVar4 != 0xffffffff) - 1;
  }
  return iVar2;
}

